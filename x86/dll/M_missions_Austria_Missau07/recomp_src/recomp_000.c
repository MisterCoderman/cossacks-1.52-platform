#include "recomp.h"

/* FUN_10001000 @ 0x10361000 (20 bytes, 6 insns) */
void f_10361000(void) {
  FTRACE(0x10361000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361000 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10361004 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10361005 jne 0x1036100c */
  if (!C.zf) goto L_1036100c;
  /* 10361007 call 0x10361020 */
  push32(0x1036100cu); f_10361020();
L_1036100c:;
  /* 1036100c mov eax, 1 */
  EAX = (0x1u);
  /* 10361011 ret 0xc */
  ESPCHK(0x10361000u, _esp0);
  ESP += 16; return;
}

/* OnInit @ 0x10361020 (472 bytes, 123 insns) */
void f_10361020(void) {
  FTRACE(0x10361020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361020 push esi */
  push32((uint32_t)(ESI));
  /* 10361021 mov esi, dword ptr [0x10365114] */
  ESI = (r32((uint32_t)(0x10365114)));
  /* 10361027 push 0x103660e4 */
  push32((uint32_t)(0x103660e4u));
  /* 1036102c push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 10361031 call esi */
  call_ind((uint32_t)(ESI), 0x10361033u);
  /* 10361033 push 0x103660e0 */
  push32((uint32_t)(0x103660e0u));
  /* 10361038 push 0x10366458 */
  push32((uint32_t)(0x10366458u));
  /* 1036103d call esi */
  call_ind((uint32_t)(ESI), 0x1036103fu);
  /* 1036103f push 0x103660dc */
  push32((uint32_t)(0x103660dcu));
  /* 10361044 push 0x10366460 */
  push32((uint32_t)(0x10366460u));
  /* 10361049 call esi */
  call_ind((uint32_t)(ESI), 0x1036104bu);
  /* 1036104b push 0x103660d8 */
  push32((uint32_t)(0x103660d8u));
  /* 10361050 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 10361055 call esi */
  call_ind((uint32_t)(ESI), 0x10361057u);
  /* 10361057 push 0x103660d4 */
  push32((uint32_t)(0x103660d4u));
  /* 1036105c push 0x10366470 */
  push32((uint32_t)(0x10366470u));
  /* 10361061 call esi */
  call_ind((uint32_t)(ESI), 0x10361063u);
  /* 10361063 push 0x103660d0 */
  push32((uint32_t)(0x103660d0u));
  /* 10361068 push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 1036106d call esi */
  call_ind((uint32_t)(ESI), 0x1036106fu);
  /* 1036106f push 0x103660cc */
  push32((uint32_t)(0x103660ccu));
  /* 10361074 push 0x10366480 */
  push32((uint32_t)(0x10366480u));
  /* 10361079 call esi */
  call_ind((uint32_t)(ESI), 0x1036107bu);
  /* 1036107b push 0x103660c8 */
  push32((uint32_t)(0x103660c8u));
  /* 10361080 push 0x10366488 */
  push32((uint32_t)(0x10366488u));
  /* 10361085 call esi */
  call_ind((uint32_t)(ESI), 0x10361087u);
  /* 10361087 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036108a push 0x103660c4 */
  push32((uint32_t)(0x103660c4u));
  /* 1036108f push 0x10366490 */
  push32((uint32_t)(0x10366490u));
  /* 10361094 call esi */
  call_ind((uint32_t)(ESI), 0x10361096u);
  /* 10361096 push 0x103660c0 */
  push32((uint32_t)(0x103660c0u));
  /* 1036109b push 0x103664a0 */
  push32((uint32_t)(0x103664a0u));
  /* 103610a0 call esi */
  call_ind((uint32_t)(ESI), 0x103610a2u);
  /* 103610a2 push 0x103660bc */
  push32((uint32_t)(0x103660bcu));
  /* 103610a7 push 0x103664a8 */
  push32((uint32_t)(0x103664a8u));
  /* 103610ac call esi */
  call_ind((uint32_t)(ESI), 0x103610aeu);
  /* 103610ae push 0x103660b8 */
  push32((uint32_t)(0x103660b8u));
  /* 103610b3 push 0x103664b8 */
  push32((uint32_t)(0x103664b8u));
  /* 103610b8 call esi */
  call_ind((uint32_t)(ESI), 0x103610bau);
  /* 103610ba mov esi, dword ptr [0x10365118] */
  ESI = (r32((uint32_t)(0x10365118)));
  /* 103610c0 push 0x103660b4 */
  push32((uint32_t)(0x103660b4u));
  /* 103610c5 push 0x103664c0 */
  push32((uint32_t)(0x103664c0u));
  /* 103610ca call esi */
  call_ind((uint32_t)(ESI), 0x103610ccu);
  /* 103610cc push 0x103660b0 */
  push32((uint32_t)(0x103660b0u));
  /* 103610d1 push 0x103664c8 */
  push32((uint32_t)(0x103664c8u));
  /* 103610d6 call esi */
  call_ind((uint32_t)(ESI), 0x103610d8u);
  /* 103610d8 push 0x103660ac */
  push32((uint32_t)(0x103660acu));
  /* 103610dd push 0x103664d0 */
  push32((uint32_t)(0x103664d0u));
  /* 103610e2 call esi */
  call_ind((uint32_t)(ESI), 0x103610e4u);
  /* 103610e4 push 0x103660a8 */
  push32((uint32_t)(0x103660a8u));
  /* 103610e9 push 0x103664d8 */
  push32((uint32_t)(0x103664d8u));
  /* 103610ee call esi */
  call_ind((uint32_t)(ESI), 0x103610f0u);
  /* 103610f0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103610f3 push 0x103660a4 */
  push32((uint32_t)(0x103660a4u));
  /* 103610f8 push 0x103664e0 */
  push32((uint32_t)(0x103664e0u));
  /* 103610fd call esi */
  call_ind((uint32_t)(ESI), 0x103610ffu);
  /* 103610ff push 0x103660a0 */
  push32((uint32_t)(0x103660a0u));
  /* 10361104 push 0x103664e8 */
  push32((uint32_t)(0x103664e8u));
  /* 10361109 call esi */
  call_ind((uint32_t)(ESI), 0x1036110bu);
  /* 1036110b push 0x1036609c */
  push32((uint32_t)(0x1036609cu));
  /* 10361110 push 0x103664f0 */
  push32((uint32_t)(0x103664f0u));
  /* 10361115 call esi */
  call_ind((uint32_t)(ESI), 0x10361117u);
  /* 10361117 push 0x10366098 */
  push32((uint32_t)(0x10366098u));
  /* 1036111c push 0x103664f8 */
  push32((uint32_t)(0x103664f8u));
  /* 10361121 call esi */
  call_ind((uint32_t)(ESI), 0x10361123u);
  /* 10361123 push 0x10366094 */
  push32((uint32_t)(0x10366094u));
  /* 10361128 push 0x10366500 */
  push32((uint32_t)(0x10366500u));
  /* 1036112d call esi */
  call_ind((uint32_t)(ESI), 0x1036112fu);
  /* 1036112f mov esi, dword ptr [0x1036511c] */
  ESI = (r32((uint32_t)(0x1036511c)));
  /* 10361135 push 8 */
  push32((uint32_t)(0x8u));
  /* 10361137 push 0x10366528 */
  push32((uint32_t)(0x10366528u));
  /* 1036113c call esi */
  call_ind((uint32_t)(ESI), 0x1036113eu);
  /* 1036113e push 8 */
  push32((uint32_t)(0x8u));
  /* 10361140 push 0x10366530 */
  push32((uint32_t)(0x10366530u));
  /* 10361145 call esi */
  call_ind((uint32_t)(ESI), 0x10361147u);
  /* 10361147 push 8 */
  push32((uint32_t)(0x8u));
  /* 10361149 push 0x10366538 */
  push32((uint32_t)(0x10366538u));
  /* 1036114e call esi */
  call_ind((uint32_t)(ESI), 0x10361150u);
  /* 10361150 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361153 push 8 */
  push32((uint32_t)(0x8u));
  /* 10361155 push 0x103664b0 */
  push32((uint32_t)(0x103664b0u));
  /* 1036115a call esi */
  call_ind((uint32_t)(ESI), 0x1036115cu);
  /* 1036115c push 0x10366498 */
  push32((uint32_t)(0x10366498u));
  /* 10361161 call dword ptr [0x10365120] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365120))), 0x10361167u);
  /* 10361167 mov esi, dword ptr [0x10365124] */
  ESI = (r32((uint32_t)(0x10365124)));
  /* 1036116d push 0x10366084 */
  push32((uint32_t)(0x10366084u));
  /* 10361172 push 0x10366508 */
  push32((uint32_t)(0x10366508u));
  /* 10361177 call esi */
  call_ind((uint32_t)(ESI), 0x10361179u);
  /* 10361179 push 0x10366074 */
  push32((uint32_t)(0x10366074u));
  /* 1036117e push 0x10366440 */
  push32((uint32_t)(0x10366440u));
  /* 10361183 call esi */
  call_ind((uint32_t)(ESI), 0x10361185u);
  /* 10361185 push 0x10366068 */
  push32((uint32_t)(0x10366068u));
  /* 1036118a push 0x10366448 */
  push32((uint32_t)(0x10366448u));
  /* 1036118f call esi */
  call_ind((uint32_t)(ESI), 0x10361191u);
  /* 10361191 mov esi, dword ptr [0x10365128] */
  ESI = (r32((uint32_t)(0x10365128)));
  /* 10361197 push 0x1036605c */
  push32((uint32_t)(0x1036605cu));
  /* 1036119c push 0x10366518 */
  push32((uint32_t)(0x10366518u));
  /* 103611a1 call esi */
  call_ind((uint32_t)(ESI), 0x103611a3u);
  /* 103611a3 push 0x10366050 */
  push32((uint32_t)(0x10366050u));
  /* 103611a8 push 0x10366510 */
  push32((uint32_t)(0x10366510u));
  /* 103611ad call esi */
  call_ind((uint32_t)(ESI), 0x103611afu);
  /* 103611af push 0x10366044 */
  push32((uint32_t)(0x10366044u));
  /* 103611b4 push 0x10366520 */
  push32((uint32_t)(0x10366520u));
  /* 103611b9 call esi */
  call_ind((uint32_t)(ESI), 0x103611bbu);
  /* 103611bb push 0x10366038 */
  push32((uint32_t)(0x10366038u));
  /* 103611c0 push 0x10366540 */
  push32((uint32_t)(0x10366540u));
  /* 103611c5 call esi */
  call_ind((uint32_t)(ESI), 0x103611c7u);
  /* 103611c7 mov esi, dword ptr [0x1036512c] */
  ESI = (r32((uint32_t)(0x1036512c)));
  /* 103611cd add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103611d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103611d2 push 0x10366440 */
  push32((uint32_t)(0x10366440u));
  /* 103611d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103611d9 call esi */
  call_ind((uint32_t)(ESI), 0x103611dbu);
  /* 103611db push 0 */
  push32((uint32_t)(0x0u));
  /* 103611dd push 0x10366448 */
  push32((uint32_t)(0x10366448u));
  /* 103611e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103611e4 call esi */
  call_ind((uint32_t)(ESI), 0x103611e6u);
  /* 103611e6 push 0x10366030 */
  push32((uint32_t)(0x10366030u));
  /* 103611eb push 1 */
  push32((uint32_t)(0x1u));
  /* 103611ed call dword ptr [0x10365130] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365130))), 0x103611f3u);
  /* 103611f3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103611f6 pop esi */
  ESI = (pop32());
  /* 103611f7 ret  */
  ESPCHK(0x10361020u, _esp0);
  ESP += 4; return;
}

/* ProcessScenary @ 0x10361200 (2491 bytes, 776 insns) [1 switch table(s)] */
void f_10361200(void) {
  FTRACE(0x10361200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361200 push ecx */
  push32((uint32_t)(ECX));
  /* 10361201 push ebx */
  push32((uint32_t)(EBX));
  /* 10361202 push ebp */
  push32((uint32_t)(EBP));
  /* 10361203 push esi */
  push32((uint32_t)(ESI));
  /* 10361204 push edi */
  push32((uint32_t)(EDI));
  /* 10361205 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10361207 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x1036120du);
  /* 1036120d mov ebp, dword ptr [0x103650b4] */
  EBP = (r32((uint32_t)(0x103650b4)));
  /* 10361213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361216 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361218 je 0x10361370 */
  if (C.zf) goto L_10361370;
  /* 1036121e push 0 */
  push32((uint32_t)(0x0u));
  /* 10361220 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10361222 call dword ptr [0x103650b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b8))), 0x10361228u);
  /* 10361228 mov esi, dword ptr [0x103650bc] */
  ESI = (r32((uint32_t)(0x103650bc)));
  /* 1036122e push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10361233 push 3 */
  push32((uint32_t)(0x3u));
  /* 10361235 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361237 call esi */
  call_ind((uint32_t)(ESI), 0x10361239u);
  /* 10361239 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1036123e push 1 */
  push32((uint32_t)(0x1u));
  /* 10361240 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361242 call esi */
  call_ind((uint32_t)(ESI), 0x10361244u);
  /* 10361244 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1036124a call esi */
  call_ind((uint32_t)(ESI), 0x1036124cu);
  /* 1036124c push 0 */
  push32((uint32_t)(0x0u));
  /* 1036124e push 2 */
  push32((uint32_t)(0x2u));
  /* 10361250 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361252 call esi */
  call_ind((uint32_t)(ESI), 0x10361254u);
  /* 10361254 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10361259 push 5 */
  push32((uint32_t)(0x5u));
  /* 1036125b push 0 */
  push32((uint32_t)(0x0u));
  /* 1036125d call esi */
  call_ind((uint32_t)(ESI), 0x1036125fu);
  /* 1036125f add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361262 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10361267 push 4 */
  push32((uint32_t)(0x4u));
  /* 10361269 push 0 */
  push32((uint32_t)(0x0u));
  /* 1036126b call esi */
  call_ind((uint32_t)(ESI), 0x1036126du);
  /* 1036126d push 0x13d620 */
  push32((uint32_t)(0x13d620u));
  /* 10361272 push 3 */
  push32((uint32_t)(0x3u));
  /* 10361274 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361276 call esi */
  call_ind((uint32_t)(ESI), 0x10361278u);
  /* 10361278 push 0x1312d0 */
  push32((uint32_t)(0x1312d0u));
  /* 1036127d push 1 */
  push32((uint32_t)(0x1u));
  /* 1036127f push 1 */
  push32((uint32_t)(0x1u));
  /* 10361281 call esi */
  call_ind((uint32_t)(ESI), 0x10361283u);
  /* 10361283 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361285 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361287 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361289 call esi */
  call_ind((uint32_t)(ESI), 0x1036128bu);
  /* 1036128b push 0 */
  push32((uint32_t)(0x0u));
  /* 1036128d push 2 */
  push32((uint32_t)(0x2u));
  /* 1036128f push 1 */
  push32((uint32_t)(0x1u));
  /* 10361291 call esi */
  call_ind((uint32_t)(ESI), 0x10361293u);
  /* 10361293 push 0xe4e1c0 */
  push32((uint32_t)(0xe4e1c0u));
  /* 10361298 push 5 */
  push32((uint32_t)(0x5u));
  /* 1036129a push 1 */
  push32((uint32_t)(0x1u));
  /* 1036129c call esi */
  call_ind((uint32_t)(ESI), 0x1036129eu);
  /* 1036129e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103612a1 push 0xe4e1c0 */
  push32((uint32_t)(0xe4e1c0u));
  /* 103612a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 103612a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103612aa call esi */
  call_ind((uint32_t)(ESI), 0x103612acu);
  /* 103612ac mov ebx, dword ptr [0x103650c0] */
  EBX = (r32((uint32_t)(0x103650c0)));
  /* 103612b2 push 0x10366110 */
  push32((uint32_t)(0x10366110u));
  /* 103612b7 call ebx */
  call_ind((uint32_t)(EBX), 0x103612b9u);
  /* 103612b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103612bb call dword ptr [0x103650c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650c4))), 0x103612c1u);
  /* 103612c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103612c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103612c6 jne 0x1036130e */
  if (!C.zf) goto L_1036130e;
  /* 103612c8 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 103612cd push 3 */
  push32((uint32_t)(0x3u));
  /* 103612cf push eax */
  push32((uint32_t)(EAX));
  /* 103612d0 call esi */
  call_ind((uint32_t)(ESI), 0x103612d2u);
  /* 103612d2 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 103612d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103612d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103612db call esi */
  call_ind((uint32_t)(ESI), 0x103612ddu);
  /* 103612dd push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 103612e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 103612e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103612e6 call esi */
  call_ind((uint32_t)(ESI), 0x103612e8u);
  /* 103612e8 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 103612ed push 4 */
  push32((uint32_t)(0x4u));
  /* 103612ef push 0 */
  push32((uint32_t)(0x0u));
  /* 103612f1 call esi */
  call_ind((uint32_t)(ESI), 0x103612f3u);
  /* 103612f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103612f5 push 0x103664b8 */
  push32((uint32_t)(0x103664b8u));
  /* 103612fa call ebp */
  call_ind((uint32_t)(EBP), 0x103612fcu);
  /* 103612fc push 1 */
  push32((uint32_t)(0x1u));
  /* 103612fe call dword ptr [0x103650c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650c8))), 0x10361304u);
  /* 10361304 push 0x10366108 */
  push32((uint32_t)(0x10366108u));
  /* 10361309 call ebx */
  call_ind((uint32_t)(EBX), 0x1036130bu);
  /* 1036130b add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1036130e:;
  /* 1036130e push 0x10366490 */
  push32((uint32_t)(0x10366490u));
  /* 10361313 call dword ptr [0x103650cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650cc))), 0x10361319u);
  /* 10361319 push 0x103664a0 */
  push32((uint32_t)(0x103664a0u));
  /* 1036131e call dword ptr [0x103650d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650d0))), 0x10361324u);
  /* 10361324 push 0x103664a8 */
  push32((uint32_t)(0x103664a8u));
  /* 10361329 call dword ptr [0x103650d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650d4))), 0x1036132fu);
  /* 1036132f push 0 */
  push32((uint32_t)(0x0u));
  /* 10361331 push 0x10366460 */
  push32((uint32_t)(0x10366460u));
  /* 10361336 call ebp */
  call_ind((uint32_t)(EBP), 0x10361338u);
  /* 10361338 mov edi, dword ptr [0x103650d8] */
  EDI = (r32((uint32_t)(0x103650d8)));
  /* 1036133e push 0 */
  push32((uint32_t)(0x0u));
  /* 10361340 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10361342 push 0x103664c0 */
  push32((uint32_t)(0x103664c0u));
  /* 10361347 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361349 call edi */
  call_ind((uint32_t)(EDI), 0x1036134bu);
  /* 1036134b push 0 */
  push32((uint32_t)(0x0u));
  /* 1036134d push 0x10366488 */
  push32((uint32_t)(0x10366488u));
  /* 10361352 call ebp */
  call_ind((uint32_t)(EBP), 0x10361354u);
  /* 10361354 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361356 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10361358 push 0x103664e0 */
  push32((uint32_t)(0x103664e0u));
  /* 1036135d push 1 */
  push32((uint32_t)(0x1u));
  /* 1036135f call edi */
  call_ind((uint32_t)(EDI), 0x10361361u);
  /* 10361361 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10361363 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361365 call dword ptr [0x103650dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650dc))), 0x1036136bu);
  /* 1036136b add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036136e jmp 0x1036137c */
  goto L_1036137c;
L_10361370:;
  /* 10361370 mov edi, dword ptr [0x103650d8] */
  EDI = (r32((uint32_t)(0x103650d8)));
  /* 10361376 mov ebx, dword ptr [0x103650c0] */
  EBX = (r32((uint32_t)(0x103650c0)));
L_1036137c:;
  /* 1036137c push 1 */
  push32((uint32_t)(0x1u));
  /* 1036137e call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x10361384u);
  /* 10361384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361387 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361389 je 0x103613dd */
  if (C.zf) goto L_103613dd;
  /* 1036138b mov esi, dword ptr [0x103650e0] */
  ESI = (r32((uint32_t)(0x103650e0)));
  /* 10361391 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361393 push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 10361398 call esi */
  call_ind((uint32_t)(ESI), 0x1036139au);
  /* 1036139a mov edx, eax */
  EDX = (EAX);
  /* 1036139c push 1 */
  push32((uint32_t)(0x1u));
  /* 1036139e push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 103613a3 mov dword ptr [esp + 0x20], edx */
  w32((uint32_t)(ESP + 0x20), (EDX));
  /* 103613a7 call esi */
  call_ind((uint32_t)(ESI), 0x103613a9u);
  /* 103613a9 mov esi, dword ptr [esp + 0x20] */
  ESI = (r32((uint32_t)(ESP + 0x20)));
  /* 103613ad push 1 */
  push32((uint32_t)(0x1u));
  /* 103613af push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 103613b4 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103613b6 call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x103613bcu);
  /* 103613bc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103613bf add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103613c1 jne 0x103613dd */
  if (!C.zf) goto L_103613dd;
  /* 103613c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103613c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103613c7 call dword ptr [0x103650b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b8))), 0x103613cdu);
  /* 103613cd push 0x10366100 */
  push32((uint32_t)(0x10366100u));
  /* 103613d2 call ebx */
  call_ind((uint32_t)(EBX), 0x103613d4u);
  /* 103613d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103613d7 call dword ptr [0x103650e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e4))), 0x103613ddu);
L_103613dd:;
  /* 103613dd push 2 */
  push32((uint32_t)(0x2u));
  /* 103613df call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x103613e5u);
  /* 103613e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103613e8 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103613ea je 0x10361445 */
  if (C.zf) goto L_10361445;
  /* 103613ec mov esi, dword ptr [0x103650e8] */
  ESI = (r32((uint32_t)(0x103650e8)));
  /* 103613f2 push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 103613f7 push 0x103664d8 */
  push32((uint32_t)(0x103664d8u));
  /* 103613fc call esi */
  call_ind((uint32_t)(ESI), 0x103613feu);
  /* 103613fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361403 jg 0x1036142b */
  if ((!C.zf&&C.sf==C.of)) goto L_1036142b;
  /* 10361405 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 1036140a push 0x103664f8 */
  push32((uint32_t)(0x103664f8u));
  /* 1036140f call esi */
  call_ind((uint32_t)(ESI), 0x10361411u);
  /* 10361411 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361414 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361416 jg 0x1036142b */
  if ((!C.zf&&C.sf==C.of)) goto L_1036142b;
  /* 10361418 push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 1036141d push 0x103664f8 */
  push32((uint32_t)(0x103664f8u));
  /* 10361422 call esi */
  call_ind((uint32_t)(ESI), 0x10361424u);
  /* 10361424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361429 jle 0x10361445 */
  if ((C.zf||C.sf!=C.of)) goto L_10361445;
L_1036142b:;
  /* 1036142b push 0 */
  push32((uint32_t)(0x0u));
  /* 1036142d push 2 */
  push32((uint32_t)(0x2u));
  /* 1036142f call dword ptr [0x103650b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b8))), 0x10361435u);
  /* 10361435 push 0x103660f8 */
  push32((uint32_t)(0x103660f8u));
  /* 1036143a call ebx */
  call_ind((uint32_t)(EBX), 0x1036143cu);
  /* 1036143c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036143f call dword ptr [0x103650ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650ec))), 0x10361445u);
L_10361445:;
  /* 10361445 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361447 call dword ptr [0x103650f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650f0))), 0x1036144du);
  /* 1036144d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361450 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361452 je 0x10361552 */
  if (C.zf) goto L_10361552;
  /* 10361458 mov ebx, dword ptr [0x103650f4] */
  EBX = (r32((uint32_t)(0x103650f4)));
  /* 1036145e push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 10361463 call ebx */
  call_ind((uint32_t)(EBX), 0x10361465u);
  /* 10361465 mov esi, dword ptr [0x103650f8] */
  ESI = (r32((uint32_t)(0x103650f8)));
  /* 1036146b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036146e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361470 jle 0x103614af */
  if ((C.zf||C.sf!=C.of)) goto L_103614af;
  /* 10361472 push 0x10366458 */
  push32((uint32_t)(0x10366458u));
  /* 10361477 call ebx */
  call_ind((uint32_t)(EBX), 0x10361479u);
  /* 10361479 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036147c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036147e jle 0x103614af */
  if ((C.zf||C.sf!=C.of)) goto L_103614af;
  /* 10361480 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10361485 push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 1036148a push 0x103664d8 */
  push32((uint32_t)(0x103664d8u));
  /* 1036148f push 0x10366528 */
  push32((uint32_t)(0x10366528u));
  /* 10361494 call esi */
  call_ind((uint32_t)(ESI), 0x10361496u);
  /* 10361496 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361498 push 0x10366458 */
  push32((uint32_t)(0x10366458u));
  /* 1036149d call ebp */
  call_ind((uint32_t)(EBP), 0x1036149fu);
  /* 1036149f push 0 */
  push32((uint32_t)(0x0u));
  /* 103614a1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103614a3 push 0x10366528 */
  push32((uint32_t)(0x10366528u));
  /* 103614a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103614aa call edi */
  call_ind((uint32_t)(EDI), 0x103614acu);
  /* 103614ac add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103614af:;
  /* 103614af push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 103614b4 call ebx */
  call_ind((uint32_t)(EBX), 0x103614b6u);
  /* 103614b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103614b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103614bb jle 0x103614fa */
  if ((C.zf||C.sf!=C.of)) goto L_103614fa;
  /* 103614bd push 0x10366470 */
  push32((uint32_t)(0x10366470u));
  /* 103614c2 call ebx */
  call_ind((uint32_t)(EBX), 0x103614c4u);
  /* 103614c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103614c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103614c9 jle 0x103614fa */
  if ((C.zf||C.sf!=C.of)) goto L_103614fa;
  /* 103614cb push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 103614d0 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 103614d5 push 0x103664f8 */
  push32((uint32_t)(0x103664f8u));
  /* 103614da push 0x10366530 */
  push32((uint32_t)(0x10366530u));
  /* 103614df call esi */
  call_ind((uint32_t)(ESI), 0x103614e1u);
  /* 103614e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103614e3 push 0x10366470 */
  push32((uint32_t)(0x10366470u));
  /* 103614e8 call ebp */
  call_ind((uint32_t)(EBP), 0x103614eau);
  /* 103614ea push 0 */
  push32((uint32_t)(0x0u));
  /* 103614ec push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103614ee push 0x10366530 */
  push32((uint32_t)(0x10366530u));
  /* 103614f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103614f5 call edi */
  call_ind((uint32_t)(EDI), 0x103614f7u);
  /* 103614f7 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103614fa:;
  /* 103614fa push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 103614ff call ebx */
  call_ind((uint32_t)(EBX), 0x10361501u);
  /* 10361501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361504 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361506 jle 0x10361545 */
  if ((C.zf||C.sf!=C.of)) goto L_10361545;
  /* 10361508 push 0x10366480 */
  push32((uint32_t)(0x10366480u));
  /* 1036150d call ebx */
  call_ind((uint32_t)(EBX), 0x1036150fu);
  /* 1036150f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361514 jle 0x10361545 */
  if ((C.zf||C.sf!=C.of)) goto L_10361545;
  /* 10361516 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 1036151b push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 10361520 push 0x103664f8 */
  push32((uint32_t)(0x103664f8u));
  /* 10361525 push 0x10366538 */
  push32((uint32_t)(0x10366538u));
  /* 1036152a call esi */
  call_ind((uint32_t)(ESI), 0x1036152cu);
  /* 1036152c push 0 */
  push32((uint32_t)(0x0u));
  /* 1036152e push 0x10366480 */
  push32((uint32_t)(0x10366480u));
  /* 10361533 call ebp */
  call_ind((uint32_t)(EBP), 0x10361535u);
  /* 10361535 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361537 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10361539 push 0x10366538 */
  push32((uint32_t)(0x10366538u));
  /* 1036153e push 1 */
  push32((uint32_t)(0x1u));
  /* 10361540 call edi */
  call_ind((uint32_t)(EDI), 0x10361542u);
  /* 10361542 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361545:;
  /* 10361545 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10361547 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361549 call dword ptr [0x103650dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650dc))), 0x1036154fu);
  /* 1036154f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361552:;
  /* 10361552 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361554 push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 10361559 call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x1036155fu);
  /* 1036155f mov esi, dword ptr [0x103650fc] */
  ESI = (r32((uint32_t)(0x103650fc)));
  /* 10361565 mov edi, dword ptr [0x10365100] */
  EDI = (r32((uint32_t)(0x10365100)));
  /* 1036156b mov ebx, dword ptr [0x10365104] */
  EBX = (r32((uint32_t)(0x10365104)));
  /* 10361571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361574 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361576 jle 0x103615a6 */
  if ((C.zf||C.sf!=C.of)) goto L_103615a6;
  /* 10361578 push 0 */
  push32((uint32_t)(0x0u));
  /* 1036157a push 0x10366498 */
  push32((uint32_t)(0x10366498u));
  /* 1036157f push 0 */
  push32((uint32_t)(0x0u));
  /* 10361581 call esi */
  call_ind((uint32_t)(ESI), 0x10361583u);
  /* 10361583 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361585 call edi */
  call_ind((uint32_t)(EDI), 0x10361587u);
  /* 10361587 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361589 push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 1036158e push 0 */
  push32((uint32_t)(0x0u));
  /* 10361590 call ebx */
  call_ind((uint32_t)(EBX), 0x10361592u);
  /* 10361592 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361594 call dword ptr [0x103650c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650c8))), 0x1036159au);
  /* 1036159a push 0 */
  push32((uint32_t)(0x0u));
  /* 1036159c push 0x10366498 */
  push32((uint32_t)(0x10366498u));
  /* 103615a1 call ebp */
  call_ind((uint32_t)(EBP), 0x103615a3u);
  /* 103615a3 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103615a6:;
  /* 103615a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103615a8 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 103615ad call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x103615b3u);
  /* 103615b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103615b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103615b8 jle 0x103615e8 */
  if ((C.zf||C.sf!=C.of)) goto L_103615e8;
  /* 103615ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103615bc push 0x10366498 */
  push32((uint32_t)(0x10366498u));
  /* 103615c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103615c3 call esi */
  call_ind((uint32_t)(ESI), 0x103615c5u);
  /* 103615c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103615c7 call edi */
  call_ind((uint32_t)(EDI), 0x103615c9u);
  /* 103615c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103615cb push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 103615d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103615d2 call ebx */
  call_ind((uint32_t)(EBX), 0x103615d4u);
  /* 103615d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103615d6 call dword ptr [0x103650c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650c8))), 0x103615dcu);
  /* 103615dc push 0 */
  push32((uint32_t)(0x0u));
  /* 103615de push 0x10366498 */
  push32((uint32_t)(0x10366498u));
  /* 103615e3 call ebp */
  call_ind((uint32_t)(EBP), 0x103615e5u);
  /* 103615e5 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103615e8:;
  /* 103615e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103615ea push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 103615ef call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x103615f5u);
  /* 103615f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103615f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103615fa jle 0x1036162a */
  if ((C.zf||C.sf!=C.of)) goto L_1036162a;
  /* 103615fc push 0 */
  push32((uint32_t)(0x0u));
  /* 103615fe push 0x10366498 */
  push32((uint32_t)(0x10366498u));
  /* 10361603 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361605 call esi */
  call_ind((uint32_t)(ESI), 0x10361607u);
  /* 10361607 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361609 call edi */
  call_ind((uint32_t)(EDI), 0x1036160bu);
  /* 1036160b push 0 */
  push32((uint32_t)(0x0u));
  /* 1036160d push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 10361612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361614 call ebx */
  call_ind((uint32_t)(EBX), 0x10361616u);
  /* 10361616 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361618 call dword ptr [0x103650c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650c8))), 0x1036161eu);
  /* 1036161e push 0 */
  push32((uint32_t)(0x0u));
  /* 10361620 push 0x10366498 */
  push32((uint32_t)(0x10366498u));
  /* 10361625 call ebp */
  call_ind((uint32_t)(EBP), 0x10361627u);
  /* 10361627 add esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1036162a:;
  /* 1036162a push 3 */
  push32((uint32_t)(0x3u));
  /* 1036162c call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x10361632u);
  /* 10361632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361635 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361637 je 0x103616b2 */
  if (C.zf) goto L_103616b2;
  /* 10361639 mov esi, dword ptr [0x103650e8] */
  ESI = (r32((uint32_t)(0x103650e8)));
  /* 1036163f push 0x10366460 */
  push32((uint32_t)(0x10366460u));
  /* 10361644 push 0x103664c0 */
  push32((uint32_t)(0x103664c0u));
  /* 10361649 call esi */
  call_ind((uint32_t)(ESI), 0x1036164bu);
  /* 1036164b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036164e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361650 jle 0x103616b2 */
  if ((C.zf||C.sf!=C.of)) goto L_103616b2;
  /* 10361652 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361654 push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 10361659 call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x1036165fu);
  /* 1036165f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361662 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361664 je 0x10361679 */
  if (C.zf) goto L_10361679;
  /* 10361666 push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 1036166b push 0x103664c0 */
  push32((uint32_t)(0x103664c0u));
  /* 10361670 call esi */
  call_ind((uint32_t)(ESI), 0x10361672u);
  /* 10361672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361677 jle 0x103616b2 */
  if ((C.zf||C.sf!=C.of)) goto L_103616b2;
L_10361679:;
  /* 10361679 mov esi, dword ptr [0x103650b8] */
  ESI = (r32((uint32_t)(0x103650b8)));
  /* 1036167f push 0 */
  push32((uint32_t)(0x0u));
  /* 10361681 push 3 */
  push32((uint32_t)(0x3u));
  /* 10361683 call esi */
  call_ind((uint32_t)(ESI), 0x10361685u);
  /* 10361685 mov edi, dword ptr [0x103650c4] */
  EDI = (r32((uint32_t)(0x103650c4)));
  /* 1036168b push 0 */
  push32((uint32_t)(0x0u));
  /* 1036168d call edi */
  call_ind((uint32_t)(EDI), 0x1036168fu);
  /* 1036168f lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10361692 mov ebx, dword ptr [0x103650dc] */
  EBX = (r32((uint32_t)(0x103650dc)));
  /* 10361698 mov ecx, 0x6a4 */
  ECX = (0x6a4u);
  /* 1036169d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103616a0 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103616a3 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103616a6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103616a8 push ecx */
  push32((uint32_t)(ECX));
  /* 103616a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 103616ab call ebx */
  call_ind((uint32_t)(EBX), 0x103616adu);
  /* 103616ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103616b0 jmp 0x103616c4 */
  goto L_103616c4;
L_103616b2:;
  /* 103616b2 mov esi, dword ptr [0x103650b8] */
  ESI = (r32((uint32_t)(0x103650b8)));
  /* 103616b8 mov ebx, dword ptr [0x103650dc] */
  EBX = (r32((uint32_t)(0x103650dc)));
  /* 103616be mov edi, dword ptr [0x103650c4] */
  EDI = (r32((uint32_t)(0x103650c4)));
L_103616c4:;
  /* 103616c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 103616c6 call dword ptr [0x10365108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365108))), 0x103616ccu);
  /* 103616cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103616cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103616d1 je 0x103616f0 */
  if (C.zf) goto L_103616f0;
  /* 103616d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103616d5 push 0x10366460 */
  push32((uint32_t)(0x10366460u));
  /* 103616da call ebp */
  call_ind((uint32_t)(EBP), 0x103616dcu);
  /* 103616dc push 0 */
  push32((uint32_t)(0x0u));
  /* 103616de push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103616e0 push 0x103664c8 */
  push32((uint32_t)(0x103664c8u));
  /* 103616e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103616e7 call dword ptr [0x103650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650d8))), 0x103616edu);
  /* 103616ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103616f0:;
  /* 103616f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 103616f2 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x103616f8u);
  /* 103616f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103616fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103616fd je 0x10361766 */
  if (C.zf) goto L_10361766;
  /* 103616ff push 0x10366460 */
  push32((uint32_t)(0x10366460u));
  /* 10361704 push 0x103664c8 */
  push32((uint32_t)(0x103664c8u));
  /* 10361709 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x1036170fu);
  /* 1036170f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361714 jle 0x10361766 */
  if ((C.zf||C.sf!=C.of)) goto L_10361766;
  /* 10361716 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361718 push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 1036171d call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x10361723u);
  /* 10361723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361728 je 0x10361741 */
  if (C.zf) goto L_10361741;
  /* 1036172a push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 1036172f push 0x103664c8 */
  push32((uint32_t)(0x103664c8u));
  /* 10361734 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x1036173au);
  /* 1036173a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036173d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036173f jle 0x10361766 */
  if ((C.zf||C.sf!=C.of)) goto L_10361766;
L_10361741:;
  /* 10361741 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361743 push 4 */
  push32((uint32_t)(0x4u));
  /* 10361745 call esi */
  call_ind((uint32_t)(ESI), 0x10361747u);
  /* 10361747 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361749 call edi */
  call_ind((uint32_t)(EDI), 0x1036174bu);
  /* 1036174b lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1036174e lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10361751 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 10361754 mov eax, 0x6a4 */
  EAX = (0x6a4u);
  /* 10361759 shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 1036175c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036175e push eax */
  push32((uint32_t)(EAX));
  /* 1036175f push 4 */
  push32((uint32_t)(0x4u));
  /* 10361761 call ebx */
  call_ind((uint32_t)(EBX), 0x10361763u);
  /* 10361763 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361766:;
  /* 10361766 push 4 */
  push32((uint32_t)(0x4u));
  /* 10361768 call dword ptr [0x10365108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365108))), 0x1036176eu);
  /* 1036176e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361771 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361773 je 0x10361792 */
  if (C.zf) goto L_10361792;
  /* 10361775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361777 push 0x10366460 */
  push32((uint32_t)(0x10366460u));
  /* 1036177c call ebp */
  call_ind((uint32_t)(EBP), 0x1036177eu);
  /* 1036177e push 0 */
  push32((uint32_t)(0x0u));
  /* 10361780 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10361782 push 0x103664d0 */
  push32((uint32_t)(0x103664d0u));
  /* 10361787 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361789 call dword ptr [0x103650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650d8))), 0x1036178fu);
  /* 1036178f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361792:;
  /* 10361792 push 5 */
  push32((uint32_t)(0x5u));
  /* 10361794 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x1036179au);
  /* 1036179a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036179d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1036179f je 0x10361808 */
  if (C.zf) goto L_10361808;
  /* 103617a1 push 0x10366460 */
  push32((uint32_t)(0x10366460u));
  /* 103617a6 push 0x103664d0 */
  push32((uint32_t)(0x103664d0u));
  /* 103617ab call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x103617b1u);
  /* 103617b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103617b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103617b6 jle 0x10361808 */
  if ((C.zf||C.sf!=C.of)) goto L_10361808;
  /* 103617b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103617ba push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 103617bf call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x103617c5u);
  /* 103617c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103617c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103617ca je 0x103617e3 */
  if (C.zf) goto L_103617e3;
  /* 103617cc push 0x10366450 */
  push32((uint32_t)(0x10366450u));
  /* 103617d1 push 0x103664d0 */
  push32((uint32_t)(0x103664d0u));
  /* 103617d6 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x103617dcu);
  /* 103617dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103617df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103617e1 jle 0x10361808 */
  if ((C.zf||C.sf!=C.of)) goto L_10361808;
L_103617e3:;
  /* 103617e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103617e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 103617e7 call esi */
  call_ind((uint32_t)(ESI), 0x103617e9u);
  /* 103617e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103617eb call edi */
  call_ind((uint32_t)(EDI), 0x103617edu);
  /* 103617ed lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103617f0 mov edx, 0x6a4 */
  EDX = (0x6a4u);
  /* 103617f5 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103617f8 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 103617fb shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103617fe sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10361800 push edx */
  push32((uint32_t)(EDX));
  /* 10361801 push 5 */
  push32((uint32_t)(0x5u));
  /* 10361803 call ebx */
  call_ind((uint32_t)(EBX), 0x10361805u);
  /* 10361805 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361808:;
  /* 10361808 push 5 */
  push32((uint32_t)(0x5u));
  /* 1036180a call dword ptr [0x10365108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365108))), 0x10361810u);
  /* 10361810 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361813 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361815 je 0x10361854 */
  if (C.zf) goto L_10361854;
  /* 10361817 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361819 push 0x10366460 */
  push32((uint32_t)(0x10366460u));
  /* 1036181e call ebp */
  call_ind((uint32_t)(EBP), 0x10361820u);
  /* 10361820 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361822 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10361824 push 0x103664d8 */
  push32((uint32_t)(0x103664d8u));
  /* 10361829 push 1 */
  push32((uint32_t)(0x1u));
  /* 1036182b call dword ptr [0x103650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650d8))), 0x10361831u);
  /* 10361831 push 0xa */
  push32((uint32_t)(0xau));
  /* 10361833 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x10361839u);
  /* 10361839 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036183c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1036183e je 0x10361854 */
  if (C.zf) goto L_10361854;
  /* 10361840 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361842 push 0xa */
  push32((uint32_t)(0xau));
  /* 10361844 call esi */
  call_ind((uint32_t)(ESI), 0x10361846u);
  /* 10361846 push 0x103660f0 */
  push32((uint32_t)(0x103660f0u));
  /* 1036184b call dword ptr [0x103650c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650c0))), 0x10361851u);
  /* 10361851 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361854:;
  /* 10361854 push 6 */
  push32((uint32_t)(0x6u));
  /* 10361856 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x1036185cu);
  /* 1036185c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036185f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361861 je 0x103618f9 */
  if (C.zf) goto L_103618f9;
  /* 10361867 push 0x10366488 */
  push32((uint32_t)(0x10366488u));
  /* 1036186c push 0x103664e0 */
  push32((uint32_t)(0x103664e0u));
  /* 10361871 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x10361877u);
  /* 10361877 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036187a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036187c jle 0x103618f9 */
  if ((C.zf||C.sf!=C.of)) goto L_103618f9;
  /* 1036187e push 1 */
  push32((uint32_t)(0x1u));
  /* 10361880 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 10361885 call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x1036188bu);
  /* 1036188b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036188e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361890 jne 0x103618a6 */
  if (!C.zf) goto L_103618a6;
  /* 10361892 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361894 push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 10361899 call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x1036189fu);
  /* 1036189f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103618a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103618a4 je 0x103618d4 */
  if (C.zf) goto L_103618d4;
L_103618a6:;
  /* 103618a6 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 103618ab push 0x103664e0 */
  push32((uint32_t)(0x103664e0u));
  /* 103618b0 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x103618b6u);
  /* 103618b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103618b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103618bb jg 0x103618d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_103618d4;
  /* 103618bd push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 103618c2 push 0x103664e0 */
  push32((uint32_t)(0x103664e0u));
  /* 103618c7 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x103618cdu);
  /* 103618cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103618d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103618d2 jle 0x103618f9 */
  if ((C.zf||C.sf!=C.of)) goto L_103618f9;
L_103618d4:;
  /* 103618d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103618d6 push 6 */
  push32((uint32_t)(0x6u));
  /* 103618d8 call esi */
  call_ind((uint32_t)(ESI), 0x103618dau);
  /* 103618da push 0 */
  push32((uint32_t)(0x0u));
  /* 103618dc call edi */
  call_ind((uint32_t)(EDI), 0x103618deu);
  /* 103618de lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103618e1 mov ecx, 0x6a4 */
  ECX = (0x6a4u);
  /* 103618e6 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103618e9 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103618ec shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103618ef sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103618f1 push ecx */
  push32((uint32_t)(ECX));
  /* 103618f2 push 6 */
  push32((uint32_t)(0x6u));
  /* 103618f4 call ebx */
  call_ind((uint32_t)(EBX), 0x103618f6u);
  /* 103618f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103618f9:;
  /* 103618f9 push 6 */
  push32((uint32_t)(0x6u));
  /* 103618fb call dword ptr [0x10365108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365108))), 0x10361901u);
  /* 10361901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361904 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361906 je 0x10361925 */
  if (C.zf) goto L_10361925;
  /* 10361908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1036190a push 0x10366488 */
  push32((uint32_t)(0x10366488u));
  /* 1036190f call ebp */
  call_ind((uint32_t)(EBP), 0x10361911u);
  /* 10361911 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361913 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10361915 push 0x103664e8 */
  push32((uint32_t)(0x103664e8u));
  /* 1036191a push 1 */
  push32((uint32_t)(0x1u));
  /* 1036191c call dword ptr [0x103650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650d8))), 0x10361922u);
  /* 10361922 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361925:;
  /* 10361925 push 7 */
  push32((uint32_t)(0x7u));
  /* 10361927 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x1036192du);
  /* 1036192d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361930 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361932 je 0x103619ca */
  if (C.zf) goto L_103619ca;
  /* 10361938 push 0x10366488 */
  push32((uint32_t)(0x10366488u));
  /* 1036193d push 0x103664e8 */
  push32((uint32_t)(0x103664e8u));
  /* 10361942 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x10361948u);
  /* 10361948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036194b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036194d jle 0x103619ca */
  if ((C.zf||C.sf!=C.of)) goto L_103619ca;
  /* 1036194f push 1 */
  push32((uint32_t)(0x1u));
  /* 10361951 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 10361956 call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x1036195cu);
  /* 1036195c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036195f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361961 jne 0x10361977 */
  if (!C.zf) goto L_10361977;
  /* 10361963 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361965 push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 1036196a call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x10361970u);
  /* 10361970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361975 je 0x103619a5 */
  if (C.zf) goto L_103619a5;
L_10361977:;
  /* 10361977 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 1036197c push 0x103664e8 */
  push32((uint32_t)(0x103664e8u));
  /* 10361981 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x10361987u);
  /* 10361987 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036198a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036198c jg 0x103619a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_103619a5;
  /* 1036198e push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 10361993 push 0x103664e8 */
  push32((uint32_t)(0x103664e8u));
  /* 10361998 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x1036199eu);
  /* 1036199e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103619a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103619a3 jle 0x103619ca */
  if ((C.zf||C.sf!=C.of)) goto L_103619ca;
L_103619a5:;
  /* 103619a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103619a7 push 7 */
  push32((uint32_t)(0x7u));
  /* 103619a9 call esi */
  call_ind((uint32_t)(ESI), 0x103619abu);
  /* 103619ab push 0 */
  push32((uint32_t)(0x0u));
  /* 103619ad call edi */
  call_ind((uint32_t)(EDI), 0x103619afu);
  /* 103619af lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103619b2 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103619b5 lea edx, [eax + eax*4] */
  EDX = ((uint32_t)(EAX + EAX*4));
  /* 103619b8 mov eax, 0x6a4 */
  EAX = (0x6a4u);
  /* 103619bd shl edx, 2 */
  EDX = (sh_shl((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 103619c0 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103619c2 push eax */
  push32((uint32_t)(EAX));
  /* 103619c3 push 7 */
  push32((uint32_t)(0x7u));
  /* 103619c5 call ebx */
  call_ind((uint32_t)(EBX), 0x103619c7u);
  /* 103619c7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103619ca:;
  /* 103619ca push 7 */
  push32((uint32_t)(0x7u));
  /* 103619cc call dword ptr [0x10365108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365108))), 0x103619d2u);
  /* 103619d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103619d5 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103619d7 je 0x103619f6 */
  if (C.zf) goto L_103619f6;
  /* 103619d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103619db push 0x10366488 */
  push32((uint32_t)(0x10366488u));
  /* 103619e0 call ebp */
  call_ind((uint32_t)(EBP), 0x103619e2u);
  /* 103619e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103619e4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 103619e6 push 0x103664f0 */
  push32((uint32_t)(0x103664f0u));
  /* 103619eb push 1 */
  push32((uint32_t)(0x1u));
  /* 103619ed call dword ptr [0x103650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650d8))), 0x103619f3u);
  /* 103619f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103619f6:;
  /* 103619f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 103619f8 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x103619feu);
  /* 103619fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361a01 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361a03 je 0x10361a9b */
  if (C.zf) goto L_10361a9b;
  /* 10361a09 push 0x10366488 */
  push32((uint32_t)(0x10366488u));
  /* 10361a0e push 0x103664f0 */
  push32((uint32_t)(0x103664f0u));
  /* 10361a13 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x10361a19u);
  /* 10361a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361a1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361a1e jle 0x10361a9b */
  if ((C.zf||C.sf!=C.of)) goto L_10361a9b;
  /* 10361a20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361a22 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 10361a27 call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x10361a2du);
  /* 10361a2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361a30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361a32 jne 0x10361a48 */
  if (!C.zf) goto L_10361a48;
  /* 10361a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361a36 push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 10361a3b call dword ptr [0x103650e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e0))), 0x10361a41u);
  /* 10361a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361a46 je 0x10361a76 */
  if (C.zf) goto L_10361a76;
L_10361a48:;
  /* 10361a48 push 0x10366468 */
  push32((uint32_t)(0x10366468u));
  /* 10361a4d push 0x103664f0 */
  push32((uint32_t)(0x103664f0u));
  /* 10361a52 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x10361a58u);
  /* 10361a58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361a5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361a5d jg 0x10361a76 */
  if ((!C.zf&&C.sf==C.of)) goto L_10361a76;
  /* 10361a5f push 0x10366478 */
  push32((uint32_t)(0x10366478u));
  /* 10361a64 push 0x103664f0 */
  push32((uint32_t)(0x103664f0u));
  /* 10361a69 call dword ptr [0x103650e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650e8))), 0x10361a6fu);
  /* 10361a6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361a72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361a74 jle 0x10361a9b */
  if ((C.zf||C.sf!=C.of)) goto L_10361a9b;
L_10361a76:;
  /* 10361a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361a78 push 8 */
  push32((uint32_t)(0x8u));
  /* 10361a7a call esi */
  call_ind((uint32_t)(ESI), 0x10361a7cu);
  /* 10361a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10361a7e call edi */
  call_ind((uint32_t)(EDI), 0x10361a80u);
  /* 10361a80 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10361a83 mov edx, 0x6a4 */
  EDX = (0x6a4u);
  /* 10361a88 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10361a8b lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 10361a8e shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10361a91 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10361a93 push edx */
  push32((uint32_t)(EDX));
  /* 10361a94 push 8 */
  push32((uint32_t)(0x8u));
  /* 10361a96 call ebx */
  call_ind((uint32_t)(EBX), 0x10361a98u);
  /* 10361a98 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361a9b:;
  /* 10361a9b push 8 */
  push32((uint32_t)(0x8u));
  /* 10361a9d call dword ptr [0x10365108] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365108))), 0x10361aa3u);
  /* 10361aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361aa6 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361aa8 je 0x10361ae7 */
  if (C.zf) goto L_10361ae7;
  /* 10361aaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10361aac push 0x10366488 */
  push32((uint32_t)(0x10366488u));
  /* 10361ab1 call ebp */
  call_ind((uint32_t)(EBP), 0x10361ab3u);
  /* 10361ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361ab5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10361ab7 push 0x103664f8 */
  push32((uint32_t)(0x103664f8u));
  /* 10361abc push 1 */
  push32((uint32_t)(0x1u));
  /* 10361abe call dword ptr [0x103650d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650d8))), 0x10361ac4u);
  /* 10361ac4 push 0xa */
  push32((uint32_t)(0xau));
  /* 10361ac6 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x10361accu);
  /* 10361acc add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361acf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361ad1 je 0x10361ae7 */
  if (C.zf) goto L_10361ae7;
  /* 10361ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361ad5 push 0xa */
  push32((uint32_t)(0xau));
  /* 10361ad7 call esi */
  call_ind((uint32_t)(ESI), 0x10361ad9u);
  /* 10361ad9 push 0x103660f0 */
  push32((uint32_t)(0x103660f0u));
  /* 10361ade call dword ptr [0x103650c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650c0))), 0x10361ae4u);
  /* 10361ae4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361ae7:;
  /* 10361ae7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10361ae9 call dword ptr [0x103650b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650b0))), 0x10361aefu);
  /* 10361aef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361af2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10361af4 je 0x10361bb5 */
  if (C.zf) goto L_10361bb5;
  /* 10361afa push 0 */
  push32((uint32_t)(0x0u));
  /* 10361afc call edi */
  call_ind((uint32_t)(EDI), 0x10361afeu);
  /* 10361afe mov ecx, 0xc */
  ECX = (0xcu);
  /* 10361b03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361b06 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10361b08 lea ecx, [ecx + ecx*4] */
  ECX = ((uint32_t)(ECX + ECX*4));
  /* 10361b0b lea eax, [ecx + ecx*4] */
  EAX = ((uint32_t)(ECX + ECX*4));
  /* 10361b0e lea ebx, [eax + eax*4] */
  EBX = ((uint32_t)(EAX + EAX*4));
  /* 10361b11 shl ebx, 2 */
  EBX = (sh_shl((uint32_t)(EBX), (0x2u)&0x1f, 32));
  /* 10361b14 call dword ptr [0x1036510c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036510c))), 0x10361b1au);
  /* 10361b1a cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361b1c jle 0x10361bb5 */
  if ((C.zf||C.sf!=C.of)) goto L_10361bb5;
  /* 10361b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 10361b26 call esi */
  call_ind((uint32_t)(ESI), 0x10361b28u);
  /* 10361b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361b2a call edi */
  call_ind((uint32_t)(EDI), 0x10361b2cu);
  /* 10361b2c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361b2f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361b32 ja 0x10361ba7 */
  if ((!C.cf&&!C.zf)) goto L_10361ba7;
  /* 10361b34 jmp dword ptr [eax*4 + 0x10361bbc] */
  switch (EAX) {
    case 0: goto L_10361b3b;
    case 1: goto L_10361b53;
    case 2: goto L_10361b6b;
    case 3: goto L_10361b83;
    default: x86_unimpl("switch@0x10361b34 out of table"); return;
  }
L_10361b3b:;
  /* 10361b3b push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10361b40 push 0x10366500 */
  push32((uint32_t)(0x10366500u));
  /* 10361b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361b47 push 0x10366508 */
  push32((uint32_t)(0x10366508u));
  /* 10361b4c push 0x10366540 */
  push32((uint32_t)(0x10366540u));
  /* 10361b51 jmp 0x10361b99 */
  goto L_10361b99;
L_10361b53:;
  /* 10361b53 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10361b58 push 0x10366500 */
  push32((uint32_t)(0x10366500u));
  /* 10361b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10361b5f push 0x10366508 */
  push32((uint32_t)(0x10366508u));
  /* 10361b64 push 0x10366520 */
  push32((uint32_t)(0x10366520u));
  /* 10361b69 jmp 0x10361b99 */
  goto L_10361b99;
L_10361b6b:;
  /* 10361b6b push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10361b70 push 0x10366500 */
  push32((uint32_t)(0x10366500u));
  /* 10361b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361b77 push 0x10366508 */
  push32((uint32_t)(0x10366508u));
  /* 10361b7c push 0x10366510 */
  push32((uint32_t)(0x10366510u));
  /* 10361b81 jmp 0x10361b99 */
  goto L_10361b99;
L_10361b83:;
  /* 10361b83 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10361b88 push 0x10366500 */
  push32((uint32_t)(0x10366500u));
  /* 10361b8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10361b8f push 0x10366508 */
  push32((uint32_t)(0x10366508u));
  /* 10361b94 push 0x10366518 */
  push32((uint32_t)(0x10366518u));
L_10361b99:;
  /* 10361b99 push 0x103664b0 */
  push32((uint32_t)(0x103664b0u));
  /* 10361b9e call dword ptr [0x10365110] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365110))), 0x10361ba4u);
  /* 10361ba4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361ba7:;
  /* 10361ba7 push 0x103660e8 */
  push32((uint32_t)(0x103660e8u));
  /* 10361bac call dword ptr [0x103650c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650c0))), 0x10361bb2u);
  /* 10361bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10361bb5:;
  /* 10361bb5 pop edi */
  EDI = (pop32());
  /* 10361bb6 pop esi */
  ESI = (pop32());
  /* 10361bb7 pop ebp */
  EBP = (pop32());
  /* 10361bb8 pop ebx */
  EBX = (pop32());
  /* 10361bb9 pop ecx */
  ECX = (pop32());
  /* 10361bba ret  */
  ESPCHK(0x10361200u, _esp0);
  ESP += 4; return;
}

/* FUN_10001bd0 @ 0x10361bd0 (217 bytes, 57 insns) */
void f_10361bd0(void) {
  FTRACE(0x10361bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361bd0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10361bd4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361bd7 jne 0x10361c65 */
  if (!C.zf) goto L_10361c65;
  /* 10361bdd call dword ptr [0x1036507c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036507c))), 0x10361be3u);
  /* 10361be3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361be5 mov dword ptr [0x10366564], eax */
  w32((uint32_t)(0x10366564), (EAX));
  /* 10361bea call 0x10362604 */
  push32(0x10361befu); f_10362604();
  /* 10361bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361bf1 pop ecx */
  ECX = (pop32());
  /* 10361bf2 je 0x10361c30 */
  if (C.zf) goto L_10361c30;
  /* 10361bf4 mov eax, dword ptr [0x10366564] */
  EAX = (r32((uint32_t)(0x10366564)));
  /* 10361bf9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10361bfb mov cl, byte ptr [0x10366565] */
  CL = (r8((uint32_t)(0x10366565)));
  /* 10361c01 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10361c06 shr dword ptr [0x10366564], 0x10 */
  w32((uint32_t)(0x10366564), (sh_shr((uint32_t)(r32((uint32_t)(0x10366564))), (0x10u)&0x1f, 32)));
  /* 10361c0d mov dword ptr [0x1036656c], eax */
  w32((uint32_t)(0x1036656c), (EAX));
  /* 10361c12 mov dword ptr [0x10366570], ecx */
  w32((uint32_t)(0x10366570), (ECX));
  /* 10361c18 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10361c1b add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10361c1d mov dword ptr [0x10366568], eax */
  w32((uint32_t)(0x10366568), (EAX));
  /* 10361c22 call 0x10361e97 */
  push32(0x10361c27u); f_10361e97();
  /* 10361c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361c29 jne 0x10361c34 */
  if (!C.zf) goto L_10361c34;
  /* 10361c2b call 0x10362640 */
  push32(0x10361c30u); f_10362640();
L_10361c30:;
  /* 10361c30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10361c32 jmp 0x10361ca6 */
  goto L_10361ca6;
L_10361c34:;
  /* 10361c34 call dword ptr [0x10365078] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365078))), 0x10361c3au);
  /* 10361c3a mov dword ptr [0x10366ab8], eax */
  w32((uint32_t)(0x10366ab8), (EAX));
  /* 10361c3f call 0x103624d2 */
  push32(0x10361c44u); f_103624d2();
  /* 10361c44 mov dword ptr [0x10366550], eax */
  w32((uint32_t)(0x10366550), (EAX));
  /* 10361c49 call 0x10361fbc */
  push32(0x10361c4eu); f_10361fbc();
  /* 10361c4e call 0x10362285 */
  push32(0x10361c53u); f_10362285();
  /* 10361c53 call 0x103621cc */
  push32(0x10361c58u); f_103621cc();
  /* 10361c58 call 0x10361d79 */
  push32(0x10361c5du); f_10361d79();
  /* 10361c5d inc dword ptr [0x1036654c] */
  { uint32_t _r=(r32((uint32_t)(0x1036654c)))+1; w32((uint32_t)(0x1036654c), (_r)); fl_inc(_r,32); }
  /* 10361c63 jmp 0x10361ca3 */
  goto L_10361ca3;
L_10361c65:;
  /* 10361c65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10361c67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361c69 jne 0x10361c97 */
  if (!C.zf) goto L_10361c97;
  /* 10361c6b cmp dword ptr [0x1036654c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1036654c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361c71 jle 0x10361c30 */
  if ((C.zf||C.sf!=C.of)) goto L_10361c30;
  /* 10361c73 dec dword ptr [0x1036654c] */
  { uint32_t _r=(r32((uint32_t)(0x1036654c)))-1; w32((uint32_t)(0x1036654c), (_r)); fl_dec(_r,32); }
  /* 10361c79 cmp dword ptr [0x1036659c], ecx */
  { uint32_t _a=(r32((uint32_t)(0x1036659c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361c7f jne 0x10361c86 */
  if (!C.zf) goto L_10361c86;
  /* 10361c81 call 0x10361db7 */
  push32(0x10361c86u); f_10361db7();
L_10361c86:;
  /* 10361c86 call 0x10362178 */
  push32(0x10361c8bu); f_10362178();
  /* 10361c8b call 0x10361eeb */
  push32(0x10361c90u); f_10361eeb();
  /* 10361c90 call 0x10362640 */
  push32(0x10361c95u); f_10362640();
  /* 10361c95 jmp 0x10361ca3 */
  goto L_10361ca3;
L_10361c97:;
  /* 10361c97 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361c9a jne 0x10361ca3 */
  if (!C.zf) goto L_10361ca3;
  /* 10361c9c push ecx */
  push32((uint32_t)(ECX));
  /* 10361c9d call 0x10361f1c */
  push32(0x10361ca2u); f_10361f1c();
  /* 10361ca2 pop ecx */
  ECX = (pop32());
L_10361ca3:;
  /* 10361ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361ca5 pop eax */
  EAX = (pop32());
L_10361ca6:;
  /* 10361ca6 ret 0xc */
  ESPCHK(0x10361bd0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10361ca9 (157 bytes, 73 insns) */
void f_10361ca9(void) {
  FTRACE(0x10361ca9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361ca9 push ebp */
  push32((uint32_t)(EBP));
  /* 10361caa mov ebp, esp */
  EBP = (ESP);
  /* 10361cac push ebx */
  push32((uint32_t)(EBX));
  /* 10361cad mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 10361cb0 push esi */
  push32((uint32_t)(ESI));
  /* 10361cb1 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10361cb4 push edi */
  push32((uint32_t)(EDI));
  /* 10361cb5 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 10361cb8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10361cba jne 0x10361cc5 */
  if (!C.zf) goto L_10361cc5;
  /* 10361cbc cmp dword ptr [0x1036654c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1036654c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361cc3 jmp 0x10361ceb */
  goto L_10361ceb;
L_10361cc5:;
  /* 10361cc5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361cc8 je 0x10361ccf */
  if (C.zf) goto L_10361ccf;
  /* 10361cca cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361ccd jne 0x10361cf1 */
  if (!C.zf) goto L_10361cf1;
L_10361ccf:;
  /* 10361ccf mov eax, dword ptr [0x10366abc] */
  EAX = (r32((uint32_t)(0x10366abc)));
  /* 10361cd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361cd6 je 0x10361ce1 */
  if (C.zf) goto L_10361ce1;
  /* 10361cd8 push edi */
  push32((uint32_t)(EDI));
  /* 10361cd9 push esi */
  push32((uint32_t)(ESI));
  /* 10361cda push ebx */
  push32((uint32_t)(EBX));
  /* 10361cdb call eax */
  call_ind((uint32_t)(EAX), 0x10361cddu);
  /* 10361cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361cdf je 0x10361ced */
  if (C.zf) goto L_10361ced;
L_10361ce1:;
  /* 10361ce1 push edi */
  push32((uint32_t)(EDI));
  /* 10361ce2 push esi */
  push32((uint32_t)(ESI));
  /* 10361ce3 push ebx */
  push32((uint32_t)(EBX));
  /* 10361ce4 call 0x10361bd0 */
  push32(0x10361ce9u); f_10361bd0();
  /* 10361ce9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
L_10361ceb:;
  /* 10361ceb jne 0x10361cf1 */
  if (!C.zf) goto L_10361cf1;
L_10361ced:;
  /* 10361ced xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10361cef jmp 0x10361d3f */
  goto L_10361d3f;
L_10361cf1:;
  /* 10361cf1 push edi */
  push32((uint32_t)(EDI));
  /* 10361cf2 push esi */
  push32((uint32_t)(ESI));
  /* 10361cf3 push ebx */
  push32((uint32_t)(EBX));
  /* 10361cf4 call 0x10361000 */
  push32(0x10361cf9u); f_10361000();
  /* 10361cf9 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361cfc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10361cff jne 0x10361d0d */
  if (!C.zf) goto L_10361d0d;
  /* 10361d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361d03 jne 0x10361d3c */
  if (!C.zf) goto L_10361d3c;
  /* 10361d05 push edi */
  push32((uint32_t)(EDI));
  /* 10361d06 push eax */
  push32((uint32_t)(EAX));
  /* 10361d07 push ebx */
  push32((uint32_t)(EBX));
  /* 10361d08 call 0x10361bd0 */
  push32(0x10361d0du); f_10361bd0();
L_10361d0d:;
  /* 10361d0d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10361d0f je 0x10361d16 */
  if (C.zf) goto L_10361d16;
  /* 10361d11 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361d14 jne 0x10361d3c */
  if (!C.zf) goto L_10361d3c;
L_10361d16:;
  /* 10361d16 push edi */
  push32((uint32_t)(EDI));
  /* 10361d17 push esi */
  push32((uint32_t)(ESI));
  /* 10361d18 push ebx */
  push32((uint32_t)(EBX));
  /* 10361d19 call 0x10361bd0 */
  push32(0x10361d1eu); f_10361bd0();
  /* 10361d1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361d20 jne 0x10361d25 */
  if (!C.zf) goto L_10361d25;
  /* 10361d22 and dword ptr [ebp + 0xc], eax */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(EAX); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
L_10361d25:;
  /* 10361d25 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361d29 je 0x10361d3c */
  if (C.zf) goto L_10361d3c;
  /* 10361d2b mov eax, dword ptr [0x10366abc] */
  EAX = (r32((uint32_t)(0x10366abc)));
  /* 10361d30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361d32 je 0x10361d3c */
  if (C.zf) goto L_10361d3c;
  /* 10361d34 push edi */
  push32((uint32_t)(EDI));
  /* 10361d35 push esi */
  push32((uint32_t)(ESI));
  /* 10361d36 push ebx */
  push32((uint32_t)(EBX));
  /* 10361d37 call eax */
  call_ind((uint32_t)(EAX), 0x10361d39u);
  /* 10361d39 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10361d3c:;
  /* 10361d3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10361d3f:;
  /* 10361d3f pop edi */
  EDI = (pop32());
  /* 10361d40 pop esi */
  ESI = (pop32());
  /* 10361d41 pop ebx */
  EBX = (pop32());
  /* 10361d42 pop ebp */
  EBP = (pop32());
  /* 10361d43 ret 0xc */
  ESPCHK(0x10361ca9u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10361d46 (48 bytes, 15 insns) */
void f_10361d46(void) {
  FTRACE(0x10361d46u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361d46 mov eax, dword ptr [0x10366558] */
  EAX = (r32((uint32_t)(0x10366558)));
  /* 10361d4b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361d4e je 0x10361d5d */
  if (C.zf) goto L_10361d5d;
  /* 10361d50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361d52 jne 0x10361d62 */
  if (!C.zf) goto L_10361d62;
  /* 10361d54 cmp dword ptr [0x1036655c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1036655c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361d5b jne 0x10361d62 */
  if (!C.zf) goto L_10361d62;
L_10361d5d:;
  /* 10361d5d call 0x103626b5 */
  push32(0x10361d62u); f_103626b5();
L_10361d62:;
  /* 10361d62 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10361d66 call 0x103626ee */
  push32(0x10361d6bu); f_103626ee();
  /* 10361d6b push 0xff */
  push32((uint32_t)(0xffu));
  /* 10361d70 call dword ptr [0x10366118] */
  call_ind((uint32_t)(r32((uint32_t)(0x10366118))), 0x10361d76u);
  /* 10361d76 pop ecx */
  ECX = (pop32());
  /* 10361d77 pop ecx */
  ECX = (pop32());
  /* 10361d78 ret  */
  ESPCHK(0x10361d46u, _esp0);
  ESP += 4; return;
}

/* FUN_10001d79 @ 0x10361d79 (45 bytes, 12 insns) */
void f_10361d79(void) {
  FTRACE(0x10361d79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361d79 mov eax, dword ptr [0x10366ab4] */
  EAX = (r32((uint32_t)(0x10366ab4)));
  /* 10361d7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361d80 je 0x10361d84 */
  if (C.zf) goto L_10361d84;
  /* 10361d82 call eax */
  call_ind((uint32_t)(EAX), 0x10361d84u);
L_10361d84:;
  /* 10361d84 push 0x10366010 */
  push32((uint32_t)(0x10366010u));
  /* 10361d89 push 0x10366008 */
  push32((uint32_t)(0x10366008u));
  /* 10361d8e call 0x10361e7d */
  push32(0x10361d93u); f_10361e7d();
  /* 10361d93 push 0x10366004 */
  push32((uint32_t)(0x10366004u));
  /* 10361d98 push 0x10366000 */
  push32((uint32_t)(0x10366000u));
  /* 10361d9d call 0x10361e7d */
  push32(0x10361da2u); f_10361e7d();
  /* 10361da2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361da5 ret  */
  ESPCHK(0x10361d79u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10361da6 (17 bytes, 6 insns) */
void f_10361da6(void) {
  FTRACE(0x10361da6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361da8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361daa push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10361dae call 0x10361dc6 */
  push32(0x10361db3u); f_10361dc6();
  /* 10361db3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361db6 ret  */
  ESPCHK(0x10361da6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001db7 @ 0x10361db7 (15 bytes, 6 insns) */
void f_10361db7(void) {
  FTRACE(0x10361db7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10361dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10361dbd call 0x10361dc6 */
  push32(0x10361dc2u); f_10361dc6();
  /* 10361dc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10361dc5 ret  */
  ESPCHK(0x10361db7u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dc6 @ 0x10361dc6 (163 bytes, 53 insns) */
void f_10361dc6(void) {
  FTRACE(0x10361dc6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361dc6 push edi */
  push32((uint32_t)(EDI));
  /* 10361dc7 call 0x10361e6b */
  push32(0x10361dccu); f_10361e6b();
  /* 10361dcc push 1 */
  push32((uint32_t)(0x1u));
  /* 10361dce pop edi */
  EDI = (pop32());
  /* 10361dcf cmp dword ptr [0x103665a0], edi */
  { uint32_t _a=(r32((uint32_t)(0x103665a0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361dd5 jne 0x10361de8 */
  if (!C.zf) goto L_10361de8;
  /* 10361dd7 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10361ddb call dword ptr [0x10365088] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365088))), 0x10361de1u);
  /* 10361de1 push eax */
  push32((uint32_t)(EAX));
  /* 10361de2 call dword ptr [0x10365084] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365084))), 0x10361de8u);
L_10361de8:;
  /* 10361de8 cmp dword ptr [esp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361ded push ebx */
  push32((uint32_t)(EBX));
  /* 10361dee mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10361df2 mov dword ptr [0x1036659c], edi */
  w32((uint32_t)(0x1036659c), (EDI));
  /* 10361df8 mov byte ptr [0x10366598], bl */
  w8((uint32_t)(0x10366598), (BL));
  /* 10361dfe jne 0x10361e3c */
  if (!C.zf) goto L_10361e3c;
  /* 10361e00 mov eax, dword ptr [0x10366ab0] */
  EAX = (r32((uint32_t)(0x10366ab0)));
  /* 10361e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361e07 je 0x10361e2b */
  if (C.zf) goto L_10361e2b;
  /* 10361e09 mov ecx, dword ptr [0x10366aac] */
  ECX = (r32((uint32_t)(0x10366aac)));
  /* 10361e0f push esi */
  push32((uint32_t)(ESI));
  /* 10361e10 lea esi, [ecx - 4] */
  ESI = ((uint32_t)(ECX + -0x4));
  /* 10361e13 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361e15 jb 0x10361e2a */
  if (C.cf) goto L_10361e2a;
L_10361e17:;
  /* 10361e17 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10361e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361e1b je 0x10361e1f */
  if (C.zf) goto L_10361e1f;
  /* 10361e1d call eax */
  call_ind((uint32_t)(EAX), 0x10361e1fu);
L_10361e1f:;
  /* 10361e1f sub esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10361e22 cmp esi, dword ptr [0x10366ab0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10366ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361e28 jae 0x10361e17 */
  if (!C.cf) goto L_10361e17;
L_10361e2a:;
  /* 10361e2a pop esi */
  ESI = (pop32());
L_10361e2b:;
  /* 10361e2b push 0x10366018 */
  push32((uint32_t)(0x10366018u));
  /* 10361e30 push 0x10366014 */
  push32((uint32_t)(0x10366014u));
  /* 10361e35 call 0x10361e7d */
  push32(0x10361e3au); f_10361e7d();
  /* 10361e3a pop ecx */
  ECX = (pop32());
  /* 10361e3b pop ecx */
  ECX = (pop32());
L_10361e3c:;
  /* 10361e3c push 0x10366020 */
  push32((uint32_t)(0x10366020u));
  /* 10361e41 push 0x1036601c */
  push32((uint32_t)(0x1036601cu));
  /* 10361e46 call 0x10361e7d */
  push32(0x10361e4bu); f_10361e7d();
  /* 10361e4b pop ecx */
  ECX = (pop32());
  /* 10361e4c pop ecx */
  ECX = (pop32());
  /* 10361e4d test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10361e4f pop ebx */
  EBX = (pop32());
  /* 10361e50 je 0x10361e59 */
  if (C.zf) goto L_10361e59;
  /* 10361e52 call 0x10361e74 */
  push32(0x10361e57u); f_10361e74();
  /* 10361e57 pop edi */
  EDI = (pop32());
  /* 10361e58 ret  */
  ESPCHK(0x10361dc6u, _esp0);
  ESP += 4; return;
L_10361e59:;
  /* 10361e59 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10361e5d mov dword ptr [0x103665a0], edi */
  w32((uint32_t)(0x103665a0), (EDI));
  /* 10361e63 call dword ptr [0x10365080] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365080))), 0x10361e69u);
  /* 10361e69 pop edi */
  EDI = (pop32());
  /* 10361e6a ret  */
  ESPCHK(0x10361dc6u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e6b @ 0x10361e6b (9 bytes, 4 insns) */
void f_10361e6b(void) {
  FTRACE(0x10361e6bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361e6b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10361e6d call 0x103628d6 */
  push32(0x10361e72u); f_103628d6();
  /* 10361e72 pop ecx */
  ECX = (pop32());
  /* 10361e73 ret  */
  ESPCHK(0x10361e6bu, _esp0);
  ESP += 4; return;
}

/* FUN_10001e74 @ 0x10361e74 (9 bytes, 4 insns) */
void f_10361e74(void) {
  FTRACE(0x10361e74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361e74 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10361e76 call 0x10362937 */
  push32(0x10361e7bu); f_10362937();
  /* 10361e7b pop ecx */
  ECX = (pop32());
  /* 10361e7c ret  */
  ESPCHK(0x10361e74u, _esp0);
  ESP += 4; return;
}

/* FUN_10001e7d @ 0x10361e7d (26 bytes, 12 insns) */
void f_10361e7d(void) {
  FTRACE(0x10361e7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361e7d push esi */
  push32((uint32_t)(ESI));
  /* 10361e7e mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
L_10361e82:;
  /* 10361e82 cmp esi, dword ptr [esp + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361e86 jae 0x10361e95 */
  if (!C.cf) goto L_10361e95;
  /* 10361e88 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10361e8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361e8c je 0x10361e90 */
  if (C.zf) goto L_10361e90;
  /* 10361e8e call eax */
  call_ind((uint32_t)(EAX), 0x10361e90u);
L_10361e90:;
  /* 10361e90 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10361e93 jmp 0x10361e82 */
  goto L_10361e82;
L_10361e95:;
  /* 10361e95 pop esi */
  ESI = (pop32());
  /* 10361e96 ret  */
  ESPCHK(0x10361e7du, _esp0);
  ESP += 4; return;
}

/* FUN_10001e97 @ 0x10361e97 (84 bytes, 32 insns) */
void f_10361e97(void) {
  FTRACE(0x10361e97u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361e97 push esi */
  push32((uint32_t)(ESI));
  /* 10361e98 call 0x10362841 */
  push32(0x10361e9du); f_10362841();
  /* 10361e9d call dword ptr [0x10365004] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365004))), 0x10361ea3u);
  /* 10361ea3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361ea6 mov dword ptr [0x1036611c], eax */
  w32((uint32_t)(0x1036611c), (EAX));
  /* 10361eab je 0x10361ee7 */
  if (C.zf) goto L_10361ee7;
  /* 10361ead push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10361eaf push 1 */
  push32((uint32_t)(0x1u));
  /* 10361eb1 call 0x1036294c */
  push32(0x10361eb6u); f_1036294c();
  /* 10361eb6 mov esi, eax */
  ESI = (EAX);
  /* 10361eb8 pop ecx */
  ECX = (pop32());
  /* 10361eb9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10361ebb pop ecx */
  ECX = (pop32());
  /* 10361ebc je 0x10361ee7 */
  if (C.zf) goto L_10361ee7;
  /* 10361ebe push esi */
  push32((uint32_t)(ESI));
  /* 10361ebf push dword ptr [0x1036611c] */
  push32((uint32_t)(r32((uint32_t)(0x1036611c))));
  /* 10361ec5 call dword ptr [0x10365090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365090))), 0x10361ecbu);
  /* 10361ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361ecd je 0x10361ee7 */
  if (C.zf) goto L_10361ee7;
  /* 10361ecf push esi */
  push32((uint32_t)(ESI));
  /* 10361ed0 call 0x10361f09 */
  push32(0x10361ed5u); f_10361f09();
  /* 10361ed5 pop ecx */
  ECX = (pop32());
  /* 10361ed6 call dword ptr [0x1036508c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036508c))), 0x10361edcu);
  /* 10361edc or dword ptr [esi + 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 10361ee0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10361ee2 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10361ee4 pop eax */
  EAX = (pop32());
  /* 10361ee5 pop esi */
  ESI = (pop32());
  /* 10361ee6 ret  */
  ESPCHK(0x10361e97u, _esp0);
  ESP += 4; return;
L_10361ee7:;
  /* 10361ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10361ee9 pop esi */
  ESI = (pop32());
  /* 10361eea ret  */
  ESPCHK(0x10361e97u, _esp0);
  ESP += 4; return;
}

/* FUN_10001eeb @ 0x10361eeb (30 bytes, 8 insns) */
void f_10361eeb(void) {
  FTRACE(0x10361eebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361eeb call 0x1036286a */
  push32(0x10361ef0u); f_1036286a();
  /* 10361ef0 mov eax, dword ptr [0x1036611c] */
  EAX = (r32((uint32_t)(0x1036611c)));
  /* 10361ef5 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361ef8 je 0x10361f08 */
  if (C.zf) goto L_10361f08;
  /* 10361efa push eax */
  push32((uint32_t)(EAX));
  /* 10361efb call dword ptr [0x10365000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365000))), 0x10361f01u);
  /* 10361f01 or dword ptr [0x1036611c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x1036611c)))|(0xffffffffu); w32((uint32_t)(0x1036611c), (_r)); fl_logic(_r,32); }
L_10361f08:;
  /* 10361f08 ret  */
  ESPCHK(0x10361eebu, _esp0);
  ESP += 4; return;
}

/* FUN_10001f09 @ 0x10361f09 (19 bytes, 4 insns) */
void f_10361f09(void) {
  FTRACE(0x10361f09u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361f09 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10361f0d mov dword ptr [eax + 0x50], 0x10366298 */
  w32((uint32_t)(EAX + 0x50), (0x10366298u));
  /* 10361f14 mov dword ptr [eax + 0x14], 1 */
  w32((uint32_t)(EAX + 0x14), (0x1u));
  /* 10361f1b ret  */
  ESPCHK(0x10361f09u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f1c @ 0x10361f1c (160 bytes, 62 insns) */
void f_10361f1c(void) {
  FTRACE(0x10361f1cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361f1c mov eax, dword ptr [0x1036611c] */
  EAX = (r32((uint32_t)(0x1036611c)));
  /* 10361f21 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361f24 je 0x10361fbb */
  if (C.zf) goto L_10361fbb;
  /* 10361f2a push esi */
  push32((uint32_t)(ESI));
  /* 10361f2b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10361f2f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10361f31 jne 0x10361f40 */
  if (!C.zf) goto L_10361f40;
  /* 10361f33 push eax */
  push32((uint32_t)(EAX));
  /* 10361f34 call dword ptr [0x1036509c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036509c))), 0x10361f3au);
  /* 10361f3a mov esi, eax */
  ESI = (EAX);
  /* 10361f3c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10361f3e je 0x10361fac */
  if (C.zf) goto L_10361fac;
L_10361f40:;
  /* 10361f40 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 10361f43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361f45 je 0x10361f4e */
  if (C.zf) goto L_10361f4e;
  /* 10361f47 push eax */
  push32((uint32_t)(EAX));
  /* 10361f48 call 0x103629d9 */
  push32(0x10361f4du); f_103629d9();
  /* 10361f4d pop ecx */
  ECX = (pop32());
L_10361f4e:;
  /* 10361f4e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 10361f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361f53 je 0x10361f5c */
  if (C.zf) goto L_10361f5c;
  /* 10361f55 push eax */
  push32((uint32_t)(EAX));
  /* 10361f56 call 0x103629d9 */
  push32(0x10361f5bu); f_103629d9();
  /* 10361f5b pop ecx */
  ECX = (pop32());
L_10361f5c:;
  /* 10361f5c mov eax, dword ptr [esi + 0x30] */
  EAX = (r32((uint32_t)(ESI + 0x30)));
  /* 10361f5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361f61 je 0x10361f6a */
  if (C.zf) goto L_10361f6a;
  /* 10361f63 push eax */
  push32((uint32_t)(EAX));
  /* 10361f64 call 0x103629d9 */
  push32(0x10361f69u); f_103629d9();
  /* 10361f69 pop ecx */
  ECX = (pop32());
L_10361f6a:;
  /* 10361f6a mov eax, dword ptr [esi + 0x38] */
  EAX = (r32((uint32_t)(ESI + 0x38)));
  /* 10361f6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361f6f je 0x10361f78 */
  if (C.zf) goto L_10361f78;
  /* 10361f71 push eax */
  push32((uint32_t)(EAX));
  /* 10361f72 call 0x103629d9 */
  push32(0x10361f77u); f_103629d9();
  /* 10361f77 pop ecx */
  ECX = (pop32());
L_10361f78:;
  /* 10361f78 mov eax, dword ptr [esi + 0x40] */
  EAX = (r32((uint32_t)(ESI + 0x40)));
  /* 10361f7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361f7d je 0x10361f86 */
  if (C.zf) goto L_10361f86;
  /* 10361f7f push eax */
  push32((uint32_t)(EAX));
  /* 10361f80 call 0x103629d9 */
  push32(0x10361f85u); f_103629d9();
  /* 10361f85 pop ecx */
  ECX = (pop32());
L_10361f86:;
  /* 10361f86 mov eax, dword ptr [esi + 0x44] */
  EAX = (r32((uint32_t)(ESI + 0x44)));
  /* 10361f89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10361f8b je 0x10361f94 */
  if (C.zf) goto L_10361f94;
  /* 10361f8d push eax */
  push32((uint32_t)(EAX));
  /* 10361f8e call 0x103629d9 */
  push32(0x10361f93u); f_103629d9();
  /* 10361f93 pop ecx */
  ECX = (pop32());
L_10361f94:;
  /* 10361f94 mov eax, dword ptr [esi + 0x50] */
  EAX = (r32((uint32_t)(ESI + 0x50)));
  /* 10361f97 cmp eax, 0x10366298 */
  { uint32_t _a=(EAX),_b=(0x10366298u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361f9c je 0x10361fa5 */
  if (C.zf) goto L_10361fa5;
  /* 10361f9e push eax */
  push32((uint32_t)(EAX));
  /* 10361f9f call 0x103629d9 */
  push32(0x10361fa4u); f_103629d9();
  /* 10361fa4 pop ecx */
  ECX = (pop32());
L_10361fa5:;
  /* 10361fa5 push esi */
  push32((uint32_t)(ESI));
  /* 10361fa6 call 0x103629d9 */
  push32(0x10361fabu); f_103629d9();
  /* 10361fab pop ecx */
  ECX = (pop32());
L_10361fac:;
  /* 10361fac push 0 */
  push32((uint32_t)(0x0u));
  /* 10361fae push dword ptr [0x1036611c] */
  push32((uint32_t)(r32((uint32_t)(0x1036611c))));
  /* 10361fb4 call dword ptr [0x10365090] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365090))), 0x10361fbau);
  /* 10361fba pop esi */
  ESI = (pop32());
L_10361fbb:;
  /* 10361fbb ret  */
  ESPCHK(0x10361f1cu, _esp0);
  ESP += 4; return;
}

/* FUN_10001fbc @ 0x10361fbc (444 bytes, 150 insns) */
void f_10361fbc(void) {
  FTRACE(0x10361fbcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10361fbc push ebp */
  push32((uint32_t)(EBP));
  /* 10361fbd mov ebp, esp */
  EBP = (ESP);
  /* 10361fbf sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10361fc2 push ebx */
  push32((uint32_t)(EBX));
  /* 10361fc3 push esi */
  push32((uint32_t)(ESI));
  /* 10361fc4 push edi */
  push32((uint32_t)(EDI));
  /* 10361fc5 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10361fca call 0x10362a21 */
  push32(0x10361fcfu); f_10362a21();
  /* 10361fcf mov esi, eax */
  ESI = (EAX);
  /* 10361fd1 pop ecx */
  ECX = (pop32());
  /* 10361fd2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10361fd4 jne 0x10361fde */
  if (!C.zf) goto L_10361fde;
  /* 10361fd6 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10361fd8 call 0x10361d46 */
  push32(0x10361fddu); f_10361d46();
  /* 10361fdd pop ecx */
  ECX = (pop32());
L_10361fde:;
  /* 10361fde mov dword ptr [0x103669a0], esi */
  w32((uint32_t)(0x103669a0), (ESI));
  /* 10361fe4 mov dword ptr [0x10366aa0], 0x20 */
  w32((uint32_t)(0x10366aa0), (0x20u));
  /* 10361fee lea eax, [esi + 0x480] */
  EAX = ((uint32_t)(ESI + 0x480));
L_10361ff4:;
  /* 10361ff4 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10361ff6 jae 0x10362016 */
  if (!C.cf) goto L_10362016;
  /* 10361ff8 and byte ptr [esi + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))&(0x0u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10361ffc or dword ptr [esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI)))|(0xffffffffu); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 10361fff and dword ptr [esi + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0x0u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10362003 mov byte ptr [esi + 5], 0xa */
  w8((uint32_t)(ESI + 0x5), (0xau));
  /* 10362007 mov eax, dword ptr [0x103669a0] */
  EAX = (r32((uint32_t)(0x103669a0)));
  /* 1036200c add esi, 0x24 */
  { uint32_t _a=(ESI),_b=(0x24u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1036200f add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362014 jmp 0x10361ff4 */
  goto L_10361ff4;
L_10362016:;
  /* 10362016 lea eax, [ebp - 0x48] */
  EAX = ((uint32_t)(EBP + -0x48));
  /* 10362019 push eax */
  push32((uint32_t)(EAX));
  /* 1036201a call dword ptr [0x10365094] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365094))), 0x10362020u);
  /* 10362020 cmp word ptr [ebp - 0x16], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x16))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10362025 je 0x103620fc */
  if (C.zf) goto L_103620fc;
  /* 1036202b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1036202e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10362030 je 0x103620fc */
  if (C.zf) goto L_103620fc;
  /* 10362036 mov edi, dword ptr [eax] */
  EDI = (r32((uint32_t)(EAX)));
  /* 10362038 lea ebx, [eax + 4] */
  EBX = ((uint32_t)(EAX + 0x4));
  /* 1036203b lea eax, [ebx + edi] */
  EAX = ((uint32_t)(EBX + EDI*1));
  /* 1036203e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10362041 mov eax, 0x800 */
  EAX = (0x800u);
  /* 10362046 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362048 jl 0x1036204c */
  if ((C.sf!=C.of)) goto L_1036204c;
  /* 1036204a mov edi, eax */
  EDI = (EAX);
L_1036204c:;
  /* 1036204c cmp dword ptr [0x10366aa0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10366aa0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362052 jge 0x103620aa */
  if ((C.sf==C.of)) goto L_103620aa;
  /* 10362054 mov esi, 0x103669a4 */
  ESI = (0x103669a4u);
L_10362059:;
  /* 10362059 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1036205e call 0x10362a21 */
  push32(0x10362063u); f_10362a21();
  /* 10362063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10362065 pop ecx */
  ECX = (pop32());
  /* 10362066 je 0x103620a4 */
  if (C.zf) goto L_103620a4;
  /* 10362068 add dword ptr [0x10366aa0], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10366aa0))),_b=(0x20u),_r=_a+_b; w32((uint32_t)(0x10366aa0), (_r)); fl_add(_a,_b,_r,32); }
  /* 1036206f mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10362071 lea ecx, [eax + 0x480] */
  ECX = ((uint32_t)(EAX + 0x480));
L_10362077:;
  /* 10362077 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362079 jae 0x10362097 */
  if (!C.cf) goto L_10362097;
  /* 1036207b and byte ptr [eax + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x0u); w8((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,8); }
  /* 1036207f or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10362082 and dword ptr [eax + 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(0x0u); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10362086 mov byte ptr [eax + 5], 0xa */
  w8((uint32_t)(EAX + 0x5), (0xau));
  /* 1036208a mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1036208c add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1036208f add ecx, 0x480 */
  { uint32_t _a=(ECX),_b=(0x480u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362095 jmp 0x10362077 */
  goto L_10362077;
L_10362097:;
  /* 10362097 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1036209a cmp dword ptr [0x10366aa0], edi */
  { uint32_t _a=(r32((uint32_t)(0x10366aa0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103620a0 jl 0x10362059 */
  if ((C.sf!=C.of)) goto L_10362059;
  /* 103620a2 jmp 0x103620aa */
  goto L_103620aa;
L_103620a4:;
  /* 103620a4 mov edi, dword ptr [0x10366aa0] */
  EDI = (r32((uint32_t)(0x10366aa0)));
L_103620aa:;
  /* 103620aa xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103620ac test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103620ae jle 0x103620fc */
  if ((C.zf||C.sf!=C.of)) goto L_103620fc;
L_103620b0:;
  /* 103620b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103620b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103620b5 cmp ecx, -1 */
  { uint32_t _a=(ECX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103620b8 je 0x103620f2 */
  if (C.zf) goto L_103620f2;
  /* 103620ba mov al, byte ptr [ebx] */
  AL = (r8((uint32_t)(EBX)));
  /* 103620bc test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 103620be je 0x103620f2 */
  if (C.zf) goto L_103620f2;
  /* 103620c0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 103620c2 jne 0x103620cf */
  if (!C.zf) goto L_103620cf;
  /* 103620c4 push ecx */
  push32((uint32_t)(ECX));
  /* 103620c5 call dword ptr [0x103650a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650a8))), 0x103620cbu);
  /* 103620cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103620cd je 0x103620f2 */
  if (C.zf) goto L_103620f2;
L_103620cf:;
  /* 103620cf mov ecx, esi */
  ECX = (ESI);
  /* 103620d1 mov eax, esi */
  EAX = (ESI);
  /* 103620d3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 103620d6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 103620d9 mov ecx, dword ptr [ecx*4 + 0x103669a0] */
  ECX = (r32((uint32_t)(ECX*4 + 0x103669a0)));
  /* 103620e0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 103620e3 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 103620e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103620e9 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 103620eb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103620ed mov cl, byte ptr [ebx] */
  CL = (r8((uint32_t)(EBX)));
  /* 103620ef mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
L_103620f2:;
  /* 103620f2 add dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 103620f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103620f7 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103620f8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103620fa jl 0x103620b0 */
  if ((C.sf!=C.of)) goto L_103620b0;
L_103620fc:;
  /* 103620fc xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_103620fe:;
  /* 103620fe mov ecx, dword ptr [0x103669a0] */
  ECX = (r32((uint32_t)(0x103669a0)));
  /* 10362104 lea eax, [ebx + ebx*8] */
  EAX = ((uint32_t)(EBX + EBX*8));
  /* 10362107 cmp dword ptr [ecx + eax*4], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036210b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1036210e jne 0x1036215d */
  if (!C.zf) goto L_1036215d;
  /* 10362110 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10362112 mov byte ptr [esi + 4], 0x81 */
  w8((uint32_t)(ESI + 0x4), (0x81u));
  /* 10362116 jne 0x1036211d */
  if (!C.zf) goto L_1036211d;
  /* 10362118 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1036211a pop eax */
  EAX = (pop32());
  /* 1036211b jmp 0x10362127 */
  goto L_10362127;
L_1036211d:;
  /* 1036211d mov eax, ebx */
  EAX = (EBX);
  /* 1036211f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10362120 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10362122 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362124 add eax, -0xb */
  { uint32_t _a=(EAX),_b=(0xfffffff5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10362127:;
  /* 10362127 push eax */
  push32((uint32_t)(EAX));
  /* 10362128 call dword ptr [0x103650a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650a4))), 0x1036212eu);
  /* 1036212e mov edi, eax */
  EDI = (EAX);
  /* 10362130 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362133 je 0x1036214c */
  if (C.zf) goto L_1036214c;
  /* 10362135 push edi */
  push32((uint32_t)(EDI));
  /* 10362136 call dword ptr [0x103650a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650a8))), 0x1036213cu);
  /* 1036213c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036213e je 0x1036214c */
  if (C.zf) goto L_1036214c;
  /* 10362140 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10362145 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10362147 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036214a jne 0x10362152 */
  if (!C.zf) goto L_10362152;
L_1036214c:;
  /* 1036214c or byte ptr [esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x40u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 10362150 jmp 0x10362161 */
  goto L_10362161;
L_10362152:;
  /* 10362152 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362155 jne 0x10362161 */
  if (!C.zf) goto L_10362161;
  /* 10362157 or byte ptr [esi + 4], 8 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x8u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
  /* 1036215b jmp 0x10362161 */
  goto L_10362161;
L_1036215d:;
  /* 1036215d or byte ptr [esi + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0x4)))|(0x80u); w8((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,8); }
L_10362161:;
  /* 10362161 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10362162 cmp ebx, 3 */
  { uint32_t _a=(EBX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362165 jl 0x103620fe */
  if ((C.sf!=C.of)) goto L_103620fe;
  /* 10362167 push dword ptr [0x10366aa0] */
  push32((uint32_t)(r32((uint32_t)(0x10366aa0))));
  /* 1036216d call dword ptr [0x103650a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650a0))), 0x10362173u);
  /* 10362173 pop edi */
  EDI = (pop32());
  /* 10362174 pop esi */
  ESI = (pop32());
  /* 10362175 pop ebx */
  EBX = (pop32());
  /* 10362176 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10362177 ret  */
  ESPCHK(0x10361fbcu, _esp0);
  ESP += 4; return;
}

/* FUN_10002178 @ 0x10362178 (84 bytes, 33 insns) */
void f_10362178(void) {
  FTRACE(0x10362178u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362178 push ebx */
  push32((uint32_t)(EBX));
  /* 10362179 push esi */
  push32((uint32_t)(ESI));
  /* 1036217a push edi */
  push32((uint32_t)(EDI));
  /* 1036217b mov esi, 0x103669a0 */
  ESI = (0x103669a0u);
L_10362180:;
  /* 10362180 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10362182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10362184 je 0x103621bd */
  if (C.zf) goto L_103621bd;
  /* 10362186 mov edi, eax */
  EDI = (EAX);
  /* 10362188 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1036218d cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036218f jae 0x103621b2 */
  if (!C.cf) goto L_103621b2;
  /* 10362191 lea ebx, [edi + 0xc] */
  EBX = ((uint32_t)(EDI + 0xc));
L_10362194:;
  /* 10362194 cmp dword ptr [ebx - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362198 je 0x103621a1 */
  if (C.zf) goto L_103621a1;
  /* 1036219a push ebx */
  push32((uint32_t)(EBX));
  /* 1036219b call dword ptr [0x10365098] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365098))), 0x103621a1u);
L_103621a1:;
  /* 103621a1 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 103621a3 add edi, 0x24 */
  { uint32_t _a=(EDI),_b=(0x24u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103621a6 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103621ab add ebx, 0x24 */
  { uint32_t _a=(EBX),_b=(0x24u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 103621ae cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103621b0 jb 0x10362194 */
  if (C.cf) goto L_10362194;
L_103621b2:;
  /* 103621b2 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103621b4 call 0x103629d9 */
  push32(0x103621b9u); f_103629d9();
  /* 103621b9 and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 103621bc pop ecx */
  ECX = (pop32());
L_103621bd:;
  /* 103621bd add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103621c0 cmp esi, 0x10366aa0 */
  { uint32_t _a=(ESI),_b=(0x10366aa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103621c6 jl 0x10362180 */
  if ((C.sf!=C.of)) goto L_10362180;
  /* 103621c8 pop edi */
  EDI = (pop32());
  /* 103621c9 pop esi */
  ESI = (pop32());
  /* 103621ca pop ebx */
  EBX = (pop32());
  /* 103621cb ret  */
  ESPCHK(0x10362178u, _esp0);
  ESP += 4; return;
}

/* FUN_100021cc @ 0x103621cc (185 bytes, 71 insns) */
void f_103621cc(void) {
  FTRACE(0x103621ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103621cc push ebx */
  push32((uint32_t)(EBX));
  /* 103621cd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103621cf cmp dword ptr [0x10366aa8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10366aa8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103621d5 push esi */
  push32((uint32_t)(ESI));
  /* 103621d6 push edi */
  push32((uint32_t)(EDI));
  /* 103621d7 jne 0x103621de */
  if (!C.zf) goto L_103621de;
  /* 103621d9 call 0x10362ff3 */
  push32(0x103621deu); f_10362ff3();
L_103621de:;
  /* 103621de mov esi, dword ptr [0x10366550] */
  ESI = (r32((uint32_t)(0x10366550)));
  /* 103621e4 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_103621e6:;
  /* 103621e6 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103621e8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103621ea je 0x103621fe */
  if (C.zf) goto L_103621fe;
  /* 103621ec cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103621ee je 0x103621f1 */
  if (C.zf) goto L_103621f1;
  /* 103621f0 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_103621f1:;
  /* 103621f1 push esi */
  push32((uint32_t)(ESI));
  /* 103621f2 call 0x10362ba0 */
  push32(0x103621f7u); f_10362ba0();
  /* 103621f7 pop ecx */
  ECX = (pop32());
  /* 103621f8 lea esi, [esi + eax + 1] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x1));
  /* 103621fc jmp 0x103621e6 */
  goto L_103621e6;
L_103621fe:;
  /* 103621fe lea eax, [edi*4 + 4] */
  EAX = ((uint32_t)(EDI*4 + 0x4));
  /* 10362205 push eax */
  push32((uint32_t)(EAX));
  /* 10362206 call 0x10362a21 */
  push32(0x1036220bu); f_10362a21();
  /* 1036220b mov esi, eax */
  ESI = (EAX);
  /* 1036220d pop ecx */
  ECX = (pop32());
  /* 1036220e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362210 mov dword ptr [0x10366580], esi */
  w32((uint32_t)(0x10366580), (ESI));
  /* 10362216 jne 0x10362220 */
  if (!C.zf) goto L_10362220;
  /* 10362218 push 9 */
  push32((uint32_t)(0x9u));
  /* 1036221a call 0x10361d46 */
  push32(0x1036221fu); f_10361d46();
  /* 1036221f pop ecx */
  ECX = (pop32());
L_10362220:;
  /* 10362220 mov edi, dword ptr [0x10366550] */
  EDI = (r32((uint32_t)(0x10366550)));
  /* 10362226 cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362228 je 0x10362263 */
  if (C.zf) goto L_10362263;
  /* 1036222a push ebp */
  push32((uint32_t)(EBP));
L_1036222b:;
  /* 1036222b push edi */
  push32((uint32_t)(EDI));
  /* 1036222c call 0x10362ba0 */
  push32(0x10362231u); f_10362ba0();
  /* 10362231 mov ebp, eax */
  EBP = (EAX);
  /* 10362233 pop ecx */
  ECX = (pop32());
  /* 10362234 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 10362235 cmp byte ptr [edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362238 je 0x1036225c */
  if (C.zf) goto L_1036225c;
  /* 1036223a push ebp */
  push32((uint32_t)(EBP));
  /* 1036223b call 0x10362a21 */
  push32(0x10362240u); f_10362a21();
  /* 10362240 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362242 pop ecx */
  ECX = (pop32());
  /* 10362243 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10362245 jne 0x1036224f */
  if (!C.zf) goto L_1036224f;
  /* 10362247 push 9 */
  push32((uint32_t)(0x9u));
  /* 10362249 call 0x10361d46 */
  push32(0x1036224eu); f_10361d46();
  /* 1036224e pop ecx */
  ECX = (pop32());
L_1036224f:;
  /* 1036224f push edi */
  push32((uint32_t)(EDI));
  /* 10362250 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10362252 call 0x10362ab0 */
  push32(0x10362257u); f_10362ab0();
  /* 10362257 pop ecx */
  ECX = (pop32());
  /* 10362258 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1036225b pop ecx */
  ECX = (pop32());
L_1036225c:;
  /* 1036225c add edi, ebp */
  { uint32_t _a=(EDI),_b=(EBP),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1036225e cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362260 jne 0x1036222b */
  if (!C.zf) goto L_1036222b;
  /* 10362262 pop ebp */
  EBP = (pop32());
L_10362263:;
  /* 10362263 push dword ptr [0x10366550] */
  push32((uint32_t)(r32((uint32_t)(0x10366550))));
  /* 10362269 call 0x103629d9 */
  push32(0x1036226eu); f_103629d9();
  /* 1036226e pop ecx */
  ECX = (pop32());
  /* 1036226f mov dword ptr [0x10366550], ebx */
  w32((uint32_t)(0x10366550), (EBX));
  /* 10362275 mov dword ptr [esi], ebx */
  w32((uint32_t)(ESI), (EBX));
  /* 10362277 pop edi */
  EDI = (pop32());
  /* 10362278 pop esi */
  ESI = (pop32());
  /* 10362279 mov dword ptr [0x10366aa4], 1 */
  w32((uint32_t)(0x10366aa4), (0x1u));
  /* 10362283 pop ebx */
  EBX = (pop32());
  /* 10362284 ret  */
  ESPCHK(0x103621ccu, _esp0);
  ESP += 4; return;
}

/* FUN_10002285 @ 0x10362285 (153 bytes, 62 insns) */
void f_10362285(void) {
  FTRACE(0x10362285u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362285 push ebp */
  push32((uint32_t)(EBP));
  /* 10362286 mov ebp, esp */
  EBP = (ESP);
  /* 10362288 push ecx */
  push32((uint32_t)(ECX));
  /* 10362289 push ecx */
  push32((uint32_t)(ECX));
  /* 1036228a push ebx */
  push32((uint32_t)(EBX));
  /* 1036228b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1036228d cmp dword ptr [0x10366aa8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10366aa8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362293 push esi */
  push32((uint32_t)(ESI));
  /* 10362294 push edi */
  push32((uint32_t)(EDI));
  /* 10362295 jne 0x1036229c */
  if (!C.zf) goto L_1036229c;
  /* 10362297 call 0x10362ff3 */
  push32(0x1036229cu); f_10362ff3();
L_1036229c:;
  /* 1036229c mov esi, 0x103665a4 */
  ESI = (0x103665a4u);
  /* 103622a1 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103622a6 push esi */
  push32((uint32_t)(ESI));
  /* 103622a7 push ebx */
  push32((uint32_t)(EBX));
  /* 103622a8 call dword ptr [0x10365074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365074))), 0x103622aeu);
  /* 103622ae mov eax, dword ptr [0x10366ab8] */
  EAX = (r32((uint32_t)(0x10366ab8)));
  /* 103622b3 mov dword ptr [0x10366590], esi */
  w32((uint32_t)(0x10366590), (ESI));
  /* 103622b9 mov edi, esi */
  EDI = (ESI);
  /* 103622bb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103622bd je 0x103622c1 */
  if (C.zf) goto L_103622c1;
  /* 103622bf mov edi, eax */
  EDI = (EAX);
L_103622c1:;
  /* 103622c1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103622c4 push eax */
  push32((uint32_t)(EAX));
  /* 103622c5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 103622c8 push eax */
  push32((uint32_t)(EAX));
  /* 103622c9 push ebx */
  push32((uint32_t)(EBX));
  /* 103622ca push ebx */
  push32((uint32_t)(EBX));
  /* 103622cb push edi */
  push32((uint32_t)(EDI));
  /* 103622cc call 0x1036231e */
  push32(0x103622d1u); f_1036231e();
  /* 103622d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103622d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103622d7 lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 103622da push eax */
  push32((uint32_t)(EAX));
  /* 103622db call 0x10362a21 */
  push32(0x103622e0u); f_10362a21();
  /* 103622e0 mov esi, eax */
  ESI = (EAX);
  /* 103622e2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103622e5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103622e7 jne 0x103622f1 */
  if (!C.zf) goto L_103622f1;
  /* 103622e9 push 8 */
  push32((uint32_t)(0x8u));
  /* 103622eb call 0x10361d46 */
  push32(0x103622f0u); f_10361d46();
  /* 103622f0 pop ecx */
  ECX = (pop32());
L_103622f1:;
  /* 103622f1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 103622f4 push eax */
  push32((uint32_t)(EAX));
  /* 103622f5 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 103622f8 push eax */
  push32((uint32_t)(EAX));
  /* 103622f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103622fc lea eax, [esi + eax*4] */
  EAX = ((uint32_t)(ESI + EAX*4));
  /* 103622ff push eax */
  push32((uint32_t)(EAX));
  /* 10362300 push esi */
  push32((uint32_t)(ESI));
  /* 10362301 push edi */
  push32((uint32_t)(EDI));
  /* 10362302 call 0x1036231e */
  push32(0x10362307u); f_1036231e();
  /* 10362307 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1036230a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036230d dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1036230e mov dword ptr [0x10366578], esi */
  w32((uint32_t)(0x10366578), (ESI));
  /* 10362314 pop edi */
  EDI = (pop32());
  /* 10362315 pop esi */
  ESI = (pop32());
  /* 10362316 mov dword ptr [0x10366574], eax */
  w32((uint32_t)(0x10366574), (EAX));
  /* 1036231b pop ebx */
  EBX = (pop32());
  /* 1036231c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036231d ret  */
  ESPCHK(0x10362285u, _esp0);
  ESP += 4; return;
}

/* FUN_1000231e @ 0x1036231e (436 bytes, 187 insns) */
void f_1036231e(void) {
  FTRACE(0x1036231eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1036231e push ebp */
  push32((uint32_t)(EBP));
  /* 1036231f mov ebp, esp */
  EBP = (ESP);
  /* 10362321 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10362324 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10362327 push ebx */
  push32((uint32_t)(EBX));
  /* 10362328 push esi */
  push32((uint32_t)(ESI));
  /* 10362329 and dword ptr [ecx], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(0x0u); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1036232c mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1036232f push edi */
  push32((uint32_t)(EDI));
  /* 10362330 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10362333 mov dword ptr [eax], 1 */
  w32((uint32_t)(EAX), (0x1u));
  /* 10362339 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1036233c test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1036233e je 0x10362348 */
  if (C.zf) goto L_10362348;
  /* 10362340 mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 10362342 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10362345 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10362348:;
  /* 10362348 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1036234b jne 0x10362391 */
  if (!C.zf) goto L_10362391;
L_1036234d:;
  /* 1036234d mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 10362350 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362351 cmp dl, 0x22 */
  { uint32_t _a=(DL),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362354 je 0x1036237f */
  if (C.zf) goto L_1036237f;
  /* 10362356 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10362358 je 0x1036237f */
  if (C.zf) goto L_1036237f;
  /* 1036235a movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1036235d test byte ptr [edx + 0x10366881], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10366881)))&(0x4u); fl_logic(_r,8); }
  /* 10362364 je 0x10362372 */
  if (C.zf) goto L_10362372;
  /* 10362366 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10362368 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1036236a je 0x10362372 */
  if (C.zf) goto L_10362372;
  /* 1036236c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1036236e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10362370 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10362371 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10362372:;
  /* 10362372 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10362374 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10362376 je 0x1036234d */
  if (C.zf) goto L_1036234d;
  /* 10362378 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1036237a mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1036237c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1036237d jmp 0x1036234d */
  goto L_1036234d;
L_1036237f:;
  /* 1036237f inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10362381 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10362383 je 0x10362389 */
  if (C.zf) goto L_10362389;
  /* 10362385 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 10362388 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_10362389:;
  /* 10362389 cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1036238c jne 0x103623d4 */
  if (!C.zf) goto L_103623d4;
  /* 1036238e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1036238f jmp 0x103623d4 */
  goto L_103623d4;
L_10362391:;
  /* 10362391 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 10362393 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10362395 je 0x1036239c */
  if (C.zf) goto L_1036239c;
  /* 10362397 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10362399 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1036239b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1036239c:;
  /* 1036239c mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 1036239e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1036239f movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 103623a2 test byte ptr [ebx + 0x10366881], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10366881)))&(0x4u); fl_logic(_r,8); }
  /* 103623a9 je 0x103623b7 */
  if (C.zf) goto L_103623b7;
  /* 103623ab inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103623ad test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103623af je 0x103623b6 */
  if (C.zf) goto L_103623b6;
  /* 103623b1 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 103623b3 mov byte ptr [esi], bl */
  w8((uint32_t)(ESI), (BL));
  /* 103623b5 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_103623b6:;
  /* 103623b6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_103623b7:;
  /* 103623b7 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103623ba je 0x103623c5 */
  if (C.zf) goto L_103623c5;
  /* 103623bc test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103623be je 0x103623c9 */
  if (C.zf) goto L_103623c9;
  /* 103623c0 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103623c3 jne 0x10362391 */
  if (!C.zf) goto L_10362391;
L_103623c5:;
  /* 103623c5 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103623c7 jne 0x103623cc */
  if (!C.zf) goto L_103623cc;
L_103623c9:;
  /* 103623c9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 103623ca jmp 0x103623d4 */
  goto L_103623d4;
L_103623cc:;
  /* 103623cc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103623ce je 0x103623d4 */
  if (C.zf) goto L_103623d4;
  /* 103623d0 and byte ptr [esi - 1], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x1)))&(0x0u); w8((uint32_t)(ESI + -0x1), (_r)); fl_logic(_r,8); }
L_103623d4:;
  /* 103623d4 and dword ptr [ebp + 0x18], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x18)))&(0x0u); w32((uint32_t)(EBP + 0x18), (_r)); fl_logic(_r,32); }
L_103623d8:;
  /* 103623d8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103623db je 0x103624c1 */
  if (C.zf) goto L_103624c1;
L_103623e1:;
  /* 103623e1 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 103623e3 cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103623e6 je 0x103623ed */
  if (C.zf) goto L_103623ed;
  /* 103623e8 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103623eb jne 0x103623f0 */
  if (!C.zf) goto L_103623f0;
L_103623ed:;
  /* 103623ed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103623ee jmp 0x103623e1 */
  goto L_103623e1;
L_103623f0:;
  /* 103623f0 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103623f3 je 0x103624c1 */
  if (C.zf) goto L_103624c1;
  /* 103623f9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103623fb je 0x10362405 */
  if (C.zf) goto L_10362405;
  /* 103623fd mov dword ptr [edi], esi */
  w32((uint32_t)(EDI), (ESI));
  /* 103623ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10362402 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10362405:;
  /* 10362405 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10362408 inc dword ptr [edx] */
  { uint32_t _r=(r32((uint32_t)(EDX)))+1; w32((uint32_t)(EDX), (_r)); fl_inc(_r,32); }
L_1036240a:;
  /* 1036240a mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
  /* 10362411 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10362413:;
  /* 10362413 cmp byte ptr [eax], 0x5c */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362416 jne 0x1036241c */
  if (!C.zf) goto L_1036241c;
  /* 10362418 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362419 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1036241a jmp 0x10362413 */
  goto L_10362413;
L_1036241c:;
  /* 1036241c cmp byte ptr [eax], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1036241f jne 0x1036244d */
  if (!C.zf) goto L_1036244d;
  /* 10362421 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 10362424 jne 0x1036244b */
  if (!C.zf) goto L_1036244b;
  /* 10362426 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10362428 cmp dword ptr [ebp + 0x18], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036242b je 0x1036243a */
  if (C.zf) goto L_1036243a;
  /* 1036242d cmp byte ptr [eax + 1], 0x22 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x1))),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362431 lea edx, [eax + 1] */
  EDX = ((uint32_t)(EAX + 0x1));
  /* 10362434 jne 0x1036243a */
  if (!C.zf) goto L_1036243a;
  /* 10362436 mov eax, edx */
  EAX = (EDX);
  /* 10362438 jmp 0x1036243d */
  goto L_1036243d;
L_1036243a:;
  /* 1036243a mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
L_1036243d:;
  /* 1036243d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 10362440 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10362442 cmp dword ptr [ebp + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362445 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10362448 mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1036244b:;
  /* 1036244b shr ebx, 1 */
  EBX = (sh_shr((uint32_t)(EBX), (0x1u)&0x1f, 32));
L_1036244d:;
  /* 1036244d mov edx, ebx */
  EDX = (EBX);
  /* 1036244f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10362450 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10362452 je 0x10362462 */
  if (C.zf) goto L_10362462;
  /* 10362454 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10362455:;
  /* 10362455 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10362457 je 0x1036245d */
  if (C.zf) goto L_1036245d;
  /* 10362459 mov byte ptr [esi], 0x5c */
  w8((uint32_t)(ESI), (0x5cu));
  /* 1036245c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1036245d:;
  /* 1036245d inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 1036245f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10362460 jne 0x10362455 */
  if (!C.zf) goto L_10362455;
L_10362462:;
  /* 10362462 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10362464 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10362466 je 0x103624b2 */
  if (C.zf) goto L_103624b2;
  /* 10362468 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036246c jne 0x10362478 */
  if (!C.zf) goto L_10362478;
  /* 1036246e cmp dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362471 je 0x103624b2 */
  if (C.zf) goto L_103624b2;
  /* 10362473 cmp dl, 9 */
  { uint32_t _a=(DL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362476 je 0x103624b2 */
  if (C.zf) goto L_103624b2;
L_10362478:;
  /* 10362478 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036247c je 0x103624ac */
  if (C.zf) goto L_103624ac;
  /* 1036247e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10362480 je 0x1036249b */
  if (C.zf) goto L_1036249b;
  /* 10362482 movzx ebx, dl */
  EBX = ((uint32_t)(DL));
  /* 10362485 test byte ptr [ebx + 0x10366881], 4 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x10366881)))&(0x4u); fl_logic(_r,8); }
  /* 1036248c je 0x10362494 */
  if (C.zf) goto L_10362494;
  /* 1036248e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10362490 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10362491 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362492 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_10362494:;
  /* 10362494 mov dl, byte ptr [eax] */
  DL = (r8((uint32_t)(EAX)));
  /* 10362496 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 10362498 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10362499 jmp 0x103624aa */
  goto L_103624aa;
L_1036249b:;
  /* 1036249b movzx edx, dl */
  EDX = ((uint32_t)(DL));
  /* 1036249e test byte ptr [edx + 0x10366881], 4 */
  { uint32_t _r=(r8((uint32_t)(EDX + 0x10366881)))&(0x4u); fl_logic(_r,8); }
  /* 103624a5 je 0x103624aa */
  if (C.zf) goto L_103624aa;
  /* 103624a7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103624a8 inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_103624aa:;
  /* 103624aa inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
L_103624ac:;
  /* 103624ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103624ad jmp 0x1036240a */
  goto L_1036240a;
L_103624b2:;
  /* 103624b2 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103624b4 je 0x103624ba */
  if (C.zf) goto L_103624ba;
  /* 103624b6 and byte ptr [esi], 0 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x0u); w8((uint32_t)(ESI), (_r)); fl_logic(_r,8); }
  /* 103624b9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_103624ba:;
  /* 103624ba inc dword ptr [ecx] */
  { uint32_t _r=(r32((uint32_t)(ECX)))+1; w32((uint32_t)(ECX), (_r)); fl_inc(_r,32); }
  /* 103624bc jmp 0x103623d8 */
  goto L_103623d8;
L_103624c1:;
  /* 103624c1 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103624c3 je 0x103624c8 */
  if (C.zf) goto L_103624c8;
  /* 103624c5 and dword ptr [edi], 0 */
  { uint32_t _r=(r32((uint32_t)(EDI)))&(0x0u); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_103624c8:;
  /* 103624c8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103624cb pop edi */
  EDI = (pop32());
  /* 103624cc pop esi */
  ESI = (pop32());
  /* 103624cd pop ebx */
  EBX = (pop32());
  /* 103624ce inc dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))+1; w32((uint32_t)(EAX), (_r)); fl_inc(_r,32); }
  /* 103624d0 pop ebp */
  EBP = (pop32());
  /* 103624d1 ret  */
  ESPCHK(0x1036231eu, _esp0);
  ESP += 4; return;
}

/* FUN_100024d2 @ 0x103624d2 (306 bytes, 132 insns) */
void f_103624d2(void) {
  FTRACE(0x103624d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103624d2 push ecx */
  push32((uint32_t)(ECX));
  /* 103624d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103624d4 mov eax, dword ptr [0x103666a8] */
  EAX = (r32((uint32_t)(0x103666a8)));
  /* 103624d9 push ebx */
  push32((uint32_t)(EBX));
  /* 103624da push ebp */
  push32((uint32_t)(EBP));
  /* 103624db mov ebp, dword ptr [0x10365060] */
  EBP = (r32((uint32_t)(0x10365060)));
  /* 103624e1 push esi */
  push32((uint32_t)(ESI));
  /* 103624e2 push edi */
  push32((uint32_t)(EDI));
  /* 103624e3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103624e5 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103624e7 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103624e9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103624eb jne 0x10362520 */
  if (!C.zf) goto L_10362520;
  /* 103624ed call ebp */
  call_ind((uint32_t)(EBP), 0x103624efu);
  /* 103624ef mov esi, eax */
  ESI = (EAX);
  /* 103624f1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103624f3 je 0x10362501 */
  if (C.zf) goto L_10362501;
  /* 103624f5 mov dword ptr [0x103666a8], 1 */
  w32((uint32_t)(0x103666a8), (0x1u));
  /* 103624ff jmp 0x10362529 */
  goto L_10362529;
L_10362501:;
  /* 10362501 call dword ptr [0x10365064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365064))), 0x10362507u);
  /* 10362507 mov edi, eax */
  EDI = (EAX);
  /* 10362509 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036250b je 0x103625fb */
  if (C.zf) goto L_103625fb;
  /* 10362511 mov dword ptr [0x103666a8], 2 */
  w32((uint32_t)(0x103666a8), (0x2u));
  /* 1036251b jmp 0x103625af */
  goto L_103625af;
L_10362520:;
  /* 10362520 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362523 jne 0x103625aa */
  if (!C.zf) goto L_103625aa;
L_10362529:;
  /* 10362529 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036252b jne 0x10362539 */
  if (!C.zf) goto L_10362539;
  /* 1036252d call ebp */
  call_ind((uint32_t)(EBP), 0x1036252fu);
  /* 1036252f mov esi, eax */
  ESI = (EAX);
  /* 10362531 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362533 je 0x103625fb */
  if (C.zf) goto L_103625fb;
L_10362539:;
  /* 10362539 cmp word ptr [esi], bx */
  { uint32_t _a=(r16((uint32_t)(ESI))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1036253c mov eax, esi */
  EAX = (ESI);
  /* 1036253e je 0x1036254e */
  if (C.zf) goto L_1036254e;
L_10362540:;
  /* 10362540 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362541 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362542 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10362545 jne 0x10362540 */
  if (!C.zf) goto L_10362540;
  /* 10362547 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362548 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362549 cmp word ptr [eax], bx */
  { uint32_t _a=(r16((uint32_t)(EAX))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1036254c jne 0x10362540 */
  if (!C.zf) goto L_10362540;
L_1036254e:;
  /* 1036254e sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362550 mov edi, dword ptr [0x10365068] */
  EDI = (r32((uint32_t)(0x10365068)));
  /* 10362556 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10362558 push ebx */
  push32((uint32_t)(EBX));
  /* 10362559 push ebx */
  push32((uint32_t)(EBX));
  /* 1036255a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1036255b push ebx */
  push32((uint32_t)(EBX));
  /* 1036255c push ebx */
  push32((uint32_t)(EBX));
  /* 1036255d push eax */
  push32((uint32_t)(EAX));
  /* 1036255e push esi */
  push32((uint32_t)(ESI));
  /* 1036255f push ebx */
  push32((uint32_t)(EBX));
  /* 10362560 push ebx */
  push32((uint32_t)(EBX));
  /* 10362561 mov dword ptr [esp + 0x34], eax */
  w32((uint32_t)(ESP + 0x34), (EAX));
  /* 10362565 call edi */
  call_ind((uint32_t)(EDI), 0x10362567u);
  /* 10362567 mov ebp, eax */
  EBP = (EAX);
  /* 10362569 cmp ebp, ebx */
  { uint32_t _a=(EBP),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036256b je 0x1036259f */
  if (C.zf) goto L_1036259f;
  /* 1036256d push ebp */
  push32((uint32_t)(EBP));
  /* 1036256e call 0x10362a21 */
  push32(0x10362573u); f_10362a21();
  /* 10362573 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362575 pop ecx */
  ECX = (pop32());
  /* 10362576 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1036257a je 0x1036259f */
  if (C.zf) goto L_1036259f;
  /* 1036257c push ebx */
  push32((uint32_t)(EBX));
  /* 1036257d push ebx */
  push32((uint32_t)(EBX));
  /* 1036257e push ebp */
  push32((uint32_t)(EBP));
  /* 1036257f push eax */
  push32((uint32_t)(EAX));
  /* 10362580 push dword ptr [esp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x24))));
  /* 10362584 push esi */
  push32((uint32_t)(ESI));
  /* 10362585 push ebx */
  push32((uint32_t)(EBX));
  /* 10362586 push ebx */
  push32((uint32_t)(EBX));
  /* 10362587 call edi */
  call_ind((uint32_t)(EDI), 0x10362589u);
  /* 10362589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036258b jne 0x1036259b */
  if (!C.zf) goto L_1036259b;
  /* 1036258d push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 10362591 call 0x103629d9 */
  push32(0x10362596u); f_103629d9();
  /* 10362596 pop ecx */
  ECX = (pop32());
  /* 10362597 mov dword ptr [esp + 0x10], ebx */
  w32((uint32_t)(ESP + 0x10), (EBX));
L_1036259b:;
  /* 1036259b mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
L_1036259f:;
  /* 1036259f push esi */
  push32((uint32_t)(ESI));
  /* 103625a0 call dword ptr [0x1036506c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036506c))), 0x103625a6u);
  /* 103625a6 mov eax, ebx */
  EAX = (EBX);
  /* 103625a8 jmp 0x103625fd */
  goto L_103625fd;
L_103625aa:;
  /* 103625aa cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103625ad jne 0x103625fb */
  if (!C.zf) goto L_103625fb;
L_103625af:;
  /* 103625af cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103625b1 jne 0x103625bf */
  if (!C.zf) goto L_103625bf;
  /* 103625b3 call dword ptr [0x10365064] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365064))), 0x103625b9u);
  /* 103625b9 mov edi, eax */
  EDI = (EAX);
  /* 103625bb cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103625bd je 0x103625fb */
  if (C.zf) goto L_103625fb;
L_103625bf:;
  /* 103625bf cmp byte ptr [edi], bl */
  { uint32_t _a=(r8((uint32_t)(EDI))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103625c1 mov eax, edi */
  EAX = (EDI);
  /* 103625c3 je 0x103625cf */
  if (C.zf) goto L_103625cf;
L_103625c5:;
  /* 103625c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103625c6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103625c8 jne 0x103625c5 */
  if (!C.zf) goto L_103625c5;
  /* 103625ca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103625cb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103625cd jne 0x103625c5 */
  if (!C.zf) goto L_103625c5;
L_103625cf:;
  /* 103625cf sub eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103625d1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103625d2 mov ebp, eax */
  EBP = (EAX);
  /* 103625d4 push ebp */
  push32((uint32_t)(EBP));
  /* 103625d5 call 0x10362a21 */
  push32(0x103625dau); f_10362a21();
  /* 103625da mov esi, eax */
  ESI = (EAX);
  /* 103625dc pop ecx */
  ECX = (pop32());
  /* 103625dd cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103625df jne 0x103625e5 */
  if (!C.zf) goto L_103625e5;
  /* 103625e1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 103625e3 jmp 0x103625f0 */
  goto L_103625f0;
L_103625e5:;
  /* 103625e5 push ebp */
  push32((uint32_t)(EBP));
  /* 103625e6 push edi */
  push32((uint32_t)(EDI));
  /* 103625e7 push esi */
  push32((uint32_t)(ESI));
  /* 103625e8 call 0x10363010 */
  push32(0x103625edu); f_10363010();
  /* 103625ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103625f0:;
  /* 103625f0 push edi */
  push32((uint32_t)(EDI));
  /* 103625f1 call dword ptr [0x10365070] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365070))), 0x103625f7u);
  /* 103625f7 mov eax, esi */
  EAX = (ESI);
  /* 103625f9 jmp 0x103625fd */
  goto L_103625fd;
L_103625fb:;
  /* 103625fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103625fd:;
  /* 103625fd pop edi */
  EDI = (pop32());
  /* 103625fe pop esi */
  ESI = (pop32());
  /* 103625ff pop ebp */
  EBP = (pop32());
  /* 10362600 pop ebx */
  EBX = (pop32());
  /* 10362601 pop ecx */
  ECX = (pop32());
  /* 10362602 pop ecx */
  ECX = (pop32());
  /* 10362603 ret  */
  ESPCHK(0x103624d2u, _esp0);
  ESP += 4; return;
}

/* FUN_10002604 @ 0x10362604 (60 bytes, 20 insns) */
void f_10362604(void) {
  FTRACE(0x10362604u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362604 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362606 push 0 */
  push32((uint32_t)(0x0u));
  /* 10362608 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036260c push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10362611 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10362614 push eax */
  push32((uint32_t)(EAX));
  /* 10362615 call dword ptr [0x10365058] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365058))), 0x1036261bu);
  /* 1036261b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036261d mov dword ptr [0x10366988], eax */
  w32((uint32_t)(0x10366988), (EAX));
  /* 10362622 je 0x10362639 */
  if (C.zf) goto L_10362639;
  /* 10362624 call 0x10363345 */
  push32(0x10362629u); f_10363345();
  /* 10362629 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036262b jne 0x1036263c */
  if (!C.zf) goto L_1036263c;
  /* 1036262d push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10362633 call dword ptr [0x1036505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036505c))), 0x10362639u);
L_10362639:;
  /* 10362639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1036263b ret  */
  ESPCHK(0x10362604u, _esp0);
  ESP += 4; return;
L_1036263c:;
  /* 1036263c push 1 */
  push32((uint32_t)(0x1u));
  /* 1036263e pop eax */
  EAX = (pop32());
  /* 1036263f ret  */
  ESPCHK(0x10362604u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x10362640 (117 bytes, 38 insns) */
void f_10362640(void) {
  FTRACE(0x10362640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362640 push ebx */
  push32((uint32_t)(EBX));
  /* 10362641 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10362643 cmp dword ptr [0x10366760], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10366760))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362649 push ebp */
  push32((uint32_t)(EBP));
  /* 1036264a mov ebp, dword ptr [0x10365050] */
  EBP = (r32((uint32_t)(0x10365050)));
  /* 10362650 jle 0x10362696 */
  if ((C.zf||C.sf!=C.of)) goto L_10362696;
  /* 10362652 mov eax, dword ptr [0x10366764] */
  EAX = (r32((uint32_t)(0x10366764)));
  /* 10362657 push esi */
  push32((uint32_t)(ESI));
  /* 10362658 push edi */
  push32((uint32_t)(EDI));
  /* 10362659 mov edi, dword ptr [0x10365054] */
  EDI = (r32((uint32_t)(0x10365054)));
  /* 1036265f lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_10362662:;
  /* 10362662 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10362667 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1036266c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1036266e call edi */
  call_ind((uint32_t)(EDI), 0x10362670u);
  /* 10362670 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10362675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10362677 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10362679 call edi */
  call_ind((uint32_t)(EDI), 0x1036267bu);
  /* 1036267b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 1036267e push 0 */
  push32((uint32_t)(0x0u));
  /* 10362680 push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10362686 call ebp */
  call_ind((uint32_t)(EBP), 0x10362688u);
  /* 10362688 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1036268b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1036268c cmp ebx, dword ptr [0x10366760] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10366760))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362692 jl 0x10362662 */
  if ((C.sf!=C.of)) goto L_10362662;
  /* 10362694 pop edi */
  EDI = (pop32());
  /* 10362695 pop esi */
  ESI = (pop32());
L_10362696:;
  /* 10362696 push dword ptr [0x10366764] */
  push32((uint32_t)(r32((uint32_t)(0x10366764))));
  /* 1036269c push 0 */
  push32((uint32_t)(0x0u));
  /* 1036269e push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 103626a4 call ebp */
  call_ind((uint32_t)(EBP), 0x103626a6u);
  /* 103626a6 push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 103626ac call dword ptr [0x1036505c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036505c))), 0x103626b2u);
  /* 103626b2 pop ebp */
  EBP = (pop32());
  /* 103626b3 pop ebx */
  EBX = (pop32());
  /* 103626b4 ret  */
  ESPCHK(0x10362640u, _esp0);
  ESP += 4; return;
}

/* FUN_100026b5 @ 0x103626b5 (57 bytes, 18 insns) */
void f_103626b5(void) {
  FTRACE(0x103626b5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103626b5 mov eax, dword ptr [0x10366558] */
  EAX = (r32((uint32_t)(0x10366558)));
  /* 103626ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103626bd je 0x103626cc */
  if (C.zf) goto L_103626cc;
  /* 103626bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103626c1 jne 0x103626ed */
  if (!C.zf) goto L_103626ed;
  /* 103626c3 cmp dword ptr [0x1036655c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1036655c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103626ca jne 0x103626ed */
  if (!C.zf) goto L_103626ed;
L_103626cc:;
  /* 103626cc push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 103626d1 call 0x103626ee */
  push32(0x103626d6u); f_103626ee();
  /* 103626d6 mov eax, dword ptr [0x103666ac] */
  EAX = (r32((uint32_t)(0x103666ac)));
  /* 103626db pop ecx */
  ECX = (pop32());
  /* 103626dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103626de je 0x103626e2 */
  if (C.zf) goto L_103626e2;
  /* 103626e0 call eax */
  call_ind((uint32_t)(EAX), 0x103626e2u);
L_103626e2:;
  /* 103626e2 push 0xff */
  push32((uint32_t)(0xffu));
  /* 103626e7 call 0x103626ee */
  push32(0x103626ecu); f_103626ee();
  /* 103626ec pop ecx */
  ECX = (pop32());
L_103626ed:;
  /* 103626ed ret  */
  ESPCHK(0x103626b5u, _esp0);
  ESP += 4; return;
}

/* FUN_100026ee @ 0x103626ee (339 bytes, 100 insns) */
void f_103626ee(void) {
  FTRACE(0x103626eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103626ee push ebp */
  push32((uint32_t)(EBP));
  /* 103626ef mov ebp, esp */
  EBP = (ESP);
  /* 103626f1 sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103626f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103626fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103626fc mov eax, 0x10366148 */
  EAX = (0x10366148u);
L_10362701:;
  /* 10362701 cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362703 je 0x10362710 */
  if (C.zf) goto L_10362710;
  /* 10362705 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362708 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362709 cmp eax, 0x103661d8 */
  { uint32_t _a=(EAX),_b=(0x103661d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036270e jl 0x10362701 */
  if ((C.sf!=C.of)) goto L_10362701;
L_10362710:;
  /* 10362710 push esi */
  push32((uint32_t)(ESI));
  /* 10362711 mov esi, ecx */
  ESI = (ECX);
  /* 10362713 shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 10362716 cmp edx, dword ptr [esi + 0x10366148] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x10366148))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036271c jne 0x1036283e */
  if (!C.zf) goto L_1036283e;
  /* 10362722 mov eax, dword ptr [0x10366558] */
  EAX = (r32((uint32_t)(0x10366558)));
  /* 10362727 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036272a je 0x10362818 */
  if (C.zf) goto L_10362818;
  /* 10362730 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10362732 jne 0x10362741 */
  if (!C.zf) goto L_10362741;
  /* 10362734 cmp dword ptr [0x1036655c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1036655c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036273b je 0x10362818 */
  if (C.zf) goto L_10362818;
L_10362741:;
  /* 10362741 cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362747 je 0x1036283e */
  if (C.zf) goto L_1036283e;
  /* 1036274d lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10362753 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10362758 push eax */
  push32((uint32_t)(EAX));
  /* 10362759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1036275b call dword ptr [0x10365074] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365074))), 0x10362761u);
  /* 10362761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10362763 jne 0x10362778 */
  if (!C.zf) goto L_10362778;
  /* 10362765 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1036276b push 0x10365410 */
  push32((uint32_t)(0x10365410u));
  /* 10362770 push eax */
  push32((uint32_t)(EAX));
  /* 10362771 call 0x10362ab0 */
  push32(0x10362776u); f_10362ab0();
  /* 10362776 pop ecx */
  ECX = (pop32());
  /* 10362777 pop ecx */
  ECX = (pop32());
L_10362778:;
  /* 10362778 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 1036277e push edi */
  push32((uint32_t)(EDI));
  /* 1036277f push eax */
  push32((uint32_t)(EAX));
  /* 10362780 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 10362786 call 0x10362ba0 */
  push32(0x1036278bu); f_10362ba0();
  /* 1036278b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1036278c pop ecx */
  ECX = (pop32());
  /* 1036278d cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362790 jbe 0x103627bb */
  if ((C.cf||C.zf)) goto L_103627bb;
  /* 10362792 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 10362798 push eax */
  push32((uint32_t)(EAX));
  /* 10362799 call 0x10362ba0 */
  push32(0x1036279eu); f_10362ba0();
  /* 1036279e mov edi, eax */
  EDI = (EAX);
  /* 103627a0 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 103627a6 sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103627a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 103627ab add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103627ad push 0x1036540c */
  push32((uint32_t)(0x1036540cu));
  /* 103627b2 push edi */
  push32((uint32_t)(EDI));
  /* 103627b3 call 0x10363c20 */
  push32(0x103627b8u); f_10363c20();
  /* 103627b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103627bb:;
  /* 103627bb lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103627c1 push 0x103653f0 */
  push32((uint32_t)(0x103653f0u));
  /* 103627c6 push eax */
  push32((uint32_t)(EAX));
  /* 103627c7 call 0x10362ab0 */
  push32(0x103627ccu); f_10362ab0();
  /* 103627cc lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103627d2 push edi */
  push32((uint32_t)(EDI));
  /* 103627d3 push eax */
  push32((uint32_t)(EAX));
  /* 103627d4 call 0x10362ac0 */
  push32(0x103627d9u); f_10362ac0();
  /* 103627d9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103627df push 0x103653ec */
  push32((uint32_t)(0x103653ecu));
  /* 103627e4 push eax */
  push32((uint32_t)(EAX));
  /* 103627e5 call 0x10362ac0 */
  push32(0x103627eau); f_10362ac0();
  /* 103627ea push dword ptr [esi + 0x1036614c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1036614c))));
  /* 103627f0 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 103627f6 push eax */
  push32((uint32_t)(EAX));
  /* 103627f7 call 0x10362ac0 */
  push32(0x103627fcu); f_10362ac0();
  /* 103627fc push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10362801 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 10362807 push 0x103653c4 */
  push32((uint32_t)(0x103653c4u));
  /* 1036280c push eax */
  push32((uint32_t)(EAX));
  /* 1036280d call 0x10363b8e */
  push32(0x10362812u); f_10363b8e();
  /* 10362812 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10362815 pop edi */
  EDI = (pop32());
  /* 10362816 jmp 0x1036283e */
  goto L_1036283e;
L_10362818:;
  /* 10362818 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1036281b lea esi, [esi + 0x1036614c] */
  ESI = ((uint32_t)(ESI + 0x1036614c));
  /* 10362821 push 0 */
  push32((uint32_t)(0x0u));
  /* 10362823 push eax */
  push32((uint32_t)(EAX));
  /* 10362824 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 10362826 call 0x10362ba0 */
  push32(0x1036282bu); f_10362ba0();
  /* 1036282b pop ecx */
  ECX = (pop32());
  /* 1036282c push eax */
  push32((uint32_t)(EAX));
  /* 1036282d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1036282f push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10362831 call dword ptr [0x103650a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103650a4))), 0x10362837u);
  /* 10362837 push eax */
  push32((uint32_t)(EAX));
  /* 10362838 call dword ptr [0x1036504c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036504c))), 0x1036283eu);
L_1036283e:;
  /* 1036283e pop esi */
  ESI = (pop32());
  /* 1036283f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10362840 ret  */
  ESPCHK(0x103626eeu, _esp0);
  ESP += 4; return;
}

/* FUN_10002841 @ 0x10362841 (41 bytes, 12 insns) */
void f_10362841(void) {
  FTRACE(0x10362841u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362841 push esi */
  push32((uint32_t)(ESI));
  /* 10362842 mov esi, dword ptr [0x10365048] */
  ESI = (r32((uint32_t)(0x10365048)));
  /* 10362848 push dword ptr [0x1036621c] */
  push32((uint32_t)(r32((uint32_t)(0x1036621c))));
  /* 1036284e call esi */
  call_ind((uint32_t)(ESI), 0x10362850u);
  /* 10362850 push dword ptr [0x1036620c] */
  push32((uint32_t)(r32((uint32_t)(0x1036620c))));
  /* 10362856 call esi */
  call_ind((uint32_t)(ESI), 0x10362858u);
  /* 10362858 push dword ptr [0x103661fc] */
  push32((uint32_t)(r32((uint32_t)(0x103661fc))));
  /* 1036285e call esi */
  call_ind((uint32_t)(ESI), 0x10362860u);
  /* 10362860 push dword ptr [0x103661dc] */
  push32((uint32_t)(r32((uint32_t)(0x103661dc))));
  /* 10362866 call esi */
  call_ind((uint32_t)(ESI), 0x10362868u);
  /* 10362868 pop esi */
  ESI = (pop32());
  /* 10362869 ret  */
  ESPCHK(0x10362841u, _esp0);
  ESP += 4; return;
}

/* FUN_1000286a @ 0x1036286a (108 bytes, 34 insns) */
void f_1036286a(void) {
  FTRACE(0x1036286au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1036286a push esi */
  push32((uint32_t)(ESI));
  /* 1036286b push edi */
  push32((uint32_t)(EDI));
  /* 1036286c mov edi, dword ptr [0x10365098] */
  EDI = (r32((uint32_t)(0x10365098)));
  /* 10362872 mov esi, 0x103661d8 */
  ESI = (0x103661d8u);
L_10362877:;
  /* 10362877 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10362879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036287b je 0x103628a8 */
  if (C.zf) goto L_103628a8;
  /* 1036287d cmp esi, 0x1036621c */
  { uint32_t _a=(ESI),_b=(0x1036621cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362883 je 0x103628a8 */
  if (C.zf) goto L_103628a8;
  /* 10362885 cmp esi, 0x1036620c */
  { uint32_t _a=(ESI),_b=(0x1036620cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036288b je 0x103628a8 */
  if (C.zf) goto L_103628a8;
  /* 1036288d cmp esi, 0x103661fc */
  { uint32_t _a=(ESI),_b=(0x103661fcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362893 je 0x103628a8 */
  if (C.zf) goto L_103628a8;
  /* 10362895 cmp esi, 0x103661dc */
  { uint32_t _a=(ESI),_b=(0x103661dcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036289b je 0x103628a8 */
  if (C.zf) goto L_103628a8;
  /* 1036289d push eax */
  push32((uint32_t)(EAX));
  /* 1036289e call edi */
  call_ind((uint32_t)(EDI), 0x103628a0u);
  /* 103628a0 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 103628a2 call 0x103629d9 */
  push32(0x103628a7u); f_103629d9();
  /* 103628a7 pop ecx */
  ECX = (pop32());
L_103628a8:;
  /* 103628a8 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103628ab cmp esi, 0x10366298 */
  { uint32_t _a=(ESI),_b=(0x10366298u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103628b1 jl 0x10362877 */
  if ((C.sf!=C.of)) goto L_10362877;
  /* 103628b3 push dword ptr [0x103661fc] */
  push32((uint32_t)(r32((uint32_t)(0x103661fc))));
  /* 103628b9 call edi */
  call_ind((uint32_t)(EDI), 0x103628bbu);
  /* 103628bb push dword ptr [0x1036620c] */
  push32((uint32_t)(r32((uint32_t)(0x1036620c))));
  /* 103628c1 call edi */
  call_ind((uint32_t)(EDI), 0x103628c3u);
  /* 103628c3 push dword ptr [0x1036621c] */
  push32((uint32_t)(r32((uint32_t)(0x1036621c))));
  /* 103628c9 call edi */
  call_ind((uint32_t)(EDI), 0x103628cbu);
  /* 103628cb push dword ptr [0x103661dc] */
  push32((uint32_t)(r32((uint32_t)(0x103661dc))));
  /* 103628d1 call edi */
  call_ind((uint32_t)(EDI), 0x103628d3u);
  /* 103628d3 pop edi */
  EDI = (pop32());
  /* 103628d4 pop esi */
  ESI = (pop32());
  /* 103628d5 ret  */
  ESPCHK(0x1036286au, _esp0);
  ESP += 4; return;
}

/* FUN_100028d6 @ 0x103628d6 (97 bytes, 37 insns) */
void f_103628d6(void) {
  FTRACE(0x103628d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103628d6 push ebp */
  push32((uint32_t)(EBP));
  /* 103628d7 mov ebp, esp */
  EBP = (ESP);
  /* 103628d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103628dc push esi */
  push32((uint32_t)(ESI));
  /* 103628dd cmp dword ptr [eax*4 + 0x103661d8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x103661d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103628e5 lea esi, [eax*4 + 0x103661d8] */
  ESI = ((uint32_t)(EAX*4 + 0x103661d8));
  /* 103628ec jne 0x1036292c */
  if (!C.zf) goto L_1036292c;
  /* 103628ee push edi */
  push32((uint32_t)(EDI));
  /* 103628ef push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103628f1 call 0x10362a21 */
  push32(0x103628f6u); f_10362a21();
  /* 103628f6 mov edi, eax */
  EDI = (EAX);
  /* 103628f8 pop ecx */
  ECX = (pop32());
  /* 103628f9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103628fb jne 0x10362905 */
  if (!C.zf) goto L_10362905;
  /* 103628fd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103628ff call 0x10361d46 */
  push32(0x10362904u); f_10361d46();
  /* 10362904 pop ecx */
  ECX = (pop32());
L_10362905:;
  /* 10362905 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10362907 call 0x103628d6 */
  push32(0x1036290cu); f_103628d6();
  /* 1036290c cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036290f pop ecx */
  ECX = (pop32());
  /* 10362910 push edi */
  push32((uint32_t)(EDI));
  /* 10362911 jne 0x1036291d */
  if (!C.zf) goto L_1036291d;
  /* 10362913 call dword ptr [0x10365048] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365048))), 0x10362919u);
  /* 10362919 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1036291b jmp 0x10362923 */
  goto L_10362923;
L_1036291d:;
  /* 1036291d call 0x103629d9 */
  push32(0x10362922u); f_103629d9();
  /* 10362922 pop ecx */
  ECX = (pop32());
L_10362923:;
  /* 10362923 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10362925 call 0x10362937 */
  push32(0x1036292au); f_10362937();
  /* 1036292a pop ecx */
  ECX = (pop32());
  /* 1036292b pop edi */
  EDI = (pop32());
L_1036292c:;
  /* 1036292c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1036292e call dword ptr [0x10365044] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365044))), 0x10362934u);
  /* 10362934 pop esi */
  ESI = (pop32());
  /* 10362935 pop ebp */
  EBP = (pop32());
  /* 10362936 ret  */
  ESPCHK(0x103628d6u, _esp0);
  ESP += 4; return;
}

/* FUN_10002937 @ 0x10362937 (21 bytes, 7 insns) */
void f_10362937(void) {
  FTRACE(0x10362937u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362937 push ebp */
  push32((uint32_t)(EBP));
  /* 10362938 mov ebp, esp */
  EBP = (ESP);
  /* 1036293a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1036293d push dword ptr [eax*4 + 0x103661d8] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x103661d8))));
  /* 10362944 call dword ptr [0x10365040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365040))), 0x1036294au);
  /* 1036294a pop ebp */
  EBP = (pop32());
  /* 1036294b ret  */
  ESPCHK(0x10362937u, _esp0);
  ESP += 4; return;
}

/* FUN_1000294c @ 0x1036294c (141 bytes, 56 insns) */
void f_1036294c(void) {
  FTRACE(0x1036294cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1036294c push ebx */
  push32((uint32_t)(EBX));
  /* 1036294d push esi */
  push32((uint32_t)(ESI));
  /* 1036294e mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 10362952 push edi */
  push32((uint32_t)(EDI));
  /* 10362953 imul esi, dword ptr [esp + 0x14] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(ESP + 0x14)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10362958 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036295b mov ebx, esi */
  EBX = (ESI);
  /* 1036295d ja 0x1036296c */
  if ((!C.cf&&!C.zf)) goto L_1036296c;
  /* 1036295f test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10362961 jne 0x10362966 */
  if (!C.zf) goto L_10362966;
  /* 10362963 push 1 */
  push32((uint32_t)(0x1u));
  /* 10362965 pop esi */
  ESI = (pop32());
L_10362966:;
  /* 10362966 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10362969 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
L_1036296c:;
  /* 1036296c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1036296e cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362971 ja 0x103629ad */
  if ((!C.cf&&!C.zf)) goto L_103629ad;
  /* 10362973 cmp ebx, dword ptr [0x10366420] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10366420))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362979 ja 0x10362998 */
  if ((!C.cf&&!C.zf)) goto L_10362998;
  /* 1036297b push 9 */
  push32((uint32_t)(0x9u));
  /* 1036297d call 0x103628d6 */
  push32(0x10362982u); f_103628d6();
  /* 10362982 push ebx */
  push32((uint32_t)(EBX));
  /* 10362983 call 0x103636d9 */
  push32(0x10362988u); f_103636d9();
  /* 10362988 push 9 */
  push32((uint32_t)(0x9u));
  /* 1036298a mov edi, eax */
  EDI = (EAX);
  /* 1036298c call 0x10362937 */
  push32(0x10362991u); f_10362937();
  /* 10362991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10362994 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10362996 jne 0x103629c3 */
  if (!C.zf) goto L_103629c3;
L_10362998:;
  /* 10362998 push esi */
  push32((uint32_t)(ESI));
  /* 10362999 push 8 */
  push32((uint32_t)(0x8u));
  /* 1036299b push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 103629a1 call dword ptr [0x1036503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036503c))), 0x103629a7u);
  /* 103629a7 mov edi, eax */
  EDI = (EAX);
  /* 103629a9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 103629ab jne 0x103629cf */
  if (!C.zf) goto L_103629cf;
L_103629ad:;
  /* 103629ad cmp dword ptr [0x10366724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10366724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103629b4 je 0x103629cf */
  if (C.zf) goto L_103629cf;
  /* 103629b6 push esi */
  push32((uint32_t)(ESI));
  /* 103629b7 call 0x10363d78 */
  push32(0x103629bcu); f_10363d78();
  /* 103629bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103629be pop ecx */
  ECX = (pop32());
  /* 103629bf je 0x103629d5 */
  if (C.zf) goto L_103629d5;
  /* 103629c1 jmp 0x1036296c */
  goto L_1036296c;
L_103629c3:;
  /* 103629c3 push ebx */
  push32((uint32_t)(EBX));
  /* 103629c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103629c6 push edi */
  push32((uint32_t)(EDI));
  /* 103629c7 call 0x10363d20 */
  push32(0x103629ccu); f_10363d20();
  /* 103629cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103629cf:;
  /* 103629cf mov eax, edi */
  EAX = (EDI);
L_103629d1:;
  /* 103629d1 pop edi */
  EDI = (pop32());
  /* 103629d2 pop esi */
  ESI = (pop32());
  /* 103629d3 pop ebx */
  EBX = (pop32());
  /* 103629d4 ret  */
  ESPCHK(0x1036294cu, _esp0);
  ESP += 4; return;
L_103629d5:;
  /* 103629d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103629d7 jmp 0x103629d1 */
  goto L_103629d1;
}

/* FUN_100029d9 @ 0x103629d9 (72 bytes, 29 insns) */
void f_103629d9(void) {
  FTRACE(0x103629d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103629d9 push esi */
  push32((uint32_t)(ESI));
  /* 103629da mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 103629de test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 103629e0 je 0x10362a1f */
  if (C.zf) goto L_10362a1f;
  /* 103629e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 103629e4 call 0x103628d6 */
  push32(0x103629e9u); f_103628d6();
  /* 103629e9 push esi */
  push32((uint32_t)(ESI));
  /* 103629ea call 0x10363383 */
  push32(0x103629efu); f_10363383();
  /* 103629ef pop ecx */
  ECX = (pop32());
  /* 103629f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103629f2 pop ecx */
  ECX = (pop32());
  /* 103629f3 je 0x10362a08 */
  if (C.zf) goto L_10362a08;
  /* 103629f5 push esi */
  push32((uint32_t)(ESI));
  /* 103629f6 push eax */
  push32((uint32_t)(EAX));
  /* 103629f7 call 0x103633ae */
  push32(0x103629fcu); f_103633ae();
  /* 103629fc push 9 */
  push32((uint32_t)(0x9u));
  /* 103629fe call 0x10362937 */
  push32(0x10362a03u); f_10362937();
  /* 10362a03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10362a06 pop esi */
  ESI = (pop32());
  /* 10362a07 ret  */
  ESPCHK(0x103629d9u, _esp0);
  ESP += 4; return;
L_10362a08:;
  /* 10362a08 push 9 */
  push32((uint32_t)(0x9u));
  /* 10362a0a call 0x10362937 */
  push32(0x10362a0fu); f_10362937();
  /* 10362a0f pop ecx */
  ECX = (pop32());
  /* 10362a10 push esi */
  push32((uint32_t)(ESI));
  /* 10362a11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10362a13 push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10362a19 call dword ptr [0x10365050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365050))), 0x10362a1fu);
L_10362a1f:;
  /* 10362a1f pop esi */
  ESI = (pop32());
  /* 10362a20 ret  */
  ESPCHK(0x103629d9u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x10362a21 (18 bytes, 6 insns) */
void f_10362a21(void) {
  FTRACE(0x10362a21u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362a21 push dword ptr [0x10366724] */
  push32((uint32_t)(r32((uint32_t)(0x10366724))));
  /* 10362a27 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 10362a2b call 0x10362a33 */
  push32(0x10362a30u); f_10362a33();
  /* 10362a30 pop ecx */
  ECX = (pop32());
  /* 10362a31 pop ecx */
  ECX = (pop32());
  /* 10362a32 ret  */
  ESPCHK(0x10362a21u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x10362a33 (44 bytes, 16 insns) */
void f_10362a33(void) {
  FTRACE(0x10362a33u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362a33 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362a38 ja 0x10362a5c */
  if ((!C.cf&&!C.zf)) goto L_10362a5c;
L_10362a3a:;
  /* 10362a3a push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10362a3e call 0x10362a5f */
  push32(0x10362a43u); f_10362a5f();
  /* 10362a43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10362a45 pop ecx */
  ECX = (pop32());
  /* 10362a46 jne 0x10362a5e */
  if (!C.zf) goto L_10362a5e;
  /* 10362a48 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362a4c je 0x10362a5e */
  if (C.zf) goto L_10362a5e;
  /* 10362a4e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10362a52 call 0x10363d78 */
  push32(0x10362a57u); f_10363d78();
  /* 10362a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10362a59 pop ecx */
  ECX = (pop32());
  /* 10362a5a jne 0x10362a3a */
  if (!C.zf) goto L_10362a3a;
L_10362a5c:;
  /* 10362a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10362a5e:;
  /* 10362a5e ret  */
  ESPCHK(0x10362a33u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a5f @ 0x10362a5f (78 bytes, 30 insns) */
void f_10362a5f(void) {
  FTRACE(0x10362a5fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362a5f push esi */
  push32((uint32_t)(ESI));
  /* 10362a60 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 10362a64 cmp esi, dword ptr [0x10366420] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10366420))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362a6a push edi */
  push32((uint32_t)(EDI));
  /* 10362a6b ja 0x10362a8e */
  if ((!C.cf&&!C.zf)) goto L_10362a8e;
  /* 10362a6d push 9 */
  push32((uint32_t)(0x9u));
  /* 10362a6f call 0x103628d6 */
  push32(0x10362a74u); f_103628d6();
  /* 10362a74 push esi */
  push32((uint32_t)(ESI));
  /* 10362a75 call 0x103636d9 */
  push32(0x10362a7au); f_103636d9();
  /* 10362a7a push 9 */
  push32((uint32_t)(0x9u));
  /* 10362a7c mov edi, eax */
  EDI = (EAX);
  /* 10362a7e call 0x10362937 */
  push32(0x10362a83u); f_10362937();
  /* 10362a83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10362a86 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 10362a88 je 0x10362a8e */
  if (C.zf) goto L_10362a8e;
  /* 10362a8a mov eax, edi */
  EAX = (EDI);
  /* 10362a8c jmp 0x10362aaa */
  goto L_10362aaa;
L_10362a8e:;
  /* 10362a8e test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10362a90 jne 0x10362a95 */
  if (!C.zf) goto L_10362a95;
  /* 10362a92 push 1 */
  push32((uint32_t)(0x1u));
  /* 10362a94 pop esi */
  ESI = (pop32());
L_10362a95:;
  /* 10362a95 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10362a98 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 10362a9b push esi */
  push32((uint32_t)(ESI));
  /* 10362a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10362a9e push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10362aa4 call dword ptr [0x1036503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036503c))), 0x10362aaau);
L_10362aaa:;
  /* 10362aaa pop edi */
  EDI = (pop32());
  /* 10362aab pop esi */
  ESI = (pop32());
  /* 10362aac ret  */
  ESPCHK(0x10362a5fu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ab0 @ 0x10362ab0 (7 bytes, 3 insns) */
void f_10362ab0(void) {
  FTRACE(0x10362ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362ab0 push edi */
  push32((uint32_t)(EDI));
  /* 10362ab1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10362ab5 jmp 0x10362b21 */
  jmp_ind(0x10362b21u); return;
}

/* FUN_10002ac0 @ 0x10362ac0 (224 bytes, 84 insns) */
void f_10362ac0(void) {
  FTRACE(0x10362ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362ac0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10362ac4 push edi */
  push32((uint32_t)(EDI));
  /* 10362ac5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10362acb je 0x10362adc */
  if (C.zf) goto L_10362adc;
L_10362acd:;
  /* 10362acd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10362acf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362ad0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10362ad2 je 0x10362b0f */
  if (C.zf) goto L_10362b0f;
  /* 10362ad4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10362ada jne 0x10362acd */
  if (!C.zf) goto L_10362acd;
L_10362adc:;
  /* 10362adc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10362ade mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10362ae3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362ae5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10362ae8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10362aea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362aed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10362af2 je 0x10362adc */
  if (C.zf) goto L_10362adc;
  /* 10362af4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10362af7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10362af9 je 0x10362b1e */
  if (C.zf) goto L_10362b1e;
  /* 10362afb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10362afd je 0x10362b19 */
  if (C.zf) goto L_10362b19;
  /* 10362aff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10362b04 je 0x10362b14 */
  if (C.zf) goto L_10362b14;
  /* 10362b06 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10362b0b je 0x10362b0f */
  if (C.zf) goto L_10362b0f;
  /* 10362b0d jmp 0x10362adc */
  goto L_10362adc;
L_10362b0f:;
  /* 10362b0f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10362b12 jmp 0x10362b21 */
  goto L_10362b21;
L_10362b14:;
  /* 10362b14 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10362b17 jmp 0x10362b21 */
  goto L_10362b21;
L_10362b19:;
  /* 10362b19 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10362b1c jmp 0x10362b21 */
  goto L_10362b21;
L_10362b1e:;
  /* 10362b1e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10362b21:;
  /* 10362b21 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10362b25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10362b2b je 0x10362b46 */
  if (C.zf) goto L_10362b46;
L_10362b2d:;
  /* 10362b2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10362b2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362b30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10362b32 je 0x10362b98 */
  if (C.zf) goto L_10362b98;
  /* 10362b34 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10362b36 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10362b37 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10362b3d jne 0x10362b2d */
  if (!C.zf) goto L_10362b2d;
  /* 10362b3f jmp 0x10362b46 */
  goto L_10362b46;
L_10362b41:;
  /* 10362b41 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10362b43 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10362b46:;
  /* 10362b46 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10362b4b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10362b4d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362b4f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10362b52 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10362b54 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10362b56 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362b59 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10362b5e je 0x10362b41 */
  if (C.zf) goto L_10362b41;
  /* 10362b60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10362b62 je 0x10362b98 */
  if (C.zf) goto L_10362b98;
  /* 10362b64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10362b66 je 0x10362b8f */
  if (C.zf) goto L_10362b8f;
  /* 10362b68 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10362b6e je 0x10362b82 */
  if (C.zf) goto L_10362b82;
  /* 10362b70 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10362b76 je 0x10362b7a */
  if (C.zf) goto L_10362b7a;
  /* 10362b78 jmp 0x10362b41 */
  goto L_10362b41;
L_10362b7a:;
  /* 10362b7a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10362b7c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10362b80 pop edi */
  EDI = (pop32());
  /* 10362b81 ret  */
  ESPCHK(0x10362ac0u, _esp0);
  ESP += 4; return;
L_10362b82:;
  /* 10362b82 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10362b85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10362b89 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10362b8d pop edi */
  EDI = (pop32());
  /* 10362b8e ret  */
  ESPCHK(0x10362ac0u, _esp0);
  ESP += 4; return;
L_10362b8f:;
  /* 10362b8f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10362b92 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10362b96 pop edi */
  EDI = (pop32());
  /* 10362b97 ret  */
  ESPCHK(0x10362ac0u, _esp0);
  ESP += 4; return;
L_10362b98:;
  /* 10362b98 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10362b9a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10362b9e pop edi */
  EDI = (pop32());
  /* 10362b9f ret  */
  ESPCHK(0x10362ac0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10362ba0 (123 bytes, 44 insns) */
void f_10362ba0(void) {
  FTRACE(0x10362ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362ba0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10362ba4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10362baa je 0x10362bc0 */
  if (C.zf) goto L_10362bc0;
L_10362bac:;
  /* 10362bac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10362bae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362baf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10362bb1 je 0x10362bf3 */
  if (C.zf) goto L_10362bf3;
  /* 10362bb3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10362bb9 jne 0x10362bac */
  if (!C.zf) goto L_10362bac;
  /* 10362bbb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10362bc0:;
  /* 10362bc0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10362bc2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10362bc7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362bc9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10362bcc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10362bce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362bd1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10362bd6 je 0x10362bc0 */
  if (C.zf) goto L_10362bc0;
  /* 10362bd8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10362bdb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10362bdd je 0x10362c11 */
  if (C.zf) goto L_10362c11;
  /* 10362bdf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10362be1 je 0x10362c07 */
  if (C.zf) goto L_10362c07;
  /* 10362be3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10362be8 je 0x10362bfd */
  if (C.zf) goto L_10362bfd;
  /* 10362bea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10362bef je 0x10362bf3 */
  if (C.zf) goto L_10362bf3;
  /* 10362bf1 jmp 0x10362bc0 */
  goto L_10362bc0;
L_10362bf3:;
  /* 10362bf3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10362bf6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10362bfa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362bfc ret  */
  ESPCHK(0x10362ba0u, _esp0);
  ESP += 4; return;
L_10362bfd:;
  /* 10362bfd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10362c00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10362c04 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362c06 ret  */
  ESPCHK(0x10362ba0u, _esp0);
  ESP += 4; return;
L_10362c07:;
  /* 10362c07 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10362c0a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10362c0e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362c10 ret  */
  ESPCHK(0x10362ba0u, _esp0);
  ESP += 4; return;
L_10362c11:;
  /* 10362c11 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10362c14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10362c18 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362c1a ret  */
  ESPCHK(0x10362ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c1b @ 0x10362c1b (429 bytes, 143 insns) */
void f_10362c1b(void) {
  FTRACE(0x10362c1bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362c1b push ebp */
  push32((uint32_t)(EBP));
  /* 10362c1c mov ebp, esp */
  EBP = (ESP);
  /* 10362c1e sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362c21 push ebx */
  push32((uint32_t)(EBX));
  /* 10362c22 push esi */
  push32((uint32_t)(ESI));
  /* 10362c23 push edi */
  push32((uint32_t)(EDI));
  /* 10362c24 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10362c26 call 0x103628d6 */
  push32(0x10362c2bu); f_103628d6();
  /* 10362c2b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10362c2e call 0x10362dc8 */
  push32(0x10362c33u); f_10362dc8();
  /* 10362c33 mov ebx, eax */
  EBX = (EAX);
  /* 10362c35 pop ecx */
  ECX = (pop32());
  /* 10362c36 cmp ebx, dword ptr [0x10366768] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10366768))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362c3c pop ecx */
  ECX = (pop32());
  /* 10362c3d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10362c40 jne 0x10362c49 */
  if (!C.zf) goto L_10362c49;
L_10362c42:;
  /* 10362c42 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10362c44 jmp 0x10362db9 */
  goto L_10362db9;
L_10362c49:;
  /* 10362c49 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10362c4b je 0x10362da7 */
  if (C.zf) goto L_10362da7;
  /* 10362c51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10362c53 mov eax, 0x10366328 */
  EAX = (0x10366328u);
L_10362c58:;
  /* 10362c58 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362c5a je 0x10362cd0 */
  if (C.zf) goto L_10362cd0;
  /* 10362c5c add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362c5f inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10362c60 cmp eax, 0x10366418 */
  { uint32_t _a=(EAX),_b=(0x10366418u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362c65 jl 0x10362c58 */
  if ((C.sf!=C.of)) goto L_10362c58;
  /* 10362c67 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10362c6a push eax */
  push32((uint32_t)(EAX));
  /* 10362c6b push ebx */
  push32((uint32_t)(EBX));
  /* 10362c6c call dword ptr [0x10365038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365038))), 0x10362c72u);
  /* 10362c72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10362c74 pop esi */
  ESI = (pop32());
  /* 10362c75 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362c77 jne 0x10362d9e */
  if (!C.zf) goto L_10362d9e;
  /* 10362c7d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10362c7f and dword ptr [0x10366984], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10366984)))&(0x0u); w32((uint32_t)(0x10366984), (_r)); fl_logic(_r,32); }
  /* 10362c86 pop ecx */
  ECX = (pop32());
  /* 10362c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362c89 mov edi, 0x10366880 */
  EDI = (0x10366880u);
  /* 10362c8e cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362c91 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10362c93 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10362c94 mov dword ptr [0x10366768], ebx */
  w32((uint32_t)(0x10366768), (EBX));
  /* 10362c9a jbe 0x10362d8b */
  if ((C.cf||C.zf)) goto L_10362d8b;
  /* 10362ca0 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362ca4 je 0x10362d66 */
  if (C.zf) goto L_10362d66;
  /* 10362caa lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_10362cad:;
  /* 10362cad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10362caf test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10362cb1 je 0x10362d66 */
  if (C.zf) goto L_10362d66;
  /* 10362cb7 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 10362cbb movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_10362cbe:;
  /* 10362cbe cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362cc0 ja 0x10362d5a */
  if ((!C.cf&&!C.zf)) goto L_10362d5a;
  /* 10362cc6 or byte ptr [eax + 0x10366881], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366881)))|(0x4u); w8((uint32_t)(EAX + 0x10366881), (_r)); fl_logic(_r,8); }
  /* 10362ccd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362cce jmp 0x10362cbe */
  goto L_10362cbe;
L_10362cd0:;
  /* 10362cd0 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10362cd4 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10362cd6 pop ecx */
  ECX = (pop32());
  /* 10362cd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362cd9 mov edi, 0x10366880 */
  EDI = (0x10366880u);
  /* 10362cde lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 10362ce1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10362ce3 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10362ce6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10362ce7 lea ebx, [esi + 0x10366338] */
  EBX = ((uint32_t)(ESI + 0x10366338));
L_10362ced:;
  /* 10362ced cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362cf0 mov ecx, ebx */
  ECX = (EBX);
  /* 10362cf2 je 0x10362d20 */
  if (C.zf) goto L_10362d20;
L_10362cf4:;
  /* 10362cf4 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10362cf7 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10362cf9 je 0x10362d20 */
  if (C.zf) goto L_10362d20;
  /* 10362cfb movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 10362cfe movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 10362d01 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362d03 ja 0x10362d19 */
  if ((!C.cf&&!C.zf)) goto L_10362d19;
  /* 10362d05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10362d08 mov dl, byte ptr [edx + 0x10366320] */
  DL = (r8((uint32_t)(EDX + 0x10366320)));
L_10362d0e:;
  /* 10362d0e or byte ptr [eax + 0x10366881], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366881)))|(DL); w8((uint32_t)(EAX + 0x10366881), (_r)); fl_logic(_r,8); }
  /* 10362d14 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362d15 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362d17 jbe 0x10362d0e */
  if ((C.cf||C.zf)) goto L_10362d0e;
L_10362d19:;
  /* 10362d19 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362d1a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362d1b cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362d1e jne 0x10362cf4 */
  if (!C.zf) goto L_10362cf4;
L_10362d20:;
  /* 10362d20 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 10362d23 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10362d26 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362d2a jb 0x10362ced */
  if (C.cf) goto L_10362ced;
  /* 10362d2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10362d2f mov dword ptr [0x1036677c], 1 */
  w32((uint32_t)(0x1036677c), (0x1u));
  /* 10362d39 push eax */
  push32((uint32_t)(EAX));
  /* 10362d3a mov dword ptr [0x10366768], eax */
  w32((uint32_t)(0x10366768), (EAX));
  /* 10362d3f call 0x10362e12 */
  push32(0x10362d44u); f_10362e12();
  /* 10362d44 lea esi, [esi + 0x1036632c] */
  ESI = ((uint32_t)(ESI + 0x1036632c));
  /* 10362d4a mov edi, 0x10366770 */
  EDI = (0x10366770u);
  /* 10362d4f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10362d50 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10362d51 pop ecx */
  ECX = (pop32());
  /* 10362d52 mov dword ptr [0x10366984], eax */
  w32((uint32_t)(0x10366984), (EAX));
  /* 10362d57 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10362d58 jmp 0x10362dac */
  goto L_10362dac;
L_10362d5a:;
  /* 10362d5a inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362d5b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362d5c cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10362d60 jne 0x10362cad */
  if (!C.zf) goto L_10362cad;
L_10362d66:;
  /* 10362d66 mov eax, esi */
  EAX = (ESI);
L_10362d68:;
  /* 10362d68 or byte ptr [eax + 0x10366881], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366881)))|(0x8u); w8((uint32_t)(EAX + 0x10366881), (_r)); fl_logic(_r,8); }
  /* 10362d6f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362d70 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362d75 jb 0x10362d68 */
  if (C.cf) goto L_10362d68;
  /* 10362d77 push ebx */
  push32((uint32_t)(EBX));
  /* 10362d78 call 0x10362e12 */
  push32(0x10362d7du); f_10362e12();
  /* 10362d7d pop ecx */
  ECX = (pop32());
  /* 10362d7e mov dword ptr [0x10366984], eax */
  w32((uint32_t)(0x10366984), (EAX));
  /* 10362d83 mov dword ptr [0x1036677c], esi */
  w32((uint32_t)(0x1036677c), (ESI));
  /* 10362d89 jmp 0x10362d92 */
  goto L_10362d92;
L_10362d8b:;
  /* 10362d8b and dword ptr [0x1036677c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1036677c)))&(0x0u); w32((uint32_t)(0x1036677c), (_r)); fl_logic(_r,32); }
L_10362d92:;
  /* 10362d92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362d94 mov edi, 0x10366770 */
  EDI = (0x10366770u);
  /* 10362d99 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10362d9a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10362d9b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10362d9c jmp 0x10362dac */
  goto L_10362dac;
L_10362d9e:;
  /* 10362d9e cmp dword ptr [0x10366710], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10366710))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362da5 je 0x10362db6 */
  if (C.zf) goto L_10362db6;
L_10362da7:;
  /* 10362da7 call 0x10362e45 */
  push32(0x10362dacu); f_10362e45();
L_10362dac:;
  /* 10362dac call 0x10362e6e */
  push32(0x10362db1u); f_10362e6e();
  /* 10362db1 jmp 0x10362c42 */
  goto L_10362c42;
L_10362db6:;
  /* 10362db6 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_10362db9:;
  /* 10362db9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10362dbb call 0x10362937 */
  push32(0x10362dc0u); f_10362937();
  /* 10362dc0 pop ecx */
  ECX = (pop32());
  /* 10362dc1 mov eax, esi */
  EAX = (ESI);
  /* 10362dc3 pop edi */
  EDI = (pop32());
  /* 10362dc4 pop esi */
  ESI = (pop32());
  /* 10362dc5 pop ebx */
  EBX = (pop32());
  /* 10362dc6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10362dc7 ret  */
  ESPCHK(0x10362c1bu, _esp0);
  ESP += 4; return;
}

/* FUN_10002dc8 @ 0x10362dc8 (74 bytes, 15 insns) */
void f_10362dc8(void) {
  FTRACE(0x10362dc8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362dc8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10362dcc and dword ptr [0x10366710], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10366710)))&(0x0u); w32((uint32_t)(0x10366710), (_r)); fl_logic(_r,32); }
  /* 10362dd3 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362dd6 jne 0x10362de8 */
  if (!C.zf) goto L_10362de8;
  /* 10362dd8 mov dword ptr [0x10366710], 1 */
  w32((uint32_t)(0x10366710), (0x1u));
  /* 10362de2 jmp dword ptr [0x10365030] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10365030)))); return;
L_10362de8:;
  /* 10362de8 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362deb jne 0x10362dfd */
  if (!C.zf) goto L_10362dfd;
  /* 10362ded mov dword ptr [0x10366710], 1 */
  w32((uint32_t)(0x10366710), (0x1u));
  /* 10362df7 jmp dword ptr [0x10365034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10365034)))); return;
L_10362dfd:;
  /* 10362dfd cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362e00 jne 0x10362e11 */
  if (!C.zf) goto L_10362e11;
  /* 10362e02 mov eax, dword ptr [0x10366740] */
  EAX = (r32((uint32_t)(0x10366740)));
  /* 10362e07 mov dword ptr [0x10366710], 1 */
  w32((uint32_t)(0x10366710), (0x1u));
L_10362e11:;
  /* 10362e11 ret  */
  ESPCHK(0x10362dc8u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e12 @ 0x10362e12 (51 bytes, 19 insns) */
void f_10362e12(void) {
  FTRACE(0x10362e12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362e12 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10362e16 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362e1b je 0x10362e3f */
  if (C.zf) goto L_10362e3f;
  /* 10362e1d sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362e20 je 0x10362e39 */
  if (C.zf) goto L_10362e39;
  /* 10362e22 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362e25 je 0x10362e33 */
  if (C.zf) goto L_10362e33;
  /* 10362e27 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 10362e28 je 0x10362e2d */
  if (C.zf) goto L_10362e2d;
  /* 10362e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362e2c ret  */
  ESPCHK(0x10362e12u, _esp0);
  ESP += 4; return;
L_10362e2d:;
  /* 10362e2d mov eax, 0x404 */
  EAX = (0x404u);
  /* 10362e32 ret  */
  ESPCHK(0x10362e12u, _esp0);
  ESP += 4; return;
L_10362e33:;
  /* 10362e33 mov eax, 0x412 */
  EAX = (0x412u);
  /* 10362e38 ret  */
  ESPCHK(0x10362e12u, _esp0);
  ESP += 4; return;
L_10362e39:;
  /* 10362e39 mov eax, 0x804 */
  EAX = (0x804u);
  /* 10362e3e ret  */
  ESPCHK(0x10362e12u, _esp0);
  ESP += 4; return;
L_10362e3f:;
  /* 10362e3f mov eax, 0x411 */
  EAX = (0x411u);
  /* 10362e44 ret  */
  ESPCHK(0x10362e12u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e45 @ 0x10362e45 (41 bytes, 17 insns) */
void f_10362e45(void) {
  FTRACE(0x10362e45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362e45 push edi */
  push32((uint32_t)(EDI));
  /* 10362e46 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10362e48 pop ecx */
  ECX = (pop32());
  /* 10362e49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362e4b mov edi, 0x10366880 */
  EDI = (0x10366880u);
  /* 10362e50 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10362e52 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10362e53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362e55 mov edi, 0x10366770 */
  EDI = (0x10366770u);
  /* 10362e5a mov dword ptr [0x10366768], eax */
  w32((uint32_t)(0x10366768), (EAX));
  /* 10362e5f mov dword ptr [0x1036677c], eax */
  w32((uint32_t)(0x1036677c), (EAX));
  /* 10362e64 mov dword ptr [0x10366984], eax */
  w32((uint32_t)(0x10366984), (EAX));
  /* 10362e69 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10362e6a stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10362e6b stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10362e6c pop edi */
  EDI = (pop32());
  /* 10362e6d ret  */
  ESPCHK(0x10362e45u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e6e @ 0x10362e6e (389 bytes, 124 insns) */
void f_10362e6e(void) {
  FTRACE(0x10362e6eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362e6e push ebp */
  push32((uint32_t)(EBP));
  /* 10362e6f mov ebp, esp */
  EBP = (ESP);
  /* 10362e71 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362e77 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10362e7a push esi */
  push32((uint32_t)(ESI));
  /* 10362e7b push eax */
  push32((uint32_t)(EAX));
  /* 10362e7c push dword ptr [0x10366768] */
  push32((uint32_t)(r32((uint32_t)(0x10366768))));
  /* 10362e82 call dword ptr [0x10365038] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365038))), 0x10362e88u);
  /* 10362e88 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362e8b jne 0x10362fa7 */
  if (!C.zf) goto L_10362fa7;
  /* 10362e91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362e93 mov esi, 0x100 */
  ESI = (0x100u);
L_10362e98:;
  /* 10362e98 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 10362e9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362ea0 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362ea2 jb 0x10362e98 */
  if (C.cf) goto L_10362e98;
  /* 10362ea4 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 10362ea7 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 10362eae test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10362eb0 je 0x10362ee9 */
  if (C.zf) goto L_10362ee9;
  /* 10362eb2 push ebx */
  push32((uint32_t)(EBX));
  /* 10362eb3 push edi */
  push32((uint32_t)(EDI));
  /* 10362eb4 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_10362eb7:;
  /* 10362eb7 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 10362eba movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 10362ebd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362ebf ja 0x10362ede */
  if ((!C.cf&&!C.zf)) goto L_10362ede;
  /* 10362ec1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10362ec3 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 10362eca inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362ecb mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 10362ed0 mov ebx, ecx */
  EBX = (ECX);
  /* 10362ed2 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10362ed5 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10362ed7 mov ecx, ebx */
  ECX = (EBX);
  /* 10362ed9 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10362edc rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_10362ede:;
  /* 10362ede inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10362edf inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10362ee0 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 10362ee3 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10362ee5 jne 0x10362eb7 */
  if (!C.zf) goto L_10362eb7;
  /* 10362ee7 pop edi */
  EDI = (pop32());
  /* 10362ee8 pop ebx */
  EBX = (pop32());
L_10362ee9:;
  /* 10362ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10362eeb lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 10362ef1 push dword ptr [0x10366984] */
  push32((uint32_t)(r32((uint32_t)(0x10366984))));
  /* 10362ef7 push dword ptr [0x10366768] */
  push32((uint32_t)(r32((uint32_t)(0x10366768))));
  /* 10362efd push eax */
  push32((uint32_t)(EAX));
  /* 10362efe lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10362f04 push esi */
  push32((uint32_t)(ESI));
  /* 10362f05 push eax */
  push32((uint32_t)(EAX));
  /* 10362f06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10362f08 call 0x10363fe2 */
  push32(0x10362f0du); f_10363fe2();
  /* 10362f0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10362f0f lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 10362f15 push dword ptr [0x10366768] */
  push32((uint32_t)(r32((uint32_t)(0x10366768))));
  /* 10362f1b push esi */
  push32((uint32_t)(ESI));
  /* 10362f1c push eax */
  push32((uint32_t)(EAX));
  /* 10362f1d lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10362f23 push esi */
  push32((uint32_t)(ESI));
  /* 10362f24 push eax */
  push32((uint32_t)(EAX));
  /* 10362f25 push esi */
  push32((uint32_t)(ESI));
  /* 10362f26 push dword ptr [0x10366984] */
  push32((uint32_t)(r32((uint32_t)(0x10366984))));
  /* 10362f2c call 0x10363d93 */
  push32(0x10362f31u); f_10363d93();
  /* 10362f31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10362f33 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 10362f39 push dword ptr [0x10366768] */
  push32((uint32_t)(r32((uint32_t)(0x10366768))));
  /* 10362f3f push esi */
  push32((uint32_t)(ESI));
  /* 10362f40 push eax */
  push32((uint32_t)(EAX));
  /* 10362f41 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 10362f47 push esi */
  push32((uint32_t)(ESI));
  /* 10362f48 push eax */
  push32((uint32_t)(EAX));
  /* 10362f49 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 10362f4e push dword ptr [0x10366984] */
  push32((uint32_t)(r32((uint32_t)(0x10366984))));
  /* 10362f54 call 0x10363d93 */
  push32(0x10362f59u); f_10363d93();
  /* 10362f59 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10362f5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362f5e lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_10362f64:;
  /* 10362f64 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10362f67 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 10362f6a je 0x10362f82 */
  if (C.zf) goto L_10362f82;
  /* 10362f6c or byte ptr [eax + 0x10366881], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366881)))|(0x10u); w8((uint32_t)(EAX + 0x10366881), (_r)); fl_logic(_r,8); }
  /* 10362f73 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_10362f7a:;
  /* 10362f7a mov byte ptr [eax + 0x10366780], dl */
  w8((uint32_t)(EAX + 0x10366780), (DL));
  /* 10362f80 jmp 0x10362f9e */
  goto L_10362f9e;
L_10362f82:;
  /* 10362f82 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 10362f85 je 0x10362f97 */
  if (C.zf) goto L_10362f97;
  /* 10362f87 or byte ptr [eax + 0x10366881], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366881)))|(0x20u); w8((uint32_t)(EAX + 0x10366881), (_r)); fl_logic(_r,8); }
  /* 10362f8e mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 10362f95 jmp 0x10362f7a */
  goto L_10362f7a;
L_10362f97:;
  /* 10362f97 and byte ptr [eax + 0x10366780], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366780)))&(0x0u); w8((uint32_t)(EAX + 0x10366780), (_r)); fl_logic(_r,8); }
L_10362f9e:;
  /* 10362f9e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362f9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362fa0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10362fa1 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362fa3 jb 0x10362f64 */
  if (C.cf) goto L_10362f64;
  /* 10362fa5 jmp 0x10362ff0 */
  goto L_10362ff0;
L_10362fa7:;
  /* 10362fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10362fa9 mov esi, 0x100 */
  ESI = (0x100u);
L_10362fae:;
  /* 10362fae cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362fb1 jb 0x10362fcc */
  if (C.cf) goto L_10362fcc;
  /* 10362fb3 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362fb6 ja 0x10362fcc */
  if ((!C.cf&&!C.zf)) goto L_10362fcc;
  /* 10362fb8 or byte ptr [eax + 0x10366881], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366881)))|(0x10u); w8((uint32_t)(EAX + 0x10366881), (_r)); fl_logic(_r,8); }
  /* 10362fbf mov cl, al */
  CL = (AL);
  /* 10362fc1 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_10362fc4:;
  /* 10362fc4 mov byte ptr [eax + 0x10366780], cl */
  w8((uint32_t)(EAX + 0x10366780), (CL));
  /* 10362fca jmp 0x10362feb */
  goto L_10362feb;
L_10362fcc:;
  /* 10362fcc cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362fcf jb 0x10362fe4 */
  if (C.cf) goto L_10362fe4;
  /* 10362fd1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362fd4 ja 0x10362fe4 */
  if ((!C.cf&&!C.zf)) goto L_10362fe4;
  /* 10362fd6 or byte ptr [eax + 0x10366881], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366881)))|(0x20u); w8((uint32_t)(EAX + 0x10366881), (_r)); fl_logic(_r,8); }
  /* 10362fdd mov cl, al */
  CL = (AL);
  /* 10362fdf sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10362fe2 jmp 0x10362fc4 */
  goto L_10362fc4;
L_10362fe4:;
  /* 10362fe4 and byte ptr [eax + 0x10366780], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10366780)))&(0x0u); w8((uint32_t)(EAX + 0x10366780), (_r)); fl_logic(_r,8); }
L_10362feb:;
  /* 10362feb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10362fec cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362fee jb 0x10362fae */
  if (C.cf) goto L_10362fae;
L_10362ff0:;
  /* 10362ff0 pop esi */
  ESI = (pop32());
  /* 10362ff1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10362ff2 ret  */
  ESPCHK(0x10362e6eu, _esp0);
  ESP += 4; return;
}

/* FUN_10002ff3 @ 0x10362ff3 (28 bytes, 7 insns) */
void f_10362ff3(void) {
  FTRACE(0x10362ff3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10362ff3 cmp dword ptr [0x10366aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10366aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10362ffa jne 0x1036300e */
  if (!C.zf) goto L_1036300e;
  /* 10362ffc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 10362ffe call 0x10362c1b */
  push32(0x10363003u); f_10362c1b();
  /* 10363003 pop ecx */
  ECX = (pop32());
  /* 10363004 mov dword ptr [0x10366aa8], 1 */
  w32((uint32_t)(0x10366aa8), (0x1u));
L_1036300e:;
  /* 1036300e ret  */
  ESPCHK(0x10362ff3u, _esp0);
  ESP += 4; return;
}

/* FUN_10003010 @ 0x10363010 (664 bytes, 259 insns) [15 switch table(s)] */
void f_10363010(void) {
  FTRACE(0x10363010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363010 push ebp */
  push32((uint32_t)(EBP));
  /* 10363011 mov ebp, esp */
  EBP = (ESP);
  /* 10363013 push edi */
  push32((uint32_t)(EDI));
  /* 10363014 push esi */
  push32((uint32_t)(ESI));
  /* 10363015 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10363018 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1036301b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1036301e mov eax, ecx */
  EAX = (ECX);
  /* 10363020 mov edx, ecx */
  EDX = (ECX);
  /* 10363022 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363024 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363026 jbe 0x10363030 */
  if ((C.cf||C.zf)) goto L_10363030;
  /* 10363028 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036302a jb 0x103631a8 */
  if (C.cf) goto L_103631a8;
L_10363030:;
  /* 10363030 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10363036 jne 0x1036304c */
  if (!C.zf) goto L_1036304c;
  /* 10363038 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1036303b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1036303e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363041 jb 0x1036306c */
  if (C.cf) goto L_1036306c;
  /* 10363043 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10363045 jmp dword ptr [edx*4 + 0x10363158] */
  switch (EDX) {
    case 0: goto L_10363168;
    case 1: goto L_10363170;
    case 2: goto L_1036317c;
    case 3: goto L_10363190;
    default: x86_unimpl("switch@0x10363045 out of table"); return;
  }
L_1036304c:;
  /* 1036304c mov eax, edi */
  EAX = (EDI);
  /* 1036304e mov edx, 3 */
  EDX = (0x3u);
  /* 10363053 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10363056 jb 0x10363064 */
  if (C.cf) goto L_10363064;
  /* 10363058 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1036305b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1036305d jmp dword ptr [eax*4 + 0x10363070] */
  switch (EAX) {
    case 1: goto L_10363080;
    case 2: goto L_103630ac;
    case 3: goto L_103630d0;
    default: x86_unimpl("switch@0x1036305d out of table"); return;
  }
L_10363064:;
  /* 10363064 jmp dword ptr [ecx*4 + 0x10363168] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10363168)))); return;
  /* 1036306b nop  */
  /* nop */
L_1036306c:;
  /* 1036306c jmp dword ptr [ecx*4 + 0x103630ec] */
  switch (ECX) {
    case 0: goto L_1036314f;
    case 1: goto L_1036313c;
    case 2: goto L_10363134;
    case 3: goto L_1036312c;
    case 4: goto L_10363124;
    case 5: goto L_1036311c;
    case 6: goto L_10363114;
    case 7: goto L_1036310c;
    default: x86_unimpl("switch@0x1036306c out of table"); return;
  }
  /* 10363073 nop  */
  /* nop */
L_10363080:;
  /* 10363080 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10363082 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10363084 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363086 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10363089 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1036308c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1036308f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10363092 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10363095 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10363098 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1036309b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036309e jb 0x1036306c */
  if (C.cf) goto L_1036306c;
  /* 103630a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103630a2 jmp dword ptr [edx*4 + 0x10363158] */
  switch (EDX) {
    case 0: goto L_10363168;
    case 1: goto L_10363170;
    case 2: goto L_1036317c;
    case 3: goto L_10363190;
    default: x86_unimpl("switch@0x103630a2 out of table"); return;
  }
  /* 103630a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103630ac:;
  /* 103630ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103630ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103630b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103630b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103630b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103630b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103630bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103630be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103630c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103630c4 jb 0x1036306c */
  if (C.cf) goto L_1036306c;
  /* 103630c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103630c8 jmp dword ptr [edx*4 + 0x10363158] */
  switch (EDX) {
    case 0: goto L_10363168;
    case 1: goto L_10363170;
    case 2: goto L_1036317c;
    case 3: goto L_10363190;
    default: x86_unimpl("switch@0x103630c8 out of table"); return;
  }
  /* 103630cf nop  */
  /* nop */
L_103630d0:;
  /* 103630d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103630d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103630d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103630d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103630d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103630da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103630db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103630de jb 0x1036306c */
  if (C.cf) goto L_1036306c;
  /* 103630e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103630e2 jmp dword ptr [edx*4 + 0x10363158] */
  switch (EDX) {
    case 0: goto L_10363168;
    case 1: goto L_10363170;
    case 2: goto L_1036317c;
    case 3: goto L_10363190;
    default: x86_unimpl("switch@0x103630e2 out of table"); return;
  }
  /* 103630e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1036310c:;
  /* 1036310c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10363110 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10363114:;
  /* 10363114 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10363118 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1036311c:;
  /* 1036311c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10363120 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10363124:;
  /* 10363124 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10363128 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1036312c:;
  /* 1036312c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10363130 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10363134:;
  /* 10363134 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10363138 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1036313c:;
  /* 1036313c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10363140 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10363144 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1036314b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1036314d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1036314f:;
  /* 1036314f jmp dword ptr [edx*4 + 0x10363158] */
  switch (EDX) {
    case 0: goto L_10363168;
    case 1: goto L_10363170;
    case 2: goto L_1036317c;
    case 3: goto L_10363190;
    default: x86_unimpl("switch@0x1036314f out of table"); return;
  }
  /* 10363156 mov edi, edi */
  EDI = (EDI);
L_10363168:;
  /* 10363168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1036316b pop esi */
  ESI = (pop32());
  /* 1036316c pop edi */
  EDI = (pop32());
  /* 1036316d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036316e ret  */
  ESPCHK(0x10363010u, _esp0);
  ESP += 4; return;
  /* 1036316f nop  */
  /* nop */
L_10363170:;
  /* 10363170 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10363172 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363177 pop esi */
  ESI = (pop32());
  /* 10363178 pop edi */
  EDI = (pop32());
  /* 10363179 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036317a ret  */
  ESPCHK(0x10363010u, _esp0);
  ESP += 4; return;
  /* 1036317b nop  */
  /* nop */
L_1036317c:;
  /* 1036317c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1036317e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363180 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10363183 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10363186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363189 pop esi */
  ESI = (pop32());
  /* 1036318a pop edi */
  EDI = (pop32());
  /* 1036318b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036318c ret  */
  ESPCHK(0x10363010u, _esp0);
  ESP += 4; return;
  /* 1036318d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10363190:;
  /* 10363190 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10363192 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363194 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10363197 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1036319a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1036319d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103631a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103631a3 pop esi */
  ESI = (pop32());
  /* 103631a4 pop edi */
  EDI = (pop32());
  /* 103631a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103631a6 ret  */
  ESPCHK(0x10363010u, _esp0);
  ESP += 4; return;
  /* 103631a7 nop  */
  /* nop */
L_103631a8:;
  /* 103631a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 103631ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 103631b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103631b6 jne 0x103631dc */
  if (!C.zf) goto L_103631dc;
  /* 103631b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103631bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103631be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103631c1 jb 0x103631d0 */
  if (C.cf) goto L_103631d0;
  /* 103631c3 std  */
  C.df=1;
  /* 103631c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103631c6 cld  */
  C.df=0;
  /* 103631c7 jmp dword ptr [edx*4 + 0x103632f0] */
  switch (EDX) {
    case 0: goto L_10363300;
    case 1: goto L_10363308;
    case 2: goto L_10363318;
    case 3: goto L_1036332c;
    default: x86_unimpl("switch@0x103631c7 out of table"); return;
  }
  /* 103631ce mov edi, edi */
  EDI = (EDI);
L_103631d0:;
  /* 103631d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103631d2 jmp dword ptr [ecx*4 + 0x103632a0] */
  switch (ECX) {
    case 0: goto L_103632e7;
    default: x86_unimpl("switch@0x103631d2 out of table"); return;
  }
  /* 103631d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103631dc:;
  /* 103631dc mov eax, edi */
  EAX = (EDI);
  /* 103631de mov edx, 3 */
  EDX = (0x3u);
  /* 103631e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103631e6 jb 0x103631f4 */
  if (C.cf) goto L_103631f4;
  /* 103631e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 103631eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103631ed jmp dword ptr [eax*4 + 0x103631f8] */
  switch (EAX) {
    case 1: goto L_10363208;
    case 2: goto L_10363228;
    case 3: goto L_10363250;
    default: x86_unimpl("switch@0x103631ed out of table"); return;
  }
L_103631f4:;
  /* 103631f4 jmp dword ptr [ecx*4 + 0x103632f0] */
  switch (ECX) {
    case 0: goto L_10363300;
    case 1: goto L_10363308;
    case 2: goto L_10363318;
    case 3: goto L_1036332c;
    default: x86_unimpl("switch@0x103631f4 out of table"); return;
  }
  /* 103631fb nop  */
  /* nop */
L_10363208:;
  /* 10363208 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036320b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1036320d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10363210 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10363211 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10363214 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10363215 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363218 jb 0x103631d0 */
  if (C.cf) goto L_103631d0;
  /* 1036321a std  */
  C.df=1;
  /* 1036321b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1036321d cld  */
  C.df=0;
  /* 1036321e jmp dword ptr [edx*4 + 0x103632f0] */
  switch (EDX) {
    case 0: goto L_10363300;
    case 1: goto L_10363308;
    case 2: goto L_10363318;
    case 3: goto L_1036332c;
    default: x86_unimpl("switch@0x1036321e out of table"); return;
  }
  /* 10363225 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10363228:;
  /* 10363228 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036322b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1036322d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10363230 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10363233 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10363236 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10363239 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036323c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036323f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363242 jb 0x103631d0 */
  if (C.cf) goto L_103631d0;
  /* 10363244 std  */
  C.df=1;
  /* 10363245 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10363247 cld  */
  C.df=0;
  /* 10363248 jmp dword ptr [edx*4 + 0x103632f0] */
  switch (EDX) {
    case 0: goto L_10363300;
    case 1: goto L_10363308;
    case 2: goto L_10363318;
    case 3: goto L_1036332c;
    default: x86_unimpl("switch@0x10363248 out of table"); return;
  }
  /* 1036324f nop  */
  /* nop */
L_10363250:;
  /* 10363250 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10363253 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10363255 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10363258 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1036325b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1036325e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10363261 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10363264 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10363267 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036326a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036326d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363270 jb 0x103631d0 */
  if (C.cf) goto L_103631d0;
  /* 10363276 std  */
  C.df=1;
  /* 10363277 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10363279 cld  */
  C.df=0;
  /* 1036327a jmp dword ptr [edx*4 + 0x103632f0] */
  switch (EDX) {
    case 0: goto L_10363300;
    case 1: goto L_10363308;
    case 2: goto L_10363318;
    case 3: goto L_1036332c;
    default: x86_unimpl("switch@0x1036327a out of table"); return;
  }
  /* 10363281 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10363284 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 10363285 xor dh, byte ptr [esi] */
  { uint32_t _r=(C.d.b.h)^(r8((uint32_t)(ESI))); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10363287 adc byte ptr [edx + esi + 0x32b41036], ch */
  { uint32_t _a=(r8((uint32_t)(EDX + ESI*1 + 0x32b41036))),_b=(C.c.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ESI*1 + 0x32b41036), (_r)); fl_add(_a,_b,_r,8); }
  /* 1036328e adc byte ptr ss:[edx + esi + 0x32c41036], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + ESI*1 + 0x32c41036))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + ESI*1 + 0x32c41036), (_r)); fl_add(_a,_b,_r,8); }
  /* 10363296 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 10363299 xor dh, byte ptr [esi] */
  { uint32_t _r=(C.d.b.h)^(r8((uint32_t)(ESI))); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1036329b adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1036329d xor dh, byte ptr [esi] */
  { uint32_t _r=(C.d.b.h)^(r8((uint32_t)(ESI))); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 103632a4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 103632a8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 103632ac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 103632b0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 103632b4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 103632b8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 103632bc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103632c0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103632c4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103632c8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103632cc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103632d0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103632d4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103632d8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103632dc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 103632e3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103632e5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_103632e7:;
  /* 103632e7 jmp dword ptr [edx*4 + 0x103632f0] */
  switch (EDX) {
    case 0: goto L_10363300;
    case 1: goto L_10363308;
    case 2: goto L_10363318;
    case 3: goto L_1036332c;
    default: x86_unimpl("switch@0x103632e7 out of table"); return;
  }
  /* 103632ee mov edi, edi */
  EDI = (EDI);
L_10363300:;
  /* 10363300 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363303 pop esi */
  ESI = (pop32());
  /* 10363304 pop edi */
  EDI = (pop32());
  /* 10363305 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10363306 ret  */
  ESPCHK(0x10363010u, _esp0);
  ESP += 4; return;
  /* 10363307 nop  */
  /* nop */
L_10363308:;
  /* 10363308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036330b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1036330e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363311 pop esi */
  ESI = (pop32());
  /* 10363312 pop edi */
  EDI = (pop32());
  /* 10363313 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10363314 ret  */
  ESPCHK(0x10363010u, _esp0);
  ESP += 4; return;
  /* 10363315 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10363318:;
  /* 10363318 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036331b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1036331e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10363321 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10363324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363327 pop esi */
  ESI = (pop32());
  /* 10363328 pop edi */
  EDI = (pop32());
  /* 10363329 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036332a ret  */
  ESPCHK(0x10363010u, _esp0);
  ESP += 4; return;
  /* 1036332b nop  */
  /* nop */
L_1036332c:;
  /* 1036332c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036332f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10363332 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10363335 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10363338 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1036333b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1036333e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363341 pop esi */
  ESI = (pop32());
  /* 10363342 pop edi */
  EDI = (pop32());
  /* 10363343 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10363344 ret  */
  ESPCHK(0x10363010u, _esp0);
  ESP += 4; return;
}

/* FUN_10003345 @ 0x10363345 (62 bytes, 15 insns) */
void f_10363345(void) {
  FTRACE(0x10363345u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363345 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1036334a push 0 */
  push32((uint32_t)(0x0u));
  /* 1036334c push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10363352 call dword ptr [0x1036503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036503c))), 0x10363358u);
  /* 10363358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1036335a mov dword ptr [0x10366764], eax */
  w32((uint32_t)(0x10366764), (EAX));
  /* 1036335f jne 0x10363362 */
  if (!C.zf) goto L_10363362;
  /* 10363361 ret  */
  ESPCHK(0x10363345u, _esp0);
  ESP += 4; return;
L_10363362:;
  /* 10363362 and dword ptr [0x1036675c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1036675c)))&(0x0u); w32((uint32_t)(0x1036675c), (_r)); fl_logic(_r,32); }
  /* 10363369 and dword ptr [0x10366760], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10366760)))&(0x0u); w32((uint32_t)(0x10366760), (_r)); fl_logic(_r,32); }
  /* 10363370 push 1 */
  push32((uint32_t)(0x1u));
  /* 10363372 mov dword ptr [0x10366758], eax */
  w32((uint32_t)(0x10366758), (EAX));
  /* 10363377 mov dword ptr [0x10366750], 0x10 */
  w32((uint32_t)(0x10366750), (0x10u));
  /* 10363381 pop eax */
  EAX = (pop32());
  /* 10363382 ret  */
  ESPCHK(0x10363345u, _esp0);
  ESP += 4; return;
}

/* FUN_10003383 @ 0x10363383 (43 bytes, 14 insns) */
void f_10363383(void) {
  FTRACE(0x10363383u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363383 mov eax, dword ptr [0x10366760] */
  EAX = (r32((uint32_t)(0x10366760)));
  /* 10363388 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1036338b mov eax, dword ptr [0x10366764] */
  EAX = (r32((uint32_t)(0x10366764)));
  /* 10363390 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_10363393:;
  /* 10363393 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363395 jae 0x103633ab */
  if (!C.cf) goto L_103633ab;
  /* 10363397 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1036339b sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036339e cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103633a4 jb 0x103633ad */
  if (C.cf) goto L_103633ad;
  /* 103633a6 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103633a9 jmp 0x10363393 */
  goto L_10363393;
L_103633ab:;
  /* 103633ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103633ad:;
  /* 103633ad ret  */
  ESPCHK(0x10363383u, _esp0);
  ESP += 4; return;
}

/* FUN_100033ae @ 0x103633ae (811 bytes, 264 insns) */
void f_103633ae(void) {
  FTRACE(0x103633aeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103633ae push ebp */
  push32((uint32_t)(EBP));
  /* 103633af mov ebp, esp */
  EBP = (ESP);
  /* 103633b1 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103633b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103633b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103633ba push ebx */
  push32((uint32_t)(EBX));
  /* 103633bb push esi */
  push32((uint32_t)(ESI));
  /* 103633bc mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 103633bf mov esi, edx */
  ESI = (EDX);
  /* 103633c1 sub esi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 103633c4 mov ebx, dword ptr [edx - 4] */
  EBX = (r32((uint32_t)(EDX + -0x4)));
  /* 103633c7 add edx, -4 */
  { uint32_t _a=(EDX),_b=(0xfffffffcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103633ca push edi */
  push32((uint32_t)(EDI));
  /* 103633cb shr esi, 0xf */
  ESI = (sh_shr((uint32_t)(ESI), (0xfu)&0x1f, 32));
  /* 103633ce mov ecx, esi */
  ECX = (ESI);
  /* 103633d0 mov edi, dword ptr [edx - 4] */
  EDI = (r32((uint32_t)(EDX + -0x4)));
  /* 103633d3 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103633d9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 103633da mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 103633dd lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 103633e4 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 103633e7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103633ea mov ecx, dword ptr [ebx + edx] */
  ECX = (r32((uint32_t)(EBX + EDX*1)));
  /* 103633ed test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 103633f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103633f3 jne 0x10363474 */
  if (!C.zf) goto L_10363474;
  /* 103633f5 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 103633f8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 103633fa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103633fb pop edi */
  EDI = (pop32());
  /* 103633fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103633ff cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363401 jbe 0x10363406 */
  if ((C.cf||C.zf)) goto L_10363406;
  /* 10363403 mov dword ptr [ebp + 0xc], edi */
  w32((uint32_t)(EBP + 0xc), (EDI));
L_10363406:;
  /* 10363406 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 1036340a cmp ecx, dword ptr [ebx + edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + EDX*1 + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036340e jne 0x10363458 */
  if (!C.zf) goto L_10363458;
  /* 10363410 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10363413 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363416 jae 0x10363434 */
  if (!C.cf) goto L_10363434;
  /* 10363418 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1036341d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1036341f lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10363423 not edi */
  EDI = (~(EDI));
  /* 10363425 and dword ptr [eax + esi*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10363429 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1036342b jne 0x10363458 */
  if (!C.zf) goto L_10363458;
  /* 1036342d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363430 and dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 10363432 jmp 0x10363458 */
  goto L_10363458;
L_10363434:;
  /* 10363434 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363437 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1036343c shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1036343e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10363441 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10363445 not edi */
  EDI = (~(EDI));
  /* 10363447 and dword ptr [eax + esi*4 + 0xc4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDI); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1036344e dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 10363450 jne 0x10363458 */
  if (!C.zf) goto L_10363458;
  /* 10363452 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363455 and dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10363458:;
  /* 10363458 mov ecx, dword ptr [ebx + edx + 8] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1036345c mov edi, dword ptr [ebx + edx + 4] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10363460 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 10363463 mov ecx, dword ptr [ebx + edx + 4] */
  ECX = (r32((uint32_t)(EBX + EDX*1 + 0x4)));
  /* 10363467 mov edi, dword ptr [ebx + edx + 8] */
  EDI = (r32((uint32_t)(EBX + EDX*1 + 0x8)));
  /* 1036346b add ebx, dword ptr [ebp - 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1036346e mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10363471 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
L_10363474:;
  /* 10363474 mov edi, ebx */
  EDI = (EBX);
  /* 10363476 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 10363479 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1036347a cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036347d jbe 0x10363482 */
  if ((C.cf||C.zf)) goto L_10363482;
  /* 1036347f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10363481 pop edi */
  EDI = (pop32());
L_10363482:;
  /* 10363482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10363485 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10363488 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1036348b jne 0x10363531 */
  if (!C.zf) goto L_10363531;
  /* 10363491 sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10363494 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10363497 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1036349a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1036349c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1036349f dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 103634a0 pop edx */
  EDX = (pop32());
  /* 103634a1 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103634a3 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 103634a6 jbe 0x103634ad */
  if ((C.cf||C.zf)) goto L_103634ad;
  /* 103634a8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103634ab mov ecx, edx */
  ECX = (EDX);
L_103634ad:;
  /* 103634ad add ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 103634b0 mov edi, ebx */
  EDI = (EBX);
  /* 103634b2 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 103634b5 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 103634b8 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 103634b9 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103634bb jbe 0x103634bf */
  if ((C.cf||C.zf)) goto L_103634bf;
  /* 103634bd mov edi, edx */
  EDI = (EDX);
L_103634bf:;
  /* 103634bf cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103634c1 je 0x1036352e */
  if (C.zf) goto L_1036352e;
  /* 103634c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103634c6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 103634c9 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103634cc jne 0x10363516 */
  if (!C.zf) goto L_10363516;
  /* 103634ce mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103634d1 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103634d4 jae 0x103634f2 */
  if (!C.cf) goto L_103634f2;
  /* 103634d6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103634db shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103634dd lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 103634e1 not edx */
  EDX = (~(EDX));
  /* 103634e3 and dword ptr [eax + esi*4 + 0x44], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x44)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 103634e7 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 103634e9 jne 0x10363516 */
  if (!C.zf) goto L_10363516;
  /* 103634eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103634ee and dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 103634f0 jmp 0x10363516 */
  goto L_10363516;
L_103634f2:;
  /* 103634f2 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103634f5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 103634fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 103634fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103634ff lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 10363503 not edx */
  EDX = (~(EDX));
  /* 10363505 and dword ptr [eax + esi*4 + 0xc4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0xc4)))&(EDX); w32((uint32_t)(EAX + ESI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1036350c dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1036350e jne 0x10363516 */
  if (!C.zf) goto L_10363516;
  /* 10363510 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363513 and dword ptr [ecx + 4], edx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EDX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_10363516:;
  /* 10363516 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10363519 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1036351c mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1036351f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10363522 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10363525 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10363528 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1036352b mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1036352e:;
  /* 1036352e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10363531:;
  /* 10363531 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363535 jne 0x10363540 */
  if (!C.zf) goto L_10363540;
  /* 10363537 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036353a je 0x103635c9 */
  if (C.zf) goto L_103635c9;
L_10363540:;
  /* 10363540 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10363543 lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10363546 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 10363549 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1036354c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1036354f lea ecx, [ecx + edi*8] */
  ECX = ((uint32_t)(ECX + EDI*8));
  /* 10363552 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10363555 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10363558 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1036355b mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1036355e mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10363561 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363564 jne 0x103635c9 */
  if (!C.zf) goto L_103635c9;
  /* 10363566 mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 1036356a cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036356d mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 10363570 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10363572 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 10363576 jae 0x1036359d */
  if (!C.cf) goto L_1036359d;
  /* 10363578 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1036357c jne 0x1036358c */
  if (!C.zf) goto L_1036358c;
  /* 1036357e mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10363583 mov ecx, edi */
  ECX = (EDI);
  /* 10363585 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10363587 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1036358a or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1036358c:;
  /* 1036358c mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10363591 mov ecx, edi */
  ECX = (EDI);
  /* 10363593 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10363595 lea eax, [eax + esi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0x44));
  /* 10363599 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1036359b jmp 0x103635c6 */
  goto L_103635c6;
L_1036359d:;
  /* 1036359d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 103635a1 jne 0x103635b3 */
  if (!C.zf) goto L_103635b3;
  /* 103635a3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 103635a6 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 103635ab shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 103635ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103635b0 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_103635b3:;
  /* 103635b3 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 103635b6 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 103635bb shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 103635bd lea eax, [eax + esi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + ESI*4 + 0xc4));
  /* 103635c4 or dword ptr [eax], edi */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDI); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_103635c6:;
  /* 103635c6 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
L_103635c9:;
  /* 103635c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103635cc mov dword ptr [edx], ebx */
  w32((uint32_t)(EDX), (EBX));
  /* 103635ce mov dword ptr [ebx + edx - 4], ebx */
  w32((uint32_t)(EBX + EDX*1 + -0x4), (EBX));
  /* 103635d2 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 103635d4 jne 0x103636d4 */
  if (!C.zf) goto L_103636d4;
  /* 103635da mov eax, dword ptr [0x1036675c] */
  EAX = (r32((uint32_t)(0x1036675c)));
  /* 103635df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103635e1 je 0x103636c6 */
  if (C.zf) goto L_103636c6;
  /* 103635e7 mov ecx, dword ptr [0x10366754] */
  ECX = (r32((uint32_t)(0x10366754)));
  /* 103635ed mov edi, dword ptr [0x10365054] */
  EDI = (r32((uint32_t)(0x10365054)));
  /* 103635f3 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 103635f6 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103635f9 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 103635fe push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10363603 push ebx */
  push32((uint32_t)(EBX));
  /* 10363604 push ecx */
  push32((uint32_t)(ECX));
  /* 10363605 call edi */
  call_ind((uint32_t)(EDI), 0x10363607u);
  /* 10363607 mov ecx, dword ptr [0x10366754] */
  ECX = (r32((uint32_t)(0x10366754)));
  /* 1036360d mov eax, dword ptr [0x1036675c] */
  EAX = (r32((uint32_t)(0x1036675c)));
  /* 10363612 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10363617 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10363619 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1036361c mov eax, dword ptr [0x1036675c] */
  EAX = (r32((uint32_t)(0x1036675c)));
  /* 10363621 mov ecx, dword ptr [0x10366754] */
  ECX = (r32((uint32_t)(0x10366754)));
  /* 10363627 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1036362a and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 10363632 mov eax, dword ptr [0x1036675c] */
  EAX = (r32((uint32_t)(0x1036675c)));
  /* 10363637 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1036363a dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1036363d mov eax, dword ptr [0x1036675c] */
  EAX = (r32((uint32_t)(0x1036675c)));
  /* 10363642 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10363645 cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10363649 jne 0x10363654 */
  if (!C.zf) goto L_10363654;
  /* 1036364b and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1036364f mov eax, dword ptr [0x1036675c] */
  EAX = (r32((uint32_t)(0x1036675c)));
L_10363654:;
  /* 10363654 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363658 jne 0x103636c6 */
  if (!C.zf) goto L_103636c6;
  /* 1036365a push ebx */
  push32((uint32_t)(EBX));
  /* 1036365b push 0 */
  push32((uint32_t)(0x0u));
  /* 1036365d push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 10363660 call edi */
  call_ind((uint32_t)(EDI), 0x10363662u);
  /* 10363662 mov eax, dword ptr [0x1036675c] */
  EAX = (r32((uint32_t)(0x1036675c)));
  /* 10363667 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1036366a push 0 */
  push32((uint32_t)(0x0u));
  /* 1036366c push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10363672 call dword ptr [0x10365050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365050))), 0x10363678u);
  /* 10363678 mov eax, dword ptr [0x10366760] */
  EAX = (r32((uint32_t)(0x10366760)));
  /* 1036367d mov edx, dword ptr [0x10366764] */
  EDX = (r32((uint32_t)(0x10366764)));
  /* 10363683 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10363686 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10363689 mov ecx, eax */
  ECX = (EAX);
  /* 1036368b mov eax, dword ptr [0x1036675c] */
  EAX = (r32((uint32_t)(0x1036675c)));
  /* 10363690 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10363692 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 10363696 push ecx */
  push32((uint32_t)(ECX));
  /* 10363697 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1036369a push ecx */
  push32((uint32_t)(ECX));
  /* 1036369b push eax */
  push32((uint32_t)(EAX));
  /* 1036369c call 0x10364130 */
  push32(0x103636a1u); f_10364130();
  /* 103636a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103636a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103636a7 dec dword ptr [0x10366760] */
  { uint32_t _r=(r32((uint32_t)(0x10366760)))-1; w32((uint32_t)(0x10366760), (_r)); fl_dec(_r,32); }
  /* 103636ad cmp eax, dword ptr [0x1036675c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1036675c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103636b3 jbe 0x103636b8 */
  if ((C.cf||C.zf)) goto L_103636b8;
  /* 103636b5 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_103636b8:;
  /* 103636b8 mov ecx, dword ptr [0x10366764] */
  ECX = (r32((uint32_t)(0x10366764)));
  /* 103636be mov dword ptr [0x10366758], ecx */
  w32((uint32_t)(0x10366758), (ECX));
  /* 103636c4 jmp 0x103636c9 */
  goto L_103636c9;
L_103636c6:;
  /* 103636c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_103636c9:;
  /* 103636c9 mov dword ptr [0x1036675c], eax */
  w32((uint32_t)(0x1036675c), (EAX));
  /* 103636ce mov dword ptr [0x10366754], esi */
  w32((uint32_t)(0x10366754), (ESI));
L_103636d4:;
  /* 103636d4 pop edi */
  EDI = (pop32());
  /* 103636d5 pop esi */
  ESI = (pop32());
  /* 103636d6 pop ebx */
  EBX = (pop32());
  /* 103636d7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103636d8 ret  */
  ESPCHK(0x103633aeu, _esp0);
  ESP += 4; return;
}

/* FUN_100036d9 @ 0x103636d9 (777 bytes, 275 insns) */
void f_103636d9(void) {
  FTRACE(0x103636d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103636d9 push ebp */
  push32((uint32_t)(EBP));
  /* 103636da mov ebp, esp */
  EBP = (ESP);
  /* 103636dc sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103636df mov eax, dword ptr [0x10366760] */
  EAX = (r32((uint32_t)(0x10366760)));
  /* 103636e4 mov edx, dword ptr [0x10366764] */
  EDX = (r32((uint32_t)(0x10366764)));
  /* 103636ea push ebx */
  push32((uint32_t)(EBX));
  /* 103636eb push esi */
  push32((uint32_t)(ESI));
  /* 103636ec lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 103636ef push edi */
  push32((uint32_t)(EDI));
  /* 103636f0 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 103636f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103636f6 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 103636f9 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 103636fc and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 103636ff mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10363702 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10363705 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10363706 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363709 jge 0x10363719 */
  if ((C.sf==C.of)) goto L_10363719;
  /* 1036370b or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1036370e shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10363710 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 10363714 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10363717 jmp 0x10363729 */
  goto L_10363729;
L_10363719:;
  /* 10363719 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1036371c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1036371f xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10363721 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10363723 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 10363726 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10363729:;
  /* 10363729 mov eax, dword ptr [0x10366758] */
  EAX = (r32((uint32_t)(0x10366758)));
  /* 1036372e mov ebx, eax */
  EBX = (EAX);
  /* 10363730 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363732 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10363735 jae 0x10363750 */
  if (!C.cf) goto L_10363750;
L_10363737:;
  /* 10363737 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1036373a mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1036373c and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1036373f and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10363741 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10363743 jne 0x10363750 */
  if (!C.zf) goto L_10363750;
  /* 10363745 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363748 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036374b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1036374e jb 0x10363737 */
  if (C.cf) goto L_10363737;
L_10363750:;
  /* 10363750 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363753 jne 0x103637ce */
  if (!C.zf) goto L_103637ce;
  /* 10363755 mov ebx, edx */
  EBX = (EDX);
L_10363757:;
  /* 10363757 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363759 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1036375c jae 0x10363773 */
  if (!C.cf) goto L_10363773;
  /* 1036375e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 10363761 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 10363763 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10363766 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 10363768 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1036376a jne 0x10363771 */
  if (!C.zf) goto L_10363771;
  /* 1036376c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1036376f jmp 0x10363757 */
  goto L_10363757;
L_10363771:;
  /* 10363771 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_10363773:;
  /* 10363773 jne 0x103637ce */
  if (!C.zf) goto L_103637ce;
L_10363775:;
  /* 10363775 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363778 jae 0x1036378b */
  if (!C.cf) goto L_1036378b;
  /* 1036377a cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036377e jne 0x10363788 */
  if (!C.zf) goto L_10363788;
  /* 10363780 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363783 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10363786 jmp 0x10363775 */
  goto L_10363775;
L_10363788:;
  /* 10363788 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1036378b:;
  /* 1036378b jne 0x103637b3 */
  if (!C.zf) goto L_103637b3;
  /* 1036378d mov ebx, edx */
  EBX = (EDX);
L_1036378f:;
  /* 1036378f cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363791 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 10363794 jae 0x103637a3 */
  if (!C.cf) goto L_103637a3;
  /* 10363796 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036379a jne 0x103637a1 */
  if (!C.zf) goto L_103637a1;
  /* 1036379c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1036379f jmp 0x1036378f */
  goto L_1036378f;
L_103637a1:;
  /* 103637a1 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_103637a3:;
  /* 103637a3 jne 0x103637b3 */
  if (!C.zf) goto L_103637b3;
  /* 103637a5 call 0x103639e2 */
  push32(0x103637aau); f_103639e2();
  /* 103637aa mov ebx, eax */
  EBX = (EAX);
  /* 103637ac test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 103637ae mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 103637b1 je 0x103637c7 */
  if (C.zf) goto L_103637c7;
L_103637b3:;
  /* 103637b3 push ebx */
  push32((uint32_t)(EBX));
  /* 103637b4 call 0x10363a93 */
  push32(0x103637b9u); f_10363a93();
  /* 103637b9 pop ecx */
  ECX = (pop32());
  /* 103637ba mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 103637bd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103637bf mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 103637c2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103637c5 jne 0x103637ce */
  if (!C.zf) goto L_103637ce;
L_103637c7:;
  /* 103637c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103637c9 jmp 0x103639dd */
  goto L_103639dd;
L_103637ce:;
  /* 103637ce mov dword ptr [0x10366758], ebx */
  w32((uint32_t)(0x10366758), (EBX));
  /* 103637d4 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 103637d7 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 103637d9 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103637dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103637df je 0x103637f5 */
  if (C.zf) goto L_103637f5;
  /* 103637e1 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 103637e8 mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 103637ec and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 103637ef and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 103637f1 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 103637f3 jne 0x1036382c */
  if (!C.zf) goto L_1036382c;
L_103637f5:;
  /* 103637f5 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 103637fb mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 103637fe and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 10363801 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 10363804 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10363808 lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1036380b or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1036380d mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 10363810 jne 0x10363829 */
  if (!C.zf) goto L_10363829;
L_10363812:;
  /* 10363812 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 10363818 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1036381b and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1036381e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363821 mov edi, esi */
  EDI = (ESI);
  /* 10363823 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 10363825 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 10363827 je 0x10363812 */
  if (C.zf) goto L_10363812;
L_10363829:;
  /* 10363829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1036382c:;
  /* 1036382c mov ecx, edx */
  ECX = (EDX);
  /* 1036382e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10363830 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10363836 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1036383d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10363840 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 10363844 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10363846 jne 0x10363855 */
  if (!C.zf) goto L_10363855;
  /* 10363848 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1036384f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10363851 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 10363854 pop edi */
  EDI = (pop32());
L_10363855:;
  /* 10363855 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10363857 jl 0x1036385e */
  if ((C.sf!=C.of)) goto L_1036385e;
  /* 10363859 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1036385b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1036385c jmp 0x10363855 */
  goto L_10363855;
L_1036385e:;
  /* 1036385e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10363861 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 10363865 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10363867 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036386a mov esi, ecx */
  ESI = (ECX);
  /* 1036386c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1036386f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 10363872 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10363873 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363876 jle 0x1036387b */
  if ((C.zf||C.sf!=C.of)) goto L_1036387b;
  /* 10363878 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1036387a pop esi */
  ESI = (pop32());
L_1036387b:;
  /* 1036387b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036387d je 0x10363990 */
  if (C.zf) goto L_10363990;
  /* 10363883 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10363886 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363889 jne 0x103638ec */
  if (!C.zf) goto L_103638ec;
  /* 1036388b cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036388e jge 0x103638bb */
  if ((C.sf==C.of)) goto L_103638bb;
  /* 10363890 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 10363895 mov ecx, edi */
  ECX = (EDI);
  /* 10363897 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 10363899 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1036389c lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 103638a0 not ebx */
  EBX = (~(EBX));
  /* 103638a2 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 103638a5 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 103638a9 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 103638ad dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 103638af jne 0x103638e9 */
  if (!C.zf) goto L_103638e9;
  /* 103638b1 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 103638b4 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103638b7 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 103638b9 jmp 0x103638ec */
  goto L_103638ec;
L_103638bb:;
  /* 103638bb lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 103638be mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 103638c3 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 103638c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103638c8 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 103638cc lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 103638d3 not ebx */
  EBX = (~(EBX));
  /* 103638d5 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 103638d7 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 103638d9 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 103638dc jne 0x103638e9 */
  if (!C.zf) goto L_103638e9;
  /* 103638de mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 103638e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103638e4 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 103638e7 jmp 0x103638ec */
  goto L_103638ec;
L_103638e9:;
  /* 103638e9 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_103638ec:;
  /* 103638ec mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 103638ef mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 103638f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103638f6 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 103638f9 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 103638fc mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 103638ff mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 10363902 je 0x1036399c */
  if (C.zf) goto L_1036399c;
  /* 10363908 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1036390b mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1036390f lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 10363912 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 10363915 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10363918 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1036391b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1036391e mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10363921 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 10363924 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363927 jne 0x1036398d */
  if (!C.zf) goto L_1036398d;
  /* 10363929 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1036392d cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363930 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 10363933 jge 0x1036395e */
  if ((C.sf==C.of)) goto L_1036395e;
  /* 10363935 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10363937 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1036393b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1036393f jne 0x1036394c */
  if (!C.zf) goto L_1036394c;
  /* 10363941 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10363946 mov ecx, esi */
  ECX = (ESI);
  /* 10363948 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1036394a or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1036394c:;
  /* 1036394c mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10363951 mov ecx, esi */
  ECX = (ESI);
  /* 10363953 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10363955 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10363958 or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1036395c jmp 0x1036398d */
  goto L_1036398d;
L_1036395e:;
  /* 1036395e inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10363960 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10363964 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 10363968 jne 0x10363977 */
  if (!C.zf) goto L_10363977;
  /* 1036396a lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1036396d mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 10363972 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 10363974 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_10363977:;
  /* 10363977 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1036397a lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 10363981 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 10363984 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10363989 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1036398b or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1036398d:;
  /* 1036398d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_10363990:;
  /* 10363990 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10363992 je 0x1036399f */
  if (C.zf) goto L_1036399f;
  /* 10363994 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10363996 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1036399a jmp 0x1036399f */
  goto L_1036399f;
L_1036399c:;
  /* 1036399c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1036399f:;
  /* 1036399f mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 103639a2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103639a4 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 103639a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103639a9 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 103639ad mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 103639b0 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 103639b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103639b4 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 103639b7 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 103639b9 jne 0x103639d5 */
  if (!C.zf) goto L_103639d5;
  /* 103639bb cmp ebx, dword ptr [0x1036675c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1036675c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103639c1 jne 0x103639d5 */
  if (!C.zf) goto L_103639d5;
  /* 103639c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103639c6 cmp ecx, dword ptr [0x10366754] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10366754))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103639cc jne 0x103639d5 */
  if (!C.zf) goto L_103639d5;
  /* 103639ce and dword ptr [0x1036675c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1036675c)))&(0x0u); w32((uint32_t)(0x1036675c), (_r)); fl_logic(_r,32); }
L_103639d5:;
  /* 103639d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103639d8 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103639da lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_103639dd:;
  /* 103639dd pop edi */
  EDI = (pop32());
  /* 103639de pop esi */
  ESI = (pop32());
  /* 103639df pop ebx */
  EBX = (pop32());
  /* 103639e0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103639e1 ret  */
  ESPCHK(0x103636d9u, _esp0);
  ESP += 4; return;
}

/* FUN_100039e2 @ 0x103639e2 (177 bytes, 53 insns) */
void f_103639e2(void) {
  FTRACE(0x103639e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103639e2 mov eax, dword ptr [0x10366760] */
  EAX = (r32((uint32_t)(0x10366760)));
  /* 103639e7 mov ecx, dword ptr [0x10366750] */
  ECX = (r32((uint32_t)(0x10366750)));
  /* 103639ed push esi */
  push32((uint32_t)(ESI));
  /* 103639ee push edi */
  push32((uint32_t)(EDI));
  /* 103639ef xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 103639f1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103639f3 jne 0x10363a25 */
  if (!C.zf) goto L_10363a25;
  /* 103639f5 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 103639f9 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 103639fc push eax */
  push32((uint32_t)(EAX));
  /* 103639fd push dword ptr [0x10366764] */
  push32((uint32_t)(r32((uint32_t)(0x10366764))));
  /* 10363a03 push edi */
  push32((uint32_t)(EDI));
  /* 10363a04 push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10363a0a call dword ptr [0x10365028] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365028))), 0x10363a10u);
  /* 10363a10 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363a12 je 0x10363a75 */
  if (C.zf) goto L_10363a75;
  /* 10363a14 add dword ptr [0x10366750], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10366750))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10366750), (_r)); fl_add(_a,_b,_r,32); }
  /* 10363a1b mov dword ptr [0x10366764], eax */
  w32((uint32_t)(0x10366764), (EAX));
  /* 10363a20 mov eax, dword ptr [0x10366760] */
  EAX = (r32((uint32_t)(0x10366760)));
L_10363a25:;
  /* 10363a25 mov ecx, dword ptr [0x10366764] */
  ECX = (r32((uint32_t)(0x10366764)));
  /* 10363a2b push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10363a30 push 8 */
  push32((uint32_t)(0x8u));
  /* 10363a32 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 10363a35 push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10363a3b lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 10363a3e call dword ptr [0x1036503c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036503c))), 0x10363a44u);
  /* 10363a44 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363a46 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 10363a49 je 0x10363a75 */
  if (C.zf) goto L_10363a75;
  /* 10363a4b push 4 */
  push32((uint32_t)(0x4u));
  /* 10363a4d push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 10363a52 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10363a57 push edi */
  push32((uint32_t)(EDI));
  /* 10363a58 call dword ptr [0x1036502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036502c))), 0x10363a5eu);
  /* 10363a5e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363a60 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 10363a63 jne 0x10363a79 */
  if (!C.zf) goto L_10363a79;
  /* 10363a65 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 10363a68 push edi */
  push32((uint32_t)(EDI));
  /* 10363a69 push dword ptr [0x10366988] */
  push32((uint32_t)(r32((uint32_t)(0x10366988))));
  /* 10363a6f call dword ptr [0x10365050] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365050))), 0x10363a75u);
L_10363a75:;
  /* 10363a75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10363a77 jmp 0x10363a90 */
  goto L_10363a90;
L_10363a79:;
  /* 10363a79 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 10363a7d mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 10363a7f mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 10363a82 inc dword ptr [0x10366760] */
  { uint32_t _r=(r32((uint32_t)(0x10366760)))+1; w32((uint32_t)(0x10366760), (_r)); fl_inc(_r,32); }
  /* 10363a88 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 10363a8b or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 10363a8e mov eax, esi */
  EAX = (ESI);
L_10363a90:;
  /* 10363a90 pop edi */
  EDI = (pop32());
  /* 10363a91 pop esi */
  ESI = (pop32());
  /* 10363a92 ret  */
  ESPCHK(0x103639e2u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a93 @ 0x10363a93 (251 bytes, 85 insns) */
void f_10363a93(void) {
  FTRACE(0x10363a93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363a93 push ebp */
  push32((uint32_t)(EBP));
  /* 10363a94 mov ebp, esp */
  EBP = (ESP);
  /* 10363a96 push ecx */
  push32((uint32_t)(ECX));
  /* 10363a97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363a9a push ebx */
  push32((uint32_t)(EBX));
  /* 10363a9b push esi */
  push32((uint32_t)(ESI));
  /* 10363a9c push edi */
  push32((uint32_t)(EDI));
  /* 10363a9d mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 10363aa0 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 10363aa3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_10363aa5:;
  /* 10363aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363aa7 jl 0x10363aae */
  if ((C.sf!=C.of)) goto L_10363aae;
  /* 10363aa9 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10363aab inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 10363aac jmp 0x10363aa5 */
  goto L_10363aa5;
L_10363aae:;
  /* 10363aae mov eax, ebx */
  EAX = (EBX);
  /* 10363ab0 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10363ab2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10363ab8 pop edx */
  EDX = (pop32());
  /* 10363ab9 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 10363ac0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10363ac3:;
  /* 10363ac3 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 10363ac6 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 10363ac9 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363acc dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10363acd jne 0x10363ac3 */
  if (!C.zf) goto L_10363ac3;
  /* 10363acf mov edi, ebx */
  EDI = (EBX);
  /* 10363ad1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10363ad3 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 10363ad6 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10363ad9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10363ade push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10363ae3 push edi */
  push32((uint32_t)(EDI));
  /* 10363ae4 call dword ptr [0x1036502c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036502c))), 0x10363aeau);
  /* 10363aea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363aec jne 0x10363af6 */
  if (!C.zf) goto L_10363af6;
  /* 10363aee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10363af1 jmp 0x10363b89 */
  goto L_10363b89;
L_10363af6:;
  /* 10363af6 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 10363afc cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363afe ja 0x10363b3c */
  if ((!C.cf&&!C.zf)) goto L_10363b3c;
  /* 10363b00 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_10363b03:;
  /* 10363b03 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 10363b07 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 10363b0e lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 10363b14 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 10363b1b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10363b1d lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 10363b23 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10363b26 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 10363b30 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363b35 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 10363b38 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363b3a jbe 0x10363b03 */
  if ((C.cf||C.zf)) goto L_10363b03;
L_10363b3c:;
  /* 10363b3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10363b3f lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 10363b42 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10363b49 pop edi */
  EDI = (pop32());
  /* 10363b4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10363b4d mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10363b50 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 10363b53 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10363b56 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10363b59 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 10363b5e mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 10363b65 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 10363b68 mov cl, al */
  CL = (AL);
  /* 10363b6a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 10363b6c test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10363b6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10363b71 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 10363b74 jne 0x10363b79 */
  if (!C.zf) goto L_10363b79;
  /* 10363b76 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_10363b79:;
  /* 10363b79 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10363b7e mov ecx, ebx */
  ECX = (EBX);
  /* 10363b80 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10363b82 not edx */
  EDX = (~(EDX));
  /* 10363b84 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 10363b87 mov eax, ebx */
  EAX = (EBX);
L_10363b89:;
  /* 10363b89 pop edi */
  EDI = (pop32());
  /* 10363b8a pop esi */
  ESI = (pop32());
  /* 10363b8b pop ebx */
  EBX = (pop32());
  /* 10363b8c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10363b8d ret  */
  ESPCHK(0x10363a93u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b8e @ 0x10363b8e (137 bytes, 50 insns) */
void f_10363b8e(void) {
  FTRACE(0x10363b8eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363b8e push ebx */
  push32((uint32_t)(EBX));
  /* 10363b8f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10363b91 cmp dword ptr [0x10366714], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10366714))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363b97 push esi */
  push32((uint32_t)(ESI));
  /* 10363b98 push edi */
  push32((uint32_t)(EDI));
  /* 10363b99 jne 0x10363bdd */
  if (!C.zf) goto L_10363bdd;
  /* 10363b9b push 0x10365458 */
  push32((uint32_t)(0x10365458u));
  /* 10363ba0 call dword ptr [0x10365020] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365020))), 0x10363ba6u);
  /* 10363ba6 mov edi, eax */
  EDI = (EAX);
  /* 10363ba8 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363baa je 0x10363c13 */
  if (C.zf) goto L_10363c13;
  /* 10363bac mov esi, dword ptr [0x10365024] */
  ESI = (r32((uint32_t)(0x10365024)));
  /* 10363bb2 push 0x1036544c */
  push32((uint32_t)(0x1036544cu));
  /* 10363bb7 push edi */
  push32((uint32_t)(EDI));
  /* 10363bb8 call esi */
  call_ind((uint32_t)(ESI), 0x10363bbau);
  /* 10363bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363bbc mov dword ptr [0x10366714], eax */
  w32((uint32_t)(0x10366714), (EAX));
  /* 10363bc1 je 0x10363c13 */
  if (C.zf) goto L_10363c13;
  /* 10363bc3 push 0x1036543c */
  push32((uint32_t)(0x1036543cu));
  /* 10363bc8 push edi */
  push32((uint32_t)(EDI));
  /* 10363bc9 call esi */
  call_ind((uint32_t)(ESI), 0x10363bcbu);
  /* 10363bcb push 0x10365428 */
  push32((uint32_t)(0x10365428u));
  /* 10363bd0 push edi */
  push32((uint32_t)(EDI));
  /* 10363bd1 mov dword ptr [0x10366718], eax */
  w32((uint32_t)(0x10366718), (EAX));
  /* 10363bd6 call esi */
  call_ind((uint32_t)(ESI), 0x10363bd8u);
  /* 10363bd8 mov dword ptr [0x1036671c], eax */
  w32((uint32_t)(0x1036671c), (EAX));
L_10363bdd:;
  /* 10363bdd mov eax, dword ptr [0x10366718] */
  EAX = (r32((uint32_t)(0x10366718)));
  /* 10363be2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363be4 je 0x10363bfc */
  if (C.zf) goto L_10363bfc;
  /* 10363be6 call eax */
  call_ind((uint32_t)(EAX), 0x10363be8u);
  /* 10363be8 mov ebx, eax */
  EBX = (EAX);
  /* 10363bea test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10363bec je 0x10363bfc */
  if (C.zf) goto L_10363bfc;
  /* 10363bee mov eax, dword ptr [0x1036671c] */
  EAX = (r32((uint32_t)(0x1036671c)));
  /* 10363bf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363bf5 je 0x10363bfc */
  if (C.zf) goto L_10363bfc;
  /* 10363bf7 push ebx */
  push32((uint32_t)(EBX));
  /* 10363bf8 call eax */
  call_ind((uint32_t)(EAX), 0x10363bfau);
  /* 10363bfa mov ebx, eax */
  EBX = (EAX);
L_10363bfc:;
  /* 10363bfc push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10363c00 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10363c04 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 10363c08 push ebx */
  push32((uint32_t)(EBX));
  /* 10363c09 call dword ptr [0x10366714] */
  call_ind((uint32_t)(r32((uint32_t)(0x10366714))), 0x10363c0fu);
L_10363c0f:;
  /* 10363c0f pop edi */
  EDI = (pop32());
  /* 10363c10 pop esi */
  ESI = (pop32());
  /* 10363c11 pop ebx */
  EBX = (pop32());
  /* 10363c12 ret  */
  ESPCHK(0x10363b8eu, _esp0);
  ESP += 4; return;
L_10363c13:;
  /* 10363c13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10363c15 jmp 0x10363c0f */
  goto L_10363c0f;
}

/* _strncpy @ 0x10363c20 (254 bytes, 109 insns) */
void f_10363c20(void) {
  FTRACE(0x10363c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363c20 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10363c24 push edi */
  push32((uint32_t)(EDI));
  /* 10363c25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10363c27 je 0x10363ca3 */
  if (C.zf) goto L_10363ca3;
  /* 10363c29 push esi */
  push32((uint32_t)(ESI));
  /* 10363c2a push ebx */
  push32((uint32_t)(EBX));
  /* 10363c2b mov ebx, ecx */
  EBX = (ECX);
  /* 10363c2d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10363c31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10363c37 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10363c3b jne 0x10363c44 */
  if (!C.zf) goto L_10363c44;
  /* 10363c3d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10363c40 jne 0x10363cb1 */
  if (!C.zf) goto L_10363cb1;
  /* 10363c42 jmp 0x10363c65 */
  goto L_10363c65;
L_10363c44:;
  /* 10363c44 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10363c46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10363c47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363c49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10363c4a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10363c4b je 0x10363c72 */
  if (C.zf) goto L_10363c72;
  /* 10363c4d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10363c4f je 0x10363c7a */
  if (C.zf) goto L_10363c7a;
  /* 10363c51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10363c57 jne 0x10363c44 */
  if (!C.zf) goto L_10363c44;
  /* 10363c59 mov ebx, ecx */
  EBX = (ECX);
  /* 10363c5b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10363c5e jne 0x10363cb1 */
  if (!C.zf) goto L_10363cb1;
L_10363c60:;
  /* 10363c60 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10363c63 je 0x10363c72 */
  if (C.zf) goto L_10363c72;
L_10363c65:;
  /* 10363c65 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10363c67 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10363c68 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363c6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10363c6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10363c6d je 0x10363c9e */
  if (C.zf) goto L_10363c9e;
  /* 10363c6f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10363c70 jne 0x10363c65 */
  if (!C.zf) goto L_10363c65;
L_10363c72:;
  /* 10363c72 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10363c76 pop ebx */
  EBX = (pop32());
  /* 10363c77 pop esi */
  ESI = (pop32());
  /* 10363c78 pop edi */
  EDI = (pop32());
  /* 10363c79 ret  */
  ESPCHK(0x10363c20u, _esp0);
  ESP += 4; return;
L_10363c7a:;
  /* 10363c7a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10363c80 je 0x10363c94 */
  if (C.zf) goto L_10363c94;
L_10363c82:;
  /* 10363c82 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363c84 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10363c85 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10363c86 je 0x10363d16 */
  if (C.zf) goto L_10363d16;
  /* 10363c8c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10363c92 jne 0x10363c82 */
  if (!C.zf) goto L_10363c82;
L_10363c94:;
  /* 10363c94 mov ebx, ecx */
  EBX = (ECX);
  /* 10363c96 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10363c99 jne 0x10363d07 */
  if (!C.zf) goto L_10363d07;
L_10363c9b:;
  /* 10363c9b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363c9d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10363c9e:;
  /* 10363c9e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10363c9f jne 0x10363c9b */
  if (!C.zf) goto L_10363c9b;
  /* 10363ca1 pop ebx */
  EBX = (pop32());
  /* 10363ca2 pop esi */
  ESI = (pop32());
L_10363ca3:;
  /* 10363ca3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10363ca7 pop edi */
  EDI = (pop32());
  /* 10363ca8 ret  */
  ESPCHK(0x10363c20u, _esp0);
  ESP += 4; return;
L_10363ca9:;
  /* 10363ca9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10363cab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10363cae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10363caf je 0x10363c60 */
  if (C.zf) goto L_10363c60;
L_10363cb1:;
  /* 10363cb1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10363cb6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10363cb8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363cba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10363cbd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10363cbf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10363cc1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10363cc4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10363cc9 je 0x10363ca9 */
  if (C.zf) goto L_10363ca9;
  /* 10363ccb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10363ccd je 0x10363cfb */
  if (C.zf) goto L_10363cfb;
  /* 10363ccf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10363cd1 je 0x10363cf1 */
  if (C.zf) goto L_10363cf1;
  /* 10363cd3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10363cd9 je 0x10363ce7 */
  if (C.zf) goto L_10363ce7;
  /* 10363cdb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10363ce1 jne 0x10363ca9 */
  if (!C.zf) goto L_10363ca9;
  /* 10363ce3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10363ce5 jmp 0x10363cff */
  goto L_10363cff;
L_10363ce7:;
  /* 10363ce7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10363ced mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10363cef jmp 0x10363cff */
  goto L_10363cff;
L_10363cf1:;
  /* 10363cf1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10363cf7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10363cf9 jmp 0x10363cff */
  goto L_10363cff;
L_10363cfb:;
  /* 10363cfb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10363cfd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10363cff:;
  /* 10363cff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10363d02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10363d04 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10363d05 je 0x10363d11 */
  if (C.zf) goto L_10363d11;
L_10363d07:;
  /* 10363d07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10363d09:;
  /* 10363d09 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10363d0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10363d0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10363d0f jne 0x10363d09 */
  if (!C.zf) goto L_10363d09;
L_10363d11:;
  /* 10363d11 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10363d14 jne 0x10363c9b */
  if (!C.zf) goto L_10363c9b;
L_10363d16:;
  /* 10363d16 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10363d1a pop ebx */
  EBX = (pop32());
  /* 10363d1b pop esi */
  ESI = (pop32());
  /* 10363d1c pop edi */
  EDI = (pop32());
  /* 10363d1d ret  */
  ESPCHK(0x10363c20u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10363d20 (88 bytes, 40 insns) */
void f_10363d20(void) {
  FTRACE(0x10363d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363d20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10363d24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10363d28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10363d2a je 0x10363d73 */
  if (C.zf) goto L_10363d73;
  /* 10363d2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10363d2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10363d32 push edi */
  push32((uint32_t)(EDI));
  /* 10363d33 mov edi, ecx */
  EDI = (ECX);
  /* 10363d35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363d38 jb 0x10363d67 */
  if (C.cf) goto L_10363d67;
  /* 10363d3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10363d3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10363d3f je 0x10363d49 */
  if (C.zf) goto L_10363d49;
  /* 10363d41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10363d43:;
  /* 10363d43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363d45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10363d46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10363d47 jne 0x10363d43 */
  if (!C.zf) goto L_10363d43;
L_10363d49:;
  /* 10363d49 mov ecx, eax */
  ECX = (EAX);
  /* 10363d4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10363d4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363d50 mov ecx, eax */
  ECX = (EAX);
  /* 10363d52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10363d55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363d57 mov ecx, edx */
  ECX = (EDX);
  /* 10363d59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10363d5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10363d5f je 0x10363d67 */
  if (C.zf) goto L_10363d67;
  /* 10363d61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10363d63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10363d65 je 0x10363d6d */
  if (C.zf) goto L_10363d6d;
L_10363d67:;
  /* 10363d67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10363d69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10363d6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10363d6b jne 0x10363d67 */
  if (!C.zf) goto L_10363d67;
L_10363d6d:;
  /* 10363d6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10363d71 pop edi */
  EDI = (pop32());
  /* 10363d72 ret  */
  ESPCHK(0x10363d20u, _esp0);
  ESP += 4; return;
L_10363d73:;
  /* 10363d73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10363d77 ret  */
  ESPCHK(0x10363d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d78 @ 0x10363d78 (27 bytes, 13 insns) */
void f_10363d78(void) {
  FTRACE(0x10363d78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363d78 mov eax, dword ptr [0x10366720] */
  EAX = (r32((uint32_t)(0x10366720)));
  /* 10363d7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363d7f je 0x10363d90 */
  if (C.zf) goto L_10363d90;
  /* 10363d81 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 10363d85 call eax */
  call_ind((uint32_t)(EAX), 0x10363d87u);
  /* 10363d87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363d89 pop ecx */
  ECX = (pop32());
  /* 10363d8a je 0x10363d90 */
  if (C.zf) goto L_10363d90;
  /* 10363d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10363d8e pop eax */
  EAX = (pop32());
  /* 10363d8f ret  */
  ESPCHK(0x10363d78u, _esp0);
  ESP += 4; return;
L_10363d90:;
  /* 10363d90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10363d92 ret  */
  ESPCHK(0x10363d78u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d93 @ 0x10363d93 (511 bytes, 193 insns) */
void f_10363d93(void) {
  FTRACE(0x10363d93u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363d93 push ebp */
  push32((uint32_t)(EBP));
  /* 10363d94 mov ebp, esp */
  EBP = (ESP);
  /* 10363d96 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10363d98 push 0x10365470 */
  push32((uint32_t)(0x10365470u));
  /* 10363d9d push 0x10364560 */
  push32((uint32_t)(0x10364560u));
  /* 10363da2 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10363da8 push eax */
  push32((uint32_t)(EAX));
  /* 10363da9 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10363db0 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10363db3 push ebx */
  push32((uint32_t)(EBX));
  /* 10363db4 push esi */
  push32((uint32_t)(ESI));
  /* 10363db5 push edi */
  push32((uint32_t)(EDI));
  /* 10363db6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10363db9 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10363dbb cmp dword ptr [0x10366748], edi */
  { uint32_t _a=(r32((uint32_t)(0x10366748))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363dc1 jne 0x10363e09 */
  if (!C.zf) goto L_10363e09;
  /* 10363dc3 push edi */
  push32((uint32_t)(EDI));
  /* 10363dc4 push edi */
  push32((uint32_t)(EDI));
  /* 10363dc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10363dc7 pop ebx */
  EBX = (pop32());
  /* 10363dc8 push ebx */
  push32((uint32_t)(EBX));
  /* 10363dc9 push 0x10365468 */
  push32((uint32_t)(0x10365468u));
  /* 10363dce mov esi, 0x100 */
  ESI = (0x100u);
  /* 10363dd3 push esi */
  push32((uint32_t)(ESI));
  /* 10363dd4 push edi */
  push32((uint32_t)(EDI));
  /* 10363dd5 call dword ptr [0x10365014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365014))), 0x10363ddbu);
  /* 10363ddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363ddd je 0x10363de7 */
  if (C.zf) goto L_10363de7;
  /* 10363ddf mov dword ptr [0x10366748], ebx */
  w32((uint32_t)(0x10366748), (EBX));
  /* 10363de5 jmp 0x10363e09 */
  goto L_10363e09;
L_10363de7:;
  /* 10363de7 push edi */
  push32((uint32_t)(EDI));
  /* 10363de8 push edi */
  push32((uint32_t)(EDI));
  /* 10363de9 push ebx */
  push32((uint32_t)(EBX));
  /* 10363dea push 0x10365464 */
  push32((uint32_t)(0x10365464u));
  /* 10363def push esi */
  push32((uint32_t)(ESI));
  /* 10363df0 push edi */
  push32((uint32_t)(EDI));
  /* 10363df1 call dword ptr [0x10365018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365018))), 0x10363df7u);
  /* 10363df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363df9 je 0x10363f21 */
  if (C.zf) goto L_10363f21;
  /* 10363dff mov dword ptr [0x10366748], 2 */
  w32((uint32_t)(0x10366748), (0x2u));
L_10363e09:;
  /* 10363e09 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363e0c jle 0x10363e1e */
  if ((C.zf||C.sf!=C.of)) goto L_10363e1e;
  /* 10363e0e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10363e11 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10363e14 call 0x10363fb7 */
  push32(0x10363e19u); f_10363fb7();
  /* 10363e19 pop ecx */
  ECX = (pop32());
  /* 10363e1a pop ecx */
  ECX = (pop32());
  /* 10363e1b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10363e1e:;
  /* 10363e1e mov eax, dword ptr [0x10366748] */
  EAX = (r32((uint32_t)(0x10366748)));
  /* 10363e23 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363e26 jne 0x10363e45 */
  if (!C.zf) goto L_10363e45;
  /* 10363e28 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10363e2b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10363e2e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10363e31 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10363e34 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10363e37 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10363e3a call dword ptr [0x10365018] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365018))), 0x10363e40u);
  /* 10363e40 jmp 0x10363f23 */
  goto L_10363f23;
L_10363e45:;
  /* 10363e45 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363e48 jne 0x10363f21 */
  if (!C.zf) goto L_10363f21;
  /* 10363e4e cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363e51 jne 0x10363e5b */
  if (!C.zf) goto L_10363e5b;
  /* 10363e53 mov eax, dword ptr [0x10366740] */
  EAX = (r32((uint32_t)(0x10366740)));
  /* 10363e58 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_10363e5b:;
  /* 10363e5b push edi */
  push32((uint32_t)(EDI));
  /* 10363e5c push edi */
  push32((uint32_t)(EDI));
  /* 10363e5d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10363e60 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10363e63 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 10363e66 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10363e68 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10363e6a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10363e6d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10363e6e push eax */
  push32((uint32_t)(EAX));
  /* 10363e6f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10363e72 call dword ptr [0x1036501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036501c))), 0x10363e78u);
  /* 10363e78 mov ebx, eax */
  EBX = (EAX);
  /* 10363e7a mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 10363e7d cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363e7f je 0x10363f21 */
  if (C.zf) goto L_10363f21;
  /* 10363e85 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 10363e88 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 10363e8b add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363e8e and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10363e90 call 0x10364640 */
  push32(0x10363e95u); f_10364640();
  /* 10363e95 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10363e98 mov eax, esp */
  EAX = (ESP);
  /* 10363e9a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10363e9d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10363ea1 jmp 0x10363eb6 */
  goto L_10363eb6;
  /* 10363ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10363ea5 pop eax */
  EAX = (pop32());
  /* 10363ea6 ret  */
  ESPCHK(0x10363d93u, _esp0);
  ESP += 4; return;
  /* 10363ea7 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10363eaa xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10363eac mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 10363eaf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10363eb3 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_10363eb6:;
  /* 10363eb6 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363eb9 je 0x10363f21 */
  if (C.zf) goto L_10363f21;
  /* 10363ebb push ebx */
  push32((uint32_t)(EBX));
  /* 10363ebc push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10363ebf push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10363ec2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10363ec5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10363ec7 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10363eca call dword ptr [0x1036501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036501c))), 0x10363ed0u);
  /* 10363ed0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363ed2 je 0x10363f21 */
  if (C.zf) goto L_10363f21;
  /* 10363ed4 push edi */
  push32((uint32_t)(EDI));
  /* 10363ed5 push edi */
  push32((uint32_t)(EDI));
  /* 10363ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 10363ed7 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10363eda push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10363edd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10363ee0 call dword ptr [0x10365014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365014))), 0x10363ee6u);
  /* 10363ee6 mov esi, eax */
  ESI = (EAX);
  /* 10363ee8 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 10363eeb cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363eed je 0x10363f21 */
  if (C.zf) goto L_10363f21;
  /* 10363eef test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 10363ef3 je 0x10363f35 */
  if (C.zf) goto L_10363f35;
  /* 10363ef5 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363ef8 je 0x10363fb0 */
  if (C.zf) goto L_10363fb0;
  /* 10363efe cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363f01 jg 0x10363f21 */
  if ((!C.zf&&C.sf==C.of)) goto L_10363f21;
  /* 10363f03 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10363f06 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 10363f09 push ebx */
  push32((uint32_t)(EBX));
  /* 10363f0a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10363f0d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10363f10 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10363f13 call dword ptr [0x10365014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365014))), 0x10363f19u);
  /* 10363f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363f1b jne 0x10363fb0 */
  if (!C.zf) goto L_10363fb0;
L_10363f21:;
  /* 10363f21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10363f23:;
  /* 10363f23 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 10363f26 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10363f29 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10363f30 pop edi */
  EDI = (pop32());
  /* 10363f31 pop esi */
  ESI = (pop32());
  /* 10363f32 pop ebx */
  EBX = (pop32());
  /* 10363f33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10363f34 ret  */
  ESPCHK(0x10363d93u, _esp0);
  ESP += 4; return;
L_10363f35:;
  /* 10363f35 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10363f3c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 10363f3f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10363f42 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10363f44 call 0x10364640 */
  push32(0x10363f49u); f_10364640();
  /* 10363f49 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10363f4c mov ebx, esp */
  EBX = (ESP);
  /* 10363f4e mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 10363f51 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10363f55 jmp 0x10363f69 */
  goto L_10363f69;
  /* 10363f57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10363f59 pop eax */
  EAX = (pop32());
  /* 10363f5a ret  */
  ESPCHK(0x10363d93u, _esp0);
  ESP += 4; return;
  /* 10363f5b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10363f5e xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 10363f60 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10363f62 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 10363f66 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_10363f69:;
  /* 10363f69 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363f6b je 0x10363f21 */
  if (C.zf) goto L_10363f21;
  /* 10363f6d push esi */
  push32((uint32_t)(ESI));
  /* 10363f6e push ebx */
  push32((uint32_t)(EBX));
  /* 10363f6f push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 10363f72 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 10363f75 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10363f78 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10363f7b call dword ptr [0x10365014] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365014))), 0x10363f81u);
  /* 10363f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10363f83 je 0x10363f21 */
  if (C.zf) goto L_10363f21;
  /* 10363f85 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363f88 push edi */
  push32((uint32_t)(EDI));
  /* 10363f89 push edi */
  push32((uint32_t)(EDI));
  /* 10363f8a jne 0x10363f90 */
  if (!C.zf) goto L_10363f90;
  /* 10363f8c push edi */
  push32((uint32_t)(EDI));
  /* 10363f8d push edi */
  push32((uint32_t)(EDI));
  /* 10363f8e jmp 0x10363f96 */
  goto L_10363f96;
L_10363f90:;
  /* 10363f90 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 10363f93 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_10363f96:;
  /* 10363f96 push esi */
  push32((uint32_t)(ESI));
  /* 10363f97 push ebx */
  push32((uint32_t)(EBX));
  /* 10363f98 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10363f9d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 10363fa0 call dword ptr [0x10365068] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365068))), 0x10363fa6u);
  /* 10363fa6 mov esi, eax */
  ESI = (EAX);
  /* 10363fa8 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10363faa je 0x10363f21 */
  if (C.zf) goto L_10363f21;
L_10363fb0:;
  /* 10363fb0 mov eax, esi */
  EAX = (ESI);
  /* 10363fb2 jmp 0x10363f23 */
  goto L_10363f23;
}

/* FUN_10003fb7 @ 0x10363fb7 (43 bytes, 20 insns) */
void f_10363fb7(void) {
  FTRACE(0x10363fb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363fb7 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10363fbb mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10363fbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10363fc1 push esi */
  push32((uint32_t)(ESI));
  /* 10363fc2 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 10363fc5 je 0x10363fd4 */
  if (C.zf) goto L_10363fd4;
L_10363fc7:;
  /* 10363fc7 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10363fca je 0x10363fd4 */
  if (C.zf) goto L_10363fd4;
  /* 10363fcc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10363fcd mov esi, ecx */
  ESI = (ECX);
  /* 10363fcf dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10363fd0 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10363fd2 jne 0x10363fc7 */
  if (!C.zf) goto L_10363fc7;
L_10363fd4:;
  /* 10363fd4 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10363fd7 pop esi */
  ESI = (pop32());
  /* 10363fd8 jne 0x10363fdf */
  if (!C.zf) goto L_10363fdf;
  /* 10363fda sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10363fde ret  */
  ESPCHK(0x10363fb7u, _esp0);
  ESP += 4; return;
L_10363fdf:;
  /* 10363fdf mov eax, edx */
  EAX = (EDX);
  /* 10363fe1 ret  */
  ESPCHK(0x10363fb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe2 @ 0x10363fe2 (318 bytes, 123 insns) */
void f_10363fe2(void) {
  FTRACE(0x10363fe2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10363fe2 push ebp */
  push32((uint32_t)(EBP));
  /* 10363fe3 mov ebp, esp */
  EBP = (ESP);
  /* 10363fe5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10363fe7 push 0x10365488 */
  push32((uint32_t)(0x10365488u));
  /* 10363fec push 0x10364560 */
  push32((uint32_t)(0x10364560u));
  /* 10363ff1 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10363ff7 push eax */
  push32((uint32_t)(EAX));
  /* 10363ff8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10363fff sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10364002 push ebx */
  push32((uint32_t)(EBX));
  /* 10364003 push esi */
  push32((uint32_t)(ESI));
  /* 10364004 push edi */
  push32((uint32_t)(EDI));
  /* 10364005 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10364008 mov eax, dword ptr [0x1036674c] */
  EAX = (r32((uint32_t)(0x1036674c)));
  /* 1036400d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1036400f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364011 jne 0x10364051 */
  if (!C.zf) goto L_10364051;
  /* 10364013 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10364016 push eax */
  push32((uint32_t)(EAX));
  /* 10364017 push 1 */
  push32((uint32_t)(0x1u));
  /* 10364019 pop esi */
  ESI = (pop32());
  /* 1036401a push esi */
  push32((uint32_t)(ESI));
  /* 1036401b push 0x10365468 */
  push32((uint32_t)(0x10365468u));
  /* 10364020 push esi */
  push32((uint32_t)(ESI));
  /* 10364021 call dword ptr [0x1036500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036500c))), 0x10364027u);
  /* 10364027 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10364029 je 0x1036402f */
  if (C.zf) goto L_1036402f;
  /* 1036402b mov eax, esi */
  EAX = (ESI);
  /* 1036402d jmp 0x1036404c */
  goto L_1036404c;
L_1036402f:;
  /* 1036402f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 10364032 push eax */
  push32((uint32_t)(EAX));
  /* 10364033 push esi */
  push32((uint32_t)(ESI));
  /* 10364034 push 0x10365464 */
  push32((uint32_t)(0x10365464u));
  /* 10364039 push esi */
  push32((uint32_t)(ESI));
  /* 1036403a push ebx */
  push32((uint32_t)(EBX));
  /* 1036403b call dword ptr [0x10365010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365010))), 0x10364041u);
  /* 10364041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10364043 je 0x10364117 */
  if (C.zf) goto L_10364117;
  /* 10364049 push 2 */
  push32((uint32_t)(0x2u));
  /* 1036404b pop eax */
  EAX = (pop32());
L_1036404c:;
  /* 1036404c mov dword ptr [0x1036674c], eax */
  w32((uint32_t)(0x1036674c), (EAX));
L_10364051:;
  /* 10364051 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364054 jne 0x1036407a */
  if (!C.zf) goto L_1036407a;
  /* 10364056 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10364059 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036405b jne 0x10364062 */
  if (!C.zf) goto L_10364062;
  /* 1036405d mov eax, dword ptr [0x10366730] */
  EAX = (r32((uint32_t)(0x10366730)));
L_10364062:;
  /* 10364062 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 10364065 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10364068 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1036406b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1036406e push eax */
  push32((uint32_t)(EAX));
  /* 1036406f call dword ptr [0x10365010] */
  call_ind((uint32_t)(r32((uint32_t)(0x10365010))), 0x10364075u);
  /* 10364075 jmp 0x10364119 */
  goto L_10364119;
L_1036407a:;
  /* 1036407a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036407d jne 0x10364117 */
  if (!C.zf) goto L_10364117;
  /* 10364083 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364086 jne 0x10364090 */
  if (!C.zf) goto L_10364090;
  /* 10364088 mov eax, dword ptr [0x10366740] */
  EAX = (r32((uint32_t)(0x10366740)));
  /* 1036408d mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_10364090:;
  /* 10364090 push ebx */
  push32((uint32_t)(EBX));
  /* 10364091 push ebx */
  push32((uint32_t)(EBX));
  /* 10364092 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 10364095 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10364098 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1036409b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1036409d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036409f and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103640a2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 103640a3 push eax */
  push32((uint32_t)(EAX));
  /* 103640a4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 103640a7 call dword ptr [0x1036501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036501c))), 0x103640adu);
  /* 103640ad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 103640b0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103640b2 je 0x10364117 */
  if (C.zf) goto L_10364117;
  /* 103640b4 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 103640b7 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 103640ba mov eax, edi */
  EAX = (EDI);
  /* 103640bc add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103640bf and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 103640c1 call 0x10364640 */
  push32(0x103640c6u); f_10364640();
  /* 103640c6 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 103640c9 mov esi, esp */
  ESI = (ESP);
  /* 103640cb mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 103640ce push edi */
  push32((uint32_t)(EDI));
  /* 103640cf push ebx */
  push32((uint32_t)(EBX));
  /* 103640d0 push esi */
  push32((uint32_t)(ESI));
  /* 103640d1 call 0x10363d20 */
  push32(0x103640d6u); f_10363d20();
  /* 103640d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103640d9 jmp 0x103640e6 */
  goto L_103640e6;
  /* 103640db push 1 */
  push32((uint32_t)(0x1u));
  /* 103640dd pop eax */
  EAX = (pop32());
  /* 103640de ret  */
  ESPCHK(0x10363fe2u, _esp0);
  ESP += 4; return;
  /* 103640df mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 103640e2 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 103640e4 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_103640e6:;
  /* 103640e6 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 103640ea cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103640ec je 0x10364117 */
  if (C.zf) goto L_10364117;
  /* 103640ee push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 103640f1 push esi */
  push32((uint32_t)(ESI));
  /* 103640f2 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 103640f5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 103640f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 103640fa push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 103640fd call dword ptr [0x1036501c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036501c))), 0x10364103u);
  /* 10364103 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364105 je 0x10364117 */
  if (C.zf) goto L_10364117;
  /* 10364107 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1036410a push eax */
  push32((uint32_t)(EAX));
  /* 1036410b push esi */
  push32((uint32_t)(ESI));
  /* 1036410c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1036410f call dword ptr [0x1036500c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1036500c))), 0x10364115u);
  /* 10364115 jmp 0x10364119 */
  goto L_10364119;
L_10364117:;
  /* 10364117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10364119:;
  /* 10364119 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1036411c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1036411f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10364126 pop edi */
  EDI = (pop32());
  /* 10364127 pop esi */
  ESI = (pop32());
  /* 10364128 pop ebx */
  EBX = (pop32());
  /* 10364129 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036412a ret  */
  ESPCHK(0x10363fe2u, _esp0);
  ESP += 4; return;
}

/* FUN_10004130 @ 0x10364130 (664 bytes, 264 insns) [15 switch table(s)] */
void f_10364130(void) {
  FTRACE(0x10364130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10364130 push ebp */
  push32((uint32_t)(EBP));
  /* 10364131 mov ebp, esp */
  EBP = (ESP);
  /* 10364133 push edi */
  push32((uint32_t)(EDI));
  /* 10364134 push esi */
  push32((uint32_t)(ESI));
  /* 10364135 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10364138 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1036413b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1036413e mov eax, ecx */
  EAX = (ECX);
  /* 10364140 mov edx, ecx */
  EDX = (ECX);
  /* 10364142 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10364144 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364146 jbe 0x10364150 */
  if ((C.cf||C.zf)) goto L_10364150;
  /* 10364148 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036414a jb 0x103642c8 */
  if (C.cf) goto L_103642c8;
L_10364150:;
  /* 10364150 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10364156 jne 0x1036416c */
  if (!C.zf) goto L_1036416c;
  /* 10364158 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1036415b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1036415e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364161 jb 0x1036418c */
  if (C.cf) goto L_1036418c;
  /* 10364163 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10364165 jmp dword ptr [edx*4 + 0x10364278] */
  switch (EDX) {
    case 0: goto L_10364288;
    case 1: goto L_10364290;
    case 2: goto L_1036429c;
    case 3: goto L_103642b0;
    default: x86_unimpl("switch@0x10364165 out of table"); return;
  }
L_1036416c:;
  /* 1036416c mov eax, edi */
  EAX = (EDI);
  /* 1036416e mov edx, 3 */
  EDX = (0x3u);
  /* 10364173 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10364176 jb 0x10364184 */
  if (C.cf) goto L_10364184;
  /* 10364178 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1036417b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1036417d jmp dword ptr [eax*4 + 0x10364190] */
  switch (EAX) {
    case 1: goto L_103641a0;
    case 2: goto L_103641cc;
    case 3: goto L_103641f0;
    default: x86_unimpl("switch@0x1036417d out of table"); return;
  }
L_10364184:;
  /* 10364184 jmp dword ptr [ecx*4 + 0x10364288] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10364288)))); return;
  /* 1036418b nop  */
  /* nop */
L_1036418c:;
  /* 1036418c jmp dword ptr [ecx*4 + 0x1036420c] */
  switch (ECX) {
    case 0: goto L_1036426f;
    case 1: goto L_1036425c;
    case 2: goto L_10364254;
    case 3: goto L_1036424c;
    case 4: goto L_10364244;
    case 5: goto L_1036423c;
    case 6: goto L_10364234;
    case 7: goto L_1036422c;
    default: x86_unimpl("switch@0x1036418c out of table"); return;
  }
  /* 10364193 nop  */
  /* nop */
L_103641a0:;
  /* 103641a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103641a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103641a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103641a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103641a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103641ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103641af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103641b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103641b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103641b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103641bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103641be jb 0x1036418c */
  if (C.cf) goto L_1036418c;
  /* 103641c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103641c2 jmp dword ptr [edx*4 + 0x10364278] */
  switch (EDX) {
    case 0: goto L_10364288;
    case 1: goto L_10364290;
    case 2: goto L_1036429c;
    case 3: goto L_103642b0;
    default: x86_unimpl("switch@0x103641c2 out of table"); return;
  }
  /* 103641c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103641cc:;
  /* 103641cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103641ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103641d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103641d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103641d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103641d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103641db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 103641de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 103641e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103641e4 jb 0x1036418c */
  if (C.cf) goto L_1036418c;
  /* 103641e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103641e8 jmp dword ptr [edx*4 + 0x10364278] */
  switch (EDX) {
    case 0: goto L_10364288;
    case 1: goto L_10364290;
    case 2: goto L_1036429c;
    case 3: goto L_103642b0;
    default: x86_unimpl("switch@0x103641e8 out of table"); return;
  }
  /* 103641ef nop  */
  /* nop */
L_103641f0:;
  /* 103641f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 103641f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103641f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103641f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 103641f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103641fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103641fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103641fe jb 0x1036418c */
  if (C.cf) goto L_1036418c;
  /* 10364200 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10364202 jmp dword ptr [edx*4 + 0x10364278] */
  switch (EDX) {
    case 0: goto L_10364288;
    case 1: goto L_10364290;
    case 2: goto L_1036429c;
    case 3: goto L_103642b0;
    default: x86_unimpl("switch@0x10364202 out of table"); return;
  }
  /* 10364209 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1036422c:;
  /* 1036422c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10364230 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10364234:;
  /* 10364234 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10364238 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1036423c:;
  /* 1036423c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10364240 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10364244:;
  /* 10364244 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10364248 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1036424c:;
  /* 1036424c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10364250 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10364254:;
  /* 10364254 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10364258 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1036425c:;
  /* 1036425c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10364260 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10364264 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1036426b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1036426d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1036426f:;
  /* 1036426f jmp dword ptr [edx*4 + 0x10364278] */
  switch (EDX) {
    case 0: goto L_10364288;
    case 1: goto L_10364290;
    case 2: goto L_1036429c;
    case 3: goto L_103642b0;
    default: x86_unimpl("switch@0x1036426f out of table"); return;
  }
  /* 10364276 mov edi, edi */
  EDI = (EDI);
L_10364288:;
  /* 10364288 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1036428b pop esi */
  ESI = (pop32());
  /* 1036428c pop edi */
  EDI = (pop32());
  /* 1036428d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036428e ret  */
  ESPCHK(0x10364130u, _esp0);
  ESP += 4; return;
  /* 1036428f nop  */
  /* nop */
L_10364290:;
  /* 10364290 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10364292 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10364294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10364297 pop esi */
  ESI = (pop32());
  /* 10364298 pop edi */
  EDI = (pop32());
  /* 10364299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036429a ret  */
  ESPCHK(0x10364130u, _esp0);
  ESP += 4; return;
  /* 1036429b nop  */
  /* nop */
L_1036429c:;
  /* 1036429c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1036429e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103642a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103642a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103642a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103642a9 pop esi */
  ESI = (pop32());
  /* 103642aa pop edi */
  EDI = (pop32());
  /* 103642ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103642ac ret  */
  ESPCHK(0x10364130u, _esp0);
  ESP += 4; return;
  /* 103642ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103642b0:;
  /* 103642b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 103642b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 103642b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 103642b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 103642ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 103642bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 103642c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103642c3 pop esi */
  ESI = (pop32());
  /* 103642c4 pop edi */
  EDI = (pop32());
  /* 103642c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 103642c6 ret  */
  ESPCHK(0x10364130u, _esp0);
  ESP += 4; return;
  /* 103642c7 nop  */
  /* nop */
L_103642c8:;
  /* 103642c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 103642cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 103642d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 103642d6 jne 0x103642fc */
  if (!C.zf) goto L_103642fc;
  /* 103642d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 103642db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 103642de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103642e1 jb 0x103642f0 */
  if (C.cf) goto L_103642f0;
  /* 103642e3 std  */
  C.df=1;
  /* 103642e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 103642e6 cld  */
  C.df=0;
  /* 103642e7 jmp dword ptr [edx*4 + 0x10364410] */
  switch (EDX) {
    case 0: goto L_10364420;
    case 1: goto L_10364428;
    case 2: goto L_10364438;
    case 3: goto L_1036444c;
    default: x86_unimpl("switch@0x103642e7 out of table"); return;
  }
  /* 103642ee mov edi, edi */
  EDI = (EDI);
L_103642f0:;
  /* 103642f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103642f2 jmp dword ptr [ecx*4 + 0x103643c0] */
  switch (ECX) {
    case 0: goto L_10364407;
    default: x86_unimpl("switch@0x103642f2 out of table"); return;
  }
  /* 103642f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_103642fc:;
  /* 103642fc mov eax, edi */
  EAX = (EDI);
  /* 103642fe mov edx, 3 */
  EDX = (0x3u);
  /* 10364303 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364306 jb 0x10364314 */
  if (C.cf) goto L_10364314;
  /* 10364308 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1036430b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036430d jmp dword ptr [eax*4 + 0x10364318] */
  switch (EAX) {
    case 1: goto L_10364328;
    case 2: goto L_10364348;
    case 3: goto L_10364370;
    default: x86_unimpl("switch@0x1036430d out of table"); return;
  }
L_10364314:;
  /* 10364314 jmp dword ptr [ecx*4 + 0x10364410] */
  switch (ECX) {
    case 0: goto L_10364420;
    case 1: goto L_10364428;
    case 2: goto L_10364438;
    case 3: goto L_1036444c;
    default: x86_unimpl("switch@0x10364314 out of table"); return;
  }
  /* 1036431b nop  */
  /* nop */
L_10364328:;
  /* 10364328 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036432b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1036432d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10364330 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10364331 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10364334 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10364335 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364338 jb 0x103642f0 */
  if (C.cf) goto L_103642f0;
  /* 1036433a std  */
  C.df=1;
  /* 1036433b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1036433d cld  */
  C.df=0;
  /* 1036433e jmp dword ptr [edx*4 + 0x10364410] */
  switch (EDX) {
    case 0: goto L_10364420;
    case 1: goto L_10364428;
    case 2: goto L_10364438;
    case 3: goto L_1036444c;
    default: x86_unimpl("switch@0x1036433e out of table"); return;
  }
  /* 10364345 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10364348:;
  /* 10364348 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036434b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1036434d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10364350 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10364353 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10364356 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10364359 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036435c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036435f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364362 jb 0x103642f0 */
  if (C.cf) goto L_103642f0;
  /* 10364364 std  */
  C.df=1;
  /* 10364365 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10364367 cld  */
  C.df=0;
  /* 10364368 jmp dword ptr [edx*4 + 0x10364410] */
  switch (EDX) {
    case 0: goto L_10364420;
    case 1: goto L_10364428;
    case 2: goto L_10364438;
    case 3: goto L_1036444c;
    default: x86_unimpl("switch@0x10364368 out of table"); return;
  }
  /* 1036436f nop  */
  /* nop */
L_10364370:;
  /* 10364370 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10364373 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10364375 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10364378 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1036437b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1036437e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10364381 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10364384 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10364387 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036438a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1036438d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364390 jb 0x103642f0 */
  if (C.cf) goto L_103642f0;
  /* 10364396 std  */
  C.df=1;
  /* 10364397 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10364399 cld  */
  C.df=0;
  /* 1036439a jmp dword ptr [edx*4 + 0x10364410] */
  switch (EDX) {
    case 0: goto L_10364420;
    case 1: goto L_10364428;
    case 2: goto L_10364438;
    case 3: goto L_1036444c;
    default: x86_unimpl("switch@0x1036439a out of table"); return;
  }
  /* 103643a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 103643a4 les eax, ptr [ebx + 0x36] */
  x86_unimpl("les @ 0x103643a4");
  /* 103643a7 adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 103643a9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103643aa adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 103643ad inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103643ae adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 103643b1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103643b2 adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 103643b5 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103643b6 adc ah, ch */
  { uint32_t _a=(AH),_b=(C.c.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 103643b9 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103643ba adc ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 103643bd inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 103643c4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 103643c8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 103643cc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 103643d0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 103643d4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 103643d8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 103643dc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 103643e0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 103643e4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 103643e8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 103643ec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 103643f0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 103643f4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 103643f8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 103643fc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10364403 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10364405 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10364407:;
  /* 10364407 jmp dword ptr [edx*4 + 0x10364410] */
  switch (EDX) {
    case 0: goto L_10364420;
    case 1: goto L_10364428;
    case 2: goto L_10364438;
    case 3: goto L_1036444c;
    default: x86_unimpl("switch@0x10364407 out of table"); return;
  }
  /* 1036440e mov edi, edi */
  EDI = (EDI);
L_10364420:;
  /* 10364420 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10364423 pop esi */
  ESI = (pop32());
  /* 10364424 pop edi */
  EDI = (pop32());
  /* 10364425 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10364426 ret  */
  ESPCHK(0x10364130u, _esp0);
  ESP += 4; return;
  /* 10364427 nop  */
  /* nop */
L_10364428:;
  /* 10364428 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036442b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1036442e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10364431 pop esi */
  ESI = (pop32());
  /* 10364432 pop edi */
  EDI = (pop32());
  /* 10364433 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10364434 ret  */
  ESPCHK(0x10364130u, _esp0);
  ESP += 4; return;
  /* 10364435 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10364438:;
  /* 10364438 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036443b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1036443e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10364441 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10364444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10364447 pop esi */
  ESI = (pop32());
  /* 10364448 pop edi */
  EDI = (pop32());
  /* 10364449 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1036444a ret  */
  ESPCHK(0x10364130u, _esp0);
  ESP += 4; return;
  /* 1036444b nop  */
  /* nop */
L_1036444c:;
  /* 1036444c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1036444f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10364452 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10364455 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10364458 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1036445b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1036445e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10364461 pop esi */
  ESI = (pop32());
  /* 10364462 pop edi */
  EDI = (pop32());
  /* 10364463 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10364464 ret  */
  ESPCHK(0x10364130u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x10364468 (32 bytes, 18 insns) */
void f_10364468(void) {
  FTRACE(0x10364468u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10364468 push ebp */
  push32((uint32_t)(EBP));
  /* 10364469 mov ebp, esp */
  EBP = (ESP);
  /* 1036446b push ebx */
  push32((uint32_t)(EBX));
  /* 1036446c push esi */
  push32((uint32_t)(ESI));
  /* 1036446d push edi */
  push32((uint32_t)(EDI));
  /* 1036446e push ebp */
  push32((uint32_t)(EBP));
  /* 1036446f push 0 */
  push32((uint32_t)(0x0u));
  /* 10364471 push 0 */
  push32((uint32_t)(0x0u));
  /* 10364473 push 0x10364480 */
  push32((uint32_t)(0x10364480u));
  /* 10364478 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1036447b call 0x10364670 */
  push32(0x10364480u); f_10364670();
  /* 10364480 pop ebp */
  EBP = (pop32());
  /* 10364481 pop edi */
  EDI = (pop32());
  /* 10364482 pop esi */
  ESI = (pop32());
  /* 10364483 pop ebx */
  EBX = (pop32());
  /* 10364484 mov esp, ebp */
  ESP = (EBP);
  /* 10364486 pop ebp */
  EBP = (pop32());
  /* 10364487 ret  */
  ESPCHK(0x10364468u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x103644aa (104 bytes, 33 insns) */
void f_103644aa(void) {
  FTRACE(0x103644aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103644aa push ebx */
  push32((uint32_t)(EBX));
  /* 103644ab push esi */
  push32((uint32_t)(ESI));
  /* 103644ac push edi */
  push32((uint32_t)(EDI));
  /* 103644ad mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 103644b1 push eax */
  push32((uint32_t)(EAX));
  /* 103644b2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 103644b4 push 0x10364488 */
  push32((uint32_t)(0x10364488u));
  /* 103644b9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 103644c0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_103644c7:;
  /* 103644c7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 103644cb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 103644ce mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 103644d1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103644d4 je 0x10364504 */
  if (C.zf) goto L_10364504;
  /* 103644d6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103644da je 0x10364504 */
  if (C.zf) goto L_10364504;
  /* 103644dc lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 103644df mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 103644e2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 103644e6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 103644e9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103644ee jne 0x10364502 */
  if (!C.zf) goto L_10364502;
  /* 103644f0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 103644f5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 103644f9 call 0x1036453e */
  push32(0x103644feu); f_1036453e();
  /* 103644fe call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x10364502u);
L_10364502:;
  /* 10364502 jmp 0x103644c7 */
  goto L_103644c7;
L_10364504:;
  /* 10364504 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1036450b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1036450e pop edi */
  EDI = (pop32());
  /* 1036450f pop esi */
  ESI = (pop32());
  /* 10364510 pop ebx */
  EBX = (pop32());
  /* 10364511 ret  */
  ESPCHK(0x103644aau, _esp0);
  ESP += 4; return;
}

/* FUN_1000453e @ 0x1036453e (24 bytes, 10 insns) */
void f_1036453e(void) {
  FTRACE(0x1036453eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1036453e push ebx */
  push32((uint32_t)(EBX));
  /* 1036453f push ecx */
  push32((uint32_t)(ECX));
  /* 10364540 mov ebx, 0x10366430 */
  EBX = (0x10366430u);
  /* 10364545 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10364548 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1036454b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1036454e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 10364551 pop ecx */
  ECX = (pop32());
  /* 10364552 pop ebx */
  EBX = (pop32());
  /* 10364553 ret 4 */
  ESPCHK(0x1036453eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000461d @ 0x1036461d (27 bytes, 11 insns) */
void f_1036461d(void) {
  FTRACE(0x1036461du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1036461d push ebp */
  push32((uint32_t)(EBP));
  /* 1036461e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 10364622 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 10364624 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10364627 push eax */
  push32((uint32_t)(EAX));
  /* 10364628 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1036462b push eax */
  push32((uint32_t)(EAX));
  /* 1036462c call 0x103644aa */
  push32(0x10364631u); f_103644aa();
  /* 10364631 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10364634 pop ebp */
  EBP = (pop32());
  /* 10364635 ret 4 */
  ESPCHK(0x1036461du, _esp0);
  ESP += 8; return;
}

/* FUN_10004640 @ 0x10364640 (47 bytes, 17 insns) */
void f_10364640(void) {
  FTRACE(0x10364640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10364640 push ecx */
  push32((uint32_t)(ECX));
  /* 10364641 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10364646 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1036464a jb 0x10364660 */
  if (C.cf) goto L_10364660;
L_1036464c:;
  /* 1036464c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10364652 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10364657 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10364659 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1036465e jae 0x1036464c */
  if (!C.cf) goto L_1036464c;
L_10364660:;
  /* 10364660 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10364662 mov eax, esp */
  EAX = (ESP);
  /* 10364664 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10364666 mov esp, ecx */
  ESP = (ECX);
  /* 10364668 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1036466a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1036466d push eax */
  push32((uint32_t)(EAX));
  /* 1036466e ret  */
  ESPCHK(0x10364640u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x10364670 (6 bytes, 1 insns) */
void f_10364670(void) {
  FTRACE(0x10364670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10364670 jmp dword ptr [0x10365008] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10365008)))); return;
}

