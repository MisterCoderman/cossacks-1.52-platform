#include "recomp.h"

/* thunk_FUN_100063d0 @ 0x12451005 (5 bytes, 1 insns) */
void f_12451005(void) {
  FTRACE(0x12451005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12451005 jmp 0x124563d0 */
  f_124563d0(); return;
}

/* OnInit @ 0x1245100a (5 bytes, 1 insns) */
void f_1245100a(void) {
  FTRACE(0x1245100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245100a jmp 0x12451090 */
  f_12451090(); return;
}

/* thunk_FUN_10001030 @ 0x1245100f (5 bytes, 1 insns) */
void f_1245100f(void) {
  FTRACE(0x1245100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245100f jmp 0x12451030 */
  f_12451030(); return;
}

/* ProcessScenary @ 0x12451014 (5 bytes, 1 insns) */
void f_12451014(void) {
  FTRACE(0x12451014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12451014 jmp 0x124521f0 */
  f_124521f0(); return;
}

/* FUN_10001030 @ 0x12451030 (67 bytes, 26 insns) */
void f_12451030(void) {
  FTRACE(0x12451030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12451030 push ebp */
  push32((uint32_t)(EBP));
  /* 12451031 mov ebp, esp */
  EBP = (ESP);
  /* 12451033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12451036 push ebx */
  push32((uint32_t)(EBX));
  /* 12451037 push esi */
  push32((uint32_t)(ESI));
  /* 12451038 push edi */
  push32((uint32_t)(EDI));
  /* 12451039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1245103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12451041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12451046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12451048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451052 je 0x12451056 */
  if (C.zf) goto L_12451056;
  /* 12451054 jmp 0x1245105b */
  goto L_1245105b;
L_12451056:;
  /* 12451056 call 0x1245100a */
  push32(0x1245105bu); f_1245100a();
L_1245105b:;
  /* 1245105b mov eax, 1 */
  EAX = (0x1u);
  /* 12451060 pop edi */
  EDI = (pop32());
  /* 12451061 pop esi */
  ESI = (pop32());
  /* 12451062 pop ebx */
  EBX = (pop32());
  /* 12451063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451068 call 0x12456510 */
  push32(0x1245106du); f_12456510();
  /* 1245106d mov esp, ebp */
  ESP = (EBP);
  /* 1245106f pop ebp */
  EBP = (pop32());
  /* 12451070 ret 0xc */
  ESPCHK(0x12451030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12451090 (3557 bytes, 913 insns) */
void f_12451090(void) {
  FTRACE(0x12451090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12451090 push ebp */
  push32((uint32_t)(EBP));
  /* 12451091 mov ebp, esp */
  EBP = (ESP);
  /* 12451093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12451096 push ebx */
  push32((uint32_t)(EBX));
  /* 12451097 push esi */
  push32((uint32_t)(ESI));
  /* 12451098 push edi */
  push32((uint32_t)(EDI));
  /* 12451099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1245109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 124510a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 124510a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 124510a8 mov esi, esp */
  ESI = (ESP);
  /* 124510aa push 0x1247e6a8 */
  push32((uint32_t)(0x1247e6a8u));
  /* 124510af push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 124510b4 call dword ptr [0x1248649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248649c))), 0x124510bau);
  /* 124510ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124510bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124510bf call 0x12456510 */
  push32(0x124510c4u); f_12456510();
  /* 124510c4 mov esi, esp */
  ESI = (ESP);
  /* 124510c6 push 0x1247e6a4 */
  push32((uint32_t)(0x1247e6a4u));
  /* 124510cb push 0x12483558 */
  push32((uint32_t)(0x12483558u));
  /* 124510d0 call dword ptr [0x1248649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248649c))), 0x124510d6u);
  /* 124510d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124510d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124510db call 0x12456510 */
  push32(0x124510e0u); f_12456510();
  /* 124510e0 mov esi, esp */
  ESI = (ESP);
  /* 124510e2 push 0x1247e6a0 */
  push32((uint32_t)(0x1247e6a0u));
  /* 124510e7 push 0x12483560 */
  push32((uint32_t)(0x12483560u));
  /* 124510ec call dword ptr [0x1248649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248649c))), 0x124510f2u);
  /* 124510f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124510f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124510f7 call 0x12456510 */
  push32(0x124510fcu); f_12456510();
  /* 124510fc mov esi, esp */
  ESI = (ESP);
  /* 124510fe push 0x1247e69c */
  push32((uint32_t)(0x1247e69cu));
  /* 12451103 push 0x12483568 */
  push32((uint32_t)(0x12483568u));
  /* 12451108 call dword ptr [0x1248649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248649c))), 0x1245110eu);
  /* 1245110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451113 call 0x12456510 */
  push32(0x12451118u); f_12456510();
  /* 12451118 mov esi, esp */
  ESI = (ESP);
  /* 1245111a push 0x1247e698 */
  push32((uint32_t)(0x1247e698u));
  /* 1245111f push 0x12483570 */
  push32((uint32_t)(0x12483570u));
  /* 12451124 call dword ptr [0x1248649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248649c))), 0x1245112au);
  /* 1245112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245112f call 0x12456510 */
  push32(0x12451134u); f_12456510();
  /* 12451134 mov esi, esp */
  ESI = (ESP);
  /* 12451136 push 0x1247e694 */
  push32((uint32_t)(0x1247e694u));
  /* 1245113b push 0x12483578 */
  push32((uint32_t)(0x12483578u));
  /* 12451140 call dword ptr [0x1248649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248649c))), 0x12451146u);
  /* 12451146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245114b call 0x12456510 */
  push32(0x12451150u); f_12456510();
  /* 12451150 mov esi, esp */
  ESI = (ESP);
  /* 12451152 push 0x1247e690 */
  push32((uint32_t)(0x1247e690u));
  /* 12451157 push 0x12483580 */
  push32((uint32_t)(0x12483580u));
  /* 1245115c call dword ptr [0x1248649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248649c))), 0x12451162u);
  /* 12451162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451167 call 0x12456510 */
  push32(0x1245116cu); f_12456510();
  /* 1245116c mov esi, esp */
  ESI = (ESP);
  /* 1245116e push 0x1247e68c */
  push32((uint32_t)(0x1247e68cu));
  /* 12451173 push 0x12483588 */
  push32((uint32_t)(0x12483588u));
  /* 12451178 call dword ptr [0x1248649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248649c))), 0x1245117eu);
  /* 1245117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451183 call 0x12456510 */
  push32(0x12451188u); f_12456510();
  /* 12451188 mov esi, esp */
  ESI = (ESP);
  /* 1245118a push 0x1247e688 */
  push32((uint32_t)(0x1247e688u));
  /* 1245118f push 0x12483530 */
  push32((uint32_t)(0x12483530u));
  /* 12451194 call dword ptr [0x124864a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a0))), 0x1245119au);
  /* 1245119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245119f call 0x12456510 */
  push32(0x124511a4u); f_12456510();
  /* 124511a4 mov esi, esp */
  ESI = (ESP);
  /* 124511a6 push 0x1247e684 */
  push32((uint32_t)(0x1247e684u));
  /* 124511ab push 0x12483538 */
  push32((uint32_t)(0x12483538u));
  /* 124511b0 call dword ptr [0x124864a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a0))), 0x124511b6u);
  /* 124511b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124511b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124511bb call 0x12456510 */
  push32(0x124511c0u); f_12456510();
  /* 124511c0 mov esi, esp */
  ESI = (ESP);
  /* 124511c2 push 0x1247e680 */
  push32((uint32_t)(0x1247e680u));
  /* 124511c7 push 0x12483540 */
  push32((uint32_t)(0x12483540u));
  /* 124511cc call dword ptr [0x124864a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a0))), 0x124511d2u);
  /* 124511d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124511d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124511d7 call 0x12456510 */
  push32(0x124511dcu); f_12456510();
  /* 124511dc mov esi, esp */
  ESI = (ESP);
  /* 124511de push 0x1247e67c */
  push32((uint32_t)(0x1247e67cu));
  /* 124511e3 push 0x12483548 */
  push32((uint32_t)(0x12483548u));
  /* 124511e8 call dword ptr [0x124864a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a0))), 0x124511eeu);
  /* 124511ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124511f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124511f3 call 0x12456510 */
  push32(0x124511f8u); f_12456510();
  /* 124511f8 mov esi, esp */
  ESI = (ESP);
  /* 124511fa push 0x1247e664 */
  push32((uint32_t)(0x1247e664u));
  /* 124511ff push 0x12483430 */
  push32((uint32_t)(0x12483430u));
  /* 12451204 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245120au);
  /* 1245120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245120f call 0x12456510 */
  push32(0x12451214u); f_12456510();
  /* 12451214 mov esi, esp */
  ESI = (ESP);
  /* 12451216 push 0x1247e650 */
  push32((uint32_t)(0x1247e650u));
  /* 1245121b push 0x12483448 */
  push32((uint32_t)(0x12483448u));
  /* 12451220 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451226u);
  /* 12451226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245122b call 0x12456510 */
  push32(0x12451230u); f_12456510();
  /* 12451230 mov esi, esp */
  ESI = (ESP);
  /* 12451232 push 0x1247e63c */
  push32((uint32_t)(0x1247e63cu));
  /* 12451237 push 0x12483468 */
  push32((uint32_t)(0x12483468u));
  /* 1245123c call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451242u);
  /* 12451242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451247 call 0x12456510 */
  push32(0x1245124cu); f_12456510();
  /* 1245124c mov esi, esp */
  ESI = (ESP);
  /* 1245124e push 0x1247e62c */
  push32((uint32_t)(0x1247e62cu));
  /* 12451253 push 0x12483480 */
  push32((uint32_t)(0x12483480u));
  /* 12451258 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245125eu);
  /* 1245125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451263 call 0x12456510 */
  push32(0x12451268u); f_12456510();
  /* 12451268 mov esi, esp */
  ESI = (ESP);
  /* 1245126a push 0x1247e61c */
  push32((uint32_t)(0x1247e61cu));
  /* 1245126f push 0x12483490 */
  push32((uint32_t)(0x12483490u));
  /* 12451274 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245127au);
  /* 1245127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245127f call 0x12456510 */
  push32(0x12451284u); f_12456510();
  /* 12451284 mov esi, esp */
  ESI = (ESP);
  /* 12451286 push 0x1247e60c */
  push32((uint32_t)(0x1247e60cu));
  /* 1245128b push 0x124834a0 */
  push32((uint32_t)(0x124834a0u));
  /* 12451290 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451296u);
  /* 12451296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245129b call 0x12456510 */
  push32(0x124512a0u); f_12456510();
  /* 124512a0 mov esi, esp */
  ESI = (ESP);
  /* 124512a2 push 0x1247e5fc */
  push32((uint32_t)(0x1247e5fcu));
  /* 124512a7 push 0x124834b0 */
  push32((uint32_t)(0x124834b0u));
  /* 124512ac call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124512b2u);
  /* 124512b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124512b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124512b7 call 0x12456510 */
  push32(0x124512bcu); f_12456510();
  /* 124512bc mov esi, esp */
  ESI = (ESP);
  /* 124512be push 0x1247e5ec */
  push32((uint32_t)(0x1247e5ecu));
  /* 124512c3 push 0x124834c0 */
  push32((uint32_t)(0x124834c0u));
  /* 124512c8 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124512ceu);
  /* 124512ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124512d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124512d3 call 0x12456510 */
  push32(0x124512d8u); f_12456510();
  /* 124512d8 mov esi, esp */
  ESI = (ESP);
  /* 124512da push 0x1247e5d8 */
  push32((uint32_t)(0x1247e5d8u));
  /* 124512df push 0x124834d0 */
  push32((uint32_t)(0x124834d0u));
  /* 124512e4 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124512eau);
  /* 124512ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124512ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124512ef call 0x12456510 */
  push32(0x124512f4u); f_12456510();
  /* 124512f4 mov esi, esp */
  ESI = (ESP);
  /* 124512f6 push 0x1247e5c0 */
  push32((uint32_t)(0x1247e5c0u));
  /* 124512fb push 0x124833e0 */
  push32((uint32_t)(0x124833e0u));
  /* 12451300 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451306u);
  /* 12451306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245130b call 0x12456510 */
  push32(0x12451310u); f_12456510();
  /* 12451310 mov esi, esp */
  ESI = (ESP);
  /* 12451312 push 0x1247e5a8 */
  push32((uint32_t)(0x1247e5a8u));
  /* 12451317 push 0x124833e8 */
  push32((uint32_t)(0x124833e8u));
  /* 1245131c call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451322u);
  /* 12451322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451327 call 0x12456510 */
  push32(0x1245132cu); f_12456510();
  /* 1245132c mov esi, esp */
  ESI = (ESP);
  /* 1245132e push 0x1247e598 */
  push32((uint32_t)(0x1247e598u));
  /* 12451333 push 0x124833f0 */
  push32((uint32_t)(0x124833f0u));
  /* 12451338 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245133eu);
  /* 1245133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451343 call 0x12456510 */
  push32(0x12451348u); f_12456510();
  /* 12451348 mov esi, esp */
  ESI = (ESP);
  /* 1245134a push 0x1247e580 */
  push32((uint32_t)(0x1247e580u));
  /* 1245134f push 0x124833f8 */
  push32((uint32_t)(0x124833f8u));
  /* 12451354 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245135au);
  /* 1245135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245135f call 0x12456510 */
  push32(0x12451364u); f_12456510();
  /* 12451364 mov esi, esp */
  ESI = (ESP);
  /* 12451366 push 0x1247e574 */
  push32((uint32_t)(0x1247e574u));
  /* 1245136b push 0x12483408 */
  push32((uint32_t)(0x12483408u));
  /* 12451370 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451376u);
  /* 12451376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245137b call 0x12456510 */
  push32(0x12451380u); f_12456510();
  /* 12451380 mov esi, esp */
  ESI = (ESP);
  /* 12451382 push 0x1247e568 */
  push32((uint32_t)(0x1247e568u));
  /* 12451387 push 0x12483418 */
  push32((uint32_t)(0x12483418u));
  /* 1245138c call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451392u);
  /* 12451392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451397 call 0x12456510 */
  push32(0x1245139cu); f_12456510();
  /* 1245139c mov esi, esp */
  ESI = (ESP);
  /* 1245139e push 0x1247e558 */
  push32((uint32_t)(0x1247e558u));
  /* 124513a3 push 0x12483428 */
  push32((uint32_t)(0x12483428u));
  /* 124513a8 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124513aeu);
  /* 124513ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124513b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124513b3 call 0x12456510 */
  push32(0x124513b8u); f_12456510();
  /* 124513b8 mov esi, esp */
  ESI = (ESP);
  /* 124513ba push 0x1247e548 */
  push32((uint32_t)(0x1247e548u));
  /* 124513bf push 0x12483440 */
  push32((uint32_t)(0x12483440u));
  /* 124513c4 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124513cau);
  /* 124513ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124513cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124513cf call 0x12456510 */
  push32(0x124513d4u); f_12456510();
  /* 124513d4 mov esi, esp */
  ESI = (ESP);
  /* 124513d6 push 0x1247e538 */
  push32((uint32_t)(0x1247e538u));
  /* 124513db push 0x12483460 */
  push32((uint32_t)(0x12483460u));
  /* 124513e0 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124513e6u);
  /* 124513e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124513e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124513eb call 0x12456510 */
  push32(0x124513f0u); f_12456510();
  /* 124513f0 mov esi, esp */
  ESI = (ESP);
  /* 124513f2 push 0x1247e528 */
  push32((uint32_t)(0x1247e528u));
  /* 124513f7 push 0x12483478 */
  push32((uint32_t)(0x12483478u));
  /* 124513fc call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451402u);
  /* 12451402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451407 call 0x12456510 */
  push32(0x1245140cu); f_12456510();
  /* 1245140c mov esi, esp */
  ESI = (ESP);
  /* 1245140e push 0x1247e50c */
  push32((uint32_t)(0x1247e50cu));
  /* 12451413 push 0x12483400 */
  push32((uint32_t)(0x12483400u));
  /* 12451418 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245141eu);
  /* 1245141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451423 call 0x12456510 */
  push32(0x12451428u); f_12456510();
  /* 12451428 mov esi, esp */
  ESI = (ESP);
  /* 1245142a push 0x1247e4fc */
  push32((uint32_t)(0x1247e4fcu));
  /* 1245142f push 0x12483410 */
  push32((uint32_t)(0x12483410u));
  /* 12451434 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245143au);
  /* 1245143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245143f call 0x12456510 */
  push32(0x12451444u); f_12456510();
  /* 12451444 mov esi, esp */
  ESI = (ESP);
  /* 12451446 push 0x1247e4e0 */
  push32((uint32_t)(0x1247e4e0u));
  /* 1245144b push 0x12483420 */
  push32((uint32_t)(0x12483420u));
  /* 12451450 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451456u);
  /* 12451456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245145b call 0x12456510 */
  push32(0x12451460u); f_12456510();
  /* 12451460 mov esi, esp */
  ESI = (ESP);
  /* 12451462 push 0x1247e4c8 */
  push32((uint32_t)(0x1247e4c8u));
  /* 12451467 push 0x12483438 */
  push32((uint32_t)(0x12483438u));
  /* 1245146c call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451472u);
  /* 12451472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451477 call 0x12456510 */
  push32(0x1245147cu); f_12456510();
  /* 1245147c mov esi, esp */
  ESI = (ESP);
  /* 1245147e push 0x1247e4ac */
  push32((uint32_t)(0x1247e4acu));
  /* 12451483 push 0x12483458 */
  push32((uint32_t)(0x12483458u));
  /* 12451488 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245148eu);
  /* 1245148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451493 call 0x12456510 */
  push32(0x12451498u); f_12456510();
  /* 12451498 mov esi, esp */
  ESI = (ESP);
  /* 1245149a push 0x1247e494 */
  push32((uint32_t)(0x1247e494u));
  /* 1245149f push 0x12483470 */
  push32((uint32_t)(0x12483470u));
  /* 124514a4 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124514aau);
  /* 124514aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124514ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124514af call 0x12456510 */
  push32(0x124514b4u); f_12456510();
  /* 124514b4 mov esi, esp */
  ESI = (ESP);
  /* 124514b6 push 0x1247e47c */
  push32((uint32_t)(0x1247e47cu));
  /* 124514bb push 0x12483488 */
  push32((uint32_t)(0x12483488u));
  /* 124514c0 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124514c6u);
  /* 124514c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124514c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124514cb call 0x12456510 */
  push32(0x124514d0u); f_12456510();
  /* 124514d0 mov esi, esp */
  ESI = (ESP);
  /* 124514d2 push 0x1247e46c */
  push32((uint32_t)(0x1247e46cu));
  /* 124514d7 push 0x12483498 */
  push32((uint32_t)(0x12483498u));
  /* 124514dc call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124514e2u);
  /* 124514e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124514e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124514e7 call 0x12456510 */
  push32(0x124514ecu); f_12456510();
  /* 124514ec mov esi, esp */
  ESI = (ESP);
  /* 124514ee push 0x1247e454 */
  push32((uint32_t)(0x1247e454u));
  /* 124514f3 push 0x124834a8 */
  push32((uint32_t)(0x124834a8u));
  /* 124514f8 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x124514feu);
  /* 124514fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451503 call 0x12456510 */
  push32(0x12451508u); f_12456510();
  /* 12451508 mov esi, esp */
  ESI = (ESP);
  /* 1245150a push 0x1247e444 */
  push32((uint32_t)(0x1247e444u));
  /* 1245150f push 0x124834b8 */
  push32((uint32_t)(0x124834b8u));
  /* 12451514 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x1245151au);
  /* 1245151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245151f call 0x12456510 */
  push32(0x12451524u); f_12456510();
  /* 12451524 mov esi, esp */
  ESI = (ESP);
  /* 12451526 push 0x1247e428 */
  push32((uint32_t)(0x1247e428u));
  /* 1245152b push 0x12483450 */
  push32((uint32_t)(0x12483450u));
  /* 12451530 call dword ptr [0x124864a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a4))), 0x12451536u);
  /* 12451536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245153b call 0x12456510 */
  push32(0x12451540u); f_12456510();
  /* 12451540 mov esi, esp */
  ESI = (ESP);
  /* 12451542 push 0x1247e41c */
  push32((uint32_t)(0x1247e41cu));
  /* 12451547 push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 1245154c call dword ptr [0x124864a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a8))), 0x12451552u);
  /* 12451552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451557 call 0x12456510 */
  push32(0x1245155cu); f_12456510();
  /* 1245155c mov esi, esp */
  ESI = (ESP);
  /* 1245155e push 0x1247e40c */
  push32((uint32_t)(0x1247e40cu));
  /* 12451563 push 0x12483520 */
  push32((uint32_t)(0x12483520u));
  /* 12451568 call dword ptr [0x124864a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a8))), 0x1245156eu);
  /* 1245156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451573 call 0x12456510 */
  push32(0x12451578u); f_12456510();
  /* 12451578 mov esi, esp */
  ESI = (ESP);
  /* 1245157a push 0x1247e3fc */
  push32((uint32_t)(0x1247e3fcu));
  /* 1245157f push 0x12483528 */
  push32((uint32_t)(0x12483528u));
  /* 12451584 call dword ptr [0x124864a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864a8))), 0x1245158au);
  /* 1245158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245158f call 0x12456510 */
  push32(0x12451594u); f_12456510();
  /* 12451594 mov esi, esp */
  ESI = (ESP);
  /* 12451596 push 0x1247e3e4 */
  push32((uint32_t)(0x1247e3e4u));
  /* 1245159b push 0x124835f0 */
  push32((uint32_t)(0x124835f0u));
  /* 124515a0 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124515a6u);
  /* 124515a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124515a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124515ab call 0x12456510 */
  push32(0x124515b0u); f_12456510();
  /* 124515b0 mov esi, esp */
  ESI = (ESP);
  /* 124515b2 push 0x1247e3cc */
  push32((uint32_t)(0x1247e3ccu));
  /* 124515b7 push 0x12483610 */
  push32((uint32_t)(0x12483610u));
  /* 124515bc call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124515c2u);
  /* 124515c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124515c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124515c7 call 0x12456510 */
  push32(0x124515ccu); f_12456510();
  /* 124515cc mov esi, esp */
  ESI = (ESP);
  /* 124515ce push 0x1247e3b4 */
  push32((uint32_t)(0x1247e3b4u));
  /* 124515d3 push 0x12483630 */
  push32((uint32_t)(0x12483630u));
  /* 124515d8 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124515deu);
  /* 124515de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124515e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124515e3 call 0x12456510 */
  push32(0x124515e8u); f_12456510();
  /* 124515e8 mov esi, esp */
  ESI = (ESP);
  /* 124515ea push 0x1247e39c */
  push32((uint32_t)(0x1247e39cu));
  /* 124515ef push 0x12483648 */
  push32((uint32_t)(0x12483648u));
  /* 124515f4 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124515fau);
  /* 124515fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124515fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124515ff call 0x12456510 */
  push32(0x12451604u); f_12456510();
  /* 12451604 mov esi, esp */
  ESI = (ESP);
  /* 12451606 push 0x1247e378 */
  push32((uint32_t)(0x1247e378u));
  /* 1245160b push 0x12483660 */
  push32((uint32_t)(0x12483660u));
  /* 12451610 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451616u);
  /* 12451616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245161b call 0x12456510 */
  push32(0x12451620u); f_12456510();
  /* 12451620 mov esi, esp */
  ESI = (ESP);
  /* 12451622 push 0x1247e354 */
  push32((uint32_t)(0x1247e354u));
  /* 12451627 push 0x12483680 */
  push32((uint32_t)(0x12483680u));
  /* 1245162c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451632u);
  /* 12451632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451637 call 0x12456510 */
  push32(0x1245163cu); f_12456510();
  /* 1245163c mov esi, esp */
  ESI = (ESP);
  /* 1245163e push 0x1247e338 */
  push32((uint32_t)(0x1247e338u));
  /* 12451643 push 0x124836a0 */
  push32((uint32_t)(0x124836a0u));
  /* 12451648 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245164eu);
  /* 1245164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451653 call 0x12456510 */
  push32(0x12451658u); f_12456510();
  /* 12451658 mov esi, esp */
  ESI = (ESP);
  /* 1245165a push 0x1247e31c */
  push32((uint32_t)(0x1247e31cu));
  /* 1245165f push 0x124836b8 */
  push32((uint32_t)(0x124836b8u));
  /* 12451664 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245166au);
  /* 1245166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245166f call 0x12456510 */
  push32(0x12451674u); f_12456510();
  /* 12451674 mov esi, esp */
  ESI = (ESP);
  /* 12451676 push 0x1247e310 */
  push32((uint32_t)(0x1247e310u));
  /* 1245167b push 0x124836d0 */
  push32((uint32_t)(0x124836d0u));
  /* 12451680 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451686u);
  /* 12451686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245168b call 0x12456510 */
  push32(0x12451690u); f_12456510();
  /* 12451690 mov esi, esp */
  ESI = (ESP);
  /* 12451692 push 0x1247e304 */
  push32((uint32_t)(0x1247e304u));
  /* 12451697 push 0x12483590 */
  push32((uint32_t)(0x12483590u));
  /* 1245169c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124516a2u);
  /* 124516a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124516a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124516a7 call 0x12456510 */
  push32(0x124516acu); f_12456510();
  /* 124516ac mov esi, esp */
  ESI = (ESP);
  /* 124516ae push 0x1247e2f8 */
  push32((uint32_t)(0x1247e2f8u));
  /* 124516b3 push 0x12483598 */
  push32((uint32_t)(0x12483598u));
  /* 124516b8 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124516beu);
  /* 124516be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124516c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124516c3 call 0x12456510 */
  push32(0x124516c8u); f_12456510();
  /* 124516c8 mov esi, esp */
  ESI = (ESP);
  /* 124516ca push 0x1247e2ec */
  push32((uint32_t)(0x1247e2ecu));
  /* 124516cf push 0x124835a0 */
  push32((uint32_t)(0x124835a0u));
  /* 124516d4 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124516dau);
  /* 124516da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124516dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124516df call 0x12456510 */
  push32(0x124516e4u); f_12456510();
  /* 124516e4 mov esi, esp */
  ESI = (ESP);
  /* 124516e6 push 0x1247e2e0 */
  push32((uint32_t)(0x1247e2e0u));
  /* 124516eb push 0x124835a8 */
  push32((uint32_t)(0x124835a8u));
  /* 124516f0 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124516f6u);
  /* 124516f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124516f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124516fb call 0x12456510 */
  push32(0x12451700u); f_12456510();
  /* 12451700 mov esi, esp */
  ESI = (ESP);
  /* 12451702 push 0x1247e2d8 */
  push32((uint32_t)(0x1247e2d8u));
  /* 12451707 push 0x124835b8 */
  push32((uint32_t)(0x124835b8u));
  /* 1245170c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451712u);
  /* 12451712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451717 call 0x12456510 */
  push32(0x1245171cu); f_12456510();
  /* 1245171c mov esi, esp */
  ESI = (ESP);
  /* 1245171e push 0x1247e2bc */
  push32((uint32_t)(0x1247e2bcu));
  /* 12451723 push 0x124835c8 */
  push32((uint32_t)(0x124835c8u));
  /* 12451728 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245172eu);
  /* 1245172e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451733 call 0x12456510 */
  push32(0x12451738u); f_12456510();
  /* 12451738 mov esi, esp */
  ESI = (ESP);
  /* 1245173a push 0x1247e29c */
  push32((uint32_t)(0x1247e29cu));
  /* 1245173f push 0x124835d8 */
  push32((uint32_t)(0x124835d8u));
  /* 12451744 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245174au);
  /* 1245174a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245174d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245174f call 0x12456510 */
  push32(0x12451754u); f_12456510();
  /* 12451754 mov esi, esp */
  ESI = (ESP);
  /* 12451756 push 0x1247e27c */
  push32((uint32_t)(0x1247e27cu));
  /* 1245175b push 0x124835e8 */
  push32((uint32_t)(0x124835e8u));
  /* 12451760 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451766u);
  /* 12451766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245176b call 0x12456510 */
  push32(0x12451770u); f_12456510();
  /* 12451770 mov esi, esp */
  ESI = (ESP);
  /* 12451772 push 0x1247e270 */
  push32((uint32_t)(0x1247e270u));
  /* 12451777 push 0x12483608 */
  push32((uint32_t)(0x12483608u));
  /* 1245177c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451782u);
  /* 12451782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451785 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451787 call 0x12456510 */
  push32(0x1245178cu); f_12456510();
  /* 1245178c mov esi, esp */
  ESI = (ESP);
  /* 1245178e push 0x1247e264 */
  push32((uint32_t)(0x1247e264u));
  /* 12451793 push 0x12483628 */
  push32((uint32_t)(0x12483628u));
  /* 12451798 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245179eu);
  /* 1245179e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124517a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124517a3 call 0x12456510 */
  push32(0x124517a8u); f_12456510();
  /* 124517a8 mov esi, esp */
  ESI = (ESP);
  /* 124517aa push 0x1247e258 */
  push32((uint32_t)(0x1247e258u));
  /* 124517af push 0x124835b0 */
  push32((uint32_t)(0x124835b0u));
  /* 124517b4 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124517bau);
  /* 124517ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124517bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124517bf call 0x12456510 */
  push32(0x124517c4u); f_12456510();
  /* 124517c4 mov esi, esp */
  ESI = (ESP);
  /* 124517c6 push 0x1247e24c */
  push32((uint32_t)(0x1247e24cu));
  /* 124517cb push 0x124835c0 */
  push32((uint32_t)(0x124835c0u));
  /* 124517d0 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124517d6u);
  /* 124517d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124517d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124517db call 0x12456510 */
  push32(0x124517e0u); f_12456510();
  /* 124517e0 mov esi, esp */
  ESI = (ESP);
  /* 124517e2 push 0x1247e240 */
  push32((uint32_t)(0x1247e240u));
  /* 124517e7 push 0x124835d0 */
  push32((uint32_t)(0x124835d0u));
  /* 124517ec call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124517f2u);
  /* 124517f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124517f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124517f7 call 0x12456510 */
  push32(0x124517fcu); f_12456510();
  /* 124517fc mov esi, esp */
  ESI = (ESP);
  /* 124517fe push 0x1247e234 */
  push32((uint32_t)(0x1247e234u));
  /* 12451803 push 0x124835e0 */
  push32((uint32_t)(0x124835e0u));
  /* 12451808 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245180eu);
  /* 1245180e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451813 call 0x12456510 */
  push32(0x12451818u); f_12456510();
  /* 12451818 mov esi, esp */
  ESI = (ESP);
  /* 1245181a push 0x1247e228 */
  push32((uint32_t)(0x1247e228u));
  /* 1245181f push 0x12483600 */
  push32((uint32_t)(0x12483600u));
  /* 12451824 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245182au);
  /* 1245182a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245182d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245182f call 0x12456510 */
  push32(0x12451834u); f_12456510();
  /* 12451834 mov esi, esp */
  ESI = (ESP);
  /* 12451836 push 0x1247e21c */
  push32((uint32_t)(0x1247e21cu));
  /* 1245183b push 0x12483620 */
  push32((uint32_t)(0x12483620u));
  /* 12451840 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451846u);
  /* 12451846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245184b call 0x12456510 */
  push32(0x12451850u); f_12456510();
  /* 12451850 mov esi, esp */
  ESI = (ESP);
  /* 12451852 push 0x1247e210 */
  push32((uint32_t)(0x1247e210u));
  /* 12451857 push 0x12483640 */
  push32((uint32_t)(0x12483640u));
  /* 1245185c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451862u);
  /* 12451862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451867 call 0x12456510 */
  push32(0x1245186cu); f_12456510();
  /* 1245186c mov esi, esp */
  ESI = (ESP);
  /* 1245186e push 0x1247e204 */
  push32((uint32_t)(0x1247e204u));
  /* 12451873 push 0x12483658 */
  push32((uint32_t)(0x12483658u));
  /* 12451878 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245187eu);
  /* 1245187e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451883 call 0x12456510 */
  push32(0x12451888u); f_12456510();
  /* 12451888 mov esi, esp */
  ESI = (ESP);
  /* 1245188a push 0x1247e1f8 */
  push32((uint32_t)(0x1247e1f8u));
  /* 1245188f push 0x12483678 */
  push32((uint32_t)(0x12483678u));
  /* 12451894 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245189au);
  /* 1245189a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245189d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245189f call 0x12456510 */
  push32(0x124518a4u); f_12456510();
  /* 124518a4 mov esi, esp */
  ESI = (ESP);
  /* 124518a6 push 0x1247e1ec */
  push32((uint32_t)(0x1247e1ecu));
  /* 124518ab push 0x12483698 */
  push32((uint32_t)(0x12483698u));
  /* 124518b0 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124518b6u);
  /* 124518b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124518b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124518bb call 0x12456510 */
  push32(0x124518c0u); f_12456510();
  /* 124518c0 mov esi, esp */
  ESI = (ESP);
  /* 124518c2 push 0x1247e1e0 */
  push32((uint32_t)(0x1247e1e0u));
  /* 124518c7 push 0x124835f8 */
  push32((uint32_t)(0x124835f8u));
  /* 124518cc call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124518d2u);
  /* 124518d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124518d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124518d7 call 0x12456510 */
  push32(0x124518dcu); f_12456510();
  /* 124518dc mov esi, esp */
  ESI = (ESP);
  /* 124518de push 0x1247e1d4 */
  push32((uint32_t)(0x1247e1d4u));
  /* 124518e3 push 0x12483618 */
  push32((uint32_t)(0x12483618u));
  /* 124518e8 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124518eeu);
  /* 124518ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124518f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124518f3 call 0x12456510 */
  push32(0x124518f8u); f_12456510();
  /* 124518f8 mov esi, esp */
  ESI = (ESP);
  /* 124518fa push 0x1247e1c8 */
  push32((uint32_t)(0x1247e1c8u));
  /* 124518ff push 0x12483638 */
  push32((uint32_t)(0x12483638u));
  /* 12451904 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245190au);
  /* 1245190a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245190d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245190f call 0x12456510 */
  push32(0x12451914u); f_12456510();
  /* 12451914 mov esi, esp */
  ESI = (ESP);
  /* 12451916 push 0x1247e1bc */
  push32((uint32_t)(0x1247e1bcu));
  /* 1245191b push 0x12483650 */
  push32((uint32_t)(0x12483650u));
  /* 12451920 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451926u);
  /* 12451926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245192b call 0x12456510 */
  push32(0x12451930u); f_12456510();
  /* 12451930 mov esi, esp */
  ESI = (ESP);
  /* 12451932 push 0x1247e1b0 */
  push32((uint32_t)(0x1247e1b0u));
  /* 12451937 push 0x12483670 */
  push32((uint32_t)(0x12483670u));
  /* 1245193c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451942u);
  /* 12451942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451945 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451947 call 0x12456510 */
  push32(0x1245194cu); f_12456510();
  /* 1245194c mov esi, esp */
  ESI = (ESP);
  /* 1245194e push 0x1247e1a4 */
  push32((uint32_t)(0x1247e1a4u));
  /* 12451953 push 0x12483690 */
  push32((uint32_t)(0x12483690u));
  /* 12451958 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245195eu);
  /* 1245195e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451963 call 0x12456510 */
  push32(0x12451968u); f_12456510();
  /* 12451968 mov esi, esp */
  ESI = (ESP);
  /* 1245196a push 0x1247e198 */
  push32((uint32_t)(0x1247e198u));
  /* 1245196f push 0x124836b0 */
  push32((uint32_t)(0x124836b0u));
  /* 12451974 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x1245197au);
  /* 1245197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245197f call 0x12456510 */
  push32(0x12451984u); f_12456510();
  /* 12451984 mov esi, esp */
  ESI = (ESP);
  /* 12451986 push 0x1247e18c */
  push32((uint32_t)(0x1247e18cu));
  /* 1245198b push 0x124836c8 */
  push32((uint32_t)(0x124836c8u));
  /* 12451990 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451996u);
  /* 12451996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451999 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245199b call 0x12456510 */
  push32(0x124519a0u); f_12456510();
  /* 124519a0 mov esi, esp */
  ESI = (ESP);
  /* 124519a2 push 0x1247e180 */
  push32((uint32_t)(0x1247e180u));
  /* 124519a7 push 0x124836e8 */
  push32((uint32_t)(0x124836e8u));
  /* 124519ac call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124519b2u);
  /* 124519b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124519b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124519b7 call 0x12456510 */
  push32(0x124519bcu); f_12456510();
  /* 124519bc mov esi, esp */
  ESI = (ESP);
  /* 124519be push 0x1247e174 */
  push32((uint32_t)(0x1247e174u));
  /* 124519c3 push 0x12483700 */
  push32((uint32_t)(0x12483700u));
  /* 124519c8 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124519ceu);
  /* 124519ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124519d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124519d3 call 0x12456510 */
  push32(0x124519d8u); f_12456510();
  /* 124519d8 mov esi, esp */
  ESI = (ESP);
  /* 124519da push 0x1247e168 */
  push32((uint32_t)(0x1247e168u));
  /* 124519df push 0x12483668 */
  push32((uint32_t)(0x12483668u));
  /* 124519e4 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x124519eau);
  /* 124519ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124519ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124519ef call 0x12456510 */
  push32(0x124519f4u); f_12456510();
  /* 124519f4 mov esi, esp */
  ESI = (ESP);
  /* 124519f6 push 0x1247e15c */
  push32((uint32_t)(0x1247e15cu));
  /* 124519fb push 0x12483688 */
  push32((uint32_t)(0x12483688u));
  /* 12451a00 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451a06u);
  /* 12451a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451a0b call 0x12456510 */
  push32(0x12451a10u); f_12456510();
  /* 12451a10 mov esi, esp */
  ESI = (ESP);
  /* 12451a12 push 0x1247e150 */
  push32((uint32_t)(0x1247e150u));
  /* 12451a17 push 0x124836a8 */
  push32((uint32_t)(0x124836a8u));
  /* 12451a1c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451a22u);
  /* 12451a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451a25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451a27 call 0x12456510 */
  push32(0x12451a2cu); f_12456510();
  /* 12451a2c mov esi, esp */
  ESI = (ESP);
  /* 12451a2e push 0x1247e144 */
  push32((uint32_t)(0x1247e144u));
  /* 12451a33 push 0x124836c0 */
  push32((uint32_t)(0x124836c0u));
  /* 12451a38 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451a3eu);
  /* 12451a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451a41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451a43 call 0x12456510 */
  push32(0x12451a48u); f_12456510();
  /* 12451a48 mov esi, esp */
  ESI = (ESP);
  /* 12451a4a push 0x1247e138 */
  push32((uint32_t)(0x1247e138u));
  /* 12451a4f push 0x124836e0 */
  push32((uint32_t)(0x124836e0u));
  /* 12451a54 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451a5au);
  /* 12451a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451a5f call 0x12456510 */
  push32(0x12451a64u); f_12456510();
  /* 12451a64 mov esi, esp */
  ESI = (ESP);
  /* 12451a66 push 0x1247e12c */
  push32((uint32_t)(0x1247e12cu));
  /* 12451a6b push 0x124836f8 */
  push32((uint32_t)(0x124836f8u));
  /* 12451a70 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451a76u);
  /* 12451a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451a79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451a7b call 0x12456510 */
  push32(0x12451a80u); f_12456510();
  /* 12451a80 mov esi, esp */
  ESI = (ESP);
  /* 12451a82 push 0x1247e120 */
  push32((uint32_t)(0x1247e120u));
  /* 12451a87 push 0x12483710 */
  push32((uint32_t)(0x12483710u));
  /* 12451a8c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451a92u);
  /* 12451a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451a97 call 0x12456510 */
  push32(0x12451a9cu); f_12456510();
  /* 12451a9c mov esi, esp */
  ESI = (ESP);
  /* 12451a9e push 0x1247e114 */
  push32((uint32_t)(0x1247e114u));
  /* 12451aa3 push 0x12483720 */
  push32((uint32_t)(0x12483720u));
  /* 12451aa8 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451aaeu);
  /* 12451aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451ab3 call 0x12456510 */
  push32(0x12451ab8u); f_12456510();
  /* 12451ab8 mov esi, esp */
  ESI = (ESP);
  /* 12451aba push 0x1247e108 */
  push32((uint32_t)(0x1247e108u));
  /* 12451abf push 0x12483738 */
  push32((uint32_t)(0x12483738u));
  /* 12451ac4 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451acau);
  /* 12451aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451acd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451acf call 0x12456510 */
  push32(0x12451ad4u); f_12456510();
  /* 12451ad4 mov esi, esp */
  ESI = (ESP);
  /* 12451ad6 push 0x1247e0fc */
  push32((uint32_t)(0x1247e0fcu));
  /* 12451adb push 0x12483750 */
  push32((uint32_t)(0x12483750u));
  /* 12451ae0 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451ae6u);
  /* 12451ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451ae9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451aeb call 0x12456510 */
  push32(0x12451af0u); f_12456510();
  /* 12451af0 mov esi, esp */
  ESI = (ESP);
  /* 12451af2 push 0x1247e0f0 */
  push32((uint32_t)(0x1247e0f0u));
  /* 12451af7 push 0x124836d8 */
  push32((uint32_t)(0x124836d8u));
  /* 12451afc call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451b02u);
  /* 12451b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451b05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451b07 call 0x12456510 */
  push32(0x12451b0cu); f_12456510();
  /* 12451b0c mov esi, esp */
  ESI = (ESP);
  /* 12451b0e push 0x1247e0e4 */
  push32((uint32_t)(0x1247e0e4u));
  /* 12451b13 push 0x124836f0 */
  push32((uint32_t)(0x124836f0u));
  /* 12451b18 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451b1eu);
  /* 12451b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451b23 call 0x12456510 */
  push32(0x12451b28u); f_12456510();
  /* 12451b28 mov esi, esp */
  ESI = (ESP);
  /* 12451b2a push 0x1247e0d8 */
  push32((uint32_t)(0x1247e0d8u));
  /* 12451b2f push 0x12483708 */
  push32((uint32_t)(0x12483708u));
  /* 12451b34 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451b3au);
  /* 12451b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451b3f call 0x12456510 */
  push32(0x12451b44u); f_12456510();
  /* 12451b44 mov esi, esp */
  ESI = (ESP);
  /* 12451b46 push 0x1247e0cc */
  push32((uint32_t)(0x1247e0ccu));
  /* 12451b4b push 0x12483718 */
  push32((uint32_t)(0x12483718u));
  /* 12451b50 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451b56u);
  /* 12451b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451b5b call 0x12456510 */
  push32(0x12451b60u); f_12456510();
  /* 12451b60 mov esi, esp */
  ESI = (ESP);
  /* 12451b62 push 0x1247e0b0 */
  push32((uint32_t)(0x1247e0b0u));
  /* 12451b67 push 0x12483730 */
  push32((uint32_t)(0x12483730u));
  /* 12451b6c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451b72u);
  /* 12451b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451b77 call 0x12456510 */
  push32(0x12451b7cu); f_12456510();
  /* 12451b7c mov esi, esp */
  ESI = (ESP);
  /* 12451b7e push 0x1247e0a0 */
  push32((uint32_t)(0x1247e0a0u));
  /* 12451b83 push 0x12483748 */
  push32((uint32_t)(0x12483748u));
  /* 12451b88 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451b8eu);
  /* 12451b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451b93 call 0x12456510 */
  push32(0x12451b98u); f_12456510();
  /* 12451b98 mov esi, esp */
  ESI = (ESP);
  /* 12451b9a push 0x1247e08c */
  push32((uint32_t)(0x1247e08cu));
  /* 12451b9f push 0x12483760 */
  push32((uint32_t)(0x12483760u));
  /* 12451ba4 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451baau);
  /* 12451baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451baf call 0x12456510 */
  push32(0x12451bb4u); f_12456510();
  /* 12451bb4 mov esi, esp */
  ESI = (ESP);
  /* 12451bb6 push 0x1247e07c */
  push32((uint32_t)(0x1247e07cu));
  /* 12451bbb push 0x12483768 */
  push32((uint32_t)(0x12483768u));
  /* 12451bc0 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451bc6u);
  /* 12451bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451bc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451bcb call 0x12456510 */
  push32(0x12451bd0u); f_12456510();
  /* 12451bd0 mov esi, esp */
  ESI = (ESP);
  /* 12451bd2 push 0x1247e06c */
  push32((uint32_t)(0x1247e06cu));
  /* 12451bd7 push 0x12483770 */
  push32((uint32_t)(0x12483770u));
  /* 12451bdc call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451be2u);
  /* 12451be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451be7 call 0x12456510 */
  push32(0x12451becu); f_12456510();
  /* 12451bec mov esi, esp */
  ESI = (ESP);
  /* 12451bee push 0x1247e05c */
  push32((uint32_t)(0x1247e05cu));
  /* 12451bf3 push 0x12483778 */
  push32((uint32_t)(0x12483778u));
  /* 12451bf8 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451bfeu);
  /* 12451bfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451c03 call 0x12456510 */
  push32(0x12451c08u); f_12456510();
  /* 12451c08 mov esi, esp */
  ESI = (ESP);
  /* 12451c0a push 0x1247e04c */
  push32((uint32_t)(0x1247e04cu));
  /* 12451c0f push 0x12483728 */
  push32((uint32_t)(0x12483728u));
  /* 12451c14 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451c1au);
  /* 12451c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451c1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451c1f call 0x12456510 */
  push32(0x12451c24u); f_12456510();
  /* 12451c24 mov esi, esp */
  ESI = (ESP);
  /* 12451c26 push 0x1247e034 */
  push32((uint32_t)(0x1247e034u));
  /* 12451c2b push 0x12483740 */
  push32((uint32_t)(0x12483740u));
  /* 12451c30 call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451c36u);
  /* 12451c36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451c39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451c3b call 0x12456510 */
  push32(0x12451c40u); f_12456510();
  /* 12451c40 mov esi, esp */
  ESI = (ESP);
  /* 12451c42 push 0x1247e01c */
  push32((uint32_t)(0x1247e01cu));
  /* 12451c47 push 0x12483758 */
  push32((uint32_t)(0x12483758u));
  /* 12451c4c call dword ptr [0x124864ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864ac))), 0x12451c52u);
  /* 12451c52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451c57 call 0x12456510 */
  push32(0x12451c5cu); f_12456510();
  /* 12451c5c mov esi, esp */
  ESI = (ESP);
  /* 12451c5e push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12451c63 call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451c69u);
  /* 12451c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451c6e call 0x12456510 */
  push32(0x12451c73u); f_12456510();
  /* 12451c73 mov esi, esp */
  ESI = (ESP);
  /* 12451c75 push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12451c7a call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451c80u);
  /* 12451c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451c85 call 0x12456510 */
  push32(0x12451c8au); f_12456510();
  /* 12451c8a mov esi, esp */
  ESI = (ESP);
  /* 12451c8c push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12451c91 call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451c97u);
  /* 12451c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451c9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451c9c call 0x12456510 */
  push32(0x12451ca1u); f_12456510();
  /* 12451ca1 mov esi, esp */
  ESI = (ESP);
  /* 12451ca3 push 0x124834e8 */
  push32((uint32_t)(0x124834e8u));
  /* 12451ca8 call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451caeu);
  /* 12451cae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451cb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451cb3 call 0x12456510 */
  push32(0x12451cb8u); f_12456510();
  /* 12451cb8 mov esi, esp */
  ESI = (ESP);
  /* 12451cba push 0x124834f0 */
  push32((uint32_t)(0x124834f0u));
  /* 12451cbf call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451cc5u);
  /* 12451cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451cc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451cca call 0x12456510 */
  push32(0x12451ccfu); f_12456510();
  /* 12451ccf mov esi, esp */
  ESI = (ESP);
  /* 12451cd1 push 0x124834f8 */
  push32((uint32_t)(0x124834f8u));
  /* 12451cd6 call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451cdcu);
  /* 12451cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451cdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451ce1 call 0x12456510 */
  push32(0x12451ce6u); f_12456510();
  /* 12451ce6 mov esi, esp */
  ESI = (ESP);
  /* 12451ce8 push 0x12483500 */
  push32((uint32_t)(0x12483500u));
  /* 12451ced call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451cf3u);
  /* 12451cf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451cf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451cf8 call 0x12456510 */
  push32(0x12451cfdu); f_12456510();
  /* 12451cfd mov esi, esp */
  ESI = (ESP);
  /* 12451cff push 0x12483508 */
  push32((uint32_t)(0x12483508u));
  /* 12451d04 call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451d0au);
  /* 12451d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451d0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451d0f call 0x12456510 */
  push32(0x12451d14u); f_12456510();
  /* 12451d14 mov esi, esp */
  ESI = (ESP);
  /* 12451d16 push 0x12483518 */
  push32((uint32_t)(0x12483518u));
  /* 12451d1b call dword ptr [0x124864b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b0))), 0x12451d21u);
  /* 12451d21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451d24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451d26 call 0x12456510 */
  push32(0x12451d2bu); f_12456510();
  /* 12451d2b mov esi, esp */
  ESI = (ESP);
  /* 12451d2d push 8 */
  push32((uint32_t)(0x8u));
  /* 12451d2f push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12451d34 call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451d3au);
  /* 12451d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451d3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451d3f call 0x12456510 */
  push32(0x12451d44u); f_12456510();
  /* 12451d44 mov esi, esp */
  ESI = (ESP);
  /* 12451d46 push 8 */
  push32((uint32_t)(0x8u));
  /* 12451d48 push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12451d4d call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451d53u);
  /* 12451d53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451d56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451d58 call 0x12456510 */
  push32(0x12451d5du); f_12456510();
  /* 12451d5d mov esi, esp */
  ESI = (ESP);
  /* 12451d5f push 8 */
  push32((uint32_t)(0x8u));
  /* 12451d61 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12451d66 call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451d6cu);
  /* 12451d6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451d6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451d71 call 0x12456510 */
  push32(0x12451d76u); f_12456510();
  /* 12451d76 mov esi, esp */
  ESI = (ESP);
  /* 12451d78 push 8 */
  push32((uint32_t)(0x8u));
  /* 12451d7a push 0x124834e8 */
  push32((uint32_t)(0x124834e8u));
  /* 12451d7f call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451d85u);
  /* 12451d85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451d88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451d8a call 0x12456510 */
  push32(0x12451d8fu); f_12456510();
  /* 12451d8f mov esi, esp */
  ESI = (ESP);
  /* 12451d91 push 8 */
  push32((uint32_t)(0x8u));
  /* 12451d93 push 0x124834f0 */
  push32((uint32_t)(0x124834f0u));
  /* 12451d98 call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451d9eu);
  /* 12451d9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451da1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451da3 call 0x12456510 */
  push32(0x12451da8u); f_12456510();
  /* 12451da8 mov esi, esp */
  ESI = (ESP);
  /* 12451daa push 8 */
  push32((uint32_t)(0x8u));
  /* 12451dac push 0x124834f8 */
  push32((uint32_t)(0x124834f8u));
  /* 12451db1 call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451db7u);
  /* 12451db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451dba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451dbc call 0x12456510 */
  push32(0x12451dc1u); f_12456510();
  /* 12451dc1 mov esi, esp */
  ESI = (ESP);
  /* 12451dc3 push 8 */
  push32((uint32_t)(0x8u));
  /* 12451dc5 push 0x12483500 */
  push32((uint32_t)(0x12483500u));
  /* 12451dca call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451dd0u);
  /* 12451dd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451dd5 call 0x12456510 */
  push32(0x12451ddau); f_12456510();
  /* 12451dda mov esi, esp */
  ESI = (ESP);
  /* 12451ddc push 8 */
  push32((uint32_t)(0x8u));
  /* 12451dde push 0x12483508 */
  push32((uint32_t)(0x12483508u));
  /* 12451de3 call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451de9u);
  /* 12451de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451dee call 0x12456510 */
  push32(0x12451df3u); f_12456510();
  /* 12451df3 mov esi, esp */
  ESI = (ESP);
  /* 12451df5 push 8 */
  push32((uint32_t)(0x8u));
  /* 12451df7 push 0x12483518 */
  push32((uint32_t)(0x12483518u));
  /* 12451dfc call dword ptr [0x124864b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b4))), 0x12451e02u);
  /* 12451e02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451e05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451e07 call 0x12456510 */
  push32(0x12451e0cu); f_12456510();
  /* 12451e0c mov esi, esp */
  ESI = (ESP);
  /* 12451e0e push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12451e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12451e12 call dword ptr [0x124864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b8))), 0x12451e18u);
  /* 12451e18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451e1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451e1d call 0x12456510 */
  push32(0x12451e22u); f_12456510();
  /* 12451e22 mov esi, esp */
  ESI = (ESP);
  /* 12451e24 push 2 */
  push32((uint32_t)(0x2u));
  /* 12451e26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12451e28 call dword ptr [0x124864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b8))), 0x12451e2eu);
  /* 12451e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451e31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451e33 call 0x12456510 */
  push32(0x12451e38u); f_12456510();
  /* 12451e38 mov esi, esp */
  ESI = (ESP);
  /* 12451e3a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12451e3c push 4 */
  push32((uint32_t)(0x4u));
  /* 12451e3e call dword ptr [0x124864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b8))), 0x12451e44u);
  /* 12451e44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451e47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451e49 call 0x12456510 */
  push32(0x12451e4eu); f_12456510();
  /* 12451e4e mov esi, esp */
  ESI = (ESP);
  /* 12451e50 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12451e52 push 5 */
  push32((uint32_t)(0x5u));
  /* 12451e54 call dword ptr [0x124864b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124864b8))), 0x12451e5au);
  /* 12451e5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451e5f call 0x12456510 */
  push32(0x12451e64u); f_12456510();
  /* 12451e64 pop edi */
  EDI = (pop32());
  /* 12451e65 pop esi */
  ESI = (pop32());
  /* 12451e66 pop ebx */
  EBX = (pop32());
  /* 12451e67 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12451e6a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12451e6c call 0x12456510 */
  push32(0x12451e71u); f_12456510();
  /* 12451e71 mov esp, ebp */
  ESP = (EBP);
  /* 12451e73 pop ebp */
  EBP = (pop32());
  /* 12451e74 ret  */
  ESPCHK(0x12451090u, _esp0);
  ESP += 4; return;
}

/* FUN_100021f0 @ 0x124521f0 (13483 bytes, 3951 insns) */
void f_124521f0(void) {
  FTRACE(0x124521f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124521f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124521f1 mov ebp, esp */
  EBP = (ESP);
  /* 124521f3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124521f6 push ebx */
  push32((uint32_t)(EBX));
  /* 124521f7 push esi */
  push32((uint32_t)(ESI));
  /* 124521f8 push edi */
  push32((uint32_t)(EDI));
  /* 124521f9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 124521fc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12452201 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12452206 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12452208 mov esi, esp */
  ESI = (ESP);
  /* 1245220a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245220c call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12452212u);
  /* 12452212 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452217 call 0x12456510 */
  push32(0x1245221cu); f_12456510();
  /* 1245221c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12452221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12452223 je 0x12452eb6 */
  if (C.zf) goto L_12452eb6;
  /* 12452229 mov esi, esp */
  ESI = (ESP);
  /* 1245222b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245222d push 1 */
  push32((uint32_t)(0x1u));
  /* 1245222f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452235u);
  /* 12452235 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452238 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245223a call 0x12456510 */
  push32(0x1245223fu); f_12456510();
  /* 1245223f mov esi, esp */
  ESI = (ESP);
  /* 12452241 push 0x12483660 */
  push32((uint32_t)(0x12483660u));
  /* 12452246 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452248 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245224eu);
  /* 1245224e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452251 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452253 call 0x12456510 */
  push32(0x12452258u); f_12456510();
  /* 12452258 mov esi, esp */
  ESI = (ESP);
  /* 1245225a push 0x12483680 */
  push32((uint32_t)(0x12483680u));
  /* 1245225f push 0 */
  push32((uint32_t)(0x0u));
  /* 12452261 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452267u);
  /* 12452267 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245226a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245226c call 0x12456510 */
  push32(0x12452271u); f_12456510();
  /* 12452271 mov esi, esp */
  ESI = (ESP);
  /* 12452273 push 0x124836a0 */
  push32((uint32_t)(0x124836a0u));
  /* 12452278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245227a call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452280u);
  /* 12452280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452285 call 0x12456510 */
  push32(0x1245228au); f_12456510();
  /* 1245228a mov esi, esp */
  ESI = (ESP);
  /* 1245228c push 0x124836b8 */
  push32((uint32_t)(0x124836b8u));
  /* 12452291 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452293 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452299u);
  /* 12452299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245229c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245229e call 0x12456510 */
  push32(0x124522a3u); f_12456510();
  /* 124522a3 mov esi, esp */
  ESI = (ESP);
  /* 124522a5 push 0x12483590 */
  push32((uint32_t)(0x12483590u));
  /* 124522aa push 0 */
  push32((uint32_t)(0x0u));
  /* 124522ac call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124522b2u);
  /* 124522b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124522b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124522b7 call 0x12456510 */
  push32(0x124522bcu); f_12456510();
  /* 124522bc mov esi, esp */
  ESI = (ESP);
  /* 124522be push 0x12483598 */
  push32((uint32_t)(0x12483598u));
  /* 124522c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124522c5 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124522cbu);
  /* 124522cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124522ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124522d0 call 0x12456510 */
  push32(0x124522d5u); f_12456510();
  /* 124522d5 mov esi, esp */
  ESI = (ESP);
  /* 124522d7 push 0x124835a0 */
  push32((uint32_t)(0x124835a0u));
  /* 124522dc push 0 */
  push32((uint32_t)(0x0u));
  /* 124522de call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124522e4u);
  /* 124522e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124522e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124522e9 call 0x12456510 */
  push32(0x124522eeu); f_12456510();
  /* 124522ee mov esi, esp */
  ESI = (ESP);
  /* 124522f0 push 0x124835a8 */
  push32((uint32_t)(0x124835a8u));
  /* 124522f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124522f7 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124522fdu);
  /* 124522fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452300 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452302 call 0x12456510 */
  push32(0x12452307u); f_12456510();
  /* 12452307 mov esi, esp */
  ESI = (ESP);
  /* 12452309 push 0x124835b8 */
  push32((uint32_t)(0x124835b8u));
  /* 1245230e push 0 */
  push32((uint32_t)(0x0u));
  /* 12452310 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452316u);
  /* 12452316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245231b call 0x12456510 */
  push32(0x12452320u); f_12456510();
  /* 12452320 mov esi, esp */
  ESI = (ESP);
  /* 12452322 push 0x124835d0 */
  push32((uint32_t)(0x124835d0u));
  /* 12452327 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452329 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245232fu);
  /* 1245232f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452332 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452334 call 0x12456510 */
  push32(0x12452339u); f_12456510();
  /* 12452339 mov esi, esp */
  ESI = (ESP);
  /* 1245233b push 0x124835e0 */
  push32((uint32_t)(0x124835e0u));
  /* 12452340 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452342 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452348u);
  /* 12452348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245234b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245234d call 0x12456510 */
  push32(0x12452352u); f_12456510();
  /* 12452352 mov esi, esp */
  ESI = (ESP);
  /* 12452354 push 0x12483600 */
  push32((uint32_t)(0x12483600u));
  /* 12452359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245235b call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452361u);
  /* 12452361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452364 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452366 call 0x12456510 */
  push32(0x1245236bu); f_12456510();
  /* 1245236b mov esi, esp */
  ESI = (ESP);
  /* 1245236d push 0x12483640 */
  push32((uint32_t)(0x12483640u));
  /* 12452372 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452374 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245237au);
  /* 1245237a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245237d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245237f call 0x12456510 */
  push32(0x12452384u); f_12456510();
  /* 12452384 mov esi, esp */
  ESI = (ESP);
  /* 12452386 push 0x12483658 */
  push32((uint32_t)(0x12483658u));
  /* 1245238b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245238d call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452393u);
  /* 12452393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452396 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452398 call 0x12456510 */
  push32(0x1245239du); f_12456510();
  /* 1245239d mov esi, esp */
  ESI = (ESP);
  /* 1245239f push 0x12483678 */
  push32((uint32_t)(0x12483678u));
  /* 124523a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124523a6 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124523acu);
  /* 124523ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124523af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124523b1 call 0x12456510 */
  push32(0x124523b6u); f_12456510();
  /* 124523b6 mov esi, esp */
  ESI = (ESP);
  /* 124523b8 push 0x12483698 */
  push32((uint32_t)(0x12483698u));
  /* 124523bd push 0 */
  push32((uint32_t)(0x0u));
  /* 124523bf call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124523c5u);
  /* 124523c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124523c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124523ca call 0x12456510 */
  push32(0x124523cfu); f_12456510();
  /* 124523cf mov esi, esp */
  ESI = (ESP);
  /* 124523d1 push 0x124835f8 */
  push32((uint32_t)(0x124835f8u));
  /* 124523d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124523d8 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124523deu);
  /* 124523de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124523e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124523e3 call 0x12456510 */
  push32(0x124523e8u); f_12456510();
  /* 124523e8 mov esi, esp */
  ESI = (ESP);
  /* 124523ea push 0x12483618 */
  push32((uint32_t)(0x12483618u));
  /* 124523ef push 0 */
  push32((uint32_t)(0x0u));
  /* 124523f1 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124523f7u);
  /* 124523f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124523fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124523fc call 0x12456510 */
  push32(0x12452401u); f_12456510();
  /* 12452401 mov esi, esp */
  ESI = (ESP);
  /* 12452403 push 0x12483638 */
  push32((uint32_t)(0x12483638u));
  /* 12452408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245240a call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452410u);
  /* 12452410 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452413 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452415 call 0x12456510 */
  push32(0x1245241au); f_12456510();
  /* 1245241a mov esi, esp */
  ESI = (ESP);
  /* 1245241c push 0x12483650 */
  push32((uint32_t)(0x12483650u));
  /* 12452421 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452423 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452429u);
  /* 12452429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245242c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245242e call 0x12456510 */
  push32(0x12452433u); f_12456510();
  /* 12452433 mov esi, esp */
  ESI = (ESP);
  /* 12452435 push 0x12483670 */
  push32((uint32_t)(0x12483670u));
  /* 1245243a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245243c call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452442u);
  /* 12452442 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452445 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452447 call 0x12456510 */
  push32(0x1245244cu); f_12456510();
  /* 1245244c mov esi, esp */
  ESI = (ESP);
  /* 1245244e push 0x12483690 */
  push32((uint32_t)(0x12483690u));
  /* 12452453 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452455 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245245bu);
  /* 1245245b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245245e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452460 call 0x12456510 */
  push32(0x12452465u); f_12456510();
  /* 12452465 mov esi, esp */
  ESI = (ESP);
  /* 12452467 push 0x124836b0 */
  push32((uint32_t)(0x124836b0u));
  /* 1245246c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245246e call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452474u);
  /* 12452474 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452477 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452479 call 0x12456510 */
  push32(0x1245247eu); f_12456510();
  /* 1245247e mov esi, esp */
  ESI = (ESP);
  /* 12452480 push 0x124836c8 */
  push32((uint32_t)(0x124836c8u));
  /* 12452485 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452487 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245248du);
  /* 1245248d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452490 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452492 call 0x12456510 */
  push32(0x12452497u); f_12456510();
  /* 12452497 mov esi, esp */
  ESI = (ESP);
  /* 12452499 push 0x124836e8 */
  push32((uint32_t)(0x124836e8u));
  /* 1245249e push 0 */
  push32((uint32_t)(0x0u));
  /* 124524a0 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124524a6u);
  /* 124524a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124524a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124524ab call 0x12456510 */
  push32(0x124524b0u); f_12456510();
  /* 124524b0 mov esi, esp */
  ESI = (ESP);
  /* 124524b2 push 0x124836a8 */
  push32((uint32_t)(0x124836a8u));
  /* 124524b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124524b9 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124524bfu);
  /* 124524bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124524c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124524c4 call 0x12456510 */
  push32(0x124524c9u); f_12456510();
  /* 124524c9 mov esi, esp */
  ESI = (ESP);
  /* 124524cb push 0x124836c0 */
  push32((uint32_t)(0x124836c0u));
  /* 124524d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124524d2 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124524d8u);
  /* 124524d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124524db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124524dd call 0x12456510 */
  push32(0x124524e2u); f_12456510();
  /* 124524e2 mov esi, esp */
  ESI = (ESP);
  /* 124524e4 push 0x124836e0 */
  push32((uint32_t)(0x124836e0u));
  /* 124524e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124524eb call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124524f1u);
  /* 124524f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124524f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124524f6 call 0x12456510 */
  push32(0x124524fbu); f_12456510();
  /* 124524fb mov esi, esp */
  ESI = (ESP);
  /* 124524fd push 0x124836f8 */
  push32((uint32_t)(0x124836f8u));
  /* 12452502 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452504 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245250au);
  /* 1245250a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245250d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245250f call 0x12456510 */
  push32(0x12452514u); f_12456510();
  /* 12452514 mov esi, esp */
  ESI = (ESP);
  /* 12452516 push 0x12483710 */
  push32((uint32_t)(0x12483710u));
  /* 1245251b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245251d call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452523u);
  /* 12452523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452526 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452528 call 0x12456510 */
  push32(0x1245252du); f_12456510();
  /* 1245252d mov esi, esp */
  ESI = (ESP);
  /* 1245252f push 0x12483720 */
  push32((uint32_t)(0x12483720u));
  /* 12452534 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452536 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245253cu);
  /* 1245253c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245253f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452541 call 0x12456510 */
  push32(0x12452546u); f_12456510();
  /* 12452546 mov esi, esp */
  ESI = (ESP);
  /* 12452548 push 0x12483738 */
  push32((uint32_t)(0x12483738u));
  /* 1245254d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245254f call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452555u);
  /* 12452555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452558 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245255a call 0x12456510 */
  push32(0x1245255fu); f_12456510();
  /* 1245255f mov esi, esp */
  ESI = (ESP);
  /* 12452561 push 0x12483750 */
  push32((uint32_t)(0x12483750u));
  /* 12452566 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452568 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245256eu);
  /* 1245256e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452573 call 0x12456510 */
  push32(0x12452578u); f_12456510();
  /* 12452578 mov esi, esp */
  ESI = (ESP);
  /* 1245257a push 0x124836d8 */
  push32((uint32_t)(0x124836d8u));
  /* 1245257f push 0 */
  push32((uint32_t)(0x0u));
  /* 12452581 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452587u);
  /* 12452587 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245258a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245258c call 0x12456510 */
  push32(0x12452591u); f_12456510();
  /* 12452591 mov esi, esp */
  ESI = (ESP);
  /* 12452593 push 0x124836f0 */
  push32((uint32_t)(0x124836f0u));
  /* 12452598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245259a call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124525a0u);
  /* 124525a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124525a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124525a5 call 0x12456510 */
  push32(0x124525aau); f_12456510();
  /* 124525aa mov esi, esp */
  ESI = (ESP);
  /* 124525ac push 0x12483708 */
  push32((uint32_t)(0x12483708u));
  /* 124525b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124525b3 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124525b9u);
  /* 124525b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124525bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124525be call 0x12456510 */
  push32(0x124525c3u); f_12456510();
  /* 124525c3 mov esi, esp */
  ESI = (ESP);
  /* 124525c5 push 0x12483718 */
  push32((uint32_t)(0x12483718u));
  /* 124525ca push 0 */
  push32((uint32_t)(0x0u));
  /* 124525cc call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124525d2u);
  /* 124525d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124525d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124525d7 call 0x12456510 */
  push32(0x124525dcu); f_12456510();
  /* 124525dc mov esi, esp */
  ESI = (ESP);
  /* 124525de push 0x12483748 */
  push32((uint32_t)(0x12483748u));
  /* 124525e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124525e5 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x124525ebu);
  /* 124525eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124525ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124525f0 call 0x12456510 */
  push32(0x124525f5u); f_12456510();
  /* 124525f5 mov esi, esp */
  ESI = (ESP);
  /* 124525f7 push 0x12483760 */
  push32((uint32_t)(0x12483760u));
  /* 124525fc push 0 */
  push32((uint32_t)(0x0u));
  /* 124525fe call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452604u);
  /* 12452604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452609 call 0x12456510 */
  push32(0x1245260eu); f_12456510();
  /* 1245260e mov esi, esp */
  ESI = (ESP);
  /* 12452610 push 0x12483768 */
  push32((uint32_t)(0x12483768u));
  /* 12452615 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452617 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245261du);
  /* 1245261d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452620 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452622 call 0x12456510 */
  push32(0x12452627u); f_12456510();
  /* 12452627 mov esi, esp */
  ESI = (ESP);
  /* 12452629 push 0x12483770 */
  push32((uint32_t)(0x12483770u));
  /* 1245262e push 0 */
  push32((uint32_t)(0x0u));
  /* 12452630 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452636u);
  /* 12452636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452639 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245263b call 0x12456510 */
  push32(0x12452640u); f_12456510();
  /* 12452640 mov esi, esp */
  ESI = (ESP);
  /* 12452642 push 0x12483778 */
  push32((uint32_t)(0x12483778u));
  /* 12452647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452649 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x1245264fu);
  /* 1245264f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452654 call 0x12456510 */
  push32(0x12452659u); f_12456510();
  /* 12452659 mov esi, esp */
  ESI = (ESP);
  /* 1245265b push 0x12483728 */
  push32((uint32_t)(0x12483728u));
  /* 12452660 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452662 call dword ptr [0x1248642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248642c))), 0x12452668u);
  /* 12452668 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245266b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245266d call 0x12456510 */
  push32(0x12452672u); f_12456510();
  /* 12452672 mov esi, esp */
  ESI = (ESP);
  /* 12452674 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452676 push 0x12483430 */
  push32((uint32_t)(0x12483430u));
  /* 1245267b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245267d call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12452683u);
  /* 12452683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452688 call 0x12456510 */
  push32(0x1245268du); f_12456510();
  /* 1245268d mov esi, esp */
  ESI = (ESP);
  /* 1245268f push 0 */
  push32((uint32_t)(0x0u));
  /* 12452691 push 0x12483448 */
  push32((uint32_t)(0x12483448u));
  /* 12452696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452698 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245269eu);
  /* 1245269e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124526a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124526a3 call 0x12456510 */
  push32(0x124526a8u); f_12456510();
  /* 124526a8 mov esi, esp */
  ESI = (ESP);
  /* 124526aa push 0 */
  push32((uint32_t)(0x0u));
  /* 124526ac push 0x12483468 */
  push32((uint32_t)(0x12483468u));
  /* 124526b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124526b3 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124526b9u);
  /* 124526b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124526bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124526be call 0x12456510 */
  push32(0x124526c3u); f_12456510();
  /* 124526c3 mov esi, esp */
  ESI = (ESP);
  /* 124526c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124526c7 push 0x12483480 */
  push32((uint32_t)(0x12483480u));
  /* 124526cc push 0 */
  push32((uint32_t)(0x0u));
  /* 124526ce call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124526d4u);
  /* 124526d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124526d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124526d9 call 0x12456510 */
  push32(0x124526deu); f_12456510();
  /* 124526de mov esi, esp */
  ESI = (ESP);
  /* 124526e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124526e2 push 0x12483490 */
  push32((uint32_t)(0x12483490u));
  /* 124526e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124526e9 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124526efu);
  /* 124526ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124526f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124526f4 call 0x12456510 */
  push32(0x124526f9u); f_12456510();
  /* 124526f9 mov esi, esp */
  ESI = (ESP);
  /* 124526fb push 0 */
  push32((uint32_t)(0x0u));
  /* 124526fd push 0x124834a0 */
  push32((uint32_t)(0x124834a0u));
  /* 12452702 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452704 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245270au);
  /* 1245270a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245270d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245270f call 0x12456510 */
  push32(0x12452714u); f_12456510();
  /* 12452714 mov esi, esp */
  ESI = (ESP);
  /* 12452716 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452718 push 0x124834b0 */
  push32((uint32_t)(0x124834b0u));
  /* 1245271d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245271f call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12452725u);
  /* 12452725 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452728 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245272a call 0x12456510 */
  push32(0x1245272fu); f_12456510();
  /* 1245272f mov esi, esp */
  ESI = (ESP);
  /* 12452731 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452733 push 0x124834c0 */
  push32((uint32_t)(0x124834c0u));
  /* 12452738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245273a call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12452740u);
  /* 12452740 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452745 call 0x12456510 */
  push32(0x1245274au); f_12456510();
  /* 1245274a mov esi, esp */
  ESI = (ESP);
  /* 1245274c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245274e push 0x124834d0 */
  push32((uint32_t)(0x124834d0u));
  /* 12452753 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452755 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245275bu);
  /* 1245275b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245275e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452760 call 0x12456510 */
  push32(0x12452765u); f_12456510();
  /* 12452765 mov esi, esp */
  ESI = (ESP);
  /* 12452767 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452769 push 0x124833e0 */
  push32((uint32_t)(0x124833e0u));
  /* 1245276e push 0 */
  push32((uint32_t)(0x0u));
  /* 12452770 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12452776u);
  /* 12452776 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245277b call 0x12456510 */
  push32(0x12452780u); f_12456510();
  /* 12452780 mov esi, esp */
  ESI = (ESP);
  /* 12452782 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452784 push 0x124833e8 */
  push32((uint32_t)(0x124833e8u));
  /* 12452789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245278b call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12452791u);
  /* 12452791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452796 call 0x12456510 */
  push32(0x1245279bu); f_12456510();
  /* 1245279b mov esi, esp */
  ESI = (ESP);
  /* 1245279d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245279f push 0x124833f0 */
  push32((uint32_t)(0x124833f0u));
  /* 124527a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124527a6 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124527acu);
  /* 124527ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124527af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124527b1 call 0x12456510 */
  push32(0x124527b6u); f_12456510();
  /* 124527b6 mov esi, esp */
  ESI = (ESP);
  /* 124527b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124527ba push 0x124833f8 */
  push32((uint32_t)(0x124833f8u));
  /* 124527bf push 0 */
  push32((uint32_t)(0x0u));
  /* 124527c1 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124527c7u);
  /* 124527c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124527ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124527cc call 0x12456510 */
  push32(0x124527d1u); f_12456510();
  /* 124527d1 mov esi, esp */
  ESI = (ESP);
  /* 124527d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124527d5 push 0x12483408 */
  push32((uint32_t)(0x12483408u));
  /* 124527da push 0 */
  push32((uint32_t)(0x0u));
  /* 124527dc call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124527e2u);
  /* 124527e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124527e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124527e7 call 0x12456510 */
  push32(0x124527ecu); f_12456510();
  /* 124527ec mov esi, esp */
  ESI = (ESP);
  /* 124527ee push 0 */
  push32((uint32_t)(0x0u));
  /* 124527f0 push 0x12483418 */
  push32((uint32_t)(0x12483418u));
  /* 124527f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124527f7 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124527fdu);
  /* 124527fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452802 call 0x12456510 */
  push32(0x12452807u); f_12456510();
  /* 12452807 mov esi, esp */
  ESI = (ESP);
  /* 12452809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245280b push 0x12483440 */
  push32((uint32_t)(0x12483440u));
  /* 12452810 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452812 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12452818u);
  /* 12452818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245281b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245281d call 0x12456510 */
  push32(0x12452822u); f_12456510();
  /* 12452822 mov esi, esp */
  ESI = (ESP);
  /* 12452824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452826 push 0x12483460 */
  push32((uint32_t)(0x12483460u));
  /* 1245282b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245282d call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12452833u);
  /* 12452833 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452836 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452838 call 0x12456510 */
  push32(0x1245283du); f_12456510();
  /* 1245283d mov esi, esp */
  ESI = (ESP);
  /* 1245283f push 0 */
  push32((uint32_t)(0x0u));
  /* 12452841 push 0x12483478 */
  push32((uint32_t)(0x12483478u));
  /* 12452846 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452848 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245284eu);
  /* 1245284e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452853 call 0x12456510 */
  push32(0x12452858u); f_12456510();
  /* 12452858 mov esi, esp */
  ESI = (ESP);
  /* 1245285a push 0x1c3e */
  push32((uint32_t)(0x1c3eu));
  /* 1245285f push 3 */
  push32((uint32_t)(0x3u));
  /* 12452861 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452863 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x12452869u);
  /* 12452869 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245286c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245286e call 0x12456510 */
  push32(0x12452873u); f_12456510();
  /* 12452873 mov esi, esp */
  ESI = (ESP);
  /* 12452875 push 0xd5c */
  push32((uint32_t)(0xd5cu));
  /* 1245287a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245287c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245287e call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x12452884u);
  /* 12452884 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452887 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452889 call 0x12456510 */
  push32(0x1245288eu); f_12456510();
  /* 1245288e mov esi, esp */
  ESI = (ESP);
  /* 12452890 push 0xcb2 */
  push32((uint32_t)(0xcb2u));
  /* 12452895 push 4 */
  push32((uint32_t)(0x4u));
  /* 12452897 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452899 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x1245289fu);
  /* 1245289f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124528a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124528a4 call 0x12456510 */
  push32(0x124528a9u); f_12456510();
  /* 124528a9 mov esi, esp */
  ESI = (ESP);
  /* 124528ab push 0x22c4 */
  push32((uint32_t)(0x22c4u));
  /* 124528b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124528b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124528b4 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x124528bau);
  /* 124528ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124528bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124528bf call 0x12456510 */
  push32(0x124528c4u); f_12456510();
  /* 124528c4 mov esi, esp */
  ESI = (ESP);
  /* 124528c6 push 0x2bde */
  push32((uint32_t)(0x2bdeu));
  /* 124528cb push 0 */
  push32((uint32_t)(0x0u));
  /* 124528cd push 0 */
  push32((uint32_t)(0x0u));
  /* 124528cf call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x124528d5u);
  /* 124528d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124528d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124528da call 0x12456510 */
  push32(0x124528dfu); f_12456510();
  /* 124528df mov esi, esp */
  ESI = (ESP);
  /* 124528e1 push 0x109a */
  push32((uint32_t)(0x109au));
  /* 124528e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 124528e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124528ea call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x124528f0u);
  /* 124528f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124528f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124528f5 call 0x12456510 */
  push32(0x124528fau); f_12456510();
  /* 124528fa mov esi, esp */
  ESI = (ESP);
  /* 124528fc push 0x18786 */
  push32((uint32_t)(0x18786u));
  /* 12452901 push 3 */
  push32((uint32_t)(0x3u));
  /* 12452903 push 4 */
  push32((uint32_t)(0x4u));
  /* 12452905 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x1245290bu);
  /* 1245290b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245290e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452910 call 0x12456510 */
  push32(0x12452915u); f_12456510();
  /* 12452915 mov esi, esp */
  ESI = (ESP);
  /* 12452917 push 0x18844 */
  push32((uint32_t)(0x18844u));
  /* 1245291c push 1 */
  push32((uint32_t)(0x1u));
  /* 1245291e push 4 */
  push32((uint32_t)(0x4u));
  /* 12452920 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x12452926u);
  /* 12452926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245292b call 0x12456510 */
  push32(0x12452930u); f_12456510();
  /* 12452930 mov esi, esp */
  ESI = (ESP);
  /* 12452932 push 0xf4ef2 */
  push32((uint32_t)(0xf4ef2u));
  /* 12452937 push 4 */
  push32((uint32_t)(0x4u));
  /* 12452939 push 4 */
  push32((uint32_t)(0x4u));
  /* 1245293b call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x12452941u);
  /* 12452941 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452944 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452946 call 0x12456510 */
  push32(0x1245294bu); f_12456510();
  /* 1245294b mov esi, esp */
  ESI = (ESP);
  /* 1245294d push 0x1a964 */
  push32((uint32_t)(0x1a964u));
  /* 12452952 push 2 */
  push32((uint32_t)(0x2u));
  /* 12452954 push 4 */
  push32((uint32_t)(0x4u));
  /* 12452956 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x1245295cu);
  /* 1245295c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245295f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452961 call 0x12456510 */
  push32(0x12452966u); f_12456510();
  /* 12452966 mov esi, esp */
  ESI = (ESP);
  /* 12452968 push 0x18786 */
  push32((uint32_t)(0x18786u));
  /* 1245296d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245296f push 4 */
  push32((uint32_t)(0x4u));
  /* 12452971 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x12452977u);
  /* 12452977 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245297a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245297c call 0x12456510 */
  push32(0x12452981u); f_12456510();
  /* 12452981 mov esi, esp */
  ESI = (ESP);
  /* 12452983 push 0x1879a */
  push32((uint32_t)(0x1879au));
  /* 12452988 push 5 */
  push32((uint32_t)(0x5u));
  /* 1245298a push 4 */
  push32((uint32_t)(0x4u));
  /* 1245298c call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x12452992u);
  /* 12452992 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452995 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452997 call 0x12456510 */
  push32(0x1245299cu); f_12456510();
  /* 1245299c mov esi, esp */
  ESI = (ESP);
  /* 1245299e push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 124529a3 push 3 */
  push32((uint32_t)(0x3u));
  /* 124529a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 124529a7 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x124529adu);
  /* 124529ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124529b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124529b2 call 0x12456510 */
  push32(0x124529b7u); f_12456510();
  /* 124529b7 mov esi, esp */
  ESI = (ESP);
  /* 124529b9 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 124529be push 1 */
  push32((uint32_t)(0x1u));
  /* 124529c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 124529c2 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x124529c8u);
  /* 124529c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124529cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124529cd call 0x12456510 */
  push32(0x124529d2u); f_12456510();
  /* 124529d2 mov esi, esp */
  ESI = (ESP);
  /* 124529d4 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 124529d9 push 4 */
  push32((uint32_t)(0x4u));
  /* 124529db push 5 */
  push32((uint32_t)(0x5u));
  /* 124529dd call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x124529e3u);
  /* 124529e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124529e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124529e8 call 0x12456510 */
  push32(0x124529edu); f_12456510();
  /* 124529ed mov esi, esp */
  ESI = (ESP);
  /* 124529ef push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 124529f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 124529f6 push 5 */
  push32((uint32_t)(0x5u));
  /* 124529f8 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x124529feu);
  /* 124529fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452a03 call 0x12456510 */
  push32(0x12452a08u); f_12456510();
  /* 12452a08 mov esi, esp */
  ESI = (ESP);
  /* 12452a0a push 0x18786 */
  push32((uint32_t)(0x18786u));
  /* 12452a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12452a11 push 5 */
  push32((uint32_t)(0x5u));
  /* 12452a13 call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x12452a19u);
  /* 12452a19 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452a1e call 0x12456510 */
  push32(0x12452a23u); f_12456510();
  /* 12452a23 mov esi, esp */
  ESI = (ESP);
  /* 12452a25 push 0x1879a */
  push32((uint32_t)(0x1879au));
  /* 12452a2a push 5 */
  push32((uint32_t)(0x5u));
  /* 12452a2c push 5 */
  push32((uint32_t)(0x5u));
  /* 12452a2e call dword ptr [0x12486434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486434))), 0x12452a34u);
  /* 12452a34 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452a37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452a39 call 0x12456510 */
  push32(0x12452a3eu); f_12456510();
  /* 12452a3e mov esi, esp */
  ESI = (ESP);
  /* 12452a40 push 0x12483530 */
  push32((uint32_t)(0x12483530u));
  /* 12452a45 call dword ptr [0x12486438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486438))), 0x12452a4bu);
  /* 12452a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452a4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452a50 call 0x12456510 */
  push32(0x12452a55u); f_12456510();
  /* 12452a55 mov esi, esp */
  ESI = (ESP);
  /* 12452a57 push 0x12483540 */
  push32((uint32_t)(0x12483540u));
  /* 12452a5c call dword ptr [0x1248643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248643c))), 0x12452a62u);
  /* 12452a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452a67 call 0x12456510 */
  push32(0x12452a6cu); f_12456510();
  /* 12452a6c mov esi, esp */
  ESI = (ESP);
  /* 12452a6e push 0x12483538 */
  push32((uint32_t)(0x12483538u));
  /* 12452a73 call dword ptr [0x12486440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486440))), 0x12452a79u);
  /* 12452a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452a7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452a7e call 0x12456510 */
  push32(0x12452a83u); f_12456510();
  /* 12452a83 mov esi, esp */
  ESI = (ESP);
  /* 12452a85 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12452a8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12452a8c call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x12452a92u);
  /* 12452a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452a97 call 0x12456510 */
  push32(0x12452a9cu); f_12456510();
  /* 12452a9c mov esi, esp */
  ESI = (ESP);
  /* 12452a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12452aa0 push 3 */
  push32((uint32_t)(0x3u));
  /* 12452aa2 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452aa8u);
  /* 12452aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452aad call 0x12456510 */
  push32(0x12452ab2u); f_12456510();
  /* 12452ab2 mov esi, esp */
  ESI = (ESP);
  /* 12452ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452ab6 push 4 */
  push32((uint32_t)(0x4u));
  /* 12452ab8 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452abeu);
  /* 12452abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452ac3 call 0x12456510 */
  push32(0x12452ac8u); f_12456510();
  /* 12452ac8 mov esi, esp */
  ESI = (ESP);
  /* 12452aca push 0 */
  push32((uint32_t)(0x0u));
  /* 12452acc push 5 */
  push32((uint32_t)(0x5u));
  /* 12452ace call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452ad4u);
  /* 12452ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452ad9 call 0x12456510 */
  push32(0x12452adeu); f_12456510();
  /* 12452ade mov esi, esp */
  ESI = (ESP);
  /* 12452ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452ae2 push 6 */
  push32((uint32_t)(0x6u));
  /* 12452ae4 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452aeau);
  /* 12452aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452aed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452aef call 0x12456510 */
  push32(0x12452af4u); f_12456510();
  /* 12452af4 mov esi, esp */
  ESI = (ESP);
  /* 12452af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452af8 push 7 */
  push32((uint32_t)(0x7u));
  /* 12452afa call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452b00u);
  /* 12452b00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452b03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452b05 call 0x12456510 */
  push32(0x12452b0au); f_12456510();
  /* 12452b0a mov esi, esp */
  ESI = (ESP);
  /* 12452b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12452b0e push 8 */
  push32((uint32_t)(0x8u));
  /* 12452b10 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452b16u);
  /* 12452b16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452b19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452b1b call 0x12456510 */
  push32(0x12452b20u); f_12456510();
  /* 12452b20 mov esi, esp */
  ESI = (ESP);
  /* 12452b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 12452b26 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452b2cu);
  /* 12452b2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452b2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452b31 call 0x12456510 */
  push32(0x12452b36u); f_12456510();
  /* 12452b36 mov esi, esp */
  ESI = (ESP);
  /* 12452b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452b3a push 0xa */
  push32((uint32_t)(0xau));
  /* 12452b3c call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452b42u);
  /* 12452b42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452b45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452b47 call 0x12456510 */
  push32(0x12452b4cu); f_12456510();
  /* 12452b4c mov esi, esp */
  ESI = (ESP);
  /* 12452b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12452b50 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12452b52 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452b58u);
  /* 12452b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452b5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452b5d call 0x12456510 */
  push32(0x12452b62u); f_12456510();
  /* 12452b62 mov esi, esp */
  ESI = (ESP);
  /* 12452b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452b66 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12452b68 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452b6eu);
  /* 12452b6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452b71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452b73 call 0x12456510 */
  push32(0x12452b78u); f_12456510();
  /* 12452b78 mov esi, esp */
  ESI = (ESP);
  /* 12452b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12452b7c push 0xd */
  push32((uint32_t)(0xdu));
  /* 12452b7e call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452b84u);
  /* 12452b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452b87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452b89 call 0x12456510 */
  push32(0x12452b8eu); f_12456510();
  /* 12452b8e mov esi, esp */
  ESI = (ESP);
  /* 12452b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452b92 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12452b94 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452b9au);
  /* 12452b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452b9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452b9f call 0x12456510 */
  push32(0x12452ba4u); f_12456510();
  /* 12452ba4 mov esi, esp */
  ESI = (ESP);
  /* 12452ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452ba8 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12452baa call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452bb0u);
  /* 12452bb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452bb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452bb5 call 0x12456510 */
  push32(0x12452bbau); f_12456510();
  /* 12452bba mov esi, esp */
  ESI = (ESP);
  /* 12452bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12452bbe push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12452bc0 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452bc6u);
  /* 12452bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452bc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452bcb call 0x12456510 */
  push32(0x12452bd0u); f_12456510();
  /* 12452bd0 mov esi, esp */
  ESI = (ESP);
  /* 12452bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452bd4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12452bd6 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452bdcu);
  /* 12452bdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452bdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452be1 call 0x12456510 */
  push32(0x12452be6u); f_12456510();
  /* 12452be6 mov esi, esp */
  ESI = (ESP);
  /* 12452be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452bea push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12452bec call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452bf2u);
  /* 12452bf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452bf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452bf7 call 0x12456510 */
  push32(0x12452bfcu); f_12456510();
  /* 12452bfc mov esi, esp */
  ESI = (ESP);
  /* 12452bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12452c00 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12452c02 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452c08u);
  /* 12452c08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452c0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452c0d call 0x12456510 */
  push32(0x12452c12u); f_12456510();
  /* 12452c12 mov esi, esp */
  ESI = (ESP);
  /* 12452c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452c16 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12452c18 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452c1eu);
  /* 12452c1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452c21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452c23 call 0x12456510 */
  push32(0x12452c28u); f_12456510();
  /* 12452c28 mov esi, esp */
  ESI = (ESP);
  /* 12452c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12452c2c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12452c2e call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452c34u);
  /* 12452c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452c37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452c39 call 0x12456510 */
  push32(0x12452c3eu); f_12456510();
  /* 12452c3e mov esi, esp */
  ESI = (ESP);
  /* 12452c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452c42 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12452c44 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452c4au);
  /* 12452c4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452c4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452c4f call 0x12456510 */
  push32(0x12452c54u); f_12456510();
  /* 12452c54 mov esi, esp */
  ESI = (ESP);
  /* 12452c56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452c58 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12452c5a call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452c60u);
  /* 12452c60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452c63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452c65 call 0x12456510 */
  push32(0x12452c6au); f_12456510();
  /* 12452c6a mov esi, esp */
  ESI = (ESP);
  /* 12452c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12452c6e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12452c70 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452c76u);
  /* 12452c76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452c79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452c7b call 0x12456510 */
  push32(0x12452c80u); f_12456510();
  /* 12452c80 mov esi, esp */
  ESI = (ESP);
  /* 12452c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452c84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12452c86 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452c8cu);
  /* 12452c8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452c8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452c91 call 0x12456510 */
  push32(0x12452c96u); f_12456510();
  /* 12452c96 mov esi, esp */
  ESI = (ESP);
  /* 12452c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452c9a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12452c9c call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452ca2u);
  /* 12452ca2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452ca5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452ca7 call 0x12456510 */
  push32(0x12452cacu); f_12456510();
  /* 12452cac mov esi, esp */
  ESI = (ESP);
  /* 12452cae push 0 */
  push32((uint32_t)(0x0u));
  /* 12452cb0 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12452cb2 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452cb8u);
  /* 12452cb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452cbd call 0x12456510 */
  push32(0x12452cc2u); f_12456510();
  /* 12452cc2 mov esi, esp */
  ESI = (ESP);
  /* 12452cc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452cc6 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12452cc8 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452cceu);
  /* 12452cce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452cd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452cd3 call 0x12456510 */
  push32(0x12452cd8u); f_12456510();
  /* 12452cd8 mov esi, esp */
  ESI = (ESP);
  /* 12452cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12452cdc push 0x1d */
  push32((uint32_t)(0x1du));
  /* 12452cde call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452ce4u);
  /* 12452ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452ce9 call 0x12456510 */
  push32(0x12452ceeu); f_12456510();
  /* 12452cee mov esi, esp */
  ESI = (ESP);
  /* 12452cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452cf2 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12452cf4 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452cfau);
  /* 12452cfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452cfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452cff call 0x12456510 */
  push32(0x12452d04u); f_12456510();
  /* 12452d04 mov esi, esp */
  ESI = (ESP);
  /* 12452d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452d08 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12452d0a call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452d10u);
  /* 12452d10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452d15 call 0x12456510 */
  push32(0x12452d1au); f_12456510();
  /* 12452d1a mov esi, esp */
  ESI = (ESP);
  /* 12452d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12452d1e push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12452d20 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452d26u);
  /* 12452d26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452d29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452d2b call 0x12456510 */
  push32(0x12452d30u); f_12456510();
  /* 12452d30 mov esi, esp */
  ESI = (ESP);
  /* 12452d32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452d34 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12452d36 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452d3cu);
  /* 12452d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452d41 call 0x12456510 */
  push32(0x12452d46u); f_12456510();
  /* 12452d46 mov esi, esp */
  ESI = (ESP);
  /* 12452d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452d4a push 0x22 */
  push32((uint32_t)(0x22u));
  /* 12452d4c call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452d52u);
  /* 12452d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452d55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452d57 call 0x12456510 */
  push32(0x12452d5cu); f_12456510();
  /* 12452d5c mov esi, esp */
  ESI = (ESP);
  /* 12452d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12452d60 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12452d62 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452d68u);
  /* 12452d68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452d6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452d6d call 0x12456510 */
  push32(0x12452d72u); f_12456510();
  /* 12452d72 mov esi, esp */
  ESI = (ESP);
  /* 12452d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452d76 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12452d78 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452d7eu);
  /* 12452d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452d81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452d83 call 0x12456510 */
  push32(0x12452d88u); f_12456510();
  /* 12452d88 mov esi, esp */
  ESI = (ESP);
  /* 12452d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12452d8c push 0x25 */
  push32((uint32_t)(0x25u));
  /* 12452d8e call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452d94u);
  /* 12452d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452d99 call 0x12456510 */
  push32(0x12452d9eu); f_12456510();
  /* 12452d9e mov esi, esp */
  ESI = (ESP);
  /* 12452da0 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12452da2 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452da8u);
  /* 12452da8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452dab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452dad call 0x12456510 */
  push32(0x12452db2u); f_12456510();
  /* 12452db2 mov esi, esp */
  ESI = (ESP);
  /* 12452db4 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12452db6 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452dbcu);
  /* 12452dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452dbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452dc1 call 0x12456510 */
  push32(0x12452dc6u); f_12456510();
  /* 12452dc6 mov esi, esp */
  ESI = (ESP);
  /* 12452dc8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12452dca call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452dd0u);
  /* 12452dd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452dd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452dd5 call 0x12456510 */
  push32(0x12452ddau); f_12456510();
  /* 12452dda mov esi, esp */
  ESI = (ESP);
  /* 12452ddc push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12452dde call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452de4u);
  /* 12452de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452de7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452de9 call 0x12456510 */
  push32(0x12452deeu); f_12456510();
  /* 12452dee mov esi, esp */
  ESI = (ESP);
  /* 12452df0 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12452df2 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452df8u);
  /* 12452df8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452dfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452dfd call 0x12456510 */
  push32(0x12452e02u); f_12456510();
  /* 12452e02 mov esi, esp */
  ESI = (ESP);
  /* 12452e04 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12452e06 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452e0cu);
  /* 12452e0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452e0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452e11 call 0x12456510 */
  push32(0x12452e16u); f_12456510();
  /* 12452e16 mov esi, esp */
  ESI = (ESP);
  /* 12452e18 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12452e1a call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452e20u);
  /* 12452e20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452e23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452e25 call 0x12456510 */
  push32(0x12452e2au); f_12456510();
  /* 12452e2a mov esi, esp */
  ESI = (ESP);
  /* 12452e2c push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12452e2e call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452e34u);
  /* 12452e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452e37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452e39 call 0x12456510 */
  push32(0x12452e3eu); f_12456510();
  /* 12452e3e mov esi, esp */
  ESI = (ESP);
  /* 12452e40 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12452e42 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452e48u);
  /* 12452e48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452e4d call 0x12456510 */
  push32(0x12452e52u); f_12456510();
  /* 12452e52 mov esi, esp */
  ESI = (ESP);
  /* 12452e54 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12452e56 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452e5cu);
  /* 12452e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452e5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452e61 call 0x12456510 */
  push32(0x12452e66u); f_12456510();
  /* 12452e66 mov esi, esp */
  ESI = (ESP);
  /* 12452e68 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12452e6a call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452e70u);
  /* 12452e70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452e73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452e75 call 0x12456510 */
  push32(0x12452e7au); f_12456510();
  /* 12452e7a mov esi, esp */
  ESI = (ESP);
  /* 12452e7c push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12452e7e call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452e84u);
  /* 12452e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452e87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452e89 call 0x12456510 */
  push32(0x12452e8eu); f_12456510();
  /* 12452e8e mov esi, esp */
  ESI = (ESP);
  /* 12452e90 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12452e92 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452e98u);
  /* 12452e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452e9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452e9d call 0x12456510 */
  push32(0x12452ea2u); f_12456510();
  /* 12452ea2 mov esi, esp */
  ESI = (ESP);
  /* 12452ea4 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12452ea6 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12452eacu);
  /* 12452eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452eaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452eb1 call 0x12456510 */
  push32(0x12452eb6u); f_12456510();
L_12452eb6:;
  /* 12452eb6 mov esi, esp */
  ESI = (ESP);
  /* 12452eb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12452eba call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12452ec0u);
  /* 12452ec0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452ec3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452ec5 call 0x12456510 */
  push32(0x12452ecau); f_12456510();
  /* 12452eca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12452ecf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12452ed1 je 0x12452f7f */
  if (C.zf) goto L_12452f7f;
  /* 12452ed7 mov esi, esp */
  ESI = (ESP);
  /* 12452ed9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12452edb call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x12452ee1u);
  /* 12452ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452ee6 call 0x12456510 */
  push32(0x12452eebu); f_12456510();
  /* 12452eeb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12452ef0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12452ef2 je 0x12452f7f */
  if (C.zf) goto L_12452f7f;
  /* 12452ef8 mov esi, esp */
  ESI = (ESP);
  /* 12452efa push 0 */
  push32((uint32_t)(0x0u));
  /* 12452efc push 2 */
  push32((uint32_t)(0x2u));
  /* 12452efe call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452f04u);
  /* 12452f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452f09 call 0x12456510 */
  push32(0x12452f0eu); f_12456510();
  /* 12452f0e mov esi, esp */
  ESI = (ESP);
  /* 12452f10 push 0x1247e800 */
  push32((uint32_t)(0x1247e800u));
  /* 12452f15 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12452f1bu);
  /* 12452f1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452f1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452f20 call 0x12456510 */
  push32(0x12452f25u); f_12456510();
  /* 12452f25 mov esi, esp */
  ESI = (ESP);
  /* 12452f27 push 0x1247e7f4 */
  push32((uint32_t)(0x1247e7f4u));
  /* 12452f2c call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12452f32u);
  /* 12452f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452f35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452f37 call 0x12456510 */
  push32(0x12452f3cu); f_12456510();
  /* 12452f3c mov esi, esp */
  ESI = (ESP);
  /* 12452f3e push 0x1247e7e8 */
  push32((uint32_t)(0x1247e7e8u));
  /* 12452f43 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12452f49u);
  /* 12452f49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452f4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452f4e call 0x12456510 */
  push32(0x12452f53u); f_12456510();
  /* 12452f53 mov esi, esp */
  ESI = (ESP);
  /* 12452f55 push 1 */
  push32((uint32_t)(0x1u));
  /* 12452f57 push 3 */
  push32((uint32_t)(0x3u));
  /* 12452f59 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452f5fu);
  /* 12452f5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452f64 call 0x12456510 */
  push32(0x12452f69u); f_12456510();
  /* 12452f69 mov esi, esp */
  ESI = (ESP);
  /* 12452f6b push 1 */
  push32((uint32_t)(0x1u));
  /* 12452f6d push 4 */
  push32((uint32_t)(0x4u));
  /* 12452f6f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12452f75u);
  /* 12452f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452f7a call 0x12456510 */
  push32(0x12452f7fu); f_12456510();
L_12452f7f:;
  /* 12452f7f mov esi, esp */
  ESI = (ESP);
  /* 12452f81 push 3 */
  push32((uint32_t)(0x3u));
  /* 12452f83 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12452f89u);
  /* 12452f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452f8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452f8e call 0x12456510 */
  push32(0x12452f93u); f_12456510();
  /* 12452f93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12452f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12452f9a je 0x12452fb7 */
  if (C.zf) goto L_12452fb7;
  /* 12452f9c mov esi, esp */
  ESI = (ESP);
  /* 12452f9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12452fa0 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12452fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12452fa7 call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x12452fadu);
  /* 12452fad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452fb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452fb2 call 0x12456510 */
  push32(0x12452fb7u); f_12456510();
L_12452fb7:;
  /* 12452fb7 mov esi, esp */
  ESI = (ESP);
  /* 12452fb9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12452fbb call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12452fc1u);
  /* 12452fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452fc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452fc6 call 0x12456510 */
  push32(0x12452fcbu); f_12456510();
  /* 12452fcb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12452fd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12452fd2 je 0x124530fa */
  if (C.zf) goto L_124530fa;
  /* 12452fd8 mov esi, esp */
  ESI = (ESP);
  /* 12452fda push 0 */
  push32((uint32_t)(0x0u));
  /* 12452fdc push 0x124833e8 */
  push32((uint32_t)(0x124833e8u));
  /* 12452fe1 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12452fe6 call dword ptr [0x12486458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486458))), 0x12452fecu);
  /* 12452fec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12452fef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12452ff1 call 0x12456510 */
  push32(0x12452ff6u); f_12456510();
  /* 12452ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12452ff8 jle 0x124530fa */
  if ((C.zf||C.sf!=C.of)) goto L_124530fa;
  /* 12452ffe mov esi, esp */
  ESI = (ESP);
  /* 12453000 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453002 push 3 */
  push32((uint32_t)(0x3u));
  /* 12453004 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245300au);
  /* 1245300a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245300d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245300f call 0x12456510 */
  push32(0x12453014u); f_12456510();
  /* 12453014 mov esi, esp */
  ESI = (ESP);
  /* 12453016 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453018 push 4 */
  push32((uint32_t)(0x4u));
  /* 1245301a call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453020u);
  /* 12453020 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453023 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453025 call 0x12456510 */
  push32(0x1245302au); f_12456510();
  /* 1245302a mov esi, esp */
  ESI = (ESP);
  /* 1245302c push 0x1247e7e0 */
  push32((uint32_t)(0x1247e7e0u));
  /* 12453031 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453037u);
  /* 12453037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245303a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245303c call 0x12456510 */
  push32(0x12453041u); f_12456510();
  /* 12453041 mov esi, esp */
  ESI = (ESP);
  /* 12453043 push 0x1247e7d4 */
  push32((uint32_t)(0x1247e7d4u));
  /* 12453048 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x1245304eu);
  /* 1245304e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453051 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453053 call 0x12456510 */
  push32(0x12453058u); f_12456510();
  /* 12453058 mov esi, esp */
  ESI = (ESP);
  /* 1245305a push 0x12483660 */
  push32((uint32_t)(0x12483660u));
  /* 1245305f push 0 */
  push32((uint32_t)(0x0u));
  /* 12453061 call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x12453067u);
  /* 12453067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245306a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245306c call 0x12456510 */
  push32(0x12453071u); f_12456510();
  /* 12453071 mov esi, esp */
  ESI = (ESP);
  /* 12453073 push 0x12483680 */
  push32((uint32_t)(0x12483680u));
  /* 12453078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245307a call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x12453080u);
  /* 12453080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453083 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453085 call 0x12456510 */
  push32(0x1245308au); f_12456510();
  /* 1245308a mov esi, esp */
  ESI = (ESP);
  /* 1245308c push 0x124836a0 */
  push32((uint32_t)(0x124836a0u));
  /* 12453091 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453093 call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x12453099u);
  /* 12453099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245309c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245309e call 0x12456510 */
  push32(0x124530a3u); f_12456510();
  /* 124530a3 mov esi, esp */
  ESI = (ESP);
  /* 124530a5 push 0x124836b8 */
  push32((uint32_t)(0x124836b8u));
  /* 124530aa push 0 */
  push32((uint32_t)(0x0u));
  /* 124530ac call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x124530b2u);
  /* 124530b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124530b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124530b7 call 0x12456510 */
  push32(0x124530bcu); f_12456510();
  /* 124530bc mov esi, esp */
  ESI = (ESP);
  /* 124530be push 0x41 */
  push32((uint32_t)(0x41u));
  /* 124530c0 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x124530c6u);
  /* 124530c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124530c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124530cb call 0x12456510 */
  push32(0x124530d0u); f_12456510();
  /* 124530d0 mov esi, esp */
  ESI = (ESP);
  /* 124530d2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 124530d4 call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x124530dau);
  /* 124530da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124530dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124530df call 0x12456510 */
  push32(0x124530e4u); f_12456510();
  /* 124530e4 mov esi, esp */
  ESI = (ESP);
  /* 124530e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124530e8 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 124530ea call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124530f0u);
  /* 124530f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124530f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124530f5 call 0x12456510 */
  push32(0x124530fau); f_12456510();
L_124530fa:;
  /* 124530fa mov esi, esp */
  ESI = (ESP);
  /* 124530fc push 0x1a */
  push32((uint32_t)(0x1au));
  /* 124530fe call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453104u);
  /* 12453104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453107 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453109 call 0x12456510 */
  push32(0x1245310eu); f_12456510();
  /* 1245310e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453113 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453115 je 0x124531eb */
  if (C.zf) goto L_124531eb;
  /* 1245311b mov esi, esp */
  ESI = (ESP);
  /* 1245311d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245311f push 0x12483740 */
  push32((uint32_t)(0x12483740u));
  /* 12453124 call dword ptr [0x12486464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486464))), 0x1245312au);
  /* 1245312a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245312d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245312f call 0x12456510 */
  push32(0x12453134u); f_12456510();
  /* 12453134 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245313b je 0x124531eb */
  if (C.zf) goto L_124531eb;
  /* 12453141 mov esi, esp */
  ESI = (ESP);
  /* 12453143 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453145 push 0x12483758 */
  push32((uint32_t)(0x12483758u));
  /* 1245314a call dword ptr [0x12486464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486464))), 0x12453150u);
  /* 12453150 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453155 call 0x12456510 */
  push32(0x1245315au); f_12456510();
  /* 1245315a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245315f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453161 je 0x124531eb */
  if (C.zf) goto L_124531eb;
  /* 12453167 mov esi, esp */
  ESI = (ESP);
  /* 12453169 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245316b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1245316d call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453173u);
  /* 12453173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453176 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453178 call 0x12456510 */
  push32(0x1245317du); f_12456510();
  /* 1245317d mov esi, esp */
  ESI = (ESP);
  /* 1245317f push 0x1247e7c8 */
  push32((uint32_t)(0x1247e7c8u));
  /* 12453184 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x1245318au);
  /* 1245318a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245318d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245318f call 0x12456510 */
  push32(0x12453194u); f_12456510();
  /* 12453194 mov esi, esp */
  ESI = (ESP);
  /* 12453196 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12453198 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x1245319eu);
  /* 1245319e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124531a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124531a3 call 0x12456510 */
  push32(0x124531a8u); f_12456510();
  /* 124531a8 mov esi, esp */
  ESI = (ESP);
  /* 124531aa push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 124531ac call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x124531b2u);
  /* 124531b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124531b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124531b7 call 0x12456510 */
  push32(0x124531bcu); f_12456510();
  /* 124531bc mov esi, esp */
  ESI = (ESP);
  /* 124531be push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 124531c3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124531c5 call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x124531cbu);
  /* 124531cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124531ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124531d0 call 0x12456510 */
  push32(0x124531d5u); f_12456510();
  /* 124531d5 mov esi, esp */
  ESI = (ESP);
  /* 124531d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 124531d9 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 124531db call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124531e1u);
  /* 124531e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124531e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124531e6 call 0x12456510 */
  push32(0x124531ebu); f_12456510();
L_124531eb:;
  /* 124531eb mov esi, esp */
  ESI = (ESP);
  /* 124531ed push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 124531ef call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124531f5u);
  /* 124531f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124531f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124531fa call 0x12456510 */
  push32(0x124531ffu); f_12456510();
  /* 124531ff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453206 je 0x12453319 */
  if (C.zf) goto L_12453319;
  /* 1245320c mov esi, esp */
  ESI = (ESP);
  /* 1245320e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12453210 call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x12453216u);
  /* 12453216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453219 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245321b call 0x12456510 */
  push32(0x12453220u); f_12456510();
  /* 12453220 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453227 je 0x12453319 */
  if (C.zf) goto L_12453319;
  /* 1245322d mov esi, esp */
  ESI = (ESP);
  /* 1245322f push 0 */
  push32((uint32_t)(0x0u));
  /* 12453231 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12453236 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453238 call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x1245323eu);
  /* 1245323e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453243 call 0x12456510 */
  push32(0x12453248u); f_12456510();
  /* 12453248 mov esi, esp */
  ESI = (ESP);
  /* 1245324a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245324c call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x12453252u);
  /* 12453252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453257 call 0x12456510 */
  push32(0x1245325cu); f_12456510();
  /* 1245325c mov esi, esp */
  ESI = (ESP);
  /* 1245325e push 0 */
  push32((uint32_t)(0x0u));
  /* 12453260 push 0x12483560 */
  push32((uint32_t)(0x12483560u));
  /* 12453265 push 5 */
  push32((uint32_t)(0x5u));
  /* 12453267 push 0x12483428 */
  push32((uint32_t)(0x12483428u));
  /* 1245326c push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 12453271 push 0x12483508 */
  push32((uint32_t)(0x12483508u));
  /* 12453276 call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x1245327cu);
  /* 1245327c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245327f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453281 call 0x12456510 */
  push32(0x12453286u); f_12456510();
  /* 12453286 mov esi, esp */
  ESI = (ESP);
  /* 12453288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245328a push 0x12483508 */
  push32((uint32_t)(0x12483508u));
  /* 1245328f push 5 */
  push32((uint32_t)(0x5u));
  /* 12453291 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12453297u);
  /* 12453297 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245329a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245329c call 0x12456510 */
  push32(0x124532a1u); f_12456510();
  /* 124532a1 mov esi, esp */
  ESI = (ESP);
  /* 124532a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124532a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124532a7 push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 124532ac push 5 */
  push32((uint32_t)(0x5u));
  /* 124532ae call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x124532b4u);
  /* 124532b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124532b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124532b9 call 0x12456510 */
  push32(0x124532beu); f_12456510();
  /* 124532be mov esi, esp */
  ESI = (ESP);
  /* 124532c0 push 5 */
  push32((uint32_t)(0x5u));
  /* 124532c2 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x124532c8u);
  /* 124532c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124532cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124532cd call 0x12456510 */
  push32(0x124532d2u); f_12456510();
  /* 124532d2 mov esi, esp */
  ESI = (ESP);
  /* 124532d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124532d6 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 124532db push 0 */
  push32((uint32_t)(0x0u));
  /* 124532dd call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x124532e3u);
  /* 124532e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124532e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124532e8 call 0x12456510 */
  push32(0x124532edu); f_12456510();
  /* 124532ed mov esi, esp */
  ESI = (ESP);
  /* 124532ef push 0 */
  push32((uint32_t)(0x0u));
  /* 124532f1 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 124532f3 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124532f9u);
  /* 124532f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124532fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124532fe call 0x12456510 */
  push32(0x12453303u); f_12456510();
  /* 12453303 mov esi, esp */
  ESI = (ESP);
  /* 12453305 push 1 */
  push32((uint32_t)(0x1u));
  /* 12453307 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12453309 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245330fu);
  /* 1245330f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453312 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453314 call 0x12456510 */
  push32(0x12453319u); f_12456510();
L_12453319:;
  /* 12453319 mov esi, esp */
  ESI = (ESP);
  /* 1245331b push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1245331d call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453323u);
  /* 12453323 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453326 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453328 call 0x12456510 */
  push32(0x1245332du); f_12456510();
  /* 1245332d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453332 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453334 je 0x124533f1 */
  if (C.zf) goto L_124533f1;
  /* 1245333a mov esi, esp */
  ESI = (ESP);
  /* 1245333c push 0x12483508 */
  push32((uint32_t)(0x12483508u));
  /* 12453341 call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x12453347u);
  /* 12453347 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245334a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245334c call 0x12456510 */
  push32(0x12453351u); f_12456510();
  /* 12453351 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453353 jne 0x124533f1 */
  if (!C.zf) goto L_124533f1;
  /* 12453359 mov esi, esp */
  ESI = (ESP);
  /* 1245335b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245335d push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 1245335f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453365u);
  /* 12453365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245336a call 0x12456510 */
  push32(0x1245336fu); f_12456510();
  /* 1245336f mov esi, esp */
  ESI = (ESP);
  /* 12453371 push 0x1247e7bc */
  push32((uint32_t)(0x1247e7bcu));
  /* 12453376 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x1245337cu);
  /* 1245337c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245337f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453381 call 0x12456510 */
  push32(0x12453386u); f_12456510();
  /* 12453386 mov esi, esp */
  ESI = (ESP);
  /* 12453388 push 0x1247e7b0 */
  push32((uint32_t)(0x1247e7b0u));
  /* 1245338d call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453393u);
  /* 12453393 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453396 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453398 call 0x12456510 */
  push32(0x1245339du); f_12456510();
  /* 1245339d mov esi, esp */
  ESI = (ESP);
  /* 1245339f push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 124533a1 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x124533a7u);
  /* 124533a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124533aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124533ac call 0x12456510 */
  push32(0x124533b1u); f_12456510();
  /* 124533b1 mov esi, esp */
  ESI = (ESP);
  /* 124533b3 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 124533b5 call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x124533bbu);
  /* 124533bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124533be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124533c0 call 0x12456510 */
  push32(0x124533c5u); f_12456510();
  /* 124533c5 mov esi, esp */
  ESI = (ESP);
  /* 124533c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 124533c9 push 5 */
  push32((uint32_t)(0x5u));
  /* 124533cb call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124533d1u);
  /* 124533d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124533d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124533d6 call 0x12456510 */
  push32(0x124533dbu); f_12456510();
  /* 124533db mov esi, esp */
  ESI = (ESP);
  /* 124533dd push 1 */
  push32((uint32_t)(0x1u));
  /* 124533df push 6 */
  push32((uint32_t)(0x6u));
  /* 124533e1 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124533e7u);
  /* 124533e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124533ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124533ec call 0x12456510 */
  push32(0x124533f1u); f_12456510();
L_124533f1:;
  /* 124533f1 mov esi, esp */
  ESI = (ESP);
  /* 124533f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 124533f5 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124533fbu);
  /* 124533fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124533fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453400 call 0x12456510 */
  push32(0x12453405u); f_12456510();
  /* 12453405 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245340a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245340c je 0x12453429 */
  if (C.zf) goto L_12453429;
  /* 1245340e mov esi, esp */
  ESI = (ESP);
  /* 12453410 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453412 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12453417 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453419 call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x1245341fu);
  /* 1245341f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453424 call 0x12456510 */
  push32(0x12453429u); f_12456510();
L_12453429:;
  /* 12453429 mov esi, esp */
  ESI = (ESP);
  /* 1245342b push 6 */
  push32((uint32_t)(0x6u));
  /* 1245342d call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453433u);
  /* 12453433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453438 call 0x12456510 */
  push32(0x1245343du); f_12456510();
  /* 1245343d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453442 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453444 je 0x124534f6 */
  if (C.zf) goto L_124534f6;
  /* 1245344a mov esi, esp */
  ESI = (ESP);
  /* 1245344c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245344e push 0x124834b0 */
  push32((uint32_t)(0x124834b0u));
  /* 12453453 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12453458 call dword ptr [0x12486458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486458))), 0x1245345eu);
  /* 1245345e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453461 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453463 call 0x12456510 */
  push32(0x12453468u); f_12456510();
  /* 12453468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245346a jle 0x124534f6 */
  if ((C.zf||C.sf!=C.of)) goto L_124534f6;
  /* 12453470 mov esi, esp */
  ESI = (ESP);
  /* 12453472 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453474 push 5 */
  push32((uint32_t)(0x5u));
  /* 12453476 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245347cu);
  /* 1245347c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245347f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453481 call 0x12456510 */
  push32(0x12453486u); f_12456510();
  /* 12453486 mov esi, esp */
  ESI = (ESP);
  /* 12453488 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245348a push 6 */
  push32((uint32_t)(0x6u));
  /* 1245348c call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453492u);
  /* 12453492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453495 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453497 call 0x12456510 */
  push32(0x1245349cu); f_12456510();
  /* 1245349c mov esi, esp */
  ESI = (ESP);
  /* 1245349e push 0x1247e7a8 */
  push32((uint32_t)(0x1247e7a8u));
  /* 124534a3 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x124534a9u);
  /* 124534a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124534ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124534ae call 0x12456510 */
  push32(0x124534b3u); f_12456510();
  /* 124534b3 mov esi, esp */
  ESI = (ESP);
  /* 124534b5 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 124534b7 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x124534bdu);
  /* 124534bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124534c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124534c2 call 0x12456510 */
  push32(0x124534c7u); f_12456510();
  /* 124534c7 mov esi, esp */
  ESI = (ESP);
  /* 124534c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 124534cb push 0x1d */
  push32((uint32_t)(0x1du));
  /* 124534cd call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124534d3u);
  /* 124534d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124534d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124534d8 call 0x12456510 */
  push32(0x124534ddu); f_12456510();
  /* 124534dd mov esi, esp */
  ESI = (ESP);
  /* 124534df push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 124534e4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 124534e6 call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x124534ecu);
  /* 124534ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124534ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124534f1 call 0x12456510 */
  push32(0x124534f6u); f_12456510();
L_124534f6:;
  /* 124534f6 mov esi, esp */
  ESI = (ESP);
  /* 124534f8 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 124534fa call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453500u);
  /* 12453500 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453503 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453505 call 0x12456510 */
  push32(0x1245350au); f_12456510();
  /* 1245350a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245350f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453511 je 0x124535da */
  if (C.zf) goto L_124535da;
  /* 12453517 mov esi, esp */
  ESI = (ESP);
  /* 12453519 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1245351b call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x12453521u);
  /* 12453521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453524 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453526 call 0x12456510 */
  push32(0x1245352bu); f_12456510();
  /* 1245352b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453530 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453532 je 0x124535da */
  if (C.zf) goto L_124535da;
  /* 12453538 mov esi, esp */
  ESI = (ESP);
  /* 1245353a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245353c push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1245353e call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453544u);
  /* 12453544 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453547 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453549 call 0x12456510 */
  push32(0x1245354eu); f_12456510();
  /* 1245354e mov esi, esp */
  ESI = (ESP);
  /* 12453550 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12453555 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12453557 call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x1245355du);
  /* 1245355d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453560 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453562 call 0x12456510 */
  push32(0x12453567u); f_12456510();
  /* 12453567 mov esi, esp */
  ESI = (ESP);
  /* 12453569 push 0x1247e79c */
  push32((uint32_t)(0x1247e79cu));
  /* 1245356e call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453574u);
  /* 12453574 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453579 call 0x12456510 */
  push32(0x1245357eu); f_12456510();
  /* 1245357e mov esi, esp */
  ESI = (ESP);
  /* 12453580 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12453582 call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x12453588u);
  /* 12453588 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245358b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245358d call 0x12456510 */
  push32(0x12453592u); f_12456510();
  /* 12453592 mov esi, esp */
  ESI = (ESP);
  /* 12453594 push 0x12483598 */
  push32((uint32_t)(0x12483598u));
  /* 12453599 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245359b call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x124535a1u);
  /* 124535a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124535a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124535a6 call 0x12456510 */
  push32(0x124535abu); f_12456510();
  /* 124535ab mov esi, esp */
  ESI = (ESP);
  /* 124535ad push 0x124835a0 */
  push32((uint32_t)(0x124835a0u));
  /* 124535b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124535b4 call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x124535bau);
  /* 124535ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124535bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124535bf call 0x12456510 */
  push32(0x124535c4u); f_12456510();
  /* 124535c4 mov esi, esp */
  ESI = (ESP);
  /* 124535c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124535c8 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 124535ca call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124535d0u);
  /* 124535d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124535d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124535d5 call 0x12456510 */
  push32(0x124535dau); f_12456510();
L_124535da:;
  /* 124535da mov esi, esp */
  ESI = (ESP);
  /* 124535dc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 124535de call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124535e4u);
  /* 124535e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124535e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124535e9 call 0x12456510 */
  push32(0x124535eeu); f_12456510();
  /* 124535ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124535f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124535f5 je 0x12453688 */
  if (C.zf) goto L_12453688;
  /* 124535fb mov esi, esp */
  ESI = (ESP);
  /* 124535fd push 0xd */
  push32((uint32_t)(0xdu));
  /* 124535ff call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x12453605u);
  /* 12453605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453608 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245360a call 0x12456510 */
  push32(0x1245360fu); f_12456510();
  /* 1245360f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453616 je 0x12453688 */
  if (C.zf) goto L_12453688;
  /* 12453618 mov esi, esp */
  ESI = (ESP);
  /* 1245361a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245361c push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1245361e call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453624u);
  /* 12453624 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453629 call 0x12456510 */
  push32(0x1245362eu); f_12456510();
  /* 1245362e mov esi, esp */
  ESI = (ESP);
  /* 12453630 push 0x1247e790 */
  push32((uint32_t)(0x1247e790u));
  /* 12453635 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x1245363bu);
  /* 1245363b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245363e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453640 call 0x12456510 */
  push32(0x12453645u); f_12456510();
  /* 12453645 mov esi, esp */
  ESI = (ESP);
  /* 12453647 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12453649 call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x1245364fu);
  /* 1245364f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453654 call 0x12456510 */
  push32(0x12453659u); f_12456510();
  /* 12453659 mov esi, esp */
  ESI = (ESP);
  /* 1245365b push 1 */
  push32((uint32_t)(0x1u));
  /* 1245365d push 7 */
  push32((uint32_t)(0x7u));
  /* 1245365f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453665u);
  /* 12453665 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245366a call 0x12456510 */
  push32(0x1245366fu); f_12456510();
  /* 1245366f mov esi, esp */
  ESI = (ESP);
  /* 12453671 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12453676 push 2 */
  push32((uint32_t)(0x2u));
  /* 12453678 call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x1245367eu);
  /* 1245367e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453683 call 0x12456510 */
  push32(0x12453688u); f_12456510();
L_12453688:;
  /* 12453688 mov esi, esp */
  ESI = (ESP);
  /* 1245368a push 7 */
  push32((uint32_t)(0x7u));
  /* 1245368c call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453692u);
  /* 12453692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453695 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453697 call 0x12456510 */
  push32(0x1245369cu); f_12456510();
  /* 1245369c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124536a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124536a3 je 0x12453782 */
  if (C.zf) goto L_12453782;
  /* 124536a9 mov esi, esp */
  ESI = (ESP);
  /* 124536ab push 2 */
  push32((uint32_t)(0x2u));
  /* 124536ad call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x124536b3u);
  /* 124536b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124536b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124536b8 call 0x12456510 */
  push32(0x124536bdu); f_12456510();
  /* 124536bd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124536c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124536c4 je 0x12453782 */
  if (C.zf) goto L_12453782;
  /* 124536ca mov esi, esp */
  ESI = (ESP);
  /* 124536cc push 0 */
  push32((uint32_t)(0x0u));
  /* 124536ce push 7 */
  push32((uint32_t)(0x7u));
  /* 124536d0 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124536d6u);
  /* 124536d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124536d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124536db call 0x12456510 */
  push32(0x124536e0u); f_12456510();
  /* 124536e0 mov esi, esp */
  ESI = (ESP);
  /* 124536e2 push 0x1247e788 */
  push32((uint32_t)(0x1247e788u));
  /* 124536e7 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x124536edu);
  /* 124536ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124536f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124536f2 call 0x12456510 */
  push32(0x124536f7u); f_12456510();
  /* 124536f7 mov esi, esp */
  ESI = (ESP);
  /* 124536f9 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 124536fb call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12453701u);
  /* 12453701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453704 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453706 call 0x12456510 */
  push32(0x1245370bu); f_12456510();
  /* 1245370b mov esi, esp */
  ESI = (ESP);
  /* 1245370d push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1245370f call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x12453715u);
  /* 12453715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453718 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245371a call 0x12456510 */
  push32(0x1245371fu); f_12456510();
  /* 1245371f mov esi, esp */
  ESI = (ESP);
  /* 12453721 push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 12453726 push 1 */
  push32((uint32_t)(0x1u));
  /* 12453728 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245372a call dword ptr [0x1248647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248647c))), 0x12453730u);
  /* 12453730 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453733 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453735 call 0x12456510 */
  push32(0x1245373au); f_12456510();
  /* 1245373a mov esi, esp */
  ESI = (ESP);
  /* 1245373c push 0x124835a8 */
  push32((uint32_t)(0x124835a8u));
  /* 12453741 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453743 call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x12453749u);
  /* 12453749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245374c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245374e call 0x12456510 */
  push32(0x12453753u); f_12456510();
  /* 12453753 mov esi, esp */
  ESI = (ESP);
  /* 12453755 push 0x124836f0 */
  push32((uint32_t)(0x124836f0u));
  /* 1245375a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245375c call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x12453762u);
  /* 12453762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453765 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453767 call 0x12456510 */
  push32(0x1245376cu); f_12456510();
  /* 1245376c mov esi, esp */
  ESI = (ESP);
  /* 1245376e push 1 */
  push32((uint32_t)(0x1u));
  /* 12453770 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12453772 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453778u);
  /* 12453778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245377b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245377d call 0x12456510 */
  push32(0x12453782u); f_12456510();
L_12453782:;
  /* 12453782 mov esi, esp */
  ESI = (ESP);
  /* 12453784 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12453786 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245378cu);
  /* 1245378c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245378f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453791 call 0x12456510 */
  push32(0x12453796u); f_12456510();
  /* 12453796 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245379b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245379d je 0x12453897 */
  if (C.zf) goto L_12453897;
  /* 124537a3 mov esi, esp */
  ESI = (ESP);
  /* 124537a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124537a7 push 0x124835a8 */
  push32((uint32_t)(0x124835a8u));
  /* 124537ac call dword ptr [0x12486464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486464))), 0x124537b2u);
  /* 124537b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124537b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124537b7 call 0x12456510 */
  push32(0x124537bcu); f_12456510();
  /* 124537bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124537c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124537c3 jne 0x124537eb */
  if (!C.zf) goto L_124537eb;
  /* 124537c5 mov esi, esp */
  ESI = (ESP);
  /* 124537c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124537c9 push 0x124836f0 */
  push32((uint32_t)(0x124836f0u));
  /* 124537ce call dword ptr [0x12486464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486464))), 0x124537d4u);
  /* 124537d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124537d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124537d9 call 0x12456510 */
  push32(0x124537deu); f_12456510();
  /* 124537de and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124537e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124537e5 je 0x12453897 */
  if (C.zf) goto L_12453897;
L_124537eb:;
  /* 124537eb mov esi, esp */
  ESI = (ESP);
  /* 124537ed push 0 */
  push32((uint32_t)(0x0u));
  /* 124537ef push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 124537f1 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124537f7u);
  /* 124537f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124537fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124537fc call 0x12456510 */
  push32(0x12453801u); f_12456510();
  /* 12453801 mov esi, esp */
  ESI = (ESP);
  /* 12453803 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12453805 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x1245380bu);
  /* 1245380b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245380e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453810 call 0x12456510 */
  push32(0x12453815u); f_12456510();
  /* 12453815 mov esi, esp */
  ESI = (ESP);
  /* 12453817 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12453819 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x1245381fu);
  /* 1245381f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453822 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453824 call 0x12456510 */
  push32(0x12453829u); f_12456510();
  /* 12453829 mov esi, esp */
  ESI = (ESP);
  /* 1245382b push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1245382d call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x12453833u);
  /* 12453833 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453836 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453838 call 0x12456510 */
  push32(0x1245383du); f_12456510();
  /* 1245383d mov esi, esp */
  ESI = (ESP);
  /* 1245383f push 0x1247e77c */
  push32((uint32_t)(0x1247e77cu));
  /* 12453844 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x1245384au);
  /* 1245384a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245384d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245384f call 0x12456510 */
  push32(0x12453854u); f_12456510();
  /* 12453854 mov esi, esp */
  ESI = (ESP);
  /* 12453856 push 0x1247e770 */
  push32((uint32_t)(0x1247e770u));
  /* 1245385b call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453861u);
  /* 12453861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453864 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453866 call 0x12456510 */
  push32(0x1245386bu); f_12456510();
  /* 1245386b mov esi, esp */
  ESI = (ESP);
  /* 1245386d push 1 */
  push32((uint32_t)(0x1u));
  /* 1245386f push 8 */
  push32((uint32_t)(0x8u));
  /* 12453871 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453877u);
  /* 12453877 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245387a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245387c call 0x12456510 */
  push32(0x12453881u); f_12456510();
  /* 12453881 mov esi, esp */
  ESI = (ESP);
  /* 12453883 push 1 */
  push32((uint32_t)(0x1u));
  /* 12453885 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12453887 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245388du);
  /* 1245388d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453890 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453892 call 0x12456510 */
  push32(0x12453897u); f_12456510();
L_12453897:;
  /* 12453897 mov esi, esp */
  ESI = (ESP);
  /* 12453899 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1245389b call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124538a1u);
  /* 124538a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124538a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124538a6 call 0x12456510 */
  push32(0x124538abu); f_12456510();
  /* 124538ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124538b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124538b2 je 0x124538cf */
  if (C.zf) goto L_124538cf;
  /* 124538b4 mov esi, esp */
  ESI = (ESP);
  /* 124538b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124538b8 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 124538bd push 0 */
  push32((uint32_t)(0x0u));
  /* 124538bf call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x124538c5u);
  /* 124538c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124538c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124538ca call 0x12456510 */
  push32(0x124538cfu); f_12456510();
L_124538cf:;
  /* 124538cf mov esi, esp */
  ESI = (ESP);
  /* 124538d1 push 8 */
  push32((uint32_t)(0x8u));
  /* 124538d3 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124538d9u);
  /* 124538d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124538dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124538de call 0x12456510 */
  push32(0x124538e3u); f_12456510();
  /* 124538e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124538e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124538ea je 0x12453a7c */
  if (C.zf) goto L_12453a7c;
  /* 124538f0 mov esi, esp */
  ESI = (ESP);
  /* 124538f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124538f4 push 0x124834d0 */
  push32((uint32_t)(0x124834d0u));
  /* 124538f9 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 124538fe call dword ptr [0x12486458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486458))), 0x12453904u);
  /* 12453904 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453907 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453909 call 0x12456510 */
  push32(0x1245390eu); f_12456510();
  /* 1245390e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453910 jle 0x12453a7c */
  if ((C.zf||C.sf!=C.of)) goto L_12453a7c;
  /* 12453916 mov esi, esp */
  ESI = (ESP);
  /* 12453918 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245391a push 8 */
  push32((uint32_t)(0x8u));
  /* 1245391c call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453922u);
  /* 12453922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453927 call 0x12456510 */
  push32(0x1245392cu); f_12456510();
  /* 1245392c mov esi, esp */
  ESI = (ESP);
  /* 1245392e push 0 */
  push32((uint32_t)(0x0u));
  /* 12453930 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12453932 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453938u);
  /* 12453938 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245393b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245393d call 0x12456510 */
  push32(0x12453942u); f_12456510();
  /* 12453942 mov esi, esp */
  ESI = (ESP);
  /* 12453944 push 0x1247e768 */
  push32((uint32_t)(0x1247e768u));
  /* 12453949 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x1245394fu);
  /* 1245394f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453954 call 0x12456510 */
  push32(0x12453959u); f_12456510();
  /* 12453959 mov esi, esp */
  ESI = (ESP);
  /* 1245395b push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1245395d call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12453963u);
  /* 12453963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453966 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453968 call 0x12456510 */
  push32(0x1245396du); f_12456510();
  /* 1245396d mov esi, esp */
  ESI = (ESP);
  /* 1245396f push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12453971 call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x12453977u);
  /* 12453977 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245397a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245397c call 0x12456510 */
  push32(0x12453981u); f_12456510();
  /* 12453981 mov esi, esp */
  ESI = (ESP);
  /* 12453983 push 0x12483738 */
  push32((uint32_t)(0x12483738u));
  /* 12453988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245398a call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x12453990u);
  /* 12453990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453993 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453995 call 0x12456510 */
  push32(0x1245399au); f_12456510();
  /* 1245399a mov esi, esp */
  ESI = (ESP);
  /* 1245399c push 0x124836d8 */
  push32((uint32_t)(0x124836d8u));
  /* 124539a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124539a3 call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x124539a9u);
  /* 124539a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124539ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124539ae call 0x12456510 */
  push32(0x124539b3u); f_12456510();
  /* 124539b3 mov esi, esp */
  ESI = (ESP);
  /* 124539b5 push 0x12483698 */
  push32((uint32_t)(0x12483698u));
  /* 124539ba push 0 */
  push32((uint32_t)(0x0u));
  /* 124539bc call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x124539c2u);
  /* 124539c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124539c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124539c7 call 0x12456510 */
  push32(0x124539ccu); f_12456510();
  /* 124539cc mov esi, esp */
  ESI = (ESP);
  /* 124539ce push 0x124835f8 */
  push32((uint32_t)(0x124835f8u));
  /* 124539d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124539d5 call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x124539dbu);
  /* 124539db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124539de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124539e0 call 0x12456510 */
  push32(0x124539e5u); f_12456510();
  /* 124539e5 mov esi, esp */
  ESI = (ESP);
  /* 124539e7 push 0x12483618 */
  push32((uint32_t)(0x12483618u));
  /* 124539ec push 0 */
  push32((uint32_t)(0x0u));
  /* 124539ee call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x124539f4u);
  /* 124539f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124539f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124539f9 call 0x12456510 */
  push32(0x124539feu); f_12456510();
  /* 124539fe mov esi, esp */
  ESI = (ESP);
  /* 12453a00 push 0x12483638 */
  push32((uint32_t)(0x12483638u));
  /* 12453a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453a07 call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x12453a0du);
  /* 12453a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453a10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453a12 call 0x12456510 */
  push32(0x12453a17u); f_12456510();
  /* 12453a17 mov esi, esp */
  ESI = (ESP);
  /* 12453a19 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 12453a1e push 1 */
  push32((uint32_t)(0x1u));
  /* 12453a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453a22 call dword ptr [0x1248647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248647c))), 0x12453a28u);
  /* 12453a28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453a2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453a2d call 0x12456510 */
  push32(0x12453a32u); f_12456510();
  /* 12453a32 mov esi, esp */
  ESI = (ESP);
  /* 12453a34 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 12453a39 push 5 */
  push32((uint32_t)(0x5u));
  /* 12453a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12453a3d call dword ptr [0x1248647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248647c))), 0x12453a43u);
  /* 12453a43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453a48 call 0x12456510 */
  push32(0x12453a4du); f_12456510();
  /* 12453a4d mov esi, esp */
  ESI = (ESP);
  /* 12453a4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12453a51 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12453a53 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453a59u);
  /* 12453a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453a5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453a5e call 0x12456510 */
  push32(0x12453a63u); f_12456510();
  /* 12453a63 mov esi, esp */
  ESI = (ESP);
  /* 12453a65 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12453a6a push 5 */
  push32((uint32_t)(0x5u));
  /* 12453a6c call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x12453a72u);
  /* 12453a72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453a75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453a77 call 0x12456510 */
  push32(0x12453a7cu); f_12456510();
L_12453a7c:;
  /* 12453a7c mov esi, esp */
  ESI = (ESP);
  /* 12453a7e push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12453a80 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453a86u);
  /* 12453a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453a89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453a8b call 0x12456510 */
  push32(0x12453a90u); f_12456510();
  /* 12453a90 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453a95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453a97 je 0x12453bc2 */
  if (C.zf) goto L_12453bc2;
  /* 12453a9d mov esi, esp */
  ESI = (ESP);
  /* 12453a9f push 5 */
  push32((uint32_t)(0x5u));
  /* 12453aa1 call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x12453aa7u);
  /* 12453aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453aaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453aac call 0x12456510 */
  push32(0x12453ab1u); f_12456510();
  /* 12453ab1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453ab6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453ab8 je 0x12453bc2 */
  if (C.zf) goto L_12453bc2;
  /* 12453abe mov esi, esp */
  ESI = (ESP);
  /* 12453ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453ac2 push 0x12483738 */
  push32((uint32_t)(0x12483738u));
  /* 12453ac7 call dword ptr [0x12486464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486464))), 0x12453acdu);
  /* 12453acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453ad2 call 0x12456510 */
  push32(0x12453ad7u); f_12456510();
  /* 12453ad7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453ade je 0x12453bc2 */
  if (C.zf) goto L_12453bc2;
  /* 12453ae4 mov esi, esp */
  ESI = (ESP);
  /* 12453ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453ae8 push 0x124836d8 */
  push32((uint32_t)(0x124836d8u));
  /* 12453aed call dword ptr [0x12486464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486464))), 0x12453af3u);
  /* 12453af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453af8 call 0x12456510 */
  push32(0x12453afdu); f_12456510();
  /* 12453afd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453b02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453b04 je 0x12453bc2 */
  if (C.zf) goto L_12453bc2;
  /* 12453b0a mov esi, esp */
  ESI = (ESP);
  /* 12453b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12453b0e push 0x12483698 */
  push32((uint32_t)(0x12483698u));
  /* 12453b13 call dword ptr [0x12486464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486464))), 0x12453b19u);
  /* 12453b19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453b1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453b1e call 0x12456510 */
  push32(0x12453b23u); f_12456510();
  /* 12453b23 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453b28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453b2a je 0x12453bc2 */
  if (C.zf) goto L_12453bc2;
  /* 12453b30 mov esi, esp */
  ESI = (ESP);
  /* 12453b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453b34 push 0x124835f8 */
  push32((uint32_t)(0x124835f8u));
  /* 12453b39 call dword ptr [0x12486464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486464))), 0x12453b3fu);
  /* 12453b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453b42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453b44 call 0x12456510 */
  push32(0x12453b49u); f_12456510();
  /* 12453b49 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453b4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453b50 je 0x12453bc2 */
  if (C.zf) goto L_12453bc2;
  /* 12453b52 mov esi, esp */
  ESI = (ESP);
  /* 12453b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453b56 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 12453b58 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453b5eu);
  /* 12453b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453b61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453b63 call 0x12456510 */
  push32(0x12453b68u); f_12456510();
  /* 12453b68 mov esi, esp */
  ESI = (ESP);
  /* 12453b6a push 0x1247e75c */
  push32((uint32_t)(0x1247e75cu));
  /* 12453b6f call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453b75u);
  /* 12453b75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453b78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453b7a call 0x12456510 */
  push32(0x12453b7fu); f_12456510();
  /* 12453b7f mov esi, esp */
  ESI = (ESP);
  /* 12453b81 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12453b83 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12453b89u);
  /* 12453b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453b8e call 0x12456510 */
  push32(0x12453b93u); f_12456510();
  /* 12453b93 mov esi, esp */
  ESI = (ESP);
  /* 12453b95 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 12453b9a push 4 */
  push32((uint32_t)(0x4u));
  /* 12453b9c call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x12453ba2u);
  /* 12453ba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453ba5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453ba7 call 0x12456510 */
  push32(0x12453bacu); f_12456510();
  /* 12453bac mov esi, esp */
  ESI = (ESP);
  /* 12453bae push 1 */
  push32((uint32_t)(0x1u));
  /* 12453bb0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12453bb2 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453bb8u);
  /* 12453bb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453bbd call 0x12456510 */
  push32(0x12453bc2u); f_12456510();
L_12453bc2:;
  /* 12453bc2 mov esi, esp */
  ESI = (ESP);
  /* 12453bc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12453bc6 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453bccu);
  /* 12453bcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453bcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453bd1 call 0x12456510 */
  push32(0x12453bd6u); f_12456510();
  /* 12453bd6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453bdd je 0x12453d77 */
  if (C.zf) goto L_12453d77;
  /* 12453be3 mov esi, esp */
  ESI = (ESP);
  /* 12453be5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12453be7 call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x12453bedu);
  /* 12453bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453bf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453bf2 call 0x12456510 */
  push32(0x12453bf7u); f_12456510();
  /* 12453bf7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453bfe je 0x12453d77 */
  if (C.zf) goto L_12453d77;
  /* 12453c04 mov esi, esp */
  ESI = (ESP);
  /* 12453c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453c08 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12453c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12453c0f call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x12453c15u);
  /* 12453c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453c18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453c1a call 0x12456510 */
  push32(0x12453c1fu); f_12456510();
  /* 12453c1f mov esi, esp */
  ESI = (ESP);
  /* 12453c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453c23 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x12453c29u);
  /* 12453c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453c2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453c2e call 0x12456510 */
  push32(0x12453c33u); f_12456510();
  /* 12453c33 mov esi, esp */
  ESI = (ESP);
  /* 12453c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453c37 push 9 */
  push32((uint32_t)(0x9u));
  /* 12453c39 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453c3fu);
  /* 12453c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453c42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453c44 call 0x12456510 */
  push32(0x12453c49u); f_12456510();
  /* 12453c49 mov esi, esp */
  ESI = (ESP);
  /* 12453c4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12453c4d push 0xa */
  push32((uint32_t)(0xau));
  /* 12453c4f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453c55u);
  /* 12453c55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453c58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453c5a call 0x12456510 */
  push32(0x12453c5fu); f_12456510();
  /* 12453c5f mov esi, esp */
  ESI = (ESP);
  /* 12453c61 push 0x1247e754 */
  push32((uint32_t)(0x1247e754u));
  /* 12453c66 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453c6cu);
  /* 12453c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453c6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453c71 call 0x12456510 */
  push32(0x12453c76u); f_12456510();
  /* 12453c76 mov esi, esp */
  ESI = (ESP);
  /* 12453c78 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12453c7a call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x12453c80u);
  /* 12453c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453c85 call 0x12456510 */
  push32(0x12453c8au); f_12456510();
  /* 12453c8a mov esi, esp */
  ESI = (ESP);
  /* 12453c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12453c8e push 0x12483568 */
  push32((uint32_t)(0x12483568u));
  /* 12453c93 push 5 */
  push32((uint32_t)(0x5u));
  /* 12453c95 push 0x12483420 */
  push32((uint32_t)(0x12483420u));
  /* 12453c9a push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 12453c9f push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12453ca4 call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12453caau);
  /* 12453caa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453caf call 0x12456510 */
  push32(0x12453cb4u); f_12456510();
  /* 12453cb4 mov esi, esp */
  ESI = (ESP);
  /* 12453cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453cb8 push 0x12483568 */
  push32((uint32_t)(0x12483568u));
  /* 12453cbd push 5 */
  push32((uint32_t)(0x5u));
  /* 12453cbf push 0x12483420 */
  push32((uint32_t)(0x12483420u));
  /* 12453cc4 push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 12453cc9 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12453cce call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12453cd4u);
  /* 12453cd4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453cd9 call 0x12456510 */
  push32(0x12453cdeu); f_12456510();
  /* 12453cde mov esi, esp */
  ESI = (ESP);
  /* 12453ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453ce2 push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12453ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12453ce9 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12453cefu);
  /* 12453cef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453cf4 call 0x12456510 */
  push32(0x12453cf9u); f_12456510();
  /* 12453cf9 mov esi, esp */
  ESI = (ESP);
  /* 12453cfb push 1 */
  push32((uint32_t)(0x1u));
  /* 12453cfd push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12453d02 push 5 */
  push32((uint32_t)(0x5u));
  /* 12453d04 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12453d0au);
  /* 12453d0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453d0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453d0f call 0x12456510 */
  push32(0x12453d14u); f_12456510();
  /* 12453d14 mov esi, esp */
  ESI = (ESP);
  /* 12453d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453d18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453d1a push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 12453d1f push 5 */
  push32((uint32_t)(0x5u));
  /* 12453d21 call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x12453d27u);
  /* 12453d27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453d2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453d2c call 0x12456510 */
  push32(0x12453d31u); f_12456510();
  /* 12453d31 mov esi, esp */
  ESI = (ESP);
  /* 12453d33 push 0x12483570 */
  push32((uint32_t)(0x12483570u));
  /* 12453d38 call dword ptr [0x12486480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486480))), 0x12453d3eu);
  /* 12453d3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453d41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453d43 call 0x12456510 */
  push32(0x12453d48u); f_12456510();
  /* 12453d48 mov esi, esp */
  ESI = (ESP);
  /* 12453d4a push 5 */
  push32((uint32_t)(0x5u));
  /* 12453d4c call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x12453d52u);
  /* 12453d52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453d55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453d57 call 0x12456510 */
  push32(0x12453d5cu); f_12456510();
  /* 12453d5c mov esi, esp */
  ESI = (ESP);
  /* 12453d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12453d60 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12453d65 push 1 */
  push32((uint32_t)(0x1u));
  /* 12453d67 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12453d6du);
  /* 12453d6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453d72 call 0x12456510 */
  push32(0x12453d77u); f_12456510();
L_12453d77:;
  /* 12453d77 mov esi, esp */
  ESI = (ESP);
  /* 12453d79 push 0xa */
  push32((uint32_t)(0xau));
  /* 12453d7b call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453d81u);
  /* 12453d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453d84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453d86 call 0x12456510 */
  push32(0x12453d8bu); f_12456510();
  /* 12453d8b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453d90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453d92 je 0x12453e55 */
  if (C.zf) goto L_12453e55;
  /* 12453d98 mov esi, esp */
  ESI = (ESP);
  /* 12453d9a push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12453d9f call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x12453da5u);
  /* 12453da5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453da8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453daa call 0x12456510 */
  push32(0x12453dafu); f_12456510();
  /* 12453daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453db1 jne 0x12453e55 */
  if (!C.zf) goto L_12453e55;
  /* 12453db7 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12453dbc call 0x12451005 */
  push32(0x12453dc1u); f_12451005();
  /* 12453dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453dc6 jne 0x12453e55 */
  if (!C.zf) goto L_12453e55;
  /* 12453dcc mov esi, esp */
  ESI = (ESP);
  /* 12453dce push 0 */
  push32((uint32_t)(0x0u));
  /* 12453dd0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12453dd2 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453dd8u);
  /* 12453dd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453ddb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453ddd call 0x12456510 */
  push32(0x12453de2u); f_12456510();
  /* 12453de2 mov esi, esp */
  ESI = (ESP);
  /* 12453de4 push 0x1247e74c */
  push32((uint32_t)(0x1247e74cu));
  /* 12453de9 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453defu);
  /* 12453def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453df2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453df4 call 0x12456510 */
  push32(0x12453df9u); f_12456510();
  /* 12453df9 mov esi, esp */
  ESI = (ESP);
  /* 12453dfb push 0x1247e744 */
  push32((uint32_t)(0x1247e744u));
  /* 12453e00 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453e06u);
  /* 12453e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453e09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453e0b call 0x12456510 */
  push32(0x12453e10u); f_12456510();
  /* 12453e10 mov esi, esp */
  ESI = (ESP);
  /* 12453e12 push 0x124836b0 */
  push32((uint32_t)(0x124836b0u));
  /* 12453e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453e19 call dword ptr [0x1248645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248645c))), 0x12453e1fu);
  /* 12453e1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453e22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453e24 call 0x12456510 */
  push32(0x12453e29u); f_12456510();
  /* 12453e29 mov esi, esp */
  ESI = (ESP);
  /* 12453e2b push 1 */
  push32((uint32_t)(0x1u));
  /* 12453e2d push 0x22 */
  push32((uint32_t)(0x22u));
  /* 12453e2f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453e35u);
  /* 12453e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453e38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453e3a call 0x12456510 */
  push32(0x12453e3fu); f_12456510();
  /* 12453e3f mov esi, esp */
  ESI = (ESP);
  /* 12453e41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12453e43 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12453e45 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453e4bu);
  /* 12453e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453e4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453e50 call 0x12456510 */
  push32(0x12453e55u); f_12456510();
L_12453e55:;
  /* 12453e55 mov esi, esp */
  ESI = (ESP);
  /* 12453e57 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 12453e59 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453e5fu);
  /* 12453e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453e62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453e64 call 0x12456510 */
  push32(0x12453e69u); f_12456510();
  /* 12453e69 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453e6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453e70 je 0x12453e8d */
  if (C.zf) goto L_12453e8d;
  /* 12453e72 mov esi, esp */
  ESI = (ESP);
  /* 12453e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453e76 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12453e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12453e7d call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x12453e83u);
  /* 12453e83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453e86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453e88 call 0x12456510 */
  push32(0x12453e8du); f_12456510();
L_12453e8d:;
  /* 12453e8d mov esi, esp */
  ESI = (ESP);
  /* 12453e8f push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12453e91 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453e97u);
  /* 12453e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453e9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453e9c call 0x12456510 */
  push32(0x12453ea1u); f_12456510();
  /* 12453ea1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453ea8 je 0x12453f3d */
  if (C.zf) goto L_12453f3d;
  /* 12453eae mov esi, esp */
  ESI = (ESP);
  /* 12453eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453eb2 push 0x124834d0 */
  push32((uint32_t)(0x124834d0u));
  /* 12453eb7 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12453ebc call dword ptr [0x12486458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486458))), 0x12453ec2u);
  /* 12453ec2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453ec5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453ec7 call 0x12456510 */
  push32(0x12453eccu); f_12456510();
  /* 12453ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453ece jle 0x12453f3d */
  if ((C.zf||C.sf!=C.of)) goto L_12453f3d;
  /* 12453ed0 mov esi, esp */
  ESI = (ESP);
  /* 12453ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453ed4 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 12453ed6 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453edcu);
  /* 12453edc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453edf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453ee1 call 0x12456510 */
  push32(0x12453ee6u); f_12456510();
  /* 12453ee6 mov esi, esp */
  ESI = (ESP);
  /* 12453ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453eea push 0x23 */
  push32((uint32_t)(0x23u));
  /* 12453eec call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453ef2u);
  /* 12453ef2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453ef5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453ef7 call 0x12456510 */
  push32(0x12453efcu); f_12456510();
  /* 12453efc mov esi, esp */
  ESI = (ESP);
  /* 12453efe push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12453f00 call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x12453f06u);
  /* 12453f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453f09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453f0b call 0x12456510 */
  push32(0x12453f10u); f_12456510();
  /* 12453f10 mov esi, esp */
  ESI = (ESP);
  /* 12453f12 push 0x1247e738 */
  push32((uint32_t)(0x1247e738u));
  /* 12453f17 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453f1du);
  /* 12453f1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453f20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453f22 call 0x12456510 */
  push32(0x12453f27u); f_12456510();
  /* 12453f27 mov esi, esp */
  ESI = (ESP);
  /* 12453f29 push 1 */
  push32((uint32_t)(0x1u));
  /* 12453f2b push 0xb */
  push32((uint32_t)(0xbu));
  /* 12453f2d call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453f33u);
  /* 12453f33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453f36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453f38 call 0x12456510 */
  push32(0x12453f3du); f_12456510();
L_12453f3d:;
  /* 12453f3d mov esi, esp */
  ESI = (ESP);
  /* 12453f3f push 0xb */
  push32((uint32_t)(0xbu));
  /* 12453f41 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12453f47u);
  /* 12453f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453f4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453f4c call 0x12456510 */
  push32(0x12453f51u); f_12456510();
  /* 12453f51 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12453f56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12453f58 je 0x12454001 */
  if (C.zf) goto L_12454001;
  /* 12453f5e mov esi, esp */
  ESI = (ESP);
  /* 12453f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453f62 push 0x12483450 */
  push32((uint32_t)(0x12483450u));
  /* 12453f67 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x12453f6du);
  /* 12453f6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453f70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453f72 call 0x12456510 */
  push32(0x12453f77u); f_12456510();
  /* 12453f77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453f7a jle 0x12454001 */
  if ((C.zf||C.sf!=C.of)) goto L_12454001;
  /* 12453f80 mov esi, esp */
  ESI = (ESP);
  /* 12453f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12453f84 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12453f86 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453f8cu);
  /* 12453f8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453f8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453f91 call 0x12456510 */
  push32(0x12453f96u); f_12456510();
  /* 12453f96 mov esi, esp */
  ESI = (ESP);
  /* 12453f98 push 0x1247e730 */
  push32((uint32_t)(0x1247e730u));
  /* 12453f9d call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12453fa3u);
  /* 12453fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453fa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453fa8 call 0x12456510 */
  push32(0x12453fadu); f_12456510();
  /* 12453fad mov esi, esp */
  ESI = (ESP);
  /* 12453faf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12453fb1 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x12453fb7u);
  /* 12453fb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453fba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453fbc call 0x12456510 */
  push32(0x12453fc1u); f_12456510();
  /* 12453fc1 mov esi, esp */
  ESI = (ESP);
  /* 12453fc3 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12453fc5 call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x12453fcbu);
  /* 12453fcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453fce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453fd0 call 0x12456510 */
  push32(0x12453fd5u); f_12456510();
  /* 12453fd5 mov esi, esp */
  ESI = (ESP);
  /* 12453fd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12453fd9 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12453fdb call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453fe1u);
  /* 12453fe1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453fe6 call 0x12456510 */
  push32(0x12453febu); f_12456510();
  /* 12453feb mov esi, esp */
  ESI = (ESP);
  /* 12453fed push 1 */
  push32((uint32_t)(0x1u));
  /* 12453fef push 0x25 */
  push32((uint32_t)(0x25u));
  /* 12453ff1 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12453ff7u);
  /* 12453ff7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12453ffa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12453ffc call 0x12456510 */
  push32(0x12454001u); f_12456510();
L_12454001:;
  /* 12454001 mov esi, esp */
  ESI = (ESP);
  /* 12454003 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12454005 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245400bu);
  /* 1245400b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245400e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454010 call 0x12456510 */
  push32(0x12454015u); f_12456510();
  /* 12454015 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245401a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245401c je 0x12454039 */
  if (C.zf) goto L_12454039;
  /* 1245401e mov esi, esp */
  ESI = (ESP);
  /* 12454020 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454022 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12454027 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454029 call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x1245402fu);
  /* 1245402f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454032 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454034 call 0x12456510 */
  push32(0x12454039u); f_12456510();
L_12454039:;
  /* 12454039 mov esi, esp */
  ESI = (ESP);
  /* 1245403b push 0x25 */
  push32((uint32_t)(0x25u));
  /* 1245403d call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12454043u);
  /* 12454043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454046 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454048 call 0x12456510 */
  push32(0x1245404du); f_12456510();
  /* 1245404d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454054 je 0x12454134 */
  if (C.zf) goto L_12454134;
  /* 1245405a mov esi, esp */
  ESI = (ESP);
  /* 1245405c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245405e push 0x124833f8 */
  push32((uint32_t)(0x124833f8u));
  /* 12454063 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12454068 call dword ptr [0x12486458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486458))), 0x1245406eu);
  /* 1245406e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454071 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454073 call 0x12456510 */
  push32(0x12454078u); f_12456510();
  /* 12454078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245407a jle 0x12454134 */
  if ((C.zf||C.sf!=C.of)) goto L_12454134;
  /* 12454080 mov esi, esp */
  ESI = (ESP);
  /* 12454082 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454084 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 12454086 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245408cu);
  /* 1245408c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245408f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454091 call 0x12456510 */
  push32(0x12454096u); f_12456510();
  /* 12454096 mov esi, esp */
  ESI = (ESP);
  /* 12454098 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245409a push 0x25 */
  push32((uint32_t)(0x25u));
  /* 1245409c call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124540a2u);
  /* 124540a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124540a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124540a7 call 0x12456510 */
  push32(0x124540acu); f_12456510();
  /* 124540ac mov esi, esp */
  ESI = (ESP);
  /* 124540ae push 0x46 */
  push32((uint32_t)(0x46u));
  /* 124540b0 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x124540b6u);
  /* 124540b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124540b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124540bb call 0x12456510 */
  push32(0x124540c0u); f_12456510();
  /* 124540c0 mov esi, esp */
  ESI = (ESP);
  /* 124540c2 push 0x1247e724 */
  push32((uint32_t)(0x1247e724u));
  /* 124540c7 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x124540cdu);
  /* 124540cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124540d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124540d2 call 0x12456510 */
  push32(0x124540d7u); f_12456510();
  /* 124540d7 mov esi, esp */
  ESI = (ESP);
  /* 124540d9 push 0x1247e718 */
  push32((uint32_t)(0x1247e718u));
  /* 124540de call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x124540e4u);
  /* 124540e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124540e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124540e9 call 0x12456510 */
  push32(0x124540eeu); f_12456510();
  /* 124540ee mov esi, esp */
  ESI = (ESP);
  /* 124540f0 push 0x1247e70c */
  push32((uint32_t)(0x1247e70cu));
  /* 124540f5 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x124540fbu);
  /* 124540fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124540fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454100 call 0x12456510 */
  push32(0x12454105u); f_12456510();
  /* 12454105 mov esi, esp */
  ESI = (ESP);
  /* 12454107 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 1245410c push 6 */
  push32((uint32_t)(0x6u));
  /* 1245410e call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x12454114u);
  /* 12454114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454117 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454119 call 0x12456510 */
  push32(0x1245411eu); f_12456510();
  /* 1245411e mov esi, esp */
  ESI = (ESP);
  /* 12454120 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454122 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12454124 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245412au);
  /* 1245412a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245412d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245412f call 0x12456510 */
  push32(0x12454134u); f_12456510();
L_12454134:;
  /* 12454134 mov esi, esp */
  ESI = (ESP);
  /* 12454136 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12454138 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245413eu);
  /* 1245413e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454141 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454143 call 0x12456510 */
  push32(0x12454148u); f_12456510();
  /* 12454148 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245414d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245414f je 0x124542a4 */
  if (C.zf) goto L_124542a4;
  /* 12454155 mov esi, esp */
  ESI = (ESP);
  /* 12454157 push 6 */
  push32((uint32_t)(0x6u));
  /* 12454159 call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x1245415fu);
  /* 1245415f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454162 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454164 call 0x12456510 */
  push32(0x12454169u); f_12456510();
  /* 12454169 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245416e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454170 je 0x124542a4 */
  if (C.zf) goto L_124542a4;
  /* 12454176 mov esi, esp */
  ESI = (ESP);
  /* 12454178 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245417a push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 1245417f push 0 */
  push32((uint32_t)(0x0u));
  /* 12454181 call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x12454187u);
  /* 12454187 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245418a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245418c call 0x12456510 */
  push32(0x12454191u); f_12456510();
  /* 12454191 mov esi, esp */
  ESI = (ESP);
  /* 12454193 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454195 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x1245419bu);
  /* 1245419b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245419e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124541a0 call 0x12456510 */
  push32(0x124541a5u); f_12456510();
  /* 124541a5 mov esi, esp */
  ESI = (ESP);
  /* 124541a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124541a9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 124541ab call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124541b1u);
  /* 124541b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124541b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124541b6 call 0x12456510 */
  push32(0x124541bbu); f_12456510();
  /* 124541bb mov esi, esp */
  ESI = (ESP);
  /* 124541bd push 0x1247e700 */
  push32((uint32_t)(0x1247e700u));
  /* 124541c2 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x124541c8u);
  /* 124541c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124541cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124541cd call 0x12456510 */
  push32(0x124541d2u); f_12456510();
  /* 124541d2 mov esi, esp */
  ESI = (ESP);
  /* 124541d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124541d6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 124541d8 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124541deu);
  /* 124541de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124541e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124541e3 call 0x12456510 */
  push32(0x124541e8u); f_12456510();
  /* 124541e8 mov esi, esp */
  ESI = (ESP);
  /* 124541ea push 0x48 */
  push32((uint32_t)(0x48u));
  /* 124541ec call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x124541f2u);
  /* 124541f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124541f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124541f7 call 0x12456510 */
  push32(0x124541fcu); f_12456510();
  /* 124541fc mov esi, esp */
  ESI = (ESP);
  /* 124541fe push 0x12483580 */
  push32((uint32_t)(0x12483580u));
  /* 12454203 call dword ptr [0x12486480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486480))), 0x12454209u);
  /* 12454209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245420c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245420e call 0x12456510 */
  push32(0x12454213u); f_12456510();
  /* 12454213 mov esi, esp */
  ESI = (ESP);
  /* 12454215 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454217 push 0x12483578 */
  push32((uint32_t)(0x12483578u));
  /* 1245421c push 5 */
  push32((uint32_t)(0x5u));
  /* 1245421e push 0x12483428 */
  push32((uint32_t)(0x12483428u));
  /* 12454223 push 0x12483520 */
  push32((uint32_t)(0x12483520u));
  /* 12454228 push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 1245422d call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12454233u);
  /* 12454233 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454236 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454238 call 0x12456510 */
  push32(0x1245423du); f_12456510();
  /* 1245423d mov esi, esp */
  ESI = (ESP);
  /* 1245423f push 0 */
  push32((uint32_t)(0x0u));
  /* 12454241 push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12454246 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454248 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x1245424eu);
  /* 1245424e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454251 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454253 call 0x12456510 */
  push32(0x12454258u); f_12456510();
  /* 12454258 mov esi, esp */
  ESI = (ESP);
  /* 1245425a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245425c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245425e push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 12454263 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454265 call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x1245426bu);
  /* 1245426b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245426e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454270 call 0x12456510 */
  push32(0x12454275u); f_12456510();
  /* 12454275 mov esi, esp */
  ESI = (ESP);
  /* 12454277 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454279 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x1245427fu);
  /* 1245427f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454284 call 0x12456510 */
  push32(0x12454289u); f_12456510();
  /* 12454289 mov esi, esp */
  ESI = (ESP);
  /* 1245428b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245428d push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12454292 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454294 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x1245429au);
  /* 1245429a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245429d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245429f call 0x12456510 */
  push32(0x124542a4u); f_12456510();
L_124542a4:;
  /* 124542a4 mov esi, esp */
  ESI = (ESP);
  /* 124542a6 push 0xd */
  push32((uint32_t)(0xdu));
  /* 124542a8 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124542aeu);
  /* 124542ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124542b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124542b3 call 0x12456510 */
  push32(0x124542b8u); f_12456510();
  /* 124542b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124542bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124542bf je 0x12454365 */
  if (C.zf) goto L_12454365;
  /* 124542c5 mov esi, esp */
  ESI = (ESP);
  /* 124542c7 push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 124542cc call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x124542d2u);
  /* 124542d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124542d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124542d7 call 0x12456510 */
  push32(0x124542dcu); f_12456510();
  /* 124542dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124542de jne 0x12454365 */
  if (!C.zf) goto L_12454365;
  /* 124542e4 mov esi, esp */
  ESI = (ESP);
  /* 124542e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124542e8 push 0xd */
  push32((uint32_t)(0xdu));
  /* 124542ea call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124542f0u);
  /* 124542f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124542f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124542f5 call 0x12456510 */
  push32(0x124542fau); f_12456510();
  /* 124542fa mov esi, esp */
  ESI = (ESP);
  /* 124542fc push 0x1247e6f4 */
  push32((uint32_t)(0x1247e6f4u));
  /* 12454301 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12454307u);
  /* 12454307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245430a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245430c call 0x12456510 */
  push32(0x12454311u); f_12456510();
  /* 12454311 mov esi, esp */
  ESI = (ESP);
  /* 12454313 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12454315 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x1245431bu);
  /* 1245431b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245431e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454320 call 0x12456510 */
  push32(0x12454325u); f_12456510();
  /* 12454325 mov esi, esp */
  ESI = (ESP);
  /* 12454327 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12454329 call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x1245432fu);
  /* 1245432f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454332 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454334 call 0x12456510 */
  push32(0x12454339u); f_12456510();
  /* 12454339 mov esi, esp */
  ESI = (ESP);
  /* 1245433b push 1 */
  push32((uint32_t)(0x1u));
  /* 1245433d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1245433f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454345u);
  /* 12454345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454348 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245434a call 0x12456510 */
  push32(0x1245434fu); f_12456510();
  /* 1245434f mov esi, esp */
  ESI = (ESP);
  /* 12454351 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454353 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12454355 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245435bu);
  /* 1245435b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245435e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454360 call 0x12456510 */
  push32(0x12454365u); f_12456510();
L_12454365:;
  /* 12454365 mov esi, esp */
  ESI = (ESP);
  /* 12454367 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12454369 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245436fu);
  /* 1245436f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454372 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454374 call 0x12456510 */
  push32(0x12454379u); f_12456510();
  /* 12454379 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245437e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454380 je 0x1245439d */
  if (C.zf) goto L_1245439d;
  /* 12454382 mov esi, esp */
  ESI = (ESP);
  /* 12454384 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454386 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 1245438b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245438d call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x12454393u);
  /* 12454393 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454396 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454398 call 0x12456510 */
  push32(0x1245439du); f_12456510();
L_1245439d:;
  /* 1245439d mov esi, esp */
  ESI = (ESP);
  /* 1245439f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 124543a1 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124543a7u);
  /* 124543a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124543aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124543ac call 0x12456510 */
  push32(0x124543b1u); f_12456510();
  /* 124543b1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124543b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124543b8 je 0x12454658 */
  if (C.zf) goto L_12454658;
  /* 124543be mov esi, esp */
  ESI = (ESP);
  /* 124543c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124543c2 push 0x12483400 */
  push32((uint32_t)(0x12483400u));
  /* 124543c7 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 124543cc call dword ptr [0x12486458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486458))), 0x124543d2u);
  /* 124543d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124543d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124543d7 call 0x12456510 */
  push32(0x124543dcu); f_12456510();
  /* 124543dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124543de jg 0x12454406 */
  if ((!C.zf&&C.sf==C.of)) goto L_12454406;
  /* 124543e0 mov esi, esp */
  ESI = (ESP);
  /* 124543e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124543e4 push 0x12483438 */
  push32((uint32_t)(0x12483438u));
  /* 124543e9 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 124543ee call dword ptr [0x12486458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486458))), 0x124543f4u);
  /* 124543f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124543f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124543f9 call 0x12456510 */
  push32(0x124543feu); f_12456510();
  /* 124543fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454400 jle 0x12454658 */
  if ((C.zf||C.sf!=C.of)) goto L_12454658;
L_12454406:;
  /* 12454406 mov esi, esp */
  ESI = (ESP);
  /* 12454408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245440a push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 1245440f push 0 */
  push32((uint32_t)(0x0u));
  /* 12454411 call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x12454417u);
  /* 12454417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245441a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245441c call 0x12456510 */
  push32(0x12454421u); f_12456510();
  /* 12454421 mov esi, esp */
  ESI = (ESP);
  /* 12454423 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12454425 call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x1245442bu);
  /* 1245442b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245442e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454430 call 0x12456510 */
  push32(0x12454435u); f_12456510();
  /* 12454435 mov esi, esp */
  ESI = (ESP);
  /* 12454437 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454439 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x1245443fu);
  /* 1245443f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454444 call 0x12456510 */
  push32(0x12454449u); f_12456510();
  /* 12454449 mov esi, esp */
  ESI = (ESP);
  /* 1245444b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245444d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1245444f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454455u);
  /* 12454455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245445a call 0x12456510 */
  push32(0x1245445fu); f_12456510();
  /* 1245445f mov esi, esp */
  ESI = (ESP);
  /* 12454461 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454463 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12454465 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245446bu);
  /* 1245446b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245446e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454470 call 0x12456510 */
  push32(0x12454475u); f_12456510();
  /* 12454475 mov esi, esp */
  ESI = (ESP);
  /* 12454477 push 0x1247e6e8 */
  push32((uint32_t)(0x1247e6e8u));
  /* 1245447c call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12454482u);
  /* 12454482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454485 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454487 call 0x12456510 */
  push32(0x1245448cu); f_12456510();
  /* 1245448c mov esi, esp */
  ESI = (ESP);
  /* 1245448e push 1 */
  push32((uint32_t)(0x1u));
  /* 12454490 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12454492 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454498u);
  /* 12454498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245449b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245449d call 0x12456510 */
  push32(0x124544a2u); f_12456510();
  /* 124544a2 mov esi, esp */
  ESI = (ESP);
  /* 124544a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124544a6 push 0x12483548 */
  push32((uint32_t)(0x12483548u));
  /* 124544ab push 4 */
  push32((uint32_t)(0x4u));
  /* 124544ad call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x124544b3u);
  /* 124544b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124544b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124544b8 call 0x12456510 */
  push32(0x124544bdu); f_12456510();
  /* 124544bd mov esi, esp */
  ESI = (ESP);
  /* 124544bf push 0 */
  push32((uint32_t)(0x0u));
  /* 124544c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124544c3 push 0x12483568 */
  push32((uint32_t)(0x12483568u));
  /* 124544c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 124544ca call dword ptr [0x12486488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486488))), 0x124544d0u);
  /* 124544d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124544d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124544d5 call 0x12456510 */
  push32(0x124544dau); f_12456510();
  /* 124544da mov esi, esp */
  ESI = (ESP);
  /* 124544dc push 0 */
  push32((uint32_t)(0x0u));
  /* 124544de push 0x12483558 */
  push32((uint32_t)(0x12483558u));
  /* 124544e3 push 4 */
  push32((uint32_t)(0x4u));
  /* 124544e5 push 0x12483410 */
  push32((uint32_t)(0x12483410u));
  /* 124544ea push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 124544ef push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 124544f4 call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x124544fau);
  /* 124544fa add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124544fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124544ff call 0x12456510 */
  push32(0x12454504u); f_12456510();
  /* 12454504 mov esi, esp */
  ESI = (ESP);
  /* 12454506 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454508 push 0x12483558 */
  push32((uint32_t)(0x12483558u));
  /* 1245450d push 4 */
  push32((uint32_t)(0x4u));
  /* 1245450f push 0x12483410 */
  push32((uint32_t)(0x12483410u));
  /* 12454514 push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 12454519 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 1245451e call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12454524u);
  /* 12454524 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454527 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454529 call 0x12456510 */
  push32(0x1245452eu); f_12456510();
  /* 1245452e mov esi, esp */
  ESI = (ESP);
  /* 12454530 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454532 push 0x12483568 */
  push32((uint32_t)(0x12483568u));
  /* 12454537 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454539 push 0x12483438 */
  push32((uint32_t)(0x12483438u));
  /* 1245453e push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 12454543 push 0x12483518 */
  push32((uint32_t)(0x12483518u));
  /* 12454548 call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x1245454eu);
  /* 1245454e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454551 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454553 call 0x12456510 */
  push32(0x12454558u); f_12456510();
  /* 12454558 mov esi, esp */
  ESI = (ESP);
  /* 1245455a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245455c push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12454561 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454563 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454569u);
  /* 12454569 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245456c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245456e call 0x12456510 */
  push32(0x12454573u); f_12456510();
  /* 12454573 mov esi, esp */
  ESI = (ESP);
  /* 12454575 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454577 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454579 push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 1245457e push 0 */
  push32((uint32_t)(0x0u));
  /* 12454580 call dword ptr [0x12486488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486488))), 0x12454586u);
  /* 12454586 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454589 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245458b call 0x12456510 */
  push32(0x12454590u); f_12456510();
  /* 12454590 mov esi, esp */
  ESI = (ESP);
  /* 12454592 push 0x1247e6dc */
  push32((uint32_t)(0x1247e6dcu));
  /* 12454597 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x1245459du);
  /* 1245459d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124545a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124545a2 call 0x12456510 */
  push32(0x124545a7u); f_12456510();
  /* 124545a7 mov esi, esp */
  ESI = (ESP);
  /* 124545a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124545ab push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 124545b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 124545b2 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x124545b8u);
  /* 124545b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124545bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124545bd call 0x12456510 */
  push32(0x124545c2u); f_12456510();
  /* 124545c2 mov esi, esp */
  ESI = (ESP);
  /* 124545c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124545c6 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 124545cb push 4 */
  push32((uint32_t)(0x4u));
  /* 124545cd call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x124545d3u);
  /* 124545d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124545d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124545d8 call 0x12456510 */
  push32(0x124545ddu); f_12456510();
  /* 124545dd mov esi, esp */
  ESI = (ESP);
  /* 124545df push 0 */
  push32((uint32_t)(0x0u));
  /* 124545e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124545e3 push 0x12483568 */
  push32((uint32_t)(0x12483568u));
  /* 124545e8 push 4 */
  push32((uint32_t)(0x4u));
  /* 124545ea call dword ptr [0x12486488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486488))), 0x124545f0u);
  /* 124545f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124545f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124545f5 call 0x12456510 */
  push32(0x124545fau); f_12456510();
  /* 124545fa mov esi, esp */
  ESI = (ESP);
  /* 124545fc push 4 */
  push32((uint32_t)(0x4u));
  /* 124545fe call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x12454604u);
  /* 12454604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454609 call 0x12456510 */
  push32(0x1245460eu); f_12456510();
  /* 1245460e mov esi, esp */
  ESI = (ESP);
  /* 12454610 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454612 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12454617 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454619 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x1245461fu);
  /* 1245461f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454622 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454624 call 0x12456510 */
  push32(0x12454629u); f_12456510();
  /* 12454629 mov esi, esp */
  ESI = (ESP);
  /* 1245462b push 1 */
  push32((uint32_t)(0x1u));
  /* 1245462d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1245462f call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454635u);
  /* 12454635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245463a call 0x12456510 */
  push32(0x1245463fu); f_12456510();
  /* 1245463f mov esi, esp */
  ESI = (ESP);
  /* 12454641 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12454646 push 8 */
  push32((uint32_t)(0x8u));
  /* 12454648 call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x1245464eu);
  /* 1245464e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454653 call 0x12456510 */
  push32(0x12454658u); f_12456510();
L_12454658:;
  /* 12454658 mov esi, esp */
  ESI = (ESP);
  /* 1245465a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1245465c call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12454662u);
  /* 12454662 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454667 call 0x12456510 */
  push32(0x1245466cu); f_12456510();
  /* 1245466c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454671 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454673 je 0x124547c9 */
  if (C.zf) goto L_124547c9;
  /* 12454679 mov esi, esp */
  ESI = (ESP);
  /* 1245467b push 8 */
  push32((uint32_t)(0x8u));
  /* 1245467d call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x12454683u);
  /* 12454683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454688 call 0x12456510 */
  push32(0x1245468du); f_12456510();
  /* 1245468d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454694 je 0x124547c9 */
  if (C.zf) goto L_124547c9;
  /* 1245469a mov esi, esp */
  ESI = (ESP);
  /* 1245469c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245469e push 0x15 */
  push32((uint32_t)(0x15u));
  /* 124546a0 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124546a6u);
  /* 124546a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124546a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124546ab call 0x12456510 */
  push32(0x124546b0u); f_12456510();
  /* 124546b0 mov esi, esp */
  ESI = (ESP);
  /* 124546b2 push 0x1247e6d0 */
  push32((uint32_t)(0x1247e6d0u));
  /* 124546b7 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x124546bdu);
  /* 124546bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124546c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124546c2 call 0x12456510 */
  push32(0x124546c7u); f_12456510();
  /* 124546c7 mov esi, esp */
  ESI = (ESP);
  /* 124546c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124546cb push 0x64 */
  push32((uint32_t)(0x64u));
  /* 124546cd call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124546d3u);
  /* 124546d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124546d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124546d8 call 0x12456510 */
  push32(0x124546ddu); f_12456510();
  /* 124546dd mov esi, esp */
  ESI = (ESP);
  /* 124546df push 1 */
  push32((uint32_t)(0x1u));
  /* 124546e1 push 0x12483400 */
  push32((uint32_t)(0x12483400u));
  /* 124546e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124546e8 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124546eeu);
  /* 124546ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124546f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124546f3 call 0x12456510 */
  push32(0x124546f8u); f_12456510();
  /* 124546f8 mov esi, esp */
  ESI = (ESP);
  /* 124546fa push 1 */
  push32((uint32_t)(0x1u));
  /* 124546fc push 0x12483438 */
  push32((uint32_t)(0x12483438u));
  /* 12454701 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454703 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12454709u);
  /* 12454709 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245470c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245470e call 0x12456510 */
  push32(0x12454713u); f_12456510();
  /* 12454713 mov esi, esp */
  ESI = (ESP);
  /* 12454715 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454717 push 0x12483428 */
  push32((uint32_t)(0x12483428u));
  /* 1245471c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245471e call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12454724u);
  /* 12454724 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454727 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454729 call 0x12456510 */
  push32(0x1245472eu); f_12456510();
  /* 1245472e mov esi, esp */
  ESI = (ESP);
  /* 12454730 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454732 push 0x12483410 */
  push32((uint32_t)(0x12483410u));
  /* 12454737 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454739 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245473fu);
  /* 1245473f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454742 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454744 call 0x12456510 */
  push32(0x12454749u); f_12456510();
  /* 12454749 mov esi, esp */
  ESI = (ESP);
  /* 1245474b push 1 */
  push32((uint32_t)(0x1u));
  /* 1245474d push 0x12483470 */
  push32((uint32_t)(0x12483470u));
  /* 12454752 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454754 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245475au);
  /* 1245475a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245475d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245475f call 0x12456510 */
  push32(0x12454764u); f_12456510();
  /* 12454764 mov esi, esp */
  ESI = (ESP);
  /* 12454766 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454768 push 0x12483488 */
  push32((uint32_t)(0x12483488u));
  /* 1245476d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245476f call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12454775u);
  /* 12454775 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454778 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245477a call 0x12456510 */
  push32(0x1245477fu); f_12456510();
  /* 1245477f mov esi, esp */
  ESI = (ESP);
  /* 12454781 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454783 push 0x12483498 */
  push32((uint32_t)(0x12483498u));
  /* 12454788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245478a call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12454790u);
  /* 12454790 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454793 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454795 call 0x12456510 */
  push32(0x1245479au); f_12456510();
  /* 1245479a mov esi, esp */
  ESI = (ESP);
  /* 1245479c push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1245479e call dword ptr [0x12486448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486448))), 0x124547a4u);
  /* 124547a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124547a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124547a9 call 0x12456510 */
  push32(0x124547aeu); f_12456510();
  /* 124547ae mov esi, esp */
  ESI = (ESP);
  /* 124547b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124547b2 push 0x12483448 */
  push32((uint32_t)(0x12483448u));
  /* 124547b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124547b9 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x124547bfu);
  /* 124547bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124547c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124547c4 call 0x12456510 */
  push32(0x124547c9u); f_12456510();
L_124547c9:;
  /* 124547c9 mov esi, esp */
  ESI = (ESP);
  /* 124547cb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 124547cd call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124547d3u);
  /* 124547d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124547d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124547d8 call 0x12456510 */
  push32(0x124547ddu); f_12456510();
  /* 124547dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124547e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124547e4 je 0x12454960 */
  if (C.zf) goto L_12454960;
  /* 124547ea mov esi, esp */
  ESI = (ESP);
  /* 124547ec push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 124547f1 push 0x12483568 */
  push32((uint32_t)(0x12483568u));
  /* 124547f6 call dword ptr [0x1248648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248648c))), 0x124547fcu);
  /* 124547fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124547ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454801 call 0x12456510 */
  push32(0x12454806u); f_12456510();
  /* 12454806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454808 jle 0x12454960 */
  if ((C.zf||C.sf!=C.of)) goto L_12454960;
  /* 1245480e mov esi, esp */
  ESI = (ESP);
  /* 12454810 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12454815 push 0x12483568 */
  push32((uint32_t)(0x12483568u));
  /* 1245481a call dword ptr [0x1248648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248648c))), 0x12454820u);
  /* 12454820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454825 call 0x12456510 */
  push32(0x1245482au); f_12456510();
  /* 1245482a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245482c jle 0x12454960 */
  if ((C.zf||C.sf!=C.of)) goto L_12454960;
  /* 12454832 mov esi, esp */
  ESI = (ESP);
  /* 12454834 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454836 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 1245483b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245483d call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x12454843u);
  /* 12454843 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454848 call 0x12456510 */
  push32(0x1245484du); f_12456510();
  /* 1245484d mov esi, esp */
  ESI = (ESP);
  /* 1245484f push 0 */
  push32((uint32_t)(0x0u));
  /* 12454851 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x12454857u);
  /* 12454857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245485a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245485c call 0x12456510 */
  push32(0x12454861u); f_12456510();
  /* 12454861 mov esi, esp */
  ESI = (ESP);
  /* 12454863 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454865 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12454867 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245486du);
  /* 1245486d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454870 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454872 call 0x12456510 */
  push32(0x12454877u); f_12456510();
  /* 12454877 mov esi, esp */
  ESI = (ESP);
  /* 12454879 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245487b push 0x12483548 */
  push32((uint32_t)(0x12483548u));
  /* 12454880 push 4 */
  push32((uint32_t)(0x4u));
  /* 12454882 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454888u);
  /* 12454888 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245488b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245488d call 0x12456510 */
  push32(0x12454892u); f_12456510();
  /* 12454892 mov esi, esp */
  ESI = (ESP);
  /* 12454894 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454896 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454898 push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 1245489d push 4 */
  push32((uint32_t)(0x4u));
  /* 1245489f call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x124548a5u);
  /* 124548a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124548a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124548aa call 0x12456510 */
  push32(0x124548afu); f_12456510();
  /* 124548af mov esi, esp */
  ESI = (ESP);
  /* 124548b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124548b3 push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 124548b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 124548ba call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x124548c0u);
  /* 124548c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124548c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124548c5 call 0x12456510 */
  push32(0x124548cau); f_12456510();
  /* 124548ca mov esi, esp */
  ESI = (ESP);
  /* 124548cc push 1 */
  push32((uint32_t)(0x1u));
  /* 124548ce push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 124548d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 124548d5 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x124548dbu);
  /* 124548db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124548de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124548e0 call 0x12456510 */
  push32(0x124548e5u); f_12456510();
  /* 124548e5 mov esi, esp */
  ESI = (ESP);
  /* 124548e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124548e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124548eb push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 124548f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 124548f2 call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x124548f8u);
  /* 124548f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124548fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124548fd call 0x12456510 */
  push32(0x12454902u); f_12456510();
  /* 12454902 mov esi, esp */
  ESI = (ESP);
  /* 12454904 push 4 */
  push32((uint32_t)(0x4u));
  /* 12454906 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x1245490cu);
  /* 1245490c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245490f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454911 call 0x12456510 */
  push32(0x12454916u); f_12456510();
  /* 12454916 mov esi, esp */
  ESI = (ESP);
  /* 12454918 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245491a push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 1245491f push 0 */
  push32((uint32_t)(0x0u));
  /* 12454921 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454927u);
  /* 12454927 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245492a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245492c call 0x12456510 */
  push32(0x12454931u); f_12456510();
  /* 12454931 mov esi, esp */
  ESI = (ESP);
  /* 12454933 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454935 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12454937 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245493du);
  /* 1245493d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454940 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454942 call 0x12456510 */
  push32(0x12454947u); f_12456510();
  /* 12454947 mov esi, esp */
  ESI = (ESP);
  /* 12454949 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1245494e push 0xa */
  push32((uint32_t)(0xau));
  /* 12454950 call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x12454956u);
  /* 12454956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454959 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245495b call 0x12456510 */
  push32(0x12454960u); f_12456510();
L_12454960:;
  /* 12454960 mov esi, esp */
  ESI = (ESP);
  /* 12454962 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12454964 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245496au);
  /* 1245496a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245496d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245496f call 0x12456510 */
  push32(0x12454974u); f_12456510();
  /* 12454974 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245497b je 0x12454ac3 */
  if (C.zf) goto L_12454ac3;
  /* 12454981 mov esi, esp */
  ESI = (ESP);
  /* 12454983 push 0xa */
  push32((uint32_t)(0xau));
  /* 12454985 call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x1245498bu);
  /* 1245498b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245498e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454990 call 0x12456510 */
  push32(0x12454995u); f_12456510();
  /* 12454995 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245499a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245499c je 0x12454ac3 */
  if (C.zf) goto L_12454ac3;
  /* 124549a2 mov esi, esp */
  ESI = (ESP);
  /* 124549a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124549a6 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 124549ab push 0 */
  push32((uint32_t)(0x0u));
  /* 124549ad call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x124549b3u);
  /* 124549b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124549b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124549b8 call 0x12456510 */
  push32(0x124549bdu); f_12456510();
  /* 124549bd mov esi, esp */
  ESI = (ESP);
  /* 124549bf push 0 */
  push32((uint32_t)(0x0u));
  /* 124549c1 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 124549c3 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124549c9u);
  /* 124549c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124549cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124549ce call 0x12456510 */
  push32(0x124549d3u); f_12456510();
  /* 124549d3 mov esi, esp */
  ESI = (ESP);
  /* 124549d5 push 0x1247e6c4 */
  push32((uint32_t)(0x1247e6c4u));
  /* 124549da call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x124549e0u);
  /* 124549e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124549e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124549e5 call 0x12456510 */
  push32(0x124549eau); f_12456510();
  /* 124549ea mov esi, esp */
  ESI = (ESP);
  /* 124549ec push 0x47 */
  push32((uint32_t)(0x47u));
  /* 124549ee call dword ptr [0x12486460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486460))), 0x124549f4u);
  /* 124549f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124549f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124549f9 call 0x12456510 */
  push32(0x124549feu); f_12456510();
  /* 124549fe mov esi, esp */
  ESI = (ESP);
  /* 12454a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454a02 push 0x12483548 */
  push32((uint32_t)(0x12483548u));
  /* 12454a07 push 4 */
  push32((uint32_t)(0x4u));
  /* 12454a09 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454a0fu);
  /* 12454a0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454a12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454a14 call 0x12456510 */
  push32(0x12454a19u); f_12456510();
  /* 12454a19 mov esi, esp */
  ESI = (ESP);
  /* 12454a1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12454a1d push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12454a22 push 4 */
  push32((uint32_t)(0x4u));
  /* 12454a24 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454a2au);
  /* 12454a2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454a2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454a2f call 0x12456510 */
  push32(0x12454a34u); f_12456510();
  /* 12454a34 mov esi, esp */
  ESI = (ESP);
  /* 12454a36 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454a38 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12454a3d push 4 */
  push32((uint32_t)(0x4u));
  /* 12454a3f call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454a45u);
  /* 12454a45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454a48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454a4a call 0x12456510 */
  push32(0x12454a4fu); f_12456510();
  /* 12454a4f mov esi, esp */
  ESI = (ESP);
  /* 12454a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454a53 push 4 */
  push32((uint32_t)(0x4u));
  /* 12454a55 call dword ptr [0x12486490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486490))), 0x12454a5bu);
  /* 12454a5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454a5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454a60 call 0x12456510 */
  push32(0x12454a65u); f_12456510();
  /* 12454a65 mov esi, esp */
  ESI = (ESP);
  /* 12454a67 push 4 */
  push32((uint32_t)(0x4u));
  /* 12454a69 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x12454a6fu);
  /* 12454a6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454a72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454a74 call 0x12456510 */
  push32(0x12454a79u); f_12456510();
  /* 12454a79 mov esi, esp */
  ESI = (ESP);
  /* 12454a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12454a7d push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12454a82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454a84 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454a8au);
  /* 12454a8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454a8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454a8f call 0x12456510 */
  push32(0x12454a94u); f_12456510();
  /* 12454a94 mov esi, esp */
  ESI = (ESP);
  /* 12454a96 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12454a9b push 9 */
  push32((uint32_t)(0x9u));
  /* 12454a9d call dword ptr [0x12486444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486444))), 0x12454aa3u);
  /* 12454aa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454aa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454aa8 call 0x12456510 */
  push32(0x12454aadu); f_12456510();
  /* 12454aad mov esi, esp */
  ESI = (ESP);
  /* 12454aaf push 1 */
  push32((uint32_t)(0x1u));
  /* 12454ab1 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12454ab3 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454ab9u);
  /* 12454ab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454abe call 0x12456510 */
  push32(0x12454ac3u); f_12456510();
L_12454ac3:;
  /* 12454ac3 mov esi, esp */
  ESI = (ESP);
  /* 12454ac5 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12454ac7 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12454acdu);
  /* 12454acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454ad2 call 0x12456510 */
  push32(0x12454ad7u); f_12456510();
  /* 12454ad7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454adc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454ade je 0x12454ddb */
  if (C.zf) goto L_12454ddb;
  /* 12454ae4 mov esi, esp */
  ESI = (ESP);
  /* 12454ae6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12454ae8 call dword ptr [0x1248644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248644c))), 0x12454aeeu);
  /* 12454aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454af1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454af3 call 0x12456510 */
  push32(0x12454af8u); f_12456510();
  /* 12454af8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454aff je 0x12454ddb */
  if (C.zf) goto L_12454ddb;
  /* 12454b05 mov esi, esp */
  ESI = (ESP);
  /* 12454b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454b09 push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12454b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12454b10 call dword ptr [0x12486454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486454))), 0x12454b16u);
  /* 12454b16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454b19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454b1b call 0x12456510 */
  push32(0x12454b20u); f_12456510();
  /* 12454b20 mov esi, esp */
  ESI = (ESP);
  /* 12454b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454b24 call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x12454b2au);
  /* 12454b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454b2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454b2f call 0x12456510 */
  push32(0x12454b34u); f_12456510();
  /* 12454b34 mov esi, esp */
  ESI = (ESP);
  /* 12454b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454b38 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12454b3a call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454b40u);
  /* 12454b40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454b43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454b45 call 0x12456510 */
  push32(0x12454b4au); f_12456510();
  /* 12454b4a mov esi, esp */
  ESI = (ESP);
  /* 12454b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12454b4e push 0x12483560 */
  push32((uint32_t)(0x12483560u));
  /* 12454b53 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454b55 push 0x124834a8 */
  push32((uint32_t)(0x124834a8u));
  /* 12454b5a push 0x12483528 */
  push32((uint32_t)(0x12483528u));
  /* 12454b5f push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12454b64 call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12454b6au);
  /* 12454b6a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454b6f call 0x12456510 */
  push32(0x12454b74u); f_12456510();
  /* 12454b74 mov esi, esp */
  ESI = (ESP);
  /* 12454b76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454b78 push 0x12483560 */
  push32((uint32_t)(0x12483560u));
  /* 12454b7d push 5 */
  push32((uint32_t)(0x5u));
  /* 12454b7f push 0x12483420 */
  push32((uint32_t)(0x12483420u));
  /* 12454b84 push 0x12483520 */
  push32((uint32_t)(0x12483520u));
  /* 12454b89 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12454b8e call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12454b94u);
  /* 12454b94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454b97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454b99 call 0x12456510 */
  push32(0x12454b9eu); f_12456510();
  /* 12454b9e mov esi, esp */
  ESI = (ESP);
  /* 12454ba0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454ba2 push 0x12483578 */
  push32((uint32_t)(0x12483578u));
  /* 12454ba7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454ba9 push 0x124834a8 */
  push32((uint32_t)(0x124834a8u));
  /* 12454bae push 0x12483528 */
  push32((uint32_t)(0x12483528u));
  /* 12454bb3 push 0x124834e8 */
  push32((uint32_t)(0x124834e8u));
  /* 12454bb8 call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12454bbeu);
  /* 12454bbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454bc3 call 0x12456510 */
  push32(0x12454bc8u); f_12456510();
  /* 12454bc8 mov esi, esp */
  ESI = (ESP);
  /* 12454bca push 0 */
  push32((uint32_t)(0x0u));
  /* 12454bcc push 0x12483578 */
  push32((uint32_t)(0x12483578u));
  /* 12454bd1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454bd3 push 0x12483420 */
  push32((uint32_t)(0x12483420u));
  /* 12454bd8 push 0x12483520 */
  push32((uint32_t)(0x12483520u));
  /* 12454bdd push 0x124834f0 */
  push32((uint32_t)(0x124834f0u));
  /* 12454be2 call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12454be8u);
  /* 12454be8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454beb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454bed call 0x12456510 */
  push32(0x12454bf2u); f_12456510();
  /* 12454bf2 mov esi, esp */
  ESI = (ESP);
  /* 12454bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454bf6 push 0x12483588 */
  push32((uint32_t)(0x12483588u));
  /* 12454bfb push 5 */
  push32((uint32_t)(0x5u));
  /* 12454bfd push 0x124834b8 */
  push32((uint32_t)(0x124834b8u));
  /* 12454c02 push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 12454c07 push 0x124834f8 */
  push32((uint32_t)(0x124834f8u));
  /* 12454c0c call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12454c12u);
  /* 12454c12 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454c15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454c17 call 0x12456510 */
  push32(0x12454c1cu); f_12456510();
  /* 12454c1c mov esi, esp */
  ESI = (ESP);
  /* 12454c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12454c20 push 0x12483588 */
  push32((uint32_t)(0x12483588u));
  /* 12454c25 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454c27 push 0x124834b8 */
  push32((uint32_t)(0x124834b8u));
  /* 12454c2c push 0x12483510 */
  push32((uint32_t)(0x12483510u));
  /* 12454c31 push 0x12483500 */
  push32((uint32_t)(0x12483500u));
  /* 12454c36 call dword ptr [0x1248646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248646c))), 0x12454c3cu);
  /* 12454c3c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454c3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454c41 call 0x12456510 */
  push32(0x12454c46u); f_12456510();
  /* 12454c46 mov esi, esp */
  ESI = (ESP);
  /* 12454c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454c4a push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12454c4f push 5 */
  push32((uint32_t)(0x5u));
  /* 12454c51 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454c57u);
  /* 12454c57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454c5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454c5c call 0x12456510 */
  push32(0x12454c61u); f_12456510();
  /* 12454c61 mov esi, esp */
  ESI = (ESP);
  /* 12454c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454c67 push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 12454c6c push 5 */
  push32((uint32_t)(0x5u));
  /* 12454c6e call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x12454c74u);
  /* 12454c74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454c77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454c79 call 0x12456510 */
  push32(0x12454c7eu); f_12456510();
  /* 12454c7e mov esi, esp */
  ESI = (ESP);
  /* 12454c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454c82 push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12454c87 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454c89 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454c8fu);
  /* 12454c8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454c92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454c94 call 0x12456510 */
  push32(0x12454c99u); f_12456510();
  /* 12454c99 mov esi, esp */
  ESI = (ESP);
  /* 12454c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12454c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12454c9f push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 12454ca4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454ca6 call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x12454cacu);
  /* 12454cac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454caf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454cb1 call 0x12456510 */
  push32(0x12454cb6u); f_12456510();
  /* 12454cb6 mov esi, esp */
  ESI = (ESP);
  /* 12454cb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454cba push 0x124834e8 */
  push32((uint32_t)(0x124834e8u));
  /* 12454cbf push 5 */
  push32((uint32_t)(0x5u));
  /* 12454cc1 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454cc7u);
  /* 12454cc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454ccc call 0x12456510 */
  push32(0x12454cd1u); f_12456510();
  /* 12454cd1 mov esi, esp */
  ESI = (ESP);
  /* 12454cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454cd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454cd7 push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 12454cdc push 5 */
  push32((uint32_t)(0x5u));
  /* 12454cde call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x12454ce4u);
  /* 12454ce4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454ce9 call 0x12456510 */
  push32(0x12454ceeu); f_12456510();
  /* 12454cee mov esi, esp */
  ESI = (ESP);
  /* 12454cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454cf2 push 0x124834f0 */
  push32((uint32_t)(0x124834f0u));
  /* 12454cf7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454cf9 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454cffu);
  /* 12454cff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454d02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454d04 call 0x12456510 */
  push32(0x12454d09u); f_12456510();
  /* 12454d09 mov esi, esp */
  ESI = (ESP);
  /* 12454d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12454d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12454d0f push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 12454d14 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454d16 call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x12454d1cu);
  /* 12454d1c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454d1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454d21 call 0x12456510 */
  push32(0x12454d26u); f_12456510();
  /* 12454d26 mov esi, esp */
  ESI = (ESP);
  /* 12454d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454d2a push 0x124834f8 */
  push32((uint32_t)(0x124834f8u));
  /* 12454d2f push 5 */
  push32((uint32_t)(0x5u));
  /* 12454d31 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454d37u);
  /* 12454d37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454d3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454d3c call 0x12456510 */
  push32(0x12454d41u); f_12456510();
  /* 12454d41 mov esi, esp */
  ESI = (ESP);
  /* 12454d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454d47 push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 12454d4c push 5 */
  push32((uint32_t)(0x5u));
  /* 12454d4e call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x12454d54u);
  /* 12454d54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454d57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454d59 call 0x12456510 */
  push32(0x12454d5eu); f_12456510();
  /* 12454d5e mov esi, esp */
  ESI = (ESP);
  /* 12454d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454d62 push 0x12483500 */
  push32((uint32_t)(0x12483500u));
  /* 12454d67 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454d69 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454d6fu);
  /* 12454d6f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454d72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454d74 call 0x12456510 */
  push32(0x12454d79u); f_12456510();
  /* 12454d79 mov esi, esp */
  ESI = (ESP);
  /* 12454d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12454d7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12454d7f push 0x12483550 */
  push32((uint32_t)(0x12483550u));
  /* 12454d84 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454d86 call dword ptr [0x12486474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486474))), 0x12454d8cu);
  /* 12454d8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454d8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454d91 call 0x12456510 */
  push32(0x12454d96u); f_12456510();
  /* 12454d96 mov esi, esp */
  ESI = (ESP);
  /* 12454d98 push 5 */
  push32((uint32_t)(0x5u));
  /* 12454d9a call dword ptr [0x12486468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486468))), 0x12454da0u);
  /* 12454da0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454da3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454da5 call 0x12456510 */
  push32(0x12454daau); f_12456510();
  /* 12454daa mov esi, esp */
  ESI = (ESP);
  /* 12454dac push 0 */
  push32((uint32_t)(0x0u));
  /* 12454dae push 0x124834c8 */
  push32((uint32_t)(0x124834c8u));
  /* 12454db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454db5 call dword ptr [0x12486470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486470))), 0x12454dbbu);
  /* 12454dbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454dbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454dc0 call 0x12456510 */
  push32(0x12454dc5u); f_12456510();
  /* 12454dc5 mov esi, esp */
  ESI = (ESP);
  /* 12454dc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454dc9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12454dcb call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454dd1u);
  /* 12454dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454dd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454dd6 call 0x12456510 */
  push32(0x12454ddbu); f_12456510();
L_12454ddb:;
  /* 12454ddb mov esi, esp */
  ESI = (ESP);
  /* 12454ddd push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12454ddf call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12454de5u);
  /* 12454de5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454de8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454dea call 0x12456510 */
  push32(0x12454defu); f_12456510();
  /* 12454def and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454df4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454df6 je 0x12454ee6 */
  if (C.zf) goto L_12454ee6;
  /* 12454dfc mov esi, esp */
  ESI = (ESP);
  /* 12454dfe push 0x124834d8 */
  push32((uint32_t)(0x124834d8u));
  /* 12454e03 call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x12454e09u);
  /* 12454e09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454e0e call 0x12456510 */
  push32(0x12454e13u); f_12456510();
  /* 12454e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454e15 jne 0x12454ee6 */
  if (!C.zf) goto L_12454ee6;
  /* 12454e1b mov esi, esp */
  ESI = (ESP);
  /* 12454e1d push 0x124834e0 */
  push32((uint32_t)(0x124834e0u));
  /* 12454e22 call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x12454e28u);
  /* 12454e28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454e2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454e2d call 0x12456510 */
  push32(0x12454e32u); f_12456510();
  /* 12454e32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454e34 jne 0x12454ee6 */
  if (!C.zf) goto L_12454ee6;
  /* 12454e3a mov esi, esp */
  ESI = (ESP);
  /* 12454e3c push 0x124834e8 */
  push32((uint32_t)(0x124834e8u));
  /* 12454e41 call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x12454e47u);
  /* 12454e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454e4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454e4c call 0x12456510 */
  push32(0x12454e51u); f_12456510();
  /* 12454e51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454e53 jne 0x12454ee6 */
  if (!C.zf) goto L_12454ee6;
  /* 12454e59 mov esi, esp */
  ESI = (ESP);
  /* 12454e5b push 0x124834f0 */
  push32((uint32_t)(0x124834f0u));
  /* 12454e60 call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x12454e66u);
  /* 12454e66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454e69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454e6b call 0x12456510 */
  push32(0x12454e70u); f_12456510();
  /* 12454e70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454e72 jne 0x12454ee6 */
  if (!C.zf) goto L_12454ee6;
  /* 12454e74 mov esi, esp */
  ESI = (ESP);
  /* 12454e76 push 0x124834f8 */
  push32((uint32_t)(0x124834f8u));
  /* 12454e7b call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x12454e81u);
  /* 12454e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454e84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454e86 call 0x12456510 */
  push32(0x12454e8bu); f_12456510();
  /* 12454e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454e8d jne 0x12454ee6 */
  if (!C.zf) goto L_12454ee6;
  /* 12454e8f mov esi, esp */
  ESI = (ESP);
  /* 12454e91 push 0x12483500 */
  push32((uint32_t)(0x12483500u));
  /* 12454e96 call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x12454e9cu);
  /* 12454e9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454ea1 call 0x12456510 */
  push32(0x12454ea6u); f_12456510();
  /* 12454ea6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454ea8 jne 0x12454ee6 */
  if (!C.zf) goto L_12454ee6;
  /* 12454eaa mov esi, esp */
  ESI = (ESP);
  /* 12454eac push 0 */
  push32((uint32_t)(0x0u));
  /* 12454eae push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12454eb0 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454eb6u);
  /* 12454eb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454ebb call 0x12456510 */
  push32(0x12454ec0u); f_12456510();
  /* 12454ec0 mov esi, esp */
  ESI = (ESP);
  /* 12454ec2 push 0x1247e6b8 */
  push32((uint32_t)(0x1247e6b8u));
  /* 12454ec7 call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12454ecdu);
  /* 12454ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454ed0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454ed2 call 0x12456510 */
  push32(0x12454ed7u); f_12456510();
  /* 12454ed7 mov esi, esp */
  ESI = (ESP);
  /* 12454ed9 call dword ptr [0x12486494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486494))), 0x12454edfu);
  /* 12454edf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454ee1 call 0x12456510 */
  push32(0x12454ee6u); f_12456510();
L_12454ee6:;
  /* 12454ee6 mov esi, esp */
  ESI = (ESP);
  /* 12454ee8 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12454eea call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12454ef0u);
  /* 12454ef0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454ef3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454ef5 call 0x12456510 */
  push32(0x12454efau); f_12456510();
  /* 12454efa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454eff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454f01 je 0x12455623 */
  if (C.zf) goto L_12455623;
  /* 12454f07 mov esi, esp */
  ESI = (ESP);
  /* 12454f09 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12454f0b call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12454f11u);
  /* 12454f11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454f14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454f16 call 0x12456510 */
  push32(0x12454f1bu); f_12456510();
  /* 12454f1b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454f20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454f22 je 0x12454f89 */
  if (C.zf) goto L_12454f89;
  /* 12454f24 mov esi, esp */
  ESI = (ESP);
  /* 12454f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454f28 push 0x12483400 */
  push32((uint32_t)(0x12483400u));
  /* 12454f2d call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x12454f33u);
  /* 12454f33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454f36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454f38 call 0x12456510 */
  push32(0x12454f3du); f_12456510();
  /* 12454f3d cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454f40 jl 0x12454f89 */
  if ((C.sf!=C.of)) goto L_12454f89;
  /* 12454f42 mov esi, esp */
  ESI = (ESP);
  /* 12454f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454f46 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12454f48 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454f4eu);
  /* 12454f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454f51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454f53 call 0x12456510 */
  push32(0x12454f58u); f_12456510();
  /* 12454f58 mov esi, esp */
  ESI = (ESP);
  /* 12454f5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12454f5c push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12454f5e call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454f64u);
  /* 12454f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454f69 call 0x12456510 */
  push32(0x12454f6eu); f_12456510();
  /* 12454f6e mov esi, esp */
  ESI = (ESP);
  /* 12454f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454f72 push 0x12483400 */
  push32((uint32_t)(0x12483400u));
  /* 12454f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454f79 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12454f7fu);
  /* 12454f7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454f82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454f84 call 0x12456510 */
  push32(0x12454f89u); f_12456510();
L_12454f89:;
  /* 12454f89 mov esi, esp */
  ESI = (ESP);
  /* 12454f8b push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12454f8d call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12454f93u);
  /* 12454f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454f96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454f98 call 0x12456510 */
  push32(0x12454f9du); f_12456510();
  /* 12454f9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12454fa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12454fa4 je 0x1245500b */
  if (C.zf) goto L_1245500b;
  /* 12454fa6 mov esi, esp */
  ESI = (ESP);
  /* 12454fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454faa push 0x12483400 */
  push32((uint32_t)(0x12483400u));
  /* 12454faf call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x12454fb5u);
  /* 12454fb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454fb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454fba call 0x12456510 */
  push32(0x12454fbfu); f_12456510();
  /* 12454fbf cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454fc2 jge 0x1245500b */
  if ((C.sf==C.of)) goto L_1245500b;
  /* 12454fc4 mov esi, esp */
  ESI = (ESP);
  /* 12454fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454fc8 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12454fca call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454fd0u);
  /* 12454fd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454fd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454fd5 call 0x12456510 */
  push32(0x12454fdau); f_12456510();
  /* 12454fda mov esi, esp */
  ESI = (ESP);
  /* 12454fdc push 1 */
  push32((uint32_t)(0x1u));
  /* 12454fde push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12454fe0 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12454fe6u);
  /* 12454fe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12454fe9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12454feb call 0x12456510 */
  push32(0x12454ff0u); f_12456510();
  /* 12454ff0 mov esi, esp */
  ESI = (ESP);
  /* 12454ff2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12454ff4 push 0x12483400 */
  push32((uint32_t)(0x12483400u));
  /* 12454ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12454ffb call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455001u);
  /* 12455001 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455004 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455006 call 0x12456510 */
  push32(0x1245500bu); f_12456510();
L_1245500b:;
  /* 1245500b mov esi, esp */
  ESI = (ESP);
  /* 1245500d push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1245500f call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12455015u);
  /* 12455015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455018 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245501a call 0x12456510 */
  push32(0x1245501fu); f_12456510();
  /* 1245501f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12455024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12455026 je 0x1245508d */
  if (C.zf) goto L_1245508d;
  /* 12455028 mov esi, esp */
  ESI = (ESP);
  /* 1245502a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245502c push 0x12483438 */
  push32((uint32_t)(0x12483438u));
  /* 12455031 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x12455037u);
  /* 12455037 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245503a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245503c call 0x12456510 */
  push32(0x12455041u); f_12456510();
  /* 12455041 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455044 jl 0x1245508d */
  if ((C.sf!=C.of)) goto L_1245508d;
  /* 12455046 mov esi, esp */
  ESI = (ESP);
  /* 12455048 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245504a push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1245504c call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455052u);
  /* 12455052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455055 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455057 call 0x12456510 */
  push32(0x1245505cu); f_12456510();
  /* 1245505c mov esi, esp */
  ESI = (ESP);
  /* 1245505e push 1 */
  push32((uint32_t)(0x1u));
  /* 12455060 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12455062 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455068u);
  /* 12455068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245506b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245506d call 0x12456510 */
  push32(0x12455072u); f_12456510();
  /* 12455072 mov esi, esp */
  ESI = (ESP);
  /* 12455074 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455076 push 0x12483438 */
  push32((uint32_t)(0x12483438u));
  /* 1245507b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245507d call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455083u);
  /* 12455083 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455086 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455088 call 0x12456510 */
  push32(0x1245508du); f_12456510();
L_1245508d:;
  /* 1245508d mov esi, esp */
  ESI = (ESP);
  /* 1245508f push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12455091 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12455097u);
  /* 12455097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245509a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245509c call 0x12456510 */
  push32(0x124550a1u); f_12456510();
  /* 124550a1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124550a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124550a8 je 0x1245510f */
  if (C.zf) goto L_1245510f;
  /* 124550aa mov esi, esp */
  ESI = (ESP);
  /* 124550ac push 0 */
  push32((uint32_t)(0x0u));
  /* 124550ae push 0x12483438 */
  push32((uint32_t)(0x12483438u));
  /* 124550b3 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x124550b9u);
  /* 124550b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124550bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124550be call 0x12456510 */
  push32(0x124550c3u); f_12456510();
  /* 124550c3 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124550c6 jge 0x1245510f */
  if ((C.sf==C.of)) goto L_1245510f;
  /* 124550c8 mov esi, esp */
  ESI = (ESP);
  /* 124550ca push 0 */
  push32((uint32_t)(0x0u));
  /* 124550cc push 0x55 */
  push32((uint32_t)(0x55u));
  /* 124550ce call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124550d4u);
  /* 124550d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124550d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124550d9 call 0x12456510 */
  push32(0x124550deu); f_12456510();
  /* 124550de mov esi, esp */
  ESI = (ESP);
  /* 124550e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124550e2 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 124550e4 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124550eau);
  /* 124550ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124550ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124550ef call 0x12456510 */
  push32(0x124550f4u); f_12456510();
  /* 124550f4 mov esi, esp */
  ESI = (ESP);
  /* 124550f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124550f8 push 0x12483438 */
  push32((uint32_t)(0x12483438u));
  /* 124550fd push 0 */
  push32((uint32_t)(0x0u));
  /* 124550ff call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455105u);
  /* 12455105 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245510a call 0x12456510 */
  push32(0x1245510fu); f_12456510();
L_1245510f:;
  /* 1245510f mov esi, esp */
  ESI = (ESP);
  /* 12455111 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12455113 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12455119u);
  /* 12455119 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245511c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245511e call 0x12456510 */
  push32(0x12455123u); f_12456510();
  /* 12455123 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12455128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245512a je 0x12455191 */
  if (C.zf) goto L_12455191;
  /* 1245512c mov esi, esp */
  ESI = (ESP);
  /* 1245512e push 0 */
  push32((uint32_t)(0x0u));
  /* 12455130 push 0x12483428 */
  push32((uint32_t)(0x12483428u));
  /* 12455135 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x1245513bu);
  /* 1245513b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245513e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455140 call 0x12456510 */
  push32(0x12455145u); f_12456510();
  /* 12455145 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455148 jl 0x12455191 */
  if ((C.sf!=C.of)) goto L_12455191;
  /* 1245514a mov esi, esp */
  ESI = (ESP);
  /* 1245514c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245514e push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12455150 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455156u);
  /* 12455156 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245515b call 0x12456510 */
  push32(0x12455160u); f_12456510();
  /* 12455160 mov esi, esp */
  ESI = (ESP);
  /* 12455162 push 1 */
  push32((uint32_t)(0x1u));
  /* 12455164 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12455166 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245516cu);
  /* 1245516c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245516f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455171 call 0x12456510 */
  push32(0x12455176u); f_12456510();
  /* 12455176 mov esi, esp */
  ESI = (ESP);
  /* 12455178 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245517a push 0x12483428 */
  push32((uint32_t)(0x12483428u));
  /* 1245517f push 0 */
  push32((uint32_t)(0x0u));
  /* 12455181 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455187u);
  /* 12455187 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245518a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245518c call 0x12456510 */
  push32(0x12455191u); f_12456510();
L_12455191:;
  /* 12455191 mov esi, esp */
  ESI = (ESP);
  /* 12455193 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12455195 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245519bu);
  /* 1245519b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245519e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124551a0 call 0x12456510 */
  push32(0x124551a5u); f_12456510();
  /* 124551a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124551aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124551ac je 0x12455213 */
  if (C.zf) goto L_12455213;
  /* 124551ae mov esi, esp */
  ESI = (ESP);
  /* 124551b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124551b2 push 0x12483428 */
  push32((uint32_t)(0x12483428u));
  /* 124551b7 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x124551bdu);
  /* 124551bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124551c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124551c2 call 0x12456510 */
  push32(0x124551c7u); f_12456510();
  /* 124551c7 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124551ca jge 0x12455213 */
  if ((C.sf==C.of)) goto L_12455213;
  /* 124551cc mov esi, esp */
  ESI = (ESP);
  /* 124551ce push 0 */
  push32((uint32_t)(0x0u));
  /* 124551d0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 124551d2 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124551d8u);
  /* 124551d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124551db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124551dd call 0x12456510 */
  push32(0x124551e2u); f_12456510();
  /* 124551e2 mov esi, esp */
  ESI = (ESP);
  /* 124551e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124551e6 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 124551e8 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124551eeu);
  /* 124551ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124551f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124551f3 call 0x12456510 */
  push32(0x124551f8u); f_12456510();
  /* 124551f8 mov esi, esp */
  ESI = (ESP);
  /* 124551fa push 1 */
  push32((uint32_t)(0x1u));
  /* 124551fc push 0x12483428 */
  push32((uint32_t)(0x12483428u));
  /* 12455201 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455203 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455209u);
  /* 12455209 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245520c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245520e call 0x12456510 */
  push32(0x12455213u); f_12456510();
L_12455213:;
  /* 12455213 mov esi, esp */
  ESI = (ESP);
  /* 12455215 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12455217 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245521du);
  /* 1245521d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455220 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455222 call 0x12456510 */
  push32(0x12455227u); f_12456510();
  /* 12455227 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245522c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245522e je 0x12455295 */
  if (C.zf) goto L_12455295;
  /* 12455230 mov esi, esp */
  ESI = (ESP);
  /* 12455232 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455234 push 0x12483410 */
  push32((uint32_t)(0x12483410u));
  /* 12455239 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x1245523fu);
  /* 1245523f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455242 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455244 call 0x12456510 */
  push32(0x12455249u); f_12456510();
  /* 12455249 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245524c jl 0x12455295 */
  if ((C.sf!=C.of)) goto L_12455295;
  /* 1245524e mov esi, esp */
  ESI = (ESP);
  /* 12455250 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455252 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12455254 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245525au);
  /* 1245525a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245525d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245525f call 0x12456510 */
  push32(0x12455264u); f_12456510();
  /* 12455264 mov esi, esp */
  ESI = (ESP);
  /* 12455266 push 1 */
  push32((uint32_t)(0x1u));
  /* 12455268 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 1245526a call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455270u);
  /* 12455270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455273 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455275 call 0x12456510 */
  push32(0x1245527au); f_12456510();
  /* 1245527a mov esi, esp */
  ESI = (ESP);
  /* 1245527c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245527e push 0x12483410 */
  push32((uint32_t)(0x12483410u));
  /* 12455283 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455285 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245528bu);
  /* 1245528b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245528e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455290 call 0x12456510 */
  push32(0x12455295u); f_12456510();
L_12455295:;
  /* 12455295 mov esi, esp */
  ESI = (ESP);
  /* 12455297 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 12455299 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245529fu);
  /* 1245529f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124552a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124552a4 call 0x12456510 */
  push32(0x124552a9u); f_12456510();
  /* 124552a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124552ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124552b0 je 0x12455317 */
  if (C.zf) goto L_12455317;
  /* 124552b2 mov esi, esp */
  ESI = (ESP);
  /* 124552b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124552b6 push 0x12483410 */
  push32((uint32_t)(0x12483410u));
  /* 124552bb call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x124552c1u);
  /* 124552c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124552c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124552c6 call 0x12456510 */
  push32(0x124552cbu); f_12456510();
  /* 124552cb cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124552ce jge 0x12455317 */
  if ((C.sf==C.of)) goto L_12455317;
  /* 124552d0 mov esi, esp */
  ESI = (ESP);
  /* 124552d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124552d4 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 124552d6 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124552dcu);
  /* 124552dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124552df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124552e1 call 0x12456510 */
  push32(0x124552e6u); f_12456510();
  /* 124552e6 mov esi, esp */
  ESI = (ESP);
  /* 124552e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 124552ea push 0x58 */
  push32((uint32_t)(0x58u));
  /* 124552ec call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124552f2u);
  /* 124552f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124552f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124552f7 call 0x12456510 */
  push32(0x124552fcu); f_12456510();
  /* 124552fc mov esi, esp */
  ESI = (ESP);
  /* 124552fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12455300 push 0x12483410 */
  push32((uint32_t)(0x12483410u));
  /* 12455305 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455307 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245530du);
  /* 1245530d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455310 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455312 call 0x12456510 */
  push32(0x12455317u); f_12456510();
L_12455317:;
  /* 12455317 mov esi, esp */
  ESI = (ESP);
  /* 12455319 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1245531b call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12455321u);
  /* 12455321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455326 call 0x12456510 */
  push32(0x1245532bu); f_12456510();
  /* 1245532b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12455330 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12455332 je 0x12455399 */
  if (C.zf) goto L_12455399;
  /* 12455334 mov esi, esp */
  ESI = (ESP);
  /* 12455336 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455338 push 0x12483470 */
  push32((uint32_t)(0x12483470u));
  /* 1245533d call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x12455343u);
  /* 12455343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455346 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455348 call 0x12456510 */
  push32(0x1245534du); f_12456510();
  /* 1245534d cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455350 jl 0x12455399 */
  if ((C.sf!=C.of)) goto L_12455399;
  /* 12455352 mov esi, esp */
  ESI = (ESP);
  /* 12455354 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455356 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12455358 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245535eu);
  /* 1245535e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455361 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455363 call 0x12456510 */
  push32(0x12455368u); f_12456510();
  /* 12455368 mov esi, esp */
  ESI = (ESP);
  /* 1245536a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245536c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1245536e call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455374u);
  /* 12455374 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455379 call 0x12456510 */
  push32(0x1245537eu); f_12456510();
  /* 1245537e mov esi, esp */
  ESI = (ESP);
  /* 12455380 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455382 push 0x12483470 */
  push32((uint32_t)(0x12483470u));
  /* 12455387 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455389 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x1245538fu);
  /* 1245538f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455392 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455394 call 0x12456510 */
  push32(0x12455399u); f_12456510();
L_12455399:;
  /* 12455399 mov esi, esp */
  ESI = (ESP);
  /* 1245539b push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1245539d call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124553a3u);
  /* 124553a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124553a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124553a8 call 0x12456510 */
  push32(0x124553adu); f_12456510();
  /* 124553ad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124553b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124553b4 je 0x1245541b */
  if (C.zf) goto L_1245541b;
  /* 124553b6 mov esi, esp */
  ESI = (ESP);
  /* 124553b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124553ba push 0x12483470 */
  push32((uint32_t)(0x12483470u));
  /* 124553bf call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x124553c5u);
  /* 124553c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124553c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124553ca call 0x12456510 */
  push32(0x124553cfu); f_12456510();
  /* 124553cf cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124553d2 jge 0x1245541b */
  if ((C.sf==C.of)) goto L_1245541b;
  /* 124553d4 mov esi, esp */
  ESI = (ESP);
  /* 124553d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124553d8 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 124553da call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124553e0u);
  /* 124553e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124553e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124553e5 call 0x12456510 */
  push32(0x124553eau); f_12456510();
  /* 124553ea mov esi, esp */
  ESI = (ESP);
  /* 124553ec push 1 */
  push32((uint32_t)(0x1u));
  /* 124553ee push 0x5d */
  push32((uint32_t)(0x5du));
  /* 124553f0 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124553f6u);
  /* 124553f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124553f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124553fb call 0x12456510 */
  push32(0x12455400u); f_12456510();
  /* 12455400 mov esi, esp */
  ESI = (ESP);
  /* 12455402 push 1 */
  push32((uint32_t)(0x1u));
  /* 12455404 push 0x12483470 */
  push32((uint32_t)(0x12483470u));
  /* 12455409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245540b call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455411u);
  /* 12455411 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455414 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455416 call 0x12456510 */
  push32(0x1245541bu); f_12456510();
L_1245541b:;
  /* 1245541b mov esi, esp */
  ESI = (ESP);
  /* 1245541d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1245541f call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12455425u);
  /* 12455425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455428 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245542a call 0x12456510 */
  push32(0x1245542fu); f_12456510();
  /* 1245542f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12455434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12455436 je 0x1245549d */
  if (C.zf) goto L_1245549d;
  /* 12455438 mov esi, esp */
  ESI = (ESP);
  /* 1245543a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245543c push 0x12483488 */
  push32((uint32_t)(0x12483488u));
  /* 12455441 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x12455447u);
  /* 12455447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245544a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245544c call 0x12456510 */
  push32(0x12455451u); f_12456510();
  /* 12455451 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455454 jl 0x1245549d */
  if ((C.sf!=C.of)) goto L_1245549d;
  /* 12455456 mov esi, esp */
  ESI = (ESP);
  /* 12455458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245545a push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1245545c call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455462u);
  /* 12455462 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455465 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455467 call 0x12456510 */
  push32(0x1245546cu); f_12456510();
  /* 1245546c mov esi, esp */
  ESI = (ESP);
  /* 1245546e push 1 */
  push32((uint32_t)(0x1u));
  /* 12455470 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12455472 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455478u);
  /* 12455478 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245547b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245547d call 0x12456510 */
  push32(0x12455482u); f_12456510();
  /* 12455482 mov esi, esp */
  ESI = (ESP);
  /* 12455484 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455486 push 0x12483488 */
  push32((uint32_t)(0x12483488u));
  /* 1245548b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245548d call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455493u);
  /* 12455493 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455496 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455498 call 0x12456510 */
  push32(0x1245549du); f_12456510();
L_1245549d:;
  /* 1245549d mov esi, esp */
  ESI = (ESP);
  /* 1245549f push 0x60 */
  push32((uint32_t)(0x60u));
  /* 124554a1 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124554a7u);
  /* 124554a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124554aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124554ac call 0x12456510 */
  push32(0x124554b1u); f_12456510();
  /* 124554b1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124554b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124554b8 je 0x1245551f */
  if (C.zf) goto L_1245551f;
  /* 124554ba mov esi, esp */
  ESI = (ESP);
  /* 124554bc push 0 */
  push32((uint32_t)(0x0u));
  /* 124554be push 0x12483488 */
  push32((uint32_t)(0x12483488u));
  /* 124554c3 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x124554c9u);
  /* 124554c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124554cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124554ce call 0x12456510 */
  push32(0x124554d3u); f_12456510();
  /* 124554d3 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124554d6 jge 0x1245551f */
  if ((C.sf==C.of)) goto L_1245551f;
  /* 124554d8 mov esi, esp */
  ESI = (ESP);
  /* 124554da push 0 */
  push32((uint32_t)(0x0u));
  /* 124554dc push 0x60 */
  push32((uint32_t)(0x60u));
  /* 124554de call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124554e4u);
  /* 124554e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124554e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124554e9 call 0x12456510 */
  push32(0x124554eeu); f_12456510();
  /* 124554ee mov esi, esp */
  ESI = (ESP);
  /* 124554f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124554f2 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 124554f4 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124554fau);
  /* 124554fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124554fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124554ff call 0x12456510 */
  push32(0x12455504u); f_12456510();
  /* 12455504 mov esi, esp */
  ESI = (ESP);
  /* 12455506 push 1 */
  push32((uint32_t)(0x1u));
  /* 12455508 push 0x12483488 */
  push32((uint32_t)(0x12483488u));
  /* 1245550d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245550f call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455515u);
  /* 12455515 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455518 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245551a call 0x12456510 */
  push32(0x1245551fu); f_12456510();
L_1245551f:;
  /* 1245551f mov esi, esp */
  ESI = (ESP);
  /* 12455521 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12455523 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x12455529u);
  /* 12455529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245552c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245552e call 0x12456510 */
  push32(0x12455533u); f_12456510();
  /* 12455533 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12455538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245553a je 0x124555a1 */
  if (C.zf) goto L_124555a1;
  /* 1245553c mov esi, esp */
  ESI = (ESP);
  /* 1245553e push 0 */
  push32((uint32_t)(0x0u));
  /* 12455540 push 0x12483498 */
  push32((uint32_t)(0x12483498u));
  /* 12455545 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x1245554bu);
  /* 1245554b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245554e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455550 call 0x12456510 */
  push32(0x12455555u); f_12456510();
  /* 12455555 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455558 jle 0x124555a1 */
  if ((C.zf||C.sf!=C.of)) goto L_124555a1;
  /* 1245555a mov esi, esp */
  ESI = (ESP);
  /* 1245555c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245555e push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12455560 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455566u);
  /* 12455566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455569 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245556b call 0x12456510 */
  push32(0x12455570u); f_12456510();
  /* 12455570 mov esi, esp */
  ESI = (ESP);
  /* 12455572 push 1 */
  push32((uint32_t)(0x1u));
  /* 12455574 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12455576 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x1245557cu);
  /* 1245557c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245557f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455581 call 0x12456510 */
  push32(0x12455586u); f_12456510();
  /* 12455586 mov esi, esp */
  ESI = (ESP);
  /* 12455588 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245558a push 0x12483498 */
  push32((uint32_t)(0x12483498u));
  /* 1245558f push 0 */
  push32((uint32_t)(0x0u));
  /* 12455591 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455597u);
  /* 12455597 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245559a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245559c call 0x12456510 */
  push32(0x124555a1u); f_12456510();
L_124555a1:;
  /* 124555a1 mov esi, esp */
  ESI = (ESP);
  /* 124555a3 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 124555a5 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x124555abu);
  /* 124555ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124555ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124555b0 call 0x12456510 */
  push32(0x124555b5u); f_12456510();
  /* 124555b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124555ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124555bc je 0x12455623 */
  if (C.zf) goto L_12455623;
  /* 124555be mov esi, esp */
  ESI = (ESP);
  /* 124555c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124555c2 push 0x12483498 */
  push32((uint32_t)(0x12483498u));
  /* 124555c7 call dword ptr [0x12486484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486484))), 0x124555cdu);
  /* 124555cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124555d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124555d2 call 0x12456510 */
  push32(0x124555d7u); f_12456510();
  /* 124555d7 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124555da jge 0x12455623 */
  if ((C.sf==C.of)) goto L_12455623;
  /* 124555dc mov esi, esp */
  ESI = (ESP);
  /* 124555de push 0 */
  push32((uint32_t)(0x0u));
  /* 124555e0 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 124555e2 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124555e8u);
  /* 124555e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124555eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124555ed call 0x12456510 */
  push32(0x124555f2u); f_12456510();
  /* 124555f2 mov esi, esp */
  ESI = (ESP);
  /* 124555f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124555f6 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 124555f8 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x124555feu);
  /* 124555fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455601 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455603 call 0x12456510 */
  push32(0x12455608u); f_12456510();
  /* 12455608 mov esi, esp */
  ESI = (ESP);
  /* 1245560a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245560c push 0x12483498 */
  push32((uint32_t)(0x12483498u));
  /* 12455611 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455613 call dword ptr [0x12486430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486430))), 0x12455619u);
  /* 12455619 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245561c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245561e call 0x12456510 */
  push32(0x12455623u); f_12456510();
L_12455623:;
  /* 12455623 mov esi, esp */
  ESI = (ESP);
  /* 12455625 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12455627 call dword ptr [0x12486424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486424))), 0x1245562du);
  /* 1245562d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455630 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455632 call 0x12456510 */
  push32(0x12455637u); f_12456510();
  /* 12455637 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245563c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245563e je 0x1245568a */
  if (C.zf) goto L_1245568a;
  /* 12455640 mov esi, esp */
  ESI = (ESP);
  /* 12455642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12455644 call dword ptr [0x12486498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486498))), 0x1245564au);
  /* 1245564a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245564d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245564f call 0x12456510 */
  push32(0x12455654u); f_12456510();
  /* 12455654 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12455659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245565b je 0x1245568a */
  if (C.zf) goto L_1245568a;
  /* 1245565d mov esi, esp */
  ESI = (ESP);
  /* 1245565f push 0 */
  push32((uint32_t)(0x0u));
  /* 12455661 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12455663 call dword ptr [0x12486428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486428))), 0x12455669u);
  /* 12455669 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245566c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245566e call 0x12456510 */
  push32(0x12455673u); f_12456510();
  /* 12455673 mov esi, esp */
  ESI = (ESP);
  /* 12455675 push 0x1247e6ac */
  push32((uint32_t)(0x1247e6acu));
  /* 1245567a call dword ptr [0x12486450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486450))), 0x12455680u);
  /* 12455680 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455683 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455685 call 0x12456510 */
  push32(0x1245568au); f_12456510();
L_1245568a:;
  /* 1245568a pop edi */
  EDI = (pop32());
  /* 1245568b pop esi */
  ESI = (pop32());
  /* 1245568c pop ebx */
  EBX = (pop32());
  /* 1245568d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12455690 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12455692 call 0x12456510 */
  push32(0x12455697u); f_12456510();
  /* 12455697 mov esp, ebp */
  ESP = (EBP);
  /* 12455699 pop ebp */
  EBP = (pop32());
  /* 1245569a ret  */
  ESPCHK(0x124521f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063d0 @ 0x124563d0 (63 bytes, 26 insns) */
void f_124563d0(void) {
  FTRACE(0x124563d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124563d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124563d1 mov ebp, esp */
  EBP = (ESP);
  /* 124563d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124563d6 push ebx */
  push32((uint32_t)(EBX));
  /* 124563d7 push esi */
  push32((uint32_t)(ESI));
  /* 124563d8 push edi */
  push32((uint32_t)(EDI));
  /* 124563d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 124563dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 124563e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 124563e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 124563e8 mov esi, esp */
  ESI = (ESP);
  /* 124563ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124563ed push eax */
  push32((uint32_t)(EAX));
  /* 124563ee call dword ptr [0x12486478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486478))), 0x124563f4u);
  /* 124563f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124563f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124563f9 call 0x12456510 */
  push32(0x124563feu); f_12456510();
  /* 124563fe pop edi */
  EDI = (pop32());
  /* 124563ff pop esi */
  ESI = (pop32());
  /* 12456400 pop ebx */
  EBX = (pop32());
  /* 12456401 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456404 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456406 call 0x12456510 */
  push32(0x1245640bu); f_12456510();
  /* 1245640b mov esp, ebp */
  ESP = (EBP);
  /* 1245640d pop ebp */
  EBP = (pop32());
  /* 1245640e ret  */
  ESPCHK(0x124563d0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12456510 (56 bytes, 28 insns) */
void f_12456510(void) {
  FTRACE(0x12456510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456510 jne 0x12456513 */
  if (!C.zf) goto L_12456513;
  /* 12456512 ret  */
  ESPCHK(0x12456510u, _esp0);
  ESP += 4; return;
L_12456513:;
  /* 12456513 push ebp */
  push32((uint32_t)(EBP));
  /* 12456514 mov ebp, esp */
  EBP = (ESP);
  /* 12456516 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12456519 push eax */
  push32((uint32_t)(EAX));
  /* 1245651a push edx */
  push32((uint32_t)(EDX));
  /* 1245651b push ebx */
  push32((uint32_t)(EBX));
  /* 1245651c push esi */
  push32((uint32_t)(ESI));
  /* 1245651d push edi */
  push32((uint32_t)(EDI));
  /* 1245651e push 0x1247e81c */
  push32((uint32_t)(0x1247e81cu));
  /* 12456523 push 0x1247e818 */
  push32((uint32_t)(0x1247e818u));
  /* 12456528 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1245652a push 0x1247e808 */
  push32((uint32_t)(0x1247e808u));
  /* 1245652f push 1 */
  push32((uint32_t)(0x1u));
  /* 12456531 call 0x124568e0 */
  push32(0x12456536u); f_124568e0();
  /* 12456536 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456539 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245653c jne 0x1245653f */
  if (!C.zf) goto L_1245653f;
  /* 1245653e int3  */
  x86_unimpl("int3 @ 0x1245653e");
L_1245653f:;
  /* 1245653f pop edi */
  EDI = (pop32());
  /* 12456540 pop esi */
  ESI = (pop32());
  /* 12456541 pop ebx */
  EBX = (pop32());
  /* 12456542 pop edx */
  EDX = (pop32());
  /* 12456543 pop eax */
  EAX = (pop32());
  /* 12456544 mov esp, ebp */
  ESP = (EBP);
  /* 12456546 pop ebp */
  EBP = (pop32());
  /* 12456547 ret  */
  ESPCHK(0x12456510u, _esp0);
  ESP += 4; return;
}

/* FUN_10006550 @ 0x12456550 (313 bytes, 78 insns) */
void f_12456550(void) {
  FTRACE(0x12456550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456550 push ebp */
  push32((uint32_t)(EBP));
  /* 12456551 mov ebp, esp */
  EBP = (ESP);
  /* 12456553 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456557 jne 0x12456617 */
  if (!C.zf) goto L_12456617;
  /* 1245655d call dword ptr [0x1248633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248633c))), 0x12456563u);
  /* 12456563 mov dword ptr [0x1248385c], eax */
  w32((uint32_t)(0x1248385c), (EAX));
  /* 12456568 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245656a call 0x1245a010 */
  push32(0x1245656fu); f_1245a010();
  /* 1245656f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456572 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456574 jne 0x1245657d */
  if (!C.zf) goto L_1245657d;
  /* 12456576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12456578 jmp 0x12456685 */
  goto L_12456685;
L_1245657d:;
  /* 1245657d mov eax, dword ptr [0x1248385c] */
  EAX = (r32((uint32_t)(0x1248385c)));
  /* 12456582 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12456585 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245658a mov dword ptr [0x12483868], eax */
  w32((uint32_t)(0x12483868), (EAX));
  /* 1245658f mov ecx, dword ptr [0x1248385c] */
  ECX = (r32((uint32_t)(0x1248385c)));
  /* 12456595 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245659b mov dword ptr [0x12483864], ecx */
  w32((uint32_t)(0x12483864), (ECX));
  /* 124565a1 mov edx, dword ptr [0x12483864] */
  EDX = (r32((uint32_t)(0x12483864)));
  /* 124565a7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124565aa add edx, dword ptr [0x12483868] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12483868))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124565b0 mov dword ptr [0x12483860], edx */
  w32((uint32_t)(0x12483860), (EDX));
  /* 124565b6 mov eax, dword ptr [0x1248385c] */
  EAX = (r32((uint32_t)(0x1248385c)));
  /* 124565bb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124565be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124565c3 mov dword ptr [0x1248385c], eax */
  w32((uint32_t)(0x1248385c), (EAX));
  /* 124565c8 call 0x12457180 */
  push32(0x124565cdu); f_12457180();
  /* 124565cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124565cf jne 0x124565dd */
  if (!C.zf) goto L_124565dd;
  /* 124565d1 call 0x1245a060 */
  push32(0x124565d6u); f_1245a060();
  /* 124565d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124565d8 jmp 0x12456685 */
  goto L_12456685;
L_124565dd:;
  /* 124565dd call dword ptr [0x12486338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486338))), 0x124565e3u);
  /* 124565e3 mov dword ptr [0x124853ac], eax */
  w32((uint32_t)(0x124853ac), (EAX));
  /* 124565e8 call 0x12459df0 */
  push32(0x124565edu); f_12459df0();
  /* 124565ed mov dword ptr [0x12483844], eax */
  w32((uint32_t)(0x12483844), (EAX));
  /* 124565f2 call 0x12457430 */
  push32(0x124565f7u); f_12457430();
  /* 124565f7 call 0x124598e0 */
  push32(0x124565fcu); f_124598e0();
  /* 124565fc call 0x12459790 */
  push32(0x12456601u); f_12459790();
  /* 12456601 call 0x12456f80 */
  push32(0x12456606u); f_12456f80();
  /* 12456606 mov ecx, dword ptr [0x12483840] */
  ECX = (r32((uint32_t)(0x12483840)));
  /* 1245660c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245660f mov dword ptr [0x12483840], ecx */
  w32((uint32_t)(0x12483840), (ECX));
  /* 12456615 jmp 0x12456680 */
  goto L_12456680;
L_12456617:;
  /* 12456617 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245661b jne 0x12456670 */
  if (!C.zf) goto L_12456670;
  /* 1245661d cmp dword ptr [0x12483840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456624 jle 0x1245666a */
  if ((C.zf||C.sf!=C.of)) goto L_1245666a;
  /* 12456626 mov edx, dword ptr [0x12483840] */
  EDX = (r32((uint32_t)(0x12483840)));
  /* 1245662c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245662f mov dword ptr [0x12483840], edx */
  w32((uint32_t)(0x12483840), (EDX));
  /* 12456635 cmp dword ptr [0x12483894], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483894))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245663c jne 0x12456643 */
  if (!C.zf) goto L_12456643;
  /* 1245663e call 0x12457000 */
  push32(0x12456643u); f_12457000();
L_12456643:;
  /* 12456643 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12456645 call 0x12458d30 */
  push32(0x1245664au); f_12458d30();
  /* 1245664a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245664d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12456650 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456652 je 0x12456659 */
  if (C.zf) goto L_12456659;
  /* 12456654 call 0x12459640 */
  push32(0x12456659u); f_12459640();
L_12456659:;
  /* 12456659 call 0x12457760 */
  push32(0x1245665eu); f_12457760();
  /* 1245665e call 0x12457210 */
  push32(0x12456663u); f_12457210();
  /* 12456663 call 0x1245a060 */
  push32(0x12456668u); f_1245a060();
  /* 12456668 jmp 0x1245666e */
  goto L_1245666e;
L_1245666a:;
  /* 1245666a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245666c jmp 0x12456685 */
  goto L_12456685;
L_1245666e:;
  /* 1245666e jmp 0x12456680 */
  goto L_12456680;
L_12456670:;
  /* 12456670 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456674 jne 0x12456680 */
  if (!C.zf) goto L_12456680;
  /* 12456676 push 0 */
  push32((uint32_t)(0x0u));
  /* 12456678 call 0x12457300 */
  push32(0x1245667du); f_12457300();
  /* 1245667d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456680:;
  /* 12456680 mov eax, 1 */
  EAX = (0x1u);
L_12456685:;
  /* 12456685 pop ebp */
  EBP = (pop32());
  /* 12456686 ret 0xc */
  ESPCHK(0x12456550u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12456690 (243 bytes, 86 insns) */
void f_12456690(void) {
  FTRACE(0x12456690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456690 push ebp */
  push32((uint32_t)(EBP));
  /* 12456691 mov ebp, esp */
  EBP = (ESP);
  /* 12456693 push ecx */
  push32((uint32_t)(ECX));
  /* 12456694 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1245669b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245669f jne 0x124566b1 */
  if (!C.zf) goto L_124566b1;
  /* 124566a1 cmp dword ptr [0x12483840], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483840))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124566a8 jne 0x124566b1 */
  if (!C.zf) goto L_124566b1;
  /* 124566aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124566ac jmp 0x1245677d */
  goto L_1245677d;
L_124566b1:;
  /* 124566b1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124566b5 je 0x124566bd */
  if (C.zf) goto L_124566bd;
  /* 124566b7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124566bb jne 0x124566ff */
  if (!C.zf) goto L_124566ff;
L_124566bd:;
  /* 124566bd cmp dword ptr [0x124853bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124853bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124566c4 je 0x124566db */
  if (C.zf) goto L_124566db;
  /* 124566c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124566c9 push eax */
  push32((uint32_t)(EAX));
  /* 124566ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124566cd push ecx */
  push32((uint32_t)(ECX));
  /* 124566ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124566d1 push edx */
  push32((uint32_t)(EDX));
  /* 124566d2 call dword ptr [0x124853bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124853bc))), 0x124566d8u);
  /* 124566d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124566db:;
  /* 124566db cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124566df je 0x124566f5 */
  if (C.zf) goto L_124566f5;
  /* 124566e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124566e4 push eax */
  push32((uint32_t)(EAX));
  /* 124566e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124566e8 push ecx */
  push32((uint32_t)(ECX));
  /* 124566e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124566ec push edx */
  push32((uint32_t)(EDX));
  /* 124566ed call 0x12456550 */
  push32(0x124566f2u); f_12456550();
  /* 124566f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124566f5:;
  /* 124566f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124566f9 jne 0x124566ff */
  if (!C.zf) goto L_124566ff;
  /* 124566fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124566fd jmp 0x1245677d */
  goto L_1245677d;
L_124566ff:;
  /* 124566ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12456702 push eax */
  push32((uint32_t)(EAX));
  /* 12456703 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12456706 push ecx */
  push32((uint32_t)(ECX));
  /* 12456707 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245670a push edx */
  push32((uint32_t)(EDX));
  /* 1245670b call 0x1245100f */
  push32(0x12456710u); f_1245100f();
  /* 12456710 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12456713 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456717 jne 0x1245672e */
  if (!C.zf) goto L_1245672e;
  /* 12456719 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245671d jne 0x1245672e */
  if (!C.zf) goto L_1245672e;
  /* 1245671f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12456722 push eax */
  push32((uint32_t)(EAX));
  /* 12456723 push 0 */
  push32((uint32_t)(0x0u));
  /* 12456725 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456728 push ecx */
  push32((uint32_t)(ECX));
  /* 12456729 call 0x12456550 */
  push32(0x1245672eu); f_12456550();
L_1245672e:;
  /* 1245672e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456732 je 0x1245673a */
  if (C.zf) goto L_1245673a;
  /* 12456734 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456738 jne 0x1245677a */
  if (!C.zf) goto L_1245677a;
L_1245673a:;
  /* 1245673a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245673d push edx */
  push32((uint32_t)(EDX));
  /* 1245673e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12456741 push eax */
  push32((uint32_t)(EAX));
  /* 12456742 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456745 push ecx */
  push32((uint32_t)(ECX));
  /* 12456746 call 0x12456550 */
  push32(0x1245674bu); f_12456550();
  /* 1245674b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245674d jne 0x12456756 */
  if (!C.zf) goto L_12456756;
  /* 1245674f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12456756:;
  /* 12456756 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245675a je 0x1245677a */
  if (C.zf) goto L_1245677a;
  /* 1245675c cmp dword ptr [0x124853bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124853bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456763 je 0x1245677a */
  if (C.zf) goto L_1245677a;
  /* 12456765 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12456768 push edx */
  push32((uint32_t)(EDX));
  /* 12456769 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245676c push eax */
  push32((uint32_t)(EAX));
  /* 1245676d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456770 push ecx */
  push32((uint32_t)(ECX));
  /* 12456771 call dword ptr [0x124853bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124853bc))), 0x12456777u);
  /* 12456777 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245677a:;
  /* 1245677a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1245677d:;
  /* 1245677d mov esp, ebp */
  ESP = (EBP);
  /* 1245677f pop ebp */
  EBP = (pop32());
  /* 12456780 ret 0xc */
  ESPCHK(0x12456690u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12456790 (58 bytes, 18 insns) */
void f_12456790(void) {
  FTRACE(0x12456790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456790 push ebp */
  push32((uint32_t)(EBP));
  /* 12456791 mov ebp, esp */
  EBP = (ESP);
  /* 12456793 cmp dword ptr [0x1248384c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1248384c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245679a je 0x124567ae */
  if (C.zf) goto L_124567ae;
  /* 1245679c cmp dword ptr [0x1248384c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1248384c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124567a3 jne 0x124567b3 */
  if (!C.zf) goto L_124567b3;
  /* 124567a5 cmp dword ptr [0x12483850], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483850))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124567ac jne 0x124567b3 */
  if (!C.zf) goto L_124567b3;
L_124567ae:;
  /* 124567ae call 0x1245a100 */
  push32(0x124567b3u); f_1245a100();
L_124567b3:;
  /* 124567b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124567b6 push eax */
  push32((uint32_t)(EAX));
  /* 124567b7 call 0x1245a150 */
  push32(0x124567bcu); f_1245a150();
  /* 124567bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124567bf push 0xff */
  push32((uint32_t)(0xffu));
  /* 124567c4 call dword ptr [0x12481a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12481a30))), 0x124567cau);
  /* 124567ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124567cd pop ebp */
  EBP = (pop32());
  /* 124567ce ret  */
  ESPCHK(0x12456790u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d0 @ 0x124567d0 (11 bytes, 5 insns) */
void f_124567d0(void) {
  FTRACE(0x124567d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124567d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124567d1 mov ebp, esp */
  EBP = (ESP);
  /* 124567d3 call dword ptr [0x12486340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486340))), 0x124567d9u);
  /* 124567d9 pop ebp */
  EBP = (pop32());
  /* 124567da ret  */
  ESPCHK(0x124567d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067e0 @ 0x124567e0 (87 bytes, 30 insns) */
void f_124567e0(void) {
  FTRACE(0x124567e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124567e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124567e1 mov ebp, esp */
  EBP = (ESP);
  /* 124567e3 push ecx */
  push32((uint32_t)(ECX));
  /* 124567e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124567e8 jl 0x124567f0 */
  if ((C.sf!=C.of)) goto L_124567f0;
  /* 124567ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124567ee jl 0x124567f5 */
  if ((C.sf!=C.of)) goto L_124567f5;
L_124567f0:;
  /* 124567f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124567f3 jmp 0x12456833 */
  goto L_12456833;
L_124567f5:;
  /* 124567f5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124567f9 jne 0x12456807 */
  if (!C.zf) goto L_12456807;
  /* 124567fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124567fe mov eax, dword ptr [eax*4 + 0x12481a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12481a38)));
  /* 12456805 jmp 0x12456833 */
  goto L_12456833;
L_12456807:;
  /* 12456807 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245680a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1245680d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245680f je 0x12456816 */
  if (C.zf) goto L_12456816;
  /* 12456811 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12456814 jmp 0x12456833 */
  goto L_12456833;
L_12456816:;
  /* 12456816 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456819 mov eax, dword ptr [edx*4 + 0x12481a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12481a38)));
  /* 12456820 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12456823 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456826 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12456829 mov dword ptr [ecx*4 + 0x12481a38], edx */
  w32((uint32_t)(ECX*4 + 0x12481a38), (EDX));
  /* 12456830 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12456833:;
  /* 12456833 mov esp, ebp */
  ESP = (EBP);
  /* 12456835 pop ebp */
  EBP = (pop32());
  /* 12456836 ret  */
  ESPCHK(0x124567e0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12456840 (126 bytes, 38 insns) */
void f_12456840(void) {
  FTRACE(0x12456840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456840 push ebp */
  push32((uint32_t)(EBP));
  /* 12456841 mov ebp, esp */
  EBP = (ESP);
  /* 12456843 push ecx */
  push32((uint32_t)(ECX));
  /* 12456844 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456848 jl 0x12456850 */
  if ((C.sf!=C.of)) goto L_12456850;
  /* 1245684a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245684e jl 0x12456857 */
  if ((C.sf!=C.of)) goto L_12456857;
L_12456850:;
  /* 12456850 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12456855 jmp 0x124568ba */
  goto L_124568ba;
L_12456857:;
  /* 12456857 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245685b jne 0x12456869 */
  if (!C.zf) goto L_12456869;
  /* 1245685d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456860 mov eax, dword ptr [eax*4 + 0x12481a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12481a44)));
  /* 12456867 jmp 0x124568ba */
  goto L_124568ba;
L_12456869:;
  /* 12456869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245686c mov edx, dword ptr [ecx*4 + 0x12481a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481a44)));
  /* 12456873 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12456876 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245687a jne 0x12456890 */
  if (!C.zf) goto L_12456890;
  /* 1245687c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1245687e call dword ptr [0x12486344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486344))), 0x12456884u);
  /* 12456884 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456887 mov dword ptr [ecx*4 + 0x12481a44], eax */
  w32((uint32_t)(ECX*4 + 0x12481a44), (EAX));
  /* 1245688e jmp 0x124568b7 */
  goto L_124568b7;
L_12456890:;
  /* 12456890 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456894 jne 0x124568aa */
  if (!C.zf) goto L_124568aa;
  /* 12456896 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12456898 call dword ptr [0x12486344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486344))), 0x1245689eu);
  /* 1245689e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124568a1 mov dword ptr [edx*4 + 0x12481a44], eax */
  w32((uint32_t)(EDX*4 + 0x12481a44), (EAX));
  /* 124568a8 jmp 0x124568b7 */
  goto L_124568b7;
L_124568aa:;
  /* 124568aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124568ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124568b0 mov dword ptr [eax*4 + 0x12481a44], ecx */
  w32((uint32_t)(EAX*4 + 0x12481a44), (ECX));
L_124568b7:;
  /* 124568b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124568ba:;
  /* 124568ba mov esp, ebp */
  ESP = (EBP);
  /* 124568bc pop ebp */
  EBP = (pop32());
  /* 124568bd ret  */
  ESPCHK(0x12456840u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x124568c0 (28 bytes, 11 insns) */
void f_124568c0(void) {
  FTRACE(0x124568c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124568c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124568c1 mov ebp, esp */
  EBP = (ESP);
  /* 124568c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124568c4 mov eax, dword ptr [0x124853a0] */
  EAX = (r32((uint32_t)(0x124853a0)));
  /* 124568c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124568cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124568cf mov dword ptr [0x124853a0], ecx */
  w32((uint32_t)(0x124853a0), (ECX));
  /* 124568d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124568d8 mov esp, ebp */
  ESP = (EBP);
  /* 124568da pop ebp */
  EBP = (pop32());
  /* 124568db ret  */
  ESPCHK(0x124568c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x124568e0 (912 bytes, 248 insns) */
void f_124568e0(void) {
  FTRACE(0x124568e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124568e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124568e1 mov ebp, esp */
  EBP = (ESP);
  /* 124568e3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 124568e8 call 0x1245a9c0 */
  push32(0x124568edu); f_1245a9c0();
  /* 124568ed push edi */
  push32((uint32_t)(EDI));
  /* 124568ee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 124568f5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 124568fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124568fc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12456902 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12456904 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12456906 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12456907 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1245690e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12456913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12456915 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1245691b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1245691d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1245691f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12456920 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12456927 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1245692c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245692e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12456934 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12456936 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12456938 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12456939 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1245693c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12456942 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456946 jl 0x1245694e */
  if ((C.sf!=C.of)) goto L_1245694e;
  /* 12456948 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245694c jl 0x12456956 */
  if ((C.sf!=C.of)) goto L_12456956;
L_1245694e:;
  /* 1245694e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12456951 jmp 0x12456c6b */
  goto L_12456c6b;
L_12456956:;
  /* 12456956 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245695a jne 0x12456a00 */
  if (!C.zf) goto L_12456a00;
  /* 12456960 push 0x12481a34 */
  push32((uint32_t)(0x12481a34u));
  /* 12456965 call dword ptr [0x1248635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248635c))), 0x1245696bu);
  /* 1245696b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245696d jle 0x12456a00 */
  if ((C.zf||C.sf!=C.of)) goto L_12456a00;
  /* 12456973 cmp dword ptr [0x12483854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245697a jne 0x124569be */
  if (!C.zf) goto L_124569be;
  /* 1245697c push 0x1247e9c4 */
  push32((uint32_t)(0x1247e9c4u));
  /* 12456981 call dword ptr [0x12486358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486358))), 0x12456987u);
  /* 12456987 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1245698d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456994 je 0x124569b6 */
  if (C.zf) goto L_124569b6;
  /* 12456996 push 0x1247e9b8 */
  push32((uint32_t)(0x1247e9b8u));
  /* 1245699b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 124569a1 push ecx */
  push32((uint32_t)(ECX));
  /* 124569a2 call dword ptr [0x12486354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486354))), 0x124569a8u);
  /* 124569a8 mov dword ptr [0x12483854], eax */
  w32((uint32_t)(0x12483854), (EAX));
  /* 124569ad cmp dword ptr [0x12483854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124569b4 jne 0x124569be */
  if (!C.zf) goto L_124569be;
L_124569b6:;
  /* 124569b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124569b9 jmp 0x12456c6b */
  goto L_12456c6b;
L_124569be:;
  /* 124569be mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 124569c1 push edx */
  push32((uint32_t)(EDX));
  /* 124569c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124569c5 push eax */
  push32((uint32_t)(EAX));
  /* 124569c6 push 0x1247e984 */
  push32((uint32_t)(0x1247e984u));
  /* 124569cb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 124569d1 push ecx */
  push32((uint32_t)(ECX));
  /* 124569d2 call dword ptr [0x12483854] */
  call_ind((uint32_t)(r32((uint32_t)(0x12483854))), 0x124569d8u);
  /* 124569d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124569db lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 124569e1 push edx */
  push32((uint32_t)(EDX));
  /* 124569e2 call dword ptr [0x12486350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486350))), 0x124569e8u);
  /* 124569e8 push 0x12481a34 */
  push32((uint32_t)(0x12481a34u));
  /* 124569ed call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x124569f3u);
  /* 124569f3 call 0x124567d0 */
  push32(0x124569f8u); f_124567d0();
  /* 124569f8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124569fb jmp 0x12456c6b */
  goto L_12456c6b;
L_12456a00:;
  /* 12456a00 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456a04 je 0x12456a3d */
  if (C.zf) goto L_12456a3d;
  /* 12456a06 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12456a0c push eax */
  push32((uint32_t)(EAX));
  /* 12456a0d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12456a10 push ecx */
  push32((uint32_t)(ECX));
  /* 12456a11 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12456a16 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12456a1c push edx */
  push32((uint32_t)(EDX));
  /* 12456a1d call 0x1245a8c0 */
  push32(0x12456a22u); f_1245a8c0();
  /* 12456a22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456a25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456a27 jge 0x12456a3d */
  if ((C.sf==C.of)) goto L_12456a3d;
  /* 12456a29 push 0x1247e958 */
  push32((uint32_t)(0x1247e958u));
  /* 12456a2e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12456a34 push eax */
  push32((uint32_t)(EAX));
  /* 12456a35 call 0x1245a7d0 */
  push32(0x12456a3au); f_1245a7d0();
  /* 12456a3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456a3d:;
  /* 12456a3d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456a41 jne 0x12456a75 */
  if (!C.zf) goto L_12456a75;
  /* 12456a43 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456a47 je 0x12456a55 */
  if (C.zf) goto L_12456a55;
  /* 12456a49 mov dword ptr [ebp - 0x3028], 0x1247e944 */
  w32((uint32_t)(EBP + -0x3028), (0x1247e944u));
  /* 12456a53 jmp 0x12456a5f */
  goto L_12456a5f;
L_12456a55:;
  /* 12456a55 mov dword ptr [ebp - 0x3028], 0x1247e930 */
  w32((uint32_t)(EBP + -0x3028), (0x1247e930u));
L_12456a5f:;
  /* 12456a5f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12456a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12456a66 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12456a6c push edx */
  push32((uint32_t)(EDX));
  /* 12456a6d call 0x1245a7d0 */
  push32(0x12456a72u); f_1245a7d0();
  /* 12456a72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456a75:;
  /* 12456a75 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12456a7b push eax */
  push32((uint32_t)(EAX));
  /* 12456a7c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12456a82 push ecx */
  push32((uint32_t)(ECX));
  /* 12456a83 call 0x1245a7e0 */
  push32(0x12456a88u); f_1245a7e0();
  /* 12456a88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456a8b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456a8f jne 0x12456aca */
  if (!C.zf) goto L_12456aca;
  /* 12456a91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456a94 mov eax, dword ptr [edx*4 + 0x12481a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12481a38)));
  /* 12456a9b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12456a9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456aa0 je 0x12456ab6 */
  if (C.zf) goto L_12456ab6;
  /* 12456aa2 push 0x1247e92c */
  push32((uint32_t)(0x1247e92cu));
  /* 12456aa7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12456aad push ecx */
  push32((uint32_t)(ECX));
  /* 12456aae call 0x1245a7e0 */
  push32(0x12456ab3u); f_1245a7e0();
  /* 12456ab3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456ab6:;
  /* 12456ab6 push 0x1247e928 */
  push32((uint32_t)(0x1247e928u));
  /* 12456abb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12456ac1 push edx */
  push32((uint32_t)(EDX));
  /* 12456ac2 call 0x1245a7e0 */
  push32(0x12456ac7u); f_1245a7e0();
  /* 12456ac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456aca:;
  /* 12456aca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456ace je 0x12456b12 */
  if (C.zf) goto L_12456b12;
  /* 12456ad0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12456ad6 push eax */
  push32((uint32_t)(EAX));
  /* 12456ad7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12456ada push ecx */
  push32((uint32_t)(ECX));
  /* 12456adb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12456ade push edx */
  push32((uint32_t)(EDX));
  /* 12456adf push 0x1247e91c */
  push32((uint32_t)(0x1247e91cu));
  /* 12456ae4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12456ae9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12456aef push eax */
  push32((uint32_t)(EAX));
  /* 12456af0 call 0x1245a6d0 */
  push32(0x12456af5u); f_1245a6d0();
  /* 12456af5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456af8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456afa jge 0x12456b10 */
  if ((C.sf==C.of)) goto L_12456b10;
  /* 12456afc push 0x1247e958 */
  push32((uint32_t)(0x1247e958u));
  /* 12456b01 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12456b07 push ecx */
  push32((uint32_t)(ECX));
  /* 12456b08 call 0x1245a7d0 */
  push32(0x12456b0du); f_1245a7d0();
  /* 12456b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456b10:;
  /* 12456b10 jmp 0x12456b28 */
  goto L_12456b28;
L_12456b12:;
  /* 12456b12 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12456b18 push edx */
  push32((uint32_t)(EDX));
  /* 12456b19 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12456b1f push eax */
  push32((uint32_t)(EAX));
  /* 12456b20 call 0x1245a7d0 */
  push32(0x12456b25u); f_1245a7d0();
  /* 12456b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456b28:;
  /* 12456b28 cmp dword ptr [0x124853a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124853a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456b2f je 0x12456b6c */
  if (C.zf) goto L_12456b6c;
  /* 12456b31 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12456b37 push ecx */
  push32((uint32_t)(ECX));
  /* 12456b38 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12456b3e push edx */
  push32((uint32_t)(EDX));
  /* 12456b3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456b42 push eax */
  push32((uint32_t)(EAX));
  /* 12456b43 call dword ptr [0x124853a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124853a0))), 0x12456b49u);
  /* 12456b49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456b4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456b4e je 0x12456b6c */
  if (C.zf) goto L_12456b6c;
  /* 12456b50 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456b54 jne 0x12456b61 */
  if (!C.zf) goto L_12456b61;
  /* 12456b56 push 0x12481a34 */
  push32((uint32_t)(0x12481a34u));
  /* 12456b5b call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x12456b61u);
L_12456b61:;
  /* 12456b61 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12456b67 jmp 0x12456c6b */
  goto L_12456c6b;
L_12456b6c:;
  /* 12456b6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456b6f mov edx, dword ptr [ecx*4 + 0x12481a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481a38)));
  /* 12456b76 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12456b79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12456b7b je 0x12456bbb */
  if (C.zf) goto L_12456bbb;
  /* 12456b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456b80 cmp dword ptr [eax*4 + 0x12481a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12481a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456b88 je 0x12456bbb */
  if (C.zf) goto L_12456bbb;
  /* 12456b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12456b8c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12456b92 push ecx */
  push32((uint32_t)(ECX));
  /* 12456b93 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12456b99 push edx */
  push32((uint32_t)(EDX));
  /* 12456b9a call 0x1245a650 */
  push32(0x12456b9fu); f_1245a650();
  /* 12456b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456ba2 push eax */
  push32((uint32_t)(EAX));
  /* 12456ba3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12456ba9 push eax */
  push32((uint32_t)(EAX));
  /* 12456baa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456bad mov edx, dword ptr [ecx*4 + 0x12481a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481a44)));
  /* 12456bb4 push edx */
  push32((uint32_t)(EDX));
  /* 12456bb5 call dword ptr [0x12486348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486348))), 0x12456bbbu);
L_12456bbb:;
  /* 12456bbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456bbe mov ecx, dword ptr [eax*4 + 0x12481a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12481a38)));
  /* 12456bc5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12456bc8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12456bca je 0x12456bd9 */
  if (C.zf) goto L_12456bd9;
  /* 12456bcc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12456bd2 push edx */
  push32((uint32_t)(EDX));
  /* 12456bd3 call dword ptr [0x12486350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486350))), 0x12456bd9u);
L_12456bd9:;
  /* 12456bd9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456bdc mov ecx, dword ptr [eax*4 + 0x12481a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12481a38)));
  /* 12456be3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12456be6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12456be8 je 0x12456c58 */
  if (C.zf) goto L_12456c58;
  /* 12456bea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456bee je 0x12456c0d */
  if (C.zf) goto L_12456c0d;
  /* 12456bf0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12456bf2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12456bf8 push edx */
  push32((uint32_t)(EDX));
  /* 12456bf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12456bfc push eax */
  push32((uint32_t)(EAX));
  /* 12456bfd call 0x1245a360 */
  push32(0x12456c02u); f_1245a360();
  /* 12456c02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456c05 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12456c0b jmp 0x12456c17 */
  goto L_12456c17;
L_12456c0d:;
  /* 12456c0d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12456c17:;
  /* 12456c17 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12456c1d push ecx */
  push32((uint32_t)(ECX));
  /* 12456c1e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12456c21 push edx */
  push32((uint32_t)(EDX));
  /* 12456c22 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12456c28 push eax */
  push32((uint32_t)(EAX));
  /* 12456c29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12456c2c push ecx */
  push32((uint32_t)(ECX));
  /* 12456c2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456c30 push edx */
  push32((uint32_t)(EDX));
  /* 12456c31 call 0x12456c70 */
  push32(0x12456c36u); f_12456c70();
  /* 12456c36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456c39 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12456c3f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456c43 jne 0x12456c50 */
  if (!C.zf) goto L_12456c50;
  /* 12456c45 push 0x12481a34 */
  push32((uint32_t)(0x12481a34u));
  /* 12456c4a call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x12456c50u);
L_12456c50:;
  /* 12456c50 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12456c56 jmp 0x12456c6b */
  goto L_12456c6b;
L_12456c58:;
  /* 12456c58 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456c5c jne 0x12456c69 */
  if (!C.zf) goto L_12456c69;
  /* 12456c5e push 0x12481a34 */
  push32((uint32_t)(0x12481a34u));
  /* 12456c63 call dword ptr [0x1248634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248634c))), 0x12456c69u);
L_12456c69:;
  /* 12456c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12456c6b:;
  /* 12456c6b pop edi */
  EDI = (pop32());
  /* 12456c6c mov esp, ebp */
  ESP = (EBP);
  /* 12456c6e pop ebp */
  EBP = (pop32());
  /* 12456c6f ret  */
  ESPCHK(0x124568e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x12456c70 (780 bytes, 197 insns) */
void f_12456c70(void) {
  FTRACE(0x12456c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12456c71 mov ebp, esp */
  EBP = (ESP);
  /* 12456c73 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12456c78 call 0x1245a9c0 */
  push32(0x12456c7du); f_1245a9c0();
L_12456c7d:;
  /* 12456c7d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456c81 jne 0x12456ca8 */
  if (!C.zf) goto L_12456ca8;
  /* 12456c83 push 0x1247eb14 */
  push32((uint32_t)(0x1247eb14u));
  /* 12456c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12456c8a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12456c8f push 0x1247eb08 */
  push32((uint32_t)(0x1247eb08u));
  /* 12456c94 push 2 */
  push32((uint32_t)(0x2u));
  /* 12456c96 call 0x124568e0 */
  push32(0x12456c9bu); f_124568e0();
  /* 12456c9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456c9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456ca1 jne 0x12456ca8 */
  if (!C.zf) goto L_12456ca8;
  /* 12456ca3 call 0x124567d0 */
  push32(0x12456ca8u); f_124567d0();
L_12456ca8:;
  /* 12456ca8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12456caa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456cac jne 0x12456c7d */
  if (!C.zf) goto L_12456c7d;
  /* 12456cae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12456cb3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12456cb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12456cba push 0 */
  push32((uint32_t)(0x0u));
  /* 12456cbc call dword ptr [0x12486360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486360))), 0x12456cc2u);
  /* 12456cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456cc4 jne 0x12456cda */
  if (!C.zf) goto L_12456cda;
  /* 12456cc6 push 0x1247eaf0 */
  push32((uint32_t)(0x1247eaf0u));
  /* 12456ccb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12456cd1 push edx */
  push32((uint32_t)(EDX));
  /* 12456cd2 call 0x1245a7d0 */
  push32(0x12456cd7u); f_1245a7d0();
  /* 12456cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456cda:;
  /* 12456cda lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12456ce0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12456ce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12456ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 12456ce7 call 0x1245a650 */
  push32(0x12456cecu); f_1245a650();
  /* 12456cec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456cef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456cf2 jbe 0x12456d1d */
  if ((C.cf||C.zf)) goto L_12456d1d;
  /* 12456cf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12456cf7 push edx */
  push32((uint32_t)(EDX));
  /* 12456cf8 call 0x1245a650 */
  push32(0x12456cfdu); f_1245a650();
  /* 12456cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456d00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12456d03 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12456d07 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12456d0a push 3 */
  push32((uint32_t)(0x3u));
  /* 12456d0c push 0x1247eaec */
  push32((uint32_t)(0x1247eaecu));
  /* 12456d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12456d14 push eax */
  push32((uint32_t)(EAX));
  /* 12456d15 call 0x1245b040 */
  push32(0x12456d1au); f_1245b040();
  /* 12456d1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456d1d:;
  /* 12456d1d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12456d20 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12456d26 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456d2d je 0x12456d78 */
  if (C.zf) goto L_12456d78;
  /* 12456d2f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12456d35 push edx */
  push32((uint32_t)(EDX));
  /* 12456d36 call 0x1245a650 */
  push32(0x12456d3bu); f_1245a650();
  /* 12456d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456d3e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456d41 jbe 0x12456d78 */
  if ((C.cf||C.zf)) goto L_12456d78;
  /* 12456d43 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12456d49 push eax */
  push32((uint32_t)(EAX));
  /* 12456d4a call 0x1245a650 */
  push32(0x12456d4fu); f_1245a650();
  /* 12456d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456d52 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12456d58 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12456d5c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12456d62 push 3 */
  push32((uint32_t)(0x3u));
  /* 12456d64 push 0x1247eaec */
  push32((uint32_t)(0x1247eaecu));
  /* 12456d69 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12456d6f push eax */
  push32((uint32_t)(EAX));
  /* 12456d70 call 0x1245b040 */
  push32(0x12456d75u); f_1245b040();
  /* 12456d75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456d78:;
  /* 12456d78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456d7c jne 0x12456d8a */
  if (!C.zf) goto L_12456d8a;
  /* 12456d7e mov dword ptr [ebp - 0x1114], 0x1247ea78 */
  w32((uint32_t)(EBP + -0x1114), (0x1247ea78u));
  /* 12456d88 jmp 0x12456d94 */
  goto L_12456d94;
L_12456d8a:;
  /* 12456d8a mov dword ptr [ebp - 0x1114], 0x1247e818 */
  w32((uint32_t)(EBP + -0x1114), (0x1247e818u));
L_12456d94:;
  /* 12456d94 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12456d97 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12456d9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12456d9c je 0x12456da9 */
  if (C.zf) goto L_12456da9;
  /* 12456d9e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12456da1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12456da7 jmp 0x12456db3 */
  goto L_12456db3;
L_12456da9:;
  /* 12456da9 mov dword ptr [ebp - 0x1118], 0x1247e818 */
  w32((uint32_t)(EBP + -0x1118), (0x1247e818u));
L_12456db3:;
  /* 12456db3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12456db6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12456db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12456dbb je 0x12456dcf */
  if (C.zf) goto L_12456dcf;
  /* 12456dbd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456dc1 jne 0x12456dcf */
  if (!C.zf) goto L_12456dcf;
  /* 12456dc3 mov dword ptr [ebp - 0x111c], 0x1247ea68 */
  w32((uint32_t)(EBP + -0x111c), (0x1247ea68u));
  /* 12456dcd jmp 0x12456dd9 */
  goto L_12456dd9;
L_12456dcf:;
  /* 12456dcf mov dword ptr [ebp - 0x111c], 0x1247e818 */
  w32((uint32_t)(EBP + -0x111c), (0x1247e818u));
L_12456dd9:;
  /* 12456dd9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12456ddc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12456ddf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12456de1 je 0x12456def */
  if (C.zf) goto L_12456def;
  /* 12456de3 mov dword ptr [ebp - 0x1120], 0x1247ea64 */
  w32((uint32_t)(EBP + -0x1120), (0x1247ea64u));
  /* 12456ded jmp 0x12456df9 */
  goto L_12456df9;
L_12456def:;
  /* 12456def mov dword ptr [ebp - 0x1120], 0x1247e818 */
  w32((uint32_t)(EBP + -0x1120), (0x1247e818u));
L_12456df9:;
  /* 12456df9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456dfd je 0x12456e0a */
  if (C.zf) goto L_12456e0a;
  /* 12456dff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12456e02 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12456e08 jmp 0x12456e14 */
  goto L_12456e14;
L_12456e0a:;
  /* 12456e0a mov dword ptr [ebp - 0x1124], 0x1247e818 */
  w32((uint32_t)(EBP + -0x1124), (0x1247e818u));
L_12456e14:;
  /* 12456e14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456e18 je 0x12456e26 */
  if (C.zf) goto L_12456e26;
  /* 12456e1a mov dword ptr [ebp - 0x1128], 0x1247ea5c */
  w32((uint32_t)(EBP + -0x1128), (0x1247ea5cu));
  /* 12456e24 jmp 0x12456e30 */
  goto L_12456e30;
L_12456e26:;
  /* 12456e26 mov dword ptr [ebp - 0x1128], 0x1247e818 */
  w32((uint32_t)(EBP + -0x1128), (0x1247e818u));
L_12456e30:;
  /* 12456e30 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456e34 je 0x12456e41 */
  if (C.zf) goto L_12456e41;
  /* 12456e36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12456e39 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12456e3f jmp 0x12456e4b */
  goto L_12456e4b;
L_12456e41:;
  /* 12456e41 mov dword ptr [ebp - 0x112c], 0x1247e818 */
  w32((uint32_t)(EBP + -0x112c), (0x1247e818u));
L_12456e4b:;
  /* 12456e4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456e4f je 0x12456e5d */
  if (C.zf) goto L_12456e5d;
  /* 12456e51 mov dword ptr [ebp - 0x1130], 0x1247ea54 */
  w32((uint32_t)(EBP + -0x1130), (0x1247ea54u));
  /* 12456e5b jmp 0x12456e67 */
  goto L_12456e67;
L_12456e5d:;
  /* 12456e5d mov dword ptr [ebp - 0x1130], 0x1247e818 */
  w32((uint32_t)(EBP + -0x1130), (0x1247e818u));
L_12456e67:;
  /* 12456e67 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456e6e je 0x12456e7e */
  if (C.zf) goto L_12456e7e;
  /* 12456e70 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12456e76 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12456e7c jmp 0x12456e88 */
  goto L_12456e88;
L_12456e7e:;
  /* 12456e7e mov dword ptr [ebp - 0x1134], 0x1247e818 */
  w32((uint32_t)(EBP + -0x1134), (0x1247e818u));
L_12456e88:;
  /* 12456e88 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456e8f je 0x12456e9d */
  if (C.zf) goto L_12456e9d;
  /* 12456e91 mov dword ptr [ebp - 0x1138], 0x1247ea48 */
  w32((uint32_t)(EBP + -0x1138), (0x1247ea48u));
  /* 12456e9b jmp 0x12456ea7 */
  goto L_12456ea7;
L_12456e9d:;
  /* 12456e9d mov dword ptr [ebp - 0x1138], 0x1247e818 */
  w32((uint32_t)(EBP + -0x1138), (0x1247e818u));
L_12456ea7:;
  /* 12456ea7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12456ead push edx */
  push32((uint32_t)(EDX));
  /* 12456eae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12456eb4 push eax */
  push32((uint32_t)(EAX));
  /* 12456eb5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12456ebb push ecx */
  push32((uint32_t)(ECX));
  /* 12456ebc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12456ec2 push edx */
  push32((uint32_t)(EDX));
  /* 12456ec3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12456ec9 push eax */
  push32((uint32_t)(EAX));
  /* 12456eca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12456ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 12456ed1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12456ed7 push edx */
  push32((uint32_t)(EDX));
  /* 12456ed8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12456ede push eax */
  push32((uint32_t)(EAX));
  /* 12456edf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12456ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 12456ee6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12456eec push edx */
  push32((uint32_t)(EDX));
  /* 12456eed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12456ef0 push eax */
  push32((uint32_t)(EAX));
  /* 12456ef1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456ef4 mov edx, dword ptr [ecx*4 + 0x12481a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481a50)));
  /* 12456efb push edx */
  push32((uint32_t)(EDX));
  /* 12456efc push 0x1247e9f4 */
  push32((uint32_t)(0x1247e9f4u));
  /* 12456f01 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12456f06 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12456f0c push eax */
  push32((uint32_t)(EAX));
  /* 12456f0d call 0x1245a6d0 */
  push32(0x12456f12u); f_1245a6d0();
  /* 12456f12 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12456f17 jge 0x12456f2d */
  if ((C.sf==C.of)) goto L_12456f2d;
  /* 12456f19 push 0x1247e958 */
  push32((uint32_t)(0x1247e958u));
  /* 12456f1e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12456f24 push ecx */
  push32((uint32_t)(ECX));
  /* 12456f25 call 0x1245a7d0 */
  push32(0x12456f2au); f_1245a7d0();
  /* 12456f2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12456f2d:;
  /* 12456f2d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12456f32 push 0x1247e9d0 */
  push32((uint32_t)(0x1247e9d0u));
  /* 12456f37 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12456f3d push edx */
  push32((uint32_t)(EDX));
  /* 12456f3e call 0x1245af80 */
  push32(0x12456f43u); f_1245af80();
  /* 12456f43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456f46 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12456f4c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456f53 jne 0x12456f66 */
  if (!C.zf) goto L_12456f66;
  /* 12456f55 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12456f57 call 0x1245acc0 */
  push32(0x12456f5cu); f_1245acc0();
  /* 12456f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456f5f push 3 */
  push32((uint32_t)(0x3u));
  /* 12456f61 call 0x12456fe0 */
  push32(0x12456f66u); f_12456fe0();
L_12456f66:;
  /* 12456f66 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456f6d jne 0x12456f76 */
  if (!C.zf) goto L_12456f76;
  /* 12456f6f mov eax, 1 */
  EAX = (0x1u);
  /* 12456f74 jmp 0x12456f78 */
  goto L_12456f78;
L_12456f76:;
  /* 12456f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12456f78:;
  /* 12456f78 mov esp, ebp */
  ESP = (EBP);
  /* 12456f7a pop ebp */
  EBP = (pop32());
  /* 12456f7b ret  */
  ESPCHK(0x12456c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f80 @ 0x12456f80 (56 bytes, 15 insns) */
void f_12456f80(void) {
  FTRACE(0x12456f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12456f81 mov ebp, esp */
  EBP = (ESP);
  /* 12456f83 cmp dword ptr [0x1248539c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1248539c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12456f8a je 0x12456f92 */
  if (C.zf) goto L_12456f92;
  /* 12456f8c call dword ptr [0x1248539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248539c))), 0x12456f92u);
L_12456f92:;
  /* 12456f92 push 0x12481418 */
  push32((uint32_t)(0x12481418u));
  /* 12456f97 push 0x12481208 */
  push32((uint32_t)(0x12481208u));
  /* 12456f9c call 0x12457150 */
  push32(0x12456fa1u); f_12457150();
  /* 12456fa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456fa4 push 0x12481104 */
  push32((uint32_t)(0x12481104u));
  /* 12456fa9 push 0x12481000 */
  push32((uint32_t)(0x12481000u));
  /* 12456fae call 0x12457150 */
  push32(0x12456fb3u); f_12457150();
  /* 12456fb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456fb6 pop ebp */
  EBP = (pop32());
  /* 12456fb7 ret  */
  ESPCHK(0x12456f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fc0 @ 0x12456fc0 (21 bytes, 10 insns) */
void f_12456fc0(void) {
  FTRACE(0x12456fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12456fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12456fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12456fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12456fc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456fca push eax */
  push32((uint32_t)(EAX));
  /* 12456fcb call 0x12457040 */
  push32(0x12456fd0u); f_12457040();
  /* 12456fd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456fd3 pop ebp */
  EBP = (pop32());
  /* 12456fd4 ret  */
  ESPCHK(0x12456fc0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12456fe0 (21 bytes, 10 insns) */
void f_12456fe0(void) {
  FTRACE(0x12456fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12456fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12456fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12456fe3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12456fe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12456fe7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12456fea push eax */
  push32((uint32_t)(EAX));
  /* 12456feb call 0x12457040 */
  push32(0x12456ff0u); f_12457040();
  /* 12456ff0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12456ff3 pop ebp */
  EBP = (pop32());
  /* 12456ff4 ret  */
  ESPCHK(0x12456fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007000 @ 0x12457000 (19 bytes, 9 insns) */
void f_12457000(void) {
  FTRACE(0x12457000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457000 push ebp */
  push32((uint32_t)(EBP));
  /* 12457001 mov ebp, esp */
  EBP = (ESP);
  /* 12457003 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457005 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457007 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457009 call 0x12457040 */
  push32(0x1245700eu); f_12457040();
  /* 1245700e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457011 pop ebp */
  EBP = (pop32());
  /* 12457012 ret  */
  ESPCHK(0x12457000u, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x12457020 (19 bytes, 9 insns) */
void f_12457020(void) {
  FTRACE(0x12457020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457020 push ebp */
  push32((uint32_t)(EBP));
  /* 12457021 mov ebp, esp */
  EBP = (ESP);
  /* 12457023 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457025 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457027 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457029 call 0x12457040 */
  push32(0x1245702eu); f_12457040();
  /* 1245702e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457031 pop ebp */
  EBP = (pop32());
  /* 12457032 ret  */
  ESPCHK(0x12457020u, _esp0);
  ESP += 4; return;
}

/* FUN_10007040 @ 0x12457040 (227 bytes, 61 insns) */
void f_12457040(void) {
  FTRACE(0x12457040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457040 push ebp */
  push32((uint32_t)(EBP));
  /* 12457041 mov ebp, esp */
  EBP = (ESP);
  /* 12457043 push ecx */
  push32((uint32_t)(ECX));
  /* 12457044 call 0x12457130 */
  push32(0x12457049u); f_12457130();
  /* 12457049 cmp dword ptr [0x12483898], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483898))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457050 jne 0x12457063 */
  if (!C.zf) goto L_12457063;
  /* 12457052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457055 push eax */
  push32((uint32_t)(EAX));
  /* 12457056 call dword ptr [0x1248636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248636c))), 0x1245705cu);
  /* 1245705c push eax */
  push32((uint32_t)(EAX));
  /* 1245705d call dword ptr [0x12486368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486368))), 0x12457063u);
L_12457063:;
  /* 12457063 mov dword ptr [0x12483894], 1 */
  w32((uint32_t)(0x12483894), (0x1u));
  /* 1245706d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12457070 mov byte ptr [0x12483890], cl */
  w8((uint32_t)(0x12483890), (CL));
  /* 12457076 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245707a jne 0x124570c3 */
  if (!C.zf) goto L_124570c3;
  /* 1245707c cmp dword ptr [0x12485398], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485398))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457083 je 0x124570b1 */
  if (C.zf) goto L_124570b1;
  /* 12457085 mov edx, dword ptr [0x12485394] */
  EDX = (r32((uint32_t)(0x12485394)));
  /* 1245708b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245708e:;
  /* 1245708e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457091 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12457094 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12457097 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245709a cmp ecx, dword ptr [0x12485398] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12485398))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124570a0 jb 0x124570b1 */
  if (C.cf) goto L_124570b1;
  /* 124570a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124570a5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124570a8 je 0x124570af */
  if (C.zf) goto L_124570af;
  /* 124570aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124570ad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x124570afu);
L_124570af:;
  /* 124570af jmp 0x1245708e */
  goto L_1245708e;
L_124570b1:;
  /* 124570b1 push 0x12481724 */
  push32((uint32_t)(0x12481724u));
  /* 124570b6 push 0x1248151c */
  push32((uint32_t)(0x1248151cu));
  /* 124570bb call 0x12457150 */
  push32(0x124570c0u); f_12457150();
  /* 124570c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124570c3:;
  /* 124570c3 push 0x1248192c */
  push32((uint32_t)(0x1248192cu));
  /* 124570c8 push 0x12481828 */
  push32((uint32_t)(0x12481828u));
  /* 124570cd call 0x12457150 */
  push32(0x124570d2u); f_12457150();
  /* 124570d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124570d5 cmp dword ptr [0x1248389c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1248389c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124570dc jne 0x124570fe */
  if (!C.zf) goto L_124570fe;
  /* 124570de push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 124570e0 call 0x12458d30 */
  push32(0x124570e5u); f_12458d30();
  /* 124570e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124570e8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 124570eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124570ed je 0x124570fe */
  if (C.zf) goto L_124570fe;
  /* 124570ef mov dword ptr [0x1248389c], 1 */
  w32((uint32_t)(0x1248389c), (0x1u));
  /* 124570f9 call 0x12459640 */
  push32(0x124570feu); f_12459640();
L_124570fe:;
  /* 124570fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457102 je 0x1245710b */
  if (C.zf) goto L_1245710b;
  /* 12457104 call 0x12457140 */
  push32(0x12457109u); f_12457140();
  /* 12457109 jmp 0x1245711f */
  goto L_1245711f;
L_1245710b:;
  /* 1245710b mov dword ptr [0x12483898], 1 */
  w32((uint32_t)(0x12483898), (0x1u));
  /* 12457115 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457118 push ecx */
  push32((uint32_t)(ECX));
  /* 12457119 call dword ptr [0x12486364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486364))), 0x1245711fu);
L_1245711f:;
  /* 1245711f mov esp, ebp */
  ESP = (EBP);
  /* 12457121 pop ebp */
  EBP = (pop32());
  /* 12457122 ret  */
  ESPCHK(0x12457040u, _esp0);
  ESP += 4; return;
}

/* FUN_10007130 @ 0x12457130 (15 bytes, 7 insns) */
void f_12457130(void) {
  FTRACE(0x12457130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457130 push ebp */
  push32((uint32_t)(EBP));
  /* 12457131 mov ebp, esp */
  EBP = (ESP);
  /* 12457133 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12457135 call 0x1245b220 */
  push32(0x1245713au); f_1245b220();
  /* 1245713a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245713d pop ebp */
  EBP = (pop32());
  /* 1245713e ret  */
  ESPCHK(0x12457130u, _esp0);
  ESP += 4; return;
}

/* FUN_10007140 @ 0x12457140 (15 bytes, 7 insns) */
void f_12457140(void) {
  FTRACE(0x12457140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457140 push ebp */
  push32((uint32_t)(EBP));
  /* 12457141 mov ebp, esp */
  EBP = (ESP);
  /* 12457143 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12457145 call 0x1245b2c0 */
  push32(0x1245714au); f_1245b2c0();
  /* 1245714a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245714d pop ebp */
  EBP = (pop32());
  /* 1245714e ret  */
  ESPCHK(0x12457140u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12457150 (37 bytes, 16 insns) */
void f_12457150(void) {
  FTRACE(0x12457150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457150 push ebp */
  push32((uint32_t)(EBP));
  /* 12457151 mov ebp, esp */
  EBP = (ESP);
L_12457153:;
  /* 12457153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457156 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457159 jae 0x12457173 */
  if (!C.cf) goto L_12457173;
  /* 1245715b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245715e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457161 je 0x12457168 */
  if (C.zf) goto L_12457168;
  /* 12457163 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457166 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12457168u);
L_12457168:;
  /* 12457168 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245716b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245716e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12457171 jmp 0x12457153 */
  goto L_12457153;
L_12457173:;
  /* 12457173 pop ebp */
  EBP = (pop32());
  /* 12457174 ret  */
  ESPCHK(0x12457150u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x12457180 (130 bytes, 42 insns) */
void f_12457180(void) {
  FTRACE(0x12457180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457180 push ebp */
  push32((uint32_t)(EBP));
  /* 12457181 mov ebp, esp */
  EBP = (ESP);
  /* 12457183 push ecx */
  push32((uint32_t)(ECX));
  /* 12457184 call 0x1245b140 */
  push32(0x12457189u); f_1245b140();
  /* 12457189 call dword ptr [0x124862a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862a4))), 0x1245718fu);
  /* 1245718f mov dword ptr [0x12481a5c], eax */
  w32((uint32_t)(0x12481a5c), (EAX));
  /* 12457194 cmp dword ptr [0x12481a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12481a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245719b jne 0x124571a1 */
  if (!C.zf) goto L_124571a1;
  /* 1245719d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245719f jmp 0x124571fe */
  goto L_124571fe;
L_124571a1:;
  /* 124571a1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 124571a3 push 0x1247eb2c */
  push32((uint32_t)(0x1247eb2cu));
  /* 124571a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124571aa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 124571ac push 1 */
  push32((uint32_t)(0x1u));
  /* 124571ae call 0x12457c30 */
  push32(0x124571b3u); f_12457c30();
  /* 124571b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124571b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124571b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124571bd je 0x124571d4 */
  if (C.zf) goto L_124571d4;
  /* 124571bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124571c2 push eax */
  push32((uint32_t)(EAX));
  /* 124571c3 mov ecx, dword ptr [0x12481a5c] */
  ECX = (r32((uint32_t)(0x12481a5c)));
  /* 124571c9 push ecx */
  push32((uint32_t)(ECX));
  /* 124571ca call dword ptr [0x12486374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486374))), 0x124571d0u);
  /* 124571d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124571d2 jne 0x124571d8 */
  if (!C.zf) goto L_124571d8;
L_124571d4:;
  /* 124571d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124571d6 jmp 0x124571fe */
  goto L_124571fe;
L_124571d8:;
  /* 124571d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124571db push edx */
  push32((uint32_t)(EDX));
  /* 124571dc call 0x12457240 */
  push32(0x124571e1u); f_12457240();
  /* 124571e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124571e4 call dword ptr [0x12486370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486370))), 0x124571eau);
  /* 124571ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124571ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124571ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124571f2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 124571f9 mov eax, 1 */
  EAX = (0x1u);
L_124571fe:;
  /* 124571fe mov esp, ebp */
  ESP = (EBP);
  /* 12457200 pop ebp */
  EBP = (pop32());
  /* 12457201 ret  */
  ESPCHK(0x12457180u, _esp0);
  ESP += 4; return;
}

/* FUN_10007210 @ 0x12457210 (41 bytes, 11 insns) */
void f_12457210(void) {
  FTRACE(0x12457210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457210 push ebp */
  push32((uint32_t)(EBP));
  /* 12457211 mov ebp, esp */
  EBP = (ESP);
  /* 12457213 call 0x1245b180 */
  push32(0x12457218u); f_1245b180();
  /* 12457218 cmp dword ptr [0x12481a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12481a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245721f je 0x12457237 */
  if (C.zf) goto L_12457237;
  /* 12457221 mov eax, dword ptr [0x12481a5c] */
  EAX = (r32((uint32_t)(0x12481a5c)));
  /* 12457226 push eax */
  push32((uint32_t)(EAX));
  /* 12457227 call dword ptr [0x124862a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124862a0))), 0x1245722du);
  /* 1245722d mov dword ptr [0x12481a5c], 0xffffffff */
  w32((uint32_t)(0x12481a5c), (0xffffffffu));
L_12457237:;
  /* 12457237 pop ebp */
  EBP = (pop32());
  /* 12457238 ret  */
  ESPCHK(0x12457210u, _esp0);
  ESP += 4; return;
}

/* FUN_10007240 @ 0x12457240 (25 bytes, 8 insns) */
void f_12457240(void) {
  FTRACE(0x12457240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457240 push ebp */
  push32((uint32_t)(EBP));
  /* 12457241 mov ebp, esp */
  EBP = (ESP);
  /* 12457243 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457246 mov dword ptr [eax + 0x50], 0x12481c00 */
  w32((uint32_t)(EAX + 0x50), (0x12481c00u));
  /* 1245724d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457250 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12457257 pop ebp */
  EBP = (pop32());
  /* 12457258 ret  */
  ESPCHK(0x12457240u, _esp0);
  ESP += 4; return;
}

/* FUN_10007260 @ 0x12457260 (152 bytes, 48 insns) */
void f_12457260(void) {
  FTRACE(0x12457260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457260 push ebp */
  push32((uint32_t)(EBP));
  /* 12457261 mov ebp, esp */
  EBP = (ESP);
  /* 12457263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12457266 call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x1245726cu);
  /* 1245726c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245726f mov eax, dword ptr [0x12481a5c] */
  EAX = (r32((uint32_t)(0x12481a5c)));
  /* 12457274 push eax */
  push32((uint32_t)(EAX));
  /* 12457275 call dword ptr [0x12486384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486384))), 0x1245727bu);
  /* 1245727b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245727e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457282 jne 0x124572e7 */
  if (!C.zf) goto L_124572e7;
  /* 12457284 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12457289 push 0x1247eb2c */
  push32((uint32_t)(0x1247eb2cu));
  /* 1245728e push 2 */
  push32((uint32_t)(0x2u));
  /* 12457290 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12457292 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457294 call 0x12457c30 */
  push32(0x12457299u); f_12457c30();
  /* 12457299 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245729c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245729f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124572a3 je 0x124572dd */
  if (C.zf) goto L_124572dd;
  /* 124572a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124572a8 push ecx */
  push32((uint32_t)(ECX));
  /* 124572a9 mov edx, dword ptr [0x12481a5c] */
  EDX = (r32((uint32_t)(0x12481a5c)));
  /* 124572af push edx */
  push32((uint32_t)(EDX));
  /* 124572b0 call dword ptr [0x12486374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486374))), 0x124572b6u);
  /* 124572b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124572b8 je 0x124572dd */
  if (C.zf) goto L_124572dd;
  /* 124572ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124572bd push eax */
  push32((uint32_t)(EAX));
  /* 124572be call 0x12457240 */
  push32(0x124572c3u); f_12457240();
  /* 124572c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124572c6 call dword ptr [0x12486370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486370))), 0x124572ccu);
  /* 124572cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124572cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124572d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124572d4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 124572db jmp 0x124572e7 */
  goto L_124572e7;
L_124572dd:;
  /* 124572dd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 124572df call 0x12456790 */
  push32(0x124572e4u); f_12456790();
  /* 124572e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124572e7:;
  /* 124572e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124572ea push eax */
  push32((uint32_t)(EAX));
  /* 124572eb call dword ptr [0x12486380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486380))), 0x124572f1u);
  /* 124572f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124572f4 mov esp, ebp */
  ESP = (EBP);
  /* 124572f6 pop ebp */
  EBP = (pop32());
  /* 124572f7 ret  */
  ESPCHK(0x12457260u, _esp0);
  ESP += 4; return;
}

/* FUN_10007300 @ 0x12457300 (263 bytes, 86 insns) */
void f_12457300(void) {
  FTRACE(0x12457300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457300 push ebp */
  push32((uint32_t)(EBP));
  /* 12457301 mov ebp, esp */
  EBP = (ESP);
  /* 12457303 cmp dword ptr [0x12481a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12481a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245730a je 0x12457405 */
  if (C.zf) goto L_12457405;
  /* 12457310 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457314 jne 0x12457325 */
  if (!C.zf) goto L_12457325;
  /* 12457316 mov eax, dword ptr [0x12481a5c] */
  EAX = (r32((uint32_t)(0x12481a5c)));
  /* 1245731b push eax */
  push32((uint32_t)(EAX));
  /* 1245731c call dword ptr [0x12486384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486384))), 0x12457322u);
  /* 12457322 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12457325:;
  /* 12457325 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457329 je 0x124573f6 */
  if (C.zf) goto L_124573f6;
  /* 1245732f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457332 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457336 je 0x12457349 */
  if (C.zf) goto L_12457349;
  /* 12457338 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245733a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245733d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12457340 push eax */
  push32((uint32_t)(EAX));
  /* 12457341 call 0x124582b0 */
  push32(0x12457346u); f_124582b0();
  /* 12457346 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12457349:;
  /* 12457349 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245734c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457350 je 0x12457363 */
  if (C.zf) goto L_12457363;
  /* 12457352 push 2 */
  push32((uint32_t)(0x2u));
  /* 12457354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457357 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1245735a push eax */
  push32((uint32_t)(EAX));
  /* 1245735b call 0x124582b0 */
  push32(0x12457360u); f_124582b0();
  /* 12457360 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12457363:;
  /* 12457363 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457366 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245736a je 0x1245737d */
  if (C.zf) goto L_1245737d;
  /* 1245736c push 2 */
  push32((uint32_t)(0x2u));
  /* 1245736e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457371 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12457374 push eax */
  push32((uint32_t)(EAX));
  /* 12457375 call 0x124582b0 */
  push32(0x1245737au); f_124582b0();
  /* 1245737a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245737d:;
  /* 1245737d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457380 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457384 je 0x12457397 */
  if (C.zf) goto L_12457397;
  /* 12457386 push 2 */
  push32((uint32_t)(0x2u));
  /* 12457388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245738b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1245738e push eax */
  push32((uint32_t)(EAX));
  /* 1245738f call 0x124582b0 */
  push32(0x12457394u); f_124582b0();
  /* 12457394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12457397:;
  /* 12457397 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245739a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245739e je 0x124573b1 */
  if (C.zf) goto L_124573b1;
  /* 124573a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124573a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124573a5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 124573a8 push eax */
  push32((uint32_t)(EAX));
  /* 124573a9 call 0x124582b0 */
  push32(0x124573aeu); f_124582b0();
  /* 124573ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124573b1:;
  /* 124573b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124573b4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124573b8 je 0x124573cb */
  if (C.zf) goto L_124573cb;
  /* 124573ba push 2 */
  push32((uint32_t)(0x2u));
  /* 124573bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124573bf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 124573c2 push eax */
  push32((uint32_t)(EAX));
  /* 124573c3 call 0x124582b0 */
  push32(0x124573c8u); f_124582b0();
  /* 124573c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124573cb:;
  /* 124573cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124573ce cmp dword ptr [ecx + 0x50], 0x12481c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12481c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124573d5 je 0x124573e8 */
  if (C.zf) goto L_124573e8;
  /* 124573d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124573d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124573dc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 124573df push eax */
  push32((uint32_t)(EAX));
  /* 124573e0 call 0x124582b0 */
  push32(0x124573e5u); f_124582b0();
  /* 124573e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124573e8:;
  /* 124573e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124573ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124573ed push ecx */
  push32((uint32_t)(ECX));
  /* 124573ee call 0x124582b0 */
  push32(0x124573f3u); f_124582b0();
  /* 124573f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124573f6:;
  /* 124573f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124573f8 mov edx, dword ptr [0x12481a5c] */
  EDX = (r32((uint32_t)(0x12481a5c)));
  /* 124573fe push edx */
  push32((uint32_t)(EDX));
  /* 124573ff call dword ptr [0x12486374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486374))), 0x12457405u);
L_12457405:;
  /* 12457405 pop ebp */
  EBP = (pop32());
  /* 12457406 ret  */
  ESPCHK(0x12457300u, _esp0);
  ESP += 4; return;
}

/* FUN_10007410 @ 0x12457410 (11 bytes, 5 insns) */
void f_12457410(void) {
  FTRACE(0x12457410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457410 push ebp */
  push32((uint32_t)(EBP));
  /* 12457411 mov ebp, esp */
  EBP = (ESP);
  /* 12457413 call dword ptr [0x12486370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486370))), 0x12457419u);
  /* 12457419 pop ebp */
  EBP = (pop32());
  /* 1245741a ret  */
  ESPCHK(0x12457410u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x12457420 (11 bytes, 5 insns) */
void f_12457420(void) {
  FTRACE(0x12457420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457420 push ebp */
  push32((uint32_t)(EBP));
  /* 12457421 mov ebp, esp */
  EBP = (ESP);
  /* 12457423 call dword ptr [0x1248638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248638c))), 0x12457429u);
  /* 12457429 pop ebp */
  EBP = (pop32());
  /* 1245742a ret  */
  ESPCHK(0x12457420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x12457430 (804 bytes, 236 insns) */
void f_12457430(void) {
  FTRACE(0x12457430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457430 push ebp */
  push32((uint32_t)(EBP));
  /* 12457431 mov ebp, esp */
  EBP = (ESP);
  /* 12457433 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12457436 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1245743b push 0x1247eb38 */
  push32((uint32_t)(0x1247eb38u));
  /* 12457440 push 2 */
  push32((uint32_t)(0x2u));
  /* 12457442 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12457447 call 0x12457820 */
  push32(0x1245744cu); f_12457820();
  /* 1245744c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245744f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12457452 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457456 jne 0x12457462 */
  if (!C.zf) goto L_12457462;
  /* 12457458 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1245745a call 0x12456790 */
  push32(0x1245745fu); f_12456790();
  /* 1245745f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12457462:;
  /* 12457462 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457465 mov dword ptr [0x12485240], eax */
  w32((uint32_t)(0x12485240), (EAX));
  /* 1245746a mov dword ptr [0x1248537c], 0x20 */
  w32((uint32_t)(0x1248537c), (0x20u));
  /* 12457474 jmp 0x1245747f */
  goto L_1245747f;
L_12457476:;
  /* 12457476 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457479 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245747c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1245747f:;
  /* 1245747f mov edx, dword ptr [0x12485240] */
  EDX = (r32((uint32_t)(0x12485240)));
  /* 12457485 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245748b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245748e jae 0x124574b3 */
  if (!C.cf) goto L_124574b3;
  /* 12457490 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457493 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12457497 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1245749a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124574a0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124574a3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 124574a7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 124574aa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 124574b1 jmp 0x12457476 */
  goto L_12457476;
L_124574b3:;
  /* 124574b3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 124574b6 push ecx */
  push32((uint32_t)(ECX));
  /* 124574b7 call dword ptr [0x12486398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486398))), 0x124574bdu);
  /* 124574bd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 124574c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124574c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124574c8 je 0x12457655 */
  if (C.zf) goto L_12457655;
  /* 124574ce cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124574d2 je 0x12457655 */
  if (C.zf) goto L_12457655;
  /* 124574d8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124574db mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124574dd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 124574e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 124574e3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124574e6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124574e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124574ec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124574ef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 124574f2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124574f9 jge 0x12457503 */
  if ((C.sf==C.of)) goto L_12457503;
  /* 124574fb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 124574fe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12457501 jmp 0x1245750a */
  goto L_1245750a;
L_12457503:;
  /* 12457503 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1245750a:;
  /* 1245750a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1245750d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12457510 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12457517 jmp 0x12457522 */
  goto L_12457522;
L_12457519:;
  /* 12457519 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1245751c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245751f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12457522:;
  /* 12457522 mov ecx, dword ptr [0x1248537c] */
  ECX = (r32((uint32_t)(0x1248537c)));
  /* 12457528 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245752b jge 0x124575c2 */
  if ((C.sf==C.of)) goto L_124575c2;
  /* 12457531 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12457536 push 0x1247eb38 */
  push32((uint32_t)(0x1247eb38u));
  /* 1245753b push 2 */
  push32((uint32_t)(0x2u));
  /* 1245753d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12457542 call 0x12457820 */
  push32(0x12457547u); f_12457820();
  /* 12457547 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245754a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1245754d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457551 jne 0x1245755e */
  if (!C.zf) goto L_1245755e;
  /* 12457553 mov edx, dword ptr [0x1248537c] */
  EDX = (r32((uint32_t)(0x1248537c)));
  /* 12457559 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1245755c jmp 0x124575c2 */
  goto L_124575c2;
L_1245755e:;
  /* 1245755e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12457561 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457564 mov dword ptr [eax*4 + 0x12485240], ecx */
  w32((uint32_t)(EAX*4 + 0x12485240), (ECX));
  /* 1245756b mov edx, dword ptr [0x1248537c] */
  EDX = (r32((uint32_t)(0x1248537c)));
  /* 12457571 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457574 mov dword ptr [0x1248537c], edx */
  w32((uint32_t)(0x1248537c), (EDX));
  /* 1245757a jmp 0x12457585 */
  goto L_12457585;
L_1245757c:;
  /* 1245757c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1245757f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457582 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12457585:;
  /* 12457585 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12457588 mov edx, dword ptr [ecx*4 + 0x12485240] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12485240)));
  /* 1245758f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457595 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457598 jae 0x124575bd */
  if (!C.cf) goto L_124575bd;
  /* 1245759a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1245759d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 124575a1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 124575a4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124575aa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124575ad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 124575b1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 124575b4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 124575bb jmp 0x1245757c */
  goto L_1245757c;
L_124575bd:;
  /* 124575bd jmp 0x12457519 */
  goto L_12457519;
L_124575c2:;
  /* 124575c2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 124575c9 jmp 0x124575e6 */
  goto L_124575e6;
L_124575cb:;
  /* 124575cb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 124575ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124575d1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 124575d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124575d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124575da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124575dd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 124575e0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124575e3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_124575e6:;
  /* 124575e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 124575e9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124575ec jge 0x12457655 */
  if ((C.sf==C.of)) goto L_12457655;
  /* 124575ee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 124575f1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124575f4 je 0x12457650 */
  if (C.zf) goto L_12457650;
  /* 124575f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124575f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124575fc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 124575ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12457601 je 0x12457650 */
  if (C.zf) goto L_12457650;
  /* 12457603 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457606 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12457609 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1245760c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245760e jne 0x12457620 */
  if (!C.zf) goto L_12457620;
  /* 12457610 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12457613 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12457615 push edx */
  push32((uint32_t)(EDX));
  /* 12457616 call dword ptr [0x12486394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486394))), 0x1245761cu);
  /* 1245761c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245761e je 0x12457650 */
  if (C.zf) goto L_12457650;
L_12457620:;
  /* 12457620 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12457623 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12457626 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12457629 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1245762c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245762f mov edx, dword ptr [eax*4 + 0x12485240] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 12457636 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457638 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1245763b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1245763e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12457641 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12457643 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12457645 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457648 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245764b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245764d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12457650:;
  /* 12457650 jmp 0x124575cb */
  goto L_124575cb;
L_12457655:;
  /* 12457655 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1245765c jmp 0x12457667 */
  goto L_12457667;
L_1245765e:;
  /* 1245765e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12457661 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457664 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12457667:;
  /* 12457667 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245766b jge 0x12457744 */
  if ((C.sf==C.of)) goto L_12457744;
  /* 12457671 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12457674 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12457677 mov edx, dword ptr [0x12485240] */
  EDX = (r32((uint32_t)(0x12485240)));
  /* 1245767d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245767f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12457682 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457685 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457688 jne 0x12457730 */
  if (!C.zf) goto L_12457730;
  /* 1245768e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457691 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12457695 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457699 jne 0x124576a4 */
  if (!C.zf) goto L_124576a4;
  /* 1245769b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 124576a2 jmp 0x124576b4 */
  goto L_124576b4;
L_124576a4:;
  /* 124576a4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 124576a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124576aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124576ac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124576ae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124576b1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_124576b4:;
  /* 124576b4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 124576b7 push eax */
  push32((uint32_t)(EAX));
  /* 124576b8 call dword ptr [0x12486344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486344))), 0x124576beu);
  /* 124576be mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 124576c1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124576c5 je 0x1245771f */
  if (C.zf) goto L_1245771f;
  /* 124576c7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 124576ca push ecx */
  push32((uint32_t)(ECX));
  /* 124576cb call dword ptr [0x12486394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486394))), 0x124576d1u);
  /* 124576d1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 124576d4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124576d8 je 0x1245771f */
  if (C.zf) goto L_1245771f;
  /* 124576da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124576dd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 124576e0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 124576e2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 124576e5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124576eb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124576ee jne 0x12457700 */
  if (!C.zf) goto L_12457700;
  /* 124576f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124576f3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 124576f6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 124576f8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 124576fb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 124576fe jmp 0x1245771d */
  goto L_1245771d;
L_12457700:;
  /* 12457700 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12457703 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12457709 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245770c jne 0x1245771d */
  if (!C.zf) goto L_1245771d;
  /* 1245770e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457711 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12457714 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12457717 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1245771a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1245771d:;
  /* 1245771d jmp 0x1245772e */
  goto L_1245772e;
L_1245771f:;
  /* 1245771f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457722 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12457725 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12457728 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1245772b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1245772e:;
  /* 1245772e jmp 0x1245773f */
  goto L_1245773f;
L_12457730:;
  /* 12457730 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12457733 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12457736 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12457739 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1245773c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1245773f:;
  /* 1245773f jmp 0x1245765e */
  goto L_1245765e;
L_12457744:;
  /* 12457744 mov eax, dword ptr [0x1248537c] */
  EAX = (r32((uint32_t)(0x1248537c)));
  /* 12457749 push eax */
  push32((uint32_t)(EAX));
  /* 1245774a call dword ptr [0x12486390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486390))), 0x12457750u);
  /* 12457750 mov esp, ebp */
  ESP = (EBP);
  /* 12457752 pop ebp */
  EBP = (pop32());
  /* 12457753 ret  */
  ESPCHK(0x12457430u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12457760 (155 bytes, 45 insns) */
void f_12457760(void) {
  FTRACE(0x12457760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457760 push ebp */
  push32((uint32_t)(EBP));
  /* 12457761 mov ebp, esp */
  EBP = (ESP);
  /* 12457763 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12457766 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1245776d jmp 0x12457778 */
  goto L_12457778;
L_1245776f:;
  /* 1245776f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457772 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457775 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12457778:;
  /* 12457778 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245777c jge 0x124577f7 */
  if ((C.sf==C.of)) goto L_124577f7;
  /* 1245777e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457781 cmp dword ptr [ecx*4 + 0x12485240], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12485240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457789 je 0x124577f2 */
  if (C.zf) goto L_124577f2;
  /* 1245778b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245778e mov eax, dword ptr [edx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 12457795 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12457798 jmp 0x124577a3 */
  goto L_124577a3;
L_1245779a:;
  /* 1245779a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245779d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124577a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124577a3:;
  /* 124577a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124577a6 mov eax, dword ptr [edx*4 + 0x12485240] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12485240)));
  /* 124577ad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124577b2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124577b5 jae 0x124577cf */
  if (!C.cf) goto L_124577cf;
  /* 124577b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124577ba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124577be je 0x124577cd */
  if (C.zf) goto L_124577cd;
  /* 124577c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124577c3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124577c6 push edx */
  push32((uint32_t)(EDX));
  /* 124577c7 call dword ptr [0x1248639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248639c))), 0x124577cdu);
L_124577cd:;
  /* 124577cd jmp 0x1245779a */
  goto L_1245779a;
L_124577cf:;
  /* 124577cf push 2 */
  push32((uint32_t)(0x2u));
  /* 124577d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124577d4 mov ecx, dword ptr [eax*4 + 0x12485240] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12485240)));
  /* 124577db push ecx */
  push32((uint32_t)(ECX));
  /* 124577dc call 0x124582b0 */
  push32(0x124577e1u); f_124582b0();
  /* 124577e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124577e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124577e7 mov dword ptr [edx*4 + 0x12485240], 0 */
  w32((uint32_t)(EDX*4 + 0x12485240), (0x0u));
L_124577f2:;
  /* 124577f2 jmp 0x1245776f */
  goto L_1245776f;
L_124577f7:;
  /* 124577f7 mov esp, ebp */
  ESP = (EBP);
  /* 124577f9 pop ebp */
  EBP = (pop32());
  /* 124577fa ret  */
  ESPCHK(0x12457760u, _esp0);
  ESP += 4; return;
}

/* FUN_10007800 @ 0x12457800 (29 bytes, 13 insns) */
void f_12457800(void) {
  FTRACE(0x12457800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457800 push ebp */
  push32((uint32_t)(EBP));
  /* 12457801 mov ebp, esp */
  EBP = (ESP);
  /* 12457803 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457805 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457807 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457809 mov eax, dword ptr [0x12483a40] */
  EAX = (r32((uint32_t)(0x12483a40)));
  /* 1245780e push eax */
  push32((uint32_t)(EAX));
  /* 1245780f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457812 push ecx */
  push32((uint32_t)(ECX));
  /* 12457813 call 0x12457870 */
  push32(0x12457818u); f_12457870();
  /* 12457818 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245781b pop ebp */
  EBP = (pop32());
  /* 1245781c ret  */
  ESPCHK(0x12457800u, _esp0);
  ESP += 4; return;
}

/* FUN_10007820 @ 0x12457820 (35 bytes, 16 insns) */
void f_12457820(void) {
  FTRACE(0x12457820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457820 push ebp */
  push32((uint32_t)(EBP));
  /* 12457821 mov ebp, esp */
  EBP = (ESP);
  /* 12457823 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457826 push eax */
  push32((uint32_t)(EAX));
  /* 12457827 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245782a push ecx */
  push32((uint32_t)(ECX));
  /* 1245782b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245782e push edx */
  push32((uint32_t)(EDX));
  /* 1245782f mov eax, dword ptr [0x12483a40] */
  EAX = (r32((uint32_t)(0x12483a40)));
  /* 12457834 push eax */
  push32((uint32_t)(EAX));
  /* 12457835 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457838 push ecx */
  push32((uint32_t)(ECX));
  /* 12457839 call 0x12457870 */
  push32(0x1245783eu); f_12457870();
  /* 1245783e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457841 pop ebp */
  EBP = (pop32());
  /* 12457842 ret  */
  ESPCHK(0x12457820u, _esp0);
  ESP += 4; return;
}

/* FUN_10007850 @ 0x12457850 (27 bytes, 13 insns) */
void f_12457850(void) {
  FTRACE(0x12457850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457850 push ebp */
  push32((uint32_t)(EBP));
  /* 12457851 mov ebp, esp */
  EBP = (ESP);
  /* 12457853 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457857 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457859 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245785c push eax */
  push32((uint32_t)(EAX));
  /* 1245785d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457860 push ecx */
  push32((uint32_t)(ECX));
  /* 12457861 call 0x12457870 */
  push32(0x12457866u); f_12457870();
  /* 12457866 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457869 pop ebp */
  EBP = (pop32());
  /* 1245786a ret  */
  ESPCHK(0x12457850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007870 @ 0x12457870 (94 bytes, 38 insns) */
void f_12457870(void) {
  FTRACE(0x12457870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457870 push ebp */
  push32((uint32_t)(EBP));
  /* 12457871 mov ebp, esp */
  EBP = (ESP);
  /* 12457873 push ecx */
  push32((uint32_t)(ECX));
L_12457874:;
  /* 12457874 push 9 */
  push32((uint32_t)(0x9u));
  /* 12457876 call 0x1245b220 */
  push32(0x1245787bu); f_1245b220();
  /* 1245787b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245787e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12457881 push eax */
  push32((uint32_t)(EAX));
  /* 12457882 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457885 push ecx */
  push32((uint32_t)(ECX));
  /* 12457886 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457889 push edx */
  push32((uint32_t)(EDX));
  /* 1245788a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245788d push eax */
  push32((uint32_t)(EAX));
  /* 1245788e call 0x124578f0 */
  push32(0x12457893u); f_124578f0();
  /* 12457893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457896 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12457899 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245789b call 0x1245b2c0 */
  push32(0x124578a0u); f_1245b2c0();
  /* 124578a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124578a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124578a7 jne 0x124578af */
  if (!C.zf) goto L_124578af;
  /* 124578a9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124578ad jne 0x124578b4 */
  if (!C.zf) goto L_124578b4;
L_124578af:;
  /* 124578af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124578b2 jmp 0x124578ca */
  goto L_124578ca;
L_124578b4:;
  /* 124578b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124578b7 push ecx */
  push32((uint32_t)(ECX));
  /* 124578b8 call 0x1245b560 */
  push32(0x124578bdu); f_1245b560();
  /* 124578bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124578c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124578c2 jne 0x124578c8 */
  if (!C.zf) goto L_124578c8;
  /* 124578c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124578c6 jmp 0x124578ca */
  goto L_124578ca;
L_124578c8:;
  /* 124578c8 jmp 0x12457874 */
  goto L_12457874;
L_124578ca:;
  /* 124578ca mov esp, ebp */
  ESP = (EBP);
  /* 124578cc pop ebp */
  EBP = (pop32());
  /* 124578cd ret  */
  ESPCHK(0x12457870u, _esp0);
  ESP += 4; return;
}

/* FUN_100078d0 @ 0x124578d0 (23 bytes, 11 insns) */
void f_124578d0(void) {
  FTRACE(0x124578d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124578d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124578d1 mov ebp, esp */
  EBP = (ESP);
  /* 124578d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124578d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124578d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 124578d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124578dc push eax */
  push32((uint32_t)(EAX));
  /* 124578dd call 0x124578f0 */
  push32(0x124578e2u); f_124578f0();
  /* 124578e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124578e5 pop ebp */
  EBP = (pop32());
  /* 124578e6 ret  */
  ESPCHK(0x124578d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x124578f0 (787 bytes, 254 insns) */
void f_124578f0(void) {
  FTRACE(0x124578f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124578f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124578f1 mov ebp, esp */
  EBP = (ESP);
  /* 124578f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124578f6 push ebx */
  push32((uint32_t)(EBX));
  /* 124578f7 push esi */
  push32((uint32_t)(ESI));
  /* 124578f8 push edi */
  push32((uint32_t)(EDI));
  /* 124578f9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12457900 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 12457905 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12457908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245790a je 0x1245793c */
  if (C.zf) goto L_1245793c;
L_1245790c:;
  /* 1245790c call 0x124589c0 */
  push32(0x12457911u); f_124589c0();
  /* 12457911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457913 jne 0x12457936 */
  if (!C.zf) goto L_12457936;
  /* 12457915 push 0x1247ec2c */
  push32((uint32_t)(0x1247ec2cu));
  /* 1245791a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245791c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12457921 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12457926 push 2 */
  push32((uint32_t)(0x2u));
  /* 12457928 call 0x124568e0 */
  push32(0x1245792du); f_124568e0();
  /* 1245792d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457930 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457933 jne 0x12457936 */
  if (!C.zf) goto L_12457936;
  /* 12457935 int3  */
  x86_unimpl("int3 @ 0x12457935");
L_12457936:;
  /* 12457936 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12457938 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245793a jne 0x1245790c */
  if (!C.zf) goto L_1245790c;
L_1245793c:;
  /* 1245793c mov edx, dword ptr [0x12481a88] */
  EDX = (r32((uint32_t)(0x12481a88)));
  /* 12457942 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12457945 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457948 cmp eax, dword ptr [0x12481a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12481a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245794e jne 0x12457951 */
  if (!C.zf) goto L_12457951;
  /* 12457950 int3  */
  x86_unimpl("int3 @ 0x12457950");
L_12457951:;
  /* 12457951 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457954 push ecx */
  push32((uint32_t)(ECX));
  /* 12457955 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457958 push edx */
  push32((uint32_t)(EDX));
  /* 12457959 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245795c push eax */
  push32((uint32_t)(EAX));
  /* 1245795d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457960 push ecx */
  push32((uint32_t)(ECX));
  /* 12457961 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457964 push edx */
  push32((uint32_t)(EDX));
  /* 12457965 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457967 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457969 call dword ptr [0x12481c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12481c90))), 0x1245796fu);
  /* 1245796f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457974 jne 0x124579d4 */
  if (!C.zf) goto L_124579d4;
  /* 12457976 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245797a je 0x124579a7 */
  if (C.zf) goto L_124579a7;
L_1245797c:;
  /* 1245797c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245797f push eax */
  push32((uint32_t)(EAX));
  /* 12457980 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457983 push ecx */
  push32((uint32_t)(ECX));
  /* 12457984 push 0x1247ebe8 */
  push32((uint32_t)(0x1247ebe8u));
  /* 12457989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245798b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245798d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245798f push 0 */
  push32((uint32_t)(0x0u));
  /* 12457991 call 0x124568e0 */
  push32(0x12457996u); f_124568e0();
  /* 12457996 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245799c jne 0x1245799f */
  if (!C.zf) goto L_1245799f;
  /* 1245799e int3  */
  x86_unimpl("int3 @ 0x1245799e");
L_1245799f:;
  /* 1245799f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124579a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124579a3 jne 0x1245797c */
  if (!C.zf) goto L_1245797c;
  /* 124579a5 jmp 0x124579cd */
  goto L_124579cd;
L_124579a7:;
  /* 124579a7 push 0x1247ebc4 */
  push32((uint32_t)(0x1247ebc4u));
  /* 124579ac push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 124579b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124579b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124579b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124579b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124579b9 call 0x124568e0 */
  push32(0x124579beu); f_124568e0();
  /* 124579be add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124579c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124579c4 jne 0x124579c7 */
  if (!C.zf) goto L_124579c7;
  /* 124579c6 int3  */
  x86_unimpl("int3 @ 0x124579c6");
L_124579c7:;
  /* 124579c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124579c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124579cb jne 0x124579a7 */
  if (!C.zf) goto L_124579a7;
L_124579cd:;
  /* 124579cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124579cf jmp 0x12457bfc */
  goto L_12457bfc;
L_124579d4:;
  /* 124579d4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124579d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124579dd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124579e0 je 0x124579f6 */
  if (C.zf) goto L_124579f6;
  /* 124579e2 mov edx, dword ptr [0x12481a84] */
  EDX = (r32((uint32_t)(0x12481a84)));
  /* 124579e8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 124579eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124579ed jne 0x124579f6 */
  if (!C.zf) goto L_124579f6;
  /* 124579ef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_124579f6:;
  /* 124579f6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124579fa ja 0x12457a07 */
  if ((!C.cf&&!C.zf)) goto L_12457a07;
  /* 124579fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124579ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457a02 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457a05 jbe 0x12457a33 */
  if ((C.cf||C.zf)) goto L_12457a33;
L_12457a07:;
  /* 12457a07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457a0a push ecx */
  push32((uint32_t)(ECX));
  /* 12457a0b push 0x1247eb9c */
  push32((uint32_t)(0x1247eb9cu));
  /* 12457a10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457a12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457a16 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457a18 call 0x124568e0 */
  push32(0x12457a1du); f_124568e0();
  /* 12457a1d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457a20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457a23 jne 0x12457a26 */
  if (!C.zf) goto L_12457a26;
  /* 12457a25 int3  */
  x86_unimpl("int3 @ 0x12457a25");
L_12457a26:;
  /* 12457a26 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12457a28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12457a2a jne 0x12457a07 */
  if (!C.zf) goto L_12457a07;
  /* 12457a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457a2e jmp 0x12457bfc */
  goto L_12457bfc;
L_12457a33:;
  /* 12457a33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457a36 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12457a3b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457a3e je 0x12457a80 */
  if (C.zf) goto L_12457a80;
  /* 12457a40 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457a44 je 0x12457a80 */
  if (C.zf) goto L_12457a80;
  /* 12457a46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457a49 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12457a4f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457a52 je 0x12457a80 */
  if (C.zf) goto L_12457a80;
  /* 12457a54 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457a58 je 0x12457a80 */
  if (C.zf) goto L_12457a80;
L_12457a5a:;
  /* 12457a5a push 0x1247eb68 */
  push32((uint32_t)(0x1247eb68u));
  /* 12457a5f push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12457a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 12457a6c call 0x124568e0 */
  push32(0x12457a71u); f_124568e0();
  /* 12457a71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457a74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457a77 jne 0x12457a7a */
  if (!C.zf) goto L_12457a7a;
  /* 12457a79 int3  */
  x86_unimpl("int3 @ 0x12457a79");
L_12457a7a:;
  /* 12457a7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12457a7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12457a7e jne 0x12457a5a */
  if (!C.zf) goto L_12457a5a;
L_12457a80:;
  /* 12457a80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457a83 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457a86 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12457a89 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12457a8c push ecx */
  push32((uint32_t)(ECX));
  /* 12457a8d call 0x1245b670 */
  push32(0x12457a92u); f_1245b670();
  /* 12457a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457a95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12457a98 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457a9c jne 0x12457aa5 */
  if (!C.zf) goto L_12457aa5;
  /* 12457a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457aa0 jmp 0x12457bfc */
  goto L_12457bfc;
L_12457aa5:;
  /* 12457aa5 mov edx, dword ptr [0x12481a88] */
  EDX = (r32((uint32_t)(0x12481a88)));
  /* 12457aab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457aae mov dword ptr [0x12481a88], edx */
  w32((uint32_t)(0x12481a88), (EDX));
  /* 12457ab4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457ab8 je 0x12457b03 */
  if (C.zf) goto L_12457b03;
  /* 12457aba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457abd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12457ac3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457ac6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12457acd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457ad0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12457ad7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457ada mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12457ae1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457ae4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457ae7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12457aea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457aed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12457af4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457af7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12457afe jmp 0x12457ba3 */
  goto L_12457ba3;
L_12457b03:;
  /* 12457b03 mov edx, dword ptr [0x124838a4] */
  EDX = (r32((uint32_t)(0x124838a4)));
  /* 12457b09 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457b0c mov dword ptr [0x124838a4], edx */
  w32((uint32_t)(0x124838a4), (EDX));
  /* 12457b12 mov eax, dword ptr [0x124838ac] */
  EAX = (r32((uint32_t)(0x124838ac)));
  /* 12457b17 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457b1a mov dword ptr [0x124838ac], eax */
  w32((uint32_t)(0x124838ac), (EAX));
  /* 12457b1f mov ecx, dword ptr [0x124838ac] */
  ECX = (r32((uint32_t)(0x124838ac)));
  /* 12457b25 cmp ecx, dword ptr [0x124838b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x124838b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457b2b jbe 0x12457b39 */
  if ((C.cf||C.zf)) goto L_12457b39;
  /* 12457b2d mov edx, dword ptr [0x124838ac] */
  EDX = (r32((uint32_t)(0x124838ac)));
  /* 12457b33 mov dword ptr [0x124838b0], edx */
  w32((uint32_t)(0x124838b0), (EDX));
L_12457b39:;
  /* 12457b39 cmp dword ptr [0x124838a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124838a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457b40 je 0x12457b4f */
  if (C.zf) goto L_12457b4f;
  /* 12457b42 mov eax, dword ptr [0x124838a8] */
  EAX = (r32((uint32_t)(0x124838a8)));
  /* 12457b47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12457b4d jmp 0x12457b58 */
  goto L_12457b58;
L_12457b4f:;
  /* 12457b4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b52 mov dword ptr [0x124838a0], edx */
  w32((uint32_t)(0x124838a0), (EDX));
L_12457b58:;
  /* 12457b58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b5b mov ecx, dword ptr [0x124838a8] */
  ECX = (r32((uint32_t)(0x124838a8)));
  /* 12457b61 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12457b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b66 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12457b6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457b73 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12457b76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b79 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457b7c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12457b7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b82 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457b85 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12457b88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457b8e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12457b91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457b97 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12457b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457b9d mov dword ptr [0x124838a8], ecx */
  w32((uint32_t)(0x124838a8), (ECX));
L_12457ba3:;
  /* 12457ba3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12457ba5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12457ba7 mov dl, byte ptr [0x12481a90] */
  DL = (r8((uint32_t)(0x12481a90)));
  /* 12457bad push edx */
  push32((uint32_t)(EDX));
  /* 12457bae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457bb1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457bb4 push eax */
  push32((uint32_t)(EAX));
  /* 12457bb5 call 0x1245b590 */
  push32(0x12457bbau); f_1245b590();
  /* 12457bba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457bbd push 4 */
  push32((uint32_t)(0x4u));
  /* 12457bbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12457bc1 mov cl, byte ptr [0x12481a90] */
  CL = (r8((uint32_t)(0x12481a90)));
  /* 12457bc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12457bc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457bce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12457bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12457bd3 call 0x1245b590 */
  push32(0x12457bd8u); f_1245b590();
  /* 12457bd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457bdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457bde push edx */
  push32((uint32_t)(EDX));
  /* 12457bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457be1 mov al, byte ptr [0x12481a92] */
  AL = (r8((uint32_t)(0x12481a92)));
  /* 12457be6 push eax */
  push32((uint32_t)(EAX));
  /* 12457be7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457bea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457bed push ecx */
  push32((uint32_t)(ECX));
  /* 12457bee call 0x1245b590 */
  push32(0x12457bf3u); f_1245b590();
  /* 12457bf3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457bf9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12457bfc:;
  /* 12457bfc pop edi */
  EDI = (pop32());
  /* 12457bfd pop esi */
  ESI = (pop32());
  /* 12457bfe pop ebx */
  EBX = (pop32());
  /* 12457bff mov esp, ebp */
  ESP = (EBP);
  /* 12457c01 pop ebp */
  EBP = (pop32());
  /* 12457c02 ret  */
  ESPCHK(0x124578f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c10 @ 0x12457c10 (27 bytes, 13 insns) */
void f_12457c10(void) {
  FTRACE(0x12457c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12457c11 mov ebp, esp */
  EBP = (ESP);
  /* 12457c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457c17 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457c19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457c1c push eax */
  push32((uint32_t)(EAX));
  /* 12457c1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457c20 push ecx */
  push32((uint32_t)(ECX));
  /* 12457c21 call 0x12457c30 */
  push32(0x12457c26u); f_12457c30();
  /* 12457c26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457c29 pop ebp */
  EBP = (pop32());
  /* 12457c2a ret  */
  ESPCHK(0x12457c10u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12457c30 (96 bytes, 37 insns) */
void f_12457c30(void) {
  FTRACE(0x12457c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12457c31 mov ebp, esp */
  EBP = (ESP);
  /* 12457c33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12457c36 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457c39 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12457c3d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12457c40 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12457c43 push ecx */
  push32((uint32_t)(ECX));
  /* 12457c44 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457c47 push edx */
  push32((uint32_t)(EDX));
  /* 12457c48 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457c4b push eax */
  push32((uint32_t)(EAX));
  /* 12457c4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457c4f push ecx */
  push32((uint32_t)(ECX));
  /* 12457c50 call 0x12457820 */
  push32(0x12457c55u); f_12457820();
  /* 12457c55 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457c58 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12457c5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457c5f je 0x12457c89 */
  if (C.zf) goto L_12457c89;
  /* 12457c61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457c64 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12457c67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12457c6a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457c6d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12457c70:;
  /* 12457c70 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12457c73 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457c76 jae 0x12457c89 */
  if (!C.cf) goto L_12457c89;
  /* 12457c78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12457c7b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12457c7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12457c81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457c84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12457c87 jmp 0x12457c70 */
  goto L_12457c70;
L_12457c89:;
  /* 12457c89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457c8c mov esp, ebp */
  ESP = (EBP);
  /* 12457c8e pop ebp */
  EBP = (pop32());
  /* 12457c8f ret  */
  ESPCHK(0x12457c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c90 @ 0x12457c90 (27 bytes, 13 insns) */
void f_12457c90(void) {
  FTRACE(0x12457c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457c90 push ebp */
  push32((uint32_t)(EBP));
  /* 12457c91 mov ebp, esp */
  EBP = (ESP);
  /* 12457c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457c99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457c9c push eax */
  push32((uint32_t)(EAX));
  /* 12457c9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 12457ca1 call 0x12457cb0 */
  push32(0x12457ca6u); f_12457cb0();
  /* 12457ca6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457ca9 pop ebp */
  EBP = (pop32());
  /* 12457caa ret  */
  ESPCHK(0x12457c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x12457cb0 (64 bytes, 27 insns) */
void f_12457cb0(void) {
  FTRACE(0x12457cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12457cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12457cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12457cb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12457cb6 call 0x1245b220 */
  push32(0x12457cbbu); f_1245b220();
  /* 12457cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457cbe push 1 */
  push32((uint32_t)(0x1u));
  /* 12457cc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12457cc3 push eax */
  push32((uint32_t)(EAX));
  /* 12457cc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12457cc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457ccb push edx */
  push32((uint32_t)(EDX));
  /* 12457ccc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457ccf push eax */
  push32((uint32_t)(EAX));
  /* 12457cd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12457cd4 call 0x12457cf0 */
  push32(0x12457cd9u); f_12457cf0();
  /* 12457cd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457cdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12457cdf push 9 */
  push32((uint32_t)(0x9u));
  /* 12457ce1 call 0x1245b2c0 */
  push32(0x12457ce6u); f_1245b2c0();
  /* 12457ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457ce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12457cec mov esp, ebp */
  ESP = (EBP);
  /* 12457cee pop ebp */
  EBP = (pop32());
  /* 12457cef ret  */
  ESPCHK(0x12457cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x12457cf0 (1297 bytes, 431 insns) */
void f_12457cf0(void) {
  FTRACE(0x12457cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12457cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12457cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12457cf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12457cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 12457cf7 push esi */
  push32((uint32_t)(ESI));
  /* 12457cf8 push edi */
  push32((uint32_t)(EDI));
  /* 12457cf9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12457d00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457d04 jne 0x12457d23 */
  if (!C.zf) goto L_12457d23;
  /* 12457d06 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12457d09 push eax */
  push32((uint32_t)(EAX));
  /* 12457d0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457d0d push ecx */
  push32((uint32_t)(ECX));
  /* 12457d0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457d11 push edx */
  push32((uint32_t)(EDX));
  /* 12457d12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457d15 push eax */
  push32((uint32_t)(EAX));
  /* 12457d16 call 0x12457820 */
  push32(0x12457d1bu); f_12457820();
  /* 12457d1b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457d1e jmp 0x124581fa */
  goto L_124581fa;
L_12457d23:;
  /* 12457d23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457d27 je 0x12457d46 */
  if (C.zf) goto L_12457d46;
  /* 12457d29 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457d2d jne 0x12457d46 */
  if (!C.zf) goto L_12457d46;
  /* 12457d2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457d32 push ecx */
  push32((uint32_t)(ECX));
  /* 12457d33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457d36 push edx */
  push32((uint32_t)(EDX));
  /* 12457d37 call 0x124582b0 */
  push32(0x12457d3cu); f_124582b0();
  /* 12457d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457d3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457d41 jmp 0x124581fa */
  goto L_124581fa;
L_12457d46:;
  /* 12457d46 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 12457d4b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12457d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457d50 je 0x12457d82 */
  if (C.zf) goto L_12457d82;
L_12457d52:;
  /* 12457d52 call 0x124589c0 */
  push32(0x12457d57u); f_124589c0();
  /* 12457d57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457d59 jne 0x12457d7c */
  if (!C.zf) goto L_12457d7c;
  /* 12457d5b push 0x1247ec2c */
  push32((uint32_t)(0x1247ec2cu));
  /* 12457d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457d62 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12457d67 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12457d6c push 2 */
  push32((uint32_t)(0x2u));
  /* 12457d6e call 0x124568e0 */
  push32(0x12457d73u); f_124568e0();
  /* 12457d73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457d76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457d79 jne 0x12457d7c */
  if (!C.zf) goto L_12457d7c;
  /* 12457d7b int3  */
  x86_unimpl("int3 @ 0x12457d7b");
L_12457d7c:;
  /* 12457d7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12457d7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12457d80 jne 0x12457d52 */
  if (!C.zf) goto L_12457d52;
L_12457d82:;
  /* 12457d82 mov edx, dword ptr [0x12481a88] */
  EDX = (r32((uint32_t)(0x12481a88)));
  /* 12457d88 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12457d8b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12457d8e cmp eax, dword ptr [0x12481a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12481a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457d94 jne 0x12457d97 */
  if (!C.zf) goto L_12457d97;
  /* 12457d96 int3  */
  x86_unimpl("int3 @ 0x12457d96");
L_12457d97:;
  /* 12457d97 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12457d9a push ecx */
  push32((uint32_t)(ECX));
  /* 12457d9b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457d9e push edx */
  push32((uint32_t)(EDX));
  /* 12457d9f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12457da2 push eax */
  push32((uint32_t)(EAX));
  /* 12457da3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457da6 push ecx */
  push32((uint32_t)(ECX));
  /* 12457da7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457daa push edx */
  push32((uint32_t)(EDX));
  /* 12457dab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457dae push eax */
  push32((uint32_t)(EAX));
  /* 12457daf push 2 */
  push32((uint32_t)(0x2u));
  /* 12457db1 call dword ptr [0x12481c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12481c90))), 0x12457db7u);
  /* 12457db7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457dbc jne 0x12457e1c */
  if (!C.zf) goto L_12457e1c;
  /* 12457dbe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457dc2 je 0x12457def */
  if (C.zf) goto L_12457def;
L_12457dc4:;
  /* 12457dc4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12457dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12457dc8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12457dcb push edx */
  push32((uint32_t)(EDX));
  /* 12457dcc push 0x1247eda8 */
  push32((uint32_t)(0x1247eda8u));
  /* 12457dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457dd9 call 0x124568e0 */
  push32(0x12457ddeu); f_124568e0();
  /* 12457dde add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457de1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457de4 jne 0x12457de7 */
  if (!C.zf) goto L_12457de7;
  /* 12457de6 int3  */
  x86_unimpl("int3 @ 0x12457de6");
L_12457de7:;
  /* 12457de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457deb jne 0x12457dc4 */
  if (!C.zf) goto L_12457dc4;
  /* 12457ded jmp 0x12457e15 */
  goto L_12457e15;
L_12457def:;
  /* 12457def push 0x1247ed84 */
  push32((uint32_t)(0x1247ed84u));
  /* 12457df4 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12457df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457dfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12457dfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12457dff push 0 */
  push32((uint32_t)(0x0u));
  /* 12457e01 call 0x124568e0 */
  push32(0x12457e06u); f_124568e0();
  /* 12457e06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457e09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457e0c jne 0x12457e0f */
  if (!C.zf) goto L_12457e0f;
  /* 12457e0e int3  */
  x86_unimpl("int3 @ 0x12457e0e");
L_12457e0f:;
  /* 12457e0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12457e11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12457e13 jne 0x12457def */
  if (!C.zf) goto L_12457def;
L_12457e15:;
  /* 12457e15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457e17 jmp 0x124581fa */
  goto L_124581fa;
L_12457e1c:;
  /* 12457e1c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457e20 jbe 0x12457e4e */
  if ((C.cf||C.zf)) goto L_12457e4e;
L_12457e22:;
  /* 12457e22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457e25 push edx */
  push32((uint32_t)(EDX));
  /* 12457e26 push 0x1247ed54 */
  push32((uint32_t)(0x1247ed54u));
  /* 12457e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12457e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12457e2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12457e31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457e33 call 0x124568e0 */
  push32(0x12457e38u); f_124568e0();
  /* 12457e38 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457e3b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457e3e jne 0x12457e41 */
  if (!C.zf) goto L_12457e41;
  /* 12457e40 int3  */
  x86_unimpl("int3 @ 0x12457e40");
L_12457e41:;
  /* 12457e41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457e45 jne 0x12457e22 */
  if (!C.zf) goto L_12457e22;
  /* 12457e47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457e49 jmp 0x124581fa */
  goto L_124581fa;
L_12457e4e:;
  /* 12457e4e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457e52 je 0x12457e96 */
  if (C.zf) goto L_12457e96;
  /* 12457e54 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457e57 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12457e5d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457e60 je 0x12457e96 */
  if (C.zf) goto L_12457e96;
  /* 12457e62 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457e65 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12457e6b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457e6e je 0x12457e96 */
  if (C.zf) goto L_12457e96;
L_12457e70:;
  /* 12457e70 push 0x1247eb68 */
  push32((uint32_t)(0x1247eb68u));
  /* 12457e75 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12457e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12457e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12457e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12457e80 push 1 */
  push32((uint32_t)(0x1u));
  /* 12457e82 call 0x124568e0 */
  push32(0x12457e87u); f_124568e0();
  /* 12457e87 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457e8a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457e8d jne 0x12457e90 */
  if (!C.zf) goto L_12457e90;
  /* 12457e8f int3  */
  x86_unimpl("int3 @ 0x12457e8f");
L_12457e90:;
  /* 12457e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457e92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457e94 jne 0x12457e70 */
  if (!C.zf) goto L_12457e70;
L_12457e96:;
  /* 12457e96 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457e99 push ecx */
  push32((uint32_t)(ECX));
  /* 12457e9a call 0x12458e20 */
  push32(0x12457e9fu); f_12458e20();
  /* 12457e9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12457ea4 jne 0x12457ec7 */
  if (!C.zf) goto L_12457ec7;
  /* 12457ea6 push 0x1247ed30 */
  push32((uint32_t)(0x1247ed30u));
  /* 12457eab push 0 */
  push32((uint32_t)(0x0u));
  /* 12457ead push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12457eb2 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12457eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12457eb9 call 0x124568e0 */
  push32(0x12457ebeu); f_124568e0();
  /* 12457ebe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457ec1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457ec4 jne 0x12457ec7 */
  if (!C.zf) goto L_12457ec7;
  /* 12457ec6 int3  */
  x86_unimpl("int3 @ 0x12457ec6");
L_12457ec7:;
  /* 12457ec7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12457ec9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12457ecb jne 0x12457e96 */
  if (!C.zf) goto L_12457e96;
  /* 12457ecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12457ed0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12457ed3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12457ed6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457ed9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457edd jne 0x12457ee6 */
  if (!C.zf) goto L_12457ee6;
  /* 12457edf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12457ee6:;
  /* 12457ee6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457eea je 0x12457f2a */
  if (C.zf) goto L_12457f2a;
L_12457eec:;
  /* 12457eec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457eef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457ef6 jne 0x12457f01 */
  if (!C.zf) goto L_12457f01;
  /* 12457ef8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457efb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457eff je 0x12457f22 */
  if (C.zf) goto L_12457f22;
L_12457f01:;
  /* 12457f01 push 0x1247ece8 */
  push32((uint32_t)(0x1247ece8u));
  /* 12457f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12457f08 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12457f0d push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12457f12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12457f14 call 0x124568e0 */
  push32(0x12457f19u); f_124568e0();
  /* 12457f19 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457f1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457f1f jne 0x12457f22 */
  if (!C.zf) goto L_12457f22;
  /* 12457f21 int3  */
  x86_unimpl("int3 @ 0x12457f21");
L_12457f22:;
  /* 12457f22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12457f24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12457f26 jne 0x12457eec */
  if (!C.zf) goto L_12457eec;
  /* 12457f28 jmp 0x12457f8e */
  goto L_12457f8e;
L_12457f2a:;
  /* 12457f2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457f2d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12457f30 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12457f35 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457f38 jne 0x12457f4f */
  if (!C.zf) goto L_12457f4f;
  /* 12457f3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457f3d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12457f43 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457f46 jne 0x12457f4f */
  if (!C.zf) goto L_12457f4f;
  /* 12457f48 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12457f4f:;
  /* 12457f4f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457f52 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12457f55 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12457f5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12457f5d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12457f63 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457f65 je 0x12457f88 */
  if (C.zf) goto L_12457f88;
  /* 12457f67 push 0x1247ecac */
  push32((uint32_t)(0x1247ecacu));
  /* 12457f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12457f6e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12457f73 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12457f78 push 2 */
  push32((uint32_t)(0x2u));
  /* 12457f7a call 0x124568e0 */
  push32(0x12457f7fu); f_124568e0();
  /* 12457f7f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457f82 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457f85 jne 0x12457f88 */
  if (!C.zf) goto L_12457f88;
  /* 12457f87 int3  */
  x86_unimpl("int3 @ 0x12457f87");
L_12457f88:;
  /* 12457f88 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12457f8a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12457f8c jne 0x12457f4f */
  if (!C.zf) goto L_12457f4f;
L_12457f8e:;
  /* 12457f8e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457f92 je 0x12457fb9 */
  if (C.zf) goto L_12457fb9;
  /* 12457f94 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457f97 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457f9a push eax */
  push32((uint32_t)(EAX));
  /* 12457f9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457f9e push ecx */
  push32((uint32_t)(ECX));
  /* 12457f9f call 0x1245b7a0 */
  push32(0x12457fa4u); f_1245b7a0();
  /* 12457fa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457fa7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12457faa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457fae jne 0x12457fb7 */
  if (!C.zf) goto L_12457fb7;
  /* 12457fb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457fb2 jmp 0x124581fa */
  goto L_124581fa;
L_12457fb7:;
  /* 12457fb7 jmp 0x12457fdc */
  goto L_12457fdc;
L_12457fb9:;
  /* 12457fb9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12457fbc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457fbf push edx */
  push32((uint32_t)(EDX));
  /* 12457fc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12457fc3 push eax */
  push32((uint32_t)(EAX));
  /* 12457fc4 call 0x1245b6f0 */
  push32(0x12457fc9u); f_1245b6f0();
  /* 12457fc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12457fcc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12457fcf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457fd3 jne 0x12457fdc */
  if (!C.zf) goto L_12457fdc;
  /* 12457fd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12457fd7 jmp 0x124581fa */
  goto L_124581fa;
L_12457fdc:;
  /* 12457fdc mov ecx, dword ptr [0x12481a88] */
  ECX = (r32((uint32_t)(0x12481a88)));
  /* 12457fe2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12457fe5 mov dword ptr [0x12481a88], ecx */
  w32((uint32_t)(0x12481a88), (ECX));
  /* 12457feb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12457fef jne 0x12458047 */
  if (!C.zf) goto L_12458047;
  /* 12457ff1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12457ff4 mov eax, dword ptr [0x124838a4] */
  EAX = (r32((uint32_t)(0x124838a4)));
  /* 12457ff9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12457ffc mov dword ptr [0x124838a4], eax */
  w32((uint32_t)(0x124838a4), (EAX));
  /* 12458001 mov ecx, dword ptr [0x124838a4] */
  ECX = (r32((uint32_t)(0x124838a4)));
  /* 12458007 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245800a mov dword ptr [0x124838a4], ecx */
  w32((uint32_t)(0x124838a4), (ECX));
  /* 12458010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458013 mov eax, dword ptr [0x124838ac] */
  EAX = (r32((uint32_t)(0x124838ac)));
  /* 12458018 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245801b mov dword ptr [0x124838ac], eax */
  w32((uint32_t)(0x124838ac), (EAX));
  /* 12458020 mov ecx, dword ptr [0x124838ac] */
  ECX = (r32((uint32_t)(0x124838ac)));
  /* 12458026 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458029 mov dword ptr [0x124838ac], ecx */
  w32((uint32_t)(0x124838ac), (ECX));
  /* 1245802f mov edx, dword ptr [0x124838ac] */
  EDX = (r32((uint32_t)(0x124838ac)));
  /* 12458035 cmp edx, dword ptr [0x124838b0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124838b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245803b jbe 0x12458047 */
  if ((C.cf||C.zf)) goto L_12458047;
  /* 1245803d mov eax, dword ptr [0x124838ac] */
  EAX = (r32((uint32_t)(0x124838ac)));
  /* 12458042 mov dword ptr [0x124838b0], eax */
  w32((uint32_t)(0x124838b0), (EAX));
L_12458047:;
  /* 12458047 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245804a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245804d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12458050 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458053 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12458056 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458059 jbe 0x1245807f */
  if ((C.cf||C.zf)) goto L_1245807f;
  /* 1245805b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245805e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12458061 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458064 push edx */
  push32((uint32_t)(EDX));
  /* 12458065 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458067 mov al, byte ptr [0x12481a92] */
  AL = (r8((uint32_t)(0x12481a92)));
  /* 1245806c push eax */
  push32((uint32_t)(EAX));
  /* 1245806d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458070 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458073 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458076 push edx */
  push32((uint32_t)(EDX));
  /* 12458077 call 0x1245b590 */
  push32(0x1245807cu); f_1245b590();
  /* 1245807c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245807f:;
  /* 1245807f push 4 */
  push32((uint32_t)(0x4u));
  /* 12458081 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458083 mov al, byte ptr [0x12481a90] */
  AL = (r8((uint32_t)(0x12481a90)));
  /* 12458088 push eax */
  push32((uint32_t)(EAX));
  /* 12458089 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245808c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245808f push ecx */
  push32((uint32_t)(ECX));
  /* 12458090 call 0x1245b590 */
  push32(0x12458095u); f_1245b590();
  /* 12458095 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458098 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245809c jne 0x124580b9 */
  if (!C.zf) goto L_124580b9;
  /* 1245809e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124580a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124580a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124580a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124580aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124580ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 124580b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124580b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124580b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_124580b9:;
  /* 124580b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124580bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124580bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_124580c2:;
  /* 124580c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124580c6 jne 0x124580f7 */
  if (!C.zf) goto L_124580f7;
  /* 124580c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124580cc jne 0x124580d6 */
  if (!C.zf) goto L_124580d6;
  /* 124580ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124580d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124580d4 je 0x124580f7 */
  if (C.zf) goto L_124580f7;
L_124580d6:;
  /* 124580d6 push 0x1247ec78 */
  push32((uint32_t)(0x1247ec78u));
  /* 124580db push 0 */
  push32((uint32_t)(0x0u));
  /* 124580dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 124580e2 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 124580e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124580e9 call 0x124568e0 */
  push32(0x124580eeu); f_124568e0();
  /* 124580ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124580f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124580f4 jne 0x124580f7 */
  if (!C.zf) goto L_124580f7;
  /* 124580f6 int3  */
  x86_unimpl("int3 @ 0x124580f6");
L_124580f7:;
  /* 124580f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124580f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124580fb jne 0x124580c2 */
  if (!C.zf) goto L_124580c2;
  /* 124580fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458100 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458103 je 0x1245810b */
  if (C.zf) goto L_1245810b;
  /* 12458105 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458109 je 0x12458113 */
  if (C.zf) goto L_12458113;
L_1245810b:;
  /* 1245810b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245810e jmp 0x124581fa */
  goto L_124581fa;
L_12458113:;
  /* 12458113 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458116 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458119 je 0x1245812b */
  if (C.zf) goto L_1245812b;
  /* 1245811b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245811e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12458120 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458123 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12458126 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12458129 jmp 0x12458167 */
  goto L_12458167;
L_1245812b:;
  /* 1245812b mov eax, dword ptr [0x124838a0] */
  EAX = (r32((uint32_t)(0x124838a0)));
  /* 12458130 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458133 je 0x12458156 */
  if (C.zf) goto L_12458156;
  /* 12458135 push 0x1247ec5c */
  push32((uint32_t)(0x1247ec5cu));
  /* 1245813a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245813c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12458141 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12458146 push 2 */
  push32((uint32_t)(0x2u));
  /* 12458148 call 0x124568e0 */
  push32(0x1245814du); f_124568e0();
  /* 1245814d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458150 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458153 jne 0x12458156 */
  if (!C.zf) goto L_12458156;
  /* 12458155 int3  */
  x86_unimpl("int3 @ 0x12458155");
L_12458156:;
  /* 12458156 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12458158 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245815a jne 0x1245812b */
  if (!C.zf) goto L_1245812b;
  /* 1245815c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245815f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12458162 mov dword ptr [0x124838a0], eax */
  w32((uint32_t)(0x124838a0), (EAX));
L_12458167:;
  /* 12458167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245816a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245816e je 0x1245817f */
  if (C.zf) goto L_1245817f;
  /* 12458170 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458173 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12458176 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458179 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245817b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1245817d jmp 0x124581ba */
  goto L_124581ba;
L_1245817f:;
  /* 1245817f mov eax, dword ptr [0x124838a8] */
  EAX = (r32((uint32_t)(0x124838a8)));
  /* 12458184 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458187 je 0x124581aa */
  if (C.zf) goto L_124581aa;
  /* 12458189 push 0x1247ec40 */
  push32((uint32_t)(0x1247ec40u));
  /* 1245818e push 0 */
  push32((uint32_t)(0x0u));
  /* 12458190 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12458195 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 1245819a push 2 */
  push32((uint32_t)(0x2u));
  /* 1245819c call 0x124568e0 */
  push32(0x124581a1u); f_124568e0();
  /* 124581a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124581a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124581a7 jne 0x124581aa */
  if (!C.zf) goto L_124581aa;
  /* 124581a9 int3  */
  x86_unimpl("int3 @ 0x124581a9");
L_124581aa:;
  /* 124581aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124581ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124581ae jne 0x1245817f */
  if (!C.zf) goto L_1245817f;
  /* 124581b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124581b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124581b5 mov dword ptr [0x124838a8], eax */
  w32((uint32_t)(0x124838a8), (EAX));
L_124581ba:;
  /* 124581ba cmp dword ptr [0x124838a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124838a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124581c1 je 0x124581d1 */
  if (C.zf) goto L_124581d1;
  /* 124581c3 mov ecx, dword ptr [0x124838a8] */
  ECX = (r32((uint32_t)(0x124838a8)));
  /* 124581c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124581cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 124581cf jmp 0x124581d9 */
  goto L_124581d9;
L_124581d1:;
  /* 124581d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124581d4 mov dword ptr [0x124838a0], eax */
  w32((uint32_t)(0x124838a0), (EAX));
L_124581d9:;
  /* 124581d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124581dc mov edx, dword ptr [0x124838a8] */
  EDX = (r32((uint32_t)(0x124838a8)));
  /* 124581e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 124581e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124581e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 124581ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124581f1 mov dword ptr [0x124838a8], ecx */
  w32((uint32_t)(0x124838a8), (ECX));
  /* 124581f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_124581fa:;
  /* 124581fa pop edi */
  EDI = (pop32());
  /* 124581fb pop esi */
  ESI = (pop32());
  /* 124581fc pop ebx */
  EBX = (pop32());
  /* 124581fd mov esp, ebp */
  ESP = (EBP);
  /* 124581ff pop ebp */
  EBP = (pop32());
  /* 12458200 ret  */
  ESPCHK(0x12457cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x12458210 (27 bytes, 13 insns) */
void f_12458210(void) {
  FTRACE(0x12458210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458210 push ebp */
  push32((uint32_t)(EBP));
  /* 12458211 mov ebp, esp */
  EBP = (ESP);
  /* 12458213 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458215 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458217 push 1 */
  push32((uint32_t)(0x1u));
  /* 12458219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245821c push eax */
  push32((uint32_t)(EAX));
  /* 1245821d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458220 push ecx */
  push32((uint32_t)(ECX));
  /* 12458221 call 0x12458230 */
  push32(0x12458226u); f_12458230();
  /* 12458226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458229 pop ebp */
  EBP = (pop32());
  /* 1245822a ret  */
  ESPCHK(0x12458210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008230 @ 0x12458230 (64 bytes, 27 insns) */
void f_12458230(void) {
  FTRACE(0x12458230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458230 push ebp */
  push32((uint32_t)(EBP));
  /* 12458231 mov ebp, esp */
  EBP = (ESP);
  /* 12458233 push ecx */
  push32((uint32_t)(ECX));
  /* 12458234 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458236 call 0x1245b220 */
  push32(0x1245823bu); f_1245b220();
  /* 1245823b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245823e push 0 */
  push32((uint32_t)(0x0u));
  /* 12458240 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12458243 push eax */
  push32((uint32_t)(EAX));
  /* 12458244 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12458247 push ecx */
  push32((uint32_t)(ECX));
  /* 12458248 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245824b push edx */
  push32((uint32_t)(EDX));
  /* 1245824c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245824f push eax */
  push32((uint32_t)(EAX));
  /* 12458250 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458253 push ecx */
  push32((uint32_t)(ECX));
  /* 12458254 call 0x12457cf0 */
  push32(0x12458259u); f_12457cf0();
  /* 12458259 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245825c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245825f push 9 */
  push32((uint32_t)(0x9u));
  /* 12458261 call 0x1245b2c0 */
  push32(0x12458266u); f_1245b2c0();
  /* 12458266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245826c mov esp, ebp */
  ESP = (EBP);
  /* 1245826e pop ebp */
  EBP = (pop32());
  /* 1245826f ret  */
  ESPCHK(0x12458230u, _esp0);
  ESP += 4; return;
}

/* FUN_10008270 @ 0x12458270 (19 bytes, 9 insns) */
void f_12458270(void) {
  FTRACE(0x12458270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458270 push ebp */
  push32((uint32_t)(EBP));
  /* 12458271 mov ebp, esp */
  EBP = (ESP);
  /* 12458273 push 1 */
  push32((uint32_t)(0x1u));
  /* 12458275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458278 push eax */
  push32((uint32_t)(EAX));
  /* 12458279 call 0x124582b0 */
  push32(0x1245827eu); f_124582b0();
  /* 1245827e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458281 pop ebp */
  EBP = (pop32());
  /* 12458282 ret  */
  ESPCHK(0x12458270u, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x12458290 (19 bytes, 9 insns) */
void f_12458290(void) {
  FTRACE(0x12458290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458290 push ebp */
  push32((uint32_t)(EBP));
  /* 12458291 mov ebp, esp */
  EBP = (ESP);
  /* 12458293 push 1 */
  push32((uint32_t)(0x1u));
  /* 12458295 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458298 push eax */
  push32((uint32_t)(EAX));
  /* 12458299 call 0x124582e0 */
  push32(0x1245829eu); f_124582e0();
  /* 1245829e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124582a1 pop ebp */
  EBP = (pop32());
  /* 124582a2 ret  */
  ESPCHK(0x12458290u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x124582b0 (41 bytes, 16 insns) */
void f_124582b0(void) {
  FTRACE(0x124582b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124582b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124582b1 mov ebp, esp */
  EBP = (ESP);
  /* 124582b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 124582b5 call 0x1245b220 */
  push32(0x124582bau); f_1245b220();
  /* 124582ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124582bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124582c0 push eax */
  push32((uint32_t)(EAX));
  /* 124582c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124582c4 push ecx */
  push32((uint32_t)(ECX));
  /* 124582c5 call 0x124582e0 */
  push32(0x124582cau); f_124582e0();
  /* 124582ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124582cd push 9 */
  push32((uint32_t)(0x9u));
  /* 124582cf call 0x1245b2c0 */
  push32(0x124582d4u); f_1245b2c0();
  /* 124582d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124582d7 pop ebp */
  EBP = (pop32());
  /* 124582d8 ret  */
  ESPCHK(0x124582b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082e0 @ 0x124582e0 (1004 bytes, 342 insns) */
void f_124582e0(void) {
  FTRACE(0x124582e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124582e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124582e1 mov ebp, esp */
  EBP = (ESP);
  /* 124582e3 push ecx */
  push32((uint32_t)(ECX));
  /* 124582e4 push ebx */
  push32((uint32_t)(EBX));
  /* 124582e5 push esi */
  push32((uint32_t)(ESI));
  /* 124582e6 push edi */
  push32((uint32_t)(EDI));
  /* 124582e7 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 124582ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 124582ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124582f1 je 0x12458323 */
  if (C.zf) goto L_12458323;
L_124582f3:;
  /* 124582f3 call 0x124589c0 */
  push32(0x124582f8u); f_124589c0();
  /* 124582f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124582fa jne 0x1245831d */
  if (!C.zf) goto L_1245831d;
  /* 124582fc push 0x1247ec2c */
  push32((uint32_t)(0x1247ec2cu));
  /* 12458301 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458303 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12458308 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 1245830d push 2 */
  push32((uint32_t)(0x2u));
  /* 1245830f call 0x124568e0 */
  push32(0x12458314u); f_124568e0();
  /* 12458314 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458317 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245831a jne 0x1245831d */
  if (!C.zf) goto L_1245831d;
  /* 1245831c int3  */
  x86_unimpl("int3 @ 0x1245831c");
L_1245831d:;
  /* 1245831d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245831f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458321 jne 0x124582f3 */
  if (!C.zf) goto L_124582f3;
L_12458323:;
  /* 12458323 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458327 jne 0x1245832e */
  if (!C.zf) goto L_1245832e;
  /* 12458329 jmp 0x124586c5 */
  goto L_124586c5;
L_1245832e:;
  /* 1245832e push 0 */
  push32((uint32_t)(0x0u));
  /* 12458330 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458332 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458334 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12458337 push edx */
  push32((uint32_t)(EDX));
  /* 12458338 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245833a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245833d push eax */
  push32((uint32_t)(EAX));
  /* 1245833e push 3 */
  push32((uint32_t)(0x3u));
  /* 12458340 call dword ptr [0x12481c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12481c90))), 0x12458346u);
  /* 12458346 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245834b jne 0x12458378 */
  if (!C.zf) goto L_12458378;
L_1245834d:;
  /* 1245834d push 0x1247eef0 */
  push32((uint32_t)(0x1247eef0u));
  /* 12458352 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12458357 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245835b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245835d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245835f call 0x124568e0 */
  push32(0x12458364u); f_124568e0();
  /* 12458364 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458367 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245836a jne 0x1245836d */
  if (!C.zf) goto L_1245836d;
  /* 1245836c int3  */
  x86_unimpl("int3 @ 0x1245836c");
L_1245836d:;
  /* 1245836d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245836f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458371 jne 0x1245834d */
  if (!C.zf) goto L_1245834d;
  /* 12458373 jmp 0x124586c5 */
  goto L_124586c5;
L_12458378:;
  /* 12458378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245837b push edx */
  push32((uint32_t)(EDX));
  /* 1245837c call 0x12458e20 */
  push32(0x12458381u); f_12458e20();
  /* 12458381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458384 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458386 jne 0x124583a9 */
  if (!C.zf) goto L_124583a9;
  /* 12458388 push 0x1247ed30 */
  push32((uint32_t)(0x1247ed30u));
  /* 1245838d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245838f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12458394 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12458399 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245839b call 0x124568e0 */
  push32(0x124583a0u); f_124568e0();
  /* 124583a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124583a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124583a6 jne 0x124583a9 */
  if (!C.zf) goto L_124583a9;
  /* 124583a8 int3  */
  x86_unimpl("int3 @ 0x124583a8");
L_124583a9:;
  /* 124583a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124583ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124583ad jne 0x12458378 */
  if (!C.zf) goto L_12458378;
  /* 124583af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124583b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124583b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124583b8:;
  /* 124583b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124583bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124583be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124583c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124583c6 je 0x1245840b */
  if (C.zf) goto L_1245840b;
  /* 124583c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124583cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124583cf je 0x1245840b */
  if (C.zf) goto L_1245840b;
  /* 124583d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124583d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124583d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124583dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124583df je 0x1245840b */
  if (C.zf) goto L_1245840b;
  /* 124583e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124583e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124583e8 je 0x1245840b */
  if (C.zf) goto L_1245840b;
  /* 124583ea push 0x1247eec8 */
  push32((uint32_t)(0x1247eec8u));
  /* 124583ef push 0 */
  push32((uint32_t)(0x0u));
  /* 124583f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 124583f6 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 124583fb push 2 */
  push32((uint32_t)(0x2u));
  /* 124583fd call 0x124568e0 */
  push32(0x12458402u); f_124568e0();
  /* 12458402 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458405 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458408 jne 0x1245840b */
  if (!C.zf) goto L_1245840b;
  /* 1245840a int3  */
  x86_unimpl("int3 @ 0x1245840a");
L_1245840b:;
  /* 1245840b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245840d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245840f jne 0x124583b8 */
  if (!C.zf) goto L_124583b8;
  /* 12458411 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 12458416 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12458419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245841b jne 0x124584e6 */
  if (!C.zf) goto L_124584e6;
  /* 12458421 push 4 */
  push32((uint32_t)(0x4u));
  /* 12458423 mov cl, byte ptr [0x12481a90] */
  CL = (r8((uint32_t)(0x12481a90)));
  /* 12458429 push ecx */
  push32((uint32_t)(ECX));
  /* 1245842a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245842d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458430 push edx */
  push32((uint32_t)(EDX));
  /* 12458431 call 0x12458930 */
  push32(0x12458436u); f_12458930();
  /* 12458436 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245843b jne 0x12458480 */
  if (!C.zf) goto L_12458480;
L_1245843d:;
  /* 1245843d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458440 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458443 push eax */
  push32((uint32_t)(EAX));
  /* 12458444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458447 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1245844a push edx */
  push32((uint32_t)(EDX));
  /* 1245844b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245844e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12458451 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12458457 mov edx, dword ptr [ecx*4 + 0x12481a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481a94)));
  /* 1245845e push edx */
  push32((uint32_t)(EDX));
  /* 1245845f push 0x1247ee9c */
  push32((uint32_t)(0x1247ee9cu));
  /* 12458464 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458466 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458468 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245846a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245846c call 0x124568e0 */
  push32(0x12458471u); f_124568e0();
  /* 12458471 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458474 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458477 jne 0x1245847a */
  if (!C.zf) goto L_1245847a;
  /* 12458479 int3  */
  x86_unimpl("int3 @ 0x12458479");
L_1245847a:;
  /* 1245847a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245847c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245847e jne 0x1245843d */
  if (!C.zf) goto L_1245843d;
L_12458480:;
  /* 12458480 push 4 */
  push32((uint32_t)(0x4u));
  /* 12458482 mov cl, byte ptr [0x12481a90] */
  CL = (r8((uint32_t)(0x12481a90)));
  /* 12458488 push ecx */
  push32((uint32_t)(ECX));
  /* 12458489 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245848c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245848f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458492 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12458496 push edx */
  push32((uint32_t)(EDX));
  /* 12458497 call 0x12458930 */
  push32(0x1245849cu); f_12458930();
  /* 1245849c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245849f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124584a1 jne 0x124584e6 */
  if (!C.zf) goto L_124584e6;
L_124584a3:;
  /* 124584a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124584a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124584a9 push eax */
  push32((uint32_t)(EAX));
  /* 124584aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124584ad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124584b0 push edx */
  push32((uint32_t)(EDX));
  /* 124584b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124584b4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124584b7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124584bd mov edx, dword ptr [ecx*4 + 0x12481a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481a94)));
  /* 124584c4 push edx */
  push32((uint32_t)(EDX));
  /* 124584c5 push 0x1247ee70 */
  push32((uint32_t)(0x1247ee70u));
  /* 124584ca push 0 */
  push32((uint32_t)(0x0u));
  /* 124584cc push 0 */
  push32((uint32_t)(0x0u));
  /* 124584ce push 0 */
  push32((uint32_t)(0x0u));
  /* 124584d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124584d2 call 0x124568e0 */
  push32(0x124584d7u); f_124568e0();
  /* 124584d7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124584da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124584dd jne 0x124584e0 */
  if (!C.zf) goto L_124584e0;
  /* 124584df int3  */
  x86_unimpl("int3 @ 0x124584df");
L_124584e0:;
  /* 124584e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124584e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124584e4 jne 0x124584a3 */
  if (!C.zf) goto L_124584a3;
L_124584e6:;
  /* 124584e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124584e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124584ed jne 0x1245855b */
  if (!C.zf) goto L_1245855b;
L_124584ef:;
  /* 124584ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124584f2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124584f9 jne 0x12458504 */
  if (!C.zf) goto L_12458504;
  /* 124584fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124584fe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458502 je 0x12458525 */
  if (C.zf) goto L_12458525;
L_12458504:;
  /* 12458504 push 0x1247ee30 */
  push32((uint32_t)(0x1247ee30u));
  /* 12458509 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245850b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12458510 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12458515 push 2 */
  push32((uint32_t)(0x2u));
  /* 12458517 call 0x124568e0 */
  push32(0x1245851cu); f_124568e0();
  /* 1245851c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245851f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458522 jne 0x12458525 */
  if (!C.zf) goto L_12458525;
  /* 12458524 int3  */
  x86_unimpl("int3 @ 0x12458524");
L_12458525:;
  /* 12458525 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12458527 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458529 jne 0x124584ef */
  if (!C.zf) goto L_124584ef;
  /* 1245852b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245852e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12458531 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458534 push eax */
  push32((uint32_t)(EAX));
  /* 12458535 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12458537 mov cl, byte ptr [0x12481a91] */
  CL = (r8((uint32_t)(0x12481a91)));
  /* 1245853d push ecx */
  push32((uint32_t)(ECX));
  /* 1245853e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458541 push edx */
  push32((uint32_t)(EDX));
  /* 12458542 call 0x1245b590 */
  push32(0x12458547u); f_1245b590();
  /* 12458547 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245854a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245854d push eax */
  push32((uint32_t)(EAX));
  /* 1245854e call 0x1245b990 */
  push32(0x12458553u); f_1245b990();
  /* 12458553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458556 jmp 0x124586c5 */
  goto L_124586c5;
L_1245855b:;
  /* 1245855b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245855e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458562 jne 0x12458571 */
  if (!C.zf) goto L_12458571;
  /* 12458564 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458568 jne 0x12458571 */
  if (!C.zf) goto L_12458571;
  /* 1245856a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12458571:;
  /* 12458571 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458574 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12458577 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245857a je 0x1245859d */
  if (C.zf) goto L_1245859d;
  /* 1245857c push 0x1247ee10 */
  push32((uint32_t)(0x1247ee10u));
  /* 12458581 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458583 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12458588 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 1245858d push 2 */
  push32((uint32_t)(0x2u));
  /* 1245858f call 0x124568e0 */
  push32(0x12458594u); f_124568e0();
  /* 12458594 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458597 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245859a jne 0x1245859d */
  if (!C.zf) goto L_1245859d;
  /* 1245859c int3  */
  x86_unimpl("int3 @ 0x1245859c");
L_1245859d:;
  /* 1245859d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245859f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124585a1 jne 0x12458571 */
  if (!C.zf) goto L_12458571;
  /* 124585a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124585a6 mov eax, dword ptr [0x124838ac] */
  EAX = (r32((uint32_t)(0x124838ac)));
  /* 124585ab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124585ae mov dword ptr [0x124838ac], eax */
  w32((uint32_t)(0x124838ac), (EAX));
  /* 124585b3 mov ecx, dword ptr [0x12481a84] */
  ECX = (r32((uint32_t)(0x12481a84)));
  /* 124585b9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 124585bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124585be jne 0x1245869c */
  if (!C.zf) goto L_1245869c;
  /* 124585c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124585c7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124585ca je 0x124585dc */
  if (C.zf) goto L_124585dc;
  /* 124585cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124585cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124585d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124585d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124585d7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 124585da jmp 0x1245861a */
  goto L_1245861a;
L_124585dc:;
  /* 124585dc mov ecx, dword ptr [0x124838a0] */
  ECX = (r32((uint32_t)(0x124838a0)));
  /* 124585e2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124585e5 je 0x12458608 */
  if (C.zf) goto L_12458608;
  /* 124585e7 push 0x1247edf8 */
  push32((uint32_t)(0x1247edf8u));
  /* 124585ec push 0 */
  push32((uint32_t)(0x0u));
  /* 124585ee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 124585f3 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 124585f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124585fa call 0x124568e0 */
  push32(0x124585ffu); f_124568e0();
  /* 124585ff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458602 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458605 jne 0x12458608 */
  if (!C.zf) goto L_12458608;
  /* 12458607 int3  */
  x86_unimpl("int3 @ 0x12458607");
L_12458608:;
  /* 12458608 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245860a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245860c jne 0x124585dc */
  if (!C.zf) goto L_124585dc;
  /* 1245860e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458611 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12458614 mov dword ptr [0x124838a0], ecx */
  w32((uint32_t)(0x124838a0), (ECX));
L_1245861a:;
  /* 1245861a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245861d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458621 je 0x12458632 */
  if (C.zf) goto L_12458632;
  /* 12458623 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458626 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12458629 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245862c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245862e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12458630 jmp 0x1245866f */
  goto L_1245866f;
L_12458632:;
  /* 12458632 mov ecx, dword ptr [0x124838a8] */
  ECX = (r32((uint32_t)(0x124838a8)));
  /* 12458638 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245863b je 0x1245865e */
  if (C.zf) goto L_1245865e;
  /* 1245863d push 0x1247ede0 */
  push32((uint32_t)(0x1247ede0u));
  /* 12458642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458644 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12458649 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 1245864e push 2 */
  push32((uint32_t)(0x2u));
  /* 12458650 call 0x124568e0 */
  push32(0x12458655u); f_124568e0();
  /* 12458655 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458658 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245865b jne 0x1245865e */
  if (!C.zf) goto L_1245865e;
  /* 1245865d int3  */
  x86_unimpl("int3 @ 0x1245865d");
L_1245865e:;
  /* 1245865e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12458660 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12458662 jne 0x12458632 */
  if (!C.zf) goto L_12458632;
  /* 12458664 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458667 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12458669 mov dword ptr [0x124838a8], ecx */
  w32((uint32_t)(0x124838a8), (ECX));
L_1245866f:;
  /* 1245866f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458672 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12458675 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458678 push eax */
  push32((uint32_t)(EAX));
  /* 12458679 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245867b mov cl, byte ptr [0x12481a91] */
  CL = (r8((uint32_t)(0x12481a91)));
  /* 12458681 push ecx */
  push32((uint32_t)(ECX));
  /* 12458682 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458685 push edx */
  push32((uint32_t)(EDX));
  /* 12458686 call 0x1245b590 */
  push32(0x1245868bu); f_1245b590();
  /* 1245868b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245868e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458691 push eax */
  push32((uint32_t)(EAX));
  /* 12458692 call 0x1245b990 */
  push32(0x12458697u); f_1245b990();
  /* 12458697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245869a jmp 0x124586c5 */
  goto L_124586c5;
L_1245869c:;
  /* 1245869c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245869f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 124586a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124586a9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124586ac push eax */
  push32((uint32_t)(EAX));
  /* 124586ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124586af mov cl, byte ptr [0x12481a91] */
  CL = (r8((uint32_t)(0x12481a91)));
  /* 124586b5 push ecx */
  push32((uint32_t)(ECX));
  /* 124586b6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124586b9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124586bc push edx */
  push32((uint32_t)(EDX));
  /* 124586bd call 0x1245b590 */
  push32(0x124586c2u); f_1245b590();
  /* 124586c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124586c5:;
  /* 124586c5 pop edi */
  EDI = (pop32());
  /* 124586c6 pop esi */
  ESI = (pop32());
  /* 124586c7 pop ebx */
  EBX = (pop32());
  /* 124586c8 mov esp, ebp */
  ESP = (EBP);
  /* 124586ca pop ebp */
  EBP = (pop32());
  /* 124586cb ret  */
  ESPCHK(0x124582e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086d0 @ 0x124586d0 (19 bytes, 9 insns) */
void f_124586d0(void) {
  FTRACE(0x124586d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124586d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124586d1 mov ebp, esp */
  EBP = (ESP);
  /* 124586d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124586d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124586d8 push eax */
  push32((uint32_t)(EAX));
  /* 124586d9 call 0x124586f0 */
  push32(0x124586deu); f_124586f0();
  /* 124586de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124586e1 pop ebp */
  EBP = (pop32());
  /* 124586e2 ret  */
  ESPCHK(0x124586d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100086f0 @ 0x124586f0 (342 bytes, 119 insns) */
void f_124586f0(void) {
  FTRACE(0x124586f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124586f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124586f1 mov ebp, esp */
  EBP = (ESP);
  /* 124586f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124586f6 push ebx */
  push32((uint32_t)(EBX));
  /* 124586f7 push esi */
  push32((uint32_t)(ESI));
  /* 124586f8 push edi */
  push32((uint32_t)(EDI));
  /* 124586f9 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 124586fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12458701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458703 je 0x12458735 */
  if (C.zf) goto L_12458735;
L_12458705:;
  /* 12458705 call 0x124589c0 */
  push32(0x1245870au); f_124589c0();
  /* 1245870a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245870c jne 0x1245872f */
  if (!C.zf) goto L_1245872f;
  /* 1245870e push 0x1247ec2c */
  push32((uint32_t)(0x1247ec2cu));
  /* 12458713 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458715 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1245871a push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 1245871f push 2 */
  push32((uint32_t)(0x2u));
  /* 12458721 call 0x124568e0 */
  push32(0x12458726u); f_124568e0();
  /* 12458726 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458729 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245872c jne 0x1245872f */
  if (!C.zf) goto L_1245872f;
  /* 1245872e int3  */
  x86_unimpl("int3 @ 0x1245872e");
L_1245872f:;
  /* 1245872f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12458731 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458733 jne 0x12458705 */
  if (!C.zf) goto L_12458705;
L_12458735:;
  /* 12458735 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458737 call 0x1245b220 */
  push32(0x1245873cu); f_1245b220();
  /* 1245873c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245873f:;
  /* 1245873f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458742 push edx */
  push32((uint32_t)(EDX));
  /* 12458743 call 0x12458e20 */
  push32(0x12458748u); f_12458e20();
  /* 12458748 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245874b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245874d jne 0x12458770 */
  if (!C.zf) goto L_12458770;
  /* 1245874f push 0x1247ed30 */
  push32((uint32_t)(0x1247ed30u));
  /* 12458754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458756 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1245875b push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12458760 push 2 */
  push32((uint32_t)(0x2u));
  /* 12458762 call 0x124568e0 */
  push32(0x12458767u); f_124568e0();
  /* 12458767 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245876a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245876d jne 0x12458770 */
  if (!C.zf) goto L_12458770;
  /* 1245876f int3  */
  x86_unimpl("int3 @ 0x1245876f");
L_12458770:;
  /* 12458770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458772 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458774 jne 0x1245873f */
  if (!C.zf) goto L_1245873f;
  /* 12458776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458779 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245877c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1245877f:;
  /* 1245877f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458782 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12458785 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245878a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245878d je 0x124587d2 */
  if (C.zf) goto L_124587d2;
  /* 1245878f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458792 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458796 je 0x124587d2 */
  if (C.zf) goto L_124587d2;
  /* 12458798 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245879b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1245879e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124587a3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124587a6 je 0x124587d2 */
  if (C.zf) goto L_124587d2;
  /* 124587a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124587ab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124587af je 0x124587d2 */
  if (C.zf) goto L_124587d2;
  /* 124587b1 push 0x1247eec8 */
  push32((uint32_t)(0x1247eec8u));
  /* 124587b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124587b8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 124587bd push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 124587c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124587c4 call 0x124568e0 */
  push32(0x124587c9u); f_124568e0();
  /* 124587c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124587cc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124587cf jne 0x124587d2 */
  if (!C.zf) goto L_124587d2;
  /* 124587d1 int3  */
  x86_unimpl("int3 @ 0x124587d1");
L_124587d2:;
  /* 124587d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124587d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124587d6 jne 0x1245877f */
  if (!C.zf) goto L_1245877f;
  /* 124587d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124587db cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124587df jne 0x124587ee */
  if (!C.zf) goto L_124587ee;
  /* 124587e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124587e5 jne 0x124587ee */
  if (!C.zf) goto L_124587ee;
  /* 124587e7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_124587ee:;
  /* 124587ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124587f1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124587f5 je 0x12458829 */
  if (C.zf) goto L_12458829;
L_124587f7:;
  /* 124587f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124587fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124587fd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458800 je 0x12458823 */
  if (C.zf) goto L_12458823;
  /* 12458802 push 0x1247ee10 */
  push32((uint32_t)(0x1247ee10u));
  /* 12458807 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458809 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1245880e push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 12458813 push 2 */
  push32((uint32_t)(0x2u));
  /* 12458815 call 0x124568e0 */
  push32(0x1245881au); f_124568e0();
  /* 1245881a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245881d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458820 jne 0x12458823 */
  if (!C.zf) goto L_12458823;
  /* 12458822 int3  */
  x86_unimpl("int3 @ 0x12458822");
L_12458823:;
  /* 12458823 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12458825 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458827 jne 0x124587f7 */
  if (!C.zf) goto L_124587f7;
L_12458829:;
  /* 12458829 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245882c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245882f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12458832 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458834 call 0x1245b2c0 */
  push32(0x12458839u); f_1245b2c0();
  /* 12458839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245883c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245883f pop edi */
  EDI = (pop32());
  /* 12458840 pop esi */
  ESI = (pop32());
  /* 12458841 pop ebx */
  EBX = (pop32());
  /* 12458842 mov esp, ebp */
  ESP = (EBP);
  /* 12458844 pop ebp */
  EBP = (pop32());
  /* 12458845 ret  */
  ESPCHK(0x124586f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008850 @ 0x12458850 (28 bytes, 11 insns) */
void f_12458850(void) {
  FTRACE(0x12458850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458850 push ebp */
  push32((uint32_t)(EBP));
  /* 12458851 mov ebp, esp */
  EBP = (ESP);
  /* 12458853 push ecx */
  push32((uint32_t)(ECX));
  /* 12458854 mov eax, dword ptr [0x12481a8c] */
  EAX = (r32((uint32_t)(0x12481a8c)));
  /* 12458859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245885c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245885f mov dword ptr [0x12481a8c], ecx */
  w32((uint32_t)(0x12481a8c), (ECX));
  /* 12458865 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458868 mov esp, ebp */
  ESP = (EBP);
  /* 1245886a pop ebp */
  EBP = (pop32());
  /* 1245886b ret  */
  ESPCHK(0x12458850u, _esp0);
  ESP += 4; return;
}

/* FUN_10008870 @ 0x12458870 (157 bytes, 59 insns) */
void f_12458870(void) {
  FTRACE(0x12458870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458870 push ebp */
  push32((uint32_t)(EBP));
  /* 12458871 mov ebp, esp */
  EBP = (ESP);
  /* 12458873 push ecx */
  push32((uint32_t)(ECX));
  /* 12458874 push ebx */
  push32((uint32_t)(EBX));
  /* 12458875 push esi */
  push32((uint32_t)(ESI));
  /* 12458876 push edi */
  push32((uint32_t)(EDI));
  /* 12458877 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458879 call 0x1245b220 */
  push32(0x1245887eu); f_1245b220();
  /* 1245887e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458884 push eax */
  push32((uint32_t)(EAX));
  /* 12458885 call 0x12458e20 */
  push32(0x1245888au); f_12458e20();
  /* 1245888a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245888d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245888f je 0x124588fc */
  if (C.zf) goto L_124588fc;
  /* 12458891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458894 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458897 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1245889a:;
  /* 1245889a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245889d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124588a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124588a5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124588a8 je 0x124588ed */
  if (C.zf) goto L_124588ed;
  /* 124588aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124588ad cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124588b1 je 0x124588ed */
  if (C.zf) goto L_124588ed;
  /* 124588b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124588b6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124588b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124588be cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124588c1 je 0x124588ed */
  if (C.zf) goto L_124588ed;
  /* 124588c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124588c6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124588ca je 0x124588ed */
  if (C.zf) goto L_124588ed;
  /* 124588cc push 0x1247eec8 */
  push32((uint32_t)(0x1247eec8u));
  /* 124588d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124588d3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 124588d8 push 0x1247ec20 */
  push32((uint32_t)(0x1247ec20u));
  /* 124588dd push 2 */
  push32((uint32_t)(0x2u));
  /* 124588df call 0x124568e0 */
  push32(0x124588e4u); f_124568e0();
  /* 124588e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124588e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124588ea jne 0x124588ed */
  if (!C.zf) goto L_124588ed;
  /* 124588ec int3  */
  x86_unimpl("int3 @ 0x124588ec");
L_124588ed:;
  /* 124588ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124588ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124588f1 jne 0x1245889a */
  if (!C.zf) goto L_1245889a;
  /* 124588f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124588f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124588f9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_124588fc:;
  /* 124588fc push 9 */
  push32((uint32_t)(0x9u));
  /* 124588fe call 0x1245b2c0 */
  push32(0x12458903u); f_1245b2c0();
  /* 12458903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458906 pop edi */
  EDI = (pop32());
  /* 12458907 pop esi */
  ESI = (pop32());
  /* 12458908 pop ebx */
  EBX = (pop32());
  /* 12458909 mov esp, ebp */
  ESP = (EBP);
  /* 1245890b pop ebp */
  EBP = (pop32());
  /* 1245890c ret  */
  ESPCHK(0x12458870u, _esp0);
  ESP += 4; return;
}

/* FUN_10008910 @ 0x12458910 (28 bytes, 11 insns) */
void f_12458910(void) {
  FTRACE(0x12458910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458910 push ebp */
  push32((uint32_t)(EBP));
  /* 12458911 mov ebp, esp */
  EBP = (ESP);
  /* 12458913 push ecx */
  push32((uint32_t)(ECX));
  /* 12458914 mov eax, dword ptr [0x12481c90] */
  EAX = (r32((uint32_t)(0x12481c90)));
  /* 12458919 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245891c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245891f mov dword ptr [0x12481c90], ecx */
  w32((uint32_t)(0x12481c90), (ECX));
  /* 12458925 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458928 mov esp, ebp */
  ESP = (EBP);
  /* 1245892a pop ebp */
  EBP = (pop32());
  /* 1245892b ret  */
  ESPCHK(0x12458910u, _esp0);
  ESP += 4; return;
}

/* FUN_10008930 @ 0x12458930 (136 bytes, 55 insns) */
void f_12458930(void) {
  FTRACE(0x12458930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458930 push ebp */
  push32((uint32_t)(EBP));
  /* 12458931 mov ebp, esp */
  EBP = (ESP);
  /* 12458933 push ecx */
  push32((uint32_t)(ECX));
  /* 12458934 push ebx */
  push32((uint32_t)(EBX));
  /* 12458935 push esi */
  push32((uint32_t)(ESI));
  /* 12458936 push edi */
  push32((uint32_t)(EDI));
  /* 12458937 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1245893e:;
  /* 1245893e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12458941 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12458944 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458947 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1245894a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245894c je 0x124589ae */
  if (C.zf) goto L_124589ae;
  /* 1245894e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458951 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458953 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12458955 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12458958 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245895e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458961 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458964 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12458967 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458969 je 0x124589ac */
  if (C.zf) goto L_124589ac;
L_1245896b:;
  /* 1245896b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245896e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12458973 push eax */
  push32((uint32_t)(EAX));
  /* 12458974 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458977 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12458979 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1245897c push edx */
  push32((uint32_t)(EDX));
  /* 1245897d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458980 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458983 push eax */
  push32((uint32_t)(EAX));
  /* 12458984 push 0x1247ef0c */
  push32((uint32_t)(0x1247ef0cu));
  /* 12458989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245898b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245898d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245898f push 0 */
  push32((uint32_t)(0x0u));
  /* 12458991 call 0x124568e0 */
  push32(0x12458996u); f_124568e0();
  /* 12458996 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245899c jne 0x1245899f */
  if (!C.zf) goto L_1245899f;
  /* 1245899e int3  */
  x86_unimpl("int3 @ 0x1245899e");
L_1245899f:;
  /* 1245899f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124589a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124589a3 jne 0x1245896b */
  if (!C.zf) goto L_1245896b;
  /* 124589a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124589ac:;
  /* 124589ac jmp 0x1245893e */
  goto L_1245893e;
L_124589ae:;
  /* 124589ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124589b1 pop edi */
  EDI = (pop32());
  /* 124589b2 pop esi */
  ESI = (pop32());
  /* 124589b3 pop ebx */
  EBX = (pop32());
  /* 124589b4 mov esp, ebp */
  ESP = (EBP);
  /* 124589b6 pop ebp */
  EBP = (pop32());
  /* 124589b7 ret  */
  ESPCHK(0x12458930u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x124589c0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_124589c0(void) {
  FTRACE(0x124589c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124589c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124589c1 mov ebp, esp */
  EBP = (ESP);
  /* 124589c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124589c6 push ebx */
  push32((uint32_t)(EBX));
  /* 124589c7 push esi */
  push32((uint32_t)(ESI));
  /* 124589c8 push edi */
  push32((uint32_t)(EDI));
  /* 124589c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124589d0 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 124589d5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 124589d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124589da jne 0x124589e6 */
  if (!C.zf) goto L_124589e6;
  /* 124589dc mov eax, 1 */
  EAX = (0x1u);
  /* 124589e1 jmp 0x12458d18 */
  goto L_12458d18;
L_124589e6:;
  /* 124589e6 push 9 */
  push32((uint32_t)(0x9u));
  /* 124589e8 call 0x1245b220 */
  push32(0x124589edu); f_1245b220();
  /* 124589ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124589f0 call 0x1245ba00 */
  push32(0x124589f5u); f_1245ba00();
  /* 124589f5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124589f8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124589fc je 0x12458b09 */
  if (C.zf) goto L_12458b09;
  /* 12458a02 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458a06 je 0x12458b09 */
  if (C.zf) goto L_12458b09;
  /* 12458a0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12458a0f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12458a12 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12458a15 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458a18 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12458a1b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458a1f ja 0x12458ad2 */
  if ((!C.cf&&!C.zf)) goto L_12458ad2;
  /* 12458a25 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12458a28 jmp dword ptr [eax*4 + 0x12458d1f] */
  switch (EAX) {
    case 0: goto L_12458aaa;
    case 1: goto L_12458a82;
    case 2: goto L_12458a5a;
    case 3: goto L_12458a2f;
    default: x86_unimpl("switch@0x12458a28 out of table"); return;
  }
L_12458a2f:;
  /* 12458a2f push 0x1247f060 */
  push32((uint32_t)(0x1247f060u));
  /* 12458a34 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12458a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a41 call 0x124568e0 */
  push32(0x12458a46u); f_124568e0();
  /* 12458a46 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458a49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458a4c jne 0x12458a4f */
  if (!C.zf) goto L_12458a4f;
  /* 12458a4e int3  */
  x86_unimpl("int3 @ 0x12458a4e");
L_12458a4f:;
  /* 12458a4f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12458a51 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458a53 jne 0x12458a2f */
  if (!C.zf) goto L_12458a2f;
  /* 12458a55 jmp 0x12458af8 */
  goto L_12458af8;
L_12458a5a:;
  /* 12458a5a push 0x1247f03c */
  push32((uint32_t)(0x1247f03cu));
  /* 12458a5f push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12458a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a6c call 0x124568e0 */
  push32(0x12458a71u); f_124568e0();
  /* 12458a71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458a74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458a77 jne 0x12458a7a */
  if (!C.zf) goto L_12458a7a;
  /* 12458a79 int3  */
  x86_unimpl("int3 @ 0x12458a79");
L_12458a7a:;
  /* 12458a7a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12458a7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12458a7e jne 0x12458a5a */
  if (!C.zf) goto L_12458a5a;
  /* 12458a80 jmp 0x12458af8 */
  goto L_12458af8;
L_12458a82:;
  /* 12458a82 push 0x1247f018 */
  push32((uint32_t)(0x1247f018u));
  /* 12458a87 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12458a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458a94 call 0x124568e0 */
  push32(0x12458a99u); f_124568e0();
  /* 12458a99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458a9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458a9f jne 0x12458aa2 */
  if (!C.zf) goto L_12458aa2;
  /* 12458aa1 int3  */
  x86_unimpl("int3 @ 0x12458aa1");
L_12458aa2:;
  /* 12458aa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458aa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458aa6 jne 0x12458a82 */
  if (!C.zf) goto L_12458a82;
  /* 12458aa8 jmp 0x12458af8 */
  goto L_12458af8;
L_12458aaa:;
  /* 12458aaa push 0x1247eff4 */
  push32((uint32_t)(0x1247eff4u));
  /* 12458aaf push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12458ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458aba push 0 */
  push32((uint32_t)(0x0u));
  /* 12458abc call 0x124568e0 */
  push32(0x12458ac1u); f_124568e0();
  /* 12458ac1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458ac4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458ac7 jne 0x12458aca */
  if (!C.zf) goto L_12458aca;
  /* 12458ac9 int3  */
  x86_unimpl("int3 @ 0x12458ac9");
L_12458aca:;
  /* 12458aca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12458acc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458ace jne 0x12458aaa */
  if (!C.zf) goto L_12458aaa;
  /* 12458ad0 jmp 0x12458af8 */
  goto L_12458af8;
L_12458ad2:;
  /* 12458ad2 push 0x1247efc8 */
  push32((uint32_t)(0x1247efc8u));
  /* 12458ad7 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12458adc push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ade push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ae4 call 0x124568e0 */
  push32(0x12458ae9u); f_124568e0();
  /* 12458ae9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458aec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458aef jne 0x12458af2 */
  if (!C.zf) goto L_12458af2;
  /* 12458af1 int3  */
  x86_unimpl("int3 @ 0x12458af1");
L_12458af2:;
  /* 12458af2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12458af4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12458af6 jne 0x12458ad2 */
  if (!C.zf) goto L_12458ad2;
L_12458af8:;
  /* 12458af8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458afa call 0x1245b2c0 */
  push32(0x12458affu); f_1245b2c0();
  /* 12458aff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458b02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458b04 jmp 0x12458d18 */
  goto L_12458d18;
L_12458b09:;
  /* 12458b09 mov eax, dword ptr [0x124838a8] */
  EAX = (r32((uint32_t)(0x124838a8)));
  /* 12458b0e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12458b11 jmp 0x12458b1b */
  goto L_12458b1b;
L_12458b13:;
  /* 12458b13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458b16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12458b18 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12458b1b:;
  /* 12458b1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458b1f je 0x12458d0b */
  if (C.zf) goto L_12458d0b;
  /* 12458b25 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12458b2c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458b2f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12458b32 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12458b38 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458b3b je 0x12458b60 */
  if (C.zf) goto L_12458b60;
  /* 12458b3d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458b40 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458b44 je 0x12458b60 */
  if (C.zf) goto L_12458b60;
  /* 12458b46 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458b49 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12458b4c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12458b52 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458b55 je 0x12458b60 */
  if (C.zf) goto L_12458b60;
  /* 12458b57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458b5a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458b5e jne 0x12458b78 */
  if (!C.zf) goto L_12458b78;
L_12458b60:;
  /* 12458b60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458b63 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12458b66 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12458b6c mov edx, dword ptr [ecx*4 + 0x12481a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481a94)));
  /* 12458b73 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12458b76 jmp 0x12458b7f */
  goto L_12458b7f;
L_12458b78:;
  /* 12458b78 mov dword ptr [ebp - 0x14], 0x1247efc0 */
  w32((uint32_t)(EBP + -0x14), (0x1247efc0u));
L_12458b7f:;
  /* 12458b7f push 4 */
  push32((uint32_t)(0x4u));
  /* 12458b81 mov al, byte ptr [0x12481a90] */
  AL = (r8((uint32_t)(0x12481a90)));
  /* 12458b86 push eax */
  push32((uint32_t)(EAX));
  /* 12458b87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458b8a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458b8d push ecx */
  push32((uint32_t)(ECX));
  /* 12458b8e call 0x12458930 */
  push32(0x12458b93u); f_12458930();
  /* 12458b93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458b96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458b98 jne 0x12458bd4 */
  if (!C.zf) goto L_12458bd4;
L_12458b9a:;
  /* 12458b9a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458b9d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458ba0 push edx */
  push32((uint32_t)(EDX));
  /* 12458ba1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458ba4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12458ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12458ba8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12458bab push edx */
  push32((uint32_t)(EDX));
  /* 12458bac push 0x1247ee9c */
  push32((uint32_t)(0x1247ee9cu));
  /* 12458bb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458bb9 call 0x124568e0 */
  push32(0x12458bbeu); f_124568e0();
  /* 12458bbe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458bc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458bc4 jne 0x12458bc7 */
  if (!C.zf) goto L_12458bc7;
  /* 12458bc6 int3  */
  x86_unimpl("int3 @ 0x12458bc6");
L_12458bc7:;
  /* 12458bc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458bc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458bcb jne 0x12458b9a */
  if (!C.zf) goto L_12458b9a;
  /* 12458bcd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12458bd4:;
  /* 12458bd4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12458bd6 mov cl, byte ptr [0x12481a90] */
  CL = (r8((uint32_t)(0x12481a90)));
  /* 12458bdc push ecx */
  push32((uint32_t)(ECX));
  /* 12458bdd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458be0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12458be3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458be6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12458bea push edx */
  push32((uint32_t)(EDX));
  /* 12458beb call 0x12458930 */
  push32(0x12458bf0u); f_12458930();
  /* 12458bf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458bf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458bf5 jne 0x12458c31 */
  if (!C.zf) goto L_12458c31;
L_12458bf7:;
  /* 12458bf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458bfa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458bfd push eax */
  push32((uint32_t)(EAX));
  /* 12458bfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458c01 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12458c04 push edx */
  push32((uint32_t)(EDX));
  /* 12458c05 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12458c08 push eax */
  push32((uint32_t)(EAX));
  /* 12458c09 push 0x1247ee70 */
  push32((uint32_t)(0x1247ee70u));
  /* 12458c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12458c10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458c12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458c16 call 0x124568e0 */
  push32(0x12458c1bu); f_124568e0();
  /* 12458c1b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458c1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458c21 jne 0x12458c24 */
  if (!C.zf) goto L_12458c24;
  /* 12458c23 int3  */
  x86_unimpl("int3 @ 0x12458c23");
L_12458c24:;
  /* 12458c24 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12458c26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458c28 jne 0x12458bf7 */
  if (!C.zf) goto L_12458bf7;
  /* 12458c2a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12458c31:;
  /* 12458c31 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458c34 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458c38 jne 0x12458c8a */
  if (!C.zf) goto L_12458c8a;
  /* 12458c3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458c3d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12458c40 push ecx */
  push32((uint32_t)(ECX));
  /* 12458c41 mov dl, byte ptr [0x12481a91] */
  DL = (r8((uint32_t)(0x12481a91)));
  /* 12458c47 push edx */
  push32((uint32_t)(EDX));
  /* 12458c48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458c4b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458c4e push eax */
  push32((uint32_t)(EAX));
  /* 12458c4f call 0x12458930 */
  push32(0x12458c54u); f_12458930();
  /* 12458c54 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458c57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458c59 jne 0x12458c8a */
  if (!C.zf) goto L_12458c8a;
L_12458c5b:;
  /* 12458c5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458c5e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458c61 push ecx */
  push32((uint32_t)(ECX));
  /* 12458c62 push 0x1247ef94 */
  push32((uint32_t)(0x1247ef94u));
  /* 12458c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12458c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12458c6f call 0x124568e0 */
  push32(0x12458c74u); f_124568e0();
  /* 12458c74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458c77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458c7a jne 0x12458c7d */
  if (!C.zf) goto L_12458c7d;
  /* 12458c7c int3  */
  x86_unimpl("int3 @ 0x12458c7c");
L_12458c7d:;
  /* 12458c7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12458c7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12458c81 jne 0x12458c5b */
  if (!C.zf) goto L_12458c5b;
  /* 12458c83 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12458c8a:;
  /* 12458c8a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458c8e jne 0x12458d06 */
  if (!C.zf) goto L_12458d06;
  /* 12458c90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458c93 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458c97 je 0x12458ccc */
  if (C.zf) goto L_12458ccc;
L_12458c99:;
  /* 12458c99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458c9c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12458c9f push edx */
  push32((uint32_t)(EDX));
  /* 12458ca0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458ca3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12458ca6 push ecx */
  push32((uint32_t)(ECX));
  /* 12458ca7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12458caa push edx */
  push32((uint32_t)(EDX));
  /* 12458cab push 0x1247ef74 */
  push32((uint32_t)(0x1247ef74u));
  /* 12458cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458cb8 call 0x124568e0 */
  push32(0x12458cbdu); f_124568e0();
  /* 12458cbd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458cc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458cc3 jne 0x12458cc6 */
  if (!C.zf) goto L_12458cc6;
  /* 12458cc5 int3  */
  x86_unimpl("int3 @ 0x12458cc5");
L_12458cc6:;
  /* 12458cc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458cca jne 0x12458c99 */
  if (!C.zf) goto L_12458c99;
L_12458ccc:;
  /* 12458ccc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458ccf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12458cd2 push edx */
  push32((uint32_t)(EDX));
  /* 12458cd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12458cd6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458cd9 push eax */
  push32((uint32_t)(EAX));
  /* 12458cda mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12458cdd push ecx */
  push32((uint32_t)(ECX));
  /* 12458cde push 0x1247ef48 */
  push32((uint32_t)(0x1247ef48u));
  /* 12458ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458ceb call 0x124568e0 */
  push32(0x12458cf0u); f_124568e0();
  /* 12458cf0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458cf3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458cf6 jne 0x12458cf9 */
  if (!C.zf) goto L_12458cf9;
  /* 12458cf8 int3  */
  x86_unimpl("int3 @ 0x12458cf8");
L_12458cf9:;
  /* 12458cf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12458cfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12458cfd jne 0x12458ccc */
  if (!C.zf) goto L_12458ccc;
  /* 12458cff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12458d06:;
  /* 12458d06 jmp 0x12458b13 */
  goto L_12458b13;
L_12458d0b:;
  /* 12458d0b push 9 */
  push32((uint32_t)(0x9u));
  /* 12458d0d call 0x1245b2c0 */
  push32(0x12458d12u); f_1245b2c0();
  /* 12458d12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458d15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12458d18:;
  /* 12458d18 pop edi */
  EDI = (pop32());
  /* 12458d19 pop esi */
  ESI = (pop32());
  /* 12458d1a pop ebx */
  EBX = (pop32());
  /* 12458d1b mov esp, ebp */
  ESP = (EBP);
  /* 12458d1d pop ebp */
  EBP = (pop32());
  /* 12458d1e ret  */
  ESPCHK(0x124589c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x12458d30 (34 bytes, 13 insns) */
void f_12458d30(void) {
  FTRACE(0x12458d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12458d31 mov ebp, esp */
  EBP = (ESP);
  /* 12458d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12458d34 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 12458d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12458d3c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458d40 je 0x12458d4b */
  if (C.zf) goto L_12458d4b;
  /* 12458d42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458d45 mov dword ptr [0x12481a84], ecx */
  w32((uint32_t)(0x12481a84), (ECX));
L_12458d4b:;
  /* 12458d4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458d4e mov esp, ebp */
  ESP = (EBP);
  /* 12458d50 pop ebp */
  EBP = (pop32());
  /* 12458d51 ret  */
  ESPCHK(0x12458d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d60 @ 0x12458d60 (103 bytes, 38 insns) */
void f_12458d60(void) {
  FTRACE(0x12458d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12458d61 mov ebp, esp */
  EBP = (ESP);
  /* 12458d63 push ecx */
  push32((uint32_t)(ECX));
  /* 12458d64 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 12458d69 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12458d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458d6e jne 0x12458d72 */
  if (!C.zf) goto L_12458d72;
  /* 12458d70 jmp 0x12458dc3 */
  goto L_12458dc3;
L_12458d72:;
  /* 12458d72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458d74 call 0x1245b220 */
  push32(0x12458d79u); f_1245b220();
  /* 12458d79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458d7c mov ecx, dword ptr [0x124838a8] */
  ECX = (r32((uint32_t)(0x124838a8)));
  /* 12458d82 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12458d85 jmp 0x12458d8f */
  goto L_12458d8f;
L_12458d87:;
  /* 12458d87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458d8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12458d8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12458d8f:;
  /* 12458d8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458d93 je 0x12458db9 */
  if (C.zf) goto L_12458db9;
  /* 12458d95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458d98 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12458d9b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12458da1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458da4 jne 0x12458db7 */
  if (!C.zf) goto L_12458db7;
  /* 12458da6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12458da9 push eax */
  push32((uint32_t)(EAX));
  /* 12458daa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458dad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12458db0 push ecx */
  push32((uint32_t)(ECX));
  /* 12458db1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12458db4u);
  /* 12458db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12458db7:;
  /* 12458db7 jmp 0x12458d87 */
  goto L_12458d87;
L_12458db9:;
  /* 12458db9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458dbb call 0x1245b2c0 */
  push32(0x12458dc0u); f_1245b2c0();
  /* 12458dc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12458dc3:;
  /* 12458dc3 mov esp, ebp */
  ESP = (EBP);
  /* 12458dc5 pop ebp */
  EBP = (pop32());
  /* 12458dc6 ret  */
  ESPCHK(0x12458d60u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12458dd0 (75 bytes, 28 insns) */
void f_12458dd0(void) {
  FTRACE(0x12458dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12458dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12458dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12458dd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458dd8 je 0x12458e0d */
  if (C.zf) goto L_12458e0d;
  /* 12458dda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12458ddd push eax */
  push32((uint32_t)(EAX));
  /* 12458dde mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458de1 push ecx */
  push32((uint32_t)(ECX));
  /* 12458de2 call dword ptr [0x124863a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863a4))), 0x12458de8u);
  /* 12458de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458dea jne 0x12458e0d */
  if (!C.zf) goto L_12458e0d;
  /* 12458dec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458df0 je 0x12458e04 */
  if (C.zf) goto L_12458e04;
  /* 12458df2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12458df5 push edx */
  push32((uint32_t)(EDX));
  /* 12458df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458df9 push eax */
  push32((uint32_t)(EAX));
  /* 12458dfa call dword ptr [0x1248637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248637c))), 0x12458e00u);
  /* 12458e00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458e02 jne 0x12458e0d */
  if (!C.zf) goto L_12458e0d;
L_12458e04:;
  /* 12458e04 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12458e0b jmp 0x12458e14 */
  goto L_12458e14;
L_12458e0d:;
  /* 12458e0d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12458e14:;
  /* 12458e14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458e17 mov esp, ebp */
  ESP = (EBP);
  /* 12458e19 pop ebp */
  EBP = (pop32());
  /* 12458e1a ret  */
  ESPCHK(0x12458dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e20 @ 0x12458e20 (134 bytes, 50 insns) */
void f_12458e20(void) {
  FTRACE(0x12458e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12458e21 mov ebp, esp */
  EBP = (ESP);
  /* 12458e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12458e24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458e28 jne 0x12458e2e */
  if (!C.zf) goto L_12458e2e;
  /* 12458e2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458e2c jmp 0x12458ea2 */
  goto L_12458ea2;
L_12458e2e:;
  /* 12458e2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12458e30 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12458e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458e35 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458e38 push eax */
  push32((uint32_t)(EAX));
  /* 12458e39 call 0x12458dd0 */
  push32(0x12458e3eu); f_12458dd0();
  /* 12458e3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458e43 jne 0x12458e49 */
  if (!C.zf) goto L_12458e49;
  /* 12458e45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458e47 jmp 0x12458ea2 */
  goto L_12458ea2;
L_12458e49:;
  /* 12458e49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458e4c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458e4f push ecx */
  push32((uint32_t)(ECX));
  /* 12458e50 call 0x1245bb20 */
  push32(0x12458e55u); f_1245bb20();
  /* 12458e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458e58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12458e5b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458e5f je 0x12458e76 */
  if (C.zf) goto L_12458e76;
  /* 12458e61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458e64 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458e67 push edx */
  push32((uint32_t)(EDX));
  /* 12458e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458e6b push eax */
  push32((uint32_t)(EAX));
  /* 12458e6c call 0x1245bb80 */
  push32(0x12458e71u); f_1245bb80();
  /* 12458e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458e74 jmp 0x12458ea2 */
  goto L_12458ea2;
L_12458e76:;
  /* 12458e76 mov ecx, dword ptr [0x1248385c] */
  ECX = (r32((uint32_t)(0x1248385c)));
  /* 12458e7c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12458e82 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12458e84 je 0x12458e8d */
  if (C.zf) goto L_12458e8d;
  /* 12458e86 mov eax, 1 */
  EAX = (0x1u);
  /* 12458e8b jmp 0x12458ea2 */
  goto L_12458ea2;
L_12458e8d:;
  /* 12458e8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458e90 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458e93 push edx */
  push32((uint32_t)(EDX));
  /* 12458e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458e96 mov eax, dword ptr [0x1248520c] */
  EAX = (r32((uint32_t)(0x1248520c)));
  /* 12458e9b push eax */
  push32((uint32_t)(EAX));
  /* 12458e9c call dword ptr [0x124863a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863a8))), 0x12458ea2u);
L_12458ea2:;
  /* 12458ea2 mov esp, ebp */
  ESP = (EBP);
  /* 12458ea4 pop ebp */
  EBP = (pop32());
  /* 12458ea5 ret  */
  ESPCHK(0x12458e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008eb0 @ 0x12458eb0 (227 bytes, 80 insns) */
void f_12458eb0(void) {
  FTRACE(0x12458eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12458eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12458eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12458eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458eb7 push eax */
  push32((uint32_t)(EAX));
  /* 12458eb8 call 0x12458e20 */
  push32(0x12458ebdu); f_12458e20();
  /* 12458ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458ec2 jne 0x12458ecb */
  if (!C.zf) goto L_12458ecb;
  /* 12458ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458ec6 jmp 0x12458f8f */
  goto L_12458f8f;
L_12458ecb:;
  /* 12458ecb push 9 */
  push32((uint32_t)(0x9u));
  /* 12458ecd call 0x1245b220 */
  push32(0x12458ed2u); f_1245b220();
  /* 12458ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458ed5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458ed8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458edb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12458ede mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458ee1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12458ee4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12458ee9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458eec je 0x12458f10 */
  if (C.zf) goto L_12458f10;
  /* 12458eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458ef1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458ef5 je 0x12458f10 */
  if (C.zf) goto L_12458f10;
  /* 12458ef7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458efa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12458efd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12458f02 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458f05 je 0x12458f10 */
  if (C.zf) goto L_12458f10;
  /* 12458f07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458f0a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458f0e jne 0x12458f83 */
  if (!C.zf) goto L_12458f83;
L_12458f10:;
  /* 12458f10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12458f12 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12458f15 push edx */
  push32((uint32_t)(EDX));
  /* 12458f16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458f19 push eax */
  push32((uint32_t)(EAX));
  /* 12458f1a call 0x12458dd0 */
  push32(0x12458f1fu); f_12458dd0();
  /* 12458f1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458f22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458f24 je 0x12458f83 */
  if (C.zf) goto L_12458f83;
  /* 12458f26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458f29 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12458f2c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458f2f jne 0x12458f83 */
  if (!C.zf) goto L_12458f83;
  /* 12458f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458f34 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12458f37 cmp ecx, dword ptr [0x12481a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12481a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458f3d jg 0x12458f83 */
  if ((!C.zf&&C.sf==C.of)) goto L_12458f83;
  /* 12458f3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458f43 je 0x12458f50 */
  if (C.zf) goto L_12458f50;
  /* 12458f45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12458f48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458f4b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12458f4e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12458f50:;
  /* 12458f50 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458f54 je 0x12458f61 */
  if (C.zf) goto L_12458f61;
  /* 12458f56 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12458f59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458f5c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12458f5f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12458f61:;
  /* 12458f61 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458f65 je 0x12458f72 */
  if (C.zf) goto L_12458f72;
  /* 12458f67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12458f6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458f6d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12458f70 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12458f72:;
  /* 12458f72 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458f74 call 0x1245b2c0 */
  push32(0x12458f79u); f_1245b2c0();
  /* 12458f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458f7c mov eax, 1 */
  EAX = (0x1u);
  /* 12458f81 jmp 0x12458f8f */
  goto L_12458f8f;
L_12458f83:;
  /* 12458f83 push 9 */
  push32((uint32_t)(0x9u));
  /* 12458f85 call 0x1245b2c0 */
  push32(0x12458f8au); f_1245b2c0();
  /* 12458f8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458f8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12458f8f:;
  /* 12458f8f mov esp, ebp */
  ESP = (EBP);
  /* 12458f91 pop ebp */
  EBP = (pop32());
  /* 12458f92 ret  */
  ESPCHK(0x12458eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fa0 @ 0x12458fa0 (28 bytes, 11 insns) */
void f_12458fa0(void) {
  FTRACE(0x12458fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12458fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12458fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12458fa4 mov eax, dword ptr [0x12485218] */
  EAX = (r32((uint32_t)(0x12485218)));
  /* 12458fa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12458fac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12458faf mov dword ptr [0x12485218], ecx */
  w32((uint32_t)(0x12485218), (ECX));
  /* 12458fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12458fb8 mov esp, ebp */
  ESP = (EBP);
  /* 12458fba pop ebp */
  EBP = (pop32());
  /* 12458fbb ret  */
  ESPCHK(0x12458fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fc0 @ 0x12458fc0 (362 bytes, 116 insns) */
void f_12458fc0(void) {
  FTRACE(0x12458fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12458fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12458fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12458fc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12458fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 12458fc7 push esi */
  push32((uint32_t)(ESI));
  /* 12458fc8 push edi */
  push32((uint32_t)(EDI));
  /* 12458fc9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458fcd jne 0x12458ffa */
  if (!C.zf) goto L_12458ffa;
L_12458fcf:;
  /* 12458fcf push 0x1247f0a8 */
  push32((uint32_t)(0x1247f0a8u));
  /* 12458fd4 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12458fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12458fdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12458fdd push 0 */
  push32((uint32_t)(0x0u));
  /* 12458fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12458fe1 call 0x124568e0 */
  push32(0x12458fe6u); f_124568e0();
  /* 12458fe6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12458fe9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12458fec jne 0x12458fef */
  if (!C.zf) goto L_12458fef;
  /* 12458fee int3  */
  x86_unimpl("int3 @ 0x12458fee");
L_12458fef:;
  /* 12458fef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12458ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12458ff3 jne 0x12458fcf */
  if (!C.zf) goto L_12458fcf;
  /* 12458ff5 jmp 0x12459123 */
  goto L_12459123;
L_12458ffa:;
  /* 12458ffa push 9 */
  push32((uint32_t)(0x9u));
  /* 12458ffc call 0x1245b220 */
  push32(0x12459001u); f_1245b220();
  /* 12459001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459004 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459007 mov edx, dword ptr [0x124838a8] */
  EDX = (r32((uint32_t)(0x124838a8)));
  /* 1245900d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1245900f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12459016 jmp 0x12459021 */
  goto L_12459021;
L_12459018:;
  /* 12459018 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245901b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245901e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12459021:;
  /* 12459021 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459025 jge 0x12459045 */
  if ((C.sf==C.of)) goto L_12459045;
  /* 12459027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245902a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245902d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12459035 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459038 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245903b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12459043 jmp 0x12459018 */
  goto L_12459018;
L_12459045:;
  /* 12459045 mov edx, dword ptr [0x124838a8] */
  EDX = (r32((uint32_t)(0x124838a8)));
  /* 1245904b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1245904e jmp 0x12459058 */
  goto L_12459058;
L_12459050:;
  /* 12459050 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459053 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12459055 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12459058:;
  /* 12459058 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245905c je 0x12459101 */
  if (C.zf) goto L_12459101;
  /* 12459062 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459065 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12459068 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245906d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245906f jl 0x124590d7 */
  if ((C.sf!=C.of)) goto L_124590d7;
  /* 12459071 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459074 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12459077 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1245907d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459080 jge 0x124590d7 */
  if ((C.sf==C.of)) goto L_124590d7;
  /* 12459082 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459085 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12459088 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245908e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459091 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12459095 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459098 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245909b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1245909e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124590a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124590a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 124590ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124590ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124590b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124590b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124590b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 124590bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124590c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124590c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124590c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 124590c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124590ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124590d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 124590d5 jmp 0x124590fc */
  goto L_124590fc;
L_124590d7:;
  /* 124590d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124590da push edx */
  push32((uint32_t)(EDX));
  /* 124590db push 0x1247f084 */
  push32((uint32_t)(0x1247f084u));
  /* 124590e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124590e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124590e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124590e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124590e8 call 0x124568e0 */
  push32(0x124590edu); f_124568e0();
  /* 124590ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124590f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124590f3 jne 0x124590f6 */
  if (!C.zf) goto L_124590f6;
  /* 124590f5 int3  */
  x86_unimpl("int3 @ 0x124590f5");
L_124590f6:;
  /* 124590f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124590f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124590fa jne 0x124590d7 */
  if (!C.zf) goto L_124590d7;
L_124590fc:;
  /* 124590fc jmp 0x12459050 */
  goto L_12459050;
L_12459101:;
  /* 12459101 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459104 mov edx, dword ptr [0x124838b0] */
  EDX = (r32((uint32_t)(0x124838b0)));
  /* 1245910a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1245910d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459110 mov ecx, dword ptr [0x124838a4] */
  ECX = (r32((uint32_t)(0x124838a4)));
  /* 12459116 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12459119 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245911b call 0x1245b2c0 */
  push32(0x12459120u); f_1245b2c0();
  /* 12459120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12459123:;
  /* 12459123 pop edi */
  EDI = (pop32());
  /* 12459124 pop esi */
  ESI = (pop32());
  /* 12459125 pop ebx */
  EBX = (pop32());
  /* 12459126 mov esp, ebp */
  ESP = (EBP);
  /* 12459128 pop ebp */
  EBP = (pop32());
  /* 12459129 ret  */
  ESPCHK(0x12458fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x12459130 (291 bytes, 95 insns) */
void f_12459130(void) {
  FTRACE(0x12459130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12459130 push ebp */
  push32((uint32_t)(EBP));
  /* 12459131 mov ebp, esp */
  EBP = (ESP);
  /* 12459133 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459136 push ebx */
  push32((uint32_t)(EBX));
  /* 12459137 push esi */
  push32((uint32_t)(ESI));
  /* 12459138 push edi */
  push32((uint32_t)(EDI));
  /* 12459139 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12459140 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459144 je 0x12459152 */
  if (C.zf) goto L_12459152;
  /* 12459146 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245914a je 0x12459152 */
  if (C.zf) goto L_12459152;
  /* 1245914c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459150 jne 0x12459180 */
  if (!C.zf) goto L_12459180;
L_12459152:;
  /* 12459152 push 0x1247f0d0 */
  push32((uint32_t)(0x1247f0d0u));
  /* 12459157 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 1245915c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245915e push 0 */
  push32((uint32_t)(0x0u));
  /* 12459160 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459162 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459164 call 0x124568e0 */
  push32(0x12459169u); f_124568e0();
  /* 12459169 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245916c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245916f jne 0x12459172 */
  if (!C.zf) goto L_12459172;
  /* 12459171 int3  */
  x86_unimpl("int3 @ 0x12459171");
L_12459172:;
  /* 12459172 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459174 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459176 jne 0x12459152 */
  if (!C.zf) goto L_12459152;
  /* 12459178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245917b jmp 0x1245924c */
  goto L_1245924c;
L_12459180:;
  /* 12459180 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12459187 jmp 0x12459192 */
  goto L_12459192;
L_12459189:;
  /* 12459189 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245918c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245918f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12459192:;
  /* 12459192 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459196 jge 0x1245921c */
  if ((C.sf==C.of)) goto L_1245921c;
  /* 1245919c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245919f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124591a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124591a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124591a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 124591ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124591b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124591b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124591b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 124591ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124591bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124591c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124591c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124591c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 124591ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124591ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124591d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124591d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 124591d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124591db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124591de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124591e3 jne 0x124591f2 */
  if (!C.zf) goto L_124591f2;
  /* 124591e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124591e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124591eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124591f0 je 0x12459217 */
  if (C.zf) goto L_12459217;
L_124591f2:;
  /* 124591f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124591f6 je 0x12459217 */
  if (C.zf) goto L_12459217;
  /* 124591f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124591fc jne 0x12459210 */
  if (!C.zf) goto L_12459210;
  /* 124591fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459202 jne 0x12459217 */
  if (!C.zf) goto L_12459217;
  /* 12459204 mov eax, dword ptr [0x12481a84] */
  EAX = (r32((uint32_t)(0x12481a84)));
  /* 12459209 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1245920c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245920e je 0x12459217 */
  if (C.zf) goto L_12459217;
L_12459210:;
  /* 12459210 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12459217:;
  /* 12459217 jmp 0x12459189 */
  goto L_12459189;
L_1245921c:;
  /* 1245921c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245921f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12459222 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12459225 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459228 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245922b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1245922e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459231 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12459234 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12459237 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245923a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245923d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12459240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459243 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12459249 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1245924c:;
  /* 1245924c pop edi */
  EDI = (pop32());
  /* 1245924d pop esi */
  ESI = (pop32());
  /* 1245924e pop ebx */
  EBX = (pop32());
  /* 1245924f mov esp, ebp */
  ESP = (EBP);
  /* 12459251 pop ebp */
  EBP = (pop32());
  /* 12459252 ret  */
  ESPCHK(0x12459130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009260 @ 0x12459260 (697 bytes, 253 insns) */
void f_12459260(void) {
  FTRACE(0x12459260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12459260 push ebp */
  push32((uint32_t)(EBP));
  /* 12459261 mov ebp, esp */
  EBP = (ESP);
  /* 12459263 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459266 push ebx */
  push32((uint32_t)(EBX));
  /* 12459267 push esi */
  push32((uint32_t)(ESI));
  /* 12459268 push edi */
  push32((uint32_t)(EDI));
  /* 12459269 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12459270 push 9 */
  push32((uint32_t)(0x9u));
  /* 12459272 call 0x1245b220 */
  push32(0x12459277u); f_1245b220();
  /* 12459277 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245927a:;
  /* 1245927a push 0x1247f1c8 */
  push32((uint32_t)(0x1247f1c8u));
  /* 1245927f push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 12459284 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459286 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245928a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245928c call 0x124568e0 */
  push32(0x12459291u); f_124568e0();
  /* 12459291 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459294 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459297 jne 0x1245929a */
  if (!C.zf) goto L_1245929a;
  /* 12459299 int3  */
  x86_unimpl("int3 @ 0x12459299");
L_1245929a:;
  /* 1245929a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245929c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245929e jne 0x1245927a */
  if (!C.zf) goto L_1245927a;
  /* 124592a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124592a4 je 0x124592ae */
  if (C.zf) goto L_124592ae;
  /* 124592a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124592a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124592ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124592ae:;
  /* 124592ae mov eax, dword ptr [0x124838a8] */
  EAX = (r32((uint32_t)(0x124838a8)));
  /* 124592b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124592b6 jmp 0x124592c0 */
  goto L_124592c0;
L_124592b8:;
  /* 124592b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124592bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124592bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124592c0:;
  /* 124592c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124592c4 je 0x124594e2 */
  if (C.zf) goto L_124594e2;
  /* 124592ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124592cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124592d0 je 0x124594e2 */
  if (C.zf) goto L_124594e2;
  /* 124592d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124592d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 124592dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124592e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124592e5 je 0x12459314 */
  if (C.zf) goto L_12459314;
  /* 124592e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124592ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124592ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124592f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124592f5 je 0x12459314 */
  if (C.zf) goto L_12459314;
  /* 124592f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124592fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124592fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12459302 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459305 jne 0x12459319 */
  if (!C.zf) goto L_12459319;
  /* 12459307 mov ecx, dword ptr [0x12481a84] */
  ECX = (r32((uint32_t)(0x12481a84)));
  /* 1245930d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12459310 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12459312 jne 0x12459319 */
  if (!C.zf) goto L_12459319;
L_12459314:;
  /* 12459314 jmp 0x124594dd */
  goto L_124594dd;
L_12459319:;
  /* 12459319 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245931c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459320 je 0x12459392 */
  if (C.zf) goto L_12459392;
  /* 12459322 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459324 push 1 */
  push32((uint32_t)(0x1u));
  /* 12459326 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459329 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1245932c push ecx */
  push32((uint32_t)(ECX));
  /* 1245932d call 0x12458dd0 */
  push32(0x12459332u); f_12458dd0();
  /* 12459332 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459337 jne 0x12459363 */
  if (!C.zf) goto L_12459363;
L_12459339:;
  /* 12459339 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245933c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1245933f push eax */
  push32((uint32_t)(EAX));
  /* 12459340 push 0x1247f1b4 */
  push32((uint32_t)(0x1247f1b4u));
  /* 12459345 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459347 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245934b push 0 */
  push32((uint32_t)(0x0u));
  /* 1245934d call 0x124568e0 */
  push32(0x12459352u); f_124568e0();
  /* 12459352 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459355 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459358 jne 0x1245935b */
  if (!C.zf) goto L_1245935b;
  /* 1245935a int3  */
  x86_unimpl("int3 @ 0x1245935a");
L_1245935b:;
  /* 1245935b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245935d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245935f jne 0x12459339 */
  if (!C.zf) goto L_12459339;
  /* 12459361 jmp 0x12459392 */
  goto L_12459392;
L_12459363:;
  /* 12459363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459366 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12459369 push eax */
  push32((uint32_t)(EAX));
  /* 1245936a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245936d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12459370 push edx */
  push32((uint32_t)(EDX));
  /* 12459371 push 0x1247f1a8 */
  push32((uint32_t)(0x1247f1a8u));
  /* 12459376 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245937a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245937c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245937e call 0x124568e0 */
  push32(0x12459383u); f_124568e0();
  /* 12459383 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459386 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459389 jne 0x1245938c */
  if (!C.zf) goto L_1245938c;
  /* 1245938b int3  */
  x86_unimpl("int3 @ 0x1245938b");
L_1245938c:;
  /* 1245938c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245938e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459390 jne 0x12459363 */
  if (!C.zf) goto L_12459363;
L_12459392:;
  /* 12459392 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459395 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12459398 push edx */
  push32((uint32_t)(EDX));
  /* 12459399 push 0x1247f1a0 */
  push32((uint32_t)(0x1247f1a0u));
  /* 1245939e push 0 */
  push32((uint32_t)(0x0u));
  /* 124593a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124593a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124593a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124593a6 call 0x124568e0 */
  push32(0x124593abu); f_124568e0();
  /* 124593ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124593ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124593b1 jne 0x124593b4 */
  if (!C.zf) goto L_124593b4;
  /* 124593b3 int3  */
  x86_unimpl("int3 @ 0x124593b3");
L_124593b4:;
  /* 124593b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124593b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124593b8 jne 0x12459392 */
  if (!C.zf) goto L_12459392;
  /* 124593ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124593bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 124593c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124593c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124593c9 jne 0x1245943c */
  if (!C.zf) goto L_1245943c;
L_124593cb:;
  /* 124593cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124593ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124593d1 push ecx */
  push32((uint32_t)(ECX));
  /* 124593d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124593d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124593d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124593db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124593e0 push eax */
  push32((uint32_t)(EAX));
  /* 124593e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124593e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124593e7 push ecx */
  push32((uint32_t)(ECX));
  /* 124593e8 push 0x1247f16c */
  push32((uint32_t)(0x1247f16cu));
  /* 124593ed push 0 */
  push32((uint32_t)(0x0u));
  /* 124593ef push 0 */
  push32((uint32_t)(0x0u));
  /* 124593f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124593f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124593f5 call 0x124568e0 */
  push32(0x124593fau); f_124568e0();
  /* 124593fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124593fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459400 jne 0x12459403 */
  if (!C.zf) goto L_12459403;
  /* 12459402 int3  */
  x86_unimpl("int3 @ 0x12459402");
L_12459403:;
  /* 12459403 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459405 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459407 jne 0x124593cb */
  if (!C.zf) goto L_124593cb;
  /* 12459409 cmp dword ptr [0x12485218], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485218))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459410 je 0x1245942b */
  if (C.zf) goto L_1245942b;
  /* 12459412 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459415 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12459418 push ecx */
  push32((uint32_t)(ECX));
  /* 12459419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245941c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245941f push edx */
  push32((uint32_t)(EDX));
  /* 12459420 call dword ptr [0x12485218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12485218))), 0x12459426u);
  /* 12459426 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459429 jmp 0x12459437 */
  goto L_12459437;
L_1245942b:;
  /* 1245942b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245942e push eax */
  push32((uint32_t)(EAX));
  /* 1245942f call 0x12459520 */
  push32(0x12459434u); f_12459520();
  /* 12459434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12459437:;
  /* 12459437 jmp 0x124594dd */
  goto L_124594dd;
L_1245943c:;
  /* 1245943c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245943f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459443 jne 0x12459482 */
  if (!C.zf) goto L_12459482;
L_12459445:;
  /* 12459445 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459448 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245944b push eax */
  push32((uint32_t)(EAX));
  /* 1245944c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245944f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459452 push ecx */
  push32((uint32_t)(ECX));
  /* 12459453 push 0x1247f144 */
  push32((uint32_t)(0x1247f144u));
  /* 12459458 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245945a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245945c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245945e push 0 */
  push32((uint32_t)(0x0u));
  /* 12459460 call 0x124568e0 */
  push32(0x12459465u); f_124568e0();
  /* 12459465 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459468 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245946b jne 0x1245946e */
  if (!C.zf) goto L_1245946e;
  /* 1245946d int3  */
  x86_unimpl("int3 @ 0x1245946d");
L_1245946e:;
  /* 1245946e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459472 jne 0x12459445 */
  if (!C.zf) goto L_12459445;
  /* 12459474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459477 push eax */
  push32((uint32_t)(EAX));
  /* 12459478 call 0x12459520 */
  push32(0x1245947du); f_12459520();
  /* 1245947d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459480 jmp 0x124594dd */
  goto L_124594dd;
L_12459482:;
  /* 12459482 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459485 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12459488 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1245948e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459491 jne 0x124594dd */
  if (!C.zf) goto L_124594dd;
L_12459493:;
  /* 12459493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459496 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12459499 push ecx */
  push32((uint32_t)(ECX));
  /* 1245949a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245949d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124594a0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124594a3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124594a8 push eax */
  push32((uint32_t)(EAX));
  /* 124594a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124594ac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124594af push ecx */
  push32((uint32_t)(ECX));
  /* 124594b0 push 0x1247f110 */
  push32((uint32_t)(0x1247f110u));
  /* 124594b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124594b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124594b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124594bb push 0 */
  push32((uint32_t)(0x0u));
  /* 124594bd call 0x124568e0 */
  push32(0x124594c2u); f_124568e0();
  /* 124594c2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124594c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124594c8 jne 0x124594cb */
  if (!C.zf) goto L_124594cb;
  /* 124594ca int3  */
  x86_unimpl("int3 @ 0x124594ca");
L_124594cb:;
  /* 124594cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124594cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124594cf jne 0x12459493 */
  if (!C.zf) goto L_12459493;
  /* 124594d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124594d4 push eax */
  push32((uint32_t)(EAX));
  /* 124594d5 call 0x12459520 */
  push32(0x124594dau); f_12459520();
  /* 124594da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124594dd:;
  /* 124594dd jmp 0x124592b8 */
  goto L_124592b8;
L_124594e2:;
  /* 124594e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 124594e4 call 0x1245b2c0 */
  push32(0x124594e9u); f_1245b2c0();
  /* 124594e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124594ec:;
  /* 124594ec push 0x1247f0f8 */
  push32((uint32_t)(0x1247f0f8u));
  /* 124594f1 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 124594f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124594f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124594fa push 0 */
  push32((uint32_t)(0x0u));
  /* 124594fc push 0 */
  push32((uint32_t)(0x0u));
  /* 124594fe call 0x124568e0 */
  push32(0x12459503u); f_124568e0();
  /* 12459503 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459506 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459509 jne 0x1245950c */
  if (!C.zf) goto L_1245950c;
  /* 1245950b int3  */
  x86_unimpl("int3 @ 0x1245950b");
L_1245950c:;
  /* 1245950c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245950e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12459510 jne 0x124594ec */
  if (!C.zf) goto L_124594ec;
  /* 12459512 pop edi */
  EDI = (pop32());
  /* 12459513 pop esi */
  ESI = (pop32());
  /* 12459514 pop ebx */
  EBX = (pop32());
  /* 12459515 mov esp, ebp */
  ESP = (EBP);
  /* 12459517 pop ebp */
  EBP = (pop32());
  /* 12459518 ret  */
  ESPCHK(0x12459260u, _esp0);
  ESP += 4; return;
}

/* FUN_10009520 @ 0x12459520 (276 bytes, 89 insns) */
void f_12459520(void) {
  FTRACE(0x12459520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12459520 push ebp */
  push32((uint32_t)(EBP));
  /* 12459521 mov ebp, esp */
  EBP = (ESP);
  /* 12459523 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459526 push ebx */
  push32((uint32_t)(EBX));
  /* 12459527 push esi */
  push32((uint32_t)(ESI));
  /* 12459528 push edi */
  push32((uint32_t)(EDI));
  /* 12459529 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12459530 jmp 0x1245953b */
  goto L_1245953b;
L_12459532:;
  /* 12459532 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12459535 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459538 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1245953b:;
  /* 1245953b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245953e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459542 jge 0x1245954f */
  if ((C.sf==C.of)) goto L_1245954f;
  /* 12459544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459547 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1245954a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1245954d jmp 0x12459556 */
  goto L_12459556;
L_1245954f:;
  /* 1245954f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12459556:;
  /* 12459556 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12459559 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245955c jge 0x124595fc */
  if ((C.sf==C.of)) goto L_124595fc;
  /* 12459562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459565 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459568 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1245956b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1245956e cmp dword ptr [0x12481ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12481ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459575 jle 0x12459593 */
  if ((C.zf||C.sf!=C.of)) goto L_12459593;
  /* 12459577 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1245957c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1245957f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12459585 push ecx */
  push32((uint32_t)(ECX));
  /* 12459586 call 0x1245d830 */
  push32(0x1245958bu); f_1245d830();
  /* 1245958b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245958e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12459591 jmp 0x124595b0 */
  goto L_124595b0;
L_12459593:;
  /* 12459593 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12459596 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1245959c mov eax, dword ptr [0x12481c98] */
  EAX = (r32((uint32_t)(0x12481c98)));
  /* 124595a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124595a3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124595a7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 124595ad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_124595b0:;
  /* 124595b0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124595b4 je 0x124595c4 */
  if (C.zf) goto L_124595c4;
  /* 124595b6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124595b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124595bf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 124595c2 jmp 0x124595cb */
  goto L_124595cb;
L_124595c4:;
  /* 124595c4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_124595cb:;
  /* 124595cb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 124595ce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 124595d1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 124595d5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124595d8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124595de push edx */
  push32((uint32_t)(EDX));
  /* 124595df push 0x1247f1ec */
  push32((uint32_t)(0x1247f1ecu));
  /* 124595e4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 124595e7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 124595ea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 124595ee push ecx */
  push32((uint32_t)(ECX));
  /* 124595ef call 0x1245d730 */
  push32(0x124595f4u); f_1245d730();
  /* 124595f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124595f7 jmp 0x12459532 */
  goto L_12459532;
L_124595fc:;
  /* 124595fc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 124595ff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12459604:;
  /* 12459604 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12459607 push eax */
  push32((uint32_t)(EAX));
  /* 12459608 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1245960b push ecx */
  push32((uint32_t)(ECX));
  /* 1245960c push 0x1247f1dc */
  push32((uint32_t)(0x1247f1dcu));
  /* 12459611 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459613 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459615 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459617 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459619 call 0x124568e0 */
  push32(0x1245961eu); f_124568e0();
  /* 1245961e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459621 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459624 jne 0x12459627 */
  if (!C.zf) goto L_12459627;
  /* 12459626 int3  */
  x86_unimpl("int3 @ 0x12459626");
L_12459627:;
  /* 12459627 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459629 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245962b jne 0x12459604 */
  if (!C.zf) goto L_12459604;
  /* 1245962d pop edi */
  EDI = (pop32());
  /* 1245962e pop esi */
  ESI = (pop32());
  /* 1245962f pop ebx */
  EBX = (pop32());
  /* 12459630 mov esp, ebp */
  ESP = (EBP);
  /* 12459632 pop ebp */
  EBP = (pop32());
  /* 12459633 ret  */
  ESPCHK(0x12459520u, _esp0);
  ESP += 4; return;
}

/* FUN_10009640 @ 0x12459640 (116 bytes, 46 insns) */
void f_12459640(void) {
  FTRACE(0x12459640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12459640 push ebp */
  push32((uint32_t)(EBP));
  /* 12459641 mov ebp, esp */
  EBP = (ESP);
  /* 12459643 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459646 push ebx */
  push32((uint32_t)(EBX));
  /* 12459647 push esi */
  push32((uint32_t)(ESI));
  /* 12459648 push edi */
  push32((uint32_t)(EDI));
  /* 12459649 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1245964c push eax */
  push32((uint32_t)(EAX));
  /* 1245964d call 0x12458fc0 */
  push32(0x12459652u); f_12458fc0();
  /* 12459652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459655 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459659 jne 0x12459674 */
  if (!C.zf) goto L_12459674;
  /* 1245965b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245965f jne 0x12459674 */
  if (!C.zf) goto L_12459674;
  /* 12459661 mov ecx, dword ptr [0x12481a84] */
  ECX = (r32((uint32_t)(0x12481a84)));
  /* 12459667 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1245966a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245966c je 0x124596ab */
  if (C.zf) goto L_124596ab;
  /* 1245966e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459672 je 0x124596ab */
  if (C.zf) goto L_124596ab;
L_12459674:;
  /* 12459674 push 0x1247f1f4 */
  push32((uint32_t)(0x1247f1f4u));
  /* 12459679 push 0x1247ebc0 */
  push32((uint32_t)(0x1247ebc0u));
  /* 1245967e push 0 */
  push32((uint32_t)(0x0u));
  /* 12459680 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459682 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459684 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459686 call 0x124568e0 */
  push32(0x1245968bu); f_124568e0();
  /* 1245968b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245968e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459691 jne 0x12459694 */
  if (!C.zf) goto L_12459694;
  /* 12459693 int3  */
  x86_unimpl("int3 @ 0x12459693");
L_12459694:;
  /* 12459694 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459696 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459698 jne 0x12459674 */
  if (!C.zf) goto L_12459674;
  /* 1245969a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245969c call 0x12459260 */
  push32(0x124596a1u); f_12459260();
  /* 124596a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124596a4 mov eax, 1 */
  EAX = (0x1u);
  /* 124596a9 jmp 0x124596ad */
  goto L_124596ad;
L_124596ab:;
  /* 124596ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124596ad:;
  /* 124596ad pop edi */
  EDI = (pop32());
  /* 124596ae pop esi */
  ESI = (pop32());
  /* 124596af pop ebx */
  EBX = (pop32());
  /* 124596b0 mov esp, ebp */
  ESP = (EBP);
  /* 124596b2 pop ebp */
  EBP = (pop32());
  /* 124596b3 ret  */
  ESPCHK(0x12459640u, _esp0);
  ESP += 4; return;
}

/* FUN_100096c0 @ 0x124596c0 (197 bytes, 79 insns) */
void f_124596c0(void) {
  FTRACE(0x124596c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124596c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124596c1 mov ebp, esp */
  EBP = (ESP);
  /* 124596c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124596c4 push ebx */
  push32((uint32_t)(EBX));
  /* 124596c5 push esi */
  push32((uint32_t)(ESI));
  /* 124596c6 push edi */
  push32((uint32_t)(EDI));
  /* 124596c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124596cb jne 0x124596d2 */
  if (!C.zf) goto L_124596d2;
  /* 124596cd jmp 0x1245977e */
  goto L_1245977e;
L_124596d2:;
  /* 124596d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124596d9 jmp 0x124596e4 */
  goto L_124596e4;
L_124596db:;
  /* 124596db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124596de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124596e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124596e4:;
  /* 124596e4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124596e8 jge 0x1245972e */
  if ((C.sf==C.of)) goto L_1245972e;
L_124596ea:;
  /* 124596ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124596ed mov edx, dword ptr [ecx*4 + 0x12481a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481a94)));
  /* 124596f4 push edx */
  push32((uint32_t)(EDX));
  /* 124596f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124596f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124596fb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 124596ff push edx */
  push32((uint32_t)(EDX));
  /* 12459700 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459706 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1245970a push edx */
  push32((uint32_t)(EDX));
  /* 1245970b push 0x1247f250 */
  push32((uint32_t)(0x1247f250u));
  /* 12459710 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459714 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459716 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459718 call 0x124568e0 */
  push32(0x1245971du); f_124568e0();
  /* 1245971d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459720 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459723 jne 0x12459726 */
  if (!C.zf) goto L_12459726;
  /* 12459725 int3  */
  x86_unimpl("int3 @ 0x12459725");
L_12459726:;
  /* 12459726 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245972a jne 0x124596ea */
  if (!C.zf) goto L_124596ea;
  /* 1245972c jmp 0x124596db */
  goto L_124596db;
L_1245972e:;
  /* 1245972e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459731 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12459734 push edx */
  push32((uint32_t)(EDX));
  /* 12459735 push 0x1247f22c */
  push32((uint32_t)(0x1247f22cu));
  /* 1245973a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245973c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245973e push 0 */
  push32((uint32_t)(0x0u));
  /* 12459740 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459742 call 0x124568e0 */
  push32(0x12459747u); f_124568e0();
  /* 12459747 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245974a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245974d jne 0x12459750 */
  if (!C.zf) goto L_12459750;
  /* 1245974f int3  */
  x86_unimpl("int3 @ 0x1245974f");
L_12459750:;
  /* 12459750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459754 jne 0x1245972e */
  if (!C.zf) goto L_1245972e;
L_12459756:;
  /* 12459756 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12459759 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1245975c push edx */
  push32((uint32_t)(EDX));
  /* 1245975d push 0x1247f20c */
  push32((uint32_t)(0x1247f20cu));
  /* 12459762 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459764 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459766 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245976a call 0x124568e0 */
  push32(0x1245976fu); f_124568e0();
  /* 1245976f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459772 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459775 jne 0x12459778 */
  if (!C.zf) goto L_12459778;
  /* 12459777 int3  */
  x86_unimpl("int3 @ 0x12459777");
L_12459778:;
  /* 12459778 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245977a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245977c jne 0x12459756 */
  if (!C.zf) goto L_12459756;
L_1245977e:;
  /* 1245977e pop edi */
  EDI = (pop32());
  /* 1245977f pop esi */
  ESI = (pop32());
  /* 12459780 pop ebx */
  EBX = (pop32());
  /* 12459781 mov esp, ebp */
  ESP = (EBP);
  /* 12459783 pop ebp */
  EBP = (pop32());
  /* 12459784 ret  */
  ESPCHK(0x124596c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009790 @ 0x12459790 (329 bytes, 102 insns) */
void f_12459790(void) {
  FTRACE(0x12459790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12459790 push ebp */
  push32((uint32_t)(EBP));
  /* 12459791 mov ebp, esp */
  EBP = (ESP);
  /* 12459793 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459796 cmp dword ptr [0x12485390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245979d jne 0x124597a4 */
  if (!C.zf) goto L_124597a4;
  /* 1245979f call 0x1245e0d0 */
  push32(0x124597a4u); f_1245e0d0();
L_124597a4:;
  /* 124597a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124597ab mov eax, dword ptr [0x12483844] */
  EAX = (r32((uint32_t)(0x12483844)));
  /* 124597b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124597b3:;
  /* 124597b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124597b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124597b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124597bb je 0x124597e9 */
  if (C.zf) goto L_124597e9;
  /* 124597bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124597c0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124597c3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124597c6 je 0x124597d1 */
  if (C.zf) goto L_124597d1;
  /* 124597c8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124597cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124597ce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124597d1:;
  /* 124597d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124597d4 push eax */
  push32((uint32_t)(EAX));
  /* 124597d5 call 0x1245a650 */
  push32(0x124597dau); f_1245a650();
  /* 124597da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124597dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124597e0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 124597e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124597e7 jmp 0x124597b3 */
  goto L_124597b3;
L_124597e9:;
  /* 124597e9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 124597eb push 0x1247f270 */
  push32((uint32_t)(0x1247f270u));
  /* 124597f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124597f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124597f5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 124597fc push ecx */
  push32((uint32_t)(ECX));
  /* 124597fd call 0x12457820 */
  push32(0x12459802u); f_12457820();
  /* 12459802 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459805 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12459808 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245980b mov dword ptr [0x12483878], edx */
  w32((uint32_t)(0x12483878), (EDX));
  /* 12459811 cmp dword ptr [0x12483878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459818 jne 0x12459824 */
  if (!C.zf) goto L_12459824;
  /* 1245981a push 9 */
  push32((uint32_t)(0x9u));
  /* 1245981c call 0x12456790 */
  push32(0x12459821u); f_12456790();
  /* 12459821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12459824:;
  /* 12459824 mov eax, dword ptr [0x12483844] */
  EAX = (r32((uint32_t)(0x12483844)));
  /* 12459829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245982c jmp 0x12459837 */
  goto L_12459837;
L_1245982e:;
  /* 1245982e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459831 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459834 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12459837:;
  /* 12459837 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245983a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1245983d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245983f je 0x124598a7 */
  if (C.zf) goto L_124598a7;
  /* 12459841 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459844 push ecx */
  push32((uint32_t)(ECX));
  /* 12459845 call 0x1245a650 */
  push32(0x1245984au); f_1245a650();
  /* 1245984a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245984d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459850 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12459853 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459856 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12459859 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245985c je 0x124598a5 */
  if (C.zf) goto L_124598a5;
  /* 1245985e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12459860 push 0x1247f270 */
  push32((uint32_t)(0x1247f270u));
  /* 12459865 push 2 */
  push32((uint32_t)(0x2u));
  /* 12459867 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245986a push ecx */
  push32((uint32_t)(ECX));
  /* 1245986b call 0x12457820 */
  push32(0x12459870u); f_12457820();
  /* 12459870 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459873 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459876 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12459878 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245987b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245987e jne 0x1245988a */
  if (!C.zf) goto L_1245988a;
  /* 12459880 push 9 */
  push32((uint32_t)(0x9u));
  /* 12459882 call 0x12456790 */
  push32(0x12459887u); f_12456790();
  /* 12459887 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245988a:;
  /* 1245988a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245988d push ecx */
  push32((uint32_t)(ECX));
  /* 1245988e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459891 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12459893 push eax */
  push32((uint32_t)(EAX));
  /* 12459894 call 0x1245a7d0 */
  push32(0x12459899u); f_1245a7d0();
  /* 12459899 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245989c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245989f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124598a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_124598a5:;
  /* 124598a5 jmp 0x1245982e */
  goto L_1245982e;
L_124598a7:;
  /* 124598a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124598a9 mov edx, dword ptr [0x12483844] */
  EDX = (r32((uint32_t)(0x12483844)));
  /* 124598af push edx */
  push32((uint32_t)(EDX));
  /* 124598b0 call 0x124582b0 */
  push32(0x124598b5u); f_124582b0();
  /* 124598b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124598b8 mov dword ptr [0x12483844], 0 */
  w32((uint32_t)(0x12483844), (0x0u));
  /* 124598c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124598c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124598cb mov dword ptr [0x12485380], 1 */
  w32((uint32_t)(0x12485380), (0x1u));
  /* 124598d5 mov esp, ebp */
  ESP = (EBP);
  /* 124598d7 pop ebp */
  EBP = (pop32());
  /* 124598d8 ret  */
  ESPCHK(0x12459790u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x124598e0 (216 bytes, 69 insns) */
void f_124598e0(void) {
  FTRACE(0x124598e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124598e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124598e1 mov ebp, esp */
  EBP = (ESP);
  /* 124598e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124598e6 cmp dword ptr [0x12485390], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12485390))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124598ed jne 0x124598f4 */
  if (!C.zf) goto L_124598f4;
  /* 124598ef call 0x1245e0d0 */
  push32(0x124598f4u); f_1245e0d0();
L_124598f4:;
  /* 124598f4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 124598f9 push 0x124838b4 */
  push32((uint32_t)(0x124838b4u));
  /* 124598fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12459900 call dword ptr [0x12486360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486360))), 0x12459906u);
  /* 12459906 mov dword ptr [0x12483888], 0x124838b4 */
  w32((uint32_t)(0x12483888), (0x124838b4u));
  /* 12459910 mov eax, dword ptr [0x124853ac] */
  EAX = (r32((uint32_t)(0x124853ac)));
  /* 12459915 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12459918 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245991a jne 0x12459927 */
  if (!C.zf) goto L_12459927;
  /* 1245991c mov edx, dword ptr [0x12483888] */
  EDX = (r32((uint32_t)(0x12483888)));
  /* 12459922 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12459925 jmp 0x1245992f */
  goto L_1245992f;
L_12459927:;
  /* 12459927 mov eax, dword ptr [0x124853ac] */
  EAX = (r32((uint32_t)(0x124853ac)));
  /* 1245992c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1245992f:;
  /* 1245992f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12459932 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12459935 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12459938 push edx */
  push32((uint32_t)(EDX));
  /* 12459939 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1245993c push eax */
  push32((uint32_t)(EAX));
  /* 1245993d push 0 */
  push32((uint32_t)(0x0u));
  /* 1245993f push 0 */
  push32((uint32_t)(0x0u));
  /* 12459941 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459944 push ecx */
  push32((uint32_t)(ECX));
  /* 12459945 call 0x124599c0 */
  push32(0x1245994au); f_124599c0();
  /* 1245994a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245994d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12459952 push 0x1247f27c */
  push32((uint32_t)(0x1247f27cu));
  /* 12459957 push 2 */
  push32((uint32_t)(0x2u));
  /* 12459959 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245995c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245995f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12459962 push ecx */
  push32((uint32_t)(ECX));
  /* 12459963 call 0x12457820 */
  push32(0x12459968u); f_12457820();
  /* 12459968 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245996b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245996e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459972 jne 0x1245997e */
  if (!C.zf) goto L_1245997e;
  /* 12459974 push 8 */
  push32((uint32_t)(0x8u));
  /* 12459976 call 0x12456790 */
  push32(0x1245997bu); f_12456790();
  /* 1245997b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245997e:;
  /* 1245997e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12459981 push edx */
  push32((uint32_t)(EDX));
  /* 12459982 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12459985 push eax */
  push32((uint32_t)(EAX));
  /* 12459986 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459989 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245998c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1245998f push eax */
  push32((uint32_t)(EAX));
  /* 12459990 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459993 push ecx */
  push32((uint32_t)(ECX));
  /* 12459994 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459997 push edx */
  push32((uint32_t)(EDX));
  /* 12459998 call 0x124599c0 */
  push32(0x1245999du); f_124599c0();
  /* 1245999d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124599a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124599a3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124599a6 mov dword ptr [0x1248386c], eax */
  w32((uint32_t)(0x1248386c), (EAX));
  /* 124599ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124599ae mov dword ptr [0x12483870], ecx */
  w32((uint32_t)(0x12483870), (ECX));
  /* 124599b4 mov esp, ebp */
  ESP = (EBP);
  /* 124599b6 pop ebp */
  EBP = (pop32());
  /* 124599b7 ret  */
  ESPCHK(0x124598e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099c0 @ 0x124599c0 (1060 bytes, 360 insns) */
void f_124599c0(void) {
  FTRACE(0x124599c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124599c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124599c1 mov ebp, esp */
  EBP = (ESP);
  /* 124599c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124599c6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 124599c9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 124599cf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124599d2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 124599d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124599db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124599de cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124599e2 je 0x124599f5 */
  if (C.zf) goto L_124599f5;
  /* 124599e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124599e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124599ea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 124599ec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124599ef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124599f2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_124599f5:;
  /* 124599f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124599f8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124599fb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124599fe jne 0x12459acd */
  if (!C.zf) goto L_12459acd;
L_12459a04:;
  /* 12459a04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459a07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459a0a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12459a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459a10 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12459a13 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459a16 je 0x12459a92 */
  if (C.zf) goto L_12459a92;
  /* 12459a18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459a1b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12459a1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459a20 je 0x12459a92 */
  if (C.zf) goto L_12459a92;
  /* 12459a22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459a25 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459a27 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12459a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459a2b mov al, byte ptr [edx + 0x124850e1] */
  AL = (r8((uint32_t)(EDX + 0x124850e1)));
  /* 12459a31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12459a34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459a36 je 0x12459a67 */
  if (C.zf) goto L_12459a67;
  /* 12459a38 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459a3b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12459a3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459a40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459a43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12459a45 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459a49 je 0x12459a67 */
  if (C.zf) goto L_12459a67;
  /* 12459a4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459a4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459a51 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12459a53 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12459a55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459a58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459a5b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12459a5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459a61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459a64 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12459a67:;
  /* 12459a67 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459a6a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12459a6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459a6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459a72 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12459a74 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459a78 je 0x12459a8d */
  if (C.zf) goto L_12459a8d;
  /* 12459a7a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459a7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459a80 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12459a82 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12459a84 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459a87 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459a8a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12459a8d:;
  /* 12459a8d jmp 0x12459a04 */
  goto L_12459a04;
L_12459a92:;
  /* 12459a92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459a95 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12459a97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459a9a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459a9d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12459a9f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459aa3 je 0x12459ab4 */
  if (C.zf) goto L_12459ab4;
  /* 12459aa5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459aa8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12459aab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459aae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459ab1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12459ab4:;
  /* 12459ab4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459ab7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12459aba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459abd jne 0x12459ac8 */
  if (!C.zf) goto L_12459ac8;
  /* 12459abf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459ac2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459ac5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12459ac8:;
  /* 12459ac8 jmp 0x12459b9c */
  goto L_12459b9c;
L_12459acd:;
  /* 12459acd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459ad0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12459ad2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459ad5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459ad8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12459ada cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459ade je 0x12459af3 */
  if (C.zf) goto L_12459af3;
  /* 12459ae0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459ae6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12459ae8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12459aea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459aed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459af0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12459af3:;
  /* 12459af3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459af6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12459af8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12459afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459afe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459b01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12459b04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459b07 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12459b0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459b0f mov dl, byte ptr [ecx + 0x124850e1] */
  DL = (r8((uint32_t)(ECX + 0x124850e1)));
  /* 12459b15 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12459b18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459b1a je 0x12459b4b */
  if (C.zf) goto L_12459b4b;
  /* 12459b1c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459b1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12459b21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459b24 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459b27 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12459b29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459b2d je 0x12459b42 */
  if (C.zf) goto L_12459b42;
  /* 12459b2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459b32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459b35 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12459b37 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12459b39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459b3c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459b3f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12459b42:;
  /* 12459b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459b45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459b48 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12459b4b:;
  /* 12459b4b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459b4e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12459b54 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459b57 je 0x12459b77 */
  if (C.zf) goto L_12459b77;
  /* 12459b59 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459b5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12459b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459b63 je 0x12459b77 */
  if (C.zf) goto L_12459b77;
  /* 12459b65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459b68 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12459b6e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459b71 jne 0x12459acd */
  if (!C.zf) goto L_12459acd;
L_12459b77:;
  /* 12459b77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459b7a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12459b80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459b82 jne 0x12459b8f */
  if (!C.zf) goto L_12459b8f;
  /* 12459b84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459b87 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459b8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12459b8d jmp 0x12459b9c */
  goto L_12459b9c;
L_12459b8f:;
  /* 12459b8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459b93 je 0x12459b9c */
  if (C.zf) goto L_12459b9c;
  /* 12459b95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459b98 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12459b9c:;
  /* 12459b9c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12459ba3:;
  /* 12459ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459ba6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12459ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459bab je 0x12459bce */
  if (C.zf) goto L_12459bce;
L_12459bad:;
  /* 12459bad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459bb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12459bb3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459bb6 je 0x12459bc3 */
  if (C.zf) goto L_12459bc3;
  /* 12459bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459bbb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12459bbe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459bc1 jne 0x12459bce */
  if (!C.zf) goto L_12459bce;
L_12459bc3:;
  /* 12459bc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459bc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459bc9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12459bcc jmp 0x12459bad */
  goto L_12459bad;
L_12459bce:;
  /* 12459bce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459bd1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12459bd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12459bd6 jne 0x12459bdd */
  if (!C.zf) goto L_12459bdd;
  /* 12459bd8 jmp 0x12459dbb */
  goto L_12459dbb;
L_12459bdd:;
  /* 12459bdd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459be1 je 0x12459bf4 */
  if (C.zf) goto L_12459bf4;
  /* 12459be3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12459be6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459be9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12459beb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12459bee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459bf1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12459bf4:;
  /* 12459bf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12459bf7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12459bf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459bfc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12459bff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12459c01:;
  /* 12459c01 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12459c08 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12459c0f:;
  /* 12459c0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459c12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12459c15 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459c18 jne 0x12459c2e */
  if (!C.zf) goto L_12459c2e;
  /* 12459c1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459c1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459c20 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12459c23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459c26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459c29 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12459c2c jmp 0x12459c0f */
  goto L_12459c0f;
L_12459c2e:;
  /* 12459c2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459c31 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12459c34 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459c37 jne 0x12459c8a */
  if (!C.zf) goto L_12459c8a;
  /* 12459c39 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459c3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459c3e mov ecx, 2 */
  ECX = (0x2u);
  /* 12459c43 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12459c45 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459c47 jne 0x12459c82 */
  if (!C.zf) goto L_12459c82;
  /* 12459c49 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459c4d je 0x12459c6f */
  if (C.zf) goto L_12459c6f;
  /* 12459c4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459c52 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12459c56 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459c59 jne 0x12459c66 */
  if (!C.zf) goto L_12459c66;
  /* 12459c5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459c5e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459c61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12459c64 jmp 0x12459c6d */
  goto L_12459c6d;
L_12459c66:;
  /* 12459c66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12459c6d:;
  /* 12459c6d jmp 0x12459c76 */
  goto L_12459c76;
L_12459c6f:;
  /* 12459c6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12459c76:;
  /* 12459c76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459c78 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459c7c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12459c7f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12459c82:;
  /* 12459c82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459c85 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12459c87 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12459c8a:;
  /* 12459c8a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459c8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459c90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459c93 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12459c96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12459c98 je 0x12459cbe */
  if (C.zf) goto L_12459cbe;
  /* 12459c9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459c9e je 0x12459caf */
  if (C.zf) goto L_12459caf;
  /* 12459ca0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459ca3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12459ca6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459ca9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459cac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12459caf:;
  /* 12459caf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459cb2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12459cb4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459cb7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459cba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12459cbc jmp 0x12459c8a */
  goto L_12459c8a;
L_12459cbe:;
  /* 12459cbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459cc1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12459cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459cc6 je 0x12459ce4 */
  if (C.zf) goto L_12459ce4;
  /* 12459cc8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459ccc jne 0x12459ce9 */
  if (!C.zf) goto L_12459ce9;
  /* 12459cce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459cd1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12459cd4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459cd7 je 0x12459ce4 */
  if (C.zf) goto L_12459ce4;
  /* 12459cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459cdc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12459cdf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459ce2 jne 0x12459ce9 */
  if (!C.zf) goto L_12459ce9;
L_12459ce4:;
  /* 12459ce4 jmp 0x12459d94 */
  goto L_12459d94;
L_12459ce9:;
  /* 12459ce9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459ced je 0x12459d86 */
  if (C.zf) goto L_12459d86;
  /* 12459cf3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459cf7 je 0x12459d4d */
  if (C.zf) goto L_12459d4d;
  /* 12459cf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459cfe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12459d00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12459d02 mov cl, byte ptr [eax + 0x124850e1] */
  CL = (r8((uint32_t)(EAX + 0x124850e1)));
  /* 12459d08 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12459d0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12459d0d je 0x12459d38 */
  if (C.zf) goto L_12459d38;
  /* 12459d0f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459d12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459d15 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12459d17 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12459d19 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459d1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459d1f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12459d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459d25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459d28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12459d2b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459d2e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12459d30 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459d33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459d36 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12459d38:;
  /* 12459d38 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459d3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459d3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12459d40 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12459d42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459d45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459d48 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12459d4b jmp 0x12459d79 */
  goto L_12459d79;
L_12459d4d:;
  /* 12459d4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459d52 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12459d54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12459d56 mov cl, byte ptr [eax + 0x124850e1] */
  CL = (r8((uint32_t)(EAX + 0x124850e1)));
  /* 12459d5c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12459d5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12459d61 je 0x12459d79 */
  if (C.zf) goto L_12459d79;
  /* 12459d63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459d66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459d69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12459d6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459d6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12459d71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459d74 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459d77 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12459d79:;
  /* 12459d79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459d7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12459d7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459d81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459d84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12459d86:;
  /* 12459d86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459d89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459d8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12459d8f jmp 0x12459c01 */
  goto L_12459c01;
L_12459d94:;
  /* 12459d94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459d98 je 0x12459da9 */
  if (C.zf) goto L_12459da9;
  /* 12459d9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459d9d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12459da0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12459da3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459da6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12459da9:;
  /* 12459da9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459dac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12459dae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459db1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12459db4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12459db6 jmp 0x12459ba3 */
  goto L_12459ba3;
L_12459dbb:;
  /* 12459dbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459dbf je 0x12459dd3 */
  if (C.zf) goto L_12459dd3;
  /* 12459dc1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12459dc4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12459dca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12459dcd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459dd0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12459dd3:;
  /* 12459dd3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12459dd6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12459dd8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459ddb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12459dde mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12459de0 mov esp, ebp */
  ESP = (EBP);
  /* 12459de2 pop ebp */
  EBP = (pop32());
  /* 12459de3 ret  */
  ESPCHK(0x124599c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009df0 @ 0x12459df0 (537 bytes, 173 insns) */
void f_12459df0(void) {
  FTRACE(0x12459df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12459df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12459df1 mov ebp, esp */
  EBP = (ESP);
  /* 12459df3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459df6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12459dfd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12459e04 cmp dword ptr [0x124839b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124839b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459e0b jne 0x12459e4a */
  if (!C.zf) goto L_12459e4a;
  /* 12459e0d call dword ptr [0x124863b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b8))), 0x12459e13u);
  /* 12459e13 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12459e16 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459e1a je 0x12459e28 */
  if (C.zf) goto L_12459e28;
  /* 12459e1c mov dword ptr [0x124839b8], 1 */
  w32((uint32_t)(0x124839b8), (0x1u));
  /* 12459e26 jmp 0x12459e4a */
  goto L_12459e4a;
L_12459e28:;
  /* 12459e28 call dword ptr [0x124863b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b4))), 0x12459e2eu);
  /* 12459e2e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12459e31 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459e35 je 0x12459e43 */
  if (C.zf) goto L_12459e43;
  /* 12459e37 mov dword ptr [0x124839b8], 2 */
  w32((uint32_t)(0x124839b8), (0x2u));
  /* 12459e41 jmp 0x12459e4a */
  goto L_12459e4a;
L_12459e43:;
  /* 12459e43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459e45 jmp 0x1245a005 */
  goto L_1245a005;
L_12459e4a:;
  /* 12459e4a cmp dword ptr [0x124839b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x124839b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459e51 jne 0x12459f4e */
  if (!C.zf) goto L_12459f4e;
  /* 12459e57 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459e5b jne 0x12459e73 */
  if (!C.zf) goto L_12459e73;
  /* 12459e5d call dword ptr [0x124863b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b8))), 0x12459e63u);
  /* 12459e63 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12459e66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459e6a jne 0x12459e73 */
  if (!C.zf) goto L_12459e73;
  /* 12459e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459e6e jmp 0x1245a005 */
  goto L_1245a005;
L_12459e73:;
  /* 12459e73 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12459e76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12459e79:;
  /* 12459e79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459e7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459e7e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12459e81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459e83 je 0x12459ea5 */
  if (C.zf) goto L_12459ea5;
  /* 12459e85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459e88 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459e8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12459e8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459e91 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12459e93 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12459e96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459e98 jne 0x12459ea3 */
  if (!C.zf) goto L_12459ea3;
  /* 12459e9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459e9d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459ea0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12459ea3:;
  /* 12459ea3 jmp 0x12459e79 */
  goto L_12459e79;
L_12459ea5:;
  /* 12459ea5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12459ea8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459eab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12459ead add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459eb0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12459eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459eb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459ebb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459ebe push edx */
  push32((uint32_t)(EDX));
  /* 12459ebf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12459ec2 push eax */
  push32((uint32_t)(EAX));
  /* 12459ec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459ec7 call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x12459ecdu);
  /* 12459ecd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12459ed0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459ed4 je 0x12459ef4 */
  if (C.zf) goto L_12459ef4;
  /* 12459ed6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12459ed8 push 0x1247f288 */
  push32((uint32_t)(0x1247f288u));
  /* 12459edd push 2 */
  push32((uint32_t)(0x2u));
  /* 12459edf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459ee2 push ecx */
  push32((uint32_t)(ECX));
  /* 12459ee3 call 0x12457820 */
  push32(0x12459ee8u); f_12457820();
  /* 12459ee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459eeb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12459eee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459ef2 jne 0x12459f05 */
  if (!C.zf) goto L_12459f05;
L_12459ef4:;
  /* 12459ef4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12459ef7 push edx */
  push32((uint32_t)(EDX));
  /* 12459ef8 call dword ptr [0x124863a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863a0))), 0x12459efeu);
  /* 12459efe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459f00 jmp 0x1245a005 */
  goto L_1245a005;
L_12459f05:;
  /* 12459f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459f09 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459f0c push eax */
  push32((uint32_t)(EAX));
  /* 12459f0d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12459f10 push ecx */
  push32((uint32_t)(ECX));
  /* 12459f11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12459f14 push edx */
  push32((uint32_t)(EDX));
  /* 12459f15 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12459f18 push eax */
  push32((uint32_t)(EAX));
  /* 12459f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12459f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12459f1d call dword ptr [0x124863b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b0))), 0x12459f23u);
  /* 12459f23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12459f25 jne 0x12459f3c */
  if (!C.zf) goto L_12459f3c;
  /* 12459f27 push 2 */
  push32((uint32_t)(0x2u));
  /* 12459f29 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12459f2c push ecx */
  push32((uint32_t)(ECX));
  /* 12459f2d call 0x124582b0 */
  push32(0x12459f32u); f_124582b0();
  /* 12459f32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459f35 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12459f3c:;
  /* 12459f3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12459f3f push edx */
  push32((uint32_t)(EDX));
  /* 12459f40 call dword ptr [0x124863a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863a0))), 0x12459f46u);
  /* 12459f46 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12459f49 jmp 0x1245a005 */
  goto L_1245a005;
L_12459f4e:;
  /* 12459f4e cmp dword ptr [0x124839b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x124839b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459f55 jne 0x1245a003 */
  if (!C.zf) goto L_1245a003;
  /* 12459f5b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459f5f jne 0x12459f77 */
  if (!C.zf) goto L_12459f77;
  /* 12459f61 call dword ptr [0x124863b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863b4))), 0x12459f67u);
  /* 12459f67 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12459f6a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459f6e jne 0x12459f77 */
  if (!C.zf) goto L_12459f77;
  /* 12459f70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459f72 jmp 0x1245a005 */
  goto L_1245a005;
L_12459f77:;
  /* 12459f77 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12459f7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12459f7d:;
  /* 12459f7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459f80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12459f83 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459f85 je 0x12459fa5 */
  if (C.zf) goto L_12459fa5;
  /* 12459f87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459f8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459f8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12459f90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459f93 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12459f96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12459f98 jne 0x12459fa3 */
  if (!C.zf) goto L_12459fa3;
  /* 12459f9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459f9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459fa0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12459fa3:;
  /* 12459fa3 jmp 0x12459f7d */
  goto L_12459f7d;
L_12459fa5:;
  /* 12459fa5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459fa8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12459fab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12459fae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12459fb1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12459fb6 push 0x1247f288 */
  push32((uint32_t)(0x1247f288u));
  /* 12459fbb push 2 */
  push32((uint32_t)(0x2u));
  /* 12459fbd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459fc0 push edx */
  push32((uint32_t)(EDX));
  /* 12459fc1 call 0x12457820 */
  push32(0x12459fc6u); f_12457820();
  /* 12459fc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459fc9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12459fcc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12459fd0 jne 0x12459fe0 */
  if (!C.zf) goto L_12459fe0;
  /* 12459fd2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12459fd5 push eax */
  push32((uint32_t)(EAX));
  /* 12459fd6 call dword ptr [0x124863ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863ac))), 0x12459fdcu);
  /* 12459fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12459fde jmp 0x1245a005 */
  goto L_1245a005;
L_12459fe0:;
  /* 12459fe0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12459fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12459fe4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12459fe7 push edx */
  push32((uint32_t)(EDX));
  /* 12459fe8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12459feb push eax */
  push32((uint32_t)(EAX));
  /* 12459fec call 0x1245e100 */
  push32(0x12459ff1u); f_1245e100();
  /* 12459ff1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12459ff4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12459ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 12459ff8 call dword ptr [0x124863ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863ac))), 0x12459ffeu);
  /* 12459ffe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a001 jmp 0x1245a005 */
  goto L_1245a005;
L_1245a003:;
  /* 1245a003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245a005:;
  /* 1245a005 mov esp, ebp */
  ESP = (EBP);
  /* 1245a007 pop ebp */
  EBP = (pop32());
  /* 1245a008 ret  */
  ESPCHK(0x12459df0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a010 @ 0x1245a010 (77 bytes, 25 insns) */
void f_1245a010(void) {
  FTRACE(0x1245a010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a010 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a011 mov ebp, esp */
  EBP = (ESP);
  /* 1245a013 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a015 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1245a01a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245a01c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a020 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1245a023 push eax */
  push32((uint32_t)(EAX));
  /* 1245a024 call dword ptr [0x12486378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486378))), 0x1245a02au);
  /* 1245a02a mov dword ptr [0x1248520c], eax */
  w32((uint32_t)(0x1248520c), (EAX));
  /* 1245a02f cmp dword ptr [0x1248520c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1248520c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a036 jne 0x1245a03c */
  if (!C.zf) goto L_1245a03c;
  /* 1245a038 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245a03a jmp 0x1245a05b */
  goto L_1245a05b;
L_1245a03c:;
  /* 1245a03c call 0x1245bac0 */
  push32(0x1245a041u); f_1245bac0();
  /* 1245a041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245a043 jne 0x1245a056 */
  if (!C.zf) goto L_1245a056;
  /* 1245a045 mov ecx, dword ptr [0x1248520c] */
  ECX = (r32((uint32_t)(0x1248520c)));
  /* 1245a04b push ecx */
  push32((uint32_t)(ECX));
  /* 1245a04c call dword ptr [0x124863bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863bc))), 0x1245a052u);
  /* 1245a052 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245a054 jmp 0x1245a05b */
  goto L_1245a05b;
L_1245a056:;
  /* 1245a056 mov eax, 1 */
  EAX = (0x1u);
L_1245a05b:;
  /* 1245a05b pop ebp */
  EBP = (pop32());
  /* 1245a05c ret  */
  ESPCHK(0x1245a010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a060 @ 0x1245a060 (156 bytes, 48 insns) */
void f_1245a060(void) {
  FTRACE(0x1245a060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a060 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a061 mov ebp, esp */
  EBP = (ESP);
  /* 1245a063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a066 mov eax, dword ptr [0x12485208] */
  EAX = (r32((uint32_t)(0x12485208)));
  /* 1245a06b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245a06e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245a075 jmp 0x1245a080 */
  goto L_1245a080;
L_1245a077:;
  /* 1245a077 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a07a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a07d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1245a080:;
  /* 1245a080 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a083 cmp edx, dword ptr [0x12485204] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12485204))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a089 jge 0x1245a0d6 */
  if ((C.sf==C.of)) goto L_1245a0d6;
  /* 1245a08b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1245a090 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1245a095 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a098 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1245a09b push ecx */
  push32((uint32_t)(ECX));
  /* 1245a09c call dword ptr [0x12486330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486330))), 0x1245a0a2u);
  /* 1245a0a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1245a0a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a0a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a0ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1245a0af push eax */
  push32((uint32_t)(EAX));
  /* 1245a0b0 call dword ptr [0x12486330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486330))), 0x1245a0b6u);
  /* 1245a0b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a0b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1245a0bc push edx */
  push32((uint32_t)(EDX));
  /* 1245a0bd push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a0bf mov eax, dword ptr [0x1248520c] */
  EAX = (r32((uint32_t)(0x1248520c)));
  /* 1245a0c4 push eax */
  push32((uint32_t)(EAX));
  /* 1245a0c5 call dword ptr [0x12486334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486334))), 0x1245a0cbu);
  /* 1245a0cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a0ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a0d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245a0d4 jmp 0x1245a077 */
  goto L_1245a077;
L_1245a0d6:;
  /* 1245a0d6 mov edx, dword ptr [0x12485208] */
  EDX = (r32((uint32_t)(0x12485208)));
  /* 1245a0dc push edx */
  push32((uint32_t)(EDX));
  /* 1245a0dd push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a0df mov eax, dword ptr [0x1248520c] */
  EAX = (r32((uint32_t)(0x1248520c)));
  /* 1245a0e4 push eax */
  push32((uint32_t)(EAX));
  /* 1245a0e5 call dword ptr [0x12486334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486334))), 0x1245a0ebu);
  /* 1245a0eb mov ecx, dword ptr [0x1248520c] */
  ECX = (r32((uint32_t)(0x1248520c)));
  /* 1245a0f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a0f2 call dword ptr [0x124863bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124863bc))), 0x1245a0f8u);
  /* 1245a0f8 mov esp, ebp */
  ESP = (EBP);
  /* 1245a0fa pop ebp */
  EBP = (pop32());
  /* 1245a0fb ret  */
  ESPCHK(0x1245a060u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x1245a100 (73 bytes, 19 insns) */
void f_1245a100(void) {
  FTRACE(0x1245a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a100 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a101 mov ebp, esp */
  EBP = (ESP);
  /* 1245a103 cmp dword ptr [0x1248384c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1248384c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a10a je 0x1245a11e */
  if (C.zf) goto L_1245a11e;
  /* 1245a10c cmp dword ptr [0x1248384c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1248384c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a113 jne 0x1245a147 */
  if (!C.zf) goto L_1245a147;
  /* 1245a115 cmp dword ptr [0x12483850], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483850))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a11c jne 0x1245a147 */
  if (!C.zf) goto L_1245a147;
L_1245a11e:;
  /* 1245a11e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1245a123 call 0x1245a150 */
  push32(0x1245a128u); f_1245a150();
  /* 1245a128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a12b cmp dword ptr [0x124839bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124839bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a132 je 0x1245a13a */
  if (C.zf) goto L_1245a13a;
  /* 1245a134 call dword ptr [0x124839bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124839bc))), 0x1245a13au);
L_1245a13a:;
  /* 1245a13a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1245a13f call 0x1245a150 */
  push32(0x1245a144u); f_1245a150();
  /* 1245a144 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245a147:;
  /* 1245a147 pop ebp */
  EBP = (pop32());
  /* 1245a148 ret  */
  ESPCHK(0x1245a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a150 @ 0x1245a150 (447 bytes, 131 insns) */
void f_1245a150(void) {
  FTRACE(0x1245a150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a150 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a151 mov ebp, esp */
  EBP = (ESP);
  /* 1245a153 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a159 push ebx */
  push32((uint32_t)(EBX));
  /* 1245a15a push esi */
  push32((uint32_t)(ESI));
  /* 1245a15b push edi */
  push32((uint32_t)(EDI));
  /* 1245a15c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1245a163 jmp 0x1245a16e */
  goto L_1245a16e;
L_1245a165:;
  /* 1245a165 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a168 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a16b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1245a16e:;
  /* 1245a16e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a172 jae 0x1245a187 */
  if (!C.cf) goto L_1245a187;
  /* 1245a174 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a177 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a17a cmp edx, dword ptr [ecx*8 + 0x12481ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12481ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a181 jne 0x1245a185 */
  if (!C.zf) goto L_1245a185;
  /* 1245a183 jmp 0x1245a187 */
  goto L_1245a187;
L_1245a185:;
  /* 1245a185 jmp 0x1245a165 */
  goto L_1245a165;
L_1245a187:;
  /* 1245a187 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a18a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a18d cmp ecx, dword ptr [eax*8 + 0x12481ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12481ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a194 jne 0x1245a308 */
  if (!C.zf) goto L_1245a308;
  /* 1245a19a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a1a1 je 0x1245a1c4 */
  if (C.zf) goto L_1245a1c4;
  /* 1245a1a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a1a6 mov eax, dword ptr [edx*8 + 0x12481ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12481ab4)));
  /* 1245a1ad push eax */
  push32((uint32_t)(EAX));
  /* 1245a1ae push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a1b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a1b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a1b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245a1b6 call 0x124568e0 */
  push32(0x1245a1bbu); f_124568e0();
  /* 1245a1bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a1be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a1c1 jne 0x1245a1c4 */
  if (!C.zf) goto L_1245a1c4;
  /* 1245a1c3 int3  */
  x86_unimpl("int3 @ 0x1245a1c3");
L_1245a1c4:;
  /* 1245a1c4 cmp dword ptr [0x1248384c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1248384c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a1cb je 0x1245a1df */
  if (C.zf) goto L_1245a1df;
  /* 1245a1cd cmp dword ptr [0x1248384c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1248384c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a1d4 jne 0x1245a218 */
  if (!C.zf) goto L_1245a218;
  /* 1245a1d6 cmp dword ptr [0x12483850], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12483850))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a1dd jne 0x1245a218 */
  if (!C.zf) goto L_1245a218;
L_1245a1df:;
  /* 1245a1df push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a1e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1245a1e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a1e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a1e8 mov eax, dword ptr [edx*8 + 0x12481ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12481ab4)));
  /* 1245a1ef push eax */
  push32((uint32_t)(EAX));
  /* 1245a1f0 call 0x1245a650 */
  push32(0x1245a1f5u); f_1245a650();
  /* 1245a1f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a1f8 push eax */
  push32((uint32_t)(EAX));
  /* 1245a1f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a1fc mov edx, dword ptr [ecx*8 + 0x12481ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12481ab4)));
  /* 1245a203 push edx */
  push32((uint32_t)(EDX));
  /* 1245a204 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1245a206 call dword ptr [0x12486344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486344))), 0x1245a20cu);
  /* 1245a20c push eax */
  push32((uint32_t)(EAX));
  /* 1245a20d call dword ptr [0x12486348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486348))), 0x1245a213u);
  /* 1245a213 jmp 0x1245a308 */
  goto L_1245a308;
L_1245a218:;
  /* 1245a218 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a21f je 0x1245a308 */
  if (C.zf) goto L_1245a308;
  /* 1245a225 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1245a22a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 1245a230 push eax */
  push32((uint32_t)(EAX));
  /* 1245a231 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a233 call dword ptr [0x12486360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486360))), 0x1245a239u);
  /* 1245a239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245a23b jne 0x1245a251 */
  if (!C.zf) goto L_1245a251;
  /* 1245a23d push 0x1247eaf0 */
  push32((uint32_t)(0x1247eaf0u));
  /* 1245a242 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1245a248 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a249 call 0x1245a7d0 */
  push32(0x1245a24eu); f_1245a7d0();
  /* 1245a24e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245a251:;
  /* 1245a251 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 1245a257 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1245a25a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a25d push eax */
  push32((uint32_t)(EAX));
  /* 1245a25e call 0x1245a650 */
  push32(0x1245a263u); f_1245a650();
  /* 1245a263 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a266 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a269 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a26c jbe 0x1245a29a */
  if ((C.cf||C.zf)) goto L_1245a29a;
  /* 1245a26e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1245a274 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a275 call 0x1245a650 */
  push32(0x1245a27au); f_1245a650();
  /* 1245a27a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a27d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a280 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 1245a284 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245a287 push 3 */
  push32((uint32_t)(0x3u));
  /* 1245a289 push 0x1247eaec */
  push32((uint32_t)(0x1247eaecu));
  /* 1245a28e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a291 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a292 call 0x1245b040 */
  push32(0x1245a297u); f_1245b040();
  /* 1245a297 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245a29a:;
  /* 1245a29a push 0x1247f544 */
  push32((uint32_t)(0x1247f544u));
  /* 1245a29f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1245a2a5 push edx */
  push32((uint32_t)(EDX));
  /* 1245a2a6 call 0x1245a7d0 */
  push32(0x1245a2abu); f_1245a7d0();
  /* 1245a2ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a2ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a2b1 push eax */
  push32((uint32_t)(EAX));
  /* 1245a2b2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 1245a2b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a2b9 call 0x1245a7e0 */
  push32(0x1245a2beu); f_1245a7e0();
  /* 1245a2be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a2c1 push 0x1247ea64 */
  push32((uint32_t)(0x1247ea64u));
  /* 1245a2c6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1245a2cc push edx */
  push32((uint32_t)(EDX));
  /* 1245a2cd call 0x1245a7e0 */
  push32(0x1245a2d2u); f_1245a7e0();
  /* 1245a2d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a2d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a2d8 mov ecx, dword ptr [eax*8 + 0x12481ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12481ab4)));
  /* 1245a2df push ecx */
  push32((uint32_t)(ECX));
  /* 1245a2e0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1245a2e6 push edx */
  push32((uint32_t)(EDX));
  /* 1245a2e7 call 0x1245a7e0 */
  push32(0x1245a2ecu); f_1245a7e0();
  /* 1245a2ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a2ef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1245a2f4 push 0x1247f51c */
  push32((uint32_t)(0x1247f51cu));
  /* 1245a2f9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1245a2ff push eax */
  push32((uint32_t)(EAX));
  /* 1245a300 call 0x1245af80 */
  push32(0x1245a305u); f_1245af80();
  /* 1245a305 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245a308:;
  /* 1245a308 pop edi */
  EDI = (pop32());
  /* 1245a309 pop esi */
  ESI = (pop32());
  /* 1245a30a pop ebx */
  EBX = (pop32());
  /* 1245a30b mov esp, ebp */
  ESP = (EBP);
  /* 1245a30d pop ebp */
  EBP = (pop32());
  /* 1245a30e ret  */
  ESPCHK(0x1245a150u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x1245a310 (80 bytes, 27 insns) */
void f_1245a310(void) {
  FTRACE(0x1245a310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a310 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a311 mov ebp, esp */
  EBP = (ESP);
  /* 1245a313 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a314 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245a31b jmp 0x1245a326 */
  goto L_1245a326;
L_1245a31d:;
  /* 1245a31d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a320 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a323 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245a326:;
  /* 1245a326 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a32a jae 0x1245a33f */
  if (!C.cf) goto L_1245a33f;
  /* 1245a32c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a32f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a332 cmp edx, dword ptr [ecx*8 + 0x12481ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12481ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a339 jne 0x1245a33d */
  if (!C.zf) goto L_1245a33d;
  /* 1245a33b jmp 0x1245a33f */
  goto L_1245a33f;
L_1245a33d:;
  /* 1245a33d jmp 0x1245a31d */
  goto L_1245a31d;
L_1245a33f:;
  /* 1245a33f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a345 cmp ecx, dword ptr [eax*8 + 0x12481ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12481ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a34c jne 0x1245a35a */
  if (!C.zf) goto L_1245a35a;
  /* 1245a34e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a351 mov eax, dword ptr [edx*8 + 0x12481ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12481ab4)));
  /* 1245a358 jmp 0x1245a35c */
  goto L_1245a35c;
L_1245a35a:;
  /* 1245a35a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245a35c:;
  /* 1245a35c mov esp, ebp */
  ESP = (EBP);
  /* 1245a35e pop ebp */
  EBP = (pop32());
  /* 1245a35f ret  */
  ESPCHK(0x1245a310u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x1245a360 (66 bytes, 28 insns) */
void f_1245a360(void) {
  FTRACE(0x1245a360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a360 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a361 mov ebp, esp */
  EBP = (ESP);
  /* 1245a363 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a367 jne 0x1245a387 */
  if (!C.zf) goto L_1245a387;
  /* 1245a369 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a36d jge 0x1245a387 */
  if ((C.sf==C.of)) goto L_1245a387;
  /* 1245a36f push 1 */
  push32((uint32_t)(0x1u));
  /* 1245a371 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a374 push eax */
  push32((uint32_t)(EAX));
  /* 1245a375 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a378 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a379 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a37c push edx */
  push32((uint32_t)(EDX));
  /* 1245a37d call 0x1245a3b0 */
  push32(0x1245a382u); f_1245a3b0();
  /* 1245a382 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a385 jmp 0x1245a39d */
  goto L_1245a39d;
L_1245a387:;
  /* 1245a387 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a389 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a38c push eax */
  push32((uint32_t)(EAX));
  /* 1245a38d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a390 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a394 push edx */
  push32((uint32_t)(EDX));
  /* 1245a395 call 0x1245a3b0 */
  push32(0x1245a39au); f_1245a3b0();
  /* 1245a39a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245a39d:;
  /* 1245a39d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a3a0 pop ebp */
  EBP = (pop32());
  /* 1245a3a1 ret  */
  ESPCHK(0x1245a360u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x1245a3b0 (194 bytes, 71 insns) */
void f_1245a3b0(void) {
  FTRACE(0x1245a3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a3b1 mov ebp, esp */
  EBP = (ESP);
  /* 1245a3b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a3b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a3b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245a3bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a3c0 je 0x1245a3d9 */
  if (C.zf) goto L_1245a3d9;
  /* 1245a3c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a3c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1245a3c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a3cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a3ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245a3d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a3d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245a3d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1245a3d9:;
  /* 1245a3d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a3dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1245a3df:;
  /* 1245a3df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a3e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245a3e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1245a3e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1245a3ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a3ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245a3ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1245a3f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1245a3f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a3f9 jbe 0x1245a411 */
  if ((C.cf||C.zf)) goto L_1245a411;
  /* 1245a3fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a3fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a404 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1245a406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a409 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a40c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245a40f jmp 0x1245a425 */
  goto L_1245a425;
L_1245a411:;
  /* 1245a411 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a414 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a41a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1245a41c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a41f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a422 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1245a425:;
  /* 1245a425 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a429 ja 0x1245a3df */
  if ((!C.cf&&!C.zf)) goto L_1245a3df;
  /* 1245a42b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a42e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1245a431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a434 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a437 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245a43a:;
  /* 1245a43a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a43d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245a43f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1245a442 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a445 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a448 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245a44a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1245a44c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a44f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1245a452 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1245a454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a457 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a45a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245a45d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a460 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a463 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245a466 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a469 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a46c jb 0x1245a43a */
  if (C.cf) goto L_1245a43a;
  /* 1245a46e mov esp, ebp */
  ESP = (EBP);
  /* 1245a470 pop ebp */
  EBP = (pop32());
  /* 1245a471 ret  */
  ESPCHK(0x1245a3b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x1245a480 (63 bytes, 24 insns) */
void f_1245a480(void) {
  FTRACE(0x1245a480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a480 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a481 mov ebp, esp */
  EBP = (ESP);
  /* 1245a483 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a484 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a488 jne 0x1245a499 */
  if (!C.zf) goto L_1245a499;
  /* 1245a48a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a48e jge 0x1245a499 */
  if ((C.sf==C.of)) goto L_1245a499;
  /* 1245a490 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1245a497 jmp 0x1245a4a0 */
  goto L_1245a4a0;
L_1245a499:;
  /* 1245a499 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1245a4a0:;
  /* 1245a4a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a4a3 push eax */
  push32((uint32_t)(EAX));
  /* 1245a4a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a4a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a4a8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a4ab push edx */
  push32((uint32_t)(EDX));
  /* 1245a4ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a4af push eax */
  push32((uint32_t)(EAX));
  /* 1245a4b0 call 0x1245a3b0 */
  push32(0x1245a4b5u); f_1245a3b0();
  /* 1245a4b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a4b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a4bb mov esp, ebp */
  ESP = (EBP);
  /* 1245a4bd pop ebp */
  EBP = (pop32());
  /* 1245a4be ret  */
  ESPCHK(0x1245a480u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x1245a4c0 (30 bytes, 14 insns) */
void f_1245a4c0(void) {
  FTRACE(0x1245a4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1245a4c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a4c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a4c8 push eax */
  push32((uint32_t)(EAX));
  /* 1245a4c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a4cc push ecx */
  push32((uint32_t)(ECX));
  /* 1245a4cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a4d0 push edx */
  push32((uint32_t)(EDX));
  /* 1245a4d1 call 0x1245a3b0 */
  push32(0x1245a4d6u); f_1245a3b0();
  /* 1245a4d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a4d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a4dc pop ebp */
  EBP = (pop32());
  /* 1245a4dd ret  */
  ESPCHK(0x1245a4c0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x1245a4e0 (72 bytes, 28 insns) */
void f_1245a4e0(void) {
  FTRACE(0x1245a4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1245a4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a4e4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a4e8 jne 0x1245a501 */
  if (!C.zf) goto L_1245a501;
  /* 1245a4ea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a4ee jg 0x1245a501 */
  if ((!C.zf&&C.sf==C.of)) goto L_1245a501;
  /* 1245a4f0 jl 0x1245a4f8 */
  if ((C.sf!=C.of)) goto L_1245a4f8;
  /* 1245a4f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a4f6 jae 0x1245a501 */
  if (!C.cf) goto L_1245a501;
L_1245a4f8:;
  /* 1245a4f8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1245a4ff jmp 0x1245a508 */
  goto L_1245a508;
L_1245a501:;
  /* 1245a501 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1245a508:;
  /* 1245a508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a50b push eax */
  push32((uint32_t)(EAX));
  /* 1245a50c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245a50f push ecx */
  push32((uint32_t)(ECX));
  /* 1245a510 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a513 push edx */
  push32((uint32_t)(EDX));
  /* 1245a514 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a517 push eax */
  push32((uint32_t)(EAX));
  /* 1245a518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a51b push ecx */
  push32((uint32_t)(ECX));
  /* 1245a51c call 0x1245a530 */
  push32(0x1245a521u); f_1245a530();
  /* 1245a521 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a524 mov esp, ebp */
  ESP = (EBP);
  /* 1245a526 pop ebp */
  EBP = (pop32());
  /* 1245a527 ret  */
  ESPCHK(0x1245a4e0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x1245a530 (242 bytes, 91 insns) */
void f_1245a530(void) {
  FTRACE(0x1245a530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a530 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a531 mov ebp, esp */
  EBP = (ESP);
  /* 1245a533 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a536 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a539 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245a53c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a540 je 0x1245a564 */
  if (C.zf) goto L_1245a564;
  /* 1245a542 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a545 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1245a548 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a54b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a54e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245a551 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a554 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245a556 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a559 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a55c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245a55e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1245a561 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1245a564:;
  /* 1245a564 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a567 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1245a56a:;
  /* 1245a56a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245a56d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245a56f push ecx */
  push32((uint32_t)(ECX));
  /* 1245a570 push eax */
  push32((uint32_t)(EAX));
  /* 1245a571 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a574 push edx */
  push32((uint32_t)(EDX));
  /* 1245a575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a578 push eax */
  push32((uint32_t)(EAX));
  /* 1245a579 call 0x1245e4b0 */
  push32(0x1245a57eu); f_1245e4b0();
  /* 1245a57e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245a581 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245a584 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245a586 push edx */
  push32((uint32_t)(EDX));
  /* 1245a587 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a588 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a58b push eax */
  push32((uint32_t)(EAX));
  /* 1245a58c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a58f push ecx */
  push32((uint32_t)(ECX));
  /* 1245a590 call 0x1245e440 */
  push32(0x1245a595u); f_1245e440();
  /* 1245a595 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1245a598 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1245a59b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a59f jbe 0x1245a5b7 */
  if ((C.cf||C.zf)) goto L_1245a5b7;
  /* 1245a5a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a5a4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a5a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a5aa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1245a5ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a5af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a5b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245a5b5 jmp 0x1245a5cb */
  goto L_1245a5cb;
L_1245a5b7:;
  /* 1245a5b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245a5ba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a5bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a5c0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1245a5c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a5c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a5c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1245a5cb:;
  /* 1245a5cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a5cf ja 0x1245a56a */
  if ((!C.cf&&!C.zf)) goto L_1245a56a;
  /* 1245a5d1 jb 0x1245a5d9 */
  if (C.cf) goto L_1245a5d9;
  /* 1245a5d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a5d7 ja 0x1245a56a */
  if ((!C.cf&&!C.zf)) goto L_1245a56a;
L_1245a5d9:;
  /* 1245a5d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a5dc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1245a5df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a5e2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a5e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245a5e8:;
  /* 1245a5e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a5eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245a5ed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1245a5f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a5f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a5f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245a5f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1245a5fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a5fd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1245a600 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1245a602 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245a605 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a608 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245a60b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a60e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a611 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245a614 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245a617 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a61a jb 0x1245a5e8 */
  if (C.cf) goto L_1245a5e8;
  /* 1245a61c mov esp, ebp */
  ESP = (EBP);
  /* 1245a61e pop ebp */
  EBP = (pop32());
  /* 1245a61f ret 0x14 */
  ESPCHK(0x1245a530u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1245a630 (31 bytes, 15 insns) */
void f_1245a630(void) {
  FTRACE(0x1245a630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a630 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a631 mov ebp, esp */
  EBP = (ESP);
  /* 1245a633 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a635 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245a638 push eax */
  push32((uint32_t)(EAX));
  /* 1245a639 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a63c push ecx */
  push32((uint32_t)(ECX));
  /* 1245a63d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a640 push edx */
  push32((uint32_t)(EDX));
  /* 1245a641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a644 push eax */
  push32((uint32_t)(EAX));
  /* 1245a645 call 0x1245a530 */
  push32(0x1245a64au); f_1245a530();
  /* 1245a64a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a64d pop ebp */
  EBP = (pop32());
  /* 1245a64e ret  */
  ESPCHK(0x1245a630u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1245a650 (123 bytes, 44 insns) */
void f_1245a650(void) {
  FTRACE(0x1245a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a650 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1245a654 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1245a65a je 0x1245a670 */
  if (C.zf) goto L_1245a670;
L_1245a65c:;
  /* 1245a65c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1245a65e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1245a65f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1245a661 je 0x1245a6a3 */
  if (C.zf) goto L_1245a6a3;
  /* 1245a663 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1245a669 jne 0x1245a65c */
  if (!C.zf) goto L_1245a65c;
  /* 1245a66b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1245a670:;
  /* 1245a670 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1245a672 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1245a677 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a679 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245a67c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245a67e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a681 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1245a686 je 0x1245a670 */
  if (C.zf) goto L_1245a670;
  /* 1245a688 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1245a68b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1245a68d je 0x1245a6c1 */
  if (C.zf) goto L_1245a6c1;
  /* 1245a68f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1245a691 je 0x1245a6b7 */
  if (C.zf) goto L_1245a6b7;
  /* 1245a693 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1245a698 je 0x1245a6ad */
  if (C.zf) goto L_1245a6ad;
  /* 1245a69a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1245a69f je 0x1245a6a3 */
  if (C.zf) goto L_1245a6a3;
  /* 1245a6a1 jmp 0x1245a670 */
  goto L_1245a670;
L_1245a6a3:;
  /* 1245a6a3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1245a6a6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1245a6aa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a6ac ret  */
  ESPCHK(0x1245a650u, _esp0);
  ESP += 4; return;
L_1245a6ad:;
  /* 1245a6ad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1245a6b0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1245a6b4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a6b6 ret  */
  ESPCHK(0x1245a650u, _esp0);
  ESP += 4; return;
L_1245a6b7:;
  /* 1245a6b7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1245a6ba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1245a6be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a6c0 ret  */
  ESPCHK(0x1245a650u, _esp0);
  ESP += 4; return;
L_1245a6c1:;
  /* 1245a6c1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1245a6c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1245a6c8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a6ca ret  */
  ESPCHK(0x1245a650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6d0 @ 0x1245a6d0 (249 bytes, 93 insns) */
void f_1245a6d0(void) {
  FTRACE(0x1245a6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1245a6d3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a6d6 push ebx */
  push32((uint32_t)(EBX));
  /* 1245a6d7 push esi */
  push32((uint32_t)(ESI));
  /* 1245a6d8 push edi */
  push32((uint32_t)(EDI));
  /* 1245a6d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1245a6dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1245a6df lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1245a6e2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1245a6e5:;
  /* 1245a6e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a6e9 jne 0x1245a709 */
  if (!C.zf) goto L_1245a709;
  /* 1245a6eb push 0x1247f57c */
  push32((uint32_t)(0x1247f57cu));
  /* 1245a6f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a6f2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1245a6f4 push 0x1247f570 */
  push32((uint32_t)(0x1247f570u));
  /* 1245a6f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245a6fb call 0x124568e0 */
  push32(0x1245a700u); f_124568e0();
  /* 1245a700 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a703 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a706 jne 0x1245a709 */
  if (!C.zf) goto L_1245a709;
  /* 1245a708 int3  */
  x86_unimpl("int3 @ 0x1245a708");
L_1245a709:;
  /* 1245a709 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245a70b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245a70d jne 0x1245a6e5 */
  if (!C.zf) goto L_1245a6e5;
L_1245a70f:;
  /* 1245a70f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a713 jne 0x1245a733 */
  if (!C.zf) goto L_1245a733;
  /* 1245a715 push 0x1247f560 */
  push32((uint32_t)(0x1247f560u));
  /* 1245a71a push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a71c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1245a71e push 0x1247f570 */
  push32((uint32_t)(0x1247f570u));
  /* 1245a723 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245a725 call 0x124568e0 */
  push32(0x1245a72au); f_124568e0();
  /* 1245a72a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a72d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a730 jne 0x1245a733 */
  if (!C.zf) goto L_1245a733;
  /* 1245a732 int3  */
  x86_unimpl("int3 @ 0x1245a732");
L_1245a733:;
  /* 1245a733 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245a735 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245a737 jne 0x1245a70f */
  if (!C.zf) goto L_1245a70f;
  /* 1245a739 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a73c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1245a743 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a749 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1245a74c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a74f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a752 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1245a754 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a757 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a75a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1245a75d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1245a760 push edx */
  push32((uint32_t)(EDX));
  /* 1245a761 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a764 push eax */
  push32((uint32_t)(EAX));
  /* 1245a765 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a768 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a769 call 0x1245e7b0 */
  push32(0x1245a76eu); f_1245e7b0();
  /* 1245a76e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a771 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245a774 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a777 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245a77a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a77d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a780 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1245a783 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a786 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a78a jl 0x1245a7ae */
  if ((C.sf!=C.of)) goto L_1245a7ae;
  /* 1245a78c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a78f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245a791 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1245a794 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245a796 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1245a79c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1245a79f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a7a2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245a7a4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a7a7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a7aa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1245a7ac jmp 0x1245a7bf */
  goto L_1245a7bf;
L_1245a7ae:;
  /* 1245a7ae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a7b1 push eax */
  push32((uint32_t)(EAX));
  /* 1245a7b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a7b4 call 0x1245e530 */
  push32(0x1245a7b9u); f_1245e530();
  /* 1245a7b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a7bc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1245a7bf:;
  /* 1245a7bf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245a7c2 pop edi */
  EDI = (pop32());
  /* 1245a7c3 pop esi */
  ESI = (pop32());
  /* 1245a7c4 pop ebx */
  EBX = (pop32());
  /* 1245a7c5 mov esp, ebp */
  ESP = (EBP);
  /* 1245a7c7 pop ebp */
  EBP = (pop32());
  /* 1245a7c8 ret  */
  ESPCHK(0x1245a6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7d0 @ 0x1245a7d0 (7 bytes, 3 insns) */
void f_1245a7d0(void) {
  FTRACE(0x1245a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a7d0 push edi */
  push32((uint32_t)(EDI));
  /* 1245a7d1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1245a7d5 jmp 0x1245a841 */
  jmp_ind(0x1245a841u); return;
}

/* FUN_1000a7e0 @ 0x1245a7e0 (224 bytes, 84 insns) */
void f_1245a7e0(void) {
  FTRACE(0x1245a7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a7e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1245a7e4 push edi */
  push32((uint32_t)(EDI));
  /* 1245a7e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1245a7eb je 0x1245a7fc */
  if (C.zf) goto L_1245a7fc;
L_1245a7ed:;
  /* 1245a7ed mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1245a7ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1245a7f0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1245a7f2 je 0x1245a82f */
  if (C.zf) goto L_1245a82f;
  /* 1245a7f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1245a7fa jne 0x1245a7ed */
  if (!C.zf) goto L_1245a7ed;
L_1245a7fc:;
  /* 1245a7fc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1245a7fe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1245a803 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a805 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245a808 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245a80a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a80d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1245a812 je 0x1245a7fc */
  if (C.zf) goto L_1245a7fc;
  /* 1245a814 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1245a817 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1245a819 je 0x1245a83e */
  if (C.zf) goto L_1245a83e;
  /* 1245a81b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1245a81d je 0x1245a839 */
  if (C.zf) goto L_1245a839;
  /* 1245a81f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1245a824 je 0x1245a834 */
  if (C.zf) goto L_1245a834;
  /* 1245a826 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1245a82b je 0x1245a82f */
  if (C.zf) goto L_1245a82f;
  /* 1245a82d jmp 0x1245a7fc */
  goto L_1245a7fc;
L_1245a82f:;
  /* 1245a82f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1245a832 jmp 0x1245a841 */
  goto L_1245a841;
L_1245a834:;
  /* 1245a834 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1245a837 jmp 0x1245a841 */
  goto L_1245a841;
L_1245a839:;
  /* 1245a839 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1245a83c jmp 0x1245a841 */
  goto L_1245a841;
L_1245a83e:;
  /* 1245a83e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1245a841:;
  /* 1245a841 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1245a845 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1245a84b je 0x1245a866 */
  if (C.zf) goto L_1245a866;
L_1245a84d:;
  /* 1245a84d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1245a84f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1245a850 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1245a852 je 0x1245a8b8 */
  if (C.zf) goto L_1245a8b8;
  /* 1245a854 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1245a856 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1245a857 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1245a85d jne 0x1245a84d */
  if (!C.zf) goto L_1245a84d;
  /* 1245a85f jmp 0x1245a866 */
  goto L_1245a866;
L_1245a861:;
  /* 1245a861 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1245a863 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1245a866:;
  /* 1245a866 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1245a86b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1245a86d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a86f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245a872 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245a874 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245a876 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a879 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1245a87e je 0x1245a861 */
  if (C.zf) goto L_1245a861;
  /* 1245a880 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1245a882 je 0x1245a8b8 */
  if (C.zf) goto L_1245a8b8;
  /* 1245a884 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1245a886 je 0x1245a8af */
  if (C.zf) goto L_1245a8af;
  /* 1245a888 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1245a88e je 0x1245a8a2 */
  if (C.zf) goto L_1245a8a2;
  /* 1245a890 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1245a896 je 0x1245a89a */
  if (C.zf) goto L_1245a89a;
  /* 1245a898 jmp 0x1245a861 */
  goto L_1245a861;
L_1245a89a:;
  /* 1245a89a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1245a89c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1245a8a0 pop edi */
  EDI = (pop32());
  /* 1245a8a1 ret  */
  ESPCHK(0x1245a7e0u, _esp0);
  ESP += 4; return;
L_1245a8a2:;
  /* 1245a8a2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1245a8a5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1245a8a9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1245a8ad pop edi */
  EDI = (pop32());
  /* 1245a8ae ret  */
  ESPCHK(0x1245a7e0u, _esp0);
  ESP += 4; return;
L_1245a8af:;
  /* 1245a8af mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1245a8b2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1245a8b6 pop edi */
  EDI = (pop32());
  /* 1245a8b7 ret  */
  ESPCHK(0x1245a7e0u, _esp0);
  ESP += 4; return;
L_1245a8b8:;
  /* 1245a8b8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1245a8ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1245a8be pop edi */
  EDI = (pop32());
  /* 1245a8bf ret  */
  ESPCHK(0x1245a7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x1245a8c0 (243 bytes, 91 insns) */
void f_1245a8c0(void) {
  FTRACE(0x1245a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1245a8c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a8c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1245a8c7 push esi */
  push32((uint32_t)(ESI));
  /* 1245a8c8 push edi */
  push32((uint32_t)(EDI));
  /* 1245a8c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1245a8cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1245a8cf:;
  /* 1245a8cf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a8d3 jne 0x1245a8f3 */
  if (!C.zf) goto L_1245a8f3;
  /* 1245a8d5 push 0x1247f57c */
  push32((uint32_t)(0x1247f57cu));
  /* 1245a8da push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a8dc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1245a8de push 0x1247f58c */
  push32((uint32_t)(0x1247f58cu));
  /* 1245a8e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245a8e5 call 0x124568e0 */
  push32(0x1245a8eau); f_124568e0();
  /* 1245a8ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a8ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a8f0 jne 0x1245a8f3 */
  if (!C.zf) goto L_1245a8f3;
  /* 1245a8f2 int3  */
  x86_unimpl("int3 @ 0x1245a8f2");
L_1245a8f3:;
  /* 1245a8f3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245a8f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245a8f7 jne 0x1245a8cf */
  if (!C.zf) goto L_1245a8cf;
L_1245a8f9:;
  /* 1245a8f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a8fd jne 0x1245a91d */
  if (!C.zf) goto L_1245a91d;
  /* 1245a8ff push 0x1247f560 */
  push32((uint32_t)(0x1247f560u));
  /* 1245a904 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a906 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1245a908 push 0x1247f58c */
  push32((uint32_t)(0x1247f58cu));
  /* 1245a90d push 2 */
  push32((uint32_t)(0x2u));
  /* 1245a90f call 0x124568e0 */
  push32(0x1245a914u); f_124568e0();
  /* 1245a914 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a917 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a91a jne 0x1245a91d */
  if (!C.zf) goto L_1245a91d;
  /* 1245a91c int3  */
  x86_unimpl("int3 @ 0x1245a91c");
L_1245a91d:;
  /* 1245a91d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245a91f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245a921 jne 0x1245a8f9 */
  if (!C.zf) goto L_1245a8f9;
  /* 1245a923 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a926 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1245a92d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a930 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a933 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1245a936 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a939 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245a93c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1245a93e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a941 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245a944 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1245a947 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1245a94a push ecx */
  push32((uint32_t)(ECX));
  /* 1245a94b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245a94e push edx */
  push32((uint32_t)(EDX));
  /* 1245a94f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a952 push eax */
  push32((uint32_t)(EAX));
  /* 1245a953 call 0x1245e7b0 */
  push32(0x1245a958u); f_1245e7b0();
  /* 1245a958 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a95b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1245a95e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a961 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245a964 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a967 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a96a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1245a96d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a970 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a974 jl 0x1245a998 */
  if ((C.sf!=C.of)) goto L_1245a998;
  /* 1245a976 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a979 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245a97b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1245a97e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1245a980 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1245a986 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1245a989 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a98c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245a98e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a991 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a994 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1245a996 jmp 0x1245a9a9 */
  goto L_1245a9a9;
L_1245a998:;
  /* 1245a998 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1245a99b push edx */
  push32((uint32_t)(EDX));
  /* 1245a99c push 0 */
  push32((uint32_t)(0x0u));
  /* 1245a99e call 0x1245e530 */
  push32(0x1245a9a3u); f_1245e530();
  /* 1245a9a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245a9a6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1245a9a9:;
  /* 1245a9a9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1245a9ac pop edi */
  EDI = (pop32());
  /* 1245a9ad pop esi */
  ESI = (pop32());
  /* 1245a9ae pop ebx */
  EBX = (pop32());
  /* 1245a9af mov esp, ebp */
  ESP = (EBP);
  /* 1245a9b1 pop ebp */
  EBP = (pop32());
  /* 1245a9b2 ret  */
  ESPCHK(0x1245a8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c0 @ 0x1245a9c0 (47 bytes, 17 insns) */
void f_1245a9c0(void) {
  FTRACE(0x1245a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a9c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1245a9c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a9c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1245a9ca jb 0x1245a9e0 */
  if (C.cf) goto L_1245a9e0;
L_1245a9cc:;
  /* 1245a9cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a9d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a9d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1245a9d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a9de jae 0x1245a9cc */
  if (!C.cf) goto L_1245a9cc;
L_1245a9e0:;
  /* 1245a9e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a9e2 mov eax, esp */
  EAX = (ESP);
  /* 1245a9e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1245a9e6 mov esp, ecx */
  ESP = (ECX);
  /* 1245a9e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245a9ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245a9ed push eax */
  push32((uint32_t)(EAX));
  /* 1245a9ee ret  */
  ESPCHK(0x1245a9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9f0 @ 0x1245a9f0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1245a9f0(void) {
  FTRACE(0x1245a9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245a9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245a9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1245a9f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245a9f6 push esi */
  push32((uint32_t)(ESI));
  /* 1245a9f7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245a9fb je 0x1245aa03 */
  if (C.zf) goto L_1245aa03;
  /* 1245a9fd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa01 jne 0x1245aa08 */
  if (!C.zf) goto L_1245aa08;
L_1245aa03:;
  /* 1245aa03 jmp 0x1245abd8 */
  goto L_1245abd8;
L_1245aa08:;
  /* 1245aa08 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa0c je 0x1245aa24 */
  if (C.zf) goto L_1245aa24;
  /* 1245aa0e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa12 je 0x1245aa24 */
  if (C.zf) goto L_1245aa24;
  /* 1245aa14 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa18 je 0x1245aa24 */
  if (C.zf) goto L_1245aa24;
  /* 1245aa1a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa1e jne 0x1245ab01 */
  if (!C.zf) goto L_1245ab01;
L_1245aa24:;
  /* 1245aa24 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245aa26 call 0x1245b220 */
  push32(0x1245aa2bu); f_1245b220();
  /* 1245aa2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245aa2e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa32 je 0x1245aa3a */
  if (C.zf) goto L_1245aa3a;
  /* 1245aa34 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa38 jne 0x1245aa7f */
  if (!C.zf) goto L_1245aa7f;
L_1245aa3a:;
  /* 1245aa3a cmp dword ptr [0x124839d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124839d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa41 jne 0x1245aa7f */
  if (!C.zf) goto L_1245aa7f;
  /* 1245aa43 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245aa45 push 0x1245ac20 */
  push32((uint32_t)(0x1245ac20u));
  /* 1245aa4a call dword ptr [0x1248632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248632c))), 0x1245aa50u);
  /* 1245aa50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa53 jne 0x1245aa61 */
  if (!C.zf) goto L_1245aa61;
  /* 1245aa55 mov dword ptr [0x124839d0], 1 */
  w32((uint32_t)(0x124839d0), (0x1u));
  /* 1245aa5f jmp 0x1245aa7f */
  goto L_1245aa7f;
L_1245aa61:;
  /* 1245aa61 call dword ptr [0x12486388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486388))), 0x1245aa67u);
  /* 1245aa67 mov esi, eax */
  ESI = (EAX);
  /* 1245aa69 call 0x1245f700 */
  push32(0x1245aa6eu); f_1245f700();
  /* 1245aa6e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1245aa70 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245aa72 call 0x1245b2c0 */
  push32(0x1245aa77u); f_1245b2c0();
  /* 1245aa77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245aa7a jmp 0x1245abd8 */
  goto L_1245abd8;
L_1245aa7f:;
  /* 1245aa7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245aa82 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1245aa85 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245aa88 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245aa8b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1245aa8e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aa92 ja 0x1245aaf2 */
  if ((!C.cf&&!C.zf)) goto L_1245aaf2;
  /* 1245aa94 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245aa97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245aa99 mov dl, byte ptr [eax + 0x1245abff] */
  DL = (r8((uint32_t)(EAX + 0x1245abff)));
  /* 1245aa9f jmp dword ptr [edx*4 + 0x1245abeb] */
  switch (EDX) {
    case 0: goto L_1245aaa6;
    case 1: goto L_1245aae0;
    case 2: goto L_1245aaba;
    case 3: goto L_1245aacd;
    case 4: goto L_1245aaf2;
    default: x86_unimpl("switch@0x1245aa9f out of table"); return;
  }
L_1245aaa6:;
  /* 1245aaa6 mov ecx, dword ptr [0x124839c0] */
  ECX = (r32((uint32_t)(0x124839c0)));
  /* 1245aaac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1245aaaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245aab2 mov dword ptr [0x124839c0], edx */
  w32((uint32_t)(0x124839c0), (EDX));
  /* 1245aab8 jmp 0x1245aaf2 */
  goto L_1245aaf2;
L_1245aaba:;
  /* 1245aaba mov eax, dword ptr [0x124839c4] */
  EAX = (r32((uint32_t)(0x124839c4)));
  /* 1245aabf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245aac2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245aac5 mov dword ptr [0x124839c4], ecx */
  w32((uint32_t)(0x124839c4), (ECX));
  /* 1245aacb jmp 0x1245aaf2 */
  goto L_1245aaf2;
L_1245aacd:;
  /* 1245aacd mov edx, dword ptr [0x124839c8] */
  EDX = (r32((uint32_t)(0x124839c8)));
  /* 1245aad3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1245aad6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245aad9 mov dword ptr [0x124839c8], eax */
  w32((uint32_t)(0x124839c8), (EAX));
  /* 1245aade jmp 0x1245aaf2 */
  goto L_1245aaf2;
L_1245aae0:;
  /* 1245aae0 mov ecx, dword ptr [0x124839cc] */
  ECX = (r32((uint32_t)(0x124839cc)));
  /* 1245aae6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1245aae9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245aaec mov dword ptr [0x124839cc], edx */
  w32((uint32_t)(0x124839cc), (EDX));
L_1245aaf2:;
  /* 1245aaf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245aaf4 call 0x1245b2c0 */
  push32(0x1245aaf9u); f_1245b2c0();
  /* 1245aaf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245aafc jmp 0x1245abd3 */
  goto L_1245abd3;
L_1245ab01:;
  /* 1245ab01 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ab05 je 0x1245ab18 */
  if (C.zf) goto L_1245ab18;
  /* 1245ab07 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ab0b je 0x1245ab18 */
  if (C.zf) goto L_1245ab18;
  /* 1245ab0d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ab11 je 0x1245ab18 */
  if (C.zf) goto L_1245ab18;
  /* 1245ab13 jmp 0x1245abd8 */
  goto L_1245abd8;
L_1245ab18:;
  /* 1245ab18 call 0x12457260 */
  push32(0x1245ab1du); f_12457260();
  /* 1245ab1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245ab20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ab23 cmp dword ptr [eax + 0x50], 0x12481c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12481c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ab2a jne 0x1245ab75 */
  if (!C.zf) goto L_1245ab75;
  /* 1245ab2c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1245ab31 push 0x1247f598 */
  push32((uint32_t)(0x1247f598u));
  /* 1245ab36 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245ab38 mov ecx, dword ptr [0x12481c80] */
  ECX = (r32((uint32_t)(0x12481c80)));
  /* 1245ab3e push ecx */
  push32((uint32_t)(ECX));
  /* 1245ab3f call 0x12457820 */
  push32(0x1245ab44u); f_12457820();
  /* 1245ab44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ab47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ab4a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1245ab4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ab50 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ab54 je 0x1245ab73 */
  if (C.zf) goto L_1245ab73;
  /* 1245ab56 mov ecx, dword ptr [0x12481c80] */
  ECX = (r32((uint32_t)(0x12481c80)));
  /* 1245ab5c push ecx */
  push32((uint32_t)(ECX));
  /* 1245ab5d push 0x12481c00 */
  push32((uint32_t)(0x12481c00u));
  /* 1245ab62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ab65 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1245ab68 push eax */
  push32((uint32_t)(EAX));
  /* 1245ab69 call 0x1245e100 */
  push32(0x1245ab6eu); f_1245e100();
  /* 1245ab6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ab71 jmp 0x1245ab75 */
  goto L_1245ab75;
L_1245ab73:;
  /* 1245ab73 jmp 0x1245abd8 */
  goto L_1245abd8;
L_1245ab75:;
  /* 1245ab75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ab78 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1245ab7b push edx */
  push32((uint32_t)(EDX));
  /* 1245ab7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ab7f push eax */
  push32((uint32_t)(EAX));
  /* 1245ab80 call 0x1245af00 */
  push32(0x1245ab85u); f_1245af00();
  /* 1245ab85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ab88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245ab8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ab8f jne 0x1245ab93 */
  if (!C.zf) goto L_1245ab93;
  /* 1245ab91 jmp 0x1245abd8 */
  goto L_1245abd8;
L_1245ab93:;
  /* 1245ab93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ab96 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1245ab99 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1245ab9c:;
  /* 1245ab9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ab9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245aba2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aba5 jne 0x1245abd3 */
  if (!C.zf) goto L_1245abd3;
  /* 1245aba7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245abaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245abad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1245abb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245abb3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245abb6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245abb9 mov edx, dword ptr [0x12481c84] */
  EDX = (r32((uint32_t)(0x12481c84)));
  /* 1245abbf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245abc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245abc5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1245abc8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245abca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245abcd jb 0x1245abd1 */
  if (C.cf) goto L_1245abd1;
  /* 1245abcf jmp 0x1245abd3 */
  goto L_1245abd3;
L_1245abd1:;
  /* 1245abd1 jmp 0x1245ab9c */
  goto L_1245ab9c;
L_1245abd3:;
  /* 1245abd3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245abd6 jmp 0x1245abe6 */
  goto L_1245abe6;
L_1245abd8:;
  /* 1245abd8 call 0x1245f6f0 */
  push32(0x1245abddu); f_1245f6f0();
  /* 1245abdd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1245abe3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1245abe6:;
  /* 1245abe6 pop esi */
  ESI = (pop32());
  /* 1245abe7 mov esp, ebp */
  ESP = (EBP);
  /* 1245abe9 pop ebp */
  EBP = (pop32());
  /* 1245abea ret  */
  ESPCHK(0x1245a9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac20 @ 0x1245ac20 (146 bytes, 45 insns) */
void f_1245ac20(void) {
  FTRACE(0x1245ac20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245ac20 push ebp */
  push32((uint32_t)(EBP));
  /* 1245ac21 mov ebp, esp */
  EBP = (ESP);
  /* 1245ac23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245ac26 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245ac28 call 0x1245b220 */
  push32(0x1245ac2du); f_1245b220();
  /* 1245ac2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ac30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ac34 jne 0x1245ac4e */
  if (!C.zf) goto L_1245ac4e;
  /* 1245ac36 mov dword ptr [ebp - 8], 0x124839c0 */
  w32((uint32_t)(EBP + -0x8), (0x124839c0u));
  /* 1245ac3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ac40 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1245ac42 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1245ac45 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1245ac4c jmp 0x1245ac64 */
  goto L_1245ac64;
L_1245ac4e:;
  /* 1245ac4e mov dword ptr [ebp - 8], 0x124839c4 */
  w32((uint32_t)(EBP + -0x8), (0x124839c4u));
  /* 1245ac55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ac58 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245ac5a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245ac5d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1245ac64:;
  /* 1245ac64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ac68 jne 0x1245ac78 */
  if (!C.zf) goto L_1245ac78;
  /* 1245ac6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1245ac6c call 0x1245b2c0 */
  push32(0x1245ac71u); f_1245b2c0();
  /* 1245ac71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ac74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245ac76 jmp 0x1245acac */
  goto L_1245acac;
L_1245ac78:;
  /* 1245ac78 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ac7c je 0x1245ac9d */
  if (C.zf) goto L_1245ac9d;
  /* 1245ac7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245ac81 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1245ac87 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245ac89 call 0x1245b2c0 */
  push32(0x1245ac8eu); f_1245b2c0();
  /* 1245ac8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ac91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ac94 push edx */
  push32((uint32_t)(EDX));
  /* 1245ac95 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1245ac98u);
  /* 1245ac98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ac9b jmp 0x1245aca7 */
  goto L_1245aca7;
L_1245ac9d:;
  /* 1245ac9d push 1 */
  push32((uint32_t)(0x1u));
  /* 1245ac9f call 0x1245b2c0 */
  push32(0x1245aca4u); f_1245b2c0();
  /* 1245aca4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245aca7:;
  /* 1245aca7 mov eax, 1 */
  EAX = (0x1u);
L_1245acac:;
  /* 1245acac mov esp, ebp */
  ESP = (EBP);
  /* 1245acae pop ebp */
  EBP = (pop32());
  /* 1245acaf ret 4 */
  ESPCHK(0x1245ac20u, _esp0);
  ESP += 8; return;
}

/* FUN_1000acc0 @ 0x1245acc0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1245acc0(void) {
  FTRACE(0x1245acc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245acc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245acc1 mov ebp, esp */
  EBP = (ESP);
  /* 1245acc3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245acc6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1245accd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245acd0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1245acd3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245acd6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245acd9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1245acdc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ace0 ja 0x1245ad8e */
  if ((!C.cf&&!C.zf)) goto L_1245ad8e;
  /* 1245ace6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1245ace9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245aceb mov dl, byte ptr [eax + 0x1245aee2] */
  DL = (r8((uint32_t)(EAX + 0x1245aee2)));
  /* 1245acf1 jmp dword ptr [edx*4 + 0x1245aeca] */
  switch (EDX) {
    case 0: goto L_1245acf8;
    case 1: goto L_1245ad63;
    case 2: goto L_1245ad49;
    case 3: goto L_1245ad15;
    case 4: goto L_1245ad2f;
    case 5: goto L_1245ad8e;
    default: x86_unimpl("switch@0x1245acf1 out of table"); return;
  }
L_1245acf8:;
  /* 1245acf8 mov dword ptr [ebp - 0x18], 0x124839c0 */
  w32((uint32_t)(EBP + -0x18), (0x124839c0u));
  /* 1245acff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245ad02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245ad04 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1245ad07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245ad0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ad0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245ad10 jmp 0x1245ad96 */
  goto L_1245ad96;
L_1245ad15:;
  /* 1245ad15 mov dword ptr [ebp - 0x18], 0x124839c4 */
  w32((uint32_t)(EBP + -0x18), (0x124839c4u));
  /* 1245ad1c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245ad1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245ad21 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1245ad24 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245ad27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ad2a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245ad2d jmp 0x1245ad96 */
  goto L_1245ad96;
L_1245ad2f:;
  /* 1245ad2f mov dword ptr [ebp - 0x18], 0x124839c8 */
  w32((uint32_t)(EBP + -0x18), (0x124839c8u));
  /* 1245ad36 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245ad39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245ad3b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1245ad3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245ad41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ad44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245ad47 jmp 0x1245ad96 */
  goto L_1245ad96;
L_1245ad49:;
  /* 1245ad49 mov dword ptr [ebp - 0x18], 0x124839cc */
  w32((uint32_t)(EBP + -0x18), (0x124839ccu));
  /* 1245ad50 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245ad53 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245ad55 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1245ad58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245ad5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ad5e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245ad61 jmp 0x1245ad96 */
  goto L_1245ad96;
L_1245ad63:;
  /* 1245ad63 call 0x12457260 */
  push32(0x1245ad68u); f_12457260();
  /* 1245ad68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245ad6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ad6e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1245ad71 push edx */
  push32((uint32_t)(EDX));
  /* 1245ad72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ad75 push eax */
  push32((uint32_t)(EAX));
  /* 1245ad76 call 0x1245af00 */
  push32(0x1245ad7bu); f_1245af00();
  /* 1245ad7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ad7e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ad81 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1245ad84 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245ad87 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245ad89 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1245ad8c jmp 0x1245ad96 */
  goto L_1245ad96;
L_1245ad8e:;
  /* 1245ad8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245ad91 jmp 0x1245aec6 */
  goto L_1245aec6;
L_1245ad96:;
  /* 1245ad96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ad9a je 0x1245ada6 */
  if (C.zf) goto L_1245ada6;
  /* 1245ad9c push 1 */
  push32((uint32_t)(0x1u));
  /* 1245ad9e call 0x1245b220 */
  push32(0x1245ada3u); f_1245b220();
  /* 1245ada3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245ada6:;
  /* 1245ada6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245adaa jne 0x1245adc3 */
  if (!C.zf) goto L_1245adc3;
  /* 1245adac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245adb0 je 0x1245adbc */
  if (C.zf) goto L_1245adbc;
  /* 1245adb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1245adb4 call 0x1245b2c0 */
  push32(0x1245adb9u); f_1245b2c0();
  /* 1245adb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245adbc:;
  /* 1245adbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245adbe jmp 0x1245aec6 */
  goto L_1245aec6;
L_1245adc3:;
  /* 1245adc3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245adc7 jne 0x1245ade0 */
  if (!C.zf) goto L_1245ade0;
  /* 1245adc9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245adcd je 0x1245add9 */
  if (C.zf) goto L_1245add9;
  /* 1245adcf push 1 */
  push32((uint32_t)(0x1u));
  /* 1245add1 call 0x1245b2c0 */
  push32(0x1245add6u); f_1245b2c0();
  /* 1245add6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245add9:;
  /* 1245add9 push 3 */
  push32((uint32_t)(0x3u));
  /* 1245addb call 0x12456fe0 */
  push32(0x1245ade0u); f_12456fe0();
L_1245ade0:;
  /* 1245ade0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ade4 je 0x1245adf2 */
  if (C.zf) goto L_1245adf2;
  /* 1245ade6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245adea je 0x1245adf2 */
  if (C.zf) goto L_1245adf2;
  /* 1245adec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245adf0 jne 0x1245ae1e */
  if (!C.zf) goto L_1245ae1e;
L_1245adf2:;
  /* 1245adf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245adf5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1245adf8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1245adfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245adfe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1245ae05 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ae09 jne 0x1245ae1e */
  if (!C.zf) goto L_1245ae1e;
  /* 1245ae0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ae0e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1245ae11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245ae14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ae17 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1245ae1e:;
  /* 1245ae1e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ae22 jne 0x1245ae60 */
  if (!C.zf) goto L_1245ae60;
  /* 1245ae24 mov eax, dword ptr [0x12481c78] */
  EAX = (r32((uint32_t)(0x12481c78)));
  /* 1245ae29 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1245ae2c jmp 0x1245ae37 */
  goto L_1245ae37;
L_1245ae2e:;
  /* 1245ae2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245ae31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ae34 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1245ae37:;
  /* 1245ae37 mov edx, dword ptr [0x12481c78] */
  EDX = (r32((uint32_t)(0x12481c78)));
  /* 1245ae3d add edx, dword ptr [0x12481c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12481c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ae43 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ae46 jge 0x1245ae5e */
  if ((C.sf==C.of)) goto L_1245ae5e;
  /* 1245ae48 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245ae4b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245ae4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ae51 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1245ae54 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1245ae5c jmp 0x1245ae2e */
  goto L_1245ae2e;
L_1245ae5e:;
  /* 1245ae5e jmp 0x1245ae69 */
  goto L_1245ae69;
L_1245ae60:;
  /* 1245ae60 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245ae63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1245ae69:;
  /* 1245ae69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ae6d je 0x1245ae79 */
  if (C.zf) goto L_1245ae79;
  /* 1245ae6f push 1 */
  push32((uint32_t)(0x1u));
  /* 1245ae71 call 0x1245b2c0 */
  push32(0x1245ae76u); f_1245b2c0();
  /* 1245ae76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245ae79:;
  /* 1245ae79 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ae7d jne 0x1245ae90 */
  if (!C.zf) goto L_1245ae90;
  /* 1245ae7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245ae82 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1245ae85 push edx */
  push32((uint32_t)(EDX));
  /* 1245ae86 push 8 */
  push32((uint32_t)(0x8u));
  /* 1245ae88 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1245ae8bu);
  /* 1245ae8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245ae8e jmp 0x1245ae9a */
  goto L_1245ae9a;
L_1245ae90:;
  /* 1245ae90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245ae93 push eax */
  push32((uint32_t)(EAX));
  /* 1245ae94 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1245ae97u);
  /* 1245ae97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245ae9a:;
  /* 1245ae9a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245ae9e je 0x1245aeac */
  if (C.zf) goto L_1245aeac;
  /* 1245aea0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aea4 je 0x1245aeac */
  if (C.zf) goto L_1245aeac;
  /* 1245aea6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aeaa jne 0x1245aec4 */
  if (!C.zf) goto L_1245aec4;
L_1245aeac:;
  /* 1245aeac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245aeaf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245aeb2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1245aeb5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245aeb9 jne 0x1245aec4 */
  if (!C.zf) goto L_1245aec4;
  /* 1245aebb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245aebe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245aec1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1245aec4:;
  /* 1245aec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245aec6:;
  /* 1245aec6 mov esp, ebp */
  ESP = (EBP);
  /* 1245aec8 pop ebp */
  EBP = (pop32());
  /* 1245aec9 ret  */
  ESPCHK(0x1245acc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af00 @ 0x1245af00 (91 bytes, 35 insns) */
void f_1245af00(void) {
  FTRACE(0x1245af00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245af00 push ebp */
  push32((uint32_t)(EBP));
  /* 1245af01 mov ebp, esp */
  EBP = (ESP);
  /* 1245af03 push ecx */
  push32((uint32_t)(ECX));
  /* 1245af04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245af07 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245af0a:;
  /* 1245af0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245af0d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1245af10 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245af13 je 0x1245af33 */
  if (C.zf) goto L_1245af33;
  /* 1245af15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245af18 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245af1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245af1e mov ecx, dword ptr [0x12481c84] */
  ECX = (r32((uint32_t)(0x12481c84)));
  /* 1245af24 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245af27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245af2a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245af2c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245af2f jae 0x1245af33 */
  if (!C.cf) goto L_1245af33;
  /* 1245af31 jmp 0x1245af0a */
  goto L_1245af0a;
L_1245af33:;
  /* 1245af33 mov eax, dword ptr [0x12481c84] */
  EAX = (r32((uint32_t)(0x12481c84)));
  /* 1245af38 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245af3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245af3e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245af40 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245af43 jae 0x1245af55 */
  if (!C.cf) goto L_1245af55;
  /* 1245af45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245af48 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1245af4b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245af4e jne 0x1245af55 */
  if (!C.zf) goto L_1245af55;
  /* 1245af50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245af53 jmp 0x1245af57 */
  goto L_1245af57;
L_1245af55:;
  /* 1245af55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245af57:;
  /* 1245af57 mov esp, ebp */
  ESP = (EBP);
  /* 1245af59 pop ebp */
  EBP = (pop32());
  /* 1245af5a ret  */
  ESPCHK(0x1245af00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af60 @ 0x1245af60 (13 bytes, 6 insns) */
void f_1245af60(void) {
  FTRACE(0x1245af60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245af60 push ebp */
  push32((uint32_t)(EBP));
  /* 1245af61 mov ebp, esp */
  EBP = (ESP);
  /* 1245af63 call 0x12457260 */
  push32(0x1245af68u); f_12457260();
  /* 1245af68 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245af6b pop ebp */
  EBP = (pop32());
  /* 1245af6c ret  */
  ESPCHK(0x1245af60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af70 @ 0x1245af70 (13 bytes, 6 insns) */
void f_1245af70(void) {
  FTRACE(0x1245af70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245af70 push ebp */
  push32((uint32_t)(EBP));
  /* 1245af71 mov ebp, esp */
  EBP = (ESP);
  /* 1245af73 call 0x12457260 */
  push32(0x1245af78u); f_12457260();
  /* 1245af78 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245af7b pop ebp */
  EBP = (pop32());
  /* 1245af7c ret  */
  ESPCHK(0x1245af70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af80 @ 0x1245af80 (187 bytes, 54 insns) */
void f_1245af80(void) {
  FTRACE(0x1245af80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245af80 push ebp */
  push32((uint32_t)(EBP));
  /* 1245af81 mov ebp, esp */
  EBP = (ESP);
  /* 1245af83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245af86 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245af8d cmp dword ptr [0x124839d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124839d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245af94 jne 0x1245aff3 */
  if (!C.zf) goto L_1245aff3;
  /* 1245af96 push 0x1247e9c4 */
  push32((uint32_t)(0x1247e9c4u));
  /* 1245af9b call dword ptr [0x12486358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486358))), 0x1245afa1u);
  /* 1245afa1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245afa4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245afa8 je 0x1245afc7 */
  if (C.zf) goto L_1245afc7;
  /* 1245afaa push 0x1247f5c8 */
  push32((uint32_t)(0x1247f5c8u));
  /* 1245afaf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245afb2 push eax */
  push32((uint32_t)(EAX));
  /* 1245afb3 call dword ptr [0x12486354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486354))), 0x1245afb9u);
  /* 1245afb9 mov dword ptr [0x124839d4], eax */
  w32((uint32_t)(0x124839d4), (EAX));
  /* 1245afbe cmp dword ptr [0x124839d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124839d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245afc5 jne 0x1245afcb */
  if (!C.zf) goto L_1245afcb;
L_1245afc7:;
  /* 1245afc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245afc9 jmp 0x1245b037 */
  goto L_1245b037;
L_1245afcb:;
  /* 1245afcb push 0x1247f5b8 */
  push32((uint32_t)(0x1247f5b8u));
  /* 1245afd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245afd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245afd4 call dword ptr [0x12486354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486354))), 0x1245afdau);
  /* 1245afda mov dword ptr [0x124839d8], eax */
  w32((uint32_t)(0x124839d8), (EAX));
  /* 1245afdf push 0x1247f5a4 */
  push32((uint32_t)(0x1247f5a4u));
  /* 1245afe4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245afe7 push edx */
  push32((uint32_t)(EDX));
  /* 1245afe8 call dword ptr [0x12486354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486354))), 0x1245afeeu);
  /* 1245afee mov dword ptr [0x124839dc], eax */
  w32((uint32_t)(0x124839dc), (EAX));
L_1245aff3:;
  /* 1245aff3 cmp dword ptr [0x124839d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124839d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245affa je 0x1245b005 */
  if (C.zf) goto L_1245b005;
  /* 1245affc call dword ptr [0x124839d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124839d8))), 0x1245b002u);
  /* 1245b002 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245b005:;
  /* 1245b005 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b009 je 0x1245b021 */
  if (C.zf) goto L_1245b021;
  /* 1245b00b cmp dword ptr [0x124839dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124839dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b012 je 0x1245b021 */
  if (C.zf) goto L_1245b021;
  /* 1245b014 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b017 push eax */
  push32((uint32_t)(EAX));
  /* 1245b018 call dword ptr [0x124839dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124839dc))), 0x1245b01eu);
  /* 1245b01e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245b021:;
  /* 1245b021 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1245b024 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b025 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b028 push edx */
  push32((uint32_t)(EDX));
  /* 1245b029 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b02c push eax */
  push32((uint32_t)(EAX));
  /* 1245b02d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b030 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b031 call dword ptr [0x124839d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124839d4))), 0x1245b037u);
L_1245b037:;
  /* 1245b037 mov esp, ebp */
  ESP = (EBP);
  /* 1245b039 pop ebp */
  EBP = (pop32());
  /* 1245b03a ret  */
  ESPCHK(0x1245af80u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1245b040 (254 bytes, 109 insns) */
void f_1245b040(void) {
  FTRACE(0x1245b040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b040 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1245b044 push edi */
  push32((uint32_t)(EDI));
  /* 1245b045 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1245b047 je 0x1245b0c3 */
  if (C.zf) goto L_1245b0c3;
  /* 1245b049 push esi */
  push32((uint32_t)(ESI));
  /* 1245b04a push ebx */
  push32((uint32_t)(EBX));
  /* 1245b04b mov ebx, ecx */
  EBX = (ECX);
  /* 1245b04d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1245b051 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1245b057 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1245b05b jne 0x1245b064 */
  if (!C.zf) goto L_1245b064;
  /* 1245b05d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245b060 jne 0x1245b0d1 */
  if (!C.zf) goto L_1245b0d1;
  /* 1245b062 jmp 0x1245b085 */
  goto L_1245b085;
L_1245b064:;
  /* 1245b064 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245b066 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1245b067 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245b069 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1245b06a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1245b06b je 0x1245b092 */
  if (C.zf) goto L_1245b092;
  /* 1245b06d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1245b06f je 0x1245b09a */
  if (C.zf) goto L_1245b09a;
  /* 1245b071 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1245b077 jne 0x1245b064 */
  if (!C.zf) goto L_1245b064;
  /* 1245b079 mov ebx, ecx */
  EBX = (ECX);
  /* 1245b07b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245b07e jne 0x1245b0d1 */
  if (!C.zf) goto L_1245b0d1;
L_1245b080:;
  /* 1245b080 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1245b083 je 0x1245b092 */
  if (C.zf) goto L_1245b092;
L_1245b085:;
  /* 1245b085 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1245b087 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1245b088 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245b08a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1245b08b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1245b08d je 0x1245b0be */
  if (C.zf) goto L_1245b0be;
  /* 1245b08f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1245b090 jne 0x1245b085 */
  if (!C.zf) goto L_1245b085;
L_1245b092:;
  /* 1245b092 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1245b096 pop ebx */
  EBX = (pop32());
  /* 1245b097 pop esi */
  ESI = (pop32());
  /* 1245b098 pop edi */
  EDI = (pop32());
  /* 1245b099 ret  */
  ESPCHK(0x1245b040u, _esp0);
  ESP += 4; return;
L_1245b09a:;
  /* 1245b09a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1245b0a0 je 0x1245b0b4 */
  if (C.zf) goto L_1245b0b4;
L_1245b0a2:;
  /* 1245b0a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245b0a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1245b0a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1245b0a6 je 0x1245b136 */
  if (C.zf) goto L_1245b136;
  /* 1245b0ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1245b0b2 jne 0x1245b0a2 */
  if (!C.zf) goto L_1245b0a2;
L_1245b0b4:;
  /* 1245b0b4 mov ebx, ecx */
  EBX = (ECX);
  /* 1245b0b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245b0b9 jne 0x1245b127 */
  if (!C.zf) goto L_1245b127;
L_1245b0bb:;
  /* 1245b0bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245b0bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1245b0be:;
  /* 1245b0be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1245b0bf jne 0x1245b0bb */
  if (!C.zf) goto L_1245b0bb;
  /* 1245b0c1 pop ebx */
  EBX = (pop32());
  /* 1245b0c2 pop esi */
  ESI = (pop32());
L_1245b0c3:;
  /* 1245b0c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1245b0c7 pop edi */
  EDI = (pop32());
  /* 1245b0c8 ret  */
  ESPCHK(0x1245b040u, _esp0);
  ESP += 4; return;
L_1245b0c9:;
  /* 1245b0c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1245b0cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b0ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1245b0cf je 0x1245b080 */
  if (C.zf) goto L_1245b080;
L_1245b0d1:;
  /* 1245b0d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1245b0d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1245b0d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b0da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245b0dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b0df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1245b0e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b0e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1245b0e9 je 0x1245b0c9 */
  if (C.zf) goto L_1245b0c9;
  /* 1245b0eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1245b0ed je 0x1245b11b */
  if (C.zf) goto L_1245b11b;
  /* 1245b0ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1245b0f1 je 0x1245b111 */
  if (C.zf) goto L_1245b111;
  /* 1245b0f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1245b0f9 je 0x1245b107 */
  if (C.zf) goto L_1245b107;
  /* 1245b0fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1245b101 jne 0x1245b0c9 */
  if (!C.zf) goto L_1245b0c9;
  /* 1245b103 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1245b105 jmp 0x1245b11f */
  goto L_1245b11f;
L_1245b107:;
  /* 1245b107 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1245b10d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1245b10f jmp 0x1245b11f */
  goto L_1245b11f;
L_1245b111:;
  /* 1245b111 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1245b117 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1245b119 jmp 0x1245b11f */
  goto L_1245b11f;
L_1245b11b:;
  /* 1245b11b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1245b11d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1245b11f:;
  /* 1245b11f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b124 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1245b125 je 0x1245b131 */
  if (C.zf) goto L_1245b131;
L_1245b127:;
  /* 1245b127 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1245b129:;
  /* 1245b129 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1245b12b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b12e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1245b12f jne 0x1245b129 */
  if (!C.zf) goto L_1245b129;
L_1245b131:;
  /* 1245b131 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1245b134 jne 0x1245b0bb */
  if (!C.zf) goto L_1245b0bb;
L_1245b136:;
  /* 1245b136 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1245b13a pop ebx */
  EBX = (pop32());
  /* 1245b13b pop esi */
  ESI = (pop32());
  /* 1245b13c pop edi */
  EDI = (pop32());
  /* 1245b13d ret  */
  ESPCHK(0x1245b040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b140 @ 0x1245b140 (55 bytes, 16 insns) */
void f_1245b140(void) {
  FTRACE(0x1245b140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b140 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b141 mov ebp, esp */
  EBP = (ESP);
  /* 1245b143 mov eax, dword ptr [0x12481b84] */
  EAX = (r32((uint32_t)(0x12481b84)));
  /* 1245b148 push eax */
  push32((uint32_t)(EAX));
  /* 1245b149 call dword ptr [0x12486328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486328))), 0x1245b14fu);
  /* 1245b14f mov ecx, dword ptr [0x12481b74] */
  ECX = (r32((uint32_t)(0x12481b74)));
  /* 1245b155 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b156 call dword ptr [0x12486328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486328))), 0x1245b15cu);
  /* 1245b15c mov edx, dword ptr [0x12481b64] */
  EDX = (r32((uint32_t)(0x12481b64)));
  /* 1245b162 push edx */
  push32((uint32_t)(EDX));
  /* 1245b163 call dword ptr [0x12486328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486328))), 0x1245b169u);
  /* 1245b169 mov eax, dword ptr [0x12481b44] */
  EAX = (r32((uint32_t)(0x12481b44)));
  /* 1245b16e push eax */
  push32((uint32_t)(EAX));
  /* 1245b16f call dword ptr [0x12486328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486328))), 0x1245b175u);
  /* 1245b175 pop ebp */
  EBP = (pop32());
  /* 1245b176 ret  */
  ESPCHK(0x1245b140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b180 @ 0x1245b180 (159 bytes, 47 insns) */
void f_1245b180(void) {
  FTRACE(0x1245b180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b180 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b181 mov ebp, esp */
  EBP = (ESP);
  /* 1245b183 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b184 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245b18b jmp 0x1245b196 */
  goto L_1245b196;
L_1245b18d:;
  /* 1245b18d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b190 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b193 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245b196:;
  /* 1245b196 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b19a jge 0x1245b1e9 */
  if ((C.sf==C.of)) goto L_1245b1e9;
  /* 1245b19c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b19f cmp dword ptr [ecx*4 + 0x12481b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12481b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b1a7 je 0x1245b1e7 */
  if (C.zf) goto L_1245b1e7;
  /* 1245b1a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b1ad je 0x1245b1e7 */
  if (C.zf) goto L_1245b1e7;
  /* 1245b1af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b1b3 je 0x1245b1e7 */
  if (C.zf) goto L_1245b1e7;
  /* 1245b1b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b1b9 je 0x1245b1e7 */
  if (C.zf) goto L_1245b1e7;
  /* 1245b1bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b1bf je 0x1245b1e7 */
  if (C.zf) goto L_1245b1e7;
  /* 1245b1c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b1c4 mov eax, dword ptr [edx*4 + 0x12481b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12481b40)));
  /* 1245b1cb push eax */
  push32((uint32_t)(EAX));
  /* 1245b1cc call dword ptr [0x1248639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248639c))), 0x1245b1d2u);
  /* 1245b1d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1245b1d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b1d7 mov edx, dword ptr [ecx*4 + 0x12481b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12481b40)));
  /* 1245b1de push edx */
  push32((uint32_t)(EDX));
  /* 1245b1df call 0x124582b0 */
  push32(0x1245b1e4u); f_124582b0();
  /* 1245b1e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245b1e7:;
  /* 1245b1e7 jmp 0x1245b18d */
  goto L_1245b18d;
L_1245b1e9:;
  /* 1245b1e9 mov eax, dword ptr [0x12481b64] */
  EAX = (r32((uint32_t)(0x12481b64)));
  /* 1245b1ee push eax */
  push32((uint32_t)(EAX));
  /* 1245b1ef call dword ptr [0x1248639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248639c))), 0x1245b1f5u);
  /* 1245b1f5 mov ecx, dword ptr [0x12481b74] */
  ECX = (r32((uint32_t)(0x12481b74)));
  /* 1245b1fb push ecx */
  push32((uint32_t)(ECX));
  /* 1245b1fc call dword ptr [0x1248639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248639c))), 0x1245b202u);
  /* 1245b202 mov edx, dword ptr [0x12481b84] */
  EDX = (r32((uint32_t)(0x12481b84)));
  /* 1245b208 push edx */
  push32((uint32_t)(EDX));
  /* 1245b209 call dword ptr [0x1248639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248639c))), 0x1245b20fu);
  /* 1245b20f mov eax, dword ptr [0x12481b44] */
  EAX = (r32((uint32_t)(0x12481b44)));
  /* 1245b214 push eax */
  push32((uint32_t)(EAX));
  /* 1245b215 call dword ptr [0x1248639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248639c))), 0x1245b21bu);
  /* 1245b21b mov esp, ebp */
  ESP = (EBP);
  /* 1245b21d pop ebp */
  EBP = (pop32());
  /* 1245b21e ret  */
  ESPCHK(0x1245b180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x1245b220 (151 bytes, 46 insns) */
void f_1245b220(void) {
  FTRACE(0x1245b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b220 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b221 mov ebp, esp */
  EBP = (ESP);
  /* 1245b223 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b224 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b227 cmp dword ptr [eax*4 + 0x12481b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12481b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b22f jne 0x1245b2a2 */
  if (!C.zf) goto L_1245b2a2;
  /* 1245b231 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1245b236 push 0x1247f5d4 */
  push32((uint32_t)(0x1247f5d4u));
  /* 1245b23b push 2 */
  push32((uint32_t)(0x2u));
  /* 1245b23d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1245b23f call 0x12457820 */
  push32(0x1245b244u); f_12457820();
  /* 1245b244 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b247 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245b24a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b24e jne 0x1245b25a */
  if (!C.zf) goto L_1245b25a;
  /* 1245b250 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1245b252 call 0x12456790 */
  push32(0x1245b257u); f_12456790();
  /* 1245b257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245b25a:;
  /* 1245b25a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1245b25c call 0x1245b220 */
  push32(0x1245b261u); f_1245b220();
  /* 1245b261 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b264 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b267 cmp dword ptr [ecx*4 + 0x12481b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12481b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b26f jne 0x1245b28a */
  if (!C.zf) goto L_1245b28a;
  /* 1245b271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b274 push edx */
  push32((uint32_t)(EDX));
  /* 1245b275 call dword ptr [0x12486328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486328))), 0x1245b27bu);
  /* 1245b27b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b27e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b281 mov dword ptr [eax*4 + 0x12481b40], ecx */
  w32((uint32_t)(EAX*4 + 0x12481b40), (ECX));
  /* 1245b288 jmp 0x1245b298 */
  goto L_1245b298;
L_1245b28a:;
  /* 1245b28a push 2 */
  push32((uint32_t)(0x2u));
  /* 1245b28c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b28f push edx */
  push32((uint32_t)(EDX));
  /* 1245b290 call 0x124582b0 */
  push32(0x1245b295u); f_124582b0();
  /* 1245b295 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245b298:;
  /* 1245b298 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1245b29a call 0x1245b2c0 */
  push32(0x1245b29fu); f_1245b2c0();
  /* 1245b29f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245b2a2:;
  /* 1245b2a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b2a5 mov ecx, dword ptr [eax*4 + 0x12481b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12481b40)));
  /* 1245b2ac push ecx */
  push32((uint32_t)(ECX));
  /* 1245b2ad call dword ptr [0x12486324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486324))), 0x1245b2b3u);
  /* 1245b2b3 mov esp, ebp */
  ESP = (EBP);
  /* 1245b2b5 pop ebp */
  EBP = (pop32());
  /* 1245b2b6 ret  */
  ESPCHK(0x1245b220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2c0 @ 0x1245b2c0 (22 bytes, 8 insns) */
void f_1245b2c0(void) {
  FTRACE(0x1245b2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b2c1 mov ebp, esp */
  EBP = (ESP);
  /* 1245b2c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b2c6 mov ecx, dword ptr [eax*4 + 0x12481b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12481b40)));
  /* 1245b2cd push ecx */
  push32((uint32_t)(ECX));
  /* 1245b2ce call dword ptr [0x12486320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486320))), 0x1245b2d4u);
  /* 1245b2d4 pop ebp */
  EBP = (pop32());
  /* 1245b2d5 ret  */
  ESPCHK(0x1245b2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2e0 @ 0x1245b2e0 (26 bytes, 10 insns) */
void f_1245b2e0(void) {
  FTRACE(0x1245b2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b2e1 mov ebp, esp */
  EBP = (ESP);
  /* 1245b2e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b2e6 push eax */
  push32((uint32_t)(EAX));
  /* 1245b2e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245b2e9 call dword ptr [0x1248631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1248631c))), 0x1245b2efu);
  /* 1245b2ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 1245b2f4 call dword ptr [0x12486364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486364))), 0x1245b2fau);
  /* 1245b2fa pop ebp */
  EBP = (pop32());
  /* 1245b2fb ret  */
  ESPCHK(0x1245b2e0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1245b300 (446 bytes, 130 insns) */
void f_1245b300(void) {
  FTRACE(0x1245b300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b300 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b301 mov ebp, esp */
  EBP = (ESP);
  /* 1245b303 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245b306 call 0x12457260 */
  push32(0x1245b30bu); f_12457260();
  /* 1245b30b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245b30e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b311 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1245b314 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b315 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b318 push edx */
  push32((uint32_t)(EDX));
  /* 1245b319 call 0x1245b4c0 */
  push32(0x1245b31eu); f_1245b4c0();
  /* 1245b31e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b321 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1245b324 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b328 je 0x1245b333 */
  if (C.zf) goto L_1245b333;
  /* 1245b32a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b32d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b331 jne 0x1245b342 */
  if (!C.zf) goto L_1245b342;
L_1245b333:;
  /* 1245b333 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b336 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b337 call dword ptr [0x12486318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486318))), 0x1245b33du);
  /* 1245b33d jmp 0x1245b4ba */
  goto L_1245b4ba;
L_1245b342:;
  /* 1245b342 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b345 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b349 jne 0x1245b35f */
  if (!C.zf) goto L_1245b35f;
  /* 1245b34b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b34e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1245b355 mov eax, 1 */
  EAX = (0x1u);
  /* 1245b35a jmp 0x1245b4ba */
  goto L_1245b4ba;
L_1245b35f:;
  /* 1245b35f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b362 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b366 jne 0x1245b370 */
  if (!C.zf) goto L_1245b370;
  /* 1245b368 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1245b36b jmp 0x1245b4ba */
  goto L_1245b4ba;
L_1245b370:;
  /* 1245b370 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b373 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1245b376 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245b379 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b37c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1245b37f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1245b382 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b385 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b388 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1245b38b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b38e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b392 jne 0x1245b497 */
  if (!C.zf) goto L_1245b497;
  /* 1245b398 mov eax, dword ptr [0x12481c78] */
  EAX = (r32((uint32_t)(0x12481c78)));
  /* 1245b39d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1245b3a0 jmp 0x1245b3ab */
  goto L_1245b3ab;
L_1245b3a2:;
  /* 1245b3a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245b3a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b3a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1245b3ab:;
  /* 1245b3ab mov edx, dword ptr [0x12481c78] */
  EDX = (r32((uint32_t)(0x12481c78)));
  /* 1245b3b1 add edx, dword ptr [0x12481c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12481c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b3b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b3ba jge 0x1245b3d2 */
  if ((C.sf==C.of)) goto L_1245b3d2;
  /* 1245b3bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245b3bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245b3c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b3c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1245b3c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1245b3d0 jmp 0x1245b3a2 */
  goto L_1245b3a2;
L_1245b3d2:;
  /* 1245b3d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b3d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1245b3d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1245b3db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b3de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b3e4 jne 0x1245b3f5 */
  if (!C.zf) goto L_1245b3f5;
  /* 1245b3e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b3e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1245b3f0 jmp 0x1245b47d */
  goto L_1245b47d;
L_1245b3f5:;
  /* 1245b3f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b3f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b3fe jne 0x1245b40c */
  if (!C.zf) goto L_1245b40c;
  /* 1245b400 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b403 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1245b40a jmp 0x1245b47d */
  goto L_1245b47d;
L_1245b40c:;
  /* 1245b40c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b40f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b415 jne 0x1245b423 */
  if (!C.zf) goto L_1245b423;
  /* 1245b417 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b41a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1245b421 jmp 0x1245b47d */
  goto L_1245b47d;
L_1245b423:;
  /* 1245b423 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b426 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b42c jne 0x1245b43a */
  if (!C.zf) goto L_1245b43a;
  /* 1245b42e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b431 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1245b438 jmp 0x1245b47d */
  goto L_1245b47d;
L_1245b43a:;
  /* 1245b43a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b43d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b443 jne 0x1245b451 */
  if (!C.zf) goto L_1245b451;
  /* 1245b445 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b448 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1245b44f jmp 0x1245b47d */
  goto L_1245b47d;
L_1245b451:;
  /* 1245b451 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b454 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b45a jne 0x1245b468 */
  if (!C.zf) goto L_1245b468;
  /* 1245b45c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b45f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1245b466 jmp 0x1245b47d */
  goto L_1245b47d;
L_1245b468:;
  /* 1245b468 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b46b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b471 jne 0x1245b47d */
  if (!C.zf) goto L_1245b47d;
  /* 1245b473 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b476 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1245b47d:;
  /* 1245b47d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b480 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1245b483 push edx */
  push32((uint32_t)(EDX));
  /* 1245b484 push 8 */
  push32((uint32_t)(0x8u));
  /* 1245b486 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1245b489u);
  /* 1245b489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b48c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b48f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245b492 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1245b495 jmp 0x1245b4ae */
  goto L_1245b4ae;
L_1245b497:;
  /* 1245b497 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b49a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1245b4a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b4a4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1245b4a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b4a8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1245b4abu);
  /* 1245b4ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245b4ae:;
  /* 1245b4ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b4b1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1245b4b4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1245b4b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1245b4ba:;
  /* 1245b4ba mov esp, ebp */
  ESP = (EBP);
  /* 1245b4bc pop ebp */
  EBP = (pop32());
  /* 1245b4bd ret  */
  ESPCHK(0x1245b300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4c0 @ 0x1245b4c0 (89 bytes, 35 insns) */
void f_1245b4c0(void) {
  FTRACE(0x1245b4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1245b4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b4c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b4c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1245b4ca:;
  /* 1245b4ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b4cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1245b4cf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b4d2 je 0x1245b4f2 */
  if (C.zf) goto L_1245b4f2;
  /* 1245b4d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b4d7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b4da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245b4dd mov ecx, dword ptr [0x12481c84] */
  ECX = (r32((uint32_t)(0x12481c84)));
  /* 1245b4e3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245b4e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b4e9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b4eb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b4ee jae 0x1245b4f2 */
  if (!C.cf) goto L_1245b4f2;
  /* 1245b4f0 jmp 0x1245b4ca */
  goto L_1245b4ca;
L_1245b4f2:;
  /* 1245b4f2 mov eax, dword ptr [0x12481c84] */
  EAX = (r32((uint32_t)(0x12481c84)));
  /* 1245b4f7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1245b4fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b4fd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b4ff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b502 jae 0x1245b50e */
  if (!C.cf) goto L_1245b50e;
  /* 1245b504 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b507 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1245b509 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b50c je 0x1245b512 */
  if (C.zf) goto L_1245b512;
L_1245b50e:;
  /* 1245b50e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b510 jmp 0x1245b515 */
  goto L_1245b515;
L_1245b512:;
  /* 1245b512 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1245b515:;
  /* 1245b515 mov esp, ebp */
  ESP = (EBP);
  /* 1245b517 pop ebp */
  EBP = (pop32());
  /* 1245b518 ret  */
  ESPCHK(0x1245b4c0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1245b520 (48 bytes, 17 insns) */
void f_1245b520(void) {
  FTRACE(0x1245b520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b520 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b521 mov ebp, esp */
  EBP = (ESP);
  /* 1245b523 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b524 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b526 call 0x1245b220 */
  push32(0x1245b52bu); f_1245b220();
  /* 1245b52b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b52e mov eax, dword ptr [0x12483a44] */
  EAX = (r32((uint32_t)(0x12483a44)));
  /* 1245b533 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245b536 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b539 mov dword ptr [0x12483a44], ecx */
  w32((uint32_t)(0x12483a44), (ECX));
  /* 1245b53f push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b541 call 0x1245b2c0 */
  push32(0x1245b546u); f_1245b2c0();
  /* 1245b546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b54c mov esp, ebp */
  ESP = (EBP);
  /* 1245b54e pop ebp */
  EBP = (pop32());
  /* 1245b54f ret  */
  ESPCHK(0x1245b520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b550 @ 0x1245b550 (10 bytes, 5 insns) */
void f_1245b550(void) {
  FTRACE(0x1245b550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b550 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b551 mov ebp, esp */
  EBP = (ESP);
  /* 1245b553 mov eax, dword ptr [0x12483a44] */
  EAX = (r32((uint32_t)(0x12483a44)));
  /* 1245b558 pop ebp */
  EBP = (pop32());
  /* 1245b559 ret  */
  ESPCHK(0x1245b550u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1245b560 (45 bytes, 19 insns) */
void f_1245b560(void) {
  FTRACE(0x1245b560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b560 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b561 mov ebp, esp */
  EBP = (ESP);
  /* 1245b563 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b564 mov eax, dword ptr [0x12483a44] */
  EAX = (r32((uint32_t)(0x12483a44)));
  /* 1245b569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245b56c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b570 je 0x1245b580 */
  if (C.zf) goto L_1245b580;
  /* 1245b572 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b575 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b576 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1245b579u);
  /* 1245b579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b57c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245b57e jne 0x1245b584 */
  if (!C.zf) goto L_1245b584;
L_1245b580:;
  /* 1245b580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b582 jmp 0x1245b589 */
  goto L_1245b589;
L_1245b584:;
  /* 1245b584 mov eax, 1 */
  EAX = (0x1u);
L_1245b589:;
  /* 1245b589 mov esp, ebp */
  ESP = (EBP);
  /* 1245b58b pop ebp */
  EBP = (pop32());
  /* 1245b58c ret  */
  ESPCHK(0x1245b560u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1245b590 (88 bytes, 40 insns) */
void f_1245b590(void) {
  FTRACE(0x1245b590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b590 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1245b594 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1245b598 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245b59a je 0x1245b5e3 */
  if (C.zf) goto L_1245b5e3;
  /* 1245b59c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b59e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1245b5a2 push edi */
  push32((uint32_t)(EDI));
  /* 1245b5a3 mov edi, ecx */
  EDI = (ECX);
  /* 1245b5a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b5a8 jb 0x1245b5d7 */
  if (C.cf) goto L_1245b5d7;
  /* 1245b5aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1245b5ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1245b5af je 0x1245b5b9 */
  if (C.zf) goto L_1245b5b9;
  /* 1245b5b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1245b5b3:;
  /* 1245b5b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245b5b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1245b5b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1245b5b7 jne 0x1245b5b3 */
  if (!C.zf) goto L_1245b5b3;
L_1245b5b9:;
  /* 1245b5b9 mov ecx, eax */
  ECX = (EAX);
  /* 1245b5bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1245b5be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b5c0 mov ecx, eax */
  ECX = (EAX);
  /* 1245b5c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1245b5c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b5c7 mov ecx, edx */
  ECX = (EDX);
  /* 1245b5c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1245b5cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1245b5cf je 0x1245b5d7 */
  if (C.zf) goto L_1245b5d7;
  /* 1245b5d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1245b5d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1245b5d5 je 0x1245b5dd */
  if (C.zf) goto L_1245b5dd;
L_1245b5d7:;
  /* 1245b5d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1245b5d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1245b5da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1245b5db jne 0x1245b5d7 */
  if (!C.zf) goto L_1245b5d7;
L_1245b5dd:;
  /* 1245b5dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1245b5e1 pop edi */
  EDI = (pop32());
  /* 1245b5e2 ret  */
  ESPCHK(0x1245b590u, _esp0);
  ESP += 4; return;
L_1245b5e3:;
  /* 1245b5e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1245b5e7 ret  */
  ESPCHK(0x1245b590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5f0 @ 0x1245b5f0 (23 bytes, 10 insns) */
void f_1245b5f0(void) {
  FTRACE(0x1245b5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1245b5f3 mov eax, dword ptr [0x12483a40] */
  EAX = (r32((uint32_t)(0x12483a40)));
  /* 1245b5f8 push eax */
  push32((uint32_t)(EAX));
  /* 1245b5f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b5fc push ecx */
  push32((uint32_t)(ECX));
  /* 1245b5fd call 0x1245b610 */
  push32(0x1245b602u); f_1245b610();
  /* 1245b602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b605 pop ebp */
  EBP = (pop32());
  /* 1245b606 ret  */
  ESPCHK(0x1245b5f0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1245b610 (87 bytes, 34 insns) */
void f_1245b610(void) {
  FTRACE(0x1245b610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b610 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b611 mov ebp, esp */
  EBP = (ESP);
  /* 1245b613 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b614 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b618 jbe 0x1245b61e */
  if ((C.cf||C.zf)) goto L_1245b61e;
  /* 1245b61a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b61c jmp 0x1245b663 */
  goto L_1245b663;
L_1245b61e:;
  /* 1245b61e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b622 ja 0x1245b635 */
  if ((!C.cf&&!C.zf)) goto L_1245b635;
  /* 1245b624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b627 push eax */
  push32((uint32_t)(EAX));
  /* 1245b628 call 0x1245b670 */
  push32(0x1245b62du); f_1245b670();
  /* 1245b62d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b630 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245b633 jmp 0x1245b63c */
  goto L_1245b63c;
L_1245b635:;
  /* 1245b635 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1245b63c:;
  /* 1245b63c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b640 jne 0x1245b648 */
  if (!C.zf) goto L_1245b648;
  /* 1245b642 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b646 jne 0x1245b64d */
  if (!C.zf) goto L_1245b64d;
L_1245b648:;
  /* 1245b648 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b64b jmp 0x1245b663 */
  goto L_1245b663;
L_1245b64d:;
  /* 1245b64d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b650 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b651 call 0x1245b560 */
  push32(0x1245b656u); f_1245b560();
  /* 1245b656 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245b65b jne 0x1245b661 */
  if (!C.zf) goto L_1245b661;
  /* 1245b65d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b65f jmp 0x1245b663 */
  goto L_1245b663;
L_1245b661:;
  /* 1245b661 jmp 0x1245b61e */
  goto L_1245b61e;
L_1245b663:;
  /* 1245b663 mov esp, ebp */
  ESP = (EBP);
  /* 1245b665 pop ebp */
  EBP = (pop32());
  /* 1245b666 ret  */
  ESPCHK(0x1245b610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b670 @ 0x1245b670 (109 bytes, 37 insns) */
void f_1245b670(void) {
  FTRACE(0x1245b670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b670 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b671 mov ebp, esp */
  EBP = (ESP);
  /* 1245b673 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b677 cmp eax, dword ptr [0x12481c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12481c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b67d ja 0x1245b6ad */
  if ((!C.cf&&!C.zf)) goto L_1245b6ad;
  /* 1245b67f push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b681 call 0x1245b220 */
  push32(0x1245b686u); f_1245b220();
  /* 1245b686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b689 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b68c push ecx */
  push32((uint32_t)(ECX));
  /* 1245b68d call 0x1245c1b0 */
  push32(0x1245b692u); f_1245c1b0();
  /* 1245b692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b695 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245b698 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b69a call 0x1245b2c0 */
  push32(0x1245b69fu); f_1245b2c0();
  /* 1245b69f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b6a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b6a6 je 0x1245b6ad */
  if (C.zf) goto L_1245b6ad;
  /* 1245b6a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b6ab jmp 0x1245b6d9 */
  goto L_1245b6d9;
L_1245b6ad:;
  /* 1245b6ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b6b1 jne 0x1245b6ba */
  if (!C.zf) goto L_1245b6ba;
  /* 1245b6b3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1245b6ba:;
  /* 1245b6ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b6bd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b6c0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1245b6c3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1245b6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b6c9 push eax */
  push32((uint32_t)(EAX));
  /* 1245b6ca push 0 */
  push32((uint32_t)(0x0u));
  /* 1245b6cc mov ecx, dword ptr [0x1248520c] */
  ECX = (r32((uint32_t)(0x1248520c)));
  /* 1245b6d2 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b6d3 call dword ptr [0x12486314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486314))), 0x1245b6d9u);
L_1245b6d9:;
  /* 1245b6d9 mov esp, ebp */
  ESP = (EBP);
  /* 1245b6db pop ebp */
  EBP = (pop32());
  /* 1245b6dc ret  */
  ESPCHK(0x1245b670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6e0 @ 0x1245b6e0 (10 bytes, 5 insns) */
void f_1245b6e0(void) {
  FTRACE(0x1245b6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1245b6e3 mov eax, 1 */
  EAX = (0x1u);
  /* 1245b6e8 pop ebp */
  EBP = (pop32());
  /* 1245b6e9 ret  */
  ESPCHK(0x1245b6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6f0 @ 0x1245b6f0 (173 bytes, 59 insns) */
void f_1245b6f0(void) {
  FTRACE(0x1245b6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1245b6f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245b6f6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b6fa jbe 0x1245b703 */
  if ((C.cf||C.zf)) goto L_1245b703;
  /* 1245b6fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b6fe jmp 0x1245b799 */
  goto L_1245b799;
L_1245b703:;
  /* 1245b703 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b705 call 0x1245b220 */
  push32(0x1245b70au); f_1245b220();
  /* 1245b70a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b70d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b710 push eax */
  push32((uint32_t)(EAX));
  /* 1245b711 call 0x1245bb20 */
  push32(0x1245b716u); f_1245bb20();
  /* 1245b716 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b719 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245b71c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b720 je 0x1245b761 */
  if (C.zf) goto L_1245b761;
  /* 1245b722 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1245b729 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b72c cmp ecx, dword ptr [0x12481c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12481c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b732 ja 0x1245b752 */
  if ((!C.cf&&!C.zf)) goto L_1245b752;
  /* 1245b734 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b737 push edx */
  push32((uint32_t)(EDX));
  /* 1245b738 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b73b push eax */
  push32((uint32_t)(EAX));
  /* 1245b73c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b73f push ecx */
  push32((uint32_t)(ECX));
  /* 1245b740 call 0x1245c9f0 */
  push32(0x1245b745u); f_1245c9f0();
  /* 1245b745 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b748 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245b74a je 0x1245b752 */
  if (C.zf) goto L_1245b752;
  /* 1245b74c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b74f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1245b752:;
  /* 1245b752 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b754 call 0x1245b2c0 */
  push32(0x1245b759u); f_1245b2c0();
  /* 1245b759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b75c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b75f jmp 0x1245b799 */
  goto L_1245b799;
L_1245b761:;
  /* 1245b761 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b763 call 0x1245b2c0 */
  push32(0x1245b768u); f_1245b2c0();
  /* 1245b768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b76b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b76f jne 0x1245b778 */
  if (!C.zf) goto L_1245b778;
  /* 1245b771 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1245b778:;
  /* 1245b778 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b77b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b77e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1245b780 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1245b783 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b786 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b787 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b78a push edx */
  push32((uint32_t)(EDX));
  /* 1245b78b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1245b78d mov eax, dword ptr [0x1248520c] */
  EAX = (r32((uint32_t)(0x1248520c)));
  /* 1245b792 push eax */
  push32((uint32_t)(EAX));
  /* 1245b793 call dword ptr [0x12486310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486310))), 0x1245b799u);
L_1245b799:;
  /* 1245b799 mov esp, ebp */
  ESP = (EBP);
  /* 1245b79b pop ebp */
  EBP = (pop32());
  /* 1245b79c ret  */
  ESPCHK(0x1245b6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x1245b7a0 (490 bytes, 165 insns) */
void f_1245b7a0(void) {
  FTRACE(0x1245b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1245b7a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245b7a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b7aa jne 0x1245b7bd */
  if (!C.zf) goto L_1245b7bd;
  /* 1245b7ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b7af push eax */
  push32((uint32_t)(EAX));
  /* 1245b7b0 call 0x1245b5f0 */
  push32(0x1245b7b5u); f_1245b5f0();
  /* 1245b7b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b7b8 jmp 0x1245b986 */
  goto L_1245b986;
L_1245b7bd:;
  /* 1245b7bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b7c1 jne 0x1245b7d6 */
  if (!C.zf) goto L_1245b7d6;
  /* 1245b7c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b7c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b7c7 call 0x1245b990 */
  push32(0x1245b7ccu); f_1245b990();
  /* 1245b7cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b7cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b7d1 jmp 0x1245b986 */
  goto L_1245b986;
L_1245b7d6:;
  /* 1245b7d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1245b7dd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b7e1 ja 0x1245b959 */
  if ((!C.cf&&!C.zf)) goto L_1245b959;
  /* 1245b7e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b7e9 call 0x1245b220 */
  push32(0x1245b7eeu); f_1245b220();
  /* 1245b7ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b7f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b7f4 push edx */
  push32((uint32_t)(EDX));
  /* 1245b7f5 call 0x1245bb20 */
  push32(0x1245b7fau); f_1245bb20();
  /* 1245b7fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b7fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1245b800 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b804 je 0x1245b91c */
  if (C.zf) goto L_1245b91c;
  /* 1245b80a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b80d cmp eax, dword ptr [0x12481c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12481c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b813 ja 0x1245b890 */
  if ((!C.cf&&!C.zf)) goto L_1245b890;
  /* 1245b815 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b818 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b819 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b81c push edx */
  push32((uint32_t)(EDX));
  /* 1245b81d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245b820 push eax */
  push32((uint32_t)(EAX));
  /* 1245b821 call 0x1245c9f0 */
  push32(0x1245b826u); f_1245c9f0();
  /* 1245b826 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245b82b je 0x1245b835 */
  if (C.zf) goto L_1245b835;
  /* 1245b82d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b830 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1245b833 jmp 0x1245b890 */
  goto L_1245b890;
L_1245b835:;
  /* 1245b835 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b838 push edx */
  push32((uint32_t)(EDX));
  /* 1245b839 call 0x1245c1b0 */
  push32(0x1245b83eu); f_1245c1b0();
  /* 1245b83e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b841 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245b844 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b848 je 0x1245b890 */
  if (C.zf) goto L_1245b890;
  /* 1245b84a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b84d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1245b850 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245b853 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1245b856 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b859 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b85c jae 0x1245b866 */
  if (!C.cf) goto L_1245b866;
  /* 1245b85e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b861 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1245b864 jmp 0x1245b86c */
  goto L_1245b86c;
L_1245b866:;
  /* 1245b866 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b869 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1245b86c:;
  /* 1245b86c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1245b86f push edx */
  push32((uint32_t)(EDX));
  /* 1245b870 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b873 push eax */
  push32((uint32_t)(EAX));
  /* 1245b874 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b877 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b878 call 0x1245e100 */
  push32(0x1245b87du); f_1245e100();
  /* 1245b87d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b880 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b883 push edx */
  push32((uint32_t)(EDX));
  /* 1245b884 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245b887 push eax */
  push32((uint32_t)(EAX));
  /* 1245b888 call 0x1245bbe0 */
  push32(0x1245b88du); f_1245bbe0();
  /* 1245b88d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245b890:;
  /* 1245b890 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b894 jne 0x1245b910 */
  if (!C.zf) goto L_1245b910;
  /* 1245b896 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b89a jne 0x1245b8a3 */
  if (!C.zf) goto L_1245b8a3;
  /* 1245b89c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1245b8a3:;
  /* 1245b8a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b8a6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b8a9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1245b8ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1245b8af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b8b2 push edx */
  push32((uint32_t)(EDX));
  /* 1245b8b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245b8b5 mov eax, dword ptr [0x1248520c] */
  EAX = (r32((uint32_t)(0x1248520c)));
  /* 1245b8ba push eax */
  push32((uint32_t)(EAX));
  /* 1245b8bb call dword ptr [0x12486314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486314))), 0x1245b8c1u);
  /* 1245b8c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1245b8c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b8c8 je 0x1245b910 */
  if (C.zf) goto L_1245b910;
  /* 1245b8ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b8cd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1245b8d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1245b8d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1245b8d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b8d9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b8dc jae 0x1245b8e6 */
  if (!C.cf) goto L_1245b8e6;
  /* 1245b8de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b8e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1245b8e4 jmp 0x1245b8ec */
  goto L_1245b8ec;
L_1245b8e6:;
  /* 1245b8e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b8e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1245b8ec:;
  /* 1245b8ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1245b8ef push eax */
  push32((uint32_t)(EAX));
  /* 1245b8f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b8f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b8f7 push edx */
  push32((uint32_t)(EDX));
  /* 1245b8f8 call 0x1245e100 */
  push32(0x1245b8fdu); f_1245e100();
  /* 1245b8fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b903 push eax */
  push32((uint32_t)(EAX));
  /* 1245b904 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1245b907 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b908 call 0x1245bbe0 */
  push32(0x1245b90du); f_1245bbe0();
  /* 1245b90d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1245b910:;
  /* 1245b910 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b912 call 0x1245b2c0 */
  push32(0x1245b917u); f_1245b2c0();
  /* 1245b917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b91a jmp 0x1245b959 */
  goto L_1245b959;
L_1245b91c:;
  /* 1245b91c push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b91e call 0x1245b2c0 */
  push32(0x1245b923u); f_1245b2c0();
  /* 1245b923 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b926 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b92a jne 0x1245b933 */
  if (!C.zf) goto L_1245b933;
  /* 1245b92c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1245b933:;
  /* 1245b933 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b936 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b939 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1245b93c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1245b93f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b942 push eax */
  push32((uint32_t)(EAX));
  /* 1245b943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b946 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b947 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245b949 mov edx, dword ptr [0x1248520c] */
  EDX = (r32((uint32_t)(0x1248520c)));
  /* 1245b94f push edx */
  push32((uint32_t)(EDX));
  /* 1245b950 call dword ptr [0x12486310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486310))), 0x1245b956u);
  /* 1245b956 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1245b959:;
  /* 1245b959 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b95d jne 0x1245b968 */
  if (!C.zf) goto L_1245b968;
  /* 1245b95f cmp dword ptr [0x12483a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12483a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b966 jne 0x1245b96d */
  if (!C.zf) goto L_1245b96d;
L_1245b968:;
  /* 1245b968 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1245b96b jmp 0x1245b986 */
  goto L_1245b986;
L_1245b96d:;
  /* 1245b96d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1245b970 push eax */
  push32((uint32_t)(EAX));
  /* 1245b971 call 0x1245b560 */
  push32(0x1245b976u); f_1245b560();
  /* 1245b976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1245b97b jne 0x1245b981 */
  if (!C.zf) goto L_1245b981;
  /* 1245b97d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1245b97f jmp 0x1245b986 */
  goto L_1245b986;
L_1245b981:;
  /* 1245b981 jmp 0x1245b7d6 */
  goto L_1245b7d6;
L_1245b986:;
  /* 1245b986 mov esp, ebp */
  ESP = (EBP);
  /* 1245b988 pop ebp */
  EBP = (pop32());
  /* 1245b989 ret  */
  ESPCHK(0x1245b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b990 @ 0x1245b990 (104 bytes, 38 insns) */
void f_1245b990(void) {
  FTRACE(0x1245b990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1245b990 push ebp */
  push32((uint32_t)(EBP));
  /* 1245b991 mov ebp, esp */
  EBP = (ESP);
  /* 1245b993 push ecx */
  push32((uint32_t)(ECX));
  /* 1245b994 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b998 jne 0x1245b99c */
  if (!C.zf) goto L_1245b99c;
  /* 1245b99a jmp 0x1245b9f4 */
  goto L_1245b9f4;
L_1245b99c:;
  /* 1245b99c push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b99e call 0x1245b220 */
  push32(0x1245b9a3u); f_1245b220();
  /* 1245b9a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b9a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b9a9 push eax */
  push32((uint32_t)(EAX));
  /* 1245b9aa call 0x1245bb20 */
  push32(0x1245b9afu); f_1245bb20();
  /* 1245b9af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b9b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1245b9b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1245b9b9 je 0x1245b9d7 */
  if (C.zf) goto L_1245b9d7;
  /* 1245b9bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b9be push ecx */
  push32((uint32_t)(ECX));
  /* 1245b9bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1245b9c2 push edx */
  push32((uint32_t)(EDX));
  /* 1245b9c3 call 0x1245bbe0 */
  push32(0x1245b9c8u); f_1245bbe0();
  /* 1245b9c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b9cb push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b9cd call 0x1245b2c0 */
  push32(0x1245b9d2u); f_1245b2c0();
  /* 1245b9d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b9d5 jmp 0x1245b9f4 */
  goto L_1245b9f4;
L_1245b9d7:;
  /* 1245b9d7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1245b9d9 call 0x1245b2c0 */
  push32(0x1245b9deu); f_1245b2c0();
  /* 1245b9de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1245b9e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1245b9e4 push eax */
  push32((uint32_t)(EAX));
  /* 1245b9e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1245b9e7 mov ecx, dword ptr [0x1248520c] */
  ECX = (r32((uint32_t)(0x1248520c)));
  /* 1245b9ed push ecx */
  push32((uint32_t)(ECX));
  /* 1245b9ee call dword ptr [0x12486334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12486334))), 0x1245b9f4u);
L_1245b9f4:;
  /* 1245b9f4 mov esp, ebp */
  ESP = (EBP);
  /* 1245b9f6 pop ebp */
  EBP = (pop32());
  /* 1245b9f7 ret  */
  ESPCHK(0x1245b990u, _esp0);
  ESP += 4; return;
}

