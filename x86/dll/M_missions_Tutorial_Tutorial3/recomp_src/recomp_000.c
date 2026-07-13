#include "recomp.h"

/* OnInit @ 0x12411005 (5 bytes, 1 insns) */
void f_12411005(void) {
  FTRACE(0x12411005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12411005 jmp 0x12411090 */
  f_12411090(); return;
}

/* thunk_FUN_10001030 @ 0x1241100a (5 bytes, 1 insns) */
void f_1241100a(void) {
  FTRACE(0x1241100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241100a jmp 0x12411030 */
  f_12411030(); return;
}

/* ProcessScenary @ 0x1241100f (5 bytes, 1 insns) */
void f_1241100f(void) {
  FTRACE(0x1241100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241100f jmp 0x12412100 */
  f_12412100(); return;
}

/* FUN_10001030 @ 0x12411030 (67 bytes, 26 insns) */
void f_12411030(void) {
  FTRACE(0x12411030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12411030 push ebp */
  push32((uint32_t)(EBP));
  /* 12411031 mov ebp, esp */
  EBP = (ESP);
  /* 12411033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12411036 push ebx */
  push32((uint32_t)(EBX));
  /* 12411037 push esi */
  push32((uint32_t)(ESI));
  /* 12411038 push edi */
  push32((uint32_t)(EDI));
  /* 12411039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1241103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12411041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12411046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12411048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411052 je 0x12411056 */
  if (C.zf) goto L_12411056;
  /* 12411054 jmp 0x1241105b */
  goto L_1241105b;
L_12411056:;
  /* 12411056 call 0x12411005 */
  push32(0x1241105bu); f_12411005();
L_1241105b:;
  /* 1241105b mov eax, 1 */
  EAX = (0x1u);
  /* 12411060 pop edi */
  EDI = (pop32());
  /* 12411061 pop esi */
  ESI = (pop32());
  /* 12411062 pop ebx */
  EBX = (pop32());
  /* 12411063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411068 call 0x12415730 */
  push32(0x1241106du); f_12415730();
  /* 1241106d mov esp, ebp */
  ESP = (EBP);
  /* 1241106f pop ebp */
  EBP = (pop32());
  /* 12411070 ret 0xc */
  ESPCHK(0x12411030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12411090 (3355 bytes, 859 insns) */
void f_12411090(void) {
  FTRACE(0x12411090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12411090 push ebp */
  push32((uint32_t)(EBP));
  /* 12411091 mov ebp, esp */
  EBP = (ESP);
  /* 12411093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12411096 push ebx */
  push32((uint32_t)(EBX));
  /* 12411097 push esi */
  push32((uint32_t)(ESI));
  /* 12411098 push edi */
  push32((uint32_t)(EDI));
  /* 12411099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1241109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 124110a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 124110a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 124110a8 mov esi, esp */
  ESI = (ESP);
  /* 124110aa push 0x1243d63c */
  push32((uint32_t)(0x1243d63cu));
  /* 124110af push 0x12442518 */
  push32((uint32_t)(0x12442518u));
  /* 124110b4 call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x124110bau);
  /* 124110ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124110bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124110bf call 0x12415730 */
  push32(0x124110c4u); f_12415730();
  /* 124110c4 mov esi, esp */
  ESI = (ESP);
  /* 124110c6 push 0x1243d638 */
  push32((uint32_t)(0x1243d638u));
  /* 124110cb push 0x12442520 */
  push32((uint32_t)(0x12442520u));
  /* 124110d0 call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x124110d6u);
  /* 124110d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124110d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124110db call 0x12415730 */
  push32(0x124110e0u); f_12415730();
  /* 124110e0 mov esi, esp */
  ESI = (ESP);
  /* 124110e2 push 0x1243d634 */
  push32((uint32_t)(0x1243d634u));
  /* 124110e7 push 0x12442528 */
  push32((uint32_t)(0x12442528u));
  /* 124110ec call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x124110f2u);
  /* 124110f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124110f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124110f7 call 0x12415730 */
  push32(0x124110fcu); f_12415730();
  /* 124110fc mov esi, esp */
  ESI = (ESP);
  /* 124110fe push 0x1243d630 */
  push32((uint32_t)(0x1243d630u));
  /* 12411103 push 0x12442530 */
  push32((uint32_t)(0x12442530u));
  /* 12411108 call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x1241110eu);
  /* 1241110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411113 call 0x12415730 */
  push32(0x12411118u); f_12415730();
  /* 12411118 mov esi, esp */
  ESI = (ESP);
  /* 1241111a push 0x1243d62c */
  push32((uint32_t)(0x1243d62cu));
  /* 1241111f push 0x12442538 */
  push32((uint32_t)(0x12442538u));
  /* 12411124 call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x1241112au);
  /* 1241112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241112f call 0x12415730 */
  push32(0x12411134u); f_12415730();
  /* 12411134 mov esi, esp */
  ESI = (ESP);
  /* 12411136 push 0x1243d628 */
  push32((uint32_t)(0x1243d628u));
  /* 1241113b push 0x12442540 */
  push32((uint32_t)(0x12442540u));
  /* 12411140 call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x12411146u);
  /* 12411146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241114b call 0x12415730 */
  push32(0x12411150u); f_12415730();
  /* 12411150 mov esi, esp */
  ESI = (ESP);
  /* 12411152 push 0x1243d624 */
  push32((uint32_t)(0x1243d624u));
  /* 12411157 push 0x12442548 */
  push32((uint32_t)(0x12442548u));
  /* 1241115c call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x12411162u);
  /* 12411162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411167 call 0x12415730 */
  push32(0x1241116cu); f_12415730();
  /* 1241116c mov esi, esp */
  ESI = (ESP);
  /* 1241116e push 0x1243d620 */
  push32((uint32_t)(0x1243d620u));
  /* 12411173 push 0x12442550 */
  push32((uint32_t)(0x12442550u));
  /* 12411178 call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x1241117eu);
  /* 1241117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411183 call 0x12415730 */
  push32(0x12411188u); f_12415730();
  /* 12411188 mov esi, esp */
  ESI = (ESP);
  /* 1241118a push 0x1243d61c */
  push32((uint32_t)(0x1243d61cu));
  /* 1241118f push 0x12442558 */
  push32((uint32_t)(0x12442558u));
  /* 12411194 call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x1241119au);
  /* 1241119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241119f call 0x12415730 */
  push32(0x124111a4u); f_12415730();
  /* 124111a4 mov esi, esp */
  ESI = (ESP);
  /* 124111a6 push 0x1243d618 */
  push32((uint32_t)(0x1243d618u));
  /* 124111ab push 0x12442560 */
  push32((uint32_t)(0x12442560u));
  /* 124111b0 call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x124111b6u);
  /* 124111b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124111b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124111bb call 0x12415730 */
  push32(0x124111c0u); f_12415730();
  /* 124111c0 mov esi, esp */
  ESI = (ESP);
  /* 124111c2 push 0x1243d614 */
  push32((uint32_t)(0x1243d614u));
  /* 124111c7 push 0x12442568 */
  push32((uint32_t)(0x12442568u));
  /* 124111cc call dword ptr [0x124454b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b0))), 0x124111d2u);
  /* 124111d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124111d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124111d7 call 0x12415730 */
  push32(0x124111dcu); f_12415730();
  /* 124111dc mov esi, esp */
  ESI = (ESP);
  /* 124111de push 0x1243d610 */
  push32((uint32_t)(0x1243d610u));
  /* 124111e3 push 0x124424f8 */
  push32((uint32_t)(0x124424f8u));
  /* 124111e8 call dword ptr [0x124454b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b4))), 0x124111eeu);
  /* 124111ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124111f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124111f3 call 0x12415730 */
  push32(0x124111f8u); f_12415730();
  /* 124111f8 mov esi, esp */
  ESI = (ESP);
  /* 124111fa push 0x1243d60c */
  push32((uint32_t)(0x1243d60cu));
  /* 124111ff push 0x12442500 */
  push32((uint32_t)(0x12442500u));
  /* 12411204 call dword ptr [0x124454b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b4))), 0x1241120au);
  /* 1241120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241120f call 0x12415730 */
  push32(0x12411214u); f_12415730();
  /* 12411214 mov esi, esp */
  ESI = (ESP);
  /* 12411216 push 0x1243d608 */
  push32((uint32_t)(0x1243d608u));
  /* 1241121b push 0x12442508 */
  push32((uint32_t)(0x12442508u));
  /* 12411220 call dword ptr [0x124454b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b4))), 0x12411226u);
  /* 12411226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241122b call 0x12415730 */
  push32(0x12411230u); f_12415730();
  /* 12411230 mov esi, esp */
  ESI = (ESP);
  /* 12411232 push 0x1243d604 */
  push32((uint32_t)(0x1243d604u));
  /* 12411237 push 0x12442510 */
  push32((uint32_t)(0x12442510u));
  /* 1241123c call dword ptr [0x124454b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b4))), 0x12411242u);
  /* 12411242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411247 call 0x12415730 */
  push32(0x1241124cu); f_12415730();
  /* 1241124c mov esi, esp */
  ESI = (ESP);
  /* 1241124e push 0x1243d5ec */
  push32((uint32_t)(0x1243d5ecu));
  /* 12411253 push 0x12442430 */
  push32((uint32_t)(0x12442430u));
  /* 12411258 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x1241125eu);
  /* 1241125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411263 call 0x12415730 */
  push32(0x12411268u); f_12415730();
  /* 12411268 mov esi, esp */
  ESI = (ESP);
  /* 1241126a push 0x1243d5d8 */
  push32((uint32_t)(0x1243d5d8u));
  /* 1241126f push 0x12442448 */
  push32((uint32_t)(0x12442448u));
  /* 12411274 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x1241127au);
  /* 1241127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241127f call 0x12415730 */
  push32(0x12411284u); f_12415730();
  /* 12411284 mov esi, esp */
  ESI = (ESP);
  /* 12411286 push 0x1243d5c4 */
  push32((uint32_t)(0x1243d5c4u));
  /* 1241128b push 0x12442460 */
  push32((uint32_t)(0x12442460u));
  /* 12411290 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411296u);
  /* 12411296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241129b call 0x12415730 */
  push32(0x124112a0u); f_12415730();
  /* 124112a0 mov esi, esp */
  ESI = (ESP);
  /* 124112a2 push 0x1243d5b4 */
  push32((uint32_t)(0x1243d5b4u));
  /* 124112a7 push 0x12442478 */
  push32((uint32_t)(0x12442478u));
  /* 124112ac call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124112b2u);
  /* 124112b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124112b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124112b7 call 0x12415730 */
  push32(0x124112bcu); f_12415730();
  /* 124112bc mov esi, esp */
  ESI = (ESP);
  /* 124112be push 0x1243d5a4 */
  push32((uint32_t)(0x1243d5a4u));
  /* 124112c3 push 0x12442488 */
  push32((uint32_t)(0x12442488u));
  /* 124112c8 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124112ceu);
  /* 124112ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124112d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124112d3 call 0x12415730 */
  push32(0x124112d8u); f_12415730();
  /* 124112d8 mov esi, esp */
  ESI = (ESP);
  /* 124112da push 0x1243d594 */
  push32((uint32_t)(0x1243d594u));
  /* 124112df push 0x12442498 */
  push32((uint32_t)(0x12442498u));
  /* 124112e4 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124112eau);
  /* 124112ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124112ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124112ef call 0x12415730 */
  push32(0x124112f4u); f_12415730();
  /* 124112f4 mov esi, esp */
  ESI = (ESP);
  /* 124112f6 push 0x1243d584 */
  push32((uint32_t)(0x1243d584u));
  /* 124112fb push 0x124424a0 */
  push32((uint32_t)(0x124424a0u));
  /* 12411300 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411306u);
  /* 12411306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241130b call 0x12415730 */
  push32(0x12411310u); f_12415730();
  /* 12411310 mov esi, esp */
  ESI = (ESP);
  /* 12411312 push 0x1243d574 */
  push32((uint32_t)(0x1243d574u));
  /* 12411317 push 0x124424a8 */
  push32((uint32_t)(0x124424a8u));
  /* 1241131c call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411322u);
  /* 12411322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411327 call 0x12415730 */
  push32(0x1241132cu); f_12415730();
  /* 1241132c mov esi, esp */
  ESI = (ESP);
  /* 1241132e push 0x1243d560 */
  push32((uint32_t)(0x1243d560u));
  /* 12411333 push 0x124424b8 */
  push32((uint32_t)(0x124424b8u));
  /* 12411338 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x1241133eu);
  /* 1241133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411343 call 0x12415730 */
  push32(0x12411348u); f_12415730();
  /* 12411348 mov esi, esp */
  ESI = (ESP);
  /* 1241134a push 0x1243d548 */
  push32((uint32_t)(0x1243d548u));
  /* 1241134f push 0x124423e0 */
  push32((uint32_t)(0x124423e0u));
  /* 12411354 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x1241135au);
  /* 1241135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241135f call 0x12415730 */
  push32(0x12411364u); f_12415730();
  /* 12411364 mov esi, esp */
  ESI = (ESP);
  /* 12411366 push 0x1243d530 */
  push32((uint32_t)(0x1243d530u));
  /* 1241136b push 0x124423e8 */
  push32((uint32_t)(0x124423e8u));
  /* 12411370 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411376u);
  /* 12411376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241137b call 0x12415730 */
  push32(0x12411380u); f_12415730();
  /* 12411380 mov esi, esp */
  ESI = (ESP);
  /* 12411382 push 0x1243d520 */
  push32((uint32_t)(0x1243d520u));
  /* 12411387 push 0x124423f0 */
  push32((uint32_t)(0x124423f0u));
  /* 1241138c call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411392u);
  /* 12411392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411397 call 0x12415730 */
  push32(0x1241139cu); f_12415730();
  /* 1241139c mov esi, esp */
  ESI = (ESP);
  /* 1241139e push 0x1243d508 */
  push32((uint32_t)(0x1243d508u));
  /* 124113a3 push 0x124423f8 */
  push32((uint32_t)(0x124423f8u));
  /* 124113a8 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124113aeu);
  /* 124113ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124113b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124113b3 call 0x12415730 */
  push32(0x124113b8u); f_12415730();
  /* 124113b8 mov esi, esp */
  ESI = (ESP);
  /* 124113ba push 0x1243d4fc */
  push32((uint32_t)(0x1243d4fcu));
  /* 124113bf push 0x12442408 */
  push32((uint32_t)(0x12442408u));
  /* 124113c4 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124113cau);
  /* 124113ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124113cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124113cf call 0x12415730 */
  push32(0x124113d4u); f_12415730();
  /* 124113d4 mov esi, esp */
  ESI = (ESP);
  /* 124113d6 push 0x1243d4f0 */
  push32((uint32_t)(0x1243d4f0u));
  /* 124113db push 0x12442418 */
  push32((uint32_t)(0x12442418u));
  /* 124113e0 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124113e6u);
  /* 124113e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124113e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124113eb call 0x12415730 */
  push32(0x124113f0u); f_12415730();
  /* 124113f0 mov esi, esp */
  ESI = (ESP);
  /* 124113f2 push 0x1243d4e0 */
  push32((uint32_t)(0x1243d4e0u));
  /* 124113f7 push 0x12442428 */
  push32((uint32_t)(0x12442428u));
  /* 124113fc call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411402u);
  /* 12411402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411407 call 0x12415730 */
  push32(0x1241140cu); f_12415730();
  /* 1241140c mov esi, esp */
  ESI = (ESP);
  /* 1241140e push 0x1243d4d0 */
  push32((uint32_t)(0x1243d4d0u));
  /* 12411413 push 0x12442440 */
  push32((uint32_t)(0x12442440u));
  /* 12411418 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x1241141eu);
  /* 1241141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411423 call 0x12415730 */
  push32(0x12411428u); f_12415730();
  /* 12411428 mov esi, esp */
  ESI = (ESP);
  /* 1241142a push 0x1243d4c0 */
  push32((uint32_t)(0x1243d4c0u));
  /* 1241142f push 0x12442458 */
  push32((uint32_t)(0x12442458u));
  /* 12411434 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x1241143au);
  /* 1241143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241143f call 0x12415730 */
  push32(0x12411444u); f_12415730();
  /* 12411444 mov esi, esp */
  ESI = (ESP);
  /* 12411446 push 0x1243d4b0 */
  push32((uint32_t)(0x1243d4b0u));
  /* 1241144b push 0x12442470 */
  push32((uint32_t)(0x12442470u));
  /* 12411450 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411456u);
  /* 12411456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241145b call 0x12415730 */
  push32(0x12411460u); f_12415730();
  /* 12411460 mov esi, esp */
  ESI = (ESP);
  /* 12411462 push 0x1243d494 */
  push32((uint32_t)(0x1243d494u));
  /* 12411467 push 0x12442400 */
  push32((uint32_t)(0x12442400u));
  /* 1241146c call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411472u);
  /* 12411472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411477 call 0x12415730 */
  push32(0x1241147cu); f_12415730();
  /* 1241147c mov esi, esp */
  ESI = (ESP);
  /* 1241147e push 0x1243d484 */
  push32((uint32_t)(0x1243d484u));
  /* 12411483 push 0x12442410 */
  push32((uint32_t)(0x12442410u));
  /* 12411488 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x1241148eu);
  /* 1241148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411493 call 0x12415730 */
  push32(0x12411498u); f_12415730();
  /* 12411498 mov esi, esp */
  ESI = (ESP);
  /* 1241149a push 0x1243d468 */
  push32((uint32_t)(0x1243d468u));
  /* 1241149f push 0x12442420 */
  push32((uint32_t)(0x12442420u));
  /* 124114a4 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124114aau);
  /* 124114aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124114ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124114af call 0x12415730 */
  push32(0x124114b4u); f_12415730();
  /* 124114b4 mov esi, esp */
  ESI = (ESP);
  /* 124114b6 push 0x1243d450 */
  push32((uint32_t)(0x1243d450u));
  /* 124114bb push 0x12442438 */
  push32((uint32_t)(0x12442438u));
  /* 124114c0 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124114c6u);
  /* 124114c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124114c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124114cb call 0x12415730 */
  push32(0x124114d0u); f_12415730();
  /* 124114d0 mov esi, esp */
  ESI = (ESP);
  /* 124114d2 push 0x1243d434 */
  push32((uint32_t)(0x1243d434u));
  /* 124114d7 push 0x12442450 */
  push32((uint32_t)(0x12442450u));
  /* 124114dc call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124114e2u);
  /* 124114e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124114e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124114e7 call 0x12415730 */
  push32(0x124114ecu); f_12415730();
  /* 124114ec mov esi, esp */
  ESI = (ESP);
  /* 124114ee push 0x1243d41c */
  push32((uint32_t)(0x1243d41cu));
  /* 124114f3 push 0x12442468 */
  push32((uint32_t)(0x12442468u));
  /* 124114f8 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x124114feu);
  /* 124114fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411503 call 0x12415730 */
  push32(0x12411508u); f_12415730();
  /* 12411508 mov esi, esp */
  ESI = (ESP);
  /* 1241150a push 0x1243d404 */
  push32((uint32_t)(0x1243d404u));
  /* 1241150f push 0x12442480 */
  push32((uint32_t)(0x12442480u));
  /* 12411514 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x1241151au);
  /* 1241151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241151f call 0x12415730 */
  push32(0x12411524u); f_12415730();
  /* 12411524 mov esi, esp */
  ESI = (ESP);
  /* 12411526 push 0x1243d3f4 */
  push32((uint32_t)(0x1243d3f4u));
  /* 1241152b push 0x12442490 */
  push32((uint32_t)(0x12442490u));
  /* 12411530 call dword ptr [0x124454b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454b8))), 0x12411536u);
  /* 12411536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241153b call 0x12415730 */
  push32(0x12411540u); f_12415730();
  /* 12411540 mov esi, esp */
  ESI = (ESP);
  /* 12411542 push 0x1243d3e4 */
  push32((uint32_t)(0x1243d3e4u));
  /* 12411547 push 0x124424f0 */
  push32((uint32_t)(0x124424f0u));
  /* 1241154c call dword ptr [0x124454bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454bc))), 0x12411552u);
  /* 12411552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411557 call 0x12415730 */
  push32(0x1241155cu); f_12415730();
  /* 1241155c mov esi, esp */
  ESI = (ESP);
  /* 1241155e push 0x1243d3cc */
  push32((uint32_t)(0x1243d3ccu));
  /* 12411563 push 0x124425d0 */
  push32((uint32_t)(0x124425d0u));
  /* 12411568 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241156eu);
  /* 1241156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411573 call 0x12415730 */
  push32(0x12411578u); f_12415730();
  /* 12411578 mov esi, esp */
  ESI = (ESP);
  /* 1241157a push 0x1243d3b4 */
  push32((uint32_t)(0x1243d3b4u));
  /* 1241157f push 0x124425f0 */
  push32((uint32_t)(0x124425f0u));
  /* 12411584 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241158au);
  /* 1241158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241158f call 0x12415730 */
  push32(0x12411594u); f_12415730();
  /* 12411594 mov esi, esp */
  ESI = (ESP);
  /* 12411596 push 0x1243d39c */
  push32((uint32_t)(0x1243d39cu));
  /* 1241159b push 0x12442610 */
  push32((uint32_t)(0x12442610u));
  /* 124115a0 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124115a6u);
  /* 124115a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124115a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124115ab call 0x12415730 */
  push32(0x124115b0u); f_12415730();
  /* 124115b0 mov esi, esp */
  ESI = (ESP);
  /* 124115b2 push 0x1243d384 */
  push32((uint32_t)(0x1243d384u));
  /* 124115b7 push 0x12442628 */
  push32((uint32_t)(0x12442628u));
  /* 124115bc call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124115c2u);
  /* 124115c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124115c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124115c7 call 0x12415730 */
  push32(0x124115ccu); f_12415730();
  /* 124115cc mov esi, esp */
  ESI = (ESP);
  /* 124115ce push 0x1243d360 */
  push32((uint32_t)(0x1243d360u));
  /* 124115d3 push 0x12442640 */
  push32((uint32_t)(0x12442640u));
  /* 124115d8 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124115deu);
  /* 124115de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124115e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124115e3 call 0x12415730 */
  push32(0x124115e8u); f_12415730();
  /* 124115e8 mov esi, esp */
  ESI = (ESP);
  /* 124115ea push 0x1243d33c */
  push32((uint32_t)(0x1243d33cu));
  /* 124115ef push 0x12442660 */
  push32((uint32_t)(0x12442660u));
  /* 124115f4 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124115fau);
  /* 124115fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124115fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124115ff call 0x12415730 */
  push32(0x12411604u); f_12415730();
  /* 12411604 mov esi, esp */
  ESI = (ESP);
  /* 12411606 push 0x1243d320 */
  push32((uint32_t)(0x1243d320u));
  /* 1241160b push 0x12442680 */
  push32((uint32_t)(0x12442680u));
  /* 12411610 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411616u);
  /* 12411616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241161b call 0x12415730 */
  push32(0x12411620u); f_12415730();
  /* 12411620 mov esi, esp */
  ESI = (ESP);
  /* 12411622 push 0x1243d304 */
  push32((uint32_t)(0x1243d304u));
  /* 12411627 push 0x12442698 */
  push32((uint32_t)(0x12442698u));
  /* 1241162c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411632u);
  /* 12411632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411637 call 0x12415730 */
  push32(0x1241163cu); f_12415730();
  /* 1241163c mov esi, esp */
  ESI = (ESP);
  /* 1241163e push 0x1243d2f8 */
  push32((uint32_t)(0x1243d2f8u));
  /* 12411643 push 0x124426b0 */
  push32((uint32_t)(0x124426b0u));
  /* 12411648 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241164eu);
  /* 1241164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411653 call 0x12415730 */
  push32(0x12411658u); f_12415730();
  /* 12411658 mov esi, esp */
  ESI = (ESP);
  /* 1241165a push 0x1243d2ec */
  push32((uint32_t)(0x1243d2ecu));
  /* 1241165f push 0x12442570 */
  push32((uint32_t)(0x12442570u));
  /* 12411664 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241166au);
  /* 1241166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241166f call 0x12415730 */
  push32(0x12411674u); f_12415730();
  /* 12411674 mov esi, esp */
  ESI = (ESP);
  /* 12411676 push 0x1243d2e0 */
  push32((uint32_t)(0x1243d2e0u));
  /* 1241167b push 0x12442578 */
  push32((uint32_t)(0x12442578u));
  /* 12411680 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411686u);
  /* 12411686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241168b call 0x12415730 */
  push32(0x12411690u); f_12415730();
  /* 12411690 mov esi, esp */
  ESI = (ESP);
  /* 12411692 push 0x1243d2d4 */
  push32((uint32_t)(0x1243d2d4u));
  /* 12411697 push 0x12442580 */
  push32((uint32_t)(0x12442580u));
  /* 1241169c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124116a2u);
  /* 124116a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124116a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124116a7 call 0x12415730 */
  push32(0x124116acu); f_12415730();
  /* 124116ac mov esi, esp */
  ESI = (ESP);
  /* 124116ae push 0x1243d2c8 */
  push32((uint32_t)(0x1243d2c8u));
  /* 124116b3 push 0x12442588 */
  push32((uint32_t)(0x12442588u));
  /* 124116b8 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124116beu);
  /* 124116be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124116c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124116c3 call 0x12415730 */
  push32(0x124116c8u); f_12415730();
  /* 124116c8 mov esi, esp */
  ESI = (ESP);
  /* 124116ca push 0x1243d2c0 */
  push32((uint32_t)(0x1243d2c0u));
  /* 124116cf push 0x12442598 */
  push32((uint32_t)(0x12442598u));
  /* 124116d4 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124116dau);
  /* 124116da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124116dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124116df call 0x12415730 */
  push32(0x124116e4u); f_12415730();
  /* 124116e4 mov esi, esp */
  ESI = (ESP);
  /* 124116e6 push 0x1243d2a4 */
  push32((uint32_t)(0x1243d2a4u));
  /* 124116eb push 0x124425a8 */
  push32((uint32_t)(0x124425a8u));
  /* 124116f0 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124116f6u);
  /* 124116f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124116f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124116fb call 0x12415730 */
  push32(0x12411700u); f_12415730();
  /* 12411700 mov esi, esp */
  ESI = (ESP);
  /* 12411702 push 0x1243d284 */
  push32((uint32_t)(0x1243d284u));
  /* 12411707 push 0x124425b8 */
  push32((uint32_t)(0x124425b8u));
  /* 1241170c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411712u);
  /* 12411712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411717 call 0x12415730 */
  push32(0x1241171cu); f_12415730();
  /* 1241171c mov esi, esp */
  ESI = (ESP);
  /* 1241171e push 0x1243d264 */
  push32((uint32_t)(0x1243d264u));
  /* 12411723 push 0x124425c8 */
  push32((uint32_t)(0x124425c8u));
  /* 12411728 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241172eu);
  /* 1241172e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411733 call 0x12415730 */
  push32(0x12411738u); f_12415730();
  /* 12411738 mov esi, esp */
  ESI = (ESP);
  /* 1241173a push 0x1243d258 */
  push32((uint32_t)(0x1243d258u));
  /* 1241173f push 0x124425e8 */
  push32((uint32_t)(0x124425e8u));
  /* 12411744 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241174au);
  /* 1241174a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241174d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241174f call 0x12415730 */
  push32(0x12411754u); f_12415730();
  /* 12411754 mov esi, esp */
  ESI = (ESP);
  /* 12411756 push 0x1243d24c */
  push32((uint32_t)(0x1243d24cu));
  /* 1241175b push 0x12442608 */
  push32((uint32_t)(0x12442608u));
  /* 12411760 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411766u);
  /* 12411766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241176b call 0x12415730 */
  push32(0x12411770u); f_12415730();
  /* 12411770 mov esi, esp */
  ESI = (ESP);
  /* 12411772 push 0x1243d240 */
  push32((uint32_t)(0x1243d240u));
  /* 12411777 push 0x12442590 */
  push32((uint32_t)(0x12442590u));
  /* 1241177c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411782u);
  /* 12411782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411785 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411787 call 0x12415730 */
  push32(0x1241178cu); f_12415730();
  /* 1241178c mov esi, esp */
  ESI = (ESP);
  /* 1241178e push 0x1243d234 */
  push32((uint32_t)(0x1243d234u));
  /* 12411793 push 0x124425a0 */
  push32((uint32_t)(0x124425a0u));
  /* 12411798 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241179eu);
  /* 1241179e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124117a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124117a3 call 0x12415730 */
  push32(0x124117a8u); f_12415730();
  /* 124117a8 mov esi, esp */
  ESI = (ESP);
  /* 124117aa push 0x1243d228 */
  push32((uint32_t)(0x1243d228u));
  /* 124117af push 0x124425b0 */
  push32((uint32_t)(0x124425b0u));
  /* 124117b4 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124117bau);
  /* 124117ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124117bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124117bf call 0x12415730 */
  push32(0x124117c4u); f_12415730();
  /* 124117c4 mov esi, esp */
  ESI = (ESP);
  /* 124117c6 push 0x1243d21c */
  push32((uint32_t)(0x1243d21cu));
  /* 124117cb push 0x124425c0 */
  push32((uint32_t)(0x124425c0u));
  /* 124117d0 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124117d6u);
  /* 124117d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124117d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124117db call 0x12415730 */
  push32(0x124117e0u); f_12415730();
  /* 124117e0 mov esi, esp */
  ESI = (ESP);
  /* 124117e2 push 0x1243d210 */
  push32((uint32_t)(0x1243d210u));
  /* 124117e7 push 0x124425e0 */
  push32((uint32_t)(0x124425e0u));
  /* 124117ec call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124117f2u);
  /* 124117f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124117f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124117f7 call 0x12415730 */
  push32(0x124117fcu); f_12415730();
  /* 124117fc mov esi, esp */
  ESI = (ESP);
  /* 124117fe push 0x1243d204 */
  push32((uint32_t)(0x1243d204u));
  /* 12411803 push 0x12442600 */
  push32((uint32_t)(0x12442600u));
  /* 12411808 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241180eu);
  /* 1241180e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411813 call 0x12415730 */
  push32(0x12411818u); f_12415730();
  /* 12411818 mov esi, esp */
  ESI = (ESP);
  /* 1241181a push 0x1243d1f8 */
  push32((uint32_t)(0x1243d1f8u));
  /* 1241181f push 0x12442620 */
  push32((uint32_t)(0x12442620u));
  /* 12411824 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241182au);
  /* 1241182a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241182d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241182f call 0x12415730 */
  push32(0x12411834u); f_12415730();
  /* 12411834 mov esi, esp */
  ESI = (ESP);
  /* 12411836 push 0x1243d1ec */
  push32((uint32_t)(0x1243d1ecu));
  /* 1241183b push 0x12442638 */
  push32((uint32_t)(0x12442638u));
  /* 12411840 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411846u);
  /* 12411846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241184b call 0x12415730 */
  push32(0x12411850u); f_12415730();
  /* 12411850 mov esi, esp */
  ESI = (ESP);
  /* 12411852 push 0x1243d1e0 */
  push32((uint32_t)(0x1243d1e0u));
  /* 12411857 push 0x12442658 */
  push32((uint32_t)(0x12442658u));
  /* 1241185c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411862u);
  /* 12411862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411867 call 0x12415730 */
  push32(0x1241186cu); f_12415730();
  /* 1241186c mov esi, esp */
  ESI = (ESP);
  /* 1241186e push 0x1243d1d4 */
  push32((uint32_t)(0x1243d1d4u));
  /* 12411873 push 0x12442678 */
  push32((uint32_t)(0x12442678u));
  /* 12411878 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241187eu);
  /* 1241187e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411883 call 0x12415730 */
  push32(0x12411888u); f_12415730();
  /* 12411888 mov esi, esp */
  ESI = (ESP);
  /* 1241188a push 0x1243d1c8 */
  push32((uint32_t)(0x1243d1c8u));
  /* 1241188f push 0x124425d8 */
  push32((uint32_t)(0x124425d8u));
  /* 12411894 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241189au);
  /* 1241189a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241189d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241189f call 0x12415730 */
  push32(0x124118a4u); f_12415730();
  /* 124118a4 mov esi, esp */
  ESI = (ESP);
  /* 124118a6 push 0x1243d1bc */
  push32((uint32_t)(0x1243d1bcu));
  /* 124118ab push 0x124425f8 */
  push32((uint32_t)(0x124425f8u));
  /* 124118b0 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124118b6u);
  /* 124118b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124118b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124118bb call 0x12415730 */
  push32(0x124118c0u); f_12415730();
  /* 124118c0 mov esi, esp */
  ESI = (ESP);
  /* 124118c2 push 0x1243d1b0 */
  push32((uint32_t)(0x1243d1b0u));
  /* 124118c7 push 0x12442618 */
  push32((uint32_t)(0x12442618u));
  /* 124118cc call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124118d2u);
  /* 124118d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124118d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124118d7 call 0x12415730 */
  push32(0x124118dcu); f_12415730();
  /* 124118dc mov esi, esp */
  ESI = (ESP);
  /* 124118de push 0x1243d1a4 */
  push32((uint32_t)(0x1243d1a4u));
  /* 124118e3 push 0x12442630 */
  push32((uint32_t)(0x12442630u));
  /* 124118e8 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124118eeu);
  /* 124118ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124118f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124118f3 call 0x12415730 */
  push32(0x124118f8u); f_12415730();
  /* 124118f8 mov esi, esp */
  ESI = (ESP);
  /* 124118fa push 0x1243d198 */
  push32((uint32_t)(0x1243d198u));
  /* 124118ff push 0x12442650 */
  push32((uint32_t)(0x12442650u));
  /* 12411904 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241190au);
  /* 1241190a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241190d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241190f call 0x12415730 */
  push32(0x12411914u); f_12415730();
  /* 12411914 mov esi, esp */
  ESI = (ESP);
  /* 12411916 push 0x1243d18c */
  push32((uint32_t)(0x1243d18cu));
  /* 1241191b push 0x12442670 */
  push32((uint32_t)(0x12442670u));
  /* 12411920 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411926u);
  /* 12411926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241192b call 0x12415730 */
  push32(0x12411930u); f_12415730();
  /* 12411930 mov esi, esp */
  ESI = (ESP);
  /* 12411932 push 0x1243d180 */
  push32((uint32_t)(0x1243d180u));
  /* 12411937 push 0x12442690 */
  push32((uint32_t)(0x12442690u));
  /* 1241193c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411942u);
  /* 12411942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411945 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411947 call 0x12415730 */
  push32(0x1241194cu); f_12415730();
  /* 1241194c mov esi, esp */
  ESI = (ESP);
  /* 1241194e push 0x1243d174 */
  push32((uint32_t)(0x1243d174u));
  /* 12411953 push 0x124426a8 */
  push32((uint32_t)(0x124426a8u));
  /* 12411958 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241195eu);
  /* 1241195e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411963 call 0x12415730 */
  push32(0x12411968u); f_12415730();
  /* 12411968 mov esi, esp */
  ESI = (ESP);
  /* 1241196a push 0x1243d168 */
  push32((uint32_t)(0x1243d168u));
  /* 1241196f push 0x124426c8 */
  push32((uint32_t)(0x124426c8u));
  /* 12411974 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x1241197au);
  /* 1241197a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241197f call 0x12415730 */
  push32(0x12411984u); f_12415730();
  /* 12411984 mov esi, esp */
  ESI = (ESP);
  /* 12411986 push 0x1243d15c */
  push32((uint32_t)(0x1243d15cu));
  /* 1241198b push 0x124426e0 */
  push32((uint32_t)(0x124426e0u));
  /* 12411990 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411996u);
  /* 12411996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411999 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241199b call 0x12415730 */
  push32(0x124119a0u); f_12415730();
  /* 124119a0 mov esi, esp */
  ESI = (ESP);
  /* 124119a2 push 0x1243d150 */
  push32((uint32_t)(0x1243d150u));
  /* 124119a7 push 0x12442648 */
  push32((uint32_t)(0x12442648u));
  /* 124119ac call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124119b2u);
  /* 124119b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124119b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124119b7 call 0x12415730 */
  push32(0x124119bcu); f_12415730();
  /* 124119bc mov esi, esp */
  ESI = (ESP);
  /* 124119be push 0x1243d144 */
  push32((uint32_t)(0x1243d144u));
  /* 124119c3 push 0x12442668 */
  push32((uint32_t)(0x12442668u));
  /* 124119c8 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124119ceu);
  /* 124119ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124119d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124119d3 call 0x12415730 */
  push32(0x124119d8u); f_12415730();
  /* 124119d8 mov esi, esp */
  ESI = (ESP);
  /* 124119da push 0x1243d138 */
  push32((uint32_t)(0x1243d138u));
  /* 124119df push 0x12442688 */
  push32((uint32_t)(0x12442688u));
  /* 124119e4 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x124119eau);
  /* 124119ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124119ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124119ef call 0x12415730 */
  push32(0x124119f4u); f_12415730();
  /* 124119f4 mov esi, esp */
  ESI = (ESP);
  /* 124119f6 push 0x1243d12c */
  push32((uint32_t)(0x1243d12cu));
  /* 124119fb push 0x124426a0 */
  push32((uint32_t)(0x124426a0u));
  /* 12411a00 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411a06u);
  /* 12411a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411a0b call 0x12415730 */
  push32(0x12411a10u); f_12415730();
  /* 12411a10 mov esi, esp */
  ESI = (ESP);
  /* 12411a12 push 0x1243d120 */
  push32((uint32_t)(0x1243d120u));
  /* 12411a17 push 0x124426c0 */
  push32((uint32_t)(0x124426c0u));
  /* 12411a1c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411a22u);
  /* 12411a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411a25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411a27 call 0x12415730 */
  push32(0x12411a2cu); f_12415730();
  /* 12411a2c mov esi, esp */
  ESI = (ESP);
  /* 12411a2e push 0x1243d114 */
  push32((uint32_t)(0x1243d114u));
  /* 12411a33 push 0x124426d8 */
  push32((uint32_t)(0x124426d8u));
  /* 12411a38 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411a3eu);
  /* 12411a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411a41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411a43 call 0x12415730 */
  push32(0x12411a48u); f_12415730();
  /* 12411a48 mov esi, esp */
  ESI = (ESP);
  /* 12411a4a push 0x1243d108 */
  push32((uint32_t)(0x1243d108u));
  /* 12411a4f push 0x124426f0 */
  push32((uint32_t)(0x124426f0u));
  /* 12411a54 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411a5au);
  /* 12411a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411a5f call 0x12415730 */
  push32(0x12411a64u); f_12415730();
  /* 12411a64 mov esi, esp */
  ESI = (ESP);
  /* 12411a66 push 0x1243d0fc */
  push32((uint32_t)(0x1243d0fcu));
  /* 12411a6b push 0x12442700 */
  push32((uint32_t)(0x12442700u));
  /* 12411a70 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411a76u);
  /* 12411a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411a79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411a7b call 0x12415730 */
  push32(0x12411a80u); f_12415730();
  /* 12411a80 mov esi, esp */
  ESI = (ESP);
  /* 12411a82 push 0x1243d0f0 */
  push32((uint32_t)(0x1243d0f0u));
  /* 12411a87 push 0x12442718 */
  push32((uint32_t)(0x12442718u));
  /* 12411a8c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411a92u);
  /* 12411a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411a97 call 0x12415730 */
  push32(0x12411a9cu); f_12415730();
  /* 12411a9c mov esi, esp */
  ESI = (ESP);
  /* 12411a9e push 0x1243d0e4 */
  push32((uint32_t)(0x1243d0e4u));
  /* 12411aa3 push 0x12442730 */
  push32((uint32_t)(0x12442730u));
  /* 12411aa8 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411aaeu);
  /* 12411aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411ab3 call 0x12415730 */
  push32(0x12411ab8u); f_12415730();
  /* 12411ab8 mov esi, esp */
  ESI = (ESP);
  /* 12411aba push 0x1243d0d8 */
  push32((uint32_t)(0x1243d0d8u));
  /* 12411abf push 0x124426b8 */
  push32((uint32_t)(0x124426b8u));
  /* 12411ac4 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411acau);
  /* 12411aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411acd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411acf call 0x12415730 */
  push32(0x12411ad4u); f_12415730();
  /* 12411ad4 mov esi, esp */
  ESI = (ESP);
  /* 12411ad6 push 0x1243d0cc */
  push32((uint32_t)(0x1243d0ccu));
  /* 12411adb push 0x124426d0 */
  push32((uint32_t)(0x124426d0u));
  /* 12411ae0 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411ae6u);
  /* 12411ae6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411ae9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411aeb call 0x12415730 */
  push32(0x12411af0u); f_12415730();
  /* 12411af0 mov esi, esp */
  ESI = (ESP);
  /* 12411af2 push 0x1243d0c0 */
  push32((uint32_t)(0x1243d0c0u));
  /* 12411af7 push 0x124426e8 */
  push32((uint32_t)(0x124426e8u));
  /* 12411afc call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411b02u);
  /* 12411b02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411b05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411b07 call 0x12415730 */
  push32(0x12411b0cu); f_12415730();
  /* 12411b0c mov esi, esp */
  ESI = (ESP);
  /* 12411b0e push 0x1243d0b4 */
  push32((uint32_t)(0x1243d0b4u));
  /* 12411b13 push 0x124426f8 */
  push32((uint32_t)(0x124426f8u));
  /* 12411b18 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411b1eu);
  /* 12411b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411b23 call 0x12415730 */
  push32(0x12411b28u); f_12415730();
  /* 12411b28 mov esi, esp */
  ESI = (ESP);
  /* 12411b2a push 0x1243d098 */
  push32((uint32_t)(0x1243d098u));
  /* 12411b2f push 0x12442710 */
  push32((uint32_t)(0x12442710u));
  /* 12411b34 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411b3au);
  /* 12411b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411b3f call 0x12415730 */
  push32(0x12411b44u); f_12415730();
  /* 12411b44 mov esi, esp */
  ESI = (ESP);
  /* 12411b46 push 0x1243d088 */
  push32((uint32_t)(0x1243d088u));
  /* 12411b4b push 0x12442728 */
  push32((uint32_t)(0x12442728u));
  /* 12411b50 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411b56u);
  /* 12411b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411b5b call 0x12415730 */
  push32(0x12411b60u); f_12415730();
  /* 12411b60 mov esi, esp */
  ESI = (ESP);
  /* 12411b62 push 0x1243d074 */
  push32((uint32_t)(0x1243d074u));
  /* 12411b67 push 0x12442738 */
  push32((uint32_t)(0x12442738u));
  /* 12411b6c call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411b72u);
  /* 12411b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411b77 call 0x12415730 */
  push32(0x12411b7cu); f_12415730();
  /* 12411b7c mov esi, esp */
  ESI = (ESP);
  /* 12411b7e push 0x1243d064 */
  push32((uint32_t)(0x1243d064u));
  /* 12411b83 push 0x12442740 */
  push32((uint32_t)(0x12442740u));
  /* 12411b88 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411b8eu);
  /* 12411b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411b91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411b93 call 0x12415730 */
  push32(0x12411b98u); f_12415730();
  /* 12411b98 mov esi, esp */
  ESI = (ESP);
  /* 12411b9a push 0x1243d054 */
  push32((uint32_t)(0x1243d054u));
  /* 12411b9f push 0x12442748 */
  push32((uint32_t)(0x12442748u));
  /* 12411ba4 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411baau);
  /* 12411baa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411bad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411baf call 0x12415730 */
  push32(0x12411bb4u); f_12415730();
  /* 12411bb4 mov esi, esp */
  ESI = (ESP);
  /* 12411bb6 push 0x1243d044 */
  push32((uint32_t)(0x1243d044u));
  /* 12411bbb push 0x12442750 */
  push32((uint32_t)(0x12442750u));
  /* 12411bc0 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411bc6u);
  /* 12411bc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411bc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411bcb call 0x12415730 */
  push32(0x12411bd0u); f_12415730();
  /* 12411bd0 mov esi, esp */
  ESI = (ESP);
  /* 12411bd2 push 0x1243d034 */
  push32((uint32_t)(0x1243d034u));
  /* 12411bd7 push 0x12442708 */
  push32((uint32_t)(0x12442708u));
  /* 12411bdc call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411be2u);
  /* 12411be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411be5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411be7 call 0x12415730 */
  push32(0x12411becu); f_12415730();
  /* 12411bec mov esi, esp */
  ESI = (ESP);
  /* 12411bee push 0x1243d01c */
  push32((uint32_t)(0x1243d01cu));
  /* 12411bf3 push 0x12442720 */
  push32((uint32_t)(0x12442720u));
  /* 12411bf8 call dword ptr [0x124454c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c0))), 0x12411bfeu);
  /* 12411bfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411c03 call 0x12415730 */
  push32(0x12411c08u); f_12415730();
  /* 12411c08 mov esi, esp */
  ESI = (ESP);
  /* 12411c0a push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12411c0f call dword ptr [0x124454c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c4))), 0x12411c15u);
  /* 12411c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411c18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411c1a call 0x12415730 */
  push32(0x12411c1fu); f_12415730();
  /* 12411c1f mov esi, esp */
  ESI = (ESP);
  /* 12411c21 push 0x124424c0 */
  push32((uint32_t)(0x124424c0u));
  /* 12411c26 call dword ptr [0x124454c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c4))), 0x12411c2cu);
  /* 12411c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411c31 call 0x12415730 */
  push32(0x12411c36u); f_12415730();
  /* 12411c36 mov esi, esp */
  ESI = (ESP);
  /* 12411c38 push 0x124424c8 */
  push32((uint32_t)(0x124424c8u));
  /* 12411c3d call dword ptr [0x124454c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c4))), 0x12411c43u);
  /* 12411c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411c46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411c48 call 0x12415730 */
  push32(0x12411c4du); f_12415730();
  /* 12411c4d mov esi, esp */
  ESI = (ESP);
  /* 12411c4f push 0x124424d0 */
  push32((uint32_t)(0x124424d0u));
  /* 12411c54 call dword ptr [0x124454c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c4))), 0x12411c5au);
  /* 12411c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411c5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411c5f call 0x12415730 */
  push32(0x12411c64u); f_12415730();
  /* 12411c64 mov esi, esp */
  ESI = (ESP);
  /* 12411c66 push 0x124424d8 */
  push32((uint32_t)(0x124424d8u));
  /* 12411c6b call dword ptr [0x124454c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c4))), 0x12411c71u);
  /* 12411c71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411c74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411c76 call 0x12415730 */
  push32(0x12411c7bu); f_12415730();
  /* 12411c7b mov esi, esp */
  ESI = (ESP);
  /* 12411c7d push 0x124424e0 */
  push32((uint32_t)(0x124424e0u));
  /* 12411c82 call dword ptr [0x124454c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c4))), 0x12411c88u);
  /* 12411c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411c8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411c8d call 0x12415730 */
  push32(0x12411c92u); f_12415730();
  /* 12411c92 mov esi, esp */
  ESI = (ESP);
  /* 12411c94 push 0x124424e8 */
  push32((uint32_t)(0x124424e8u));
  /* 12411c99 call dword ptr [0x124454c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c4))), 0x12411c9fu);
  /* 12411c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411ca4 call 0x12415730 */
  push32(0x12411ca9u); f_12415730();
  /* 12411ca9 mov esi, esp */
  ESI = (ESP);
  /* 12411cab push 8 */
  push32((uint32_t)(0x8u));
  /* 12411cad push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12411cb2 call dword ptr [0x124454c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c8))), 0x12411cb8u);
  /* 12411cb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411cbd call 0x12415730 */
  push32(0x12411cc2u); f_12415730();
  /* 12411cc2 mov esi, esp */
  ESI = (ESP);
  /* 12411cc4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12411cc6 push 0x124424c0 */
  push32((uint32_t)(0x124424c0u));
  /* 12411ccb call dword ptr [0x124454c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c8))), 0x12411cd1u);
  /* 12411cd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411cd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411cd6 call 0x12415730 */
  push32(0x12411cdbu); f_12415730();
  /* 12411cdb mov esi, esp */
  ESI = (ESP);
  /* 12411cdd push 8 */
  push32((uint32_t)(0x8u));
  /* 12411cdf push 0x124424c8 */
  push32((uint32_t)(0x124424c8u));
  /* 12411ce4 call dword ptr [0x124454c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c8))), 0x12411ceau);
  /* 12411cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411ced cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411cef call 0x12415730 */
  push32(0x12411cf4u); f_12415730();
  /* 12411cf4 mov esi, esp */
  ESI = (ESP);
  /* 12411cf6 push 8 */
  push32((uint32_t)(0x8u));
  /* 12411cf8 push 0x124424d0 */
  push32((uint32_t)(0x124424d0u));
  /* 12411cfd call dword ptr [0x124454c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c8))), 0x12411d03u);
  /* 12411d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411d06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411d08 call 0x12415730 */
  push32(0x12411d0du); f_12415730();
  /* 12411d0d mov esi, esp */
  ESI = (ESP);
  /* 12411d0f push 8 */
  push32((uint32_t)(0x8u));
  /* 12411d11 push 0x124424d8 */
  push32((uint32_t)(0x124424d8u));
  /* 12411d16 call dword ptr [0x124454c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c8))), 0x12411d1cu);
  /* 12411d1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411d1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411d21 call 0x12415730 */
  push32(0x12411d26u); f_12415730();
  /* 12411d26 mov esi, esp */
  ESI = (ESP);
  /* 12411d28 push 8 */
  push32((uint32_t)(0x8u));
  /* 12411d2a push 0x124424e0 */
  push32((uint32_t)(0x124424e0u));
  /* 12411d2f call dword ptr [0x124454c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c8))), 0x12411d35u);
  /* 12411d35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411d38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411d3a call 0x12415730 */
  push32(0x12411d3fu); f_12415730();
  /* 12411d3f mov esi, esp */
  ESI = (ESP);
  /* 12411d41 push 8 */
  push32((uint32_t)(0x8u));
  /* 12411d43 push 0x124424e8 */
  push32((uint32_t)(0x124424e8u));
  /* 12411d48 call dword ptr [0x124454c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454c8))), 0x12411d4eu);
  /* 12411d4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411d53 call 0x12415730 */
  push32(0x12411d58u); f_12415730();
  /* 12411d58 mov esi, esp */
  ESI = (ESP);
  /* 12411d5a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12411d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12411d5e call dword ptr [0x124454cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454cc))), 0x12411d64u);
  /* 12411d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411d67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411d69 call 0x12415730 */
  push32(0x12411d6eu); f_12415730();
  /* 12411d6e mov esi, esp */
  ESI = (ESP);
  /* 12411d70 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12411d72 push 4 */
  push32((uint32_t)(0x4u));
  /* 12411d74 call dword ptr [0x124454cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454cc))), 0x12411d7au);
  /* 12411d7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411d7f call 0x12415730 */
  push32(0x12411d84u); f_12415730();
  /* 12411d84 mov esi, esp */
  ESI = (ESP);
  /* 12411d86 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12411d88 push 5 */
  push32((uint32_t)(0x5u));
  /* 12411d8a call dword ptr [0x124454cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454cc))), 0x12411d90u);
  /* 12411d90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411d93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411d95 call 0x12415730 */
  push32(0x12411d9au); f_12415730();
  /* 12411d9a pop edi */
  EDI = (pop32());
  /* 12411d9b pop esi */
  ESI = (pop32());
  /* 12411d9c pop ebx */
  EBX = (pop32());
  /* 12411d9d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12411da0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12411da2 call 0x12415730 */
  push32(0x12411da7u); f_12415730();
  /* 12411da7 mov esp, ebp */
  ESP = (EBP);
  /* 12411da9 pop ebp */
  EBP = (pop32());
  /* 12411daa ret  */
  ESPCHK(0x12411090u, _esp0);
  ESP += 4; return;
}

/* FUN_10002100 @ 0x12412100 (10902 bytes, 3196 insns) */
void f_12412100(void) {
  FTRACE(0x12412100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12412100 push ebp */
  push32((uint32_t)(EBP));
  /* 12412101 mov ebp, esp */
  EBP = (ESP);
  /* 12412103 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12412106 push ebx */
  push32((uint32_t)(EBX));
  /* 12412107 push esi */
  push32((uint32_t)(ESI));
  /* 12412108 push edi */
  push32((uint32_t)(EDI));
  /* 12412109 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1241210c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12412111 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12412116 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12412118 mov esi, esp */
  ESI = (ESP);
  /* 1241211a push 1 */
  push32((uint32_t)(0x1u));
  /* 1241211c call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12412122u);
  /* 12412122 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412125 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412127 call 0x12415730 */
  push32(0x1241212cu); f_12415730();
  /* 1241212c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12412131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12412133 je 0x12412d37 */
  if (C.zf) goto L_12412d37;
  /* 12412139 mov esi, esp */
  ESI = (ESP);
  /* 1241213b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241213d push 1 */
  push32((uint32_t)(0x1u));
  /* 1241213f call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412145u);
  /* 12412145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412148 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241214a call 0x12415730 */
  push32(0x1241214fu); f_12415730();
  /* 1241214f mov esi, esp */
  ESI = (ESP);
  /* 12412151 push 0x124425d0 */
  push32((uint32_t)(0x124425d0u));
  /* 12412156 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412158 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241215eu);
  /* 1241215e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412161 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412163 call 0x12415730 */
  push32(0x12412168u); f_12415730();
  /* 12412168 mov esi, esp */
  ESI = (ESP);
  /* 1241216a push 0x124425f0 */
  push32((uint32_t)(0x124425f0u));
  /* 1241216f push 0 */
  push32((uint32_t)(0x0u));
  /* 12412171 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412177u);
  /* 12412177 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241217a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241217c call 0x12415730 */
  push32(0x12412181u); f_12415730();
  /* 12412181 mov esi, esp */
  ESI = (ESP);
  /* 12412183 push 0x12442610 */
  push32((uint32_t)(0x12442610u));
  /* 12412188 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241218a call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412190u);
  /* 12412190 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412193 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412195 call 0x12415730 */
  push32(0x1241219au); f_12415730();
  /* 1241219a mov esi, esp */
  ESI = (ESP);
  /* 1241219c push 0x12442628 */
  push32((uint32_t)(0x12442628u));
  /* 124121a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124121a3 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124121a9u);
  /* 124121a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124121ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124121ae call 0x12415730 */
  push32(0x124121b3u); f_12415730();
  /* 124121b3 mov esi, esp */
  ESI = (ESP);
  /* 124121b5 push 0x12442640 */
  push32((uint32_t)(0x12442640u));
  /* 124121ba push 0 */
  push32((uint32_t)(0x0u));
  /* 124121bc call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124121c2u);
  /* 124121c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124121c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124121c7 call 0x12415730 */
  push32(0x124121ccu); f_12415730();
  /* 124121cc mov esi, esp */
  ESI = (ESP);
  /* 124121ce push 0x12442660 */
  push32((uint32_t)(0x12442660u));
  /* 124121d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124121d5 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124121dbu);
  /* 124121db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124121de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124121e0 call 0x12415730 */
  push32(0x124121e5u); f_12415730();
  /* 124121e5 mov esi, esp */
  ESI = (ESP);
  /* 124121e7 push 0x12442680 */
  push32((uint32_t)(0x12442680u));
  /* 124121ec push 0 */
  push32((uint32_t)(0x0u));
  /* 124121ee call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124121f4u);
  /* 124121f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124121f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124121f9 call 0x12415730 */
  push32(0x124121feu); f_12415730();
  /* 124121fe mov esi, esp */
  ESI = (ESP);
  /* 12412200 push 0x12442698 */
  push32((uint32_t)(0x12442698u));
  /* 12412205 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412207 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241220du);
  /* 1241220d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412210 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412212 call 0x12415730 */
  push32(0x12412217u); f_12415730();
  /* 12412217 mov esi, esp */
  ESI = (ESP);
  /* 12412219 push 0x124426b0 */
  push32((uint32_t)(0x124426b0u));
  /* 1241221e push 0 */
  push32((uint32_t)(0x0u));
  /* 12412220 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412226u);
  /* 12412226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241222b call 0x12415730 */
  push32(0x12412230u); f_12415730();
  /* 12412230 mov esi, esp */
  ESI = (ESP);
  /* 12412232 push 0x12442570 */
  push32((uint32_t)(0x12442570u));
  /* 12412237 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412239 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241223fu);
  /* 1241223f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412242 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412244 call 0x12415730 */
  push32(0x12412249u); f_12415730();
  /* 12412249 mov esi, esp */
  ESI = (ESP);
  /* 1241224b push 0x12442578 */
  push32((uint32_t)(0x12442578u));
  /* 12412250 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412252 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412258u);
  /* 12412258 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241225b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241225d call 0x12415730 */
  push32(0x12412262u); f_12415730();
  /* 12412262 mov esi, esp */
  ESI = (ESP);
  /* 12412264 push 0x12442580 */
  push32((uint32_t)(0x12442580u));
  /* 12412269 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241226b call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412271u);
  /* 12412271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412276 call 0x12415730 */
  push32(0x1241227bu); f_12415730();
  /* 1241227b mov esi, esp */
  ESI = (ESP);
  /* 1241227d push 0x12442588 */
  push32((uint32_t)(0x12442588u));
  /* 12412282 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412284 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241228au);
  /* 1241228a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241228d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241228f call 0x12415730 */
  push32(0x12412294u); f_12415730();
  /* 12412294 mov esi, esp */
  ESI = (ESP);
  /* 12412296 push 0x12442598 */
  push32((uint32_t)(0x12442598u));
  /* 1241229b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241229d call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124122a3u);
  /* 124122a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124122a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124122a8 call 0x12415730 */
  push32(0x124122adu); f_12415730();
  /* 124122ad mov esi, esp */
  ESI = (ESP);
  /* 124122af push 0x124425a8 */
  push32((uint32_t)(0x124425a8u));
  /* 124122b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124122b6 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124122bcu);
  /* 124122bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124122bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124122c1 call 0x12415730 */
  push32(0x124122c6u); f_12415730();
  /* 124122c6 mov esi, esp */
  ESI = (ESP);
  /* 124122c8 push 0x124425b8 */
  push32((uint32_t)(0x124425b8u));
  /* 124122cd push 0 */
  push32((uint32_t)(0x0u));
  /* 124122cf call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124122d5u);
  /* 124122d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124122d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124122da call 0x12415730 */
  push32(0x124122dfu); f_12415730();
  /* 124122df mov esi, esp */
  ESI = (ESP);
  /* 124122e1 push 0x124425c8 */
  push32((uint32_t)(0x124425c8u));
  /* 124122e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124122e8 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124122eeu);
  /* 124122ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124122f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124122f3 call 0x12415730 */
  push32(0x124122f8u); f_12415730();
  /* 124122f8 mov esi, esp */
  ESI = (ESP);
  /* 124122fa push 0x124425e8 */
  push32((uint32_t)(0x124425e8u));
  /* 124122ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12412301 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412307u);
  /* 12412307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241230a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241230c call 0x12415730 */
  push32(0x12412311u); f_12415730();
  /* 12412311 mov esi, esp */
  ESI = (ESP);
  /* 12412313 push 0x12442608 */
  push32((uint32_t)(0x12442608u));
  /* 12412318 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241231a call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412320u);
  /* 12412320 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412323 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412325 call 0x12415730 */
  push32(0x1241232au); f_12415730();
  /* 1241232a mov esi, esp */
  ESI = (ESP);
  /* 1241232c push 0x12442590 */
  push32((uint32_t)(0x12442590u));
  /* 12412331 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412333 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412339u);
  /* 12412339 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241233c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241233e call 0x12415730 */
  push32(0x12412343u); f_12415730();
  /* 12412343 mov esi, esp */
  ESI = (ESP);
  /* 12412345 push 0x124425a0 */
  push32((uint32_t)(0x124425a0u));
  /* 1241234a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241234c call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412352u);
  /* 12412352 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412355 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412357 call 0x12415730 */
  push32(0x1241235cu); f_12415730();
  /* 1241235c mov esi, esp */
  ESI = (ESP);
  /* 1241235e push 0x124425b0 */
  push32((uint32_t)(0x124425b0u));
  /* 12412363 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412365 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241236bu);
  /* 1241236b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241236e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412370 call 0x12415730 */
  push32(0x12412375u); f_12415730();
  /* 12412375 mov esi, esp */
  ESI = (ESP);
  /* 12412377 push 0x124425c0 */
  push32((uint32_t)(0x124425c0u));
  /* 1241237c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241237e call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412384u);
  /* 12412384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412389 call 0x12415730 */
  push32(0x1241238eu); f_12415730();
  /* 1241238e mov esi, esp */
  ESI = (ESP);
  /* 12412390 push 0x124425e0 */
  push32((uint32_t)(0x124425e0u));
  /* 12412395 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412397 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241239du);
  /* 1241239d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124123a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124123a2 call 0x12415730 */
  push32(0x124123a7u); f_12415730();
  /* 124123a7 mov esi, esp */
  ESI = (ESP);
  /* 124123a9 push 0x12442600 */
  push32((uint32_t)(0x12442600u));
  /* 124123ae push 0 */
  push32((uint32_t)(0x0u));
  /* 124123b0 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124123b6u);
  /* 124123b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124123b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124123bb call 0x12415730 */
  push32(0x124123c0u); f_12415730();
  /* 124123c0 mov esi, esp */
  ESI = (ESP);
  /* 124123c2 push 0x12442620 */
  push32((uint32_t)(0x12442620u));
  /* 124123c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124123c9 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124123cfu);
  /* 124123cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124123d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124123d4 call 0x12415730 */
  push32(0x124123d9u); f_12415730();
  /* 124123d9 mov esi, esp */
  ESI = (ESP);
  /* 124123db push 0x12442638 */
  push32((uint32_t)(0x12442638u));
  /* 124123e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124123e2 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124123e8u);
  /* 124123e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124123eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124123ed call 0x12415730 */
  push32(0x124123f2u); f_12415730();
  /* 124123f2 mov esi, esp */
  ESI = (ESP);
  /* 124123f4 push 0x12442658 */
  push32((uint32_t)(0x12442658u));
  /* 124123f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124123fb call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412401u);
  /* 12412401 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412404 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412406 call 0x12415730 */
  push32(0x1241240bu); f_12415730();
  /* 1241240b mov esi, esp */
  ESI = (ESP);
  /* 1241240d push 0x12442678 */
  push32((uint32_t)(0x12442678u));
  /* 12412412 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412414 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241241au);
  /* 1241241a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241241d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241241f call 0x12415730 */
  push32(0x12412424u); f_12415730();
  /* 12412424 mov esi, esp */
  ESI = (ESP);
  /* 12412426 push 0x124425d8 */
  push32((uint32_t)(0x124425d8u));
  /* 1241242b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241242d call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412433u);
  /* 12412433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412438 call 0x12415730 */
  push32(0x1241243du); f_12415730();
  /* 1241243d mov esi, esp */
  ESI = (ESP);
  /* 1241243f push 0x124425f8 */
  push32((uint32_t)(0x124425f8u));
  /* 12412444 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412446 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241244cu);
  /* 1241244c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241244f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412451 call 0x12415730 */
  push32(0x12412456u); f_12415730();
  /* 12412456 mov esi, esp */
  ESI = (ESP);
  /* 12412458 push 0x12442618 */
  push32((uint32_t)(0x12442618u));
  /* 1241245d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241245f call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412465u);
  /* 12412465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412468 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241246a call 0x12415730 */
  push32(0x1241246fu); f_12415730();
  /* 1241246f mov esi, esp */
  ESI = (ESP);
  /* 12412471 push 0x12442630 */
  push32((uint32_t)(0x12442630u));
  /* 12412476 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412478 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241247eu);
  /* 1241247e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412481 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412483 call 0x12415730 */
  push32(0x12412488u); f_12415730();
  /* 12412488 mov esi, esp */
  ESI = (ESP);
  /* 1241248a push 0x12442650 */
  push32((uint32_t)(0x12442650u));
  /* 1241248f push 0 */
  push32((uint32_t)(0x0u));
  /* 12412491 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412497u);
  /* 12412497 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241249a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241249c call 0x12415730 */
  push32(0x124124a1u); f_12415730();
  /* 124124a1 mov esi, esp */
  ESI = (ESP);
  /* 124124a3 push 0x12442670 */
  push32((uint32_t)(0x12442670u));
  /* 124124a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124124aa call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124124b0u);
  /* 124124b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124124b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124124b5 call 0x12415730 */
  push32(0x124124bau); f_12415730();
  /* 124124ba mov esi, esp */
  ESI = (ESP);
  /* 124124bc push 0x12442690 */
  push32((uint32_t)(0x12442690u));
  /* 124124c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124124c3 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124124c9u);
  /* 124124c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124124cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124124ce call 0x12415730 */
  push32(0x124124d3u); f_12415730();
  /* 124124d3 mov esi, esp */
  ESI = (ESP);
  /* 124124d5 push 0x124426a8 */
  push32((uint32_t)(0x124426a8u));
  /* 124124da push 0 */
  push32((uint32_t)(0x0u));
  /* 124124dc call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124124e2u);
  /* 124124e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124124e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124124e7 call 0x12415730 */
  push32(0x124124ecu); f_12415730();
  /* 124124ec mov esi, esp */
  ESI = (ESP);
  /* 124124ee push 0x124426c8 */
  push32((uint32_t)(0x124426c8u));
  /* 124124f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124124f5 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124124fbu);
  /* 124124fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124124fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412500 call 0x12415730 */
  push32(0x12412505u); f_12415730();
  /* 12412505 mov esi, esp */
  ESI = (ESP);
  /* 12412507 push 0x124426e0 */
  push32((uint32_t)(0x124426e0u));
  /* 1241250c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241250e call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412514u);
  /* 12412514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412517 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412519 call 0x12415730 */
  push32(0x1241251eu); f_12415730();
  /* 1241251e mov esi, esp */
  ESI = (ESP);
  /* 12412520 push 0x12442648 */
  push32((uint32_t)(0x12442648u));
  /* 12412525 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412527 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241252du);
  /* 1241252d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412532 call 0x12415730 */
  push32(0x12412537u); f_12415730();
  /* 12412537 mov esi, esp */
  ESI = (ESP);
  /* 12412539 push 0x12442668 */
  push32((uint32_t)(0x12442668u));
  /* 1241253e push 0 */
  push32((uint32_t)(0x0u));
  /* 12412540 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412546u);
  /* 12412546 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241254b call 0x12415730 */
  push32(0x12412550u); f_12415730();
  /* 12412550 mov esi, esp */
  ESI = (ESP);
  /* 12412552 push 0x12442688 */
  push32((uint32_t)(0x12442688u));
  /* 12412557 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412559 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241255fu);
  /* 1241255f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412562 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412564 call 0x12415730 */
  push32(0x12412569u); f_12415730();
  /* 12412569 mov esi, esp */
  ESI = (ESP);
  /* 1241256b push 0x124426a0 */
  push32((uint32_t)(0x124426a0u));
  /* 12412570 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412572 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412578u);
  /* 12412578 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241257b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241257d call 0x12415730 */
  push32(0x12412582u); f_12415730();
  /* 12412582 mov esi, esp */
  ESI = (ESP);
  /* 12412584 push 0x124426c0 */
  push32((uint32_t)(0x124426c0u));
  /* 12412589 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241258b call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412591u);
  /* 12412591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412596 call 0x12415730 */
  push32(0x1241259bu); f_12415730();
  /* 1241259b mov esi, esp */
  ESI = (ESP);
  /* 1241259d push 0x124426d8 */
  push32((uint32_t)(0x124426d8u));
  /* 124125a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124125a4 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124125aau);
  /* 124125aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124125ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124125af call 0x12415730 */
  push32(0x124125b4u); f_12415730();
  /* 124125b4 mov esi, esp */
  ESI = (ESP);
  /* 124125b6 push 0x124426f0 */
  push32((uint32_t)(0x124426f0u));
  /* 124125bb push 0 */
  push32((uint32_t)(0x0u));
  /* 124125bd call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124125c3u);
  /* 124125c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124125c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124125c8 call 0x12415730 */
  push32(0x124125cdu); f_12415730();
  /* 124125cd mov esi, esp */
  ESI = (ESP);
  /* 124125cf push 0x12442700 */
  push32((uint32_t)(0x12442700u));
  /* 124125d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124125d6 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124125dcu);
  /* 124125dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124125df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124125e1 call 0x12415730 */
  push32(0x124125e6u); f_12415730();
  /* 124125e6 mov esi, esp */
  ESI = (ESP);
  /* 124125e8 push 0x12442718 */
  push32((uint32_t)(0x12442718u));
  /* 124125ed push 0 */
  push32((uint32_t)(0x0u));
  /* 124125ef call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124125f5u);
  /* 124125f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124125f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124125fa call 0x12415730 */
  push32(0x124125ffu); f_12415730();
  /* 124125ff mov esi, esp */
  ESI = (ESP);
  /* 12412601 push 0x12442730 */
  push32((uint32_t)(0x12442730u));
  /* 12412606 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412608 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241260eu);
  /* 1241260e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412613 call 0x12415730 */
  push32(0x12412618u); f_12415730();
  /* 12412618 mov esi, esp */
  ESI = (ESP);
  /* 1241261a push 0x124426b8 */
  push32((uint32_t)(0x124426b8u));
  /* 1241261f push 0 */
  push32((uint32_t)(0x0u));
  /* 12412621 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412627u);
  /* 12412627 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241262a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241262c call 0x12415730 */
  push32(0x12412631u); f_12415730();
  /* 12412631 mov esi, esp */
  ESI = (ESP);
  /* 12412633 push 0x124426d0 */
  push32((uint32_t)(0x124426d0u));
  /* 12412638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241263a call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412640u);
  /* 12412640 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412645 call 0x12415730 */
  push32(0x1241264au); f_12415730();
  /* 1241264a mov esi, esp */
  ESI = (ESP);
  /* 1241264c push 0x124426e8 */
  push32((uint32_t)(0x124426e8u));
  /* 12412651 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412653 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412659u);
  /* 12412659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241265c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241265e call 0x12415730 */
  push32(0x12412663u); f_12415730();
  /* 12412663 mov esi, esp */
  ESI = (ESP);
  /* 12412665 push 0x124426f8 */
  push32((uint32_t)(0x124426f8u));
  /* 1241266a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241266c call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412672u);
  /* 12412672 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412675 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412677 call 0x12415730 */
  push32(0x1241267cu); f_12415730();
  /* 1241267c mov esi, esp */
  ESI = (ESP);
  /* 1241267e push 0x12442710 */
  push32((uint32_t)(0x12442710u));
  /* 12412683 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412685 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x1241268bu);
  /* 1241268b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241268e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412690 call 0x12415730 */
  push32(0x12412695u); f_12415730();
  /* 12412695 mov esi, esp */
  ESI = (ESP);
  /* 12412697 push 0x12442728 */
  push32((uint32_t)(0x12442728u));
  /* 1241269c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241269e call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124126a4u);
  /* 124126a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124126a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124126a9 call 0x12415730 */
  push32(0x124126aeu); f_12415730();
  /* 124126ae mov esi, esp */
  ESI = (ESP);
  /* 124126b0 push 0x12442738 */
  push32((uint32_t)(0x12442738u));
  /* 124126b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124126b7 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124126bdu);
  /* 124126bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124126c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124126c2 call 0x12415730 */
  push32(0x124126c7u); f_12415730();
  /* 124126c7 mov esi, esp */
  ESI = (ESP);
  /* 124126c9 push 0x12442740 */
  push32((uint32_t)(0x12442740u));
  /* 124126ce push 0 */
  push32((uint32_t)(0x0u));
  /* 124126d0 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124126d6u);
  /* 124126d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124126d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124126db call 0x12415730 */
  push32(0x124126e0u); f_12415730();
  /* 124126e0 mov esi, esp */
  ESI = (ESP);
  /* 124126e2 push 0x12442748 */
  push32((uint32_t)(0x12442748u));
  /* 124126e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124126e9 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x124126efu);
  /* 124126ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124126f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124126f4 call 0x12415730 */
  push32(0x124126f9u); f_12415730();
  /* 124126f9 mov esi, esp */
  ESI = (ESP);
  /* 124126fb push 0x12442750 */
  push32((uint32_t)(0x12442750u));
  /* 12412700 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412702 call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412708u);
  /* 12412708 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241270b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241270d call 0x12415730 */
  push32(0x12412712u); f_12415730();
  /* 12412712 mov esi, esp */
  ESI = (ESP);
  /* 12412714 push 0x12442708 */
  push32((uint32_t)(0x12442708u));
  /* 12412719 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241271b call dword ptr [0x12445438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445438))), 0x12412721u);
  /* 12412721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412724 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412726 call 0x12415730 */
  push32(0x1241272bu); f_12415730();
  /* 1241272b mov esi, esp */
  ESI = (ESP);
  /* 1241272d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241272f push 0x12442430 */
  push32((uint32_t)(0x12442430u));
  /* 12412734 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412736 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241273cu);
  /* 1241273c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241273f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412741 call 0x12415730 */
  push32(0x12412746u); f_12415730();
  /* 12412746 mov esi, esp */
  ESI = (ESP);
  /* 12412748 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241274a push 0x12442448 */
  push32((uint32_t)(0x12442448u));
  /* 1241274f push 0 */
  push32((uint32_t)(0x0u));
  /* 12412751 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12412757u);
  /* 12412757 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241275a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241275c call 0x12415730 */
  push32(0x12412761u); f_12415730();
  /* 12412761 mov esi, esp */
  ESI = (ESP);
  /* 12412763 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412765 push 0x12442460 */
  push32((uint32_t)(0x12442460u));
  /* 1241276a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241276c call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12412772u);
  /* 12412772 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412777 call 0x12415730 */
  push32(0x1241277cu); f_12415730();
  /* 1241277c mov esi, esp */
  ESI = (ESP);
  /* 1241277e push 0 */
  push32((uint32_t)(0x0u));
  /* 12412780 push 0x12442478 */
  push32((uint32_t)(0x12442478u));
  /* 12412785 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412787 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241278du);
  /* 1241278d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412792 call 0x12415730 */
  push32(0x12412797u); f_12415730();
  /* 12412797 mov esi, esp */
  ESI = (ESP);
  /* 12412799 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241279b push 0x12442488 */
  push32((uint32_t)(0x12442488u));
  /* 124127a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124127a2 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124127a8u);
  /* 124127a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124127ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124127ad call 0x12415730 */
  push32(0x124127b2u); f_12415730();
  /* 124127b2 mov esi, esp */
  ESI = (ESP);
  /* 124127b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124127b6 push 0x12442498 */
  push32((uint32_t)(0x12442498u));
  /* 124127bb push 0 */
  push32((uint32_t)(0x0u));
  /* 124127bd call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124127c3u);
  /* 124127c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124127c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124127c8 call 0x12415730 */
  push32(0x124127cdu); f_12415730();
  /* 124127cd mov esi, esp */
  ESI = (ESP);
  /* 124127cf push 0 */
  push32((uint32_t)(0x0u));
  /* 124127d1 push 0x124424a0 */
  push32((uint32_t)(0x124424a0u));
  /* 124127d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124127d8 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124127deu);
  /* 124127de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124127e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124127e3 call 0x12415730 */
  push32(0x124127e8u); f_12415730();
  /* 124127e8 mov esi, esp */
  ESI = (ESP);
  /* 124127ea push 0 */
  push32((uint32_t)(0x0u));
  /* 124127ec push 0x124424a8 */
  push32((uint32_t)(0x124424a8u));
  /* 124127f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124127f3 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124127f9u);
  /* 124127f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124127fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124127fe call 0x12415730 */
  push32(0x12412803u); f_12415730();
  /* 12412803 mov esi, esp */
  ESI = (ESP);
  /* 12412805 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412807 push 0x124424b8 */
  push32((uint32_t)(0x124424b8u));
  /* 1241280c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241280e call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12412814u);
  /* 12412814 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412819 call 0x12415730 */
  push32(0x1241281eu); f_12415730();
  /* 1241281e mov esi, esp */
  ESI = (ESP);
  /* 12412820 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412822 push 0x124423e0 */
  push32((uint32_t)(0x124423e0u));
  /* 12412827 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412829 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241282fu);
  /* 1241282f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412832 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412834 call 0x12415730 */
  push32(0x12412839u); f_12415730();
  /* 12412839 mov esi, esp */
  ESI = (ESP);
  /* 1241283b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241283d push 0x124423e8 */
  push32((uint32_t)(0x124423e8u));
  /* 12412842 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412844 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241284au);
  /* 1241284a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241284d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241284f call 0x12415730 */
  push32(0x12412854u); f_12415730();
  /* 12412854 mov esi, esp */
  ESI = (ESP);
  /* 12412856 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412858 push 0x124423f0 */
  push32((uint32_t)(0x124423f0u));
  /* 1241285d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241285f call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12412865u);
  /* 12412865 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412868 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241286a call 0x12415730 */
  push32(0x1241286fu); f_12415730();
  /* 1241286f mov esi, esp */
  ESI = (ESP);
  /* 12412871 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412873 push 0x124423f8 */
  push32((uint32_t)(0x124423f8u));
  /* 12412878 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241287a call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12412880u);
  /* 12412880 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412885 call 0x12415730 */
  push32(0x1241288au); f_12415730();
  /* 1241288a mov esi, esp */
  ESI = (ESP);
  /* 1241288c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241288e push 0x12442408 */
  push32((uint32_t)(0x12442408u));
  /* 12412893 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412895 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241289bu);
  /* 1241289b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241289e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124128a0 call 0x12415730 */
  push32(0x124128a5u); f_12415730();
  /* 124128a5 mov esi, esp */
  ESI = (ESP);
  /* 124128a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124128a9 push 0x12442418 */
  push32((uint32_t)(0x12442418u));
  /* 124128ae push 0 */
  push32((uint32_t)(0x0u));
  /* 124128b0 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124128b6u);
  /* 124128b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124128b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124128bb call 0x12415730 */
  push32(0x124128c0u); f_12415730();
  /* 124128c0 mov esi, esp */
  ESI = (ESP);
  /* 124128c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124128c4 push 0x12442440 */
  push32((uint32_t)(0x12442440u));
  /* 124128c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124128cb call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124128d1u);
  /* 124128d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124128d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124128d6 call 0x12415730 */
  push32(0x124128dbu); f_12415730();
  /* 124128db mov esi, esp */
  ESI = (ESP);
  /* 124128dd push 0 */
  push32((uint32_t)(0x0u));
  /* 124128df push 0x12442458 */
  push32((uint32_t)(0x12442458u));
  /* 124128e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124128e6 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124128ecu);
  /* 124128ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124128ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124128f1 call 0x12415730 */
  push32(0x124128f6u); f_12415730();
  /* 124128f6 mov esi, esp */
  ESI = (ESP);
  /* 124128f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124128fa push 0x12442470 */
  push32((uint32_t)(0x12442470u));
  /* 124128ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12412901 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12412907u);
  /* 12412907 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241290a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241290c call 0x12415730 */
  push32(0x12412911u); f_12415730();
  /* 12412911 mov esi, esp */
  ESI = (ESP);
  /* 12412913 push 0x1a7c */
  push32((uint32_t)(0x1a7cu));
  /* 12412918 push 3 */
  push32((uint32_t)(0x3u));
  /* 1241291a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241291c call dword ptr [0x12445440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445440))), 0x12412922u);
  /* 12412922 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412927 call 0x12415730 */
  push32(0x1241292cu); f_12415730();
  /* 1241292c mov esi, esp */
  ESI = (ESP);
  /* 1241292e push 0x4b0 */
  push32((uint32_t)(0x4b0u));
  /* 12412933 push 1 */
  push32((uint32_t)(0x1u));
  /* 12412935 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412937 call dword ptr [0x12445440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445440))), 0x1241293du);
  /* 1241293d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412940 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412942 call 0x12415730 */
  push32(0x12412947u); f_12415730();
  /* 12412947 mov esi, esp */
  ESI = (ESP);
  /* 12412949 push 0x546 */
  push32((uint32_t)(0x546u));
  /* 1241294e push 4 */
  push32((uint32_t)(0x4u));
  /* 12412950 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412952 call dword ptr [0x12445440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445440))), 0x12412958u);
  /* 12412958 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241295b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241295d call 0x12415730 */
  push32(0x12412962u); f_12415730();
  /* 12412962 mov esi, esp */
  ESI = (ESP);
  /* 12412964 push 0x8fc */
  push32((uint32_t)(0x8fcu));
  /* 12412969 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241296b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241296d call dword ptr [0x12445440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445440))), 0x12412973u);
  /* 12412973 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412976 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412978 call 0x12415730 */
  push32(0x1241297du); f_12415730();
  /* 1241297d mov esi, esp */
  ESI = (ESP);
  /* 1241297f push 0xabe */
  push32((uint32_t)(0xabeu));
  /* 12412984 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412986 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412988 call dword ptr [0x12445440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445440))), 0x1241298eu);
  /* 1241298e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412991 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412993 call 0x12415730 */
  push32(0x12412998u); f_12415730();
  /* 12412998 mov esi, esp */
  ESI = (ESP);
  /* 1241299a push 0x622 */
  push32((uint32_t)(0x622u));
  /* 1241299f push 5 */
  push32((uint32_t)(0x5u));
  /* 124129a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124129a3 call dword ptr [0x12445440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445440))), 0x124129a9u);
  /* 124129a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124129ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124129ae call 0x12415730 */
  push32(0x124129b3u); f_12415730();
  /* 124129b3 mov esi, esp */
  ESI = (ESP);
  /* 124129b5 push 0x124424f8 */
  push32((uint32_t)(0x124424f8u));
  /* 124129ba call dword ptr [0x12445444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445444))), 0x124129c0u);
  /* 124129c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124129c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124129c5 call 0x12415730 */
  push32(0x124129cau); f_12415730();
  /* 124129ca mov esi, esp */
  ESI = (ESP);
  /* 124129cc push 0x12442508 */
  push32((uint32_t)(0x12442508u));
  /* 124129d1 call dword ptr [0x12445448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445448))), 0x124129d7u);
  /* 124129d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124129da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124129dc call 0x12415730 */
  push32(0x124129e1u); f_12415730();
  /* 124129e1 mov esi, esp */
  ESI = (ESP);
  /* 124129e3 push 0x12442500 */
  push32((uint32_t)(0x12442500u));
  /* 124129e8 call dword ptr [0x1244544c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244544c))), 0x124129eeu);
  /* 124129ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124129f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124129f3 call 0x12415730 */
  push32(0x124129f8u); f_12415730();
  /* 124129f8 mov esi, esp */
  ESI = (ESP);
  /* 124129fa push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 124129ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12412a01 call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x12412a07u);
  /* 12412a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412a0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412a0c call 0x12415730 */
  push32(0x12412a11u); f_12415730();
  /* 12412a11 mov esi, esp */
  ESI = (ESP);
  /* 12412a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412a15 push 3 */
  push32((uint32_t)(0x3u));
  /* 12412a17 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412a1du);
  /* 12412a1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412a20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412a22 call 0x12415730 */
  push32(0x12412a27u); f_12415730();
  /* 12412a27 mov esi, esp */
  ESI = (ESP);
  /* 12412a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412a2b push 4 */
  push32((uint32_t)(0x4u));
  /* 12412a2d call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412a33u);
  /* 12412a33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412a38 call 0x12415730 */
  push32(0x12412a3du); f_12415730();
  /* 12412a3d mov esi, esp */
  ESI = (ESP);
  /* 12412a3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12412a41 push 5 */
  push32((uint32_t)(0x5u));
  /* 12412a43 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412a49u);
  /* 12412a49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412a4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412a4e call 0x12415730 */
  push32(0x12412a53u); f_12415730();
  /* 12412a53 mov esi, esp */
  ESI = (ESP);
  /* 12412a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412a57 push 6 */
  push32((uint32_t)(0x6u));
  /* 12412a59 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412a5fu);
  /* 12412a5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412a64 call 0x12415730 */
  push32(0x12412a69u); f_12415730();
  /* 12412a69 mov esi, esp */
  ESI = (ESP);
  /* 12412a6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12412a6d push 7 */
  push32((uint32_t)(0x7u));
  /* 12412a6f call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412a75u);
  /* 12412a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412a7a call 0x12415730 */
  push32(0x12412a7fu); f_12415730();
  /* 12412a7f mov esi, esp */
  ESI = (ESP);
  /* 12412a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412a83 push 8 */
  push32((uint32_t)(0x8u));
  /* 12412a85 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412a8bu);
  /* 12412a8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412a90 call 0x12415730 */
  push32(0x12412a95u); f_12415730();
  /* 12412a95 mov esi, esp */
  ESI = (ESP);
  /* 12412a97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412a99 push 9 */
  push32((uint32_t)(0x9u));
  /* 12412a9b call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412aa1u);
  /* 12412aa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412aa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412aa6 call 0x12415730 */
  push32(0x12412aabu); f_12415730();
  /* 12412aab mov esi, esp */
  ESI = (ESP);
  /* 12412aad push 0 */
  push32((uint32_t)(0x0u));
  /* 12412aaf push 0xa */
  push32((uint32_t)(0xau));
  /* 12412ab1 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412ab7u);
  /* 12412ab7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412aba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412abc call 0x12415730 */
  push32(0x12412ac1u); f_12415730();
  /* 12412ac1 mov esi, esp */
  ESI = (ESP);
  /* 12412ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412ac5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12412ac7 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412acdu);
  /* 12412acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412ad2 call 0x12415730 */
  push32(0x12412ad7u); f_12415730();
  /* 12412ad7 mov esi, esp */
  ESI = (ESP);
  /* 12412ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412adb push 0xc */
  push32((uint32_t)(0xcu));
  /* 12412add call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412ae3u);
  /* 12412ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412ae8 call 0x12415730 */
  push32(0x12412aedu); f_12415730();
  /* 12412aed mov esi, esp */
  ESI = (ESP);
  /* 12412aef push 0 */
  push32((uint32_t)(0x0u));
  /* 12412af1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12412af3 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412af9u);
  /* 12412af9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412afc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412afe call 0x12415730 */
  push32(0x12412b03u); f_12415730();
  /* 12412b03 mov esi, esp */
  ESI = (ESP);
  /* 12412b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412b07 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12412b09 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412b0fu);
  /* 12412b0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412b12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412b14 call 0x12415730 */
  push32(0x12412b19u); f_12415730();
  /* 12412b19 mov esi, esp */
  ESI = (ESP);
  /* 12412b1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12412b1d push 0xf */
  push32((uint32_t)(0xfu));
  /* 12412b1f call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412b25u);
  /* 12412b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412b28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412b2a call 0x12415730 */
  push32(0x12412b2fu); f_12415730();
  /* 12412b2f mov esi, esp */
  ESI = (ESP);
  /* 12412b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412b33 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12412b35 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412b3bu);
  /* 12412b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412b40 call 0x12415730 */
  push32(0x12412b45u); f_12415730();
  /* 12412b45 mov esi, esp */
  ESI = (ESP);
  /* 12412b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412b49 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12412b4b call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412b51u);
  /* 12412b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412b54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412b56 call 0x12415730 */
  push32(0x12412b5bu); f_12415730();
  /* 12412b5b mov esi, esp */
  ESI = (ESP);
  /* 12412b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12412b5f push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12412b61 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412b67u);
  /* 12412b67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412b6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412b6c call 0x12415730 */
  push32(0x12412b71u); f_12415730();
  /* 12412b71 mov esi, esp */
  ESI = (ESP);
  /* 12412b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412b75 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12412b77 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412b7du);
  /* 12412b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412b80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412b82 call 0x12415730 */
  push32(0x12412b87u); f_12415730();
  /* 12412b87 mov esi, esp */
  ESI = (ESP);
  /* 12412b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412b8b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12412b8d call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412b93u);
  /* 12412b93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412b96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412b98 call 0x12415730 */
  push32(0x12412b9du); f_12415730();
  /* 12412b9d mov esi, esp */
  ESI = (ESP);
  /* 12412b9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12412ba1 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12412ba3 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412ba9u);
  /* 12412ba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412bae call 0x12415730 */
  push32(0x12412bb3u); f_12415730();
  /* 12412bb3 mov esi, esp */
  ESI = (ESP);
  /* 12412bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412bb7 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12412bb9 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412bbfu);
  /* 12412bbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412bc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412bc4 call 0x12415730 */
  push32(0x12412bc9u); f_12415730();
  /* 12412bc9 mov esi, esp */
  ESI = (ESP);
  /* 12412bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12412bcd push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12412bcf call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412bd5u);
  /* 12412bd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412bd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412bda call 0x12415730 */
  push32(0x12412bdfu); f_12415730();
  /* 12412bdf mov esi, esp */
  ESI = (ESP);
  /* 12412be1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412be3 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12412be5 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412bebu);
  /* 12412beb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412bee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412bf0 call 0x12415730 */
  push32(0x12412bf5u); f_12415730();
  /* 12412bf5 mov esi, esp */
  ESI = (ESP);
  /* 12412bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412bf9 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12412bfb call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412c01u);
  /* 12412c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412c04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412c06 call 0x12415730 */
  push32(0x12412c0bu); f_12415730();
  /* 12412c0b mov esi, esp */
  ESI = (ESP);
  /* 12412c0d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12412c0f call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412c15u);
  /* 12412c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412c18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412c1a call 0x12415730 */
  push32(0x12412c1fu); f_12415730();
  /* 12412c1f mov esi, esp */
  ESI = (ESP);
  /* 12412c21 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12412c23 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412c29u);
  /* 12412c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412c2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412c2e call 0x12415730 */
  push32(0x12412c33u); f_12415730();
  /* 12412c33 mov esi, esp */
  ESI = (ESP);
  /* 12412c35 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12412c37 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412c3du);
  /* 12412c3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412c40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412c42 call 0x12415730 */
  push32(0x12412c47u); f_12415730();
  /* 12412c47 mov esi, esp */
  ESI = (ESP);
  /* 12412c49 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12412c4b call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412c51u);
  /* 12412c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412c54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412c56 call 0x12415730 */
  push32(0x12412c5bu); f_12415730();
  /* 12412c5b mov esi, esp */
  ESI = (ESP);
  /* 12412c5d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12412c5f call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412c65u);
  /* 12412c65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412c68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412c6a call 0x12415730 */
  push32(0x12412c6fu); f_12415730();
  /* 12412c6f mov esi, esp */
  ESI = (ESP);
  /* 12412c71 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12412c73 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412c79u);
  /* 12412c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412c7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412c7e call 0x12415730 */
  push32(0x12412c83u); f_12415730();
  /* 12412c83 mov esi, esp */
  ESI = (ESP);
  /* 12412c85 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12412c87 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412c8du);
  /* 12412c8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412c90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412c92 call 0x12415730 */
  push32(0x12412c97u); f_12415730();
  /* 12412c97 mov esi, esp */
  ESI = (ESP);
  /* 12412c99 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12412c9b call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412ca1u);
  /* 12412ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412ca6 call 0x12415730 */
  push32(0x12412cabu); f_12415730();
  /* 12412cab mov esi, esp */
  ESI = (ESP);
  /* 12412cad push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12412caf call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412cb5u);
  /* 12412cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412cba call 0x12415730 */
  push32(0x12412cbfu); f_12415730();
  /* 12412cbf mov esi, esp */
  ESI = (ESP);
  /* 12412cc1 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12412cc3 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412cc9u);
  /* 12412cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412ccc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412cce call 0x12415730 */
  push32(0x12412cd3u); f_12415730();
  /* 12412cd3 mov esi, esp */
  ESI = (ESP);
  /* 12412cd5 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12412cd7 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412cddu);
  /* 12412cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412ce2 call 0x12415730 */
  push32(0x12412ce7u); f_12415730();
  /* 12412ce7 mov esi, esp */
  ESI = (ESP);
  /* 12412ce9 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12412ceb call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412cf1u);
  /* 12412cf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412cf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412cf6 call 0x12415730 */
  push32(0x12412cfbu); f_12415730();
  /* 12412cfb mov esi, esp */
  ESI = (ESP);
  /* 12412cfd push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12412cff call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412d05u);
  /* 12412d05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412d08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412d0a call 0x12415730 */
  push32(0x12412d0fu); f_12415730();
  /* 12412d0f mov esi, esp */
  ESI = (ESP);
  /* 12412d11 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12412d13 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412d19u);
  /* 12412d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412d1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412d1e call 0x12415730 */
  push32(0x12412d23u); f_12415730();
  /* 12412d23 mov esi, esp */
  ESI = (ESP);
  /* 12412d25 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12412d27 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12412d2du);
  /* 12412d2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412d30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412d32 call 0x12415730 */
  push32(0x12412d37u); f_12415730();
L_12412d37:;
  /* 12412d37 mov esi, esp */
  ESI = (ESP);
  /* 12412d39 push 2 */
  push32((uint32_t)(0x2u));
  /* 12412d3b call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12412d41u);
  /* 12412d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412d44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412d46 call 0x12415730 */
  push32(0x12412d4bu); f_12415730();
  /* 12412d4b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12412d50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12412d52 je 0x12412e9b */
  if (C.zf) goto L_12412e9b;
  /* 12412d58 mov esi, esp */
  ESI = (ESP);
  /* 12412d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12412d5c call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x12412d62u);
  /* 12412d62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412d65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412d67 call 0x12415730 */
  push32(0x12412d6cu); f_12415730();
  /* 12412d6c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12412d71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12412d73 je 0x12412e9b */
  if (C.zf) goto L_12412e9b;
  /* 12412d79 mov esi, esp */
  ESI = (ESP);
  /* 12412d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12412d7d push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12412d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412d84 call dword ptr [0x1244545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244545c))), 0x12412d8au);
  /* 12412d8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412d8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412d8f call 0x12415730 */
  push32(0x12412d94u); f_12415730();
  /* 12412d94 mov esi, esp */
  ESI = (ESP);
  /* 12412d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412d98 call dword ptr [0x12445460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445460))), 0x12412d9eu);
  /* 12412d9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412da1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412da3 call 0x12415730 */
  push32(0x12412da8u); f_12415730();
  /* 12412da8 mov esi, esp */
  ESI = (ESP);
  /* 12412daa push 0 */
  push32((uint32_t)(0x0u));
  /* 12412dac push 2 */
  push32((uint32_t)(0x2u));
  /* 12412dae call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412db4u);
  /* 12412db4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412db7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412db9 call 0x12415730 */
  push32(0x12412dbeu); f_12415730();
  /* 12412dbe mov esi, esp */
  ESI = (ESP);
  /* 12412dc0 push 0x1243d710 */
  push32((uint32_t)(0x1243d710u));
  /* 12412dc5 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12412dcbu);
  /* 12412dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412dce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412dd0 call 0x12415730 */
  push32(0x12412dd5u); f_12415730();
  /* 12412dd5 mov esi, esp */
  ESI = (ESP);
  /* 12412dd7 push 0x12442538 */
  push32((uint32_t)(0x12442538u));
  /* 12412ddc call dword ptr [0x12445468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445468))), 0x12412de2u);
  /* 12412de2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412de5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412de7 call 0x12415730 */
  push32(0x12412decu); f_12415730();
  /* 12412dec mov esi, esp */
  ESI = (ESP);
  /* 12412dee push 0 */
  push32((uint32_t)(0x0u));
  /* 12412df0 push 0x12442510 */
  push32((uint32_t)(0x12442510u));
  /* 12412df5 push 4 */
  push32((uint32_t)(0x4u));
  /* 12412df7 call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x12412dfdu);
  /* 12412dfd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412e00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412e02 call 0x12415730 */
  push32(0x12412e07u); f_12415730();
  /* 12412e07 mov esi, esp */
  ESI = (ESP);
  /* 12412e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412e0b push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 12412e10 push 0x12442548 */
  push32((uint32_t)(0x12442548u));
  /* 12412e15 push 4 */
  push32((uint32_t)(0x4u));
  /* 12412e17 call dword ptr [0x12445470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445470))), 0x12412e1du);
  /* 12412e1d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412e20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412e22 call 0x12415730 */
  push32(0x12412e27u); f_12415730();
  /* 12412e27 mov esi, esp */
  ESI = (ESP);
  /* 12412e29 push 4 */
  push32((uint32_t)(0x4u));
  /* 12412e2b call dword ptr [0x12445460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445460))), 0x12412e31u);
  /* 12412e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412e34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412e36 call 0x12415730 */
  push32(0x12412e3bu); f_12415730();
  /* 12412e3b mov esi, esp */
  ESI = (ESP);
  /* 12412e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12412e3f push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12412e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412e46 call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x12412e4cu);
  /* 12412e4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412e51 call 0x12415730 */
  push32(0x12412e56u); f_12415730();
  /* 12412e56 mov esi, esp */
  ESI = (ESP);
  /* 12412e58 push 1 */
  push32((uint32_t)(0x1u));
  /* 12412e5a push 3 */
  push32((uint32_t)(0x3u));
  /* 12412e5c call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412e62u);
  /* 12412e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412e65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412e67 call 0x12415730 */
  push32(0x12412e6cu); f_12415730();
  /* 12412e6c mov esi, esp */
  ESI = (ESP);
  /* 12412e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 12412e70 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12412e72 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412e78u);
  /* 12412e78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412e7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412e7d call 0x12415730 */
  push32(0x12412e82u); f_12415730();
  /* 12412e82 mov esi, esp */
  ESI = (ESP);
  /* 12412e84 push 0x384 */
  push32((uint32_t)(0x384u));
  /* 12412e89 push 2 */
  push32((uint32_t)(0x2u));
  /* 12412e8b call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x12412e91u);
  /* 12412e91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412e94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412e96 call 0x12415730 */
  push32(0x12412e9bu); f_12415730();
L_12412e9b:;
  /* 12412e9b mov esi, esp */
  ESI = (ESP);
  /* 12412e9d push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12412e9f call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12412ea5u);
  /* 12412ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412ea8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412eaa call 0x12415730 */
  push32(0x12412eafu); f_12415730();
  /* 12412eaf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12412eb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12412eb6 je 0x12412fa2 */
  if (C.zf) goto L_12412fa2;
  /* 12412ebc mov esi, esp */
  ESI = (ESP);
  /* 12412ebe push 2 */
  push32((uint32_t)(0x2u));
  /* 12412ec0 call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x12412ec6u);
  /* 12412ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412ec9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412ecb call 0x12415730 */
  push32(0x12412ed0u); f_12415730();
  /* 12412ed0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12412ed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12412ed7 je 0x12412fa2 */
  if (C.zf) goto L_12412fa2;
  /* 12412edd mov esi, esp */
  ESI = (ESP);
  /* 12412edf push 0 */
  push32((uint32_t)(0x0u));
  /* 12412ee1 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12412ee3 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412ee9u);
  /* 12412ee9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412eec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412eee call 0x12415730 */
  push32(0x12412ef3u); f_12415730();
  /* 12412ef3 mov esi, esp */
  ESI = (ESP);
  /* 12412ef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412ef7 push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12412efc push 0 */
  push32((uint32_t)(0x0u));
  /* 12412efe call dword ptr [0x1244545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244545c))), 0x12412f04u);
  /* 12412f04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412f07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412f09 call 0x12415730 */
  push32(0x12412f0eu); f_12415730();
  /* 12412f0e mov esi, esp */
  ESI = (ESP);
  /* 12412f10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412f12 call dword ptr [0x12445460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445460))), 0x12412f18u);
  /* 12412f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412f1d call 0x12415730 */
  push32(0x12412f22u); f_12415730();
  /* 12412f22 mov esi, esp */
  ESI = (ESP);
  /* 12412f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412f26 push 0x12442510 */
  push32((uint32_t)(0x12442510u));
  /* 12412f2b push 4 */
  push32((uint32_t)(0x4u));
  /* 12412f2d call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x12412f33u);
  /* 12412f33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412f36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412f38 call 0x12415730 */
  push32(0x12412f3du); f_12415730();
  /* 12412f3d mov esi, esp */
  ESI = (ESP);
  /* 12412f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12412f41 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 12412f46 push 0x12442520 */
  push32((uint32_t)(0x12442520u));
  /* 12412f4b push 4 */
  push32((uint32_t)(0x4u));
  /* 12412f4d call dword ptr [0x12445470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445470))), 0x12412f53u);
  /* 12412f53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412f56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412f58 call 0x12415730 */
  push32(0x12412f5du); f_12415730();
  /* 12412f5d mov esi, esp */
  ESI = (ESP);
  /* 12412f5f push 4 */
  push32((uint32_t)(0x4u));
  /* 12412f61 call dword ptr [0x12445460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445460))), 0x12412f67u);
  /* 12412f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412f6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412f6c call 0x12415730 */
  push32(0x12412f71u); f_12415730();
  /* 12412f71 mov esi, esp */
  ESI = (ESP);
  /* 12412f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412f75 push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12412f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12412f7c call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x12412f82u);
  /* 12412f82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412f85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412f87 call 0x12415730 */
  push32(0x12412f8cu); f_12415730();
  /* 12412f8c mov esi, esp */
  ESI = (ESP);
  /* 12412f8e push 1 */
  push32((uint32_t)(0x1u));
  /* 12412f90 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12412f92 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412f98u);
  /* 12412f98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412f9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412f9d call 0x12415730 */
  push32(0x12412fa2u); f_12415730();
L_12412fa2:;
  /* 12412fa2 mov esi, esp */
  ESI = (ESP);
  /* 12412fa4 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12412fa6 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12412facu);
  /* 12412fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412faf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412fb1 call 0x12415730 */
  push32(0x12412fb6u); f_12415730();
  /* 12412fb6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12412fbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12412fbd je 0x12413022 */
  if (C.zf) goto L_12413022;
  /* 12412fbf mov esi, esp */
  ESI = (ESP);
  /* 12412fc1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12412fc3 push 0x12442520 */
  push32((uint32_t)(0x12442520u));
  /* 12412fc8 call dword ptr [0x12445474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445474))), 0x12412fceu);
  /* 12412fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412fd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412fd3 call 0x12415730 */
  push32(0x12412fd8u); f_12415730();
  /* 12412fd8 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412fdb jle 0x12413022 */
  if ((C.zf||C.sf!=C.of)) goto L_12413022;
  /* 12412fdd mov esi, esp */
  ESI = (ESP);
  /* 12412fdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12412fe1 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12412fe3 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12412fe9u);
  /* 12412fe9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12412fec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12412fee call 0x12415730 */
  push32(0x12412ff3u); f_12415730();
  /* 12412ff3 mov esi, esp */
  ESI = (ESP);
  /* 12412ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12412ff7 push 0x12442510 */
  push32((uint32_t)(0x12442510u));
  /* 12412ffc push 4 */
  push32((uint32_t)(0x4u));
  /* 12412ffe call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x12413004u);
  /* 12413004 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413007 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413009 call 0x12415730 */
  push32(0x1241300eu); f_12415730();
  /* 1241300e mov esi, esp */
  ESI = (ESP);
  /* 12413010 push 4 */
  push32((uint32_t)(0x4u));
  /* 12413012 call dword ptr [0x12445478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445478))), 0x12413018u);
  /* 12413018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241301b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241301d call 0x12415730 */
  push32(0x12413022u); f_12415730();
L_12413022:;
  /* 12413022 mov esi, esp */
  ESI = (ESP);
  /* 12413024 push 3 */
  push32((uint32_t)(0x3u));
  /* 12413026 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241302cu);
  /* 1241302c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241302f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413031 call 0x12415730 */
  push32(0x12413036u); f_12415730();
  /* 12413036 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241303b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241303d je 0x124130b8 */
  if (C.zf) goto L_124130b8;
  /* 1241303f mov esi, esp */
  ESI = (ESP);
  /* 12413041 push 2 */
  push32((uint32_t)(0x2u));
  /* 12413043 call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x12413049u);
  /* 12413049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241304c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241304e call 0x12415730 */
  push32(0x12413053u); f_12415730();
  /* 12413053 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241305a je 0x124130b8 */
  if (C.zf) goto L_124130b8;
  /* 1241305c mov esi, esp */
  ESI = (ESP);
  /* 1241305e push 0 */
  push32((uint32_t)(0x0u));
  /* 12413060 push 3 */
  push32((uint32_t)(0x3u));
  /* 12413062 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413068u);
  /* 12413068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241306b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241306d call 0x12415730 */
  push32(0x12413072u); f_12415730();
  /* 12413072 mov esi, esp */
  ESI = (ESP);
  /* 12413074 push 0x1243d708 */
  push32((uint32_t)(0x1243d708u));
  /* 12413079 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x1241307fu);
  /* 1241307f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413082 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413084 call 0x12415730 */
  push32(0x12413089u); f_12415730();
  /* 12413089 mov esi, esp */
  ESI = (ESP);
  /* 1241308b push 1 */
  push32((uint32_t)(0x1u));
  /* 1241308d push 4 */
  push32((uint32_t)(0x4u));
  /* 1241308f call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413095u);
  /* 12413095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413098 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241309a call 0x12415730 */
  push32(0x1241309fu); f_12415730();
  /* 1241309f mov esi, esp */
  ESI = (ESP);
  /* 124130a1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 124130a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 124130a8 call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x124130aeu);
  /* 124130ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124130b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124130b3 call 0x12415730 */
  push32(0x124130b8u); f_12415730();
L_124130b8:;
  /* 124130b8 mov esi, esp */
  ESI = (ESP);
  /* 124130ba push 4 */
  push32((uint32_t)(0x4u));
  /* 124130bc call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x124130c2u);
  /* 124130c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124130c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124130c7 call 0x12415730 */
  push32(0x124130ccu); f_12415730();
  /* 124130cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124130d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124130d3 je 0x12413169 */
  if (C.zf) goto L_12413169;
  /* 124130d9 mov esi, esp */
  ESI = (ESP);
  /* 124130db push 3 */
  push32((uint32_t)(0x3u));
  /* 124130dd call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x124130e3u);
  /* 124130e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124130e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124130e8 call 0x12415730 */
  push32(0x124130edu); f_12415730();
  /* 124130ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124130f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124130f4 je 0x12413169 */
  if (C.zf) goto L_12413169;
  /* 124130f6 mov esi, esp */
  ESI = (ESP);
  /* 124130f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124130fa push 4 */
  push32((uint32_t)(0x4u));
  /* 124130fc call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413102u);
  /* 12413102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413107 call 0x12415730 */
  push32(0x1241310cu); f_12415730();
  /* 1241310c mov esi, esp */
  ESI = (ESP);
  /* 1241310e push 0x1243d700 */
  push32((uint32_t)(0x1243d700u));
  /* 12413113 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413119u);
  /* 12413119 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241311c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241311e call 0x12415730 */
  push32(0x12413123u); f_12415730();
  /* 12413123 mov esi, esp */
  ESI = (ESP);
  /* 12413125 push 0x1243d6f8 */
  push32((uint32_t)(0x1243d6f8u));
  /* 1241312a call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413130u);
  /* 12413130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413133 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413135 call 0x12415730 */
  push32(0x1241313au); f_12415730();
  /* 1241313a mov esi, esp */
  ESI = (ESP);
  /* 1241313c push 1 */
  push32((uint32_t)(0x1u));
  /* 1241313e push 5 */
  push32((uint32_t)(0x5u));
  /* 12413140 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413146u);
  /* 12413146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241314b call 0x12415730 */
  push32(0x12413150u); f_12415730();
  /* 12413150 mov esi, esp */
  ESI = (ESP);
  /* 12413152 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12413157 push 4 */
  push32((uint32_t)(0x4u));
  /* 12413159 call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x1241315fu);
  /* 1241315f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413162 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413164 call 0x12415730 */
  push32(0x12413169u); f_12415730();
L_12413169:;
  /* 12413169 mov esi, esp */
  ESI = (ESP);
  /* 1241316b push 5 */
  push32((uint32_t)(0x5u));
  /* 1241316d call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413173u);
  /* 12413173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413176 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413178 call 0x12415730 */
  push32(0x1241317du); f_12415730();
  /* 1241317d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413184 je 0x12413234 */
  if (C.zf) goto L_12413234;
  /* 1241318a mov esi, esp */
  ESI = (ESP);
  /* 1241318c push 4 */
  push32((uint32_t)(0x4u));
  /* 1241318e call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x12413194u);
  /* 12413194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413197 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413199 call 0x12415730 */
  push32(0x1241319eu); f_12415730();
  /* 1241319e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124131a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124131a5 je 0x12413234 */
  if (C.zf) goto L_12413234;
  /* 124131ab mov esi, esp */
  ESI = (ESP);
  /* 124131ad push 0 */
  push32((uint32_t)(0x0u));
  /* 124131af push 5 */
  push32((uint32_t)(0x5u));
  /* 124131b1 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124131b7u);
  /* 124131b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124131ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124131bc call 0x12415730 */
  push32(0x124131c1u); f_12415730();
  /* 124131c1 mov esi, esp */
  ESI = (ESP);
  /* 124131c3 push 0x1243d6f0 */
  push32((uint32_t)(0x1243d6f0u));
  /* 124131c8 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x124131ceu);
  /* 124131ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124131d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124131d3 call 0x12415730 */
  push32(0x124131d8u); f_12415730();
  /* 124131d8 mov esi, esp */
  ESI = (ESP);
  /* 124131da push 0x42 */
  push32((uint32_t)(0x42u));
  /* 124131dc call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x124131e2u);
  /* 124131e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124131e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124131e7 call 0x12415730 */
  push32(0x124131ecu); f_12415730();
  /* 124131ec mov esi, esp */
  ESI = (ESP);
  /* 124131ee push 0x12442528 */
  push32((uint32_t)(0x12442528u));
  /* 124131f3 call dword ptr [0x12445468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445468))), 0x124131f9u);
  /* 124131f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124131fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124131fe call 0x12415730 */
  push32(0x12413203u); f_12415730();
  /* 12413203 mov esi, esp */
  ESI = (ESP);
  /* 12413205 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413207 push 0x12442418 */
  push32((uint32_t)(0x12442418u));
  /* 1241320c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241320e call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12413214u);
  /* 12413214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413217 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413219 call 0x12415730 */
  push32(0x1241321eu); f_12415730();
  /* 1241321e mov esi, esp */
  ESI = (ESP);
  /* 12413220 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413222 push 6 */
  push32((uint32_t)(0x6u));
  /* 12413224 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241322au);
  /* 1241322a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241322d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241322f call 0x12415730 */
  push32(0x12413234u); f_12415730();
L_12413234:;
  /* 12413234 mov esi, esp */
  ESI = (ESP);
  /* 12413236 push 6 */
  push32((uint32_t)(0x6u));
  /* 12413238 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241323eu);
  /* 1241323e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413243 call 0x12415730 */
  push32(0x12413248u); f_12415730();
  /* 12413248 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241324d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241324f je 0x1241332b */
  if (C.zf) goto L_1241332b;
  /* 12413255 mov esi, esp */
  ESI = (ESP);
  /* 12413257 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413259 push 0x12442418 */
  push32((uint32_t)(0x12442418u));
  /* 1241325e call dword ptr [0x12445480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445480))), 0x12413264u);
  /* 12413264 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413267 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413269 call 0x12415730 */
  push32(0x1241326eu); f_12415730();
  /* 1241326e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413270 jle 0x1241332b */
  if ((C.zf||C.sf!=C.of)) goto L_1241332b;
  /* 12413276 mov esi, esp */
  ESI = (ESP);
  /* 12413278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241327a push 6 */
  push32((uint32_t)(0x6u));
  /* 1241327c call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413282u);
  /* 12413282 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413287 call 0x12415730 */
  push32(0x1241328cu); f_12415730();
  /* 1241328c mov esi, esp */
  ESI = (ESP);
  /* 1241328e push 0x1243d6e8 */
  push32((uint32_t)(0x1243d6e8u));
  /* 12413293 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413299u);
  /* 12413299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241329c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241329e call 0x12415730 */
  push32(0x124132a3u); f_12415730();
  /* 124132a3 mov esi, esp */
  ESI = (ESP);
  /* 124132a5 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 124132a7 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x124132adu);
  /* 124132ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124132b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124132b2 call 0x12415730 */
  push32(0x124132b7u); f_12415730();
  /* 124132b7 mov esi, esp */
  ESI = (ESP);
  /* 124132b9 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 124132bb call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x124132c1u);
  /* 124132c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124132c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124132c6 call 0x12415730 */
  push32(0x124132cbu); f_12415730();
  /* 124132cb mov esi, esp */
  ESI = (ESP);
  /* 124132cd push 0x43 */
  push32((uint32_t)(0x43u));
  /* 124132cf call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x124132d5u);
  /* 124132d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124132d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124132da call 0x12415730 */
  push32(0x124132dfu); f_12415730();
  /* 124132df mov esi, esp */
  ESI = (ESP);
  /* 124132e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124132e3 push 0x12442418 */
  push32((uint32_t)(0x12442418u));
  /* 124132e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124132ea call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124132f0u);
  /* 124132f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124132f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124132f5 call 0x12415730 */
  push32(0x124132fau); f_12415730();
  /* 124132fa mov esi, esp */
  ESI = (ESP);
  /* 124132fc push 1 */
  push32((uint32_t)(0x1u));
  /* 124132fe push 0x124423f8 */
  push32((uint32_t)(0x124423f8u));
  /* 12413303 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413305 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241330bu);
  /* 1241330b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241330e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413310 call 0x12415730 */
  push32(0x12413315u); f_12415730();
  /* 12413315 mov esi, esp */
  ESI = (ESP);
  /* 12413317 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413319 push 7 */
  push32((uint32_t)(0x7u));
  /* 1241331b call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413321u);
  /* 12413321 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413324 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413326 call 0x12415730 */
  push32(0x1241332bu); f_12415730();
L_1241332b:;
  /* 1241332b mov esi, esp */
  ESI = (ESP);
  /* 1241332d push 7 */
  push32((uint32_t)(0x7u));
  /* 1241332f call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413335u);
  /* 12413335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241333a call 0x12415730 */
  push32(0x1241333fu); f_12415730();
  /* 1241333f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413346 je 0x12413422 */
  if (C.zf) goto L_12413422;
  /* 1241334c mov esi, esp */
  ESI = (ESP);
  /* 1241334e push 0 */
  push32((uint32_t)(0x0u));
  /* 12413350 push 0x124423f8 */
  push32((uint32_t)(0x124423f8u));
  /* 12413355 call dword ptr [0x12445480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445480))), 0x1241335bu);
  /* 1241335b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241335e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413360 call 0x12415730 */
  push32(0x12413365u); f_12415730();
  /* 12413365 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413367 jle 0x12413422 */
  if ((C.zf||C.sf!=C.of)) goto L_12413422;
  /* 1241336d mov esi, esp */
  ESI = (ESP);
  /* 1241336f push 0 */
  push32((uint32_t)(0x0u));
  /* 12413371 push 7 */
  push32((uint32_t)(0x7u));
  /* 12413373 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413379u);
  /* 12413379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241337c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241337e call 0x12415730 */
  push32(0x12413383u); f_12415730();
  /* 12413383 mov esi, esp */
  ESI = (ESP);
  /* 12413385 push 0x1243d6e0 */
  push32((uint32_t)(0x1243d6e0u));
  /* 1241338a call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413390u);
  /* 12413390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413395 call 0x12415730 */
  push32(0x1241339au); f_12415730();
  /* 1241339a mov esi, esp */
  ESI = (ESP);
  /* 1241339c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1241339e call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x124133a4u);
  /* 124133a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124133a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124133a9 call 0x12415730 */
  push32(0x124133aeu); f_12415730();
  /* 124133ae mov esi, esp */
  ESI = (ESP);
  /* 124133b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 124133b2 call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x124133b8u);
  /* 124133b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124133bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124133bd call 0x12415730 */
  push32(0x124133c2u); f_12415730();
  /* 124133c2 mov esi, esp */
  ESI = (ESP);
  /* 124133c4 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 124133c6 call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x124133ccu);
  /* 124133cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124133cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124133d1 call 0x12415730 */
  push32(0x124133d6u); f_12415730();
  /* 124133d6 mov esi, esp */
  ESI = (ESP);
  /* 124133d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124133da push 0x124423f8 */
  push32((uint32_t)(0x124423f8u));
  /* 124133df push 0 */
  push32((uint32_t)(0x0u));
  /* 124133e1 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124133e7u);
  /* 124133e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124133ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124133ec call 0x12415730 */
  push32(0x124133f1u); f_12415730();
  /* 124133f1 mov esi, esp */
  ESI = (ESP);
  /* 124133f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124133f5 push 0x124423e0 */
  push32((uint32_t)(0x124423e0u));
  /* 124133fa push 0 */
  push32((uint32_t)(0x0u));
  /* 124133fc call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12413402u);
  /* 12413402 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413407 call 0x12415730 */
  push32(0x1241340cu); f_12415730();
  /* 1241340c mov esi, esp */
  ESI = (ESP);
  /* 1241340e push 1 */
  push32((uint32_t)(0x1u));
  /* 12413410 push 8 */
  push32((uint32_t)(0x8u));
  /* 12413412 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413418u);
  /* 12413418 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241341b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241341d call 0x12415730 */
  push32(0x12413422u); f_12415730();
L_12413422:;
  /* 12413422 mov esi, esp */
  ESI = (ESP);
  /* 12413424 push 8 */
  push32((uint32_t)(0x8u));
  /* 12413426 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241342cu);
  /* 1241342c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241342f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413431 call 0x12415730 */
  push32(0x12413436u); f_12415730();
  /* 12413436 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241343b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241343d je 0x12413500 */
  if (C.zf) goto L_12413500;
  /* 12413443 mov esi, esp */
  ESI = (ESP);
  /* 12413445 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413447 push 0x124423e0 */
  push32((uint32_t)(0x124423e0u));
  /* 1241344c call dword ptr [0x12445480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445480))), 0x12413452u);
  /* 12413452 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413457 call 0x12415730 */
  push32(0x1241345cu); f_12415730();
  /* 1241345c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241345e jle 0x12413500 */
  if ((C.zf||C.sf!=C.of)) goto L_12413500;
  /* 12413464 mov esi, esp */
  ESI = (ESP);
  /* 12413466 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413468 push 8 */
  push32((uint32_t)(0x8u));
  /* 1241346a call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413470u);
  /* 12413470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413473 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413475 call 0x12415730 */
  push32(0x1241347au); f_12415730();
  /* 1241347a mov esi, esp */
  ESI = (ESP);
  /* 1241347c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12413481 push 5 */
  push32((uint32_t)(0x5u));
  /* 12413483 call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x12413489u);
  /* 12413489 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241348c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241348e call 0x12415730 */
  push32(0x12413493u); f_12415730();
  /* 12413493 mov esi, esp */
  ESI = (ESP);
  /* 12413495 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12413497 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x1241349du);
  /* 1241349d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124134a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124134a2 call 0x12415730 */
  push32(0x124134a7u); f_12415730();
  /* 124134a7 mov esi, esp */
  ESI = (ESP);
  /* 124134a9 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 124134ab call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x124134b1u);
  /* 124134b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124134b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124134b6 call 0x12415730 */
  push32(0x124134bbu); f_12415730();
  /* 124134bb mov esi, esp */
  ESI = (ESP);
  /* 124134bd push 0x45 */
  push32((uint32_t)(0x45u));
  /* 124134bf call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x124134c5u);
  /* 124134c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124134c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124134ca call 0x12415730 */
  push32(0x124134cfu); f_12415730();
  /* 124134cf mov esi, esp */
  ESI = (ESP);
  /* 124134d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124134d3 push 0x124423e0 */
  push32((uint32_t)(0x124423e0u));
  /* 124134d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124134da call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124134e0u);
  /* 124134e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124134e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124134e5 call 0x12415730 */
  push32(0x124134eau); f_12415730();
  /* 124134ea mov esi, esp */
  ESI = (ESP);
  /* 124134ec push 1 */
  push32((uint32_t)(0x1u));
  /* 124134ee push 9 */
  push32((uint32_t)(0x9u));
  /* 124134f0 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124134f6u);
  /* 124134f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124134f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124134fb call 0x12415730 */
  push32(0x12413500u); f_12415730();
L_12413500:;
  /* 12413500 mov esi, esp */
  ESI = (ESP);
  /* 12413502 push 9 */
  push32((uint32_t)(0x9u));
  /* 12413504 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241350au);
  /* 1241350a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241350d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241350f call 0x12415730 */
  push32(0x12413514u); f_12415730();
  /* 12413514 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241351b je 0x1241378a */
  if (C.zf) goto L_1241378a;
  /* 12413521 mov esi, esp */
  ESI = (ESP);
  /* 12413523 push 5 */
  push32((uint32_t)(0x5u));
  /* 12413525 call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x1241352bu);
  /* 1241352b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241352e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413530 call 0x12415730 */
  push32(0x12413535u); f_12415730();
  /* 12413535 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241353a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241353c je 0x1241378a */
  if (C.zf) goto L_1241378a;
  /* 12413542 mov esi, esp */
  ESI = (ESP);
  /* 12413544 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413546 push 9 */
  push32((uint32_t)(0x9u));
  /* 12413548 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241354eu);
  /* 1241354e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413551 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413553 call 0x12415730 */
  push32(0x12413558u); f_12415730();
  /* 12413558 mov esi, esp */
  ESI = (ESP);
  /* 1241355a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241355c push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12413561 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413563 call dword ptr [0x1244545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244545c))), 0x12413569u);
  /* 12413569 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241356c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241356e call 0x12415730 */
  push32(0x12413573u); f_12415730();
  /* 12413573 mov esi, esp */
  ESI = (ESP);
  /* 12413575 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413577 call dword ptr [0x12445460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445460))), 0x1241357du);
  /* 1241357d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413580 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413582 call 0x12415730 */
  push32(0x12413587u); f_12415730();
  /* 12413587 mov esi, esp */
  ESI = (ESP);
  /* 12413589 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241358b push 0x12442540 */
  push32((uint32_t)(0x12442540u));
  /* 12413590 push 5 */
  push32((uint32_t)(0x5u));
  /* 12413592 push 0x12442420 */
  push32((uint32_t)(0x12442420u));
  /* 12413597 push 0x124424f0 */
  push32((uint32_t)(0x124424f0u));
  /* 1241359c push 0x124424c0 */
  push32((uint32_t)(0x124424c0u));
  /* 124135a1 call dword ptr [0x12445484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445484))), 0x124135a7u);
  /* 124135a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124135aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124135ac call 0x12415730 */
  push32(0x124135b1u); f_12415730();
  /* 124135b1 mov esi, esp */
  ESI = (ESP);
  /* 124135b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124135b5 push 0x12442548 */
  push32((uint32_t)(0x12442548u));
  /* 124135ba push 5 */
  push32((uint32_t)(0x5u));
  /* 124135bc push 0x12442420 */
  push32((uint32_t)(0x12442420u));
  /* 124135c1 push 0x124424f0 */
  push32((uint32_t)(0x124424f0u));
  /* 124135c6 push 0x124424c8 */
  push32((uint32_t)(0x124424c8u));
  /* 124135cb call dword ptr [0x12445484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445484))), 0x124135d1u);
  /* 124135d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124135d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124135d6 call 0x12415730 */
  push32(0x124135dbu); f_12415730();
  /* 124135db mov esi, esp */
  ESI = (ESP);
  /* 124135dd push 0 */
  push32((uint32_t)(0x0u));
  /* 124135df push 0x12442550 */
  push32((uint32_t)(0x12442550u));
  /* 124135e4 push 5 */
  push32((uint32_t)(0x5u));
  /* 124135e6 push 0x12442420 */
  push32((uint32_t)(0x12442420u));
  /* 124135eb push 0x124424f0 */
  push32((uint32_t)(0x124424f0u));
  /* 124135f0 push 0x124424d0 */
  push32((uint32_t)(0x124424d0u));
  /* 124135f5 call dword ptr [0x12445484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445484))), 0x124135fbu);
  /* 124135fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124135fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413600 call 0x12415730 */
  push32(0x12413605u); f_12415730();
  /* 12413605 mov esi, esp */
  ESI = (ESP);
  /* 12413607 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413609 push 0x12442558 */
  push32((uint32_t)(0x12442558u));
  /* 1241360e push 5 */
  push32((uint32_t)(0x5u));
  /* 12413610 push 0x12442450 */
  push32((uint32_t)(0x12442450u));
  /* 12413615 push 0x124424f0 */
  push32((uint32_t)(0x124424f0u));
  /* 1241361a push 0x124424d8 */
  push32((uint32_t)(0x124424d8u));
  /* 1241361f call dword ptr [0x12445484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445484))), 0x12413625u);
  /* 12413625 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413628 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241362a call 0x12415730 */
  push32(0x1241362fu); f_12415730();
  /* 1241362f mov esi, esp */
  ESI = (ESP);
  /* 12413631 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413633 push 0x12442560 */
  push32((uint32_t)(0x12442560u));
  /* 12413638 push 5 */
  push32((uint32_t)(0x5u));
  /* 1241363a push 0x12442450 */
  push32((uint32_t)(0x12442450u));
  /* 1241363f push 0x124424f0 */
  push32((uint32_t)(0x124424f0u));
  /* 12413644 push 0x124424e0 */
  push32((uint32_t)(0x124424e0u));
  /* 12413649 call dword ptr [0x12445484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445484))), 0x1241364fu);
  /* 1241364f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413654 call 0x12415730 */
  push32(0x12413659u); f_12415730();
  /* 12413659 mov esi, esp */
  ESI = (ESP);
  /* 1241365b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241365d push 0x12442568 */
  push32((uint32_t)(0x12442568u));
  /* 12413662 push 5 */
  push32((uint32_t)(0x5u));
  /* 12413664 push 0x12442450 */
  push32((uint32_t)(0x12442450u));
  /* 12413669 push 0x124424f0 */
  push32((uint32_t)(0x124424f0u));
  /* 1241366e push 0x124424e8 */
  push32((uint32_t)(0x124424e8u));
  /* 12413673 call dword ptr [0x12445484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445484))), 0x12413679u);
  /* 12413679 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241367c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241367e call 0x12415730 */
  push32(0x12413683u); f_12415730();
  /* 12413683 mov esi, esp */
  ESI = (ESP);
  /* 12413685 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413687 push 0x124424c0 */
  push32((uint32_t)(0x124424c0u));
  /* 1241368c push 5 */
  push32((uint32_t)(0x5u));
  /* 1241368e call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x12413694u);
  /* 12413694 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413697 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413699 call 0x12415730 */
  push32(0x1241369eu); f_12415730();
  /* 1241369e mov esi, esp */
  ESI = (ESP);
  /* 124136a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124136a2 push 0x124424c8 */
  push32((uint32_t)(0x124424c8u));
  /* 124136a7 push 5 */
  push32((uint32_t)(0x5u));
  /* 124136a9 call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x124136afu);
  /* 124136af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124136b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124136b4 call 0x12415730 */
  push32(0x124136b9u); f_12415730();
  /* 124136b9 mov esi, esp */
  ESI = (ESP);
  /* 124136bb push 1 */
  push32((uint32_t)(0x1u));
  /* 124136bd push 0x124424d0 */
  push32((uint32_t)(0x124424d0u));
  /* 124136c2 push 5 */
  push32((uint32_t)(0x5u));
  /* 124136c4 call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x124136cau);
  /* 124136ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124136cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124136cf call 0x12415730 */
  push32(0x124136d4u); f_12415730();
  /* 124136d4 mov esi, esp */
  ESI = (ESP);
  /* 124136d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 124136d8 push 0x124424d8 */
  push32((uint32_t)(0x124424d8u));
  /* 124136dd push 5 */
  push32((uint32_t)(0x5u));
  /* 124136df call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x124136e5u);
  /* 124136e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124136e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124136ea call 0x12415730 */
  push32(0x124136efu); f_12415730();
  /* 124136ef mov esi, esp */
  ESI = (ESP);
  /* 124136f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124136f3 push 0x124424e0 */
  push32((uint32_t)(0x124424e0u));
  /* 124136f8 push 5 */
  push32((uint32_t)(0x5u));
  /* 124136fa call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x12413700u);
  /* 12413700 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413705 call 0x12415730 */
  push32(0x1241370au); f_12415730();
  /* 1241370a mov esi, esp */
  ESI = (ESP);
  /* 1241370c push 1 */
  push32((uint32_t)(0x1u));
  /* 1241370e push 0x124424e8 */
  push32((uint32_t)(0x124424e8u));
  /* 12413713 push 5 */
  push32((uint32_t)(0x5u));
  /* 12413715 call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x1241371bu);
  /* 1241371b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241371e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413720 call 0x12415730 */
  push32(0x12413725u); f_12415730();
  /* 12413725 mov esi, esp */
  ESI = (ESP);
  /* 12413727 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413729 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 1241372e push 0x12442518 */
  push32((uint32_t)(0x12442518u));
  /* 12413733 push 5 */
  push32((uint32_t)(0x5u));
  /* 12413735 call dword ptr [0x12445488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445488))), 0x1241373bu);
  /* 1241373b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241373e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413740 call 0x12415730 */
  push32(0x12413745u); f_12415730();
  /* 12413745 mov esi, esp */
  ESI = (ESP);
  /* 12413747 push 5 */
  push32((uint32_t)(0x5u));
  /* 12413749 call dword ptr [0x12445460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445460))), 0x1241374fu);
  /* 1241374f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413752 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413754 call 0x12415730 */
  push32(0x12413759u); f_12415730();
  /* 12413759 mov esi, esp */
  ESI = (ESP);
  /* 1241375b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241375d push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12413762 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413764 call dword ptr [0x1244546c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244546c))), 0x1241376au);
  /* 1241376a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241376d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241376f call 0x12415730 */
  push32(0x12413774u); f_12415730();
  /* 12413774 mov esi, esp */
  ESI = (ESP);
  /* 12413776 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413778 push 0xa */
  push32((uint32_t)(0xau));
  /* 1241377a call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413780u);
  /* 12413780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413783 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413785 call 0x12415730 */
  push32(0x1241378au); f_12415730();
L_1241378a:;
  /* 1241378a mov esi, esp */
  ESI = (ESP);
  /* 1241378c push 0xa */
  push32((uint32_t)(0xau));
  /* 1241378e call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413794u);
  /* 12413794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413799 call 0x12415730 */
  push32(0x1241379eu); f_12415730();
  /* 1241379e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124137a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124137a5 je 0x124138d1 */
  if (C.zf) goto L_124138d1;
  /* 124137ab mov esi, esp */
  ESI = (ESP);
  /* 124137ad push 0x124424c0 */
  push32((uint32_t)(0x124424c0u));
  /* 124137b2 call dword ptr [0x1244548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244548c))), 0x124137b8u);
  /* 124137b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124137bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124137bd call 0x12415730 */
  push32(0x124137c2u); f_12415730();
  /* 124137c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124137c4 jne 0x124138d1 */
  if (!C.zf) goto L_124138d1;
  /* 124137ca mov esi, esp */
  ESI = (ESP);
  /* 124137cc push 0x124424c8 */
  push32((uint32_t)(0x124424c8u));
  /* 124137d1 call dword ptr [0x1244548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244548c))), 0x124137d7u);
  /* 124137d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124137da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124137dc call 0x12415730 */
  push32(0x124137e1u); f_12415730();
  /* 124137e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124137e3 jne 0x124138d1 */
  if (!C.zf) goto L_124138d1;
  /* 124137e9 mov esi, esp */
  ESI = (ESP);
  /* 124137eb push 0x124424d0 */
  push32((uint32_t)(0x124424d0u));
  /* 124137f0 call dword ptr [0x1244548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244548c))), 0x124137f6u);
  /* 124137f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124137f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124137fb call 0x12415730 */
  push32(0x12413800u); f_12415730();
  /* 12413800 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413802 jne 0x124138d1 */
  if (!C.zf) goto L_124138d1;
  /* 12413808 mov esi, esp */
  ESI = (ESP);
  /* 1241380a push 0x124424d8 */
  push32((uint32_t)(0x124424d8u));
  /* 1241380f call dword ptr [0x1244548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244548c))), 0x12413815u);
  /* 12413815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413818 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241381a call 0x12415730 */
  push32(0x1241381fu); f_12415730();
  /* 1241381f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413821 jne 0x124138d1 */
  if (!C.zf) goto L_124138d1;
  /* 12413827 mov esi, esp */
  ESI = (ESP);
  /* 12413829 push 0x124424e0 */
  push32((uint32_t)(0x124424e0u));
  /* 1241382e call dword ptr [0x1244548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244548c))), 0x12413834u);
  /* 12413834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413839 call 0x12415730 */
  push32(0x1241383eu); f_12415730();
  /* 1241383e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413840 jne 0x124138d1 */
  if (!C.zf) goto L_124138d1;
  /* 12413846 mov esi, esp */
  ESI = (ESP);
  /* 12413848 push 0x124424e8 */
  push32((uint32_t)(0x124424e8u));
  /* 1241384d call dword ptr [0x1244548c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244548c))), 0x12413853u);
  /* 12413853 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413856 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413858 call 0x12415730 */
  push32(0x1241385du); f_12415730();
  /* 1241385d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241385f jne 0x124138d1 */
  if (!C.zf) goto L_124138d1;
  /* 12413861 mov esi, esp */
  ESI = (ESP);
  /* 12413863 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413865 push 0xa */
  push32((uint32_t)(0xau));
  /* 12413867 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241386du);
  /* 1241386d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413870 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413872 call 0x12415730 */
  push32(0x12413877u); f_12415730();
  /* 12413877 mov esi, esp */
  ESI = (ESP);
  /* 12413879 push 0x1243d6d8 */
  push32((uint32_t)(0x1243d6d8u));
  /* 1241387e call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413884u);
  /* 12413884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413887 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413889 call 0x12415730 */
  push32(0x1241388eu); f_12415730();
  /* 1241388e mov esi, esp */
  ESI = (ESP);
  /* 12413890 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12413892 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12413898u);
  /* 12413898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241389b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241389d call 0x12415730 */
  push32(0x124138a2u); f_12415730();
  /* 124138a2 mov esi, esp */
  ESI = (ESP);
  /* 124138a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124138a6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124138a8 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124138aeu);
  /* 124138ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124138b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124138b3 call 0x12415730 */
  push32(0x124138b8u); f_12415730();
  /* 124138b8 mov esi, esp */
  ESI = (ESP);
  /* 124138ba push 0x258 */
  push32((uint32_t)(0x258u));
  /* 124138bf push 6 */
  push32((uint32_t)(0x6u));
  /* 124138c1 call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x124138c7u);
  /* 124138c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124138ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124138cc call 0x12415730 */
  push32(0x124138d1u); f_12415730();
L_124138d1:;
  /* 124138d1 mov esi, esp */
  ESI = (ESP);
  /* 124138d3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 124138d5 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x124138dbu);
  /* 124138db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124138de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124138e0 call 0x12415730 */
  push32(0x124138e5u); f_12415730();
  /* 124138e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124138ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124138ec je 0x12413997 */
  if (C.zf) goto L_12413997;
  /* 124138f2 mov esi, esp */
  ESI = (ESP);
  /* 124138f4 push 6 */
  push32((uint32_t)(0x6u));
  /* 124138f6 call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x124138fcu);
  /* 124138fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124138ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413901 call 0x12415730 */
  push32(0x12413906u); f_12415730();
  /* 12413906 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241390b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241390d je 0x12413997 */
  if (C.zf) goto L_12413997;
  /* 12413913 mov esi, esp */
  ESI = (ESP);
  /* 12413915 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413917 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12413919 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241391fu);
  /* 1241391f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413922 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413924 call 0x12415730 */
  push32(0x12413929u); f_12415730();
  /* 12413929 mov esi, esp */
  ESI = (ESP);
  /* 1241392b push 0x1243d6d0 */
  push32((uint32_t)(0x1243d6d0u));
  /* 12413930 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413936u);
  /* 12413936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241393b call 0x12415730 */
  push32(0x12413940u); f_12415730();
  /* 12413940 mov esi, esp */
  ESI = (ESP);
  /* 12413942 push 0x1243d6c4 */
  push32((uint32_t)(0x1243d6c4u));
  /* 12413947 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x1241394du);
  /* 1241394d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413950 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413952 call 0x12415730 */
  push32(0x12413957u); f_12415730();
  /* 12413957 mov esi, esp */
  ESI = (ESP);
  /* 12413959 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1241395b call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x12413961u);
  /* 12413961 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413964 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413966 call 0x12415730 */
  push32(0x1241396bu); f_12415730();
  /* 1241396b mov esi, esp */
  ESI = (ESP);
  /* 1241396d push 1 */
  push32((uint32_t)(0x1u));
  /* 1241396f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12413971 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413977u);
  /* 12413977 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241397a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241397c call 0x12415730 */
  push32(0x12413981u); f_12415730();
  /* 12413981 mov esi, esp */
  ESI = (ESP);
  /* 12413983 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413985 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12413987 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241398du);
  /* 1241398d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413990 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413992 call 0x12415730 */
  push32(0x12413997u); f_12415730();
L_12413997:;
  /* 12413997 mov esi, esp */
  ESI = (ESP);
  /* 12413999 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1241399b call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x124139a1u);
  /* 124139a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124139a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124139a6 call 0x12415730 */
  push32(0x124139abu); f_12415730();
  /* 124139ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124139b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124139b2 je 0x124139cf */
  if (C.zf) goto L_124139cf;
  /* 124139b4 mov esi, esp */
  ESI = (ESP);
  /* 124139b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124139b8 push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 124139bd push 0 */
  push32((uint32_t)(0x0u));
  /* 124139bf call dword ptr [0x1244545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244545c))), 0x124139c5u);
  /* 124139c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124139c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124139ca call 0x12415730 */
  push32(0x124139cfu); f_12415730();
L_124139cf:;
  /* 124139cf mov esi, esp */
  ESI = (ESP);
  /* 124139d1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 124139d3 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x124139d9u);
  /* 124139d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124139dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124139de call 0x12415730 */
  push32(0x124139e3u); f_12415730();
  /* 124139e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124139e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124139ea je 0x12413ac9 */
  if (C.zf) goto L_12413ac9;
  /* 124139f0 mov esi, esp */
  ESI = (ESP);
  /* 124139f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124139f4 push 0x12442460 */
  push32((uint32_t)(0x12442460u));
  /* 124139f9 push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 124139fe call dword ptr [0x12445490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445490))), 0x12413a04u);
  /* 12413a04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413a09 call 0x12415730 */
  push32(0x12413a0eu); f_12415730();
  /* 12413a0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413a10 jle 0x12413ac9 */
  if ((C.zf||C.sf!=C.of)) goto L_12413ac9;
  /* 12413a16 mov esi, esp */
  ESI = (ESP);
  /* 12413a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413a1a push 0xd */
  push32((uint32_t)(0xdu));
  /* 12413a1c call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413a22u);
  /* 12413a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413a25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413a27 call 0x12415730 */
  push32(0x12413a2cu); f_12415730();
  /* 12413a2c mov esi, esp */
  ESI = (ESP);
  /* 12413a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12413a30 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12413a32 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413a38u);
  /* 12413a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413a3d call 0x12415730 */
  push32(0x12413a42u); f_12415730();
  /* 12413a42 mov esi, esp */
  ESI = (ESP);
  /* 12413a44 push 0x1243d6b8 */
  push32((uint32_t)(0x1243d6b8u));
  /* 12413a49 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413a4fu);
  /* 12413a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413a52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413a54 call 0x12415730 */
  push32(0x12413a59u); f_12415730();
  /* 12413a59 mov esi, esp */
  ESI = (ESP);
  /* 12413a5b push 0x12442710 */
  push32((uint32_t)(0x12442710u));
  /* 12413a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413a62 call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12413a68u);
  /* 12413a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413a6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413a6d call 0x12415730 */
  push32(0x12413a72u); f_12415730();
  /* 12413a72 mov esi, esp */
  ESI = (ESP);
  /* 12413a74 push 0x124426b0 */
  push32((uint32_t)(0x124426b0u));
  /* 12413a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413a7b call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12413a81u);
  /* 12413a81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413a84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413a86 call 0x12415730 */
  push32(0x12413a8bu); f_12415730();
  /* 12413a8b mov esi, esp */
  ESI = (ESP);
  /* 12413a8d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12413a8f call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12413a95u);
  /* 12413a95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413a98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413a9a call 0x12415730 */
  push32(0x12413a9fu); f_12415730();
  /* 12413a9f mov esi, esp */
  ESI = (ESP);
  /* 12413aa1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12413aa3 call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x12413aa9u);
  /* 12413aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413aac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413aae call 0x12415730 */
  push32(0x12413ab3u); f_12415730();
  /* 12413ab3 mov esi, esp */
  ESI = (ESP);
  /* 12413ab5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413ab7 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12413ab9 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413abfu);
  /* 12413abf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413ac2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413ac4 call 0x12415730 */
  push32(0x12413ac9u); f_12415730();
L_12413ac9:;
  /* 12413ac9 mov esi, esp */
  ESI = (ESP);
  /* 12413acb push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12413acd call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413ad3u);
  /* 12413ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413ad6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413ad8 call 0x12415730 */
  push32(0x12413addu); f_12415730();
  /* 12413add and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413ae4 je 0x12413b61 */
  if (C.zf) goto L_12413b61;
  /* 12413ae6 mov esi, esp */
  ESI = (ESP);
  /* 12413ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413aea push 0x12442710 */
  push32((uint32_t)(0x12442710u));
  /* 12413aef call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x12413af5u);
  /* 12413af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413af8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413afa call 0x12415730 */
  push32(0x12413affu); f_12415730();
  /* 12413aff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413b04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413b06 je 0x12413b61 */
  if (C.zf) goto L_12413b61;
  /* 12413b08 mov esi, esp */
  ESI = (ESP);
  /* 12413b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12413b0c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12413b0e call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413b14u);
  /* 12413b14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413b17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413b19 call 0x12415730 */
  push32(0x12413b1eu); f_12415730();
  /* 12413b1e mov esi, esp */
  ESI = (ESP);
  /* 12413b20 push 0x1243d6ac */
  push32((uint32_t)(0x1243d6acu));
  /* 12413b25 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413b2bu);
  /* 12413b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413b30 call 0x12415730 */
  push32(0x12413b35u); f_12415730();
  /* 12413b35 mov esi, esp */
  ESI = (ESP);
  /* 12413b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413b39 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12413b3b call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413b41u);
  /* 12413b41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413b44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413b46 call 0x12415730 */
  push32(0x12413b4bu); f_12415730();
  /* 12413b4b mov esi, esp */
  ESI = (ESP);
  /* 12413b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 12413b4f push 0xf */
  push32((uint32_t)(0xfu));
  /* 12413b51 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413b57u);
  /* 12413b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413b5c call 0x12415730 */
  push32(0x12413b61u); f_12415730();
L_12413b61:;
  /* 12413b61 mov esi, esp */
  ESI = (ESP);
  /* 12413b63 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12413b65 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413b6bu);
  /* 12413b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413b6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413b70 call 0x12415730 */
  push32(0x12413b75u); f_12415730();
  /* 12413b75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413b7c je 0x12413b99 */
  if (C.zf) goto L_12413b99;
  /* 12413b7e mov esi, esp */
  ESI = (ESP);
  /* 12413b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413b82 push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12413b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413b89 call dword ptr [0x1244545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244545c))), 0x12413b8fu);
  /* 12413b8f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413b92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413b94 call 0x12415730 */
  push32(0x12413b99u); f_12415730();
L_12413b99:;
  /* 12413b99 mov esi, esp */
  ESI = (ESP);
  /* 12413b9b push 0xf */
  push32((uint32_t)(0xfu));
  /* 12413b9d call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413ba3u);
  /* 12413ba3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413ba8 call 0x12415730 */
  push32(0x12413badu); f_12415730();
  /* 12413bad and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413bb4 je 0x12413cc5 */
  if (C.zf) goto L_12413cc5;
  /* 12413bba mov esi, esp */
  ESI = (ESP);
  /* 12413bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12413bbe push 0x12442498 */
  push32((uint32_t)(0x12442498u));
  /* 12413bc3 push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12413bc8 call dword ptr [0x12445490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445490))), 0x12413bceu);
  /* 12413bce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413bd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413bd3 call 0x12415730 */
  push32(0x12413bd8u); f_12415730();
  /* 12413bd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413bda jle 0x12413cc5 */
  if ((C.zf||C.sf!=C.of)) goto L_12413cc5;
  /* 12413be0 mov esi, esp */
  ESI = (ESP);
  /* 12413be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413be4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12413be6 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413becu);
  /* 12413bec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413bf1 call 0x12415730 */
  push32(0x12413bf6u); f_12415730();
  /* 12413bf6 mov esi, esp */
  ESI = (ESP);
  /* 12413bf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413bfa push 0xf */
  push32((uint32_t)(0xfu));
  /* 12413bfc call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413c02u);
  /* 12413c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413c05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413c07 call 0x12415730 */
  push32(0x12413c0cu); f_12415730();
  /* 12413c0c mov esi, esp */
  ESI = (ESP);
  /* 12413c0e push 0x1243d6a0 */
  push32((uint32_t)(0x1243d6a0u));
  /* 12413c13 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413c19u);
  /* 12413c19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413c1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413c1e call 0x12415730 */
  push32(0x12413c23u); f_12415730();
  /* 12413c23 mov esi, esp */
  ESI = (ESP);
  /* 12413c25 push 0x124425e8 */
  push32((uint32_t)(0x124425e8u));
  /* 12413c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12413c2c call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12413c32u);
  /* 12413c32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413c35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413c37 call 0x12415730 */
  push32(0x12413c3cu); f_12415730();
  /* 12413c3c mov esi, esp */
  ESI = (ESP);
  /* 12413c3e push 0x12442608 */
  push32((uint32_t)(0x12442608u));
  /* 12413c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413c45 call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12413c4bu);
  /* 12413c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413c4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413c50 call 0x12415730 */
  push32(0x12413c55u); f_12415730();
  /* 12413c55 mov esi, esp */
  ESI = (ESP);
  /* 12413c57 push 0x12442590 */
  push32((uint32_t)(0x12442590u));
  /* 12413c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12413c5e call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12413c64u);
  /* 12413c64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413c67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413c69 call 0x12415730 */
  push32(0x12413c6eu); f_12415730();
  /* 12413c6e mov esi, esp */
  ESI = (ESP);
  /* 12413c70 push 0x124425a0 */
  push32((uint32_t)(0x124425a0u));
  /* 12413c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413c77 call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12413c7du);
  /* 12413c7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413c80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413c82 call 0x12415730 */
  push32(0x12413c87u); f_12415730();
  /* 12413c87 mov esi, esp */
  ESI = (ESP);
  /* 12413c89 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12413c8b call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12413c91u);
  /* 12413c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413c94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413c96 call 0x12415730 */
  push32(0x12413c9bu); f_12415730();
  /* 12413c9b mov esi, esp */
  ESI = (ESP);
  /* 12413c9d push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12413c9f call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x12413ca5u);
  /* 12413ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413caa call 0x12415730 */
  push32(0x12413cafu); f_12415730();
  /* 12413caf mov esi, esp */
  ESI = (ESP);
  /* 12413cb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413cb3 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12413cb5 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413cbbu);
  /* 12413cbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413cbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413cc0 call 0x12415730 */
  push32(0x12413cc5u); f_12415730();
L_12413cc5:;
  /* 12413cc5 mov esi, esp */
  ESI = (ESP);
  /* 12413cc7 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12413cc9 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413ccfu);
  /* 12413ccf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413cd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413cd4 call 0x12415730 */
  push32(0x12413cd9u); f_12415730();
  /* 12413cd9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413cde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413ce0 je 0x12413d5d */
  if (C.zf) goto L_12413d5d;
  /* 12413ce2 mov esi, esp */
  ESI = (ESP);
  /* 12413ce4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413ce6 push 0x124426b0 */
  push32((uint32_t)(0x124426b0u));
  /* 12413ceb call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x12413cf1u);
  /* 12413cf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413cf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413cf6 call 0x12415730 */
  push32(0x12413cfbu); f_12415730();
  /* 12413cfb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413d00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413d02 je 0x12413d5d */
  if (C.zf) goto L_12413d5d;
  /* 12413d04 mov esi, esp */
  ESI = (ESP);
  /* 12413d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413d08 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12413d0a call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413d10u);
  /* 12413d10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413d15 call 0x12415730 */
  push32(0x12413d1au); f_12415730();
  /* 12413d1a mov esi, esp */
  ESI = (ESP);
  /* 12413d1c push 0x1243d694 */
  push32((uint32_t)(0x1243d694u));
  /* 12413d21 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413d27u);
  /* 12413d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413d2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413d2c call 0x12415730 */
  push32(0x12413d31u); f_12415730();
  /* 12413d31 mov esi, esp */
  ESI = (ESP);
  /* 12413d33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413d35 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12413d37 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413d3du);
  /* 12413d3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413d40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413d42 call 0x12415730 */
  push32(0x12413d47u); f_12415730();
  /* 12413d47 mov esi, esp */
  ESI = (ESP);
  /* 12413d49 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413d4b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12413d4d call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413d53u);
  /* 12413d53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413d56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413d58 call 0x12415730 */
  push32(0x12413d5du); f_12415730();
L_12413d5d:;
  /* 12413d5d mov esi, esp */
  ESI = (ESP);
  /* 12413d5f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12413d61 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413d67u);
  /* 12413d67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413d6c call 0x12415730 */
  push32(0x12413d71u); f_12415730();
  /* 12413d71 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413d78 je 0x12413d95 */
  if (C.zf) goto L_12413d95;
  /* 12413d7a mov esi, esp */
  ESI = (ESP);
  /* 12413d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12413d7e push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12413d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413d85 call dword ptr [0x1244545c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244545c))), 0x12413d8bu);
  /* 12413d8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413d8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413d90 call 0x12415730 */
  push32(0x12413d95u); f_12415730();
L_12413d95:;
  /* 12413d95 mov esi, esp */
  ESI = (ESP);
  /* 12413d97 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12413d99 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413d9fu);
  /* 12413d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413da2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413da4 call 0x12415730 */
  push32(0x12413da9u); f_12415730();
  /* 12413da9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413dae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413db0 je 0x12413eac */
  if (C.zf) goto L_12413eac;
  /* 12413db6 mov esi, esp */
  ESI = (ESP);
  /* 12413db8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413dba push 0x124424b8 */
  push32((uint32_t)(0x124424b8u));
  /* 12413dbf push 0x124424b0 */
  push32((uint32_t)(0x124424b0u));
  /* 12413dc4 call dword ptr [0x12445490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445490))), 0x12413dcau);
  /* 12413dca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413dcd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413dcf call 0x12415730 */
  push32(0x12413dd4u); f_12415730();
  /* 12413dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413dd6 jle 0x12413eac */
  if ((C.zf||C.sf!=C.of)) goto L_12413eac;
  /* 12413ddc mov esi, esp */
  ESI = (ESP);
  /* 12413dde push 0 */
  push32((uint32_t)(0x0u));
  /* 12413de0 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12413de2 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413de8u);
  /* 12413de8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413deb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413ded call 0x12415730 */
  push32(0x12413df2u); f_12415730();
  /* 12413df2 mov esi, esp */
  ESI = (ESP);
  /* 12413df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413df6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12413df8 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413dfeu);
  /* 12413dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413e01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413e03 call 0x12415730 */
  push32(0x12413e08u); f_12415730();
  /* 12413e08 mov esi, esp */
  ESI = (ESP);
  /* 12413e0a push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12413e0c call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12413e12u);
  /* 12413e12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413e15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413e17 call 0x12415730 */
  push32(0x12413e1cu); f_12415730();
  /* 12413e1c mov esi, esp */
  ESI = (ESP);
  /* 12413e1e push 0x1243d688 */
  push32((uint32_t)(0x1243d688u));
  /* 12413e23 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12413e29u);
  /* 12413e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413e2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413e2e call 0x12415730 */
  push32(0x12413e33u); f_12415730();
  /* 12413e33 mov esi, esp */
  ESI = (ESP);
  /* 12413e35 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12413e37 call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x12413e3du);
  /* 12413e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413e40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413e42 call 0x12415730 */
  push32(0x12413e47u); f_12415730();
  /* 12413e47 mov esi, esp */
  ESI = (ESP);
  /* 12413e49 push 0xb798 */
  push32((uint32_t)(0xb798u));
  /* 12413e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12413e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413e52 call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x12413e58u);
  /* 12413e58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413e5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413e5d call 0x12415730 */
  push32(0x12413e62u); f_12415730();
  /* 12413e62 mov esi, esp */
  ESI = (ESP);
  /* 12413e64 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 12413e69 push 1 */
  push32((uint32_t)(0x1u));
  /* 12413e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12413e6d call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x12413e73u);
  /* 12413e73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413e76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413e78 call 0x12415730 */
  push32(0x12413e7du); f_12415730();
  /* 12413e7d mov esi, esp */
  ESI = (ESP);
  /* 12413e7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12413e81 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12413e83 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413e89u);
  /* 12413e89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413e8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413e8e call 0x12415730 */
  push32(0x12413e93u); f_12415730();
  /* 12413e93 mov esi, esp */
  ESI = (ESP);
  /* 12413e95 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12413e9a push 7 */
  push32((uint32_t)(0x7u));
  /* 12413e9c call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x12413ea2u);
  /* 12413ea2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413ea5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413ea7 call 0x12415730 */
  push32(0x12413eacu); f_12415730();
L_12413eac:;
  /* 12413eac mov esi, esp */
  ESI = (ESP);
  /* 12413eae push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12413eb0 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12413eb6u);
  /* 12413eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413eb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413ebb call 0x12415730 */
  push32(0x12413ec0u); f_12415730();
  /* 12413ec0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413ec5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413ec7 je 0x12414102 */
  if (C.zf) goto L_12414102;
  /* 12413ecd mov esi, esp */
  ESI = (ESP);
  /* 12413ecf push 7 */
  push32((uint32_t)(0x7u));
  /* 12413ed1 call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x12413ed7u);
  /* 12413ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413eda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413edc call 0x12415730 */
  push32(0x12413ee1u); f_12415730();
  /* 12413ee1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413ee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413ee8 je 0x12414102 */
  if (C.zf) goto L_12414102;
  /* 12413eee mov esi, esp */
  ESI = (ESP);
  /* 12413ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413ef2 push 0x124425e8 */
  push32((uint32_t)(0x124425e8u));
  /* 12413ef7 call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x12413efdu);
  /* 12413efd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413f00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413f02 call 0x12415730 */
  push32(0x12413f07u); f_12415730();
  /* 12413f07 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413f0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413f0e je 0x12414102 */
  if (C.zf) goto L_12414102;
  /* 12413f14 mov esi, esp */
  ESI = (ESP);
  /* 12413f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413f18 push 0x12442608 */
  push32((uint32_t)(0x12442608u));
  /* 12413f1d call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x12413f23u);
  /* 12413f23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413f26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413f28 call 0x12415730 */
  push32(0x12413f2du); f_12415730();
  /* 12413f2d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413f34 je 0x12414102 */
  if (C.zf) goto L_12414102;
  /* 12413f3a mov esi, esp */
  ESI = (ESP);
  /* 12413f3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12413f3e push 0x12442590 */
  push32((uint32_t)(0x12442590u));
  /* 12413f43 call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x12413f49u);
  /* 12413f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413f4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413f4e call 0x12415730 */
  push32(0x12413f53u); f_12415730();
  /* 12413f53 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413f58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413f5a je 0x12414102 */
  if (C.zf) goto L_12414102;
  /* 12413f60 mov esi, esp */
  ESI = (ESP);
  /* 12413f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413f64 push 0x124425a0 */
  push32((uint32_t)(0x124425a0u));
  /* 12413f69 call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x12413f6fu);
  /* 12413f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413f72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413f74 call 0x12415730 */
  push32(0x12413f79u); f_12415730();
  /* 12413f79 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12413f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12413f80 je 0x12414102 */
  if (C.zf) goto L_12414102;
  /* 12413f86 mov esi, esp */
  ESI = (ESP);
  /* 12413f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413f8a call dword ptr [0x12445460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445460))), 0x12413f90u);
  /* 12413f90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413f93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413f95 call 0x12415730 */
  push32(0x12413f9au); f_12415730();
  /* 12413f9a mov esi, esp */
  ESI = (ESP);
  /* 12413f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12413f9e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12413fa0 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12413fa6u);
  /* 12413fa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413fa9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413fab call 0x12415730 */
  push32(0x12413fb0u); f_12415730();
  /* 12413fb0 mov esi, esp */
  ESI = (ESP);
  /* 12413fb2 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12413fb4 call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x12413fbau);
  /* 12413fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413fbf call 0x12415730 */
  push32(0x12413fc4u); f_12415730();
  /* 12413fc4 mov esi, esp */
  ESI = (ESP);
  /* 12413fc6 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12413fc8 call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x12413fceu);
  /* 12413fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413fd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413fd3 call 0x12415730 */
  push32(0x12413fd8u); f_12415730();
  /* 12413fd8 mov esi, esp */
  ESI = (ESP);
  /* 12413fda push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12413fdc call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x12413fe2u);
  /* 12413fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413fe5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12413fe7 call 0x12415730 */
  push32(0x12413fecu); f_12415730();
  /* 12413fec mov esi, esp */
  ESI = (ESP);
  /* 12413fee push 0x12442600 */
  push32((uint32_t)(0x12442600u));
  /* 12413ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12413ff5 call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12413ffbu);
  /* 12413ffb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12413ffe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414000 call 0x12415730 */
  push32(0x12414005u); f_12415730();
  /* 12414005 mov esi, esp */
  ESI = (ESP);
  /* 12414007 push 0x12442648 */
  push32((uint32_t)(0x12442648u));
  /* 1241400c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241400e call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12414014u);
  /* 12414014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414017 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414019 call 0x12415730 */
  push32(0x1241401eu); f_12415730();
  /* 1241401e mov esi, esp */
  ESI = (ESP);
  /* 12414020 push 0x12442668 */
  push32((uint32_t)(0x12442668u));
  /* 12414025 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414027 call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x1241402du);
  /* 1241402d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414030 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414032 call 0x12415730 */
  push32(0x12414037u); f_12415730();
  /* 12414037 mov esi, esp */
  ESI = (ESP);
  /* 12414039 push 0x124426e0 */
  push32((uint32_t)(0x124426e0u));
  /* 1241403e push 0 */
  push32((uint32_t)(0x0u));
  /* 12414040 call dword ptr [0x12445494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445494))), 0x12414046u);
  /* 12414046 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414049 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241404b call 0x12415730 */
  push32(0x12414050u); f_12415730();
  /* 12414050 mov esi, esp */
  ESI = (ESP);
  /* 12414052 push 0x1243d67c */
  push32((uint32_t)(0x1243d67cu));
  /* 12414057 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x1241405du);
  /* 1241405d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414060 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414062 call 0x12415730 */
  push32(0x12414067u); f_12415730();
  /* 12414067 mov esi, esp */
  ESI = (ESP);
  /* 12414069 push 0xdac */
  push32((uint32_t)(0xdacu));
  /* 1241406e push 1 */
  push32((uint32_t)(0x1u));
  /* 12414070 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414072 call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x12414078u);
  /* 12414078 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241407b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241407d call 0x12415730 */
  push32(0x12414082u); f_12415730();
  /* 12414082 mov esi, esp */
  ESI = (ESP);
  /* 12414084 push 0x2328 */
  push32((uint32_t)(0x2328u));
  /* 12414089 push 3 */
  push32((uint32_t)(0x3u));
  /* 1241408b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241408d call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x12414093u);
  /* 12414093 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414098 call 0x12415730 */
  push32(0x1241409du); f_12415730();
  /* 1241409d mov esi, esp */
  ESI = (ESP);
  /* 1241409f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 124140a4 push 4 */
  push32((uint32_t)(0x4u));
  /* 124140a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124140a8 call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x124140aeu);
  /* 124140ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124140b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124140b3 call 0x12415730 */
  push32(0x124140b8u); f_12415730();
  /* 124140b8 mov esi, esp */
  ESI = (ESP);
  /* 124140ba push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 124140bf push 5 */
  push32((uint32_t)(0x5u));
  /* 124140c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124140c3 call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x124140c9u);
  /* 124140c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124140cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124140ce call 0x12415730 */
  push32(0x124140d3u); f_12415730();
  /* 124140d3 mov esi, esp */
  ESI = (ESP);
  /* 124140d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 124140d7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124140d9 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124140dfu);
  /* 124140df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124140e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124140e4 call 0x12415730 */
  push32(0x124140e9u); f_12415730();
  /* 124140e9 mov esi, esp */
  ESI = (ESP);
  /* 124140eb push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 124140f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 124140f2 call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x124140f8u);
  /* 124140f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124140fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124140fd call 0x12415730 */
  push32(0x12414102u); f_12415730();
L_12414102:;
  /* 12414102 mov esi, esp */
  ESI = (ESP);
  /* 12414104 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12414106 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241410cu);
  /* 1241410c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241410f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414111 call 0x12415730 */
  push32(0x12414116u); f_12415730();
  /* 12414116 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241411b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241411d je 0x124142de */
  if (C.zf) goto L_124142de;
  /* 12414123 mov esi, esp */
  ESI = (ESP);
  /* 12414125 push 8 */
  push32((uint32_t)(0x8u));
  /* 12414127 call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x1241412du);
  /* 1241412d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414132 call 0x12415730 */
  push32(0x12414137u); f_12415730();
  /* 12414137 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241413c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241413e je 0x124142de */
  if (C.zf) goto L_124142de;
  /* 12414144 mov esi, esp */
  ESI = (ESP);
  /* 12414146 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414148 push 0x12442600 */
  push32((uint32_t)(0x12442600u));
  /* 1241414d call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x12414153u);
  /* 12414153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414156 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414158 call 0x12415730 */
  push32(0x1241415du); f_12415730();
  /* 1241415d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414164 je 0x124142de */
  if (C.zf) goto L_124142de;
  /* 1241416a mov esi, esp */
  ESI = (ESP);
  /* 1241416c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241416e push 0x12442648 */
  push32((uint32_t)(0x12442648u));
  /* 12414173 call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x12414179u);
  /* 12414179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241417c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241417e call 0x12415730 */
  push32(0x12414183u); f_12415730();
  /* 12414183 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414188 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241418a je 0x124142de */
  if (C.zf) goto L_124142de;
  /* 12414190 mov esi, esp */
  ESI = (ESP);
  /* 12414192 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414194 push 0x12442668 */
  push32((uint32_t)(0x12442668u));
  /* 12414199 call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x1241419fu);
  /* 1241419f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124141a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124141a4 call 0x12415730 */
  push32(0x124141a9u); f_12415730();
  /* 124141a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124141ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124141b0 je 0x124142de */
  if (C.zf) goto L_124142de;
  /* 124141b6 mov esi, esp */
  ESI = (ESP);
  /* 124141b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124141ba push 0x124426e0 */
  push32((uint32_t)(0x124426e0u));
  /* 124141bf call dword ptr [0x12445498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445498))), 0x124141c5u);
  /* 124141c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124141c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124141ca call 0x12415730 */
  push32(0x124141cfu); f_12415730();
  /* 124141cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124141d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124141d6 je 0x124142de */
  if (C.zf) goto L_124142de;
  /* 124141dc mov esi, esp */
  ESI = (ESP);
  /* 124141de push 0 */
  push32((uint32_t)(0x0u));
  /* 124141e0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 124141e2 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124141e8u);
  /* 124141e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124141eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124141ed call 0x12415730 */
  push32(0x124141f2u); f_12415730();
  /* 124141f2 mov esi, esp */
  ESI = (ESP);
  /* 124141f4 push 0x1243d670 */
  push32((uint32_t)(0x1243d670u));
  /* 124141f9 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x124141ffu);
  /* 124141ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414202 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414204 call 0x12415730 */
  push32(0x12414209u); f_12415730();
  /* 12414209 mov esi, esp */
  ESI = (ESP);
  /* 1241420b push 0x1243d664 */
  push32((uint32_t)(0x1243d664u));
  /* 12414210 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12414216u);
  /* 12414216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414219 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241421b call 0x12415730 */
  push32(0x12414220u); f_12415730();
  /* 12414220 mov esi, esp */
  ESI = (ESP);
  /* 12414222 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12414224 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x1241422au);
  /* 1241422a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241422d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241422f call 0x12415730 */
  push32(0x12414234u); f_12415730();
  /* 12414234 mov esi, esp */
  ESI = (ESP);
  /* 12414236 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12414238 call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x1241423eu);
  /* 1241423e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414241 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414243 call 0x12415730 */
  push32(0x12414248u); f_12415730();
  /* 12414248 mov esi, esp */
  ESI = (ESP);
  /* 1241424a push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1241424c call dword ptr [0x1244547c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244547c))), 0x12414252u);
  /* 12414252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414257 call 0x12415730 */
  push32(0x1241425cu); f_12415730();
  /* 1241425c mov esi, esp */
  ESI = (ESP);
  /* 1241425e push 0x14050 */
  push32((uint32_t)(0x14050u));
  /* 12414263 push 1 */
  push32((uint32_t)(0x1u));
  /* 12414265 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414267 call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x1241426du);
  /* 1241426d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414270 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414272 call 0x12415730 */
  push32(0x12414277u); f_12415730();
  /* 12414277 mov esi, esp */
  ESI = (ESP);
  /* 12414279 push 0x28870 */
  push32((uint32_t)(0x28870u));
  /* 1241427e push 3 */
  push32((uint32_t)(0x3u));
  /* 12414280 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414282 call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x12414288u);
  /* 12414288 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241428b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241428d call 0x12415730 */
  push32(0x12414292u); f_12415730();
  /* 12414292 mov esi, esp */
  ESI = (ESP);
  /* 12414294 push 0x3e80 */
  push32((uint32_t)(0x3e80u));
  /* 12414299 push 4 */
  push32((uint32_t)(0x4u));
  /* 1241429b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241429d call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x124142a3u);
  /* 124142a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124142a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124142a8 call 0x12415730 */
  push32(0x124142adu); f_12415730();
  /* 124142ad mov esi, esp */
  ESI = (ESP);
  /* 124142af push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 124142b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124142b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124142b8 call dword ptr [0x1244549c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244549c))), 0x124142beu);
  /* 124142be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124142c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124142c3 call 0x12415730 */
  push32(0x124142c8u); f_12415730();
  /* 124142c8 mov esi, esp */
  ESI = (ESP);
  /* 124142ca push 1 */
  push32((uint32_t)(0x1u));
  /* 124142cc push 0x17 */
  push32((uint32_t)(0x17u));
  /* 124142ce call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124142d4u);
  /* 124142d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124142d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124142d9 call 0x12415730 */
  push32(0x124142deu); f_12415730();
L_124142de:;
  /* 124142de mov esi, esp */
  ESI = (ESP);
  /* 124142e0 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 124142e2 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x124142e8u);
  /* 124142e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124142eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124142ed call 0x12415730 */
  push32(0x124142f2u); f_12415730();
  /* 124142f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124142f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124142f9 je 0x12414388 */
  if (C.zf) goto L_12414388;
  /* 124142ff mov esi, esp */
  ESI = (ESP);
  /* 12414301 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414303 call dword ptr [0x124454a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a0))), 0x12414309u);
  /* 12414309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241430c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241430e call 0x12415730 */
  push32(0x12414313u); f_12415730();
  /* 12414313 cmp eax, 0x1b */
  { uint32_t _a=(EAX),_b=(0x1bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414316 jle 0x12414388 */
  if ((C.zf||C.sf!=C.of)) goto L_12414388;
  /* 12414318 mov esi, esp */
  ESI = (ESP);
  /* 1241431a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241431c push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1241431e call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414324u);
  /* 12414324 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414327 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414329 call 0x12415730 */
  push32(0x1241432eu); f_12415730();
  /* 1241432e mov esi, esp */
  ESI = (ESP);
  /* 12414330 push 1 */
  push32((uint32_t)(0x1u));
  /* 12414332 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12414334 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241433au);
  /* 1241433a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241433d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241433f call 0x12415730 */
  push32(0x12414344u); f_12415730();
  /* 12414344 mov esi, esp */
  ESI = (ESP);
  /* 12414346 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12414348 call dword ptr [0x12445454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445454))), 0x1241434eu);
  /* 1241434e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414351 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414353 call 0x12415730 */
  push32(0x12414358u); f_12415730();
  /* 12414358 mov esi, esp */
  ESI = (ESP);
  /* 1241435a push 0x1243d658 */
  push32((uint32_t)(0x1243d658u));
  /* 1241435f call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12414365u);
  /* 12414365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241436a call 0x12415730 */
  push32(0x1241436fu); f_12415730();
  /* 1241436f mov esi, esp */
  ESI = (ESP);
  /* 12414371 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12414376 push 9 */
  push32((uint32_t)(0x9u));
  /* 12414378 call dword ptr [0x12445450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445450))), 0x1241437eu);
  /* 1241437e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414381 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414383 call 0x12415730 */
  push32(0x12414388u); f_12415730();
L_12414388:;
  /* 12414388 mov esi, esp */
  ESI = (ESP);
  /* 1241438a push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1241438c call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414392u);
  /* 12414392 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414397 call 0x12415730 */
  push32(0x1241439cu); f_12415730();
  /* 1241439c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124143a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124143a3 je 0x124143fe */
  if (C.zf) goto L_124143fe;
  /* 124143a5 mov esi, esp */
  ESI = (ESP);
  /* 124143a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 124143a9 call dword ptr [0x12445458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445458))), 0x124143afu);
  /* 124143af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124143b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124143b4 call 0x12415730 */
  push32(0x124143b9u); f_12415730();
  /* 124143b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124143be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124143c0 je 0x124143fe */
  if (C.zf) goto L_124143fe;
  /* 124143c2 mov esi, esp */
  ESI = (ESP);
  /* 124143c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124143c6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 124143c8 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124143ceu);
  /* 124143ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124143d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124143d3 call 0x12415730 */
  push32(0x124143d8u); f_12415730();
  /* 124143d8 mov esi, esp */
  ESI = (ESP);
  /* 124143da push 0x1243d64c */
  push32((uint32_t)(0x1243d64cu));
  /* 124143df call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x124143e5u);
  /* 124143e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124143e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124143ea call 0x12415730 */
  push32(0x124143efu); f_12415730();
  /* 124143ef mov esi, esp */
  ESI = (ESP);
  /* 124143f1 call dword ptr [0x124454a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a4))), 0x124143f7u);
  /* 124143f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124143f9 call 0x12415730 */
  push32(0x124143feu); f_12415730();
L_124143fe:;
  /* 124143fe mov esi, esp */
  ESI = (ESP);
  /* 12414400 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12414402 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414408u);
  /* 12414408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241440b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241440d call 0x12415730 */
  push32(0x12414412u); f_12415730();
  /* 12414412 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414417 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414419 je 0x12414480 */
  if (C.zf) goto L_12414480;
  /* 1241441b mov esi, esp */
  ESI = (ESP);
  /* 1241441d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241441f push 0x12442400 */
  push32((uint32_t)(0x12442400u));
  /* 12414424 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x1241442au);
  /* 1241442a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241442d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241442f call 0x12415730 */
  push32(0x12414434u); f_12415730();
  /* 12414434 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414437 jl 0x12414480 */
  if ((C.sf!=C.of)) goto L_12414480;
  /* 12414439 mov esi, esp */
  ESI = (ESP);
  /* 1241443b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241443d push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1241443f call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414445u);
  /* 12414445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414448 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241444a call 0x12415730 */
  push32(0x1241444fu); f_12415730();
  /* 1241444f mov esi, esp */
  ESI = (ESP);
  /* 12414451 push 1 */
  push32((uint32_t)(0x1u));
  /* 12414453 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12414455 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241445bu);
  /* 1241445b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241445e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414460 call 0x12415730 */
  push32(0x12414465u); f_12415730();
  /* 12414465 mov esi, esp */
  ESI = (ESP);
  /* 12414467 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414469 push 0x12442400 */
  push32((uint32_t)(0x12442400u));
  /* 1241446e push 0 */
  push32((uint32_t)(0x0u));
  /* 12414470 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414476u);
  /* 12414476 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414479 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241447b call 0x12415730 */
  push32(0x12414480u); f_12415730();
L_12414480:;
  /* 12414480 mov esi, esp */
  ESI = (ESP);
  /* 12414482 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12414484 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241448au);
  /* 1241448a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241448d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241448f call 0x12415730 */
  push32(0x12414494u); f_12415730();
  /* 12414494 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414499 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241449b je 0x12414502 */
  if (C.zf) goto L_12414502;
  /* 1241449d mov esi, esp */
  ESI = (ESP);
  /* 1241449f push 0 */
  push32((uint32_t)(0x0u));
  /* 124144a1 push 0x12442400 */
  push32((uint32_t)(0x12442400u));
  /* 124144a6 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x124144acu);
  /* 124144ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124144af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124144b1 call 0x12415730 */
  push32(0x124144b6u); f_12415730();
  /* 124144b6 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124144b9 jge 0x12414502 */
  if ((C.sf==C.of)) goto L_12414502;
  /* 124144bb mov esi, esp */
  ESI = (ESP);
  /* 124144bd push 0 */
  push32((uint32_t)(0x0u));
  /* 124144bf push 0x53 */
  push32((uint32_t)(0x53u));
  /* 124144c1 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124144c7u);
  /* 124144c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124144ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124144cc call 0x12415730 */
  push32(0x124144d1u); f_12415730();
  /* 124144d1 mov esi, esp */
  ESI = (ESP);
  /* 124144d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124144d5 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 124144d7 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124144ddu);
  /* 124144dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124144e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124144e2 call 0x12415730 */
  push32(0x124144e7u); f_12415730();
  /* 124144e7 mov esi, esp */
  ESI = (ESP);
  /* 124144e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 124144eb push 0x12442400 */
  push32((uint32_t)(0x12442400u));
  /* 124144f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124144f2 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124144f8u);
  /* 124144f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124144fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124144fd call 0x12415730 */
  push32(0x12414502u); f_12415730();
L_12414502:;
  /* 12414502 mov esi, esp */
  ESI = (ESP);
  /* 12414504 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12414506 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241450cu);
  /* 1241450c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241450f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414511 call 0x12415730 */
  push32(0x12414516u); f_12415730();
  /* 12414516 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241451b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241451d je 0x12414584 */
  if (C.zf) goto L_12414584;
  /* 1241451f mov esi, esp */
  ESI = (ESP);
  /* 12414521 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414523 push 0x12442438 */
  push32((uint32_t)(0x12442438u));
  /* 12414528 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x1241452eu);
  /* 1241452e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414533 call 0x12415730 */
  push32(0x12414538u); f_12415730();
  /* 12414538 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241453b jl 0x12414584 */
  if ((C.sf!=C.of)) goto L_12414584;
  /* 1241453d mov esi, esp */
  ESI = (ESP);
  /* 1241453f push 0 */
  push32((uint32_t)(0x0u));
  /* 12414541 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12414543 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414549u);
  /* 12414549 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241454c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241454e call 0x12415730 */
  push32(0x12414553u); f_12415730();
  /* 12414553 mov esi, esp */
  ESI = (ESP);
  /* 12414555 push 1 */
  push32((uint32_t)(0x1u));
  /* 12414557 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12414559 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241455fu);
  /* 1241455f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414562 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414564 call 0x12415730 */
  push32(0x12414569u); f_12415730();
  /* 12414569 mov esi, esp */
  ESI = (ESP);
  /* 1241456b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241456d push 0x12442438 */
  push32((uint32_t)(0x12442438u));
  /* 12414572 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414574 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241457au);
  /* 1241457a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241457d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241457f call 0x12415730 */
  push32(0x12414584u); f_12415730();
L_12414584:;
  /* 12414584 mov esi, esp */
  ESI = (ESP);
  /* 12414586 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12414588 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241458eu);
  /* 1241458e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414591 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414593 call 0x12415730 */
  push32(0x12414598u); f_12415730();
  /* 12414598 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241459d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241459f je 0x12414606 */
  if (C.zf) goto L_12414606;
  /* 124145a1 mov esi, esp */
  ESI = (ESP);
  /* 124145a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124145a5 push 0x12442438 */
  push32((uint32_t)(0x12442438u));
  /* 124145aa call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x124145b0u);
  /* 124145b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124145b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124145b5 call 0x12415730 */
  push32(0x124145bau); f_12415730();
  /* 124145ba cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124145bd jge 0x12414606 */
  if ((C.sf==C.of)) goto L_12414606;
  /* 124145bf mov esi, esp */
  ESI = (ESP);
  /* 124145c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124145c3 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 124145c5 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124145cbu);
  /* 124145cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124145ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124145d0 call 0x12415730 */
  push32(0x124145d5u); f_12415730();
  /* 124145d5 mov esi, esp */
  ESI = (ESP);
  /* 124145d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 124145d9 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 124145db call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124145e1u);
  /* 124145e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124145e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124145e6 call 0x12415730 */
  push32(0x124145ebu); f_12415730();
  /* 124145eb mov esi, esp */
  ESI = (ESP);
  /* 124145ed push 1 */
  push32((uint32_t)(0x1u));
  /* 124145ef push 0x12442438 */
  push32((uint32_t)(0x12442438u));
  /* 124145f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124145f6 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x124145fcu);
  /* 124145fc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124145ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414601 call 0x12415730 */
  push32(0x12414606u); f_12415730();
L_12414606:;
  /* 12414606 mov esi, esp */
  ESI = (ESP);
  /* 12414608 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1241460a call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414610u);
  /* 12414610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414615 call 0x12415730 */
  push32(0x1241461au); f_12415730();
  /* 1241461a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241461f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414621 je 0x12414688 */
  if (C.zf) goto L_12414688;
  /* 12414623 mov esi, esp */
  ESI = (ESP);
  /* 12414625 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414627 push 0x12442428 */
  push32((uint32_t)(0x12442428u));
  /* 1241462c call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x12414632u);
  /* 12414632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414637 call 0x12415730 */
  push32(0x1241463cu); f_12415730();
  /* 1241463c cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241463f jl 0x12414688 */
  if ((C.sf!=C.of)) goto L_12414688;
  /* 12414641 mov esi, esp */
  ESI = (ESP);
  /* 12414643 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414645 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12414647 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241464du);
  /* 1241464d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414650 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414652 call 0x12415730 */
  push32(0x12414657u); f_12415730();
  /* 12414657 mov esi, esp */
  ESI = (ESP);
  /* 12414659 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241465b push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1241465d call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414663u);
  /* 12414663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414666 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414668 call 0x12415730 */
  push32(0x1241466du); f_12415730();
  /* 1241466d mov esi, esp */
  ESI = (ESP);
  /* 1241466f push 0 */
  push32((uint32_t)(0x0u));
  /* 12414671 push 0x12442428 */
  push32((uint32_t)(0x12442428u));
  /* 12414676 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414678 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241467eu);
  /* 1241467e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414681 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414683 call 0x12415730 */
  push32(0x12414688u); f_12415730();
L_12414688:;
  /* 12414688 mov esi, esp */
  ESI = (ESP);
  /* 1241468a push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1241468c call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414692u);
  /* 12414692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414695 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414697 call 0x12415730 */
  push32(0x1241469cu); f_12415730();
  /* 1241469c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124146a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124146a3 je 0x1241470a */
  if (C.zf) goto L_1241470a;
  /* 124146a5 mov esi, esp */
  ESI = (ESP);
  /* 124146a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124146a9 push 0x12442428 */
  push32((uint32_t)(0x12442428u));
  /* 124146ae call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x124146b4u);
  /* 124146b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124146b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124146b9 call 0x12415730 */
  push32(0x124146beu); f_12415730();
  /* 124146be cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124146c1 jge 0x1241470a */
  if ((C.sf==C.of)) goto L_1241470a;
  /* 124146c3 mov esi, esp */
  ESI = (ESP);
  /* 124146c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124146c7 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 124146c9 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124146cfu);
  /* 124146cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124146d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124146d4 call 0x12415730 */
  push32(0x124146d9u); f_12415730();
  /* 124146d9 mov esi, esp */
  ESI = (ESP);
  /* 124146db push 1 */
  push32((uint32_t)(0x1u));
  /* 124146dd push 0x56 */
  push32((uint32_t)(0x56u));
  /* 124146df call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124146e5u);
  /* 124146e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124146e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124146ea call 0x12415730 */
  push32(0x124146efu); f_12415730();
  /* 124146ef mov esi, esp */
  ESI = (ESP);
  /* 124146f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 124146f3 push 0x12442428 */
  push32((uint32_t)(0x12442428u));
  /* 124146f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124146fa call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414700u);
  /* 12414700 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414705 call 0x12415730 */
  push32(0x1241470au); f_12415730();
L_1241470a:;
  /* 1241470a mov esi, esp */
  ESI = (ESP);
  /* 1241470c push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1241470e call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414714u);
  /* 12414714 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414717 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414719 call 0x12415730 */
  push32(0x1241471eu); f_12415730();
  /* 1241471e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414723 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414725 je 0x1241478c */
  if (C.zf) goto L_1241478c;
  /* 12414727 mov esi, esp */
  ESI = (ESP);
  /* 12414729 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241472b push 0x12442410 */
  push32((uint32_t)(0x12442410u));
  /* 12414730 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x12414736u);
  /* 12414736 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241473b call 0x12415730 */
  push32(0x12414740u); f_12415730();
  /* 12414740 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414743 jl 0x1241478c */
  if ((C.sf!=C.of)) goto L_1241478c;
  /* 12414745 mov esi, esp */
  ESI = (ESP);
  /* 12414747 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414749 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1241474b call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414751u);
  /* 12414751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414754 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414756 call 0x12415730 */
  push32(0x1241475bu); f_12415730();
  /* 1241475b mov esi, esp */
  ESI = (ESP);
  /* 1241475d push 1 */
  push32((uint32_t)(0x1u));
  /* 1241475f push 0x59 */
  push32((uint32_t)(0x59u));
  /* 12414761 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414767u);
  /* 12414767 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241476a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241476c call 0x12415730 */
  push32(0x12414771u); f_12415730();
  /* 12414771 mov esi, esp */
  ESI = (ESP);
  /* 12414773 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414775 push 0x12442410 */
  push32((uint32_t)(0x12442410u));
  /* 1241477a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241477c call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414782u);
  /* 12414782 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414785 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414787 call 0x12415730 */
  push32(0x1241478cu); f_12415730();
L_1241478c:;
  /* 1241478c mov esi, esp */
  ESI = (ESP);
  /* 1241478e push 0x59 */
  push32((uint32_t)(0x59u));
  /* 12414790 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414796u);
  /* 12414796 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414799 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241479b call 0x12415730 */
  push32(0x124147a0u); f_12415730();
  /* 124147a0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124147a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124147a7 je 0x1241480e */
  if (C.zf) goto L_1241480e;
  /* 124147a9 mov esi, esp */
  ESI = (ESP);
  /* 124147ab push 0 */
  push32((uint32_t)(0x0u));
  /* 124147ad push 0x12442410 */
  push32((uint32_t)(0x12442410u));
  /* 124147b2 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x124147b8u);
  /* 124147b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124147bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124147bd call 0x12415730 */
  push32(0x124147c2u); f_12415730();
  /* 124147c2 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124147c5 jge 0x1241480e */
  if ((C.sf==C.of)) goto L_1241480e;
  /* 124147c7 mov esi, esp */
  ESI = (ESP);
  /* 124147c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124147cb push 0x59 */
  push32((uint32_t)(0x59u));
  /* 124147cd call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124147d3u);
  /* 124147d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124147d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124147d8 call 0x12415730 */
  push32(0x124147ddu); f_12415730();
  /* 124147dd mov esi, esp */
  ESI = (ESP);
  /* 124147df push 1 */
  push32((uint32_t)(0x1u));
  /* 124147e1 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 124147e3 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124147e9u);
  /* 124147e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124147ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124147ee call 0x12415730 */
  push32(0x124147f3u); f_12415730();
  /* 124147f3 mov esi, esp */
  ESI = (ESP);
  /* 124147f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 124147f7 push 0x12442410 */
  push32((uint32_t)(0x12442410u));
  /* 124147fc push 0 */
  push32((uint32_t)(0x0u));
  /* 124147fe call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414804u);
  /* 12414804 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414807 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414809 call 0x12415730 */
  push32(0x1241480eu); f_12415730();
L_1241480e:;
  /* 1241480e mov esi, esp */
  ESI = (ESP);
  /* 12414810 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12414812 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414818u);
  /* 12414818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241481b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241481d call 0x12415730 */
  push32(0x12414822u); f_12415730();
  /* 12414822 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414827 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414829 je 0x12414890 */
  if (C.zf) goto L_12414890;
  /* 1241482b mov esi, esp */
  ESI = (ESP);
  /* 1241482d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241482f push 0x12442468 */
  push32((uint32_t)(0x12442468u));
  /* 12414834 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x1241483au);
  /* 1241483a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241483d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241483f call 0x12415730 */
  push32(0x12414844u); f_12415730();
  /* 12414844 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414847 jl 0x12414890 */
  if ((C.sf!=C.of)) goto L_12414890;
  /* 12414849 mov esi, esp */
  ESI = (ESP);
  /* 1241484b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241484d push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1241484f call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414855u);
  /* 12414855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414858 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241485a call 0x12415730 */
  push32(0x1241485fu); f_12415730();
  /* 1241485f mov esi, esp */
  ESI = (ESP);
  /* 12414861 push 1 */
  push32((uint32_t)(0x1u));
  /* 12414863 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12414865 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241486bu);
  /* 1241486b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241486e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414870 call 0x12415730 */
  push32(0x12414875u); f_12415730();
  /* 12414875 mov esi, esp */
  ESI = (ESP);
  /* 12414877 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414879 push 0x12442468 */
  push32((uint32_t)(0x12442468u));
  /* 1241487e push 0 */
  push32((uint32_t)(0x0u));
  /* 12414880 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414886u);
  /* 12414886 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241488b call 0x12415730 */
  push32(0x12414890u); f_12415730();
L_12414890:;
  /* 12414890 mov esi, esp */
  ESI = (ESP);
  /* 12414892 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12414894 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241489au);
  /* 1241489a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241489d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241489f call 0x12415730 */
  push32(0x124148a4u); f_12415730();
  /* 124148a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124148a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124148ab je 0x12414912 */
  if (C.zf) goto L_12414912;
  /* 124148ad mov esi, esp */
  ESI = (ESP);
  /* 124148af push 0 */
  push32((uint32_t)(0x0u));
  /* 124148b1 push 0x12442468 */
  push32((uint32_t)(0x12442468u));
  /* 124148b6 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x124148bcu);
  /* 124148bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124148bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124148c1 call 0x12415730 */
  push32(0x124148c6u); f_12415730();
  /* 124148c6 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124148c9 jge 0x12414912 */
  if ((C.sf==C.of)) goto L_12414912;
  /* 124148cb mov esi, esp */
  ESI = (ESP);
  /* 124148cd push 0 */
  push32((uint32_t)(0x0u));
  /* 124148cf push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 124148d1 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124148d7u);
  /* 124148d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124148da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124148dc call 0x12415730 */
  push32(0x124148e1u); f_12415730();
  /* 124148e1 mov esi, esp */
  ESI = (ESP);
  /* 124148e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124148e5 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 124148e7 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124148edu);
  /* 124148ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124148f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124148f2 call 0x12415730 */
  push32(0x124148f7u); f_12415730();
  /* 124148f7 mov esi, esp */
  ESI = (ESP);
  /* 124148f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 124148fb push 0x12442468 */
  push32((uint32_t)(0x12442468u));
  /* 12414900 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414902 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414908u);
  /* 12414908 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241490b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241490d call 0x12415730 */
  push32(0x12414912u); f_12415730();
L_12414912:;
  /* 12414912 mov esi, esp */
  ESI = (ESP);
  /* 12414914 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12414916 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241491cu);
  /* 1241491c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241491f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414921 call 0x12415730 */
  push32(0x12414926u); f_12415730();
  /* 12414926 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241492b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241492d je 0x12414994 */
  if (C.zf) goto L_12414994;
  /* 1241492f mov esi, esp */
  ESI = (ESP);
  /* 12414931 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414933 push 0x12442480 */
  push32((uint32_t)(0x12442480u));
  /* 12414938 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x1241493eu);
  /* 1241493e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414941 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414943 call 0x12415730 */
  push32(0x12414948u); f_12415730();
  /* 12414948 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241494b jl 0x12414994 */
  if ((C.sf!=C.of)) goto L_12414994;
  /* 1241494d mov esi, esp */
  ESI = (ESP);
  /* 1241494f push 0 */
  push32((uint32_t)(0x0u));
  /* 12414951 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12414953 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414959u);
  /* 12414959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241495c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241495e call 0x12415730 */
  push32(0x12414963u); f_12415730();
  /* 12414963 mov esi, esp */
  ESI = (ESP);
  /* 12414965 push 1 */
  push32((uint32_t)(0x1u));
  /* 12414967 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12414969 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x1241496fu);
  /* 1241496f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414972 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414974 call 0x12415730 */
  push32(0x12414979u); f_12415730();
  /* 12414979 mov esi, esp */
  ESI = (ESP);
  /* 1241497b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241497d push 0x12442480 */
  push32((uint32_t)(0x12442480u));
  /* 12414982 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414984 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x1241498au);
  /* 1241498a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241498d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241498f call 0x12415730 */
  push32(0x12414994u); f_12415730();
L_12414994:;
  /* 12414994 mov esi, esp */
  ESI = (ESP);
  /* 12414996 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12414998 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x1241499eu);
  /* 1241499e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124149a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124149a3 call 0x12415730 */
  push32(0x124149a8u); f_12415730();
  /* 124149a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124149ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124149af je 0x12414a16 */
  if (C.zf) goto L_12414a16;
  /* 124149b1 mov esi, esp */
  ESI = (ESP);
  /* 124149b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124149b5 push 0x12442480 */
  push32((uint32_t)(0x12442480u));
  /* 124149ba call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x124149c0u);
  /* 124149c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124149c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124149c5 call 0x12415730 */
  push32(0x124149cau); f_12415730();
  /* 124149ca cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124149cd jge 0x12414a16 */
  if ((C.sf==C.of)) goto L_12414a16;
  /* 124149cf mov esi, esp */
  ESI = (ESP);
  /* 124149d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124149d3 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 124149d5 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124149dbu);
  /* 124149db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124149de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124149e0 call 0x12415730 */
  push32(0x124149e5u); f_12415730();
  /* 124149e5 mov esi, esp */
  ESI = (ESP);
  /* 124149e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 124149e9 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 124149eb call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x124149f1u);
  /* 124149f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124149f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124149f6 call 0x12415730 */
  push32(0x124149fbu); f_12415730();
  /* 124149fb mov esi, esp */
  ESI = (ESP);
  /* 124149fd push 1 */
  push32((uint32_t)(0x1u));
  /* 124149ff push 0x12442480 */
  push32((uint32_t)(0x12442480u));
  /* 12414a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414a06 call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414a0cu);
  /* 12414a0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414a0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414a11 call 0x12415730 */
  push32(0x12414a16u); f_12415730();
L_12414a16:;
  /* 12414a16 mov esi, esp */
  ESI = (ESP);
  /* 12414a18 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12414a1a call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414a20u);
  /* 12414a20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414a25 call 0x12415730 */
  push32(0x12414a2au); f_12415730();
  /* 12414a2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414a2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414a31 je 0x12414a9a */
  if (C.zf) goto L_12414a9a;
  /* 12414a33 mov esi, esp */
  ESI = (ESP);
  /* 12414a35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414a37 push 0x12442490 */
  push32((uint32_t)(0x12442490u));
  /* 12414a3c call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x12414a42u);
  /* 12414a42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414a45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414a47 call 0x12415730 */
  push32(0x12414a4cu); f_12415730();
  /* 12414a4c cmp eax, 0xa0 */
  { uint32_t _a=(EAX),_b=(0xa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414a51 jle 0x12414a9a */
  if ((C.zf||C.sf!=C.of)) goto L_12414a9a;
  /* 12414a53 mov esi, esp */
  ESI = (ESP);
  /* 12414a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414a57 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12414a59 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414a5fu);
  /* 12414a5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414a64 call 0x12415730 */
  push32(0x12414a69u); f_12415730();
  /* 12414a69 mov esi, esp */
  ESI = (ESP);
  /* 12414a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 12414a6d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12414a6f call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414a75u);
  /* 12414a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414a7a call 0x12415730 */
  push32(0x12414a7fu); f_12415730();
  /* 12414a7f mov esi, esp */
  ESI = (ESP);
  /* 12414a81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414a83 push 0x12442490 */
  push32((uint32_t)(0x12442490u));
  /* 12414a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414a8a call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414a90u);
  /* 12414a90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414a93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414a95 call 0x12415730 */
  push32(0x12414a9au); f_12415730();
L_12414a9a:;
  /* 12414a9a mov esi, esp */
  ESI = (ESP);
  /* 12414a9c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12414a9e call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414aa4u);
  /* 12414aa4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414aa7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414aa9 call 0x12415730 */
  push32(0x12414aaeu); f_12415730();
  /* 12414aae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414ab3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414ab5 je 0x12414b1e */
  if (C.zf) goto L_12414b1e;
  /* 12414ab7 mov esi, esp */
  ESI = (ESP);
  /* 12414ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414abb push 0x12442490 */
  push32((uint32_t)(0x12442490u));
  /* 12414ac0 call dword ptr [0x124454a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454a8))), 0x12414ac6u);
  /* 12414ac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414ac9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414acb call 0x12415730 */
  push32(0x12414ad0u); f_12415730();
  /* 12414ad0 cmp eax, 0xa0 */
  { uint32_t _a=(EAX),_b=(0xa0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414ad5 jge 0x12414b1e */
  if ((C.sf==C.of)) goto L_12414b1e;
  /* 12414ad7 mov esi, esp */
  ESI = (ESP);
  /* 12414ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12414adb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12414add call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414ae3u);
  /* 12414ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414ae8 call 0x12415730 */
  push32(0x12414aedu); f_12415730();
  /* 12414aed mov esi, esp */
  ESI = (ESP);
  /* 12414aef push 1 */
  push32((uint32_t)(0x1u));
  /* 12414af1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12414af3 call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414af9u);
  /* 12414af9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414afc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414afe call 0x12415730 */
  push32(0x12414b03u); f_12415730();
  /* 12414b03 mov esi, esp */
  ESI = (ESP);
  /* 12414b05 push 1 */
  push32((uint32_t)(0x1u));
  /* 12414b07 push 0x12442490 */
  push32((uint32_t)(0x12442490u));
  /* 12414b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12414b0e call dword ptr [0x1244543c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244543c))), 0x12414b14u);
  /* 12414b14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414b17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414b19 call 0x12415730 */
  push32(0x12414b1eu); f_12415730();
L_12414b1e:;
  /* 12414b1e mov esi, esp */
  ESI = (ESP);
  /* 12414b20 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12414b22 call dword ptr [0x12445430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445430))), 0x12414b28u);
  /* 12414b28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414b2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414b2d call 0x12415730 */
  push32(0x12414b32u); f_12415730();
  /* 12414b32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414b37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414b39 je 0x12414b85 */
  if (C.zf) goto L_12414b85;
  /* 12414b3b mov esi, esp */
  ESI = (ESP);
  /* 12414b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12414b3f call dword ptr [0x124454ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124454ac))), 0x12414b45u);
  /* 12414b45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414b48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414b4a call 0x12415730 */
  push32(0x12414b4fu); f_12415730();
  /* 12414b4f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12414b54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12414b56 je 0x12414b85 */
  if (C.zf) goto L_12414b85;
  /* 12414b58 mov esi, esp */
  ESI = (ESP);
  /* 12414b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12414b5c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12414b5e call dword ptr [0x12445434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445434))), 0x12414b64u);
  /* 12414b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414b67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414b69 call 0x12415730 */
  push32(0x12414b6eu); f_12415730();
  /* 12414b6e mov esi, esp */
  ESI = (ESP);
  /* 12414b70 push 0x1243d640 */
  push32((uint32_t)(0x1243d640u));
  /* 12414b75 call dword ptr [0x12445464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445464))), 0x12414b7bu);
  /* 12414b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414b7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414b80 call 0x12415730 */
  push32(0x12414b85u); f_12415730();
L_12414b85:;
  /* 12414b85 pop edi */
  EDI = (pop32());
  /* 12414b86 pop esi */
  ESI = (pop32());
  /* 12414b87 pop ebx */
  EBX = (pop32());
  /* 12414b88 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12414b8b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12414b8d call 0x12415730 */
  push32(0x12414b92u); f_12415730();
  /* 12414b92 mov esp, ebp */
  ESP = (EBP);
  /* 12414b94 pop ebp */
  EBP = (pop32());
  /* 12414b95 ret  */
  ESPCHK(0x12412100u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12415730 (56 bytes, 28 insns) */
void f_12415730(void) {
  FTRACE(0x12415730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12415730 jne 0x12415733 */
  if (!C.zf) goto L_12415733;
  /* 12415732 ret  */
  ESPCHK(0x12415730u, _esp0);
  ESP += 4; return;
L_12415733:;
  /* 12415733 push ebp */
  push32((uint32_t)(EBP));
  /* 12415734 mov ebp, esp */
  EBP = (ESP);
  /* 12415736 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12415739 push eax */
  push32((uint32_t)(EAX));
  /* 1241573a push edx */
  push32((uint32_t)(EDX));
  /* 1241573b push ebx */
  push32((uint32_t)(EBX));
  /* 1241573c push esi */
  push32((uint32_t)(ESI));
  /* 1241573d push edi */
  push32((uint32_t)(EDI));
  /* 1241573e push 0x1243d72c */
  push32((uint32_t)(0x1243d72cu));
  /* 12415743 push 0x1243d728 */
  push32((uint32_t)(0x1243d728u));
  /* 12415748 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1241574a push 0x1243d718 */
  push32((uint32_t)(0x1243d718u));
  /* 1241574f push 1 */
  push32((uint32_t)(0x1u));
  /* 12415751 call 0x12415b00 */
  push32(0x12415756u); f_12415b00();
  /* 12415756 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415759 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241575c jne 0x1241575f */
  if (!C.zf) goto L_1241575f;
  /* 1241575e int3  */
  x86_unimpl("int3 @ 0x1241575e");
L_1241575f:;
  /* 1241575f pop edi */
  EDI = (pop32());
  /* 12415760 pop esi */
  ESI = (pop32());
  /* 12415761 pop ebx */
  EBX = (pop32());
  /* 12415762 pop edx */
  EDX = (pop32());
  /* 12415763 pop eax */
  EAX = (pop32());
  /* 12415764 mov esp, ebp */
  ESP = (EBP);
  /* 12415766 pop ebp */
  EBP = (pop32());
  /* 12415767 ret  */
  ESPCHK(0x12415730u, _esp0);
  ESP += 4; return;
}

/* FUN_10005770 @ 0x12415770 (313 bytes, 78 insns) */
void f_12415770(void) {
  FTRACE(0x12415770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12415770 push ebp */
  push32((uint32_t)(EBP));
  /* 12415771 mov ebp, esp */
  EBP = (ESP);
  /* 12415773 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415777 jne 0x12415837 */
  if (!C.zf) goto L_12415837;
  /* 1241577d call dword ptr [0x12445350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445350))), 0x12415783u);
  /* 12415783 mov dword ptr [0x1244282c], eax */
  w32((uint32_t)(0x1244282c), (EAX));
  /* 12415788 push 1 */
  push32((uint32_t)(0x1u));
  /* 1241578a call 0x12419230 */
  push32(0x1241578fu); f_12419230();
  /* 1241578f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415792 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415794 jne 0x1241579d */
  if (!C.zf) goto L_1241579d;
  /* 12415796 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12415798 jmp 0x124158a5 */
  goto L_124158a5;
L_1241579d:;
  /* 1241579d mov eax, dword ptr [0x1244282c] */
  EAX = (r32((uint32_t)(0x1244282c)));
  /* 124157a2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 124157a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 124157aa mov dword ptr [0x12442838], eax */
  w32((uint32_t)(0x12442838), (EAX));
  /* 124157af mov ecx, dword ptr [0x1244282c] */
  ECX = (r32((uint32_t)(0x1244282c)));
  /* 124157b5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124157bb mov dword ptr [0x12442834], ecx */
  w32((uint32_t)(0x12442834), (ECX));
  /* 124157c1 mov edx, dword ptr [0x12442834] */
  EDX = (r32((uint32_t)(0x12442834)));
  /* 124157c7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 124157ca add edx, dword ptr [0x12442838] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12442838))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124157d0 mov dword ptr [0x12442830], edx */
  w32((uint32_t)(0x12442830), (EDX));
  /* 124157d6 mov eax, dword ptr [0x1244282c] */
  EAX = (r32((uint32_t)(0x1244282c)));
  /* 124157db shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124157de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124157e3 mov dword ptr [0x1244282c], eax */
  w32((uint32_t)(0x1244282c), (EAX));
  /* 124157e8 call 0x124163a0 */
  push32(0x124157edu); f_124163a0();
  /* 124157ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124157ef jne 0x124157fd */
  if (!C.zf) goto L_124157fd;
  /* 124157f1 call 0x12419280 */
  push32(0x124157f6u); f_12419280();
  /* 124157f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124157f8 jmp 0x124158a5 */
  goto L_124158a5;
L_124157fd:;
  /* 124157fd call dword ptr [0x1244534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244534c))), 0x12415803u);
  /* 12415803 mov dword ptr [0x1244436c], eax */
  w32((uint32_t)(0x1244436c), (EAX));
  /* 12415808 call 0x12419010 */
  push32(0x1241580du); f_12419010();
  /* 1241580d mov dword ptr [0x12442814], eax */
  w32((uint32_t)(0x12442814), (EAX));
  /* 12415812 call 0x12416650 */
  push32(0x12415817u); f_12416650();
  /* 12415817 call 0x12418b00 */
  push32(0x1241581cu); f_12418b00();
  /* 1241581c call 0x124189b0 */
  push32(0x12415821u); f_124189b0();
  /* 12415821 call 0x124161a0 */
  push32(0x12415826u); f_124161a0();
  /* 12415826 mov ecx, dword ptr [0x12442810] */
  ECX = (r32((uint32_t)(0x12442810)));
  /* 1241582c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241582f mov dword ptr [0x12442810], ecx */
  w32((uint32_t)(0x12442810), (ECX));
  /* 12415835 jmp 0x124158a0 */
  goto L_124158a0;
L_12415837:;
  /* 12415837 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241583b jne 0x12415890 */
  if (!C.zf) goto L_12415890;
  /* 1241583d cmp dword ptr [0x12442810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415844 jle 0x1241588a */
  if ((C.zf||C.sf!=C.of)) goto L_1241588a;
  /* 12415846 mov edx, dword ptr [0x12442810] */
  EDX = (r32((uint32_t)(0x12442810)));
  /* 1241584c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241584f mov dword ptr [0x12442810], edx */
  w32((uint32_t)(0x12442810), (EDX));
  /* 12415855 cmp dword ptr [0x12442864], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442864))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241585c jne 0x12415863 */
  if (!C.zf) goto L_12415863;
  /* 1241585e call 0x12416220 */
  push32(0x12415863u); f_12416220();
L_12415863:;
  /* 12415863 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12415865 call 0x12417f50 */
  push32(0x1241586au); f_12417f50();
  /* 1241586a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241586d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12415870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415872 je 0x12415879 */
  if (C.zf) goto L_12415879;
  /* 12415874 call 0x12418860 */
  push32(0x12415879u); f_12418860();
L_12415879:;
  /* 12415879 call 0x12416980 */
  push32(0x1241587eu); f_12416980();
  /* 1241587e call 0x12416430 */
  push32(0x12415883u); f_12416430();
  /* 12415883 call 0x12419280 */
  push32(0x12415888u); f_12419280();
  /* 12415888 jmp 0x1241588e */
  goto L_1241588e;
L_1241588a:;
  /* 1241588a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241588c jmp 0x124158a5 */
  goto L_124158a5;
L_1241588e:;
  /* 1241588e jmp 0x124158a0 */
  goto L_124158a0;
L_12415890:;
  /* 12415890 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415894 jne 0x124158a0 */
  if (!C.zf) goto L_124158a0;
  /* 12415896 push 0 */
  push32((uint32_t)(0x0u));
  /* 12415898 call 0x12416520 */
  push32(0x1241589du); f_12416520();
  /* 1241589d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124158a0:;
  /* 124158a0 mov eax, 1 */
  EAX = (0x1u);
L_124158a5:;
  /* 124158a5 pop ebp */
  EBP = (pop32());
  /* 124158a6 ret 0xc */
  ESPCHK(0x12415770u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x124158b0 (243 bytes, 86 insns) */
void f_124158b0(void) {
  FTRACE(0x124158b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124158b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124158b1 mov ebp, esp */
  EBP = (ESP);
  /* 124158b3 push ecx */
  push32((uint32_t)(ECX));
  /* 124158b4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124158bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124158bf jne 0x124158d1 */
  if (!C.zf) goto L_124158d1;
  /* 124158c1 cmp dword ptr [0x12442810], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442810))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124158c8 jne 0x124158d1 */
  if (!C.zf) goto L_124158d1;
  /* 124158ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124158cc jmp 0x1241599d */
  goto L_1241599d;
L_124158d1:;
  /* 124158d1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124158d5 je 0x124158dd */
  if (C.zf) goto L_124158dd;
  /* 124158d7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124158db jne 0x1241591f */
  if (!C.zf) goto L_1241591f;
L_124158dd:;
  /* 124158dd cmp dword ptr [0x1244437c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1244437c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124158e4 je 0x124158fb */
  if (C.zf) goto L_124158fb;
  /* 124158e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124158e9 push eax */
  push32((uint32_t)(EAX));
  /* 124158ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124158ed push ecx */
  push32((uint32_t)(ECX));
  /* 124158ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124158f1 push edx */
  push32((uint32_t)(EDX));
  /* 124158f2 call dword ptr [0x1244437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244437c))), 0x124158f8u);
  /* 124158f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124158fb:;
  /* 124158fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124158ff je 0x12415915 */
  if (C.zf) goto L_12415915;
  /* 12415901 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12415904 push eax */
  push32((uint32_t)(EAX));
  /* 12415905 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415908 push ecx */
  push32((uint32_t)(ECX));
  /* 12415909 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241590c push edx */
  push32((uint32_t)(EDX));
  /* 1241590d call 0x12415770 */
  push32(0x12415912u); f_12415770();
  /* 12415912 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12415915:;
  /* 12415915 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415919 jne 0x1241591f */
  if (!C.zf) goto L_1241591f;
  /* 1241591b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241591d jmp 0x1241599d */
  goto L_1241599d;
L_1241591f:;
  /* 1241591f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12415922 push eax */
  push32((uint32_t)(EAX));
  /* 12415923 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415926 push ecx */
  push32((uint32_t)(ECX));
  /* 12415927 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241592a push edx */
  push32((uint32_t)(EDX));
  /* 1241592b call 0x1241100a */
  push32(0x12415930u); f_1241100a();
  /* 12415930 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12415933 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415937 jne 0x1241594e */
  if (!C.zf) goto L_1241594e;
  /* 12415939 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241593d jne 0x1241594e */
  if (!C.zf) goto L_1241594e;
  /* 1241593f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12415942 push eax */
  push32((uint32_t)(EAX));
  /* 12415943 push 0 */
  push32((uint32_t)(0x0u));
  /* 12415945 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415948 push ecx */
  push32((uint32_t)(ECX));
  /* 12415949 call 0x12415770 */
  push32(0x1241594eu); f_12415770();
L_1241594e:;
  /* 1241594e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415952 je 0x1241595a */
  if (C.zf) goto L_1241595a;
  /* 12415954 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415958 jne 0x1241599a */
  if (!C.zf) goto L_1241599a;
L_1241595a:;
  /* 1241595a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241595d push edx */
  push32((uint32_t)(EDX));
  /* 1241595e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415961 push eax */
  push32((uint32_t)(EAX));
  /* 12415962 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415965 push ecx */
  push32((uint32_t)(ECX));
  /* 12415966 call 0x12415770 */
  push32(0x1241596bu); f_12415770();
  /* 1241596b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241596d jne 0x12415976 */
  if (!C.zf) goto L_12415976;
  /* 1241596f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12415976:;
  /* 12415976 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241597a je 0x1241599a */
  if (C.zf) goto L_1241599a;
  /* 1241597c cmp dword ptr [0x1244437c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1244437c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415983 je 0x1241599a */
  if (C.zf) goto L_1241599a;
  /* 12415985 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12415988 push edx */
  push32((uint32_t)(EDX));
  /* 12415989 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241598c push eax */
  push32((uint32_t)(EAX));
  /* 1241598d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415990 push ecx */
  push32((uint32_t)(ECX));
  /* 12415991 call dword ptr [0x1244437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244437c))), 0x12415997u);
  /* 12415997 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241599a:;
  /* 1241599a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1241599d:;
  /* 1241599d mov esp, ebp */
  ESP = (EBP);
  /* 1241599f pop ebp */
  EBP = (pop32());
  /* 124159a0 ret 0xc */
  ESPCHK(0x124158b0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x124159b0 (58 bytes, 18 insns) */
void f_124159b0(void) {
  FTRACE(0x124159b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124159b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124159b1 mov ebp, esp */
  EBP = (ESP);
  /* 124159b3 cmp dword ptr [0x1244281c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1244281c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124159ba je 0x124159ce */
  if (C.zf) goto L_124159ce;
  /* 124159bc cmp dword ptr [0x1244281c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1244281c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124159c3 jne 0x124159d3 */
  if (!C.zf) goto L_124159d3;
  /* 124159c5 cmp dword ptr [0x12442820], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442820))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124159cc jne 0x124159d3 */
  if (!C.zf) goto L_124159d3;
L_124159ce:;
  /* 124159ce call 0x12419320 */
  push32(0x124159d3u); f_12419320();
L_124159d3:;
  /* 124159d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124159d6 push eax */
  push32((uint32_t)(EAX));
  /* 124159d7 call 0x12419370 */
  push32(0x124159dcu); f_12419370();
  /* 124159dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124159df push 0xff */
  push32((uint32_t)(0xffu));
  /* 124159e4 call dword ptr [0x12440a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12440a30))), 0x124159eau);
  /* 124159ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124159ed pop ebp */
  EBP = (pop32());
  /* 124159ee ret  */
  ESPCHK(0x124159b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f0 @ 0x124159f0 (11 bytes, 5 insns) */
void f_124159f0(void) {
  FTRACE(0x124159f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124159f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124159f1 mov ebp, esp */
  EBP = (ESP);
  /* 124159f3 call dword ptr [0x12445354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445354))), 0x124159f9u);
  /* 124159f9 pop ebp */
  EBP = (pop32());
  /* 124159fa ret  */
  ESPCHK(0x124159f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x12415a00 (87 bytes, 30 insns) */
void f_12415a00(void) {
  FTRACE(0x12415a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12415a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12415a01 mov ebp, esp */
  EBP = (ESP);
  /* 12415a03 push ecx */
  push32((uint32_t)(ECX));
  /* 12415a04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415a08 jl 0x12415a10 */
  if ((C.sf!=C.of)) goto L_12415a10;
  /* 12415a0a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415a0e jl 0x12415a15 */
  if ((C.sf!=C.of)) goto L_12415a15;
L_12415a10:;
  /* 12415a10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12415a13 jmp 0x12415a53 */
  goto L_12415a53;
L_12415a15:;
  /* 12415a15 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415a19 jne 0x12415a27 */
  if (!C.zf) goto L_12415a27;
  /* 12415a1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415a1e mov eax, dword ptr [eax*4 + 0x12440a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12440a38)));
  /* 12415a25 jmp 0x12415a53 */
  goto L_12415a53;
L_12415a27:;
  /* 12415a27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415a2a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12415a2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12415a2f je 0x12415a36 */
  if (C.zf) goto L_12415a36;
  /* 12415a31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12415a34 jmp 0x12415a53 */
  goto L_12415a53;
L_12415a36:;
  /* 12415a36 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415a39 mov eax, dword ptr [edx*4 + 0x12440a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12440a38)));
  /* 12415a40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12415a43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415a46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415a49 mov dword ptr [ecx*4 + 0x12440a38], edx */
  w32((uint32_t)(ECX*4 + 0x12440a38), (EDX));
  /* 12415a50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12415a53:;
  /* 12415a53 mov esp, ebp */
  ESP = (EBP);
  /* 12415a55 pop ebp */
  EBP = (pop32());
  /* 12415a56 ret  */
  ESPCHK(0x12415a00u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12415a60 (126 bytes, 38 insns) */
void f_12415a60(void) {
  FTRACE(0x12415a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12415a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12415a61 mov ebp, esp */
  EBP = (ESP);
  /* 12415a63 push ecx */
  push32((uint32_t)(ECX));
  /* 12415a64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415a68 jl 0x12415a70 */
  if ((C.sf!=C.of)) goto L_12415a70;
  /* 12415a6a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415a6e jl 0x12415a77 */
  if ((C.sf!=C.of)) goto L_12415a77;
L_12415a70:;
  /* 12415a70 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12415a75 jmp 0x12415ada */
  goto L_12415ada;
L_12415a77:;
  /* 12415a77 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415a7b jne 0x12415a89 */
  if (!C.zf) goto L_12415a89;
  /* 12415a7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415a80 mov eax, dword ptr [eax*4 + 0x12440a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12440a44)));
  /* 12415a87 jmp 0x12415ada */
  goto L_12415ada;
L_12415a89:;
  /* 12415a89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415a8c mov edx, dword ptr [ecx*4 + 0x12440a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440a44)));
  /* 12415a93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12415a96 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415a9a jne 0x12415ab0 */
  if (!C.zf) goto L_12415ab0;
  /* 12415a9c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12415a9e call dword ptr [0x12445358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445358))), 0x12415aa4u);
  /* 12415aa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415aa7 mov dword ptr [ecx*4 + 0x12440a44], eax */
  w32((uint32_t)(ECX*4 + 0x12440a44), (EAX));
  /* 12415aae jmp 0x12415ad7 */
  goto L_12415ad7;
L_12415ab0:;
  /* 12415ab0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415ab4 jne 0x12415aca */
  if (!C.zf) goto L_12415aca;
  /* 12415ab6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12415ab8 call dword ptr [0x12445358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445358))), 0x12415abeu);
  /* 12415abe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415ac1 mov dword ptr [edx*4 + 0x12440a44], eax */
  w32((uint32_t)(EDX*4 + 0x12440a44), (EAX));
  /* 12415ac8 jmp 0x12415ad7 */
  goto L_12415ad7;
L_12415aca:;
  /* 12415aca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415acd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415ad0 mov dword ptr [eax*4 + 0x12440a44], ecx */
  w32((uint32_t)(EAX*4 + 0x12440a44), (ECX));
L_12415ad7:;
  /* 12415ad7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12415ada:;
  /* 12415ada mov esp, ebp */
  ESP = (EBP);
  /* 12415adc pop ebp */
  EBP = (pop32());
  /* 12415add ret  */
  ESPCHK(0x12415a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x12415ae0 (28 bytes, 11 insns) */
void f_12415ae0(void) {
  FTRACE(0x12415ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12415ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12415ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12415ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12415ae4 mov eax, dword ptr [0x12444360] */
  EAX = (r32((uint32_t)(0x12444360)));
  /* 12415ae9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12415aec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415aef mov dword ptr [0x12444360], ecx */
  w32((uint32_t)(0x12444360), (ECX));
  /* 12415af5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12415af8 mov esp, ebp */
  ESP = (EBP);
  /* 12415afa pop ebp */
  EBP = (pop32());
  /* 12415afb ret  */
  ESPCHK(0x12415ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b00 @ 0x12415b00 (912 bytes, 248 insns) */
void f_12415b00(void) {
  FTRACE(0x12415b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12415b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12415b01 mov ebp, esp */
  EBP = (ESP);
  /* 12415b03 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12415b08 call 0x12419be0 */
  push32(0x12415b0du); f_12419be0();
  /* 12415b0d push edi */
  push32((uint32_t)(EDI));
  /* 12415b0e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12415b15 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12415b1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12415b1c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12415b22 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12415b24 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12415b26 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12415b27 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12415b2e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12415b33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12415b35 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12415b3b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12415b3d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12415b3f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12415b40 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12415b47 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12415b4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12415b4e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12415b54 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12415b56 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12415b58 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12415b59 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12415b5c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12415b62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415b66 jl 0x12415b6e */
  if ((C.sf!=C.of)) goto L_12415b6e;
  /* 12415b68 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415b6c jl 0x12415b76 */
  if ((C.sf!=C.of)) goto L_12415b76;
L_12415b6e:;
  /* 12415b6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12415b71 jmp 0x12415e8b */
  goto L_12415e8b;
L_12415b76:;
  /* 12415b76 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415b7a jne 0x12415c20 */
  if (!C.zf) goto L_12415c20;
  /* 12415b80 push 0x12440a34 */
  push32((uint32_t)(0x12440a34u));
  /* 12415b85 call dword ptr [0x12445370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445370))), 0x12415b8bu);
  /* 12415b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415b8d jle 0x12415c20 */
  if ((C.zf||C.sf!=C.of)) goto L_12415c20;
  /* 12415b93 cmp dword ptr [0x12442824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415b9a jne 0x12415bde */
  if (!C.zf) goto L_12415bde;
  /* 12415b9c push 0x1243d8d4 */
  push32((uint32_t)(0x1243d8d4u));
  /* 12415ba1 call dword ptr [0x1244536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244536c))), 0x12415ba7u);
  /* 12415ba7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12415bad cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415bb4 je 0x12415bd6 */
  if (C.zf) goto L_12415bd6;
  /* 12415bb6 push 0x1243d8c8 */
  push32((uint32_t)(0x1243d8c8u));
  /* 12415bbb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12415bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 12415bc2 call dword ptr [0x12445368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445368))), 0x12415bc8u);
  /* 12415bc8 mov dword ptr [0x12442824], eax */
  w32((uint32_t)(0x12442824), (EAX));
  /* 12415bcd cmp dword ptr [0x12442824], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442824))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415bd4 jne 0x12415bde */
  if (!C.zf) goto L_12415bde;
L_12415bd6:;
  /* 12415bd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12415bd9 jmp 0x12415e8b */
  goto L_12415e8b;
L_12415bde:;
  /* 12415bde mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12415be1 push edx */
  push32((uint32_t)(EDX));
  /* 12415be2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415be5 push eax */
  push32((uint32_t)(EAX));
  /* 12415be6 push 0x1243d894 */
  push32((uint32_t)(0x1243d894u));
  /* 12415beb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12415bf1 push ecx */
  push32((uint32_t)(ECX));
  /* 12415bf2 call dword ptr [0x12442824] */
  call_ind((uint32_t)(r32((uint32_t)(0x12442824))), 0x12415bf8u);
  /* 12415bf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415bfb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12415c01 push edx */
  push32((uint32_t)(EDX));
  /* 12415c02 call dword ptr [0x12445364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445364))), 0x12415c08u);
  /* 12415c08 push 0x12440a34 */
  push32((uint32_t)(0x12440a34u));
  /* 12415c0d call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x12415c13u);
  /* 12415c13 call 0x124159f0 */
  push32(0x12415c18u); f_124159f0();
  /* 12415c18 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12415c1b jmp 0x12415e8b */
  goto L_12415e8b;
L_12415c20:;
  /* 12415c20 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415c24 je 0x12415c5d */
  if (C.zf) goto L_12415c5d;
  /* 12415c26 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12415c2c push eax */
  push32((uint32_t)(EAX));
  /* 12415c2d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12415c30 push ecx */
  push32((uint32_t)(ECX));
  /* 12415c31 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12415c36 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12415c3c push edx */
  push32((uint32_t)(EDX));
  /* 12415c3d call 0x12419ae0 */
  push32(0x12415c42u); f_12419ae0();
  /* 12415c42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415c47 jge 0x12415c5d */
  if ((C.sf==C.of)) goto L_12415c5d;
  /* 12415c49 push 0x1243d868 */
  push32((uint32_t)(0x1243d868u));
  /* 12415c4e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12415c54 push eax */
  push32((uint32_t)(EAX));
  /* 12415c55 call 0x124199f0 */
  push32(0x12415c5au); f_124199f0();
  /* 12415c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415c5d:;
  /* 12415c5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415c61 jne 0x12415c95 */
  if (!C.zf) goto L_12415c95;
  /* 12415c63 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415c67 je 0x12415c75 */
  if (C.zf) goto L_12415c75;
  /* 12415c69 mov dword ptr [ebp - 0x3028], 0x1243d854 */
  w32((uint32_t)(EBP + -0x3028), (0x1243d854u));
  /* 12415c73 jmp 0x12415c7f */
  goto L_12415c7f;
L_12415c75:;
  /* 12415c75 mov dword ptr [ebp - 0x3028], 0x1243d840 */
  w32((uint32_t)(EBP + -0x3028), (0x1243d840u));
L_12415c7f:;
  /* 12415c7f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12415c85 push ecx */
  push32((uint32_t)(ECX));
  /* 12415c86 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12415c8c push edx */
  push32((uint32_t)(EDX));
  /* 12415c8d call 0x124199f0 */
  push32(0x12415c92u); f_124199f0();
  /* 12415c92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415c95:;
  /* 12415c95 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12415c9b push eax */
  push32((uint32_t)(EAX));
  /* 12415c9c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12415ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 12415ca3 call 0x12419a00 */
  push32(0x12415ca8u); f_12419a00();
  /* 12415ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415cab cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415caf jne 0x12415cea */
  if (!C.zf) goto L_12415cea;
  /* 12415cb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415cb4 mov eax, dword ptr [edx*4 + 0x12440a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12440a38)));
  /* 12415cbb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12415cbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415cc0 je 0x12415cd6 */
  if (C.zf) goto L_12415cd6;
  /* 12415cc2 push 0x1243d83c */
  push32((uint32_t)(0x1243d83cu));
  /* 12415cc7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12415ccd push ecx */
  push32((uint32_t)(ECX));
  /* 12415cce call 0x12419a00 */
  push32(0x12415cd3u); f_12419a00();
  /* 12415cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415cd6:;
  /* 12415cd6 push 0x1243d838 */
  push32((uint32_t)(0x1243d838u));
  /* 12415cdb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12415ce1 push edx */
  push32((uint32_t)(EDX));
  /* 12415ce2 call 0x12419a00 */
  push32(0x12415ce7u); f_12419a00();
  /* 12415ce7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415cea:;
  /* 12415cea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415cee je 0x12415d32 */
  if (C.zf) goto L_12415d32;
  /* 12415cf0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12415cf6 push eax */
  push32((uint32_t)(EAX));
  /* 12415cf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12415cfa push ecx */
  push32((uint32_t)(ECX));
  /* 12415cfb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415cfe push edx */
  push32((uint32_t)(EDX));
  /* 12415cff push 0x1243d82c */
  push32((uint32_t)(0x1243d82cu));
  /* 12415d04 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12415d09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12415d0f push eax */
  push32((uint32_t)(EAX));
  /* 12415d10 call 0x124198f0 */
  push32(0x12415d15u); f_124198f0();
  /* 12415d15 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415d18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415d1a jge 0x12415d30 */
  if ((C.sf==C.of)) goto L_12415d30;
  /* 12415d1c push 0x1243d868 */
  push32((uint32_t)(0x1243d868u));
  /* 12415d21 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12415d27 push ecx */
  push32((uint32_t)(ECX));
  /* 12415d28 call 0x124199f0 */
  push32(0x12415d2du); f_124199f0();
  /* 12415d2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415d30:;
  /* 12415d30 jmp 0x12415d48 */
  goto L_12415d48;
L_12415d32:;
  /* 12415d32 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12415d38 push edx */
  push32((uint32_t)(EDX));
  /* 12415d39 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12415d3f push eax */
  push32((uint32_t)(EAX));
  /* 12415d40 call 0x124199f0 */
  push32(0x12415d45u); f_124199f0();
  /* 12415d45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415d48:;
  /* 12415d48 cmp dword ptr [0x12444360], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12444360))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415d4f je 0x12415d8c */
  if (C.zf) goto L_12415d8c;
  /* 12415d51 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12415d57 push ecx */
  push32((uint32_t)(ECX));
  /* 12415d58 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12415d5e push edx */
  push32((uint32_t)(EDX));
  /* 12415d5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415d62 push eax */
  push32((uint32_t)(EAX));
  /* 12415d63 call dword ptr [0x12444360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12444360))), 0x12415d69u);
  /* 12415d69 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415d6e je 0x12415d8c */
  if (C.zf) goto L_12415d8c;
  /* 12415d70 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415d74 jne 0x12415d81 */
  if (!C.zf) goto L_12415d81;
  /* 12415d76 push 0x12440a34 */
  push32((uint32_t)(0x12440a34u));
  /* 12415d7b call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x12415d81u);
L_12415d81:;
  /* 12415d81 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12415d87 jmp 0x12415e8b */
  goto L_12415e8b;
L_12415d8c:;
  /* 12415d8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415d8f mov edx, dword ptr [ecx*4 + 0x12440a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440a38)));
  /* 12415d96 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12415d99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12415d9b je 0x12415ddb */
  if (C.zf) goto L_12415ddb;
  /* 12415d9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415da0 cmp dword ptr [eax*4 + 0x12440a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12440a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415da8 je 0x12415ddb */
  if (C.zf) goto L_12415ddb;
  /* 12415daa push 0 */
  push32((uint32_t)(0x0u));
  /* 12415dac lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12415db2 push ecx */
  push32((uint32_t)(ECX));
  /* 12415db3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12415db9 push edx */
  push32((uint32_t)(EDX));
  /* 12415dba call 0x12419870 */
  push32(0x12415dbfu); f_12419870();
  /* 12415dbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415dc2 push eax */
  push32((uint32_t)(EAX));
  /* 12415dc3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12415dc9 push eax */
  push32((uint32_t)(EAX));
  /* 12415dca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415dcd mov edx, dword ptr [ecx*4 + 0x12440a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440a44)));
  /* 12415dd4 push edx */
  push32((uint32_t)(EDX));
  /* 12415dd5 call dword ptr [0x1244535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244535c))), 0x12415ddbu);
L_12415ddb:;
  /* 12415ddb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415dde mov ecx, dword ptr [eax*4 + 0x12440a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12440a38)));
  /* 12415de5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12415de8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12415dea je 0x12415df9 */
  if (C.zf) goto L_12415df9;
  /* 12415dec lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12415df2 push edx */
  push32((uint32_t)(EDX));
  /* 12415df3 call dword ptr [0x12445364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445364))), 0x12415df9u);
L_12415df9:;
  /* 12415df9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415dfc mov ecx, dword ptr [eax*4 + 0x12440a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12440a38)));
  /* 12415e03 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12415e06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12415e08 je 0x12415e78 */
  if (C.zf) goto L_12415e78;
  /* 12415e0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415e0e je 0x12415e2d */
  if (C.zf) goto L_12415e2d;
  /* 12415e10 push 0xa */
  push32((uint32_t)(0xau));
  /* 12415e12 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12415e18 push edx */
  push32((uint32_t)(EDX));
  /* 12415e19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12415e1c push eax */
  push32((uint32_t)(EAX));
  /* 12415e1d call 0x12419580 */
  push32(0x12415e22u); f_12419580();
  /* 12415e22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415e25 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12415e2b jmp 0x12415e37 */
  goto L_12415e37;
L_12415e2d:;
  /* 12415e2d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12415e37:;
  /* 12415e37 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12415e3d push ecx */
  push32((uint32_t)(ECX));
  /* 12415e3e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12415e41 push edx */
  push32((uint32_t)(EDX));
  /* 12415e42 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12415e48 push eax */
  push32((uint32_t)(EAX));
  /* 12415e49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12415e4c push ecx */
  push32((uint32_t)(ECX));
  /* 12415e4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12415e50 push edx */
  push32((uint32_t)(EDX));
  /* 12415e51 call 0x12415e90 */
  push32(0x12415e56u); f_12415e90();
  /* 12415e56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415e59 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12415e5f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415e63 jne 0x12415e70 */
  if (!C.zf) goto L_12415e70;
  /* 12415e65 push 0x12440a34 */
  push32((uint32_t)(0x12440a34u));
  /* 12415e6a call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x12415e70u);
L_12415e70:;
  /* 12415e70 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12415e76 jmp 0x12415e8b */
  goto L_12415e8b;
L_12415e78:;
  /* 12415e78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415e7c jne 0x12415e89 */
  if (!C.zf) goto L_12415e89;
  /* 12415e7e push 0x12440a34 */
  push32((uint32_t)(0x12440a34u));
  /* 12415e83 call dword ptr [0x12445360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445360))), 0x12415e89u);
L_12415e89:;
  /* 12415e89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12415e8b:;
  /* 12415e8b pop edi */
  EDI = (pop32());
  /* 12415e8c mov esp, ebp */
  ESP = (EBP);
  /* 12415e8e pop ebp */
  EBP = (pop32());
  /* 12415e8f ret  */
  ESPCHK(0x12415b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e90 @ 0x12415e90 (780 bytes, 197 insns) */
void f_12415e90(void) {
  FTRACE(0x12415e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12415e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12415e91 mov ebp, esp */
  EBP = (ESP);
  /* 12415e93 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12415e98 call 0x12419be0 */
  push32(0x12415e9du); f_12419be0();
L_12415e9d:;
  /* 12415e9d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415ea1 jne 0x12415ec8 */
  if (!C.zf) goto L_12415ec8;
  /* 12415ea3 push 0x1243da24 */
  push32((uint32_t)(0x1243da24u));
  /* 12415ea8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12415eaa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12415eaf push 0x1243da18 */
  push32((uint32_t)(0x1243da18u));
  /* 12415eb4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12415eb6 call 0x12415b00 */
  push32(0x12415ebbu); f_12415b00();
  /* 12415ebb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415ebe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415ec1 jne 0x12415ec8 */
  if (!C.zf) goto L_12415ec8;
  /* 12415ec3 call 0x124159f0 */
  push32(0x12415ec8u); f_124159f0();
L_12415ec8:;
  /* 12415ec8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12415eca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415ecc jne 0x12415e9d */
  if (!C.zf) goto L_12415e9d;
  /* 12415ece push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12415ed3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12415ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 12415eda push 0 */
  push32((uint32_t)(0x0u));
  /* 12415edc call dword ptr [0x12445374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445374))), 0x12415ee2u);
  /* 12415ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12415ee4 jne 0x12415efa */
  if (!C.zf) goto L_12415efa;
  /* 12415ee6 push 0x1243da00 */
  push32((uint32_t)(0x1243da00u));
  /* 12415eeb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12415ef1 push edx */
  push32((uint32_t)(EDX));
  /* 12415ef2 call 0x124199f0 */
  push32(0x12415ef7u); f_124199f0();
  /* 12415ef7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415efa:;
  /* 12415efa lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12415f00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12415f03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12415f06 push ecx */
  push32((uint32_t)(ECX));
  /* 12415f07 call 0x12419870 */
  push32(0x12415f0cu); f_12419870();
  /* 12415f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415f0f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415f12 jbe 0x12415f3d */
  if ((C.cf||C.zf)) goto L_12415f3d;
  /* 12415f14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12415f17 push edx */
  push32((uint32_t)(EDX));
  /* 12415f18 call 0x12419870 */
  push32(0x12415f1du); f_12419870();
  /* 12415f1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415f20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12415f23 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12415f27 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12415f2a push 3 */
  push32((uint32_t)(0x3u));
  /* 12415f2c push 0x1243d9fc */
  push32((uint32_t)(0x1243d9fcu));
  /* 12415f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12415f34 push eax */
  push32((uint32_t)(EAX));
  /* 12415f35 call 0x1241a260 */
  push32(0x12415f3au); f_1241a260();
  /* 12415f3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415f3d:;
  /* 12415f3d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12415f40 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12415f46 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415f4d je 0x12415f98 */
  if (C.zf) goto L_12415f98;
  /* 12415f4f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12415f55 push edx */
  push32((uint32_t)(EDX));
  /* 12415f56 call 0x12419870 */
  push32(0x12415f5bu); f_12419870();
  /* 12415f5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415f5e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415f61 jbe 0x12415f98 */
  if ((C.cf||C.zf)) goto L_12415f98;
  /* 12415f63 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12415f69 push eax */
  push32((uint32_t)(EAX));
  /* 12415f6a call 0x12419870 */
  push32(0x12415f6fu); f_12419870();
  /* 12415f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12415f72 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12415f78 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12415f7c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12415f82 push 3 */
  push32((uint32_t)(0x3u));
  /* 12415f84 push 0x1243d9fc */
  push32((uint32_t)(0x1243d9fcu));
  /* 12415f89 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12415f8f push eax */
  push32((uint32_t)(EAX));
  /* 12415f90 call 0x1241a260 */
  push32(0x12415f95u); f_1241a260();
  /* 12415f95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12415f98:;
  /* 12415f98 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415f9c jne 0x12415faa */
  if (!C.zf) goto L_12415faa;
  /* 12415f9e mov dword ptr [ebp - 0x1114], 0x1243d988 */
  w32((uint32_t)(EBP + -0x1114), (0x1243d988u));
  /* 12415fa8 jmp 0x12415fb4 */
  goto L_12415fb4;
L_12415faa:;
  /* 12415faa mov dword ptr [ebp - 0x1114], 0x1243d728 */
  w32((uint32_t)(EBP + -0x1114), (0x1243d728u));
L_12415fb4:;
  /* 12415fb4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12415fb7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12415fba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12415fbc je 0x12415fc9 */
  if (C.zf) goto L_12415fc9;
  /* 12415fbe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12415fc1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12415fc7 jmp 0x12415fd3 */
  goto L_12415fd3;
L_12415fc9:;
  /* 12415fc9 mov dword ptr [ebp - 0x1118], 0x1243d728 */
  w32((uint32_t)(EBP + -0x1118), (0x1243d728u));
L_12415fd3:;
  /* 12415fd3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12415fd6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12415fd9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12415fdb je 0x12415fef */
  if (C.zf) goto L_12415fef;
  /* 12415fdd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12415fe1 jne 0x12415fef */
  if (!C.zf) goto L_12415fef;
  /* 12415fe3 mov dword ptr [ebp - 0x111c], 0x1243d978 */
  w32((uint32_t)(EBP + -0x111c), (0x1243d978u));
  /* 12415fed jmp 0x12415ff9 */
  goto L_12415ff9;
L_12415fef:;
  /* 12415fef mov dword ptr [ebp - 0x111c], 0x1243d728 */
  w32((uint32_t)(EBP + -0x111c), (0x1243d728u));
L_12415ff9:;
  /* 12415ff9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12415ffc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12415fff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12416001 je 0x1241600f */
  if (C.zf) goto L_1241600f;
  /* 12416003 mov dword ptr [ebp - 0x1120], 0x1243d974 */
  w32((uint32_t)(EBP + -0x1120), (0x1243d974u));
  /* 1241600d jmp 0x12416019 */
  goto L_12416019;
L_1241600f:;
  /* 1241600f mov dword ptr [ebp - 0x1120], 0x1243d728 */
  w32((uint32_t)(EBP + -0x1120), (0x1243d728u));
L_12416019:;
  /* 12416019 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241601d je 0x1241602a */
  if (C.zf) goto L_1241602a;
  /* 1241601f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416022 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12416028 jmp 0x12416034 */
  goto L_12416034;
L_1241602a:;
  /* 1241602a mov dword ptr [ebp - 0x1124], 0x1243d728 */
  w32((uint32_t)(EBP + -0x1124), (0x1243d728u));
L_12416034:;
  /* 12416034 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416038 je 0x12416046 */
  if (C.zf) goto L_12416046;
  /* 1241603a mov dword ptr [ebp - 0x1128], 0x1243d96c */
  w32((uint32_t)(EBP + -0x1128), (0x1243d96cu));
  /* 12416044 jmp 0x12416050 */
  goto L_12416050;
L_12416046:;
  /* 12416046 mov dword ptr [ebp - 0x1128], 0x1243d728 */
  w32((uint32_t)(EBP + -0x1128), (0x1243d728u));
L_12416050:;
  /* 12416050 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416054 je 0x12416061 */
  if (C.zf) goto L_12416061;
  /* 12416056 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416059 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1241605f jmp 0x1241606b */
  goto L_1241606b;
L_12416061:;
  /* 12416061 mov dword ptr [ebp - 0x112c], 0x1243d728 */
  w32((uint32_t)(EBP + -0x112c), (0x1243d728u));
L_1241606b:;
  /* 1241606b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241606f je 0x1241607d */
  if (C.zf) goto L_1241607d;
  /* 12416071 mov dword ptr [ebp - 0x1130], 0x1243d964 */
  w32((uint32_t)(EBP + -0x1130), (0x1243d964u));
  /* 1241607b jmp 0x12416087 */
  goto L_12416087;
L_1241607d:;
  /* 1241607d mov dword ptr [ebp - 0x1130], 0x1243d728 */
  w32((uint32_t)(EBP + -0x1130), (0x1243d728u));
L_12416087:;
  /* 12416087 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241608e je 0x1241609e */
  if (C.zf) goto L_1241609e;
  /* 12416090 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12416096 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1241609c jmp 0x124160a8 */
  goto L_124160a8;
L_1241609e:;
  /* 1241609e mov dword ptr [ebp - 0x1134], 0x1243d728 */
  w32((uint32_t)(EBP + -0x1134), (0x1243d728u));
L_124160a8:;
  /* 124160a8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124160af je 0x124160bd */
  if (C.zf) goto L_124160bd;
  /* 124160b1 mov dword ptr [ebp - 0x1138], 0x1243d958 */
  w32((uint32_t)(EBP + -0x1138), (0x1243d958u));
  /* 124160bb jmp 0x124160c7 */
  goto L_124160c7;
L_124160bd:;
  /* 124160bd mov dword ptr [ebp - 0x1138], 0x1243d728 */
  w32((uint32_t)(EBP + -0x1138), (0x1243d728u));
L_124160c7:;
  /* 124160c7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 124160cd push edx */
  push32((uint32_t)(EDX));
  /* 124160ce mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 124160d4 push eax */
  push32((uint32_t)(EAX));
  /* 124160d5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 124160db push ecx */
  push32((uint32_t)(ECX));
  /* 124160dc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 124160e2 push edx */
  push32((uint32_t)(EDX));
  /* 124160e3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 124160e9 push eax */
  push32((uint32_t)(EAX));
  /* 124160ea mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 124160f0 push ecx */
  push32((uint32_t)(ECX));
  /* 124160f1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 124160f7 push edx */
  push32((uint32_t)(EDX));
  /* 124160f8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 124160fe push eax */
  push32((uint32_t)(EAX));
  /* 124160ff mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12416105 push ecx */
  push32((uint32_t)(ECX));
  /* 12416106 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1241610c push edx */
  push32((uint32_t)(EDX));
  /* 1241610d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416110 push eax */
  push32((uint32_t)(EAX));
  /* 12416111 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416114 mov edx, dword ptr [ecx*4 + 0x12440a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440a50)));
  /* 1241611b push edx */
  push32((uint32_t)(EDX));
  /* 1241611c push 0x1243d904 */
  push32((uint32_t)(0x1243d904u));
  /* 12416121 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12416126 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1241612c push eax */
  push32((uint32_t)(EAX));
  /* 1241612d call 0x124198f0 */
  push32(0x12416132u); f_124198f0();
  /* 12416132 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416137 jge 0x1241614d */
  if ((C.sf==C.of)) goto L_1241614d;
  /* 12416139 push 0x1243d868 */
  push32((uint32_t)(0x1243d868u));
  /* 1241613e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12416144 push ecx */
  push32((uint32_t)(ECX));
  /* 12416145 call 0x124199f0 */
  push32(0x1241614au); f_124199f0();
  /* 1241614a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241614d:;
  /* 1241614d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12416152 push 0x1243d8e0 */
  push32((uint32_t)(0x1243d8e0u));
  /* 12416157 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1241615d push edx */
  push32((uint32_t)(EDX));
  /* 1241615e call 0x1241a1a0 */
  push32(0x12416163u); f_1241a1a0();
  /* 12416163 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416166 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1241616c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416173 jne 0x12416186 */
  if (!C.zf) goto L_12416186;
  /* 12416175 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12416177 call 0x12419ee0 */
  push32(0x1241617cu); f_12419ee0();
  /* 1241617c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241617f push 3 */
  push32((uint32_t)(0x3u));
  /* 12416181 call 0x12416200 */
  push32(0x12416186u); f_12416200();
L_12416186:;
  /* 12416186 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241618d jne 0x12416196 */
  if (!C.zf) goto L_12416196;
  /* 1241618f mov eax, 1 */
  EAX = (0x1u);
  /* 12416194 jmp 0x12416198 */
  goto L_12416198;
L_12416196:;
  /* 12416196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12416198:;
  /* 12416198 mov esp, ebp */
  ESP = (EBP);
  /* 1241619a pop ebp */
  EBP = (pop32());
  /* 1241619b ret  */
  ESPCHK(0x12415e90u, _esp0);
  ESP += 4; return;
}

/* FUN_100061a0 @ 0x124161a0 (56 bytes, 15 insns) */
void f_124161a0(void) {
  FTRACE(0x124161a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124161a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124161a1 mov ebp, esp */
  EBP = (ESP);
  /* 124161a3 cmp dword ptr [0x1244435c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1244435c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124161aa je 0x124161b2 */
  if (C.zf) goto L_124161b2;
  /* 124161ac call dword ptr [0x1244435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244435c))), 0x124161b2u);
L_124161b2:;
  /* 124161b2 push 0x12440418 */
  push32((uint32_t)(0x12440418u));
  /* 124161b7 push 0x12440208 */
  push32((uint32_t)(0x12440208u));
  /* 124161bc call 0x12416370 */
  push32(0x124161c1u); f_12416370();
  /* 124161c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124161c4 push 0x12440104 */
  push32((uint32_t)(0x12440104u));
  /* 124161c9 push 0x12440000 */
  push32((uint32_t)(0x12440000u));
  /* 124161ce call 0x12416370 */
  push32(0x124161d3u); f_12416370();
  /* 124161d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124161d6 pop ebp */
  EBP = (pop32());
  /* 124161d7 ret  */
  ESPCHK(0x124161a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x124161e0 (21 bytes, 10 insns) */
void f_124161e0(void) {
  FTRACE(0x124161e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124161e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124161e1 mov ebp, esp */
  EBP = (ESP);
  /* 124161e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124161e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124161e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124161ea push eax */
  push32((uint32_t)(EAX));
  /* 124161eb call 0x12416260 */
  push32(0x124161f0u); f_12416260();
  /* 124161f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124161f3 pop ebp */
  EBP = (pop32());
  /* 124161f4 ret  */
  ESPCHK(0x124161e0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12416200 (21 bytes, 10 insns) */
void f_12416200(void) {
  FTRACE(0x12416200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416200 push ebp */
  push32((uint32_t)(EBP));
  /* 12416201 mov ebp, esp */
  EBP = (ESP);
  /* 12416203 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416205 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416207 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241620a push eax */
  push32((uint32_t)(EAX));
  /* 1241620b call 0x12416260 */
  push32(0x12416210u); f_12416260();
  /* 12416210 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416213 pop ebp */
  EBP = (pop32());
  /* 12416214 ret  */
  ESPCHK(0x12416200u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x12416220 (19 bytes, 9 insns) */
void f_12416220(void) {
  FTRACE(0x12416220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416220 push ebp */
  push32((uint32_t)(EBP));
  /* 12416221 mov ebp, esp */
  EBP = (ESP);
  /* 12416223 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416225 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416227 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416229 call 0x12416260 */
  push32(0x1241622eu); f_12416260();
  /* 1241622e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416231 pop ebp */
  EBP = (pop32());
  /* 12416232 ret  */
  ESPCHK(0x12416220u, _esp0);
  ESP += 4; return;
}

/* FUN_10006240 @ 0x12416240 (19 bytes, 9 insns) */
void f_12416240(void) {
  FTRACE(0x12416240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416240 push ebp */
  push32((uint32_t)(EBP));
  /* 12416241 mov ebp, esp */
  EBP = (ESP);
  /* 12416243 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416245 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416247 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416249 call 0x12416260 */
  push32(0x1241624eu); f_12416260();
  /* 1241624e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416251 pop ebp */
  EBP = (pop32());
  /* 12416252 ret  */
  ESPCHK(0x12416240u, _esp0);
  ESP += 4; return;
}

/* FUN_10006260 @ 0x12416260 (227 bytes, 61 insns) */
void f_12416260(void) {
  FTRACE(0x12416260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416260 push ebp */
  push32((uint32_t)(EBP));
  /* 12416261 mov ebp, esp */
  EBP = (ESP);
  /* 12416263 push ecx */
  push32((uint32_t)(ECX));
  /* 12416264 call 0x12416350 */
  push32(0x12416269u); f_12416350();
  /* 12416269 cmp dword ptr [0x12442868], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442868))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416270 jne 0x12416283 */
  if (!C.zf) goto L_12416283;
  /* 12416272 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416275 push eax */
  push32((uint32_t)(EAX));
  /* 12416276 call dword ptr [0x12445380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445380))), 0x1241627cu);
  /* 1241627c push eax */
  push32((uint32_t)(EAX));
  /* 1241627d call dword ptr [0x1244537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244537c))), 0x12416283u);
L_12416283:;
  /* 12416283 mov dword ptr [0x12442864], 1 */
  w32((uint32_t)(0x12442864), (0x1u));
  /* 1241628d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12416290 mov byte ptr [0x12442860], cl */
  w8((uint32_t)(0x12442860), (CL));
  /* 12416296 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241629a jne 0x124162e3 */
  if (!C.zf) goto L_124162e3;
  /* 1241629c cmp dword ptr [0x12444358], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12444358))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124162a3 je 0x124162d1 */
  if (C.zf) goto L_124162d1;
  /* 124162a5 mov edx, dword ptr [0x12444354] */
  EDX = (r32((uint32_t)(0x12444354)));
  /* 124162ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124162ae:;
  /* 124162ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124162b1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124162b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124162b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124162ba cmp ecx, dword ptr [0x12444358] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12444358))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124162c0 jb 0x124162d1 */
  if (C.cf) goto L_124162d1;
  /* 124162c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124162c5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124162c8 je 0x124162cf */
  if (C.zf) goto L_124162cf;
  /* 124162ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124162cd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x124162cfu);
L_124162cf:;
  /* 124162cf jmp 0x124162ae */
  goto L_124162ae;
L_124162d1:;
  /* 124162d1 push 0x12440724 */
  push32((uint32_t)(0x12440724u));
  /* 124162d6 push 0x1244051c */
  push32((uint32_t)(0x1244051cu));
  /* 124162db call 0x12416370 */
  push32(0x124162e0u); f_12416370();
  /* 124162e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124162e3:;
  /* 124162e3 push 0x1244092c */
  push32((uint32_t)(0x1244092cu));
  /* 124162e8 push 0x12440828 */
  push32((uint32_t)(0x12440828u));
  /* 124162ed call 0x12416370 */
  push32(0x124162f2u); f_12416370();
  /* 124162f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124162f5 cmp dword ptr [0x1244286c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1244286c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124162fc jne 0x1241631e */
  if (!C.zf) goto L_1241631e;
  /* 124162fe push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12416300 call 0x12417f50 */
  push32(0x12416305u); f_12417f50();
  /* 12416305 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416308 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1241630b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241630d je 0x1241631e */
  if (C.zf) goto L_1241631e;
  /* 1241630f mov dword ptr [0x1244286c], 1 */
  w32((uint32_t)(0x1244286c), (0x1u));
  /* 12416319 call 0x12418860 */
  push32(0x1241631eu); f_12418860();
L_1241631e:;
  /* 1241631e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416322 je 0x1241632b */
  if (C.zf) goto L_1241632b;
  /* 12416324 call 0x12416360 */
  push32(0x12416329u); f_12416360();
  /* 12416329 jmp 0x1241633f */
  goto L_1241633f;
L_1241632b:;
  /* 1241632b mov dword ptr [0x12442868], 1 */
  w32((uint32_t)(0x12442868), (0x1u));
  /* 12416335 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416338 push ecx */
  push32((uint32_t)(ECX));
  /* 12416339 call dword ptr [0x12445378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445378))), 0x1241633fu);
L_1241633f:;
  /* 1241633f mov esp, ebp */
  ESP = (EBP);
  /* 12416341 pop ebp */
  EBP = (pop32());
  /* 12416342 ret  */
  ESPCHK(0x12416260u, _esp0);
  ESP += 4; return;
}

/* FUN_10006350 @ 0x12416350 (15 bytes, 7 insns) */
void f_12416350(void) {
  FTRACE(0x12416350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416350 push ebp */
  push32((uint32_t)(EBP));
  /* 12416351 mov ebp, esp */
  EBP = (ESP);
  /* 12416353 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12416355 call 0x1241a440 */
  push32(0x1241635au); f_1241a440();
  /* 1241635a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241635d pop ebp */
  EBP = (pop32());
  /* 1241635e ret  */
  ESPCHK(0x12416350u, _esp0);
  ESP += 4; return;
}

/* FUN_10006360 @ 0x12416360 (15 bytes, 7 insns) */
void f_12416360(void) {
  FTRACE(0x12416360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416360 push ebp */
  push32((uint32_t)(EBP));
  /* 12416361 mov ebp, esp */
  EBP = (ESP);
  /* 12416363 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12416365 call 0x1241a4e0 */
  push32(0x1241636au); f_1241a4e0();
  /* 1241636a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241636d pop ebp */
  EBP = (pop32());
  /* 1241636e ret  */
  ESPCHK(0x12416360u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12416370 (37 bytes, 16 insns) */
void f_12416370(void) {
  FTRACE(0x12416370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416370 push ebp */
  push32((uint32_t)(EBP));
  /* 12416371 mov ebp, esp */
  EBP = (ESP);
L_12416373:;
  /* 12416373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416376 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416379 jae 0x12416393 */
  if (!C.cf) goto L_12416393;
  /* 1241637b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241637e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416381 je 0x12416388 */
  if (C.zf) goto L_12416388;
  /* 12416383 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416386 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12416388u);
L_12416388:;
  /* 12416388 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241638b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241638e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12416391 jmp 0x12416373 */
  goto L_12416373;
L_12416393:;
  /* 12416393 pop ebp */
  EBP = (pop32());
  /* 12416394 ret  */
  ESPCHK(0x12416370u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x124163a0 (130 bytes, 42 insns) */
void f_124163a0(void) {
  FTRACE(0x124163a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124163a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124163a1 mov ebp, esp */
  EBP = (ESP);
  /* 124163a3 push ecx */
  push32((uint32_t)(ECX));
  /* 124163a4 call 0x1241a360 */
  push32(0x124163a9u); f_1241a360();
  /* 124163a9 call dword ptr [0x124452ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452ac))), 0x124163afu);
  /* 124163af mov dword ptr [0x12440a5c], eax */
  w32((uint32_t)(0x12440a5c), (EAX));
  /* 124163b4 cmp dword ptr [0x12440a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12440a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124163bb jne 0x124163c1 */
  if (!C.zf) goto L_124163c1;
  /* 124163bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124163bf jmp 0x1241641e */
  goto L_1241641e;
L_124163c1:;
  /* 124163c1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 124163c3 push 0x1243da3c */
  push32((uint32_t)(0x1243da3cu));
  /* 124163c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 124163ca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 124163cc push 1 */
  push32((uint32_t)(0x1u));
  /* 124163ce call 0x12416e50 */
  push32(0x124163d3u); f_12416e50();
  /* 124163d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124163d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124163d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124163dd je 0x124163f4 */
  if (C.zf) goto L_124163f4;
  /* 124163df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124163e2 push eax */
  push32((uint32_t)(EAX));
  /* 124163e3 mov ecx, dword ptr [0x12440a5c] */
  ECX = (r32((uint32_t)(0x12440a5c)));
  /* 124163e9 push ecx */
  push32((uint32_t)(ECX));
  /* 124163ea call dword ptr [0x124452b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452b0))), 0x124163f0u);
  /* 124163f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124163f2 jne 0x124163f8 */
  if (!C.zf) goto L_124163f8;
L_124163f4:;
  /* 124163f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124163f6 jmp 0x1241641e */
  goto L_1241641e;
L_124163f8:;
  /* 124163f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124163fb push edx */
  push32((uint32_t)(EDX));
  /* 124163fc call 0x12416460 */
  push32(0x12416401u); f_12416460();
  /* 12416401 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416404 call dword ptr [0x12445384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445384))), 0x1241640au);
  /* 1241640a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241640d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1241640f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416412 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12416419 mov eax, 1 */
  EAX = (0x1u);
L_1241641e:;
  /* 1241641e mov esp, ebp */
  ESP = (EBP);
  /* 12416420 pop ebp */
  EBP = (pop32());
  /* 12416421 ret  */
  ESPCHK(0x124163a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006430 @ 0x12416430 (41 bytes, 11 insns) */
void f_12416430(void) {
  FTRACE(0x12416430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416430 push ebp */
  push32((uint32_t)(EBP));
  /* 12416431 mov ebp, esp */
  EBP = (ESP);
  /* 12416433 call 0x1241a3a0 */
  push32(0x12416438u); f_1241a3a0();
  /* 12416438 cmp dword ptr [0x12440a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12440a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241643f je 0x12416457 */
  if (C.zf) goto L_12416457;
  /* 12416441 mov eax, dword ptr [0x12440a5c] */
  EAX = (r32((uint32_t)(0x12440a5c)));
  /* 12416446 push eax */
  push32((uint32_t)(EAX));
  /* 12416447 call dword ptr [0x12445390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445390))), 0x1241644du);
  /* 1241644d mov dword ptr [0x12440a5c], 0xffffffff */
  w32((uint32_t)(0x12440a5c), (0xffffffffu));
L_12416457:;
  /* 12416457 pop ebp */
  EBP = (pop32());
  /* 12416458 ret  */
  ESPCHK(0x12416430u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x12416460 (25 bytes, 8 insns) */
void f_12416460(void) {
  FTRACE(0x12416460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416460 push ebp */
  push32((uint32_t)(EBP));
  /* 12416461 mov ebp, esp */
  EBP = (ESP);
  /* 12416463 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416466 mov dword ptr [eax + 0x50], 0x12440c00 */
  w32((uint32_t)(EAX + 0x50), (0x12440c00u));
  /* 1241646d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416470 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12416477 pop ebp */
  EBP = (pop32());
  /* 12416478 ret  */
  ESPCHK(0x12416460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006480 @ 0x12416480 (152 bytes, 48 insns) */
void f_12416480(void) {
  FTRACE(0x12416480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416480 push ebp */
  push32((uint32_t)(EBP));
  /* 12416481 mov ebp, esp */
  EBP = (ESP);
  /* 12416483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12416486 call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x1241648cu);
  /* 1241648c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241648f mov eax, dword ptr [0x12440a5c] */
  EAX = (r32((uint32_t)(0x12440a5c)));
  /* 12416494 push eax */
  push32((uint32_t)(EAX));
  /* 12416495 call dword ptr [0x12445398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445398))), 0x1241649bu);
  /* 1241649b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241649e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124164a2 jne 0x12416507 */
  if (!C.zf) goto L_12416507;
  /* 124164a4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 124164a9 push 0x1243da3c */
  push32((uint32_t)(0x1243da3cu));
  /* 124164ae push 2 */
  push32((uint32_t)(0x2u));
  /* 124164b0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 124164b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 124164b4 call 0x12416e50 */
  push32(0x124164b9u); f_12416e50();
  /* 124164b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124164bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124164bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124164c3 je 0x124164fd */
  if (C.zf) goto L_124164fd;
  /* 124164c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124164c8 push ecx */
  push32((uint32_t)(ECX));
  /* 124164c9 mov edx, dword ptr [0x12440a5c] */
  EDX = (r32((uint32_t)(0x12440a5c)));
  /* 124164cf push edx */
  push32((uint32_t)(EDX));
  /* 124164d0 call dword ptr [0x124452b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452b0))), 0x124164d6u);
  /* 124164d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124164d8 je 0x124164fd */
  if (C.zf) goto L_124164fd;
  /* 124164da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124164dd push eax */
  push32((uint32_t)(EAX));
  /* 124164de call 0x12416460 */
  push32(0x124164e3u); f_12416460();
  /* 124164e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124164e6 call dword ptr [0x12445384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445384))), 0x124164ecu);
  /* 124164ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124164ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 124164f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124164f4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 124164fb jmp 0x12416507 */
  goto L_12416507;
L_124164fd:;
  /* 124164fd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 124164ff call 0x124159b0 */
  push32(0x12416504u); f_124159b0();
  /* 12416504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12416507:;
  /* 12416507 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241650a push eax */
  push32((uint32_t)(EAX));
  /* 1241650b call dword ptr [0x12445394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445394))), 0x12416511u);
  /* 12416511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416514 mov esp, ebp */
  ESP = (EBP);
  /* 12416516 pop ebp */
  EBP = (pop32());
  /* 12416517 ret  */
  ESPCHK(0x12416480u, _esp0);
  ESP += 4; return;
}

/* FUN_10006520 @ 0x12416520 (263 bytes, 86 insns) */
void f_12416520(void) {
  FTRACE(0x12416520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416520 push ebp */
  push32((uint32_t)(EBP));
  /* 12416521 mov ebp, esp */
  EBP = (ESP);
  /* 12416523 cmp dword ptr [0x12440a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12440a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241652a je 0x12416625 */
  if (C.zf) goto L_12416625;
  /* 12416530 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416534 jne 0x12416545 */
  if (!C.zf) goto L_12416545;
  /* 12416536 mov eax, dword ptr [0x12440a5c] */
  EAX = (r32((uint32_t)(0x12440a5c)));
  /* 1241653b push eax */
  push32((uint32_t)(EAX));
  /* 1241653c call dword ptr [0x12445398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445398))), 0x12416542u);
  /* 12416542 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12416545:;
  /* 12416545 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416549 je 0x12416616 */
  if (C.zf) goto L_12416616;
  /* 1241654f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416552 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416556 je 0x12416569 */
  if (C.zf) goto L_12416569;
  /* 12416558 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241655a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241655d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12416560 push eax */
  push32((uint32_t)(EAX));
  /* 12416561 call 0x124174d0 */
  push32(0x12416566u); f_124174d0();
  /* 12416566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12416569:;
  /* 12416569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241656c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416570 je 0x12416583 */
  if (C.zf) goto L_12416583;
  /* 12416572 push 2 */
  push32((uint32_t)(0x2u));
  /* 12416574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416577 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1241657a push eax */
  push32((uint32_t)(EAX));
  /* 1241657b call 0x124174d0 */
  push32(0x12416580u); f_124174d0();
  /* 12416580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12416583:;
  /* 12416583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416586 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241658a je 0x1241659d */
  if (C.zf) goto L_1241659d;
  /* 1241658c push 2 */
  push32((uint32_t)(0x2u));
  /* 1241658e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416591 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12416594 push eax */
  push32((uint32_t)(EAX));
  /* 12416595 call 0x124174d0 */
  push32(0x1241659au); f_124174d0();
  /* 1241659a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241659d:;
  /* 1241659d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124165a0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124165a4 je 0x124165b7 */
  if (C.zf) goto L_124165b7;
  /* 124165a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 124165a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124165ab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 124165ae push eax */
  push32((uint32_t)(EAX));
  /* 124165af call 0x124174d0 */
  push32(0x124165b4u); f_124174d0();
  /* 124165b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124165b7:;
  /* 124165b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124165ba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124165be je 0x124165d1 */
  if (C.zf) goto L_124165d1;
  /* 124165c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 124165c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124165c5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 124165c8 push eax */
  push32((uint32_t)(EAX));
  /* 124165c9 call 0x124174d0 */
  push32(0x124165ceu); f_124174d0();
  /* 124165ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124165d1:;
  /* 124165d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124165d4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124165d8 je 0x124165eb */
  if (C.zf) goto L_124165eb;
  /* 124165da push 2 */
  push32((uint32_t)(0x2u));
  /* 124165dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124165df mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 124165e2 push eax */
  push32((uint32_t)(EAX));
  /* 124165e3 call 0x124174d0 */
  push32(0x124165e8u); f_124174d0();
  /* 124165e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124165eb:;
  /* 124165eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124165ee cmp dword ptr [ecx + 0x50], 0x12440c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12440c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124165f5 je 0x12416608 */
  if (C.zf) goto L_12416608;
  /* 124165f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124165f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124165fc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 124165ff push eax */
  push32((uint32_t)(EAX));
  /* 12416600 call 0x124174d0 */
  push32(0x12416605u); f_124174d0();
  /* 12416605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12416608:;
  /* 12416608 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241660a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241660d push ecx */
  push32((uint32_t)(ECX));
  /* 1241660e call 0x124174d0 */
  push32(0x12416613u); f_124174d0();
  /* 12416613 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12416616:;
  /* 12416616 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416618 mov edx, dword ptr [0x12440a5c] */
  EDX = (r32((uint32_t)(0x12440a5c)));
  /* 1241661e push edx */
  push32((uint32_t)(EDX));
  /* 1241661f call dword ptr [0x124452b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124452b0))), 0x12416625u);
L_12416625:;
  /* 12416625 pop ebp */
  EBP = (pop32());
  /* 12416626 ret  */
  ESPCHK(0x12416520u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x12416630 (11 bytes, 5 insns) */
void f_12416630(void) {
  FTRACE(0x12416630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416630 push ebp */
  push32((uint32_t)(EBP));
  /* 12416631 mov ebp, esp */
  EBP = (ESP);
  /* 12416633 call dword ptr [0x12445384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445384))), 0x12416639u);
  /* 12416639 pop ebp */
  EBP = (pop32());
  /* 1241663a ret  */
  ESPCHK(0x12416630u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x12416640 (11 bytes, 5 insns) */
void f_12416640(void) {
  FTRACE(0x12416640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416640 push ebp */
  push32((uint32_t)(EBP));
  /* 12416641 mov ebp, esp */
  EBP = (ESP);
  /* 12416643 call dword ptr [0x124453a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453a0))), 0x12416649u);
  /* 12416649 pop ebp */
  EBP = (pop32());
  /* 1241664a ret  */
  ESPCHK(0x12416640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006650 @ 0x12416650 (804 bytes, 236 insns) */
void f_12416650(void) {
  FTRACE(0x12416650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416650 push ebp */
  push32((uint32_t)(EBP));
  /* 12416651 mov ebp, esp */
  EBP = (ESP);
  /* 12416653 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12416656 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1241665b push 0x1243da48 */
  push32((uint32_t)(0x1243da48u));
  /* 12416660 push 2 */
  push32((uint32_t)(0x2u));
  /* 12416662 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12416667 call 0x12416a40 */
  push32(0x1241666cu); f_12416a40();
  /* 1241666c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241666f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12416672 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416676 jne 0x12416682 */
  if (!C.zf) goto L_12416682;
  /* 12416678 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1241667a call 0x124159b0 */
  push32(0x1241667fu); f_124159b0();
  /* 1241667f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12416682:;
  /* 12416682 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12416685 mov dword ptr [0x12444200], eax */
  w32((uint32_t)(0x12444200), (EAX));
  /* 1241668a mov dword ptr [0x1244433c], 0x20 */
  w32((uint32_t)(0x1244433c), (0x20u));
  /* 12416694 jmp 0x1241669f */
  goto L_1241669f;
L_12416696:;
  /* 12416696 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12416699 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241669c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1241669f:;
  /* 1241669f mov edx, dword ptr [0x12444200] */
  EDX = (r32((uint32_t)(0x12444200)));
  /* 124166a5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124166ab cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124166ae jae 0x124166d3 */
  if (!C.cf) goto L_124166d3;
  /* 124166b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 124166b3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 124166b7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 124166ba mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124166c0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124166c3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 124166c7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 124166ca mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 124166d1 jmp 0x12416696 */
  goto L_12416696;
L_124166d3:;
  /* 124166d3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 124166d6 push ecx */
  push32((uint32_t)(ECX));
  /* 124166d7 call dword ptr [0x1244538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244538c))), 0x124166ddu);
  /* 124166dd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 124166e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124166e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124166e8 je 0x12416875 */
  if (C.zf) goto L_12416875;
  /* 124166ee cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124166f2 je 0x12416875 */
  if (C.zf) goto L_12416875;
  /* 124166f8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124166fb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124166fd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12416700 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12416703 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416706 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12416709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241670c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241670f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12416712 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416719 jge 0x12416723 */
  if ((C.sf==C.of)) goto L_12416723;
  /* 1241671b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1241671e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12416721 jmp 0x1241672a */
  goto L_1241672a;
L_12416723:;
  /* 12416723 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1241672a:;
  /* 1241672a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1241672d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12416730 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12416737 jmp 0x12416742 */
  goto L_12416742;
L_12416739:;
  /* 12416739 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1241673c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241673f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12416742:;
  /* 12416742 mov ecx, dword ptr [0x1244433c] */
  ECX = (r32((uint32_t)(0x1244433c)));
  /* 12416748 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241674b jge 0x124167e2 */
  if ((C.sf==C.of)) goto L_124167e2;
  /* 12416751 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12416756 push 0x1243da48 */
  push32((uint32_t)(0x1243da48u));
  /* 1241675b push 2 */
  push32((uint32_t)(0x2u));
  /* 1241675d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12416762 call 0x12416a40 */
  push32(0x12416767u); f_12416a40();
  /* 12416767 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241676a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1241676d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416771 jne 0x1241677e */
  if (!C.zf) goto L_1241677e;
  /* 12416773 mov edx, dword ptr [0x1244433c] */
  EDX = (r32((uint32_t)(0x1244433c)));
  /* 12416779 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1241677c jmp 0x124167e2 */
  goto L_124167e2;
L_1241677e:;
  /* 1241677e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12416781 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12416784 mov dword ptr [eax*4 + 0x12444200], ecx */
  w32((uint32_t)(EAX*4 + 0x12444200), (ECX));
  /* 1241678b mov edx, dword ptr [0x1244433c] */
  EDX = (r32((uint32_t)(0x1244433c)));
  /* 12416791 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416794 mov dword ptr [0x1244433c], edx */
  w32((uint32_t)(0x1244433c), (EDX));
  /* 1241679a jmp 0x124167a5 */
  goto L_124167a5;
L_1241679c:;
  /* 1241679c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1241679f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124167a2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_124167a5:;
  /* 124167a5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 124167a8 mov edx, dword ptr [ecx*4 + 0x12444200] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12444200)));
  /* 124167af add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124167b5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124167b8 jae 0x124167dd */
  if (!C.cf) goto L_124167dd;
  /* 124167ba mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 124167bd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 124167c1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 124167c4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 124167ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124167cd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 124167d1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 124167d4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 124167db jmp 0x1241679c */
  goto L_1241679c;
L_124167dd:;
  /* 124167dd jmp 0x12416739 */
  goto L_12416739;
L_124167e2:;
  /* 124167e2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 124167e9 jmp 0x12416806 */
  goto L_12416806;
L_124167eb:;
  /* 124167eb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 124167ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124167f1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 124167f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124167f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124167fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124167fd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12416800 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416803 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12416806:;
  /* 12416806 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12416809 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241680c jge 0x12416875 */
  if ((C.sf==C.of)) goto L_12416875;
  /* 1241680e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12416811 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416814 je 0x12416870 */
  if (C.zf) goto L_12416870;
  /* 12416816 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416819 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1241681c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1241681f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12416821 je 0x12416870 */
  if (C.zf) goto L_12416870;
  /* 12416823 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416826 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12416829 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1241682c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241682e jne 0x12416840 */
  if (!C.zf) goto L_12416840;
  /* 12416830 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12416833 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12416835 push edx */
  push32((uint32_t)(EDX));
  /* 12416836 call dword ptr [0x124453a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453a8))), 0x1241683cu);
  /* 1241683c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241683e je 0x12416870 */
  if (C.zf) goto L_12416870;
L_12416840:;
  /* 12416840 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12416843 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12416846 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12416849 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1241684c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241684f mov edx, dword ptr [eax*4 + 0x12444200] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 12416856 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416858 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1241685b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1241685e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12416861 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12416863 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12416865 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12416868 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241686b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1241686d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12416870:;
  /* 12416870 jmp 0x124167eb */
  goto L_124167eb;
L_12416875:;
  /* 12416875 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1241687c jmp 0x12416887 */
  goto L_12416887;
L_1241687e:;
  /* 1241687e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12416881 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416884 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12416887:;
  /* 12416887 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241688b jge 0x12416964 */
  if ((C.sf==C.of)) goto L_12416964;
  /* 12416891 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12416894 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12416897 mov edx, dword ptr [0x12444200] */
  EDX = (r32((uint32_t)(0x12444200)));
  /* 1241689d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241689f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 124168a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 124168a5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124168a8 jne 0x12416950 */
  if (!C.zf) goto L_12416950;
  /* 124168ae mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 124168b1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 124168b5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124168b9 jne 0x124168c4 */
  if (!C.zf) goto L_124168c4;
  /* 124168bb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 124168c2 jmp 0x124168d4 */
  goto L_124168d4;
L_124168c4:;
  /* 124168c4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 124168c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124168ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 124168cc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124168ce add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124168d1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_124168d4:;
  /* 124168d4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 124168d7 push eax */
  push32((uint32_t)(EAX));
  /* 124168d8 call dword ptr [0x12445358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445358))), 0x124168deu);
  /* 124168de mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 124168e1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124168e5 je 0x1241693f */
  if (C.zf) goto L_1241693f;
  /* 124168e7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 124168ea push ecx */
  push32((uint32_t)(ECX));
  /* 124168eb call dword ptr [0x124453a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453a8))), 0x124168f1u);
  /* 124168f1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 124168f4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124168f8 je 0x1241693f */
  if (C.zf) goto L_1241693f;
  /* 124168fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124168fd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12416900 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12416902 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12416905 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1241690b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241690e jne 0x12416920 */
  if (!C.zf) goto L_12416920;
  /* 12416910 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12416913 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12416916 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12416918 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1241691b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1241691e jmp 0x1241693d */
  goto L_1241693d;
L_12416920:;
  /* 12416920 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12416923 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12416929 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241692c jne 0x1241693d */
  if (!C.zf) goto L_1241693d;
  /* 1241692e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12416931 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12416934 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12416937 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1241693a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1241693d:;
  /* 1241693d jmp 0x1241694e */
  goto L_1241694e;
L_1241693f:;
  /* 1241693f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12416942 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12416945 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12416948 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1241694b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1241694e:;
  /* 1241694e jmp 0x1241695f */
  goto L_1241695f;
L_12416950:;
  /* 12416950 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12416953 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12416956 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12416959 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1241695c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1241695f:;
  /* 1241695f jmp 0x1241687e */
  goto L_1241687e;
L_12416964:;
  /* 12416964 mov eax, dword ptr [0x1244433c] */
  EAX = (r32((uint32_t)(0x1244433c)));
  /* 12416969 push eax */
  push32((uint32_t)(EAX));
  /* 1241696a call dword ptr [0x124453a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453a4))), 0x12416970u);
  /* 12416970 mov esp, ebp */
  ESP = (EBP);
  /* 12416972 pop ebp */
  EBP = (pop32());
  /* 12416973 ret  */
  ESPCHK(0x12416650u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12416980 (155 bytes, 45 insns) */
void f_12416980(void) {
  FTRACE(0x12416980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416980 push ebp */
  push32((uint32_t)(EBP));
  /* 12416981 mov ebp, esp */
  EBP = (ESP);
  /* 12416983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12416986 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1241698d jmp 0x12416998 */
  goto L_12416998;
L_1241698f:;
  /* 1241698f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12416992 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416995 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12416998:;
  /* 12416998 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241699c jge 0x12416a17 */
  if ((C.sf==C.of)) goto L_12416a17;
  /* 1241699e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124169a1 cmp dword ptr [ecx*4 + 0x12444200], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12444200))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124169a9 je 0x12416a12 */
  if (C.zf) goto L_12416a12;
  /* 124169ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124169ae mov eax, dword ptr [edx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 124169b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124169b8 jmp 0x124169c3 */
  goto L_124169c3;
L_124169ba:;
  /* 124169ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124169bd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124169c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124169c3:;
  /* 124169c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124169c6 mov eax, dword ptr [edx*4 + 0x12444200] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12444200)));
  /* 124169cd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124169d2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124169d5 jae 0x124169ef */
  if (!C.cf) goto L_124169ef;
  /* 124169d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124169da cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124169de je 0x124169ed */
  if (C.zf) goto L_124169ed;
  /* 124169e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124169e3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124169e6 push edx */
  push32((uint32_t)(EDX));
  /* 124169e7 call dword ptr [0x124453b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b0))), 0x124169edu);
L_124169ed:;
  /* 124169ed jmp 0x124169ba */
  goto L_124169ba;
L_124169ef:;
  /* 124169ef push 2 */
  push32((uint32_t)(0x2u));
  /* 124169f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124169f4 mov ecx, dword ptr [eax*4 + 0x12444200] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12444200)));
  /* 124169fb push ecx */
  push32((uint32_t)(ECX));
  /* 124169fc call 0x124174d0 */
  push32(0x12416a01u); f_124174d0();
  /* 12416a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416a04 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12416a07 mov dword ptr [edx*4 + 0x12444200], 0 */
  w32((uint32_t)(EDX*4 + 0x12444200), (0x0u));
L_12416a12:;
  /* 12416a12 jmp 0x1241698f */
  goto L_1241698f;
L_12416a17:;
  /* 12416a17 mov esp, ebp */
  ESP = (EBP);
  /* 12416a19 pop ebp */
  EBP = (pop32());
  /* 12416a1a ret  */
  ESPCHK(0x12416980u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x12416a20 (29 bytes, 13 insns) */
void f_12416a20(void) {
  FTRACE(0x12416a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12416a21 mov ebp, esp */
  EBP = (ESP);
  /* 12416a23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416a27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416a29 mov eax, dword ptr [0x12442a10] */
  EAX = (r32((uint32_t)(0x12442a10)));
  /* 12416a2e push eax */
  push32((uint32_t)(EAX));
  /* 12416a2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416a32 push ecx */
  push32((uint32_t)(ECX));
  /* 12416a33 call 0x12416a90 */
  push32(0x12416a38u); f_12416a90();
  /* 12416a38 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416a3b pop ebp */
  EBP = (pop32());
  /* 12416a3c ret  */
  ESPCHK(0x12416a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x12416a40 (35 bytes, 16 insns) */
void f_12416a40(void) {
  FTRACE(0x12416a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12416a41 mov ebp, esp */
  EBP = (ESP);
  /* 12416a43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416a46 push eax */
  push32((uint32_t)(EAX));
  /* 12416a47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416a4a push ecx */
  push32((uint32_t)(ECX));
  /* 12416a4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416a4e push edx */
  push32((uint32_t)(EDX));
  /* 12416a4f mov eax, dword ptr [0x12442a10] */
  EAX = (r32((uint32_t)(0x12442a10)));
  /* 12416a54 push eax */
  push32((uint32_t)(EAX));
  /* 12416a55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416a58 push ecx */
  push32((uint32_t)(ECX));
  /* 12416a59 call 0x12416a90 */
  push32(0x12416a5eu); f_12416a90();
  /* 12416a5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416a61 pop ebp */
  EBP = (pop32());
  /* 12416a62 ret  */
  ESPCHK(0x12416a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a70 @ 0x12416a70 (27 bytes, 13 insns) */
void f_12416a70(void) {
  FTRACE(0x12416a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12416a71 mov ebp, esp */
  EBP = (ESP);
  /* 12416a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416a79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416a7c push eax */
  push32((uint32_t)(EAX));
  /* 12416a7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416a80 push ecx */
  push32((uint32_t)(ECX));
  /* 12416a81 call 0x12416a90 */
  push32(0x12416a86u); f_12416a90();
  /* 12416a86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416a89 pop ebp */
  EBP = (pop32());
  /* 12416a8a ret  */
  ESPCHK(0x12416a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a90 @ 0x12416a90 (94 bytes, 38 insns) */
void f_12416a90(void) {
  FTRACE(0x12416a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12416a91 mov ebp, esp */
  EBP = (ESP);
  /* 12416a93 push ecx */
  push32((uint32_t)(ECX));
L_12416a94:;
  /* 12416a94 push 9 */
  push32((uint32_t)(0x9u));
  /* 12416a96 call 0x1241a440 */
  push32(0x12416a9bu); f_1241a440();
  /* 12416a9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416a9e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12416aa1 push eax */
  push32((uint32_t)(EAX));
  /* 12416aa2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12416aa6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416aa9 push edx */
  push32((uint32_t)(EDX));
  /* 12416aaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416aad push eax */
  push32((uint32_t)(EAX));
  /* 12416aae call 0x12416b10 */
  push32(0x12416ab3u); f_12416b10();
  /* 12416ab3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416ab6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12416ab9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12416abb call 0x1241a4e0 */
  push32(0x12416ac0u); f_1241a4e0();
  /* 12416ac0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416ac3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416ac7 jne 0x12416acf */
  if (!C.zf) goto L_12416acf;
  /* 12416ac9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416acd jne 0x12416ad4 */
  if (!C.zf) goto L_12416ad4;
L_12416acf:;
  /* 12416acf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416ad2 jmp 0x12416aea */
  goto L_12416aea;
L_12416ad4:;
  /* 12416ad4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416ad7 push ecx */
  push32((uint32_t)(ECX));
  /* 12416ad8 call 0x1241a780 */
  push32(0x12416addu); f_1241a780();
  /* 12416add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416ae2 jne 0x12416ae8 */
  if (!C.zf) goto L_12416ae8;
  /* 12416ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12416ae6 jmp 0x12416aea */
  goto L_12416aea;
L_12416ae8:;
  /* 12416ae8 jmp 0x12416a94 */
  goto L_12416a94;
L_12416aea:;
  /* 12416aea mov esp, ebp */
  ESP = (EBP);
  /* 12416aec pop ebp */
  EBP = (pop32());
  /* 12416aed ret  */
  ESPCHK(0x12416a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006af0 @ 0x12416af0 (23 bytes, 11 insns) */
void f_12416af0(void) {
  FTRACE(0x12416af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12416af1 mov ebp, esp */
  EBP = (ESP);
  /* 12416af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416af9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416afc push eax */
  push32((uint32_t)(EAX));
  /* 12416afd call 0x12416b10 */
  push32(0x12416b02u); f_12416b10();
  /* 12416b02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416b05 pop ebp */
  EBP = (pop32());
  /* 12416b06 ret  */
  ESPCHK(0x12416af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b10 @ 0x12416b10 (787 bytes, 254 insns) */
void f_12416b10(void) {
  FTRACE(0x12416b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12416b11 mov ebp, esp */
  EBP = (ESP);
  /* 12416b13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12416b16 push ebx */
  push32((uint32_t)(EBX));
  /* 12416b17 push esi */
  push32((uint32_t)(ESI));
  /* 12416b18 push edi */
  push32((uint32_t)(EDI));
  /* 12416b19 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12416b20 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 12416b25 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12416b28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416b2a je 0x12416b5c */
  if (C.zf) goto L_12416b5c;
L_12416b2c:;
  /* 12416b2c call 0x12417be0 */
  push32(0x12416b31u); f_12417be0();
  /* 12416b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416b33 jne 0x12416b56 */
  if (!C.zf) goto L_12416b56;
  /* 12416b35 push 0x1243db3c */
  push32((uint32_t)(0x1243db3cu));
  /* 12416b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12416b3c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12416b41 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12416b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12416b48 call 0x12415b00 */
  push32(0x12416b4du); f_12415b00();
  /* 12416b4d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416b50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416b53 jne 0x12416b56 */
  if (!C.zf) goto L_12416b56;
  /* 12416b55 int3  */
  x86_unimpl("int3 @ 0x12416b55");
L_12416b56:;
  /* 12416b56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12416b58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12416b5a jne 0x12416b2c */
  if (!C.zf) goto L_12416b2c;
L_12416b5c:;
  /* 12416b5c mov edx, dword ptr [0x12440a88] */
  EDX = (r32((uint32_t)(0x12440a88)));
  /* 12416b62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12416b65 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12416b68 cmp eax, dword ptr [0x12440a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12440a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416b6e jne 0x12416b71 */
  if (!C.zf) goto L_12416b71;
  /* 12416b70 int3  */
  x86_unimpl("int3 @ 0x12416b70");
L_12416b71:;
  /* 12416b71 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416b74 push ecx */
  push32((uint32_t)(ECX));
  /* 12416b75 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416b78 push edx */
  push32((uint32_t)(EDX));
  /* 12416b79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12416b7c push eax */
  push32((uint32_t)(EAX));
  /* 12416b7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416b80 push ecx */
  push32((uint32_t)(ECX));
  /* 12416b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416b84 push edx */
  push32((uint32_t)(EDX));
  /* 12416b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416b87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416b89 call dword ptr [0x12440c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12440c90))), 0x12416b8fu);
  /* 12416b8f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416b94 jne 0x12416bf4 */
  if (!C.zf) goto L_12416bf4;
  /* 12416b96 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416b9a je 0x12416bc7 */
  if (C.zf) goto L_12416bc7;
L_12416b9c:;
  /* 12416b9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416b9f push eax */
  push32((uint32_t)(EAX));
  /* 12416ba0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12416ba4 push 0x1243daf8 */
  push32((uint32_t)(0x1243daf8u));
  /* 12416ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416bab push 0 */
  push32((uint32_t)(0x0u));
  /* 12416bad push 0 */
  push32((uint32_t)(0x0u));
  /* 12416baf push 0 */
  push32((uint32_t)(0x0u));
  /* 12416bb1 call 0x12415b00 */
  push32(0x12416bb6u); f_12415b00();
  /* 12416bb6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416bb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416bbc jne 0x12416bbf */
  if (!C.zf) goto L_12416bbf;
  /* 12416bbe int3  */
  x86_unimpl("int3 @ 0x12416bbe");
L_12416bbf:;
  /* 12416bbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12416bc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12416bc3 jne 0x12416b9c */
  if (!C.zf) goto L_12416b9c;
  /* 12416bc5 jmp 0x12416bed */
  goto L_12416bed;
L_12416bc7:;
  /* 12416bc7 push 0x1243dad4 */
  push32((uint32_t)(0x1243dad4u));
  /* 12416bcc push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12416bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416bd9 call 0x12415b00 */
  push32(0x12416bdeu); f_12415b00();
  /* 12416bde add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416be1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416be4 jne 0x12416be7 */
  if (!C.zf) goto L_12416be7;
  /* 12416be6 int3  */
  x86_unimpl("int3 @ 0x12416be6");
L_12416be7:;
  /* 12416be7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12416be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416beb jne 0x12416bc7 */
  if (!C.zf) goto L_12416bc7;
L_12416bed:;
  /* 12416bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12416bef jmp 0x12416e1c */
  goto L_12416e1c;
L_12416bf4:;
  /* 12416bf4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416bf7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12416bfd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c00 je 0x12416c16 */
  if (C.zf) goto L_12416c16;
  /* 12416c02 mov edx, dword ptr [0x12440a84] */
  EDX = (r32((uint32_t)(0x12440a84)));
  /* 12416c08 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12416c0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12416c0d jne 0x12416c16 */
  if (!C.zf) goto L_12416c16;
  /* 12416c0f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12416c16:;
  /* 12416c16 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c1a ja 0x12416c27 */
  if ((!C.cf&&!C.zf)) goto L_12416c27;
  /* 12416c1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416c1f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416c22 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c25 jbe 0x12416c53 */
  if ((C.cf||C.zf)) goto L_12416c53;
L_12416c27:;
  /* 12416c27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416c2a push ecx */
  push32((uint32_t)(ECX));
  /* 12416c2b push 0x1243daac */
  push32((uint32_t)(0x1243daacu));
  /* 12416c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416c36 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416c38 call 0x12415b00 */
  push32(0x12416c3du); f_12415b00();
  /* 12416c3d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416c40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c43 jne 0x12416c46 */
  if (!C.zf) goto L_12416c46;
  /* 12416c45 int3  */
  x86_unimpl("int3 @ 0x12416c45");
L_12416c46:;
  /* 12416c46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12416c48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12416c4a jne 0x12416c27 */
  if (!C.zf) goto L_12416c27;
  /* 12416c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12416c4e jmp 0x12416e1c */
  goto L_12416e1c;
L_12416c53:;
  /* 12416c53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416c56 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12416c5b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c5e je 0x12416ca0 */
  if (C.zf) goto L_12416ca0;
  /* 12416c60 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c64 je 0x12416ca0 */
  if (C.zf) goto L_12416ca0;
  /* 12416c66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416c69 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12416c6f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c72 je 0x12416ca0 */
  if (C.zf) goto L_12416ca0;
  /* 12416c74 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c78 je 0x12416ca0 */
  if (C.zf) goto L_12416ca0;
L_12416c7a:;
  /* 12416c7a push 0x1243da78 */
  push32((uint32_t)(0x1243da78u));
  /* 12416c7f push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12416c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416c8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12416c8c call 0x12415b00 */
  push32(0x12416c91u); f_12415b00();
  /* 12416c91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416c94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416c97 jne 0x12416c9a */
  if (!C.zf) goto L_12416c9a;
  /* 12416c99 int3  */
  x86_unimpl("int3 @ 0x12416c99");
L_12416c9a:;
  /* 12416c9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12416c9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12416c9e jne 0x12416c7a */
  if (!C.zf) goto L_12416c7a;
L_12416ca0:;
  /* 12416ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416ca3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416ca6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12416ca9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12416cac push ecx */
  push32((uint32_t)(ECX));
  /* 12416cad call 0x1241a890 */
  push32(0x12416cb2u); f_1241a890();
  /* 12416cb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416cb5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12416cb8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416cbc jne 0x12416cc5 */
  if (!C.zf) goto L_12416cc5;
  /* 12416cbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12416cc0 jmp 0x12416e1c */
  goto L_12416e1c;
L_12416cc5:;
  /* 12416cc5 mov edx, dword ptr [0x12440a88] */
  EDX = (r32((uint32_t)(0x12440a88)));
  /* 12416ccb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416cce mov dword ptr [0x12440a88], edx */
  w32((uint32_t)(0x12440a88), (EDX));
  /* 12416cd4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416cd8 je 0x12416d23 */
  if (C.zf) goto L_12416d23;
  /* 12416cda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416cdd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12416ce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416ce6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12416ced mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416cf0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12416cf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416cfa mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12416d01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416d07 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12416d0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d0d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12416d14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d17 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12416d1e jmp 0x12416dc3 */
  goto L_12416dc3;
L_12416d23:;
  /* 12416d23 mov edx, dword ptr [0x12442874] */
  EDX = (r32((uint32_t)(0x12442874)));
  /* 12416d29 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416d2c mov dword ptr [0x12442874], edx */
  w32((uint32_t)(0x12442874), (EDX));
  /* 12416d32 mov eax, dword ptr [0x1244287c] */
  EAX = (r32((uint32_t)(0x1244287c)));
  /* 12416d37 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416d3a mov dword ptr [0x1244287c], eax */
  w32((uint32_t)(0x1244287c), (EAX));
  /* 12416d3f mov ecx, dword ptr [0x1244287c] */
  ECX = (r32((uint32_t)(0x1244287c)));
  /* 12416d45 cmp ecx, dword ptr [0x12442880] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12442880))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416d4b jbe 0x12416d59 */
  if ((C.cf||C.zf)) goto L_12416d59;
  /* 12416d4d mov edx, dword ptr [0x1244287c] */
  EDX = (r32((uint32_t)(0x1244287c)));
  /* 12416d53 mov dword ptr [0x12442880], edx */
  w32((uint32_t)(0x12442880), (EDX));
L_12416d59:;
  /* 12416d59 cmp dword ptr [0x12442878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416d60 je 0x12416d6f */
  if (C.zf) goto L_12416d6f;
  /* 12416d62 mov eax, dword ptr [0x12442878] */
  EAX = (r32((uint32_t)(0x12442878)));
  /* 12416d67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d6a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12416d6d jmp 0x12416d78 */
  goto L_12416d78;
L_12416d6f:;
  /* 12416d6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d72 mov dword ptr [0x12442870], edx */
  w32((uint32_t)(0x12442870), (EDX));
L_12416d78:;
  /* 12416d78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d7b mov ecx, dword ptr [0x12442878] */
  ECX = (r32((uint32_t)(0x12442878)));
  /* 12416d81 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12416d83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d86 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12416d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416d93 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12416d96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416d99 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416d9c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12416d9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416da2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416da5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12416da8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416dab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416dae mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12416db1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416db4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12416db7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12416dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416dbd mov dword ptr [0x12442878], ecx */
  w32((uint32_t)(0x12442878), (ECX));
L_12416dc3:;
  /* 12416dc3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12416dc5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12416dc7 mov dl, byte ptr [0x12440a90] */
  DL = (r8((uint32_t)(0x12440a90)));
  /* 12416dcd push edx */
  push32((uint32_t)(EDX));
  /* 12416dce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416dd1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416dd4 push eax */
  push32((uint32_t)(EAX));
  /* 12416dd5 call 0x1241a7b0 */
  push32(0x12416ddau); f_1241a7b0();
  /* 12416dda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416ddd push 4 */
  push32((uint32_t)(0x4u));
  /* 12416ddf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12416de1 mov cl, byte ptr [0x12440a90] */
  CL = (r8((uint32_t)(0x12440a90)));
  /* 12416de7 push ecx */
  push32((uint32_t)(ECX));
  /* 12416de8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416deb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416dee lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12416df2 push ecx */
  push32((uint32_t)(ECX));
  /* 12416df3 call 0x1241a7b0 */
  push32(0x12416df8u); f_1241a7b0();
  /* 12416df8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416dfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416dfe push edx */
  push32((uint32_t)(EDX));
  /* 12416dff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12416e01 mov al, byte ptr [0x12440a92] */
  AL = (r8((uint32_t)(0x12440a92)));
  /* 12416e06 push eax */
  push32((uint32_t)(EAX));
  /* 12416e07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416e0a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416e0d push ecx */
  push32((uint32_t)(ECX));
  /* 12416e0e call 0x1241a7b0 */
  push32(0x12416e13u); f_1241a7b0();
  /* 12416e13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416e16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416e19 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12416e1c:;
  /* 12416e1c pop edi */
  EDI = (pop32());
  /* 12416e1d pop esi */
  ESI = (pop32());
  /* 12416e1e pop ebx */
  EBX = (pop32());
  /* 12416e1f mov esp, ebp */
  ESP = (EBP);
  /* 12416e21 pop ebp */
  EBP = (pop32());
  /* 12416e22 ret  */
  ESPCHK(0x12416b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x12416e30 (27 bytes, 13 insns) */
void f_12416e30(void) {
  FTRACE(0x12416e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12416e31 mov ebp, esp */
  EBP = (ESP);
  /* 12416e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416e37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416e39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416e3c push eax */
  push32((uint32_t)(EAX));
  /* 12416e3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416e40 push ecx */
  push32((uint32_t)(ECX));
  /* 12416e41 call 0x12416e50 */
  push32(0x12416e46u); f_12416e50();
  /* 12416e46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416e49 pop ebp */
  EBP = (pop32());
  /* 12416e4a ret  */
  ESPCHK(0x12416e30u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12416e50 (96 bytes, 37 insns) */
void f_12416e50(void) {
  FTRACE(0x12416e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12416e51 mov ebp, esp */
  EBP = (ESP);
  /* 12416e53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12416e56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416e59 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12416e5d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12416e60 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12416e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12416e64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416e67 push edx */
  push32((uint32_t)(EDX));
  /* 12416e68 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416e6b push eax */
  push32((uint32_t)(EAX));
  /* 12416e6c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416e6f push ecx */
  push32((uint32_t)(ECX));
  /* 12416e70 call 0x12416a40 */
  push32(0x12416e75u); f_12416a40();
  /* 12416e75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416e78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12416e7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416e7f je 0x12416ea9 */
  if (C.zf) goto L_12416ea9;
  /* 12416e81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12416e84 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12416e87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12416e8a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416e8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12416e90:;
  /* 12416e90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12416e93 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416e96 jae 0x12416ea9 */
  if (!C.cf) goto L_12416ea9;
  /* 12416e98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12416e9b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12416e9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12416ea1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12416ea4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12416ea7 jmp 0x12416e90 */
  goto L_12416e90;
L_12416ea9:;
  /* 12416ea9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12416eac mov esp, ebp */
  ESP = (EBP);
  /* 12416eae pop ebp */
  EBP = (pop32());
  /* 12416eaf ret  */
  ESPCHK(0x12416e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006eb0 @ 0x12416eb0 (27 bytes, 13 insns) */
void f_12416eb0(void) {
  FTRACE(0x12416eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12416eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12416eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416eb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12416eb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416ebc push eax */
  push32((uint32_t)(EAX));
  /* 12416ebd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416ec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12416ec1 call 0x12416ed0 */
  push32(0x12416ec6u); f_12416ed0();
  /* 12416ec6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416ec9 pop ebp */
  EBP = (pop32());
  /* 12416eca ret  */
  ESPCHK(0x12416eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ed0 @ 0x12416ed0 (64 bytes, 27 insns) */
void f_12416ed0(void) {
  FTRACE(0x12416ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12416ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12416ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 12416ed4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12416ed6 call 0x1241a440 */
  push32(0x12416edbu); f_1241a440();
  /* 12416edb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416ede push 1 */
  push32((uint32_t)(0x1u));
  /* 12416ee0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12416ee3 push eax */
  push32((uint32_t)(EAX));
  /* 12416ee4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 12416ee8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416eeb push edx */
  push32((uint32_t)(EDX));
  /* 12416eec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416eef push eax */
  push32((uint32_t)(EAX));
  /* 12416ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 12416ef4 call 0x12416f10 */
  push32(0x12416ef9u); f_12416f10();
  /* 12416ef9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416efc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12416eff push 9 */
  push32((uint32_t)(0x9u));
  /* 12416f01 call 0x1241a4e0 */
  push32(0x12416f06u); f_1241a4e0();
  /* 12416f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416f09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12416f0c mov esp, ebp */
  ESP = (EBP);
  /* 12416f0e pop ebp */
  EBP = (pop32());
  /* 12416f0f ret  */
  ESPCHK(0x12416ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x12416f10 (1297 bytes, 431 insns) */
void f_12416f10(void) {
  FTRACE(0x12416f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12416f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12416f11 mov ebp, esp */
  EBP = (ESP);
  /* 12416f13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12416f16 push ebx */
  push32((uint32_t)(EBX));
  /* 12416f17 push esi */
  push32((uint32_t)(ESI));
  /* 12416f18 push edi */
  push32((uint32_t)(EDI));
  /* 12416f19 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12416f20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416f24 jne 0x12416f43 */
  if (!C.zf) goto L_12416f43;
  /* 12416f26 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12416f29 push eax */
  push32((uint32_t)(EAX));
  /* 12416f2a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416f2d push ecx */
  push32((uint32_t)(ECX));
  /* 12416f2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416f31 push edx */
  push32((uint32_t)(EDX));
  /* 12416f32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416f35 push eax */
  push32((uint32_t)(EAX));
  /* 12416f36 call 0x12416a40 */
  push32(0x12416f3bu); f_12416a40();
  /* 12416f3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416f3e jmp 0x1241741a */
  goto L_1241741a;
L_12416f43:;
  /* 12416f43 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416f47 je 0x12416f66 */
  if (C.zf) goto L_12416f66;
  /* 12416f49 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416f4d jne 0x12416f66 */
  if (!C.zf) goto L_12416f66;
  /* 12416f4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416f52 push ecx */
  push32((uint32_t)(ECX));
  /* 12416f53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416f56 push edx */
  push32((uint32_t)(EDX));
  /* 12416f57 call 0x124174d0 */
  push32(0x12416f5cu); f_124174d0();
  /* 12416f5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416f5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12416f61 jmp 0x1241741a */
  goto L_1241741a;
L_12416f66:;
  /* 12416f66 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 12416f6b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12416f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416f70 je 0x12416fa2 */
  if (C.zf) goto L_12416fa2;
L_12416f72:;
  /* 12416f72 call 0x12417be0 */
  push32(0x12416f77u); f_12417be0();
  /* 12416f77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416f79 jne 0x12416f9c */
  if (!C.zf) goto L_12416f9c;
  /* 12416f7b push 0x1243db3c */
  push32((uint32_t)(0x1243db3cu));
  /* 12416f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416f82 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12416f87 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12416f8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12416f8e call 0x12415b00 */
  push32(0x12416f93u); f_12415b00();
  /* 12416f93 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416f96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416f99 jne 0x12416f9c */
  if (!C.zf) goto L_12416f9c;
  /* 12416f9b int3  */
  x86_unimpl("int3 @ 0x12416f9b");
L_12416f9c:;
  /* 12416f9c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12416f9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12416fa0 jne 0x12416f72 */
  if (!C.zf) goto L_12416f72;
L_12416fa2:;
  /* 12416fa2 mov edx, dword ptr [0x12440a88] */
  EDX = (r32((uint32_t)(0x12440a88)));
  /* 12416fa8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12416fab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12416fae cmp eax, dword ptr [0x12440a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12440a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416fb4 jne 0x12416fb7 */
  if (!C.zf) goto L_12416fb7;
  /* 12416fb6 int3  */
  x86_unimpl("int3 @ 0x12416fb6");
L_12416fb7:;
  /* 12416fb7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12416fba push ecx */
  push32((uint32_t)(ECX));
  /* 12416fbb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416fbe push edx */
  push32((uint32_t)(EDX));
  /* 12416fbf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12416fc2 push eax */
  push32((uint32_t)(EAX));
  /* 12416fc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12416fc6 push ecx */
  push32((uint32_t)(ECX));
  /* 12416fc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12416fca push edx */
  push32((uint32_t)(EDX));
  /* 12416fcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12416fce push eax */
  push32((uint32_t)(EAX));
  /* 12416fcf push 2 */
  push32((uint32_t)(0x2u));
  /* 12416fd1 call dword ptr [0x12440c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12440c90))), 0x12416fd7u);
  /* 12416fd7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12416fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12416fdc jne 0x1241703c */
  if (!C.zf) goto L_1241703c;
  /* 12416fde cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12416fe2 je 0x1241700f */
  if (C.zf) goto L_1241700f;
L_12416fe4:;
  /* 12416fe4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12416fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 12416fe8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12416feb push edx */
  push32((uint32_t)(EDX));
  /* 12416fec push 0x1243dcb8 */
  push32((uint32_t)(0x1243dcb8u));
  /* 12416ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416ff3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416ff5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12416ff9 call 0x12415b00 */
  push32(0x12416ffeu); f_12415b00();
  /* 12416ffe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417001 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417004 jne 0x12417007 */
  if (!C.zf) goto L_12417007;
  /* 12417006 int3  */
  x86_unimpl("int3 @ 0x12417006");
L_12417007:;
  /* 12417007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417009 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241700b jne 0x12416fe4 */
  if (!C.zf) goto L_12416fe4;
  /* 1241700d jmp 0x12417035 */
  goto L_12417035;
L_1241700f:;
  /* 1241700f push 0x1243dc94 */
  push32((uint32_t)(0x1243dc94u));
  /* 12417014 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12417019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241701b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241701d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241701f push 0 */
  push32((uint32_t)(0x0u));
  /* 12417021 call 0x12415b00 */
  push32(0x12417026u); f_12415b00();
  /* 12417026 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417029 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241702c jne 0x1241702f */
  if (!C.zf) goto L_1241702f;
  /* 1241702e int3  */
  x86_unimpl("int3 @ 0x1241702e");
L_1241702f:;
  /* 1241702f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417031 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417033 jne 0x1241700f */
  if (!C.zf) goto L_1241700f;
L_12417035:;
  /* 12417035 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417037 jmp 0x1241741a */
  goto L_1241741a;
L_1241703c:;
  /* 1241703c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417040 jbe 0x1241706e */
  if ((C.cf||C.zf)) goto L_1241706e;
L_12417042:;
  /* 12417042 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417045 push edx */
  push32((uint32_t)(EDX));
  /* 12417046 push 0x1243dc64 */
  push32((uint32_t)(0x1243dc64u));
  /* 1241704b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241704d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241704f push 0 */
  push32((uint32_t)(0x0u));
  /* 12417051 push 1 */
  push32((uint32_t)(0x1u));
  /* 12417053 call 0x12415b00 */
  push32(0x12417058u); f_12415b00();
  /* 12417058 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241705b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241705e jne 0x12417061 */
  if (!C.zf) goto L_12417061;
  /* 12417060 int3  */
  x86_unimpl("int3 @ 0x12417060");
L_12417061:;
  /* 12417061 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417063 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417065 jne 0x12417042 */
  if (!C.zf) goto L_12417042;
  /* 12417067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417069 jmp 0x1241741a */
  goto L_1241741a;
L_1241706e:;
  /* 1241706e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417072 je 0x124170b6 */
  if (C.zf) goto L_124170b6;
  /* 12417074 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12417077 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1241707d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417080 je 0x124170b6 */
  if (C.zf) goto L_124170b6;
  /* 12417082 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12417085 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1241708b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241708e je 0x124170b6 */
  if (C.zf) goto L_124170b6;
L_12417090:;
  /* 12417090 push 0x1243da78 */
  push32((uint32_t)(0x1243da78u));
  /* 12417095 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 1241709a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241709c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241709e push 0 */
  push32((uint32_t)(0x0u));
  /* 124170a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124170a2 call 0x12415b00 */
  push32(0x124170a7u); f_12415b00();
  /* 124170a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124170aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124170ad jne 0x124170b0 */
  if (!C.zf) goto L_124170b0;
  /* 124170af int3  */
  x86_unimpl("int3 @ 0x124170af");
L_124170b0:;
  /* 124170b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124170b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124170b4 jne 0x12417090 */
  if (!C.zf) goto L_12417090;
L_124170b6:;
  /* 124170b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124170b9 push ecx */
  push32((uint32_t)(ECX));
  /* 124170ba call 0x12418040 */
  push32(0x124170bfu); f_12418040();
  /* 124170bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124170c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124170c4 jne 0x124170e7 */
  if (!C.zf) goto L_124170e7;
  /* 124170c6 push 0x1243dc40 */
  push32((uint32_t)(0x1243dc40u));
  /* 124170cb push 0 */
  push32((uint32_t)(0x0u));
  /* 124170cd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 124170d2 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 124170d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 124170d9 call 0x12415b00 */
  push32(0x124170deu); f_12415b00();
  /* 124170de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124170e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124170e4 jne 0x124170e7 */
  if (!C.zf) goto L_124170e7;
  /* 124170e6 int3  */
  x86_unimpl("int3 @ 0x124170e6");
L_124170e7:;
  /* 124170e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124170e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124170eb jne 0x124170b6 */
  if (!C.zf) goto L_124170b6;
  /* 124170ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124170f0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124170f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124170f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124170f9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124170fd jne 0x12417106 */
  if (!C.zf) goto L_12417106;
  /* 124170ff mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12417106:;
  /* 12417106 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241710a je 0x1241714a */
  if (C.zf) goto L_1241714a;
L_1241710c:;
  /* 1241710c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241710f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417116 jne 0x12417121 */
  if (!C.zf) goto L_12417121;
  /* 12417118 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241711b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241711f je 0x12417142 */
  if (C.zf) goto L_12417142;
L_12417121:;
  /* 12417121 push 0x1243dbf8 */
  push32((uint32_t)(0x1243dbf8u));
  /* 12417126 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417128 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1241712d push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417132 push 2 */
  push32((uint32_t)(0x2u));
  /* 12417134 call 0x12415b00 */
  push32(0x12417139u); f_12415b00();
  /* 12417139 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241713c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241713f jne 0x12417142 */
  if (!C.zf) goto L_12417142;
  /* 12417141 int3  */
  x86_unimpl("int3 @ 0x12417141");
L_12417142:;
  /* 12417142 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417144 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417146 jne 0x1241710c */
  if (!C.zf) goto L_1241710c;
  /* 12417148 jmp 0x124171ae */
  goto L_124171ae;
L_1241714a:;
  /* 1241714a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241714d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12417150 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12417155 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417158 jne 0x1241716f */
  if (!C.zf) goto L_1241716f;
  /* 1241715a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241715d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12417163 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417166 jne 0x1241716f */
  if (!C.zf) goto L_1241716f;
  /* 12417168 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1241716f:;
  /* 1241716f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417172 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12417175 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241717a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241717d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12417183 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417185 je 0x124171a8 */
  if (C.zf) goto L_124171a8;
  /* 12417187 push 0x1243dbbc */
  push32((uint32_t)(0x1243dbbcu));
  /* 1241718c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241718e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12417193 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417198 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241719a call 0x12415b00 */
  push32(0x1241719fu); f_12415b00();
  /* 1241719f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124171a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124171a5 jne 0x124171a8 */
  if (!C.zf) goto L_124171a8;
  /* 124171a7 int3  */
  x86_unimpl("int3 @ 0x124171a7");
L_124171a8:;
  /* 124171a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124171aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124171ac jne 0x1241716f */
  if (!C.zf) goto L_1241716f;
L_124171ae:;
  /* 124171ae cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124171b2 je 0x124171d9 */
  if (C.zf) goto L_124171d9;
  /* 124171b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124171b7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124171ba push eax */
  push32((uint32_t)(EAX));
  /* 124171bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124171be push ecx */
  push32((uint32_t)(ECX));
  /* 124171bf call 0x1241a9c0 */
  push32(0x124171c4u); f_1241a9c0();
  /* 124171c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124171c7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124171ca cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124171ce jne 0x124171d7 */
  if (!C.zf) goto L_124171d7;
  /* 124171d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124171d2 jmp 0x1241741a */
  goto L_1241741a;
L_124171d7:;
  /* 124171d7 jmp 0x124171fc */
  goto L_124171fc;
L_124171d9:;
  /* 124171d9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124171dc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124171df push edx */
  push32((uint32_t)(EDX));
  /* 124171e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124171e3 push eax */
  push32((uint32_t)(EAX));
  /* 124171e4 call 0x1241a910 */
  push32(0x124171e9u); f_1241a910();
  /* 124171e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124171ec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124171ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124171f3 jne 0x124171fc */
  if (!C.zf) goto L_124171fc;
  /* 124171f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124171f7 jmp 0x1241741a */
  goto L_1241741a;
L_124171fc:;
  /* 124171fc mov ecx, dword ptr [0x12440a88] */
  ECX = (r32((uint32_t)(0x12440a88)));
  /* 12417202 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417205 mov dword ptr [0x12440a88], ecx */
  w32((uint32_t)(0x12440a88), (ECX));
  /* 1241720b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241720f jne 0x12417267 */
  if (!C.zf) goto L_12417267;
  /* 12417211 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417214 mov eax, dword ptr [0x12442874] */
  EAX = (r32((uint32_t)(0x12442874)));
  /* 12417219 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241721c mov dword ptr [0x12442874], eax */
  w32((uint32_t)(0x12442874), (EAX));
  /* 12417221 mov ecx, dword ptr [0x12442874] */
  ECX = (r32((uint32_t)(0x12442874)));
  /* 12417227 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241722a mov dword ptr [0x12442874], ecx */
  w32((uint32_t)(0x12442874), (ECX));
  /* 12417230 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417233 mov eax, dword ptr [0x1244287c] */
  EAX = (r32((uint32_t)(0x1244287c)));
  /* 12417238 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241723b mov dword ptr [0x1244287c], eax */
  w32((uint32_t)(0x1244287c), (EAX));
  /* 12417240 mov ecx, dword ptr [0x1244287c] */
  ECX = (r32((uint32_t)(0x1244287c)));
  /* 12417246 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417249 mov dword ptr [0x1244287c], ecx */
  w32((uint32_t)(0x1244287c), (ECX));
  /* 1241724f mov edx, dword ptr [0x1244287c] */
  EDX = (r32((uint32_t)(0x1244287c)));
  /* 12417255 cmp edx, dword ptr [0x12442880] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12442880))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241725b jbe 0x12417267 */
  if ((C.cf||C.zf)) goto L_12417267;
  /* 1241725d mov eax, dword ptr [0x1244287c] */
  EAX = (r32((uint32_t)(0x1244287c)));
  /* 12417262 mov dword ptr [0x12442880], eax */
  w32((uint32_t)(0x12442880), (EAX));
L_12417267:;
  /* 12417267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241726a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241726d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12417270 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417273 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417276 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417279 jbe 0x1241729f */
  if ((C.cf||C.zf)) goto L_1241729f;
  /* 1241727b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241727e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417281 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12417284 push edx */
  push32((uint32_t)(EDX));
  /* 12417285 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417287 mov al, byte ptr [0x12440a92] */
  AL = (r8((uint32_t)(0x12440a92)));
  /* 1241728c push eax */
  push32((uint32_t)(EAX));
  /* 1241728d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417290 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417293 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417296 push edx */
  push32((uint32_t)(EDX));
  /* 12417297 call 0x1241a7b0 */
  push32(0x1241729cu); f_1241a7b0();
  /* 1241729c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241729f:;
  /* 1241729f push 4 */
  push32((uint32_t)(0x4u));
  /* 124172a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124172a3 mov al, byte ptr [0x12440a90] */
  AL = (r8((uint32_t)(0x12440a90)));
  /* 124172a8 push eax */
  push32((uint32_t)(EAX));
  /* 124172a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124172ac add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124172af push ecx */
  push32((uint32_t)(ECX));
  /* 124172b0 call 0x1241a7b0 */
  push32(0x124172b5u); f_1241a7b0();
  /* 124172b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124172b8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124172bc jne 0x124172d9 */
  if (!C.zf) goto L_124172d9;
  /* 124172be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124172c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 124172c4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 124172c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124172ca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 124172cd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 124172d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124172d3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 124172d6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_124172d9:;
  /* 124172d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124172dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124172df mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_124172e2:;
  /* 124172e2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124172e6 jne 0x12417317 */
  if (!C.zf) goto L_12417317;
  /* 124172e8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124172ec jne 0x124172f6 */
  if (!C.zf) goto L_124172f6;
  /* 124172ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124172f1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124172f4 je 0x12417317 */
  if (C.zf) goto L_12417317;
L_124172f6:;
  /* 124172f6 push 0x1243db88 */
  push32((uint32_t)(0x1243db88u));
  /* 124172fb push 0 */
  push32((uint32_t)(0x0u));
  /* 124172fd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12417302 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417307 push 2 */
  push32((uint32_t)(0x2u));
  /* 12417309 call 0x12415b00 */
  push32(0x1241730eu); f_12415b00();
  /* 1241730e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417311 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417314 jne 0x12417317 */
  if (!C.zf) goto L_12417317;
  /* 12417316 int3  */
  x86_unimpl("int3 @ 0x12417316");
L_12417317:;
  /* 12417317 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12417319 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241731b jne 0x124172e2 */
  if (!C.zf) goto L_124172e2;
  /* 1241731d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417320 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417323 je 0x1241732b */
  if (C.zf) goto L_1241732b;
  /* 12417325 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417329 je 0x12417333 */
  if (C.zf) goto L_12417333;
L_1241732b:;
  /* 1241732b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241732e jmp 0x1241741a */
  goto L_1241741a;
L_12417333:;
  /* 12417333 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417336 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417339 je 0x1241734b */
  if (C.zf) goto L_1241734b;
  /* 1241733b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241733e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12417340 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417343 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12417346 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12417349 jmp 0x12417387 */
  goto L_12417387;
L_1241734b:;
  /* 1241734b mov eax, dword ptr [0x12442870] */
  EAX = (r32((uint32_t)(0x12442870)));
  /* 12417350 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417353 je 0x12417376 */
  if (C.zf) goto L_12417376;
  /* 12417355 push 0x1243db6c */
  push32((uint32_t)(0x1243db6cu));
  /* 1241735a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241735c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12417361 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417366 push 2 */
  push32((uint32_t)(0x2u));
  /* 12417368 call 0x12415b00 */
  push32(0x1241736du); f_12415b00();
  /* 1241736d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417370 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417373 jne 0x12417376 */
  if (!C.zf) goto L_12417376;
  /* 12417375 int3  */
  x86_unimpl("int3 @ 0x12417375");
L_12417376:;
  /* 12417376 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417378 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241737a jne 0x1241734b */
  if (!C.zf) goto L_1241734b;
  /* 1241737c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241737f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12417382 mov dword ptr [0x12442870], eax */
  w32((uint32_t)(0x12442870), (EAX));
L_12417387:;
  /* 12417387 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241738a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241738e je 0x1241739f */
  if (C.zf) goto L_1241739f;
  /* 12417390 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417393 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12417396 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417399 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241739b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1241739d jmp 0x124173da */
  goto L_124173da;
L_1241739f:;
  /* 1241739f mov eax, dword ptr [0x12442878] */
  EAX = (r32((uint32_t)(0x12442878)));
  /* 124173a4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124173a7 je 0x124173ca */
  if (C.zf) goto L_124173ca;
  /* 124173a9 push 0x1243db50 */
  push32((uint32_t)(0x1243db50u));
  /* 124173ae push 0 */
  push32((uint32_t)(0x0u));
  /* 124173b0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 124173b5 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 124173ba push 2 */
  push32((uint32_t)(0x2u));
  /* 124173bc call 0x12415b00 */
  push32(0x124173c1u); f_12415b00();
  /* 124173c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124173c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124173c7 jne 0x124173ca */
  if (!C.zf) goto L_124173ca;
  /* 124173c9 int3  */
  x86_unimpl("int3 @ 0x124173c9");
L_124173ca:;
  /* 124173ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124173cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124173ce jne 0x1241739f */
  if (!C.zf) goto L_1241739f;
  /* 124173d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124173d3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 124173d5 mov dword ptr [0x12442878], eax */
  w32((uint32_t)(0x12442878), (EAX));
L_124173da:;
  /* 124173da cmp dword ptr [0x12442878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124173e1 je 0x124173f1 */
  if (C.zf) goto L_124173f1;
  /* 124173e3 mov ecx, dword ptr [0x12442878] */
  ECX = (r32((uint32_t)(0x12442878)));
  /* 124173e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124173ec mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 124173ef jmp 0x124173f9 */
  goto L_124173f9;
L_124173f1:;
  /* 124173f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124173f4 mov dword ptr [0x12442870], eax */
  w32((uint32_t)(0x12442870), (EAX));
L_124173f9:;
  /* 124173f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124173fc mov edx, dword ptr [0x12442878] */
  EDX = (r32((uint32_t)(0x12442878)));
  /* 12417402 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12417404 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417407 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1241740e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417411 mov dword ptr [0x12442878], ecx */
  w32((uint32_t)(0x12442878), (ECX));
  /* 12417417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1241741a:;
  /* 1241741a pop edi */
  EDI = (pop32());
  /* 1241741b pop esi */
  ESI = (pop32());
  /* 1241741c pop ebx */
  EBX = (pop32());
  /* 1241741d mov esp, ebp */
  ESP = (EBP);
  /* 1241741f pop ebp */
  EBP = (pop32());
  /* 12417420 ret  */
  ESPCHK(0x12416f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x12417430 (27 bytes, 13 insns) */
void f_12417430(void) {
  FTRACE(0x12417430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417430 push ebp */
  push32((uint32_t)(EBP));
  /* 12417431 mov ebp, esp */
  EBP = (ESP);
  /* 12417433 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417435 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417437 push 1 */
  push32((uint32_t)(0x1u));
  /* 12417439 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241743c push eax */
  push32((uint32_t)(EAX));
  /* 1241743d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417440 push ecx */
  push32((uint32_t)(ECX));
  /* 12417441 call 0x12417450 */
  push32(0x12417446u); f_12417450();
  /* 12417446 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417449 pop ebp */
  EBP = (pop32());
  /* 1241744a ret  */
  ESPCHK(0x12417430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007450 @ 0x12417450 (64 bytes, 27 insns) */
void f_12417450(void) {
  FTRACE(0x12417450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417450 push ebp */
  push32((uint32_t)(EBP));
  /* 12417451 mov ebp, esp */
  EBP = (ESP);
  /* 12417453 push ecx */
  push32((uint32_t)(ECX));
  /* 12417454 push 9 */
  push32((uint32_t)(0x9u));
  /* 12417456 call 0x1241a440 */
  push32(0x1241745bu); f_1241a440();
  /* 1241745b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241745e push 0 */
  push32((uint32_t)(0x0u));
  /* 12417460 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12417463 push eax */
  push32((uint32_t)(EAX));
  /* 12417464 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12417467 push ecx */
  push32((uint32_t)(ECX));
  /* 12417468 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241746b push edx */
  push32((uint32_t)(EDX));
  /* 1241746c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241746f push eax */
  push32((uint32_t)(EAX));
  /* 12417470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417473 push ecx */
  push32((uint32_t)(ECX));
  /* 12417474 call 0x12416f10 */
  push32(0x12417479u); f_12416f10();
  /* 12417479 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241747c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241747f push 9 */
  push32((uint32_t)(0x9u));
  /* 12417481 call 0x1241a4e0 */
  push32(0x12417486u); f_1241a4e0();
  /* 12417486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417489 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241748c mov esp, ebp */
  ESP = (EBP);
  /* 1241748e pop ebp */
  EBP = (pop32());
  /* 1241748f ret  */
  ESPCHK(0x12417450u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x12417490 (19 bytes, 9 insns) */
void f_12417490(void) {
  FTRACE(0x12417490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417490 push ebp */
  push32((uint32_t)(EBP));
  /* 12417491 mov ebp, esp */
  EBP = (ESP);
  /* 12417493 push 1 */
  push32((uint32_t)(0x1u));
  /* 12417495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417498 push eax */
  push32((uint32_t)(EAX));
  /* 12417499 call 0x124174d0 */
  push32(0x1241749eu); f_124174d0();
  /* 1241749e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124174a1 pop ebp */
  EBP = (pop32());
  /* 124174a2 ret  */
  ESPCHK(0x12417490u, _esp0);
  ESP += 4; return;
}

/* FUN_100074b0 @ 0x124174b0 (19 bytes, 9 insns) */
void f_124174b0(void) {
  FTRACE(0x124174b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124174b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124174b1 mov ebp, esp */
  EBP = (ESP);
  /* 124174b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124174b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124174b8 push eax */
  push32((uint32_t)(EAX));
  /* 124174b9 call 0x12417500 */
  push32(0x124174beu); f_12417500();
  /* 124174be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124174c1 pop ebp */
  EBP = (pop32());
  /* 124174c2 ret  */
  ESPCHK(0x124174b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x124174d0 (41 bytes, 16 insns) */
void f_124174d0(void) {
  FTRACE(0x124174d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124174d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124174d1 mov ebp, esp */
  EBP = (ESP);
  /* 124174d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 124174d5 call 0x1241a440 */
  push32(0x124174dau); f_1241a440();
  /* 124174da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124174dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124174e0 push eax */
  push32((uint32_t)(EAX));
  /* 124174e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124174e4 push ecx */
  push32((uint32_t)(ECX));
  /* 124174e5 call 0x12417500 */
  push32(0x124174eau); f_12417500();
  /* 124174ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124174ed push 9 */
  push32((uint32_t)(0x9u));
  /* 124174ef call 0x1241a4e0 */
  push32(0x124174f4u); f_1241a4e0();
  /* 124174f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124174f7 pop ebp */
  EBP = (pop32());
  /* 124174f8 ret  */
  ESPCHK(0x124174d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x12417500 (1004 bytes, 342 insns) */
void f_12417500(void) {
  FTRACE(0x12417500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417500 push ebp */
  push32((uint32_t)(EBP));
  /* 12417501 mov ebp, esp */
  EBP = (ESP);
  /* 12417503 push ecx */
  push32((uint32_t)(ECX));
  /* 12417504 push ebx */
  push32((uint32_t)(EBX));
  /* 12417505 push esi */
  push32((uint32_t)(ESI));
  /* 12417506 push edi */
  push32((uint32_t)(EDI));
  /* 12417507 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 1241750c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1241750f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417511 je 0x12417543 */
  if (C.zf) goto L_12417543;
L_12417513:;
  /* 12417513 call 0x12417be0 */
  push32(0x12417518u); f_12417be0();
  /* 12417518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241751a jne 0x1241753d */
  if (!C.zf) goto L_1241753d;
  /* 1241751c push 0x1243db3c */
  push32((uint32_t)(0x1243db3cu));
  /* 12417521 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417523 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12417528 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 1241752d push 2 */
  push32((uint32_t)(0x2u));
  /* 1241752f call 0x12415b00 */
  push32(0x12417534u); f_12415b00();
  /* 12417534 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417537 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241753a jne 0x1241753d */
  if (!C.zf) goto L_1241753d;
  /* 1241753c int3  */
  x86_unimpl("int3 @ 0x1241753c");
L_1241753d:;
  /* 1241753d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241753f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417541 jne 0x12417513 */
  if (!C.zf) goto L_12417513;
L_12417543:;
  /* 12417543 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417547 jne 0x1241754e */
  if (!C.zf) goto L_1241754e;
  /* 12417549 jmp 0x124178e5 */
  goto L_124178e5;
L_1241754e:;
  /* 1241754e push 0 */
  push32((uint32_t)(0x0u));
  /* 12417550 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417552 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417554 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417557 push edx */
  push32((uint32_t)(EDX));
  /* 12417558 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241755a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241755d push eax */
  push32((uint32_t)(EAX));
  /* 1241755e push 3 */
  push32((uint32_t)(0x3u));
  /* 12417560 call dword ptr [0x12440c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12440c90))), 0x12417566u);
  /* 12417566 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241756b jne 0x12417598 */
  if (!C.zf) goto L_12417598;
L_1241756d:;
  /* 1241756d push 0x1243de00 */
  push32((uint32_t)(0x1243de00u));
  /* 12417572 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12417577 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241757b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241757d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241757f call 0x12415b00 */
  push32(0x12417584u); f_12415b00();
  /* 12417584 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417587 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241758a jne 0x1241758d */
  if (!C.zf) goto L_1241758d;
  /* 1241758c int3  */
  x86_unimpl("int3 @ 0x1241758c");
L_1241758d:;
  /* 1241758d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241758f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417591 jne 0x1241756d */
  if (!C.zf) goto L_1241756d;
  /* 12417593 jmp 0x124178e5 */
  goto L_124178e5;
L_12417598:;
  /* 12417598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241759b push edx */
  push32((uint32_t)(EDX));
  /* 1241759c call 0x12418040 */
  push32(0x124175a1u); f_12418040();
  /* 124175a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124175a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124175a6 jne 0x124175c9 */
  if (!C.zf) goto L_124175c9;
  /* 124175a8 push 0x1243dc40 */
  push32((uint32_t)(0x1243dc40u));
  /* 124175ad push 0 */
  push32((uint32_t)(0x0u));
  /* 124175af push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 124175b4 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 124175b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 124175bb call 0x12415b00 */
  push32(0x124175c0u); f_12415b00();
  /* 124175c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124175c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124175c6 jne 0x124175c9 */
  if (!C.zf) goto L_124175c9;
  /* 124175c8 int3  */
  x86_unimpl("int3 @ 0x124175c8");
L_124175c9:;
  /* 124175c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124175cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124175cd jne 0x12417598 */
  if (!C.zf) goto L_12417598;
  /* 124175cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124175d2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124175d5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124175d8:;
  /* 124175d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124175db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124175de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124175e3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124175e6 je 0x1241762b */
  if (C.zf) goto L_1241762b;
  /* 124175e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124175eb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124175ef je 0x1241762b */
  if (C.zf) goto L_1241762b;
  /* 124175f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124175f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124175f7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124175fc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124175ff je 0x1241762b */
  if (C.zf) goto L_1241762b;
  /* 12417601 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417604 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417608 je 0x1241762b */
  if (C.zf) goto L_1241762b;
  /* 1241760a push 0x1243ddd8 */
  push32((uint32_t)(0x1243ddd8u));
  /* 1241760f push 0 */
  push32((uint32_t)(0x0u));
  /* 12417611 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12417616 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 1241761b push 2 */
  push32((uint32_t)(0x2u));
  /* 1241761d call 0x12415b00 */
  push32(0x12417622u); f_12415b00();
  /* 12417622 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417625 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417628 jne 0x1241762b */
  if (!C.zf) goto L_1241762b;
  /* 1241762a int3  */
  x86_unimpl("int3 @ 0x1241762a");
L_1241762b:;
  /* 1241762b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241762d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241762f jne 0x124175d8 */
  if (!C.zf) goto L_124175d8;
  /* 12417631 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 12417636 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12417639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241763b jne 0x12417706 */
  if (!C.zf) goto L_12417706;
  /* 12417641 push 4 */
  push32((uint32_t)(0x4u));
  /* 12417643 mov cl, byte ptr [0x12440a90] */
  CL = (r8((uint32_t)(0x12440a90)));
  /* 12417649 push ecx */
  push32((uint32_t)(ECX));
  /* 1241764a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241764d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417650 push edx */
  push32((uint32_t)(EDX));
  /* 12417651 call 0x12417b50 */
  push32(0x12417656u); f_12417b50();
  /* 12417656 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241765b jne 0x124176a0 */
  if (!C.zf) goto L_124176a0;
L_1241765d:;
  /* 1241765d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417660 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417663 push eax */
  push32((uint32_t)(EAX));
  /* 12417664 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417667 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1241766a push edx */
  push32((uint32_t)(EDX));
  /* 1241766b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241766e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12417671 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12417677 mov edx, dword ptr [ecx*4 + 0x12440a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440a94)));
  /* 1241767e push edx */
  push32((uint32_t)(EDX));
  /* 1241767f push 0x1243ddac */
  push32((uint32_t)(0x1243ddacu));
  /* 12417684 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417686 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417688 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241768a push 1 */
  push32((uint32_t)(0x1u));
  /* 1241768c call 0x12415b00 */
  push32(0x12417691u); f_12415b00();
  /* 12417691 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417694 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417697 jne 0x1241769a */
  if (!C.zf) goto L_1241769a;
  /* 12417699 int3  */
  x86_unimpl("int3 @ 0x12417699");
L_1241769a:;
  /* 1241769a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241769c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241769e jne 0x1241765d */
  if (!C.zf) goto L_1241765d;
L_124176a0:;
  /* 124176a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 124176a2 mov cl, byte ptr [0x12440a90] */
  CL = (r8((uint32_t)(0x12440a90)));
  /* 124176a8 push ecx */
  push32((uint32_t)(ECX));
  /* 124176a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124176ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124176af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124176b2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 124176b6 push edx */
  push32((uint32_t)(EDX));
  /* 124176b7 call 0x12417b50 */
  push32(0x124176bcu); f_12417b50();
  /* 124176bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124176bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124176c1 jne 0x12417706 */
  if (!C.zf) goto L_12417706;
L_124176c3:;
  /* 124176c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124176c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124176c9 push eax */
  push32((uint32_t)(EAX));
  /* 124176ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124176cd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124176d0 push edx */
  push32((uint32_t)(EDX));
  /* 124176d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124176d4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124176d7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124176dd mov edx, dword ptr [ecx*4 + 0x12440a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440a94)));
  /* 124176e4 push edx */
  push32((uint32_t)(EDX));
  /* 124176e5 push 0x1243dd80 */
  push32((uint32_t)(0x1243dd80u));
  /* 124176ea push 0 */
  push32((uint32_t)(0x0u));
  /* 124176ec push 0 */
  push32((uint32_t)(0x0u));
  /* 124176ee push 0 */
  push32((uint32_t)(0x0u));
  /* 124176f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 124176f2 call 0x12415b00 */
  push32(0x124176f7u); f_12415b00();
  /* 124176f7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124176fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124176fd jne 0x12417700 */
  if (!C.zf) goto L_12417700;
  /* 124176ff int3  */
  x86_unimpl("int3 @ 0x124176ff");
L_12417700:;
  /* 12417700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417704 jne 0x124176c3 */
  if (!C.zf) goto L_124176c3;
L_12417706:;
  /* 12417706 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417709 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241770d jne 0x1241777b */
  if (!C.zf) goto L_1241777b;
L_1241770f:;
  /* 1241770f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417712 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417719 jne 0x12417724 */
  if (!C.zf) goto L_12417724;
  /* 1241771b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241771e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417722 je 0x12417745 */
  if (C.zf) goto L_12417745;
L_12417724:;
  /* 12417724 push 0x1243dd40 */
  push32((uint32_t)(0x1243dd40u));
  /* 12417729 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241772b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12417730 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417735 push 2 */
  push32((uint32_t)(0x2u));
  /* 12417737 call 0x12415b00 */
  push32(0x1241773cu); f_12415b00();
  /* 1241773c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241773f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417742 jne 0x12417745 */
  if (!C.zf) goto L_12417745;
  /* 12417744 int3  */
  x86_unimpl("int3 @ 0x12417744");
L_12417745:;
  /* 12417745 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417747 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417749 jne 0x1241770f */
  if (!C.zf) goto L_1241770f;
  /* 1241774b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241774e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12417751 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417754 push eax */
  push32((uint32_t)(EAX));
  /* 12417755 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417757 mov cl, byte ptr [0x12440a91] */
  CL = (r8((uint32_t)(0x12440a91)));
  /* 1241775d push ecx */
  push32((uint32_t)(ECX));
  /* 1241775e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417761 push edx */
  push32((uint32_t)(EDX));
  /* 12417762 call 0x1241a7b0 */
  push32(0x12417767u); f_1241a7b0();
  /* 12417767 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241776a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241776d push eax */
  push32((uint32_t)(EAX));
  /* 1241776e call 0x1241abb0 */
  push32(0x12417773u); f_1241abb0();
  /* 12417773 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417776 jmp 0x124178e5 */
  goto L_124178e5;
L_1241777b:;
  /* 1241777b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241777e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417782 jne 0x12417791 */
  if (!C.zf) goto L_12417791;
  /* 12417784 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417788 jne 0x12417791 */
  if (!C.zf) goto L_12417791;
  /* 1241778a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12417791:;
  /* 12417791 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417794 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12417797 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241779a je 0x124177bd */
  if (C.zf) goto L_124177bd;
  /* 1241779c push 0x1243dd20 */
  push32((uint32_t)(0x1243dd20u));
  /* 124177a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 124177a3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 124177a8 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 124177ad push 2 */
  push32((uint32_t)(0x2u));
  /* 124177af call 0x12415b00 */
  push32(0x124177b4u); f_12415b00();
  /* 124177b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124177b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124177ba jne 0x124177bd */
  if (!C.zf) goto L_124177bd;
  /* 124177bc int3  */
  x86_unimpl("int3 @ 0x124177bc");
L_124177bd:;
  /* 124177bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124177bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124177c1 jne 0x12417791 */
  if (!C.zf) goto L_12417791;
  /* 124177c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124177c6 mov eax, dword ptr [0x1244287c] */
  EAX = (r32((uint32_t)(0x1244287c)));
  /* 124177cb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124177ce mov dword ptr [0x1244287c], eax */
  w32((uint32_t)(0x1244287c), (EAX));
  /* 124177d3 mov ecx, dword ptr [0x12440a84] */
  ECX = (r32((uint32_t)(0x12440a84)));
  /* 124177d9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 124177dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124177de jne 0x124178bc */
  if (!C.zf) goto L_124178bc;
  /* 124177e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124177e7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124177ea je 0x124177fc */
  if (C.zf) goto L_124177fc;
  /* 124177ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124177ef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124177f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124177f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 124177f7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 124177fa jmp 0x1241783a */
  goto L_1241783a;
L_124177fc:;
  /* 124177fc mov ecx, dword ptr [0x12442870] */
  ECX = (r32((uint32_t)(0x12442870)));
  /* 12417802 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417805 je 0x12417828 */
  if (C.zf) goto L_12417828;
  /* 12417807 push 0x1243dd08 */
  push32((uint32_t)(0x1243dd08u));
  /* 1241780c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241780e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12417813 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417818 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241781a call 0x12415b00 */
  push32(0x1241781fu); f_12415b00();
  /* 1241781f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417822 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417825 jne 0x12417828 */
  if (!C.zf) goto L_12417828;
  /* 12417827 int3  */
  x86_unimpl("int3 @ 0x12417827");
L_12417828:;
  /* 12417828 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241782a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241782c jne 0x124177fc */
  if (!C.zf) goto L_124177fc;
  /* 1241782e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417831 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12417834 mov dword ptr [0x12442870], ecx */
  w32((uint32_t)(0x12442870), (ECX));
L_1241783a:;
  /* 1241783a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241783d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417841 je 0x12417852 */
  if (C.zf) goto L_12417852;
  /* 12417843 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417846 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12417849 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241784c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241784e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12417850 jmp 0x1241788f */
  goto L_1241788f;
L_12417852:;
  /* 12417852 mov ecx, dword ptr [0x12442878] */
  ECX = (r32((uint32_t)(0x12442878)));
  /* 12417858 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241785b je 0x1241787e */
  if (C.zf) goto L_1241787e;
  /* 1241785d push 0x1243dcf0 */
  push32((uint32_t)(0x1243dcf0u));
  /* 12417862 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417864 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12417869 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 1241786e push 2 */
  push32((uint32_t)(0x2u));
  /* 12417870 call 0x12415b00 */
  push32(0x12417875u); f_12415b00();
  /* 12417875 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417878 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241787b jne 0x1241787e */
  if (!C.zf) goto L_1241787e;
  /* 1241787d int3  */
  x86_unimpl("int3 @ 0x1241787d");
L_1241787e:;
  /* 1241787e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12417880 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12417882 jne 0x12417852 */
  if (!C.zf) goto L_12417852;
  /* 12417884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417887 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12417889 mov dword ptr [0x12442878], ecx */
  w32((uint32_t)(0x12442878), (ECX));
L_1241788f:;
  /* 1241788f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417892 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12417895 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417898 push eax */
  push32((uint32_t)(EAX));
  /* 12417899 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241789b mov cl, byte ptr [0x12440a91] */
  CL = (r8((uint32_t)(0x12440a91)));
  /* 124178a1 push ecx */
  push32((uint32_t)(ECX));
  /* 124178a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124178a5 push edx */
  push32((uint32_t)(EDX));
  /* 124178a6 call 0x1241a7b0 */
  push32(0x124178abu); f_1241a7b0();
  /* 124178ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124178ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124178b1 push eax */
  push32((uint32_t)(EAX));
  /* 124178b2 call 0x1241abb0 */
  push32(0x124178b7u); f_1241abb0();
  /* 124178b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124178ba jmp 0x124178e5 */
  goto L_124178e5;
L_124178bc:;
  /* 124178bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124178bf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 124178c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124178c9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 124178cc push eax */
  push32((uint32_t)(EAX));
  /* 124178cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124178cf mov cl, byte ptr [0x12440a91] */
  CL = (r8((uint32_t)(0x12440a91)));
  /* 124178d5 push ecx */
  push32((uint32_t)(ECX));
  /* 124178d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124178d9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124178dc push edx */
  push32((uint32_t)(EDX));
  /* 124178dd call 0x1241a7b0 */
  push32(0x124178e2u); f_1241a7b0();
  /* 124178e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124178e5:;
  /* 124178e5 pop edi */
  EDI = (pop32());
  /* 124178e6 pop esi */
  ESI = (pop32());
  /* 124178e7 pop ebx */
  EBX = (pop32());
  /* 124178e8 mov esp, ebp */
  ESP = (EBP);
  /* 124178ea pop ebp */
  EBP = (pop32());
  /* 124178eb ret  */
  ESPCHK(0x12417500u, _esp0);
  ESP += 4; return;
}

/* FUN_100078f0 @ 0x124178f0 (19 bytes, 9 insns) */
void f_124178f0(void) {
  FTRACE(0x124178f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124178f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124178f1 mov ebp, esp */
  EBP = (ESP);
  /* 124178f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 124178f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124178f8 push eax */
  push32((uint32_t)(EAX));
  /* 124178f9 call 0x12417910 */
  push32(0x124178feu); f_12417910();
  /* 124178fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417901 pop ebp */
  EBP = (pop32());
  /* 12417902 ret  */
  ESPCHK(0x124178f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x12417910 (342 bytes, 119 insns) */
void f_12417910(void) {
  FTRACE(0x12417910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417910 push ebp */
  push32((uint32_t)(EBP));
  /* 12417911 mov ebp, esp */
  EBP = (ESP);
  /* 12417913 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12417916 push ebx */
  push32((uint32_t)(EBX));
  /* 12417917 push esi */
  push32((uint32_t)(ESI));
  /* 12417918 push edi */
  push32((uint32_t)(EDI));
  /* 12417919 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 1241791e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12417921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417923 je 0x12417955 */
  if (C.zf) goto L_12417955;
L_12417925:;
  /* 12417925 call 0x12417be0 */
  push32(0x1241792au); f_12417be0();
  /* 1241792a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241792c jne 0x1241794f */
  if (!C.zf) goto L_1241794f;
  /* 1241792e push 0x1243db3c */
  push32((uint32_t)(0x1243db3cu));
  /* 12417933 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417935 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1241793a push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 1241793f push 2 */
  push32((uint32_t)(0x2u));
  /* 12417941 call 0x12415b00 */
  push32(0x12417946u); f_12415b00();
  /* 12417946 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417949 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241794c jne 0x1241794f */
  if (!C.zf) goto L_1241794f;
  /* 1241794e int3  */
  x86_unimpl("int3 @ 0x1241794e");
L_1241794f:;
  /* 1241794f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417951 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417953 jne 0x12417925 */
  if (!C.zf) goto L_12417925;
L_12417955:;
  /* 12417955 push 9 */
  push32((uint32_t)(0x9u));
  /* 12417957 call 0x1241a440 */
  push32(0x1241795cu); f_1241a440();
  /* 1241795c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241795f:;
  /* 1241795f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417962 push edx */
  push32((uint32_t)(EDX));
  /* 12417963 call 0x12418040 */
  push32(0x12417968u); f_12418040();
  /* 12417968 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241796b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241796d jne 0x12417990 */
  if (!C.zf) goto L_12417990;
  /* 1241796f push 0x1243dc40 */
  push32((uint32_t)(0x1243dc40u));
  /* 12417974 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417976 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1241797b push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417980 push 2 */
  push32((uint32_t)(0x2u));
  /* 12417982 call 0x12415b00 */
  push32(0x12417987u); f_12415b00();
  /* 12417987 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241798a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241798d jne 0x12417990 */
  if (!C.zf) goto L_12417990;
  /* 1241798f int3  */
  x86_unimpl("int3 @ 0x1241798f");
L_12417990:;
  /* 12417990 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417994 jne 0x1241795f */
  if (!C.zf) goto L_1241795f;
  /* 12417996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417999 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241799c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1241799f:;
  /* 1241799f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124179a2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124179a5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124179aa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124179ad je 0x124179f2 */
  if (C.zf) goto L_124179f2;
  /* 124179af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124179b2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124179b6 je 0x124179f2 */
  if (C.zf) goto L_124179f2;
  /* 124179b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124179bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124179be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124179c3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124179c6 je 0x124179f2 */
  if (C.zf) goto L_124179f2;
  /* 124179c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124179cb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124179cf je 0x124179f2 */
  if (C.zf) goto L_124179f2;
  /* 124179d1 push 0x1243ddd8 */
  push32((uint32_t)(0x1243ddd8u));
  /* 124179d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124179d8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 124179dd push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 124179e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 124179e4 call 0x12415b00 */
  push32(0x124179e9u); f_12415b00();
  /* 124179e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124179ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124179ef jne 0x124179f2 */
  if (!C.zf) goto L_124179f2;
  /* 124179f1 int3  */
  x86_unimpl("int3 @ 0x124179f1");
L_124179f2:;
  /* 124179f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124179f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124179f6 jne 0x1241799f */
  if (!C.zf) goto L_1241799f;
  /* 124179f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124179fb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124179ff jne 0x12417a0e */
  if (!C.zf) goto L_12417a0e;
  /* 12417a01 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417a05 jne 0x12417a0e */
  if (!C.zf) goto L_12417a0e;
  /* 12417a07 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12417a0e:;
  /* 12417a0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417a11 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417a15 je 0x12417a49 */
  if (C.zf) goto L_12417a49;
L_12417a17:;
  /* 12417a17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417a1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12417a1d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417a20 je 0x12417a43 */
  if (C.zf) goto L_12417a43;
  /* 12417a22 push 0x1243dd20 */
  push32((uint32_t)(0x1243dd20u));
  /* 12417a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417a29 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12417a2e push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417a33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12417a35 call 0x12415b00 */
  push32(0x12417a3au); f_12415b00();
  /* 12417a3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417a3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417a40 jne 0x12417a43 */
  if (!C.zf) goto L_12417a43;
  /* 12417a42 int3  */
  x86_unimpl("int3 @ 0x12417a42");
L_12417a43:;
  /* 12417a43 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417a45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417a47 jne 0x12417a17 */
  if (!C.zf) goto L_12417a17;
L_12417a49:;
  /* 12417a49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417a4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12417a4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12417a52 push 9 */
  push32((uint32_t)(0x9u));
  /* 12417a54 call 0x1241a4e0 */
  push32(0x12417a59u); f_1241a4e0();
  /* 12417a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417a5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417a5f pop edi */
  EDI = (pop32());
  /* 12417a60 pop esi */
  ESI = (pop32());
  /* 12417a61 pop ebx */
  EBX = (pop32());
  /* 12417a62 mov esp, ebp */
  ESP = (EBP);
  /* 12417a64 pop ebp */
  EBP = (pop32());
  /* 12417a65 ret  */
  ESPCHK(0x12417910u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a70 @ 0x12417a70 (28 bytes, 11 insns) */
void f_12417a70(void) {
  FTRACE(0x12417a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12417a71 mov ebp, esp */
  EBP = (ESP);
  /* 12417a73 push ecx */
  push32((uint32_t)(ECX));
  /* 12417a74 mov eax, dword ptr [0x12440a8c] */
  EAX = (r32((uint32_t)(0x12440a8c)));
  /* 12417a79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12417a7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417a7f mov dword ptr [0x12440a8c], ecx */
  w32((uint32_t)(0x12440a8c), (ECX));
  /* 12417a85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417a88 mov esp, ebp */
  ESP = (EBP);
  /* 12417a8a pop ebp */
  EBP = (pop32());
  /* 12417a8b ret  */
  ESPCHK(0x12417a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a90 @ 0x12417a90 (157 bytes, 59 insns) */
void f_12417a90(void) {
  FTRACE(0x12417a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12417a91 mov ebp, esp */
  EBP = (ESP);
  /* 12417a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12417a94 push ebx */
  push32((uint32_t)(EBX));
  /* 12417a95 push esi */
  push32((uint32_t)(ESI));
  /* 12417a96 push edi */
  push32((uint32_t)(EDI));
  /* 12417a97 push 9 */
  push32((uint32_t)(0x9u));
  /* 12417a99 call 0x1241a440 */
  push32(0x12417a9eu); f_1241a440();
  /* 12417a9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417aa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417aa4 push eax */
  push32((uint32_t)(EAX));
  /* 12417aa5 call 0x12418040 */
  push32(0x12417aaau); f_12418040();
  /* 12417aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417aaf je 0x12417b1c */
  if (C.zf) goto L_12417b1c;
  /* 12417ab1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417ab4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12417ab7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12417aba:;
  /* 12417aba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417abd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12417ac0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12417ac5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417ac8 je 0x12417b0d */
  if (C.zf) goto L_12417b0d;
  /* 12417aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417acd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417ad1 je 0x12417b0d */
  if (C.zf) goto L_12417b0d;
  /* 12417ad3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417ad6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12417ad9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12417ade cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417ae1 je 0x12417b0d */
  if (C.zf) goto L_12417b0d;
  /* 12417ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417ae6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417aea je 0x12417b0d */
  if (C.zf) goto L_12417b0d;
  /* 12417aec push 0x1243ddd8 */
  push32((uint32_t)(0x1243ddd8u));
  /* 12417af1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417af3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12417af8 push 0x1243db30 */
  push32((uint32_t)(0x1243db30u));
  /* 12417afd push 2 */
  push32((uint32_t)(0x2u));
  /* 12417aff call 0x12415b00 */
  push32(0x12417b04u); f_12415b00();
  /* 12417b04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417b07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417b0a jne 0x12417b0d */
  if (!C.zf) goto L_12417b0d;
  /* 12417b0c int3  */
  x86_unimpl("int3 @ 0x12417b0c");
L_12417b0d:;
  /* 12417b0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12417b0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12417b11 jne 0x12417aba */
  if (!C.zf) goto L_12417aba;
  /* 12417b13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417b16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417b19 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12417b1c:;
  /* 12417b1c push 9 */
  push32((uint32_t)(0x9u));
  /* 12417b1e call 0x1241a4e0 */
  push32(0x12417b23u); f_1241a4e0();
  /* 12417b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417b26 pop edi */
  EDI = (pop32());
  /* 12417b27 pop esi */
  ESI = (pop32());
  /* 12417b28 pop ebx */
  EBX = (pop32());
  /* 12417b29 mov esp, ebp */
  ESP = (EBP);
  /* 12417b2b pop ebp */
  EBP = (pop32());
  /* 12417b2c ret  */
  ESPCHK(0x12417a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b30 @ 0x12417b30 (28 bytes, 11 insns) */
void f_12417b30(void) {
  FTRACE(0x12417b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12417b31 mov ebp, esp */
  EBP = (ESP);
  /* 12417b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12417b34 mov eax, dword ptr [0x12440c90] */
  EAX = (r32((uint32_t)(0x12440c90)));
  /* 12417b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12417b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417b3f mov dword ptr [0x12440c90], ecx */
  w32((uint32_t)(0x12440c90), (ECX));
  /* 12417b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417b48 mov esp, ebp */
  ESP = (EBP);
  /* 12417b4a pop ebp */
  EBP = (pop32());
  /* 12417b4b ret  */
  ESPCHK(0x12417b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b50 @ 0x12417b50 (136 bytes, 55 insns) */
void f_12417b50(void) {
  FTRACE(0x12417b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12417b51 mov ebp, esp */
  EBP = (ESP);
  /* 12417b53 push ecx */
  push32((uint32_t)(ECX));
  /* 12417b54 push ebx */
  push32((uint32_t)(EBX));
  /* 12417b55 push esi */
  push32((uint32_t)(ESI));
  /* 12417b56 push edi */
  push32((uint32_t)(EDI));
  /* 12417b57 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12417b5e:;
  /* 12417b5e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12417b61 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12417b64 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12417b67 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12417b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417b6c je 0x12417bce */
  if (C.zf) goto L_12417bce;
  /* 12417b6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417b71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417b73 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12417b75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417b78 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12417b7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417b81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417b84 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12417b87 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417b89 je 0x12417bcc */
  if (C.zf) goto L_12417bcc;
L_12417b8b:;
  /* 12417b8b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417b8e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12417b93 push eax */
  push32((uint32_t)(EAX));
  /* 12417b94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417b97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12417b99 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12417b9c push edx */
  push32((uint32_t)(EDX));
  /* 12417b9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417ba0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12417ba3 push eax */
  push32((uint32_t)(EAX));
  /* 12417ba4 push 0x1243de1c */
  push32((uint32_t)(0x1243de1cu));
  /* 12417ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417bab push 0 */
  push32((uint32_t)(0x0u));
  /* 12417bad push 0 */
  push32((uint32_t)(0x0u));
  /* 12417baf push 0 */
  push32((uint32_t)(0x0u));
  /* 12417bb1 call 0x12415b00 */
  push32(0x12417bb6u); f_12415b00();
  /* 12417bb6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417bb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417bbc jne 0x12417bbf */
  if (!C.zf) goto L_12417bbf;
  /* 12417bbe int3  */
  x86_unimpl("int3 @ 0x12417bbe");
L_12417bbf:;
  /* 12417bbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417bc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417bc3 jne 0x12417b8b */
  if (!C.zf) goto L_12417b8b;
  /* 12417bc5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12417bcc:;
  /* 12417bcc jmp 0x12417b5e */
  goto L_12417b5e;
L_12417bce:;
  /* 12417bce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417bd1 pop edi */
  EDI = (pop32());
  /* 12417bd2 pop esi */
  ESI = (pop32());
  /* 12417bd3 pop ebx */
  EBX = (pop32());
  /* 12417bd4 mov esp, ebp */
  ESP = (EBP);
  /* 12417bd6 pop ebp */
  EBP = (pop32());
  /* 12417bd7 ret  */
  ESPCHK(0x12417b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007be0 @ 0x12417be0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12417be0(void) {
  FTRACE(0x12417be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12417be1 mov ebp, esp */
  EBP = (ESP);
  /* 12417be3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12417be6 push ebx */
  push32((uint32_t)(EBX));
  /* 12417be7 push esi */
  push32((uint32_t)(ESI));
  /* 12417be8 push edi */
  push32((uint32_t)(EDI));
  /* 12417be9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12417bf0 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 12417bf5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12417bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417bfa jne 0x12417c06 */
  if (!C.zf) goto L_12417c06;
  /* 12417bfc mov eax, 1 */
  EAX = (0x1u);
  /* 12417c01 jmp 0x12417f38 */
  goto L_12417f38;
L_12417c06:;
  /* 12417c06 push 9 */
  push32((uint32_t)(0x9u));
  /* 12417c08 call 0x1241a440 */
  push32(0x12417c0du); f_1241a440();
  /* 12417c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417c10 call 0x1241ac20 */
  push32(0x12417c15u); f_1241ac20();
  /* 12417c15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12417c18 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417c1c je 0x12417d29 */
  if (C.zf) goto L_12417d29;
  /* 12417c22 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417c26 je 0x12417d29 */
  if (C.zf) goto L_12417d29;
  /* 12417c2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12417c2f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12417c32 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12417c35 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417c38 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12417c3b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417c3f ja 0x12417cf2 */
  if ((!C.cf&&!C.zf)) goto L_12417cf2;
  /* 12417c45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12417c48 jmp dword ptr [eax*4 + 0x12417f3f] */
  switch (EAX) {
    case 0: goto L_12417cca;
    case 1: goto L_12417ca2;
    case 2: goto L_12417c7a;
    case 3: goto L_12417c4f;
    default: x86_unimpl("switch@0x12417c48 out of table"); return;
  }
L_12417c4f:;
  /* 12417c4f push 0x1243df70 */
  push32((uint32_t)(0x1243df70u));
  /* 12417c54 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12417c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12417c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12417c5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12417c61 call 0x12415b00 */
  push32(0x12417c66u); f_12415b00();
  /* 12417c66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417c69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417c6c jne 0x12417c6f */
  if (!C.zf) goto L_12417c6f;
  /* 12417c6e int3  */
  x86_unimpl("int3 @ 0x12417c6e");
L_12417c6f:;
  /* 12417c6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417c71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417c73 jne 0x12417c4f */
  if (!C.zf) goto L_12417c4f;
  /* 12417c75 jmp 0x12417d18 */
  goto L_12417d18;
L_12417c7a:;
  /* 12417c7a push 0x1243df4c */
  push32((uint32_t)(0x1243df4cu));
  /* 12417c7f push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12417c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12417c8c call 0x12415b00 */
  push32(0x12417c91u); f_12415b00();
  /* 12417c91 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417c94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417c97 jne 0x12417c9a */
  if (!C.zf) goto L_12417c9a;
  /* 12417c99 int3  */
  x86_unimpl("int3 @ 0x12417c99");
L_12417c9a:;
  /* 12417c9a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12417c9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12417c9e jne 0x12417c7a */
  if (!C.zf) goto L_12417c7a;
  /* 12417ca0 jmp 0x12417d18 */
  goto L_12417d18;
L_12417ca2:;
  /* 12417ca2 push 0x1243df28 */
  push32((uint32_t)(0x1243df28u));
  /* 12417ca7 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12417cac push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cae push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cb4 call 0x12415b00 */
  push32(0x12417cb9u); f_12415b00();
  /* 12417cb9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417cbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417cbf jne 0x12417cc2 */
  if (!C.zf) goto L_12417cc2;
  /* 12417cc1 int3  */
  x86_unimpl("int3 @ 0x12417cc1");
L_12417cc2:;
  /* 12417cc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417cc6 jne 0x12417ca2 */
  if (!C.zf) goto L_12417ca2;
  /* 12417cc8 jmp 0x12417d18 */
  goto L_12417d18;
L_12417cca:;
  /* 12417cca push 0x1243df04 */
  push32((uint32_t)(0x1243df04u));
  /* 12417ccf push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12417cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cdc call 0x12415b00 */
  push32(0x12417ce1u); f_12415b00();
  /* 12417ce1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417ce4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417ce7 jne 0x12417cea */
  if (!C.zf) goto L_12417cea;
  /* 12417ce9 int3  */
  x86_unimpl("int3 @ 0x12417ce9");
L_12417cea:;
  /* 12417cea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417cec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417cee jne 0x12417cca */
  if (!C.zf) goto L_12417cca;
  /* 12417cf0 jmp 0x12417d18 */
  goto L_12417d18;
L_12417cf2:;
  /* 12417cf2 push 0x1243ded8 */
  push32((uint32_t)(0x1243ded8u));
  /* 12417cf7 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12417cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12417cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12417d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417d04 call 0x12415b00 */
  push32(0x12417d09u); f_12415b00();
  /* 12417d09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417d0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417d0f jne 0x12417d12 */
  if (!C.zf) goto L_12417d12;
  /* 12417d11 int3  */
  x86_unimpl("int3 @ 0x12417d11");
L_12417d12:;
  /* 12417d12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12417d14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12417d16 jne 0x12417cf2 */
  if (!C.zf) goto L_12417cf2;
L_12417d18:;
  /* 12417d18 push 9 */
  push32((uint32_t)(0x9u));
  /* 12417d1a call 0x1241a4e0 */
  push32(0x12417d1fu); f_1241a4e0();
  /* 12417d1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417d22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417d24 jmp 0x12417f38 */
  goto L_12417f38;
L_12417d29:;
  /* 12417d29 mov eax, dword ptr [0x12442878] */
  EAX = (r32((uint32_t)(0x12442878)));
  /* 12417d2e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12417d31 jmp 0x12417d3b */
  goto L_12417d3b;
L_12417d33:;
  /* 12417d33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417d36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12417d38 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12417d3b:;
  /* 12417d3b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417d3f je 0x12417f2b */
  if (C.zf) goto L_12417f2b;
  /* 12417d45 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12417d4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417d4f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12417d52 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12417d58 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417d5b je 0x12417d80 */
  if (C.zf) goto L_12417d80;
  /* 12417d5d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417d60 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417d64 je 0x12417d80 */
  if (C.zf) goto L_12417d80;
  /* 12417d66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417d69 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12417d6c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12417d72 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417d75 je 0x12417d80 */
  if (C.zf) goto L_12417d80;
  /* 12417d77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417d7a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417d7e jne 0x12417d98 */
  if (!C.zf) goto L_12417d98;
L_12417d80:;
  /* 12417d80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417d83 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12417d86 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12417d8c mov edx, dword ptr [ecx*4 + 0x12440a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440a94)));
  /* 12417d93 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12417d96 jmp 0x12417d9f */
  goto L_12417d9f;
L_12417d98:;
  /* 12417d98 mov dword ptr [ebp - 0x14], 0x1243ded0 */
  w32((uint32_t)(EBP + -0x14), (0x1243ded0u));
L_12417d9f:;
  /* 12417d9f push 4 */
  push32((uint32_t)(0x4u));
  /* 12417da1 mov al, byte ptr [0x12440a90] */
  AL = (r8((uint32_t)(0x12440a90)));
  /* 12417da6 push eax */
  push32((uint32_t)(EAX));
  /* 12417da7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417daa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417dad push ecx */
  push32((uint32_t)(ECX));
  /* 12417dae call 0x12417b50 */
  push32(0x12417db3u); f_12417b50();
  /* 12417db3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417db6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417db8 jne 0x12417df4 */
  if (!C.zf) goto L_12417df4;
L_12417dba:;
  /* 12417dba mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417dbd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417dc0 push edx */
  push32((uint32_t)(EDX));
  /* 12417dc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417dc4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12417dc7 push ecx */
  push32((uint32_t)(ECX));
  /* 12417dc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12417dcb push edx */
  push32((uint32_t)(EDX));
  /* 12417dcc push 0x1243ddac */
  push32((uint32_t)(0x1243ddacu));
  /* 12417dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417dd9 call 0x12415b00 */
  push32(0x12417ddeu); f_12415b00();
  /* 12417dde add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417de1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417de4 jne 0x12417de7 */
  if (!C.zf) goto L_12417de7;
  /* 12417de6 int3  */
  x86_unimpl("int3 @ 0x12417de6");
L_12417de7:;
  /* 12417de7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417deb jne 0x12417dba */
  if (!C.zf) goto L_12417dba;
  /* 12417ded mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12417df4:;
  /* 12417df4 push 4 */
  push32((uint32_t)(0x4u));
  /* 12417df6 mov cl, byte ptr [0x12440a90] */
  CL = (r8((uint32_t)(0x12440a90)));
  /* 12417dfc push ecx */
  push32((uint32_t)(ECX));
  /* 12417dfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417e00 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12417e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417e06 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12417e0a push edx */
  push32((uint32_t)(EDX));
  /* 12417e0b call 0x12417b50 */
  push32(0x12417e10u); f_12417b50();
  /* 12417e10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417e15 jne 0x12417e51 */
  if (!C.zf) goto L_12417e51;
L_12417e17:;
  /* 12417e17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417e1a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417e1d push eax */
  push32((uint32_t)(EAX));
  /* 12417e1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417e21 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12417e24 push edx */
  push32((uint32_t)(EDX));
  /* 12417e25 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12417e28 push eax */
  push32((uint32_t)(EAX));
  /* 12417e29 push 0x1243dd80 */
  push32((uint32_t)(0x1243dd80u));
  /* 12417e2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12417e30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417e34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417e36 call 0x12415b00 */
  push32(0x12417e3bu); f_12415b00();
  /* 12417e3b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417e3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417e41 jne 0x12417e44 */
  if (!C.zf) goto L_12417e44;
  /* 12417e43 int3  */
  x86_unimpl("int3 @ 0x12417e43");
L_12417e44:;
  /* 12417e44 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12417e46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12417e48 jne 0x12417e17 */
  if (!C.zf) goto L_12417e17;
  /* 12417e4a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12417e51:;
  /* 12417e51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417e54 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417e58 jne 0x12417eaa */
  if (!C.zf) goto L_12417eaa;
  /* 12417e5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417e5d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12417e60 push ecx */
  push32((uint32_t)(ECX));
  /* 12417e61 mov dl, byte ptr [0x12440a91] */
  DL = (r8((uint32_t)(0x12440a91)));
  /* 12417e67 push edx */
  push32((uint32_t)(EDX));
  /* 12417e68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417e6b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417e6e push eax */
  push32((uint32_t)(EAX));
  /* 12417e6f call 0x12417b50 */
  push32(0x12417e74u); f_12417b50();
  /* 12417e74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417e79 jne 0x12417eaa */
  if (!C.zf) goto L_12417eaa;
L_12417e7b:;
  /* 12417e7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417e7e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417e81 push ecx */
  push32((uint32_t)(ECX));
  /* 12417e82 push 0x1243dea4 */
  push32((uint32_t)(0x1243dea4u));
  /* 12417e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417e89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417e8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12417e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12417e8f call 0x12415b00 */
  push32(0x12417e94u); f_12415b00();
  /* 12417e94 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417e97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417e9a jne 0x12417e9d */
  if (!C.zf) goto L_12417e9d;
  /* 12417e9c int3  */
  x86_unimpl("int3 @ 0x12417e9c");
L_12417e9d:;
  /* 12417e9d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12417e9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12417ea1 jne 0x12417e7b */
  if (!C.zf) goto L_12417e7b;
  /* 12417ea3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12417eaa:;
  /* 12417eaa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417eae jne 0x12417f26 */
  if (!C.zf) goto L_12417f26;
  /* 12417eb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417eb3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417eb7 je 0x12417eec */
  if (C.zf) goto L_12417eec;
L_12417eb9:;
  /* 12417eb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417ebc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12417ebf push edx */
  push32((uint32_t)(EDX));
  /* 12417ec0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417ec3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12417ec6 push ecx */
  push32((uint32_t)(ECX));
  /* 12417ec7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12417eca push edx */
  push32((uint32_t)(EDX));
  /* 12417ecb push 0x1243de84 */
  push32((uint32_t)(0x1243de84u));
  /* 12417ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417ed8 call 0x12415b00 */
  push32(0x12417eddu); f_12415b00();
  /* 12417edd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417ee0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417ee3 jne 0x12417ee6 */
  if (!C.zf) goto L_12417ee6;
  /* 12417ee5 int3  */
  x86_unimpl("int3 @ 0x12417ee5");
L_12417ee6:;
  /* 12417ee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12417ee8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417eea jne 0x12417eb9 */
  if (!C.zf) goto L_12417eb9;
L_12417eec:;
  /* 12417eec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417eef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12417ef2 push edx */
  push32((uint32_t)(EDX));
  /* 12417ef3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12417ef6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417ef9 push eax */
  push32((uint32_t)(EAX));
  /* 12417efa mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12417efd push ecx */
  push32((uint32_t)(ECX));
  /* 12417efe push 0x1243de58 */
  push32((uint32_t)(0x1243de58u));
  /* 12417f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417f09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12417f0b call 0x12415b00 */
  push32(0x12417f10u); f_12415b00();
  /* 12417f10 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417f13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417f16 jne 0x12417f19 */
  if (!C.zf) goto L_12417f19;
  /* 12417f18 int3  */
  x86_unimpl("int3 @ 0x12417f18");
L_12417f19:;
  /* 12417f19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12417f1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12417f1d jne 0x12417eec */
  if (!C.zf) goto L_12417eec;
  /* 12417f1f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12417f26:;
  /* 12417f26 jmp 0x12417d33 */
  goto L_12417d33;
L_12417f2b:;
  /* 12417f2b push 9 */
  push32((uint32_t)(0x9u));
  /* 12417f2d call 0x1241a4e0 */
  push32(0x12417f32u); f_1241a4e0();
  /* 12417f32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417f35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12417f38:;
  /* 12417f38 pop edi */
  EDI = (pop32());
  /* 12417f39 pop esi */
  ESI = (pop32());
  /* 12417f3a pop ebx */
  EBX = (pop32());
  /* 12417f3b mov esp, ebp */
  ESP = (EBP);
  /* 12417f3d pop ebp */
  EBP = (pop32());
  /* 12417f3e ret  */
  ESPCHK(0x12417be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x12417f50 (34 bytes, 13 insns) */
void f_12417f50(void) {
  FTRACE(0x12417f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12417f51 mov ebp, esp */
  EBP = (ESP);
  /* 12417f53 push ecx */
  push32((uint32_t)(ECX));
  /* 12417f54 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 12417f59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12417f5c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417f60 je 0x12417f6b */
  if (C.zf) goto L_12417f6b;
  /* 12417f62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12417f65 mov dword ptr [0x12440a84], ecx */
  w32((uint32_t)(0x12440a84), (ECX));
L_12417f6b:;
  /* 12417f6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417f6e mov esp, ebp */
  ESP = (EBP);
  /* 12417f70 pop ebp */
  EBP = (pop32());
  /* 12417f71 ret  */
  ESPCHK(0x12417f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x12417f80 (103 bytes, 38 insns) */
void f_12417f80(void) {
  FTRACE(0x12417f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417f80 push ebp */
  push32((uint32_t)(EBP));
  /* 12417f81 mov ebp, esp */
  EBP = (ESP);
  /* 12417f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12417f84 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 12417f89 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12417f8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12417f8e jne 0x12417f92 */
  if (!C.zf) goto L_12417f92;
  /* 12417f90 jmp 0x12417fe3 */
  goto L_12417fe3;
L_12417f92:;
  /* 12417f92 push 9 */
  push32((uint32_t)(0x9u));
  /* 12417f94 call 0x1241a440 */
  push32(0x12417f99u); f_1241a440();
  /* 12417f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12417f9c mov ecx, dword ptr [0x12442878] */
  ECX = (r32((uint32_t)(0x12442878)));
  /* 12417fa2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12417fa5 jmp 0x12417faf */
  goto L_12417faf;
L_12417fa7:;
  /* 12417fa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417faa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12417fac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12417faf:;
  /* 12417faf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417fb3 je 0x12417fd9 */
  if (C.zf) goto L_12417fd9;
  /* 12417fb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417fb8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12417fbb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12417fc1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417fc4 jne 0x12417fd7 */
  if (!C.zf) goto L_12417fd7;
  /* 12417fc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417fc9 push eax */
  push32((uint32_t)(EAX));
  /* 12417fca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12417fcd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12417fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12417fd1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12417fd4u);
  /* 12417fd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12417fd7:;
  /* 12417fd7 jmp 0x12417fa7 */
  goto L_12417fa7;
L_12417fd9:;
  /* 12417fd9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12417fdb call 0x1241a4e0 */
  push32(0x12417fe0u); f_1241a4e0();
  /* 12417fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12417fe3:;
  /* 12417fe3 mov esp, ebp */
  ESP = (EBP);
  /* 12417fe5 pop ebp */
  EBP = (pop32());
  /* 12417fe6 ret  */
  ESPCHK(0x12417f80u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12417ff0 (75 bytes, 28 insns) */
void f_12417ff0(void) {
  FTRACE(0x12417ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12417ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12417ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12417ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12417ff4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12417ff8 je 0x1241802d */
  if (C.zf) goto L_1241802d;
  /* 12417ffa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12417ffd push eax */
  push32((uint32_t)(EAX));
  /* 12417ffe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418001 push ecx */
  push32((uint32_t)(ECX));
  /* 12418002 call dword ptr [0x124453b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b8))), 0x12418008u);
  /* 12418008 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241800a jne 0x1241802d */
  if (!C.zf) goto L_1241802d;
  /* 1241800c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418010 je 0x12418024 */
  if (C.zf) goto L_12418024;
  /* 12418012 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418015 push edx */
  push32((uint32_t)(EDX));
  /* 12418016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418019 push eax */
  push32((uint32_t)(EAX));
  /* 1241801a call dword ptr [0x124453b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b4))), 0x12418020u);
  /* 12418020 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418022 jne 0x1241802d */
  if (!C.zf) goto L_1241802d;
L_12418024:;
  /* 12418024 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1241802b jmp 0x12418034 */
  goto L_12418034;
L_1241802d:;
  /* 1241802d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12418034:;
  /* 12418034 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418037 mov esp, ebp */
  ESP = (EBP);
  /* 12418039 pop ebp */
  EBP = (pop32());
  /* 1241803a ret  */
  ESPCHK(0x12417ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008040 @ 0x12418040 (134 bytes, 50 insns) */
void f_12418040(void) {
  FTRACE(0x12418040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12418040 push ebp */
  push32((uint32_t)(EBP));
  /* 12418041 mov ebp, esp */
  EBP = (ESP);
  /* 12418043 push ecx */
  push32((uint32_t)(ECX));
  /* 12418044 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418048 jne 0x1241804e */
  if (!C.zf) goto L_1241804e;
  /* 1241804a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241804c jmp 0x124180c2 */
  goto L_124180c2;
L_1241804e:;
  /* 1241804e push 1 */
  push32((uint32_t)(0x1u));
  /* 12418050 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12418052 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418055 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418058 push eax */
  push32((uint32_t)(EAX));
  /* 12418059 call 0x12417ff0 */
  push32(0x1241805eu); f_12417ff0();
  /* 1241805e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418061 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418063 jne 0x12418069 */
  if (!C.zf) goto L_12418069;
  /* 12418065 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418067 jmp 0x124180c2 */
  goto L_124180c2;
L_12418069:;
  /* 12418069 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241806c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241806f push ecx */
  push32((uint32_t)(ECX));
  /* 12418070 call 0x1241ad40 */
  push32(0x12418075u); f_1241ad40();
  /* 12418075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418078 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241807b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241807f je 0x12418096 */
  if (C.zf) goto L_12418096;
  /* 12418081 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418084 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418087 push edx */
  push32((uint32_t)(EDX));
  /* 12418088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241808b push eax */
  push32((uint32_t)(EAX));
  /* 1241808c call 0x1241ada0 */
  push32(0x12418091u); f_1241ada0();
  /* 12418091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418094 jmp 0x124180c2 */
  goto L_124180c2;
L_12418096:;
  /* 12418096 mov ecx, dword ptr [0x1244282c] */
  ECX = (r32((uint32_t)(0x1244282c)));
  /* 1241809c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 124180a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 124180a4 je 0x124180ad */
  if (C.zf) goto L_124180ad;
  /* 124180a6 mov eax, 1 */
  EAX = (0x1u);
  /* 124180ab jmp 0x124180c2 */
  goto L_124180c2;
L_124180ad:;
  /* 124180ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124180b0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124180b3 push edx */
  push32((uint32_t)(EDX));
  /* 124180b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124180b6 mov eax, dword ptr [0x124441cc] */
  EAX = (r32((uint32_t)(0x124441cc)));
  /* 124180bb push eax */
  push32((uint32_t)(EAX));
  /* 124180bc call dword ptr [0x124453ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453ac))), 0x124180c2u);
L_124180c2:;
  /* 124180c2 mov esp, ebp */
  ESP = (EBP);
  /* 124180c4 pop ebp */
  EBP = (pop32());
  /* 124180c5 ret  */
  ESPCHK(0x12418040u, _esp0);
  ESP += 4; return;
}

/* FUN_100080d0 @ 0x124180d0 (227 bytes, 80 insns) */
void f_124180d0(void) {
  FTRACE(0x124180d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124180d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124180d1 mov ebp, esp */
  EBP = (ESP);
  /* 124180d3 push ecx */
  push32((uint32_t)(ECX));
  /* 124180d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124180d7 push eax */
  push32((uint32_t)(EAX));
  /* 124180d8 call 0x12418040 */
  push32(0x124180ddu); f_12418040();
  /* 124180dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124180e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124180e2 jne 0x124180eb */
  if (!C.zf) goto L_124180eb;
  /* 124180e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124180e6 jmp 0x124181af */
  goto L_124181af;
L_124180eb:;
  /* 124180eb push 9 */
  push32((uint32_t)(0x9u));
  /* 124180ed call 0x1241a440 */
  push32(0x124180f2u); f_1241a440();
  /* 124180f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124180f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124180f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124180fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124180fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418101 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12418104 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12418109 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241810c je 0x12418130 */
  if (C.zf) goto L_12418130;
  /* 1241810e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418111 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418115 je 0x12418130 */
  if (C.zf) goto L_12418130;
  /* 12418117 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241811a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1241811d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12418122 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418125 je 0x12418130 */
  if (C.zf) goto L_12418130;
  /* 12418127 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241812a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241812e jne 0x124181a3 */
  if (!C.zf) goto L_124181a3;
L_12418130:;
  /* 12418130 push 1 */
  push32((uint32_t)(0x1u));
  /* 12418132 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418135 push edx */
  push32((uint32_t)(EDX));
  /* 12418136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418139 push eax */
  push32((uint32_t)(EAX));
  /* 1241813a call 0x12417ff0 */
  push32(0x1241813fu); f_12417ff0();
  /* 1241813f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418142 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418144 je 0x124181a3 */
  if (C.zf) goto L_124181a3;
  /* 12418146 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418149 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1241814c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241814f jne 0x124181a3 */
  if (!C.zf) goto L_124181a3;
  /* 12418151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418154 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12418157 cmp ecx, dword ptr [0x12440a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12440a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241815d jg 0x124181a3 */
  if ((!C.zf&&C.sf==C.of)) goto L_124181a3;
  /* 1241815f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418163 je 0x12418170 */
  if (C.zf) goto L_12418170;
  /* 12418165 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418168 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241816b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1241816e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12418170:;
  /* 12418170 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418174 je 0x12418181 */
  if (C.zf) goto L_12418181;
  /* 12418176 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12418179 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241817c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241817f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12418181:;
  /* 12418181 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418185 je 0x12418192 */
  if (C.zf) goto L_12418192;
  /* 12418187 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1241818a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241818d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12418190 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12418192:;
  /* 12418192 push 9 */
  push32((uint32_t)(0x9u));
  /* 12418194 call 0x1241a4e0 */
  push32(0x12418199u); f_1241a4e0();
  /* 12418199 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241819c mov eax, 1 */
  EAX = (0x1u);
  /* 124181a1 jmp 0x124181af */
  goto L_124181af;
L_124181a3:;
  /* 124181a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 124181a5 call 0x1241a4e0 */
  push32(0x124181aau); f_1241a4e0();
  /* 124181aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124181ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124181af:;
  /* 124181af mov esp, ebp */
  ESP = (EBP);
  /* 124181b1 pop ebp */
  EBP = (pop32());
  /* 124181b2 ret  */
  ESPCHK(0x124180d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081c0 @ 0x124181c0 (28 bytes, 11 insns) */
void f_124181c0(void) {
  FTRACE(0x124181c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124181c0 push ebp */
  push32((uint32_t)(EBP));
  /* 124181c1 mov ebp, esp */
  EBP = (ESP);
  /* 124181c3 push ecx */
  push32((uint32_t)(ECX));
  /* 124181c4 mov eax, dword ptr [0x124441d8] */
  EAX = (r32((uint32_t)(0x124441d8)));
  /* 124181c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124181cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124181cf mov dword ptr [0x124441d8], ecx */
  w32((uint32_t)(0x124441d8), (ECX));
  /* 124181d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124181d8 mov esp, ebp */
  ESP = (EBP);
  /* 124181da pop ebp */
  EBP = (pop32());
  /* 124181db ret  */
  ESPCHK(0x124181c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x124181e0 (362 bytes, 116 insns) */
void f_124181e0(void) {
  FTRACE(0x124181e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124181e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124181e1 mov ebp, esp */
  EBP = (ESP);
  /* 124181e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124181e6 push ebx */
  push32((uint32_t)(EBX));
  /* 124181e7 push esi */
  push32((uint32_t)(ESI));
  /* 124181e8 push edi */
  push32((uint32_t)(EDI));
  /* 124181e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124181ed jne 0x1241821a */
  if (!C.zf) goto L_1241821a;
L_124181ef:;
  /* 124181ef push 0x1243dfb8 */
  push32((uint32_t)(0x1243dfb8u));
  /* 124181f4 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 124181f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124181fb push 0 */
  push32((uint32_t)(0x0u));
  /* 124181fd push 0 */
  push32((uint32_t)(0x0u));
  /* 124181ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12418201 call 0x12415b00 */
  push32(0x12418206u); f_12415b00();
  /* 12418206 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418209 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241820c jne 0x1241820f */
  if (!C.zf) goto L_1241820f;
  /* 1241820e int3  */
  x86_unimpl("int3 @ 0x1241820e");
L_1241820f:;
  /* 1241820f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418213 jne 0x124181ef */
  if (!C.zf) goto L_124181ef;
  /* 12418215 jmp 0x12418343 */
  goto L_12418343;
L_1241821a:;
  /* 1241821a push 9 */
  push32((uint32_t)(0x9u));
  /* 1241821c call 0x1241a440 */
  push32(0x12418221u); f_1241a440();
  /* 12418221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418224 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418227 mov edx, dword ptr [0x12442878] */
  EDX = (r32((uint32_t)(0x12442878)));
  /* 1241822d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1241822f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12418236 jmp 0x12418241 */
  goto L_12418241;
L_12418238:;
  /* 12418238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241823b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241823e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12418241:;
  /* 12418241 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418245 jge 0x12418265 */
  if ((C.sf==C.of)) goto L_12418265;
  /* 12418247 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241824a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241824d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12418255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418258 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241825b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12418263 jmp 0x12418238 */
  goto L_12418238;
L_12418265:;
  /* 12418265 mov edx, dword ptr [0x12442878] */
  EDX = (r32((uint32_t)(0x12442878)));
  /* 1241826b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1241826e jmp 0x12418278 */
  goto L_12418278;
L_12418270:;
  /* 12418270 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12418273 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12418275 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12418278:;
  /* 12418278 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241827c je 0x12418321 */
  if (C.zf) goto L_12418321;
  /* 12418282 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12418285 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12418288 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241828d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241828f jl 0x124182f7 */
  if ((C.sf!=C.of)) goto L_124182f7;
  /* 12418291 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12418294 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12418297 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1241829d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124182a0 jge 0x124182f7 */
  if ((C.sf==C.of)) goto L_124182f7;
  /* 124182a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124182a5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 124182a8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 124182ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124182b1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 124182b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124182b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124182bb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 124182be and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124182c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124182c7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 124182cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124182ce mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124182d1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124182d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124182d9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 124182dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124182e0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124182e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124182e6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 124182e9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124182ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124182f1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 124182f5 jmp 0x1241831c */
  goto L_1241831c;
L_124182f7:;
  /* 124182f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124182fa push edx */
  push32((uint32_t)(EDX));
  /* 124182fb push 0x1243df94 */
  push32((uint32_t)(0x1243df94u));
  /* 12418300 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418302 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418304 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418306 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418308 call 0x12415b00 */
  push32(0x1241830du); f_12415b00();
  /* 1241830d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418310 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418313 jne 0x12418316 */
  if (!C.zf) goto L_12418316;
  /* 12418315 int3  */
  x86_unimpl("int3 @ 0x12418315");
L_12418316:;
  /* 12418316 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241831a jne 0x124182f7 */
  if (!C.zf) goto L_124182f7;
L_1241831c:;
  /* 1241831c jmp 0x12418270 */
  goto L_12418270;
L_12418321:;
  /* 12418321 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418324 mov edx, dword ptr [0x12442880] */
  EDX = (r32((uint32_t)(0x12442880)));
  /* 1241832a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1241832d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418330 mov ecx, dword ptr [0x12442874] */
  ECX = (r32((uint32_t)(0x12442874)));
  /* 12418336 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12418339 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241833b call 0x1241a4e0 */
  push32(0x12418340u); f_1241a4e0();
  /* 12418340 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12418343:;
  /* 12418343 pop edi */
  EDI = (pop32());
  /* 12418344 pop esi */
  ESI = (pop32());
  /* 12418345 pop ebx */
  EBX = (pop32());
  /* 12418346 mov esp, ebp */
  ESP = (EBP);
  /* 12418348 pop ebp */
  EBP = (pop32());
  /* 12418349 ret  */
  ESPCHK(0x124181e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008350 @ 0x12418350 (291 bytes, 95 insns) */
void f_12418350(void) {
  FTRACE(0x12418350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12418350 push ebp */
  push32((uint32_t)(EBP));
  /* 12418351 mov ebp, esp */
  EBP = (ESP);
  /* 12418353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418356 push ebx */
  push32((uint32_t)(EBX));
  /* 12418357 push esi */
  push32((uint32_t)(ESI));
  /* 12418358 push edi */
  push32((uint32_t)(EDI));
  /* 12418359 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12418360 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418364 je 0x12418372 */
  if (C.zf) goto L_12418372;
  /* 12418366 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241836a je 0x12418372 */
  if (C.zf) goto L_12418372;
  /* 1241836c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418370 jne 0x124183a0 */
  if (!C.zf) goto L_124183a0;
L_12418372:;
  /* 12418372 push 0x1243dfe0 */
  push32((uint32_t)(0x1243dfe0u));
  /* 12418377 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 1241837c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241837e push 0 */
  push32((uint32_t)(0x0u));
  /* 12418380 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418382 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418384 call 0x12415b00 */
  push32(0x12418389u); f_12415b00();
  /* 12418389 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241838c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241838f jne 0x12418392 */
  if (!C.zf) goto L_12418392;
  /* 12418391 int3  */
  x86_unimpl("int3 @ 0x12418391");
L_12418392:;
  /* 12418392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418394 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418396 jne 0x12418372 */
  if (!C.zf) goto L_12418372;
  /* 12418398 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241839b jmp 0x1241846c */
  goto L_1241846c;
L_124183a0:;
  /* 124183a0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124183a7 jmp 0x124183b2 */
  goto L_124183b2;
L_124183a9:;
  /* 124183a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124183ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124183af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124183b2:;
  /* 124183b2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124183b6 jge 0x1241843c */
  if ((C.sf==C.of)) goto L_1241843c;
  /* 124183bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124183bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124183c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124183c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124183c8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 124183cc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124183d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124183d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124183d6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 124183da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124183dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124183e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124183e3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 124183e6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 124183ea sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124183ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124183f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124183f4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 124183f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124183fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124183fe cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418403 jne 0x12418412 */
  if (!C.zf) goto L_12418412;
  /* 12418405 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418408 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241840b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418410 je 0x12418437 */
  if (C.zf) goto L_12418437;
L_12418412:;
  /* 12418412 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418416 je 0x12418437 */
  if (C.zf) goto L_12418437;
  /* 12418418 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241841c jne 0x12418430 */
  if (!C.zf) goto L_12418430;
  /* 1241841e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418422 jne 0x12418437 */
  if (!C.zf) goto L_12418437;
  /* 12418424 mov eax, dword ptr [0x12440a84] */
  EAX = (r32((uint32_t)(0x12440a84)));
  /* 12418429 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1241842c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241842e je 0x12418437 */
  if (C.zf) goto L_12418437;
L_12418430:;
  /* 12418430 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12418437:;
  /* 12418437 jmp 0x124183a9 */
  goto L_124183a9;
L_1241843c:;
  /* 1241843c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241843f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418442 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12418445 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418448 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241844b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1241844e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418451 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418454 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12418457 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241845a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241845d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12418460 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418463 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12418469 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1241846c:;
  /* 1241846c pop edi */
  EDI = (pop32());
  /* 1241846d pop esi */
  ESI = (pop32());
  /* 1241846e pop ebx */
  EBX = (pop32());
  /* 1241846f mov esp, ebp */
  ESP = (EBP);
  /* 12418471 pop ebp */
  EBP = (pop32());
  /* 12418472 ret  */
  ESPCHK(0x12418350u, _esp0);
  ESP += 4; return;
}

/* FUN_10008480 @ 0x12418480 (697 bytes, 253 insns) */
void f_12418480(void) {
  FTRACE(0x12418480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12418480 push ebp */
  push32((uint32_t)(EBP));
  /* 12418481 mov ebp, esp */
  EBP = (ESP);
  /* 12418483 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418486 push ebx */
  push32((uint32_t)(EBX));
  /* 12418487 push esi */
  push32((uint32_t)(ESI));
  /* 12418488 push edi */
  push32((uint32_t)(EDI));
  /* 12418489 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12418490 push 9 */
  push32((uint32_t)(0x9u));
  /* 12418492 call 0x1241a440 */
  push32(0x12418497u); f_1241a440();
  /* 12418497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241849a:;
  /* 1241849a push 0x1243e0d8 */
  push32((uint32_t)(0x1243e0d8u));
  /* 1241849f push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 124184a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124184a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 124184a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 124184aa push 0 */
  push32((uint32_t)(0x0u));
  /* 124184ac call 0x12415b00 */
  push32(0x124184b1u); f_12415b00();
  /* 124184b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124184b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124184b7 jne 0x124184ba */
  if (!C.zf) goto L_124184ba;
  /* 124184b9 int3  */
  x86_unimpl("int3 @ 0x124184b9");
L_124184ba:;
  /* 124184ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124184bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124184be jne 0x1241849a */
  if (!C.zf) goto L_1241849a;
  /* 124184c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124184c4 je 0x124184ce */
  if (C.zf) goto L_124184ce;
  /* 124184c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124184c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124184cb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124184ce:;
  /* 124184ce mov eax, dword ptr [0x12442878] */
  EAX = (r32((uint32_t)(0x12442878)));
  /* 124184d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124184d6 jmp 0x124184e0 */
  goto L_124184e0;
L_124184d8:;
  /* 124184d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124184db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 124184dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_124184e0:;
  /* 124184e0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124184e4 je 0x12418702 */
  if (C.zf) goto L_12418702;
  /* 124184ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124184ed cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124184f0 je 0x12418702 */
  if (C.zf) goto L_12418702;
  /* 124184f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124184f9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 124184fc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12418502 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418505 je 0x12418534 */
  if (C.zf) goto L_12418534;
  /* 12418507 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241850a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1241850d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12418513 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12418515 je 0x12418534 */
  if (C.zf) goto L_12418534;
  /* 12418517 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241851a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1241851d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12418522 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418525 jne 0x12418539 */
  if (!C.zf) goto L_12418539;
  /* 12418527 mov ecx, dword ptr [0x12440a84] */
  ECX = (r32((uint32_t)(0x12440a84)));
  /* 1241852d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12418530 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12418532 jne 0x12418539 */
  if (!C.zf) goto L_12418539;
L_12418534:;
  /* 12418534 jmp 0x124186fd */
  goto L_124186fd;
L_12418539:;
  /* 12418539 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241853c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418540 je 0x124185b2 */
  if (C.zf) goto L_124185b2;
  /* 12418542 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418544 push 1 */
  push32((uint32_t)(0x1u));
  /* 12418546 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418549 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1241854c push ecx */
  push32((uint32_t)(ECX));
  /* 1241854d call 0x12417ff0 */
  push32(0x12418552u); f_12417ff0();
  /* 12418552 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418557 jne 0x12418583 */
  if (!C.zf) goto L_12418583;
L_12418559:;
  /* 12418559 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241855c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1241855f push eax */
  push32((uint32_t)(EAX));
  /* 12418560 push 0x1243e0c4 */
  push32((uint32_t)(0x1243e0c4u));
  /* 12418565 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418567 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418569 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241856b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241856d call 0x12415b00 */
  push32(0x12418572u); f_12415b00();
  /* 12418572 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418575 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418578 jne 0x1241857b */
  if (!C.zf) goto L_1241857b;
  /* 1241857a int3  */
  x86_unimpl("int3 @ 0x1241857a");
L_1241857b:;
  /* 1241857b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241857d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241857f jne 0x12418559 */
  if (!C.zf) goto L_12418559;
  /* 12418581 jmp 0x124185b2 */
  goto L_124185b2;
L_12418583:;
  /* 12418583 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418586 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12418589 push eax */
  push32((uint32_t)(EAX));
  /* 1241858a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241858d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12418590 push edx */
  push32((uint32_t)(EDX));
  /* 12418591 push 0x1243e0b8 */
  push32((uint32_t)(0x1243e0b8u));
  /* 12418596 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241859a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241859c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241859e call 0x12415b00 */
  push32(0x124185a3u); f_12415b00();
  /* 124185a3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124185a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124185a9 jne 0x124185ac */
  if (!C.zf) goto L_124185ac;
  /* 124185ab int3  */
  x86_unimpl("int3 @ 0x124185ab");
L_124185ac:;
  /* 124185ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124185ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124185b0 jne 0x12418583 */
  if (!C.zf) goto L_12418583;
L_124185b2:;
  /* 124185b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124185b5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 124185b8 push edx */
  push32((uint32_t)(EDX));
  /* 124185b9 push 0x1243e0b0 */
  push32((uint32_t)(0x1243e0b0u));
  /* 124185be push 0 */
  push32((uint32_t)(0x0u));
  /* 124185c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124185c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124185c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124185c6 call 0x12415b00 */
  push32(0x124185cbu); f_12415b00();
  /* 124185cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124185ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124185d1 jne 0x124185d4 */
  if (!C.zf) goto L_124185d4;
  /* 124185d3 int3  */
  x86_unimpl("int3 @ 0x124185d3");
L_124185d4:;
  /* 124185d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124185d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 124185d8 jne 0x124185b2 */
  if (!C.zf) goto L_124185b2;
  /* 124185da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124185dd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 124185e0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124185e6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124185e9 jne 0x1241865c */
  if (!C.zf) goto L_1241865c;
L_124185eb:;
  /* 124185eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124185ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124185f1 push ecx */
  push32((uint32_t)(ECX));
  /* 124185f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124185f5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124185f8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124185fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12418600 push eax */
  push32((uint32_t)(EAX));
  /* 12418601 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418604 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418607 push ecx */
  push32((uint32_t)(ECX));
  /* 12418608 push 0x1243e07c */
  push32((uint32_t)(0x1243e07cu));
  /* 1241860d push 0 */
  push32((uint32_t)(0x0u));
  /* 1241860f push 0 */
  push32((uint32_t)(0x0u));
  /* 12418611 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418613 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418615 call 0x12415b00 */
  push32(0x1241861au); f_12415b00();
  /* 1241861a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241861d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418620 jne 0x12418623 */
  if (!C.zf) goto L_12418623;
  /* 12418622 int3  */
  x86_unimpl("int3 @ 0x12418622");
L_12418623:;
  /* 12418623 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12418625 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12418627 jne 0x124185eb */
  if (!C.zf) goto L_124185eb;
  /* 12418629 cmp dword ptr [0x124441d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124441d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418630 je 0x1241864b */
  if (C.zf) goto L_1241864b;
  /* 12418632 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418635 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12418638 push ecx */
  push32((uint32_t)(ECX));
  /* 12418639 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241863c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241863f push edx */
  push32((uint32_t)(EDX));
  /* 12418640 call dword ptr [0x124441d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124441d8))), 0x12418646u);
  /* 12418646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418649 jmp 0x12418657 */
  goto L_12418657;
L_1241864b:;
  /* 1241864b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241864e push eax */
  push32((uint32_t)(EAX));
  /* 1241864f call 0x12418740 */
  push32(0x12418654u); f_12418740();
  /* 12418654 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12418657:;
  /* 12418657 jmp 0x124186fd */
  goto L_124186fd;
L_1241865c:;
  /* 1241865c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241865f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418663 jne 0x124186a2 */
  if (!C.zf) goto L_124186a2;
L_12418665:;
  /* 12418665 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418668 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1241866b push eax */
  push32((uint32_t)(EAX));
  /* 1241866c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241866f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418672 push ecx */
  push32((uint32_t)(ECX));
  /* 12418673 push 0x1243e054 */
  push32((uint32_t)(0x1243e054u));
  /* 12418678 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241867a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241867c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241867e push 0 */
  push32((uint32_t)(0x0u));
  /* 12418680 call 0x12415b00 */
  push32(0x12418685u); f_12415b00();
  /* 12418685 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418688 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241868b jne 0x1241868e */
  if (!C.zf) goto L_1241868e;
  /* 1241868d int3  */
  x86_unimpl("int3 @ 0x1241868d");
L_1241868e:;
  /* 1241868e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12418690 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12418692 jne 0x12418665 */
  if (!C.zf) goto L_12418665;
  /* 12418694 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418697 push eax */
  push32((uint32_t)(EAX));
  /* 12418698 call 0x12418740 */
  push32(0x1241869du); f_12418740();
  /* 1241869d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124186a0 jmp 0x124186fd */
  goto L_124186fd;
L_124186a2:;
  /* 124186a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124186a5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 124186a8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 124186ae cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124186b1 jne 0x124186fd */
  if (!C.zf) goto L_124186fd;
L_124186b3:;
  /* 124186b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124186b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 124186b9 push ecx */
  push32((uint32_t)(ECX));
  /* 124186ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124186bd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 124186c0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 124186c3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 124186c8 push eax */
  push32((uint32_t)(EAX));
  /* 124186c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124186cc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124186cf push ecx */
  push32((uint32_t)(ECX));
  /* 124186d0 push 0x1243e020 */
  push32((uint32_t)(0x1243e020u));
  /* 124186d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124186d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124186d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124186db push 0 */
  push32((uint32_t)(0x0u));
  /* 124186dd call 0x12415b00 */
  push32(0x124186e2u); f_12415b00();
  /* 124186e2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124186e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124186e8 jne 0x124186eb */
  if (!C.zf) goto L_124186eb;
  /* 124186ea int3  */
  x86_unimpl("int3 @ 0x124186ea");
L_124186eb:;
  /* 124186eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124186ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124186ef jne 0x124186b3 */
  if (!C.zf) goto L_124186b3;
  /* 124186f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124186f4 push eax */
  push32((uint32_t)(EAX));
  /* 124186f5 call 0x12418740 */
  push32(0x124186fau); f_12418740();
  /* 124186fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124186fd:;
  /* 124186fd jmp 0x124184d8 */
  goto L_124184d8;
L_12418702:;
  /* 12418702 push 9 */
  push32((uint32_t)(0x9u));
  /* 12418704 call 0x1241a4e0 */
  push32(0x12418709u); f_1241a4e0();
  /* 12418709 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241870c:;
  /* 1241870c push 0x1243e008 */
  push32((uint32_t)(0x1243e008u));
  /* 12418711 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 12418716 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241871a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241871c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241871e call 0x12415b00 */
  push32(0x12418723u); f_12415b00();
  /* 12418723 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418726 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418729 jne 0x1241872c */
  if (!C.zf) goto L_1241872c;
  /* 1241872b int3  */
  x86_unimpl("int3 @ 0x1241872b");
L_1241872c:;
  /* 1241872c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241872e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12418730 jne 0x1241870c */
  if (!C.zf) goto L_1241870c;
  /* 12418732 pop edi */
  EDI = (pop32());
  /* 12418733 pop esi */
  ESI = (pop32());
  /* 12418734 pop ebx */
  EBX = (pop32());
  /* 12418735 mov esp, ebp */
  ESP = (EBP);
  /* 12418737 pop ebp */
  EBP = (pop32());
  /* 12418738 ret  */
  ESPCHK(0x12418480u, _esp0);
  ESP += 4; return;
}

/* FUN_10008740 @ 0x12418740 (276 bytes, 89 insns) */
void f_12418740(void) {
  FTRACE(0x12418740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12418740 push ebp */
  push32((uint32_t)(EBP));
  /* 12418741 mov ebp, esp */
  EBP = (ESP);
  /* 12418743 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418746 push ebx */
  push32((uint32_t)(EBX));
  /* 12418747 push esi */
  push32((uint32_t)(ESI));
  /* 12418748 push edi */
  push32((uint32_t)(EDI));
  /* 12418749 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12418750 jmp 0x1241875b */
  goto L_1241875b;
L_12418752:;
  /* 12418752 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12418755 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418758 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1241875b:;
  /* 1241875b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241875e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418762 jge 0x1241876f */
  if ((C.sf==C.of)) goto L_1241876f;
  /* 12418764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418767 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1241876a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1241876d jmp 0x12418776 */
  goto L_12418776;
L_1241876f:;
  /* 1241876f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12418776:;
  /* 12418776 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12418779 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241877c jge 0x1241881c */
  if ((C.sf==C.of)) goto L_1241881c;
  /* 12418782 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418785 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418788 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1241878b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1241878e cmp dword ptr [0x12440ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12440ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418795 jle 0x124187b3 */
  if ((C.zf||C.sf!=C.of)) goto L_124187b3;
  /* 12418797 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1241879c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1241879f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 124187a5 push ecx */
  push32((uint32_t)(ECX));
  /* 124187a6 call 0x1241ca50 */
  push32(0x124187abu); f_1241ca50();
  /* 124187ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124187ae mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 124187b1 jmp 0x124187d0 */
  goto L_124187d0;
L_124187b3:;
  /* 124187b3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124187b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124187bc mov eax, dword ptr [0x12440c98] */
  EAX = (r32((uint32_t)(0x12440c98)));
  /* 124187c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 124187c3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 124187c7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 124187cd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_124187d0:;
  /* 124187d0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124187d4 je 0x124187e4 */
  if (C.zf) goto L_124187e4;
  /* 124187d6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124187d9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124187df mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 124187e2 jmp 0x124187eb */
  goto L_124187eb;
L_124187e4:;
  /* 124187e4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_124187eb:;
  /* 124187eb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 124187ee mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 124187f1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 124187f5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 124187f8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124187fe push edx */
  push32((uint32_t)(EDX));
  /* 124187ff push 0x1243e0fc */
  push32((uint32_t)(0x1243e0fcu));
  /* 12418804 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12418807 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241880a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1241880e push ecx */
  push32((uint32_t)(ECX));
  /* 1241880f call 0x1241c950 */
  push32(0x12418814u); f_1241c950();
  /* 12418814 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418817 jmp 0x12418752 */
  goto L_12418752;
L_1241881c:;
  /* 1241881c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1241881f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12418824:;
  /* 12418824 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12418827 push eax */
  push32((uint32_t)(EAX));
  /* 12418828 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1241882b push ecx */
  push32((uint32_t)(ECX));
  /* 1241882c push 0x1243e0ec */
  push32((uint32_t)(0x1243e0ecu));
  /* 12418831 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418833 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418835 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418837 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418839 call 0x12415b00 */
  push32(0x1241883eu); f_12415b00();
  /* 1241883e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418841 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418844 jne 0x12418847 */
  if (!C.zf) goto L_12418847;
  /* 12418846 int3  */
  x86_unimpl("int3 @ 0x12418846");
L_12418847:;
  /* 12418847 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12418849 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241884b jne 0x12418824 */
  if (!C.zf) goto L_12418824;
  /* 1241884d pop edi */
  EDI = (pop32());
  /* 1241884e pop esi */
  ESI = (pop32());
  /* 1241884f pop ebx */
  EBX = (pop32());
  /* 12418850 mov esp, ebp */
  ESP = (EBP);
  /* 12418852 pop ebp */
  EBP = (pop32());
  /* 12418853 ret  */
  ESPCHK(0x12418740u, _esp0);
  ESP += 4; return;
}

/* FUN_10008860 @ 0x12418860 (116 bytes, 46 insns) */
void f_12418860(void) {
  FTRACE(0x12418860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12418860 push ebp */
  push32((uint32_t)(EBP));
  /* 12418861 mov ebp, esp */
  EBP = (ESP);
  /* 12418863 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418866 push ebx */
  push32((uint32_t)(EBX));
  /* 12418867 push esi */
  push32((uint32_t)(ESI));
  /* 12418868 push edi */
  push32((uint32_t)(EDI));
  /* 12418869 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1241886c push eax */
  push32((uint32_t)(EAX));
  /* 1241886d call 0x124181e0 */
  push32(0x12418872u); f_124181e0();
  /* 12418872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418875 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418879 jne 0x12418894 */
  if (!C.zf) goto L_12418894;
  /* 1241887b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241887f jne 0x12418894 */
  if (!C.zf) goto L_12418894;
  /* 12418881 mov ecx, dword ptr [0x12440a84] */
  ECX = (r32((uint32_t)(0x12440a84)));
  /* 12418887 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1241888a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241888c je 0x124188cb */
  if (C.zf) goto L_124188cb;
  /* 1241888e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418892 je 0x124188cb */
  if (C.zf) goto L_124188cb;
L_12418894:;
  /* 12418894 push 0x1243e104 */
  push32((uint32_t)(0x1243e104u));
  /* 12418899 push 0x1243dad0 */
  push32((uint32_t)(0x1243dad0u));
  /* 1241889e push 0 */
  push32((uint32_t)(0x0u));
  /* 124188a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124188a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124188a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 124188a6 call 0x12415b00 */
  push32(0x124188abu); f_12415b00();
  /* 124188ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124188ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124188b1 jne 0x124188b4 */
  if (!C.zf) goto L_124188b4;
  /* 124188b3 int3  */
  x86_unimpl("int3 @ 0x124188b3");
L_124188b4:;
  /* 124188b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124188b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124188b8 jne 0x12418894 */
  if (!C.zf) goto L_12418894;
  /* 124188ba push 0 */
  push32((uint32_t)(0x0u));
  /* 124188bc call 0x12418480 */
  push32(0x124188c1u); f_12418480();
  /* 124188c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124188c4 mov eax, 1 */
  EAX = (0x1u);
  /* 124188c9 jmp 0x124188cd */
  goto L_124188cd;
L_124188cb:;
  /* 124188cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_124188cd:;
  /* 124188cd pop edi */
  EDI = (pop32());
  /* 124188ce pop esi */
  ESI = (pop32());
  /* 124188cf pop ebx */
  EBX = (pop32());
  /* 124188d0 mov esp, ebp */
  ESP = (EBP);
  /* 124188d2 pop ebp */
  EBP = (pop32());
  /* 124188d3 ret  */
  ESPCHK(0x12418860u, _esp0);
  ESP += 4; return;
}

/* FUN_100088e0 @ 0x124188e0 (197 bytes, 79 insns) */
void f_124188e0(void) {
  FTRACE(0x124188e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124188e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124188e1 mov ebp, esp */
  EBP = (ESP);
  /* 124188e3 push ecx */
  push32((uint32_t)(ECX));
  /* 124188e4 push ebx */
  push32((uint32_t)(EBX));
  /* 124188e5 push esi */
  push32((uint32_t)(ESI));
  /* 124188e6 push edi */
  push32((uint32_t)(EDI));
  /* 124188e7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124188eb jne 0x124188f2 */
  if (!C.zf) goto L_124188f2;
  /* 124188ed jmp 0x1241899e */
  goto L_1241899e;
L_124188f2:;
  /* 124188f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 124188f9 jmp 0x12418904 */
  goto L_12418904;
L_124188fb:;
  /* 124188fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124188fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418901 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12418904:;
  /* 12418904 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418908 jge 0x1241894e */
  if ((C.sf==C.of)) goto L_1241894e;
L_1241890a:;
  /* 1241890a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241890d mov edx, dword ptr [ecx*4 + 0x12440a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440a94)));
  /* 12418914 push edx */
  push32((uint32_t)(EDX));
  /* 12418915 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418918 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241891b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1241891f push edx */
  push32((uint32_t)(EDX));
  /* 12418920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418923 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418926 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1241892a push edx */
  push32((uint32_t)(EDX));
  /* 1241892b push 0x1243e160 */
  push32((uint32_t)(0x1243e160u));
  /* 12418930 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418932 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418934 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418936 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418938 call 0x12415b00 */
  push32(0x1241893du); f_12415b00();
  /* 1241893d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418940 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418943 jne 0x12418946 */
  if (!C.zf) goto L_12418946;
  /* 12418945 int3  */
  x86_unimpl("int3 @ 0x12418945");
L_12418946:;
  /* 12418946 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418948 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241894a jne 0x1241890a */
  if (!C.zf) goto L_1241890a;
  /* 1241894c jmp 0x124188fb */
  goto L_124188fb;
L_1241894e:;
  /* 1241894e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418951 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12418954 push edx */
  push32((uint32_t)(EDX));
  /* 12418955 push 0x1243e13c */
  push32((uint32_t)(0x1243e13cu));
  /* 1241895a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241895c push 0 */
  push32((uint32_t)(0x0u));
  /* 1241895e push 0 */
  push32((uint32_t)(0x0u));
  /* 12418960 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418962 call 0x12415b00 */
  push32(0x12418967u); f_12415b00();
  /* 12418967 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241896a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241896d jne 0x12418970 */
  if (!C.zf) goto L_12418970;
  /* 1241896f int3  */
  x86_unimpl("int3 @ 0x1241896f");
L_12418970:;
  /* 12418970 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418974 jne 0x1241894e */
  if (!C.zf) goto L_1241894e;
L_12418976:;
  /* 12418976 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418979 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1241897c push edx */
  push32((uint32_t)(EDX));
  /* 1241897d push 0x1243e11c */
  push32((uint32_t)(0x1243e11cu));
  /* 12418982 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418984 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418986 push 0 */
  push32((uint32_t)(0x0u));
  /* 12418988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241898a call 0x12415b00 */
  push32(0x1241898fu); f_12415b00();
  /* 1241898f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418992 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418995 jne 0x12418998 */
  if (!C.zf) goto L_12418998;
  /* 12418997 int3  */
  x86_unimpl("int3 @ 0x12418997");
L_12418998:;
  /* 12418998 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241899a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241899c jne 0x12418976 */
  if (!C.zf) goto L_12418976;
L_1241899e:;
  /* 1241899e pop edi */
  EDI = (pop32());
  /* 1241899f pop esi */
  ESI = (pop32());
  /* 124189a0 pop ebx */
  EBX = (pop32());
  /* 124189a1 mov esp, ebp */
  ESP = (EBP);
  /* 124189a3 pop ebp */
  EBP = (pop32());
  /* 124189a4 ret  */
  ESPCHK(0x124188e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089b0 @ 0x124189b0 (329 bytes, 102 insns) */
void f_124189b0(void) {
  FTRACE(0x124189b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124189b0 push ebp */
  push32((uint32_t)(EBP));
  /* 124189b1 mov ebp, esp */
  EBP = (ESP);
  /* 124189b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124189b6 cmp dword ptr [0x12444350], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12444350))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124189bd jne 0x124189c4 */
  if (!C.zf) goto L_124189c4;
  /* 124189bf call 0x1241d2f0 */
  push32(0x124189c4u); f_1241d2f0();
L_124189c4:;
  /* 124189c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 124189cb mov eax, dword ptr [0x12442814] */
  EAX = (r32((uint32_t)(0x12442814)));
  /* 124189d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_124189d3:;
  /* 124189d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124189d6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124189d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124189db je 0x12418a09 */
  if (C.zf) goto L_12418a09;
  /* 124189dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124189e0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 124189e3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124189e6 je 0x124189f1 */
  if (C.zf) goto L_124189f1;
  /* 124189e8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124189eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124189ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_124189f1:;
  /* 124189f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124189f4 push eax */
  push32((uint32_t)(EAX));
  /* 124189f5 call 0x12419870 */
  push32(0x124189fau); f_12419870();
  /* 124189fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124189fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418a00 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12418a04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12418a07 jmp 0x124189d3 */
  goto L_124189d3;
L_12418a09:;
  /* 12418a09 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12418a0b push 0x1243e180 */
  push32((uint32_t)(0x1243e180u));
  /* 12418a10 push 2 */
  push32((uint32_t)(0x2u));
  /* 12418a12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12418a15 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12418a1c push ecx */
  push32((uint32_t)(ECX));
  /* 12418a1d call 0x12416a40 */
  push32(0x12418a22u); f_12416a40();
  /* 12418a22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418a25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12418a28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418a2b mov dword ptr [0x12442848], edx */
  w32((uint32_t)(0x12442848), (EDX));
  /* 12418a31 cmp dword ptr [0x12442848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418a38 jne 0x12418a44 */
  if (!C.zf) goto L_12418a44;
  /* 12418a3a push 9 */
  push32((uint32_t)(0x9u));
  /* 12418a3c call 0x124159b0 */
  push32(0x12418a41u); f_124159b0();
  /* 12418a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12418a44:;
  /* 12418a44 mov eax, dword ptr [0x12442814] */
  EAX = (r32((uint32_t)(0x12442814)));
  /* 12418a49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12418a4c jmp 0x12418a57 */
  goto L_12418a57;
L_12418a4e:;
  /* 12418a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418a51 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418a54 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12418a57:;
  /* 12418a57 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418a5a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12418a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418a5f je 0x12418ac7 */
  if (C.zf) goto L_12418ac7;
  /* 12418a61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418a64 push ecx */
  push32((uint32_t)(ECX));
  /* 12418a65 call 0x12419870 */
  push32(0x12418a6au); f_12419870();
  /* 12418a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418a6d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418a70 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12418a73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418a76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12418a79 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418a7c je 0x12418ac5 */
  if (C.zf) goto L_12418ac5;
  /* 12418a7e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12418a80 push 0x1243e180 */
  push32((uint32_t)(0x1243e180u));
  /* 12418a85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12418a87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12418a8a push ecx */
  push32((uint32_t)(ECX));
  /* 12418a8b call 0x12416a40 */
  push32(0x12418a90u); f_12416a40();
  /* 12418a90 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418a93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418a96 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12418a98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418a9b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418a9e jne 0x12418aaa */
  if (!C.zf) goto L_12418aaa;
  /* 12418aa0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12418aa2 call 0x124159b0 */
  push32(0x12418aa7u); f_124159b0();
  /* 12418aa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12418aaa:;
  /* 12418aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418aad push ecx */
  push32((uint32_t)(ECX));
  /* 12418aae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418ab1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12418ab3 push eax */
  push32((uint32_t)(EAX));
  /* 12418ab4 call 0x124199f0 */
  push32(0x12418ab9u); f_124199f0();
  /* 12418ab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418abc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418abf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418ac2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12418ac5:;
  /* 12418ac5 jmp 0x12418a4e */
  goto L_12418a4e;
L_12418ac7:;
  /* 12418ac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12418ac9 mov edx, dword ptr [0x12442814] */
  EDX = (r32((uint32_t)(0x12442814)));
  /* 12418acf push edx */
  push32((uint32_t)(EDX));
  /* 12418ad0 call 0x124174d0 */
  push32(0x12418ad5u); f_124174d0();
  /* 12418ad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418ad8 mov dword ptr [0x12442814], 0 */
  w32((uint32_t)(0x12442814), (0x0u));
  /* 12418ae2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418ae5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12418aeb mov dword ptr [0x12444340], 1 */
  w32((uint32_t)(0x12444340), (0x1u));
  /* 12418af5 mov esp, ebp */
  ESP = (EBP);
  /* 12418af7 pop ebp */
  EBP = (pop32());
  /* 12418af8 ret  */
  ESPCHK(0x124189b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b00 @ 0x12418b00 (216 bytes, 69 insns) */
void f_12418b00(void) {
  FTRACE(0x12418b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12418b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12418b01 mov ebp, esp */
  EBP = (ESP);
  /* 12418b03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418b06 cmp dword ptr [0x12444350], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12444350))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418b0d jne 0x12418b14 */
  if (!C.zf) goto L_12418b14;
  /* 12418b0f call 0x1241d2f0 */
  push32(0x12418b14u); f_1241d2f0();
L_12418b14:;
  /* 12418b14 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12418b19 push 0x12442884 */
  push32((uint32_t)(0x12442884u));
  /* 12418b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12418b20 call dword ptr [0x12445374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445374))), 0x12418b26u);
  /* 12418b26 mov dword ptr [0x12442858], 0x12442884 */
  w32((uint32_t)(0x12442858), (0x12442884u));
  /* 12418b30 mov eax, dword ptr [0x1244436c] */
  EAX = (r32((uint32_t)(0x1244436c)));
  /* 12418b35 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12418b38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12418b3a jne 0x12418b47 */
  if (!C.zf) goto L_12418b47;
  /* 12418b3c mov edx, dword ptr [0x12442858] */
  EDX = (r32((uint32_t)(0x12442858)));
  /* 12418b42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12418b45 jmp 0x12418b4f */
  goto L_12418b4f;
L_12418b47:;
  /* 12418b47 mov eax, dword ptr [0x1244436c] */
  EAX = (r32((uint32_t)(0x1244436c)));
  /* 12418b4c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12418b4f:;
  /* 12418b4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12418b52 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12418b55 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12418b58 push edx */
  push32((uint32_t)(EDX));
  /* 12418b59 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12418b5c push eax */
  push32((uint32_t)(EAX));
  /* 12418b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12418b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12418b61 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12418b64 push ecx */
  push32((uint32_t)(ECX));
  /* 12418b65 call 0x12418be0 */
  push32(0x12418b6au); f_12418be0();
  /* 12418b6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418b6d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12418b72 push 0x1243e18c */
  push32((uint32_t)(0x1243e18cu));
  /* 12418b77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12418b79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418b7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418b7f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12418b82 push ecx */
  push32((uint32_t)(ECX));
  /* 12418b83 call 0x12416a40 */
  push32(0x12418b88u); f_12416a40();
  /* 12418b88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418b8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12418b8e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418b92 jne 0x12418b9e */
  if (!C.zf) goto L_12418b9e;
  /* 12418b94 push 8 */
  push32((uint32_t)(0x8u));
  /* 12418b96 call 0x124159b0 */
  push32(0x12418b9bu); f_124159b0();
  /* 12418b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12418b9e:;
  /* 12418b9e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12418ba1 push edx */
  push32((uint32_t)(EDX));
  /* 12418ba2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12418ba5 push eax */
  push32((uint32_t)(EAX));
  /* 12418ba6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418ba9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12418bac lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12418baf push eax */
  push32((uint32_t)(EAX));
  /* 12418bb0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12418bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12418bb4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12418bb7 push edx */
  push32((uint32_t)(EDX));
  /* 12418bb8 call 0x12418be0 */
  push32(0x12418bbdu); f_12418be0();
  /* 12418bbd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12418bc0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418bc3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418bc6 mov dword ptr [0x1244283c], eax */
  w32((uint32_t)(0x1244283c), (EAX));
  /* 12418bcb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12418bce mov dword ptr [0x12442840], ecx */
  w32((uint32_t)(0x12442840), (ECX));
  /* 12418bd4 mov esp, ebp */
  ESP = (EBP);
  /* 12418bd6 pop ebp */
  EBP = (pop32());
  /* 12418bd7 ret  */
  ESPCHK(0x12418b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008be0 @ 0x12418be0 (1060 bytes, 360 insns) */
void f_12418be0(void) {
  FTRACE(0x12418be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12418be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12418be1 mov ebp, esp */
  EBP = (ESP);
  /* 12418be3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418be6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418be9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12418bef mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12418bf2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12418bf8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12418bfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12418bfe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418c02 je 0x12418c15 */
  if (C.zf) goto L_12418c15;
  /* 12418c04 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418c07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418c0a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12418c0c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418c0f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418c12 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12418c15:;
  /* 12418c15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418c18 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12418c1b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418c1e jne 0x12418ced */
  if (!C.zf) goto L_12418ced;
L_12418c24:;
  /* 12418c24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418c27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418c2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12418c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418c30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12418c33 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418c36 je 0x12418cb2 */
  if (C.zf) goto L_12418cb2;
  /* 12418c38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418c3b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12418c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418c40 je 0x12418cb2 */
  if (C.zf) goto L_12418cb2;
  /* 12418c42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418c45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12418c47 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12418c49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418c4b mov al, byte ptr [edx + 0x124440a1] */
  AL = (r8((uint32_t)(EDX + 0x124440a1)));
  /* 12418c51 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12418c54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418c56 je 0x12418c87 */
  if (C.zf) goto L_12418c87;
  /* 12418c58 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418c5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12418c5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418c60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418c63 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12418c65 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418c69 je 0x12418c87 */
  if (C.zf) goto L_12418c87;
  /* 12418c6b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418c6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418c71 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12418c73 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12418c75 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418c78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418c7b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12418c7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418c81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418c84 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12418c87:;
  /* 12418c87 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418c8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12418c8c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418c8f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418c92 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12418c94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418c98 je 0x12418cad */
  if (C.zf) goto L_12418cad;
  /* 12418c9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418c9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418ca0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12418ca2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12418ca4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418ca7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418caa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12418cad:;
  /* 12418cad jmp 0x12418c24 */
  goto L_12418c24;
L_12418cb2:;
  /* 12418cb2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418cb5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12418cb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418cba mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418cbd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12418cbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418cc3 je 0x12418cd4 */
  if (C.zf) goto L_12418cd4;
  /* 12418cc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418cc8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12418ccb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418cce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418cd1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12418cd4:;
  /* 12418cd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418cd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12418cda cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418cdd jne 0x12418ce8 */
  if (!C.zf) goto L_12418ce8;
  /* 12418cdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418ce2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418ce5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12418ce8:;
  /* 12418ce8 jmp 0x12418dbc */
  goto L_12418dbc;
L_12418ced:;
  /* 12418ced mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418cf0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12418cf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418cf5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418cf8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12418cfa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418cfe je 0x12418d13 */
  if (C.zf) goto L_12418d13;
  /* 12418d00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418d06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12418d08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12418d0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418d0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418d10 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12418d13:;
  /* 12418d13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418d16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12418d18 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12418d1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418d1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418d21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12418d24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418d27 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12418d2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12418d2f mov dl, byte ptr [ecx + 0x124440a1] */
  DL = (r8((uint32_t)(ECX + 0x124440a1)));
  /* 12418d35 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12418d38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12418d3a je 0x12418d6b */
  if (C.zf) goto L_12418d6b;
  /* 12418d3c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418d3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12418d41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418d44 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418d47 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12418d49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418d4d je 0x12418d62 */
  if (C.zf) goto L_12418d62;
  /* 12418d4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418d55 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12418d57 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12418d59 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418d5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418d5f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12418d62:;
  /* 12418d62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418d65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418d68 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12418d6b:;
  /* 12418d6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418d6e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12418d74 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418d77 je 0x12418d97 */
  if (C.zf) goto L_12418d97;
  /* 12418d79 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418d7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12418d81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418d83 je 0x12418d97 */
  if (C.zf) goto L_12418d97;
  /* 12418d85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418d88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12418d8e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418d91 jne 0x12418ced */
  if (!C.zf) goto L_12418ced;
L_12418d97:;
  /* 12418d97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12418d9a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12418da0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12418da2 jne 0x12418daf */
  if (!C.zf) goto L_12418daf;
  /* 12418da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418da7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418daa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12418dad jmp 0x12418dbc */
  goto L_12418dbc;
L_12418daf:;
  /* 12418daf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418db3 je 0x12418dbc */
  if (C.zf) goto L_12418dbc;
  /* 12418db5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418db8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12418dbc:;
  /* 12418dbc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12418dc3:;
  /* 12418dc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418dc6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12418dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418dcb je 0x12418dee */
  if (C.zf) goto L_12418dee;
L_12418dcd:;
  /* 12418dcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418dd0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12418dd3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418dd6 je 0x12418de3 */
  if (C.zf) goto L_12418de3;
  /* 12418dd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418ddb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12418dde cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418de1 jne 0x12418dee */
  if (!C.zf) goto L_12418dee;
L_12418de3:;
  /* 12418de3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418de6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418de9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12418dec jmp 0x12418dcd */
  goto L_12418dcd;
L_12418dee:;
  /* 12418dee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418df1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12418df4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12418df6 jne 0x12418dfd */
  if (!C.zf) goto L_12418dfd;
  /* 12418df8 jmp 0x12418fdb */
  goto L_12418fdb;
L_12418dfd:;
  /* 12418dfd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418e01 je 0x12418e14 */
  if (C.zf) goto L_12418e14;
  /* 12418e03 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418e06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418e09 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12418e0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418e0e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418e11 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12418e14:;
  /* 12418e14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12418e17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12418e19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418e1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12418e1f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12418e21:;
  /* 12418e21 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12418e28 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12418e2f:;
  /* 12418e2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418e32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12418e35 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418e38 jne 0x12418e4e */
  if (!C.zf) goto L_12418e4e;
  /* 12418e3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418e3d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418e40 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12418e43 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12418e46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418e49 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12418e4c jmp 0x12418e2f */
  goto L_12418e2f;
L_12418e4e:;
  /* 12418e4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418e51 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12418e54 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418e57 jne 0x12418eaa */
  if (!C.zf) goto L_12418eaa;
  /* 12418e59 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12418e5c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12418e5e mov ecx, 2 */
  ECX = (0x2u);
  /* 12418e63 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12418e65 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12418e67 jne 0x12418ea2 */
  if (!C.zf) goto L_12418ea2;
  /* 12418e69 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418e6d je 0x12418e8f */
  if (C.zf) goto L_12418e8f;
  /* 12418e6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418e72 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12418e76 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418e79 jne 0x12418e86 */
  if (!C.zf) goto L_12418e86;
  /* 12418e7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418e7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418e81 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12418e84 jmp 0x12418e8d */
  goto L_12418e8d;
L_12418e86:;
  /* 12418e86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12418e8d:;
  /* 12418e8d jmp 0x12418e96 */
  goto L_12418e96;
L_12418e8f:;
  /* 12418e8f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12418e96:;
  /* 12418e96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12418e98 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418e9c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12418e9f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12418ea2:;
  /* 12418ea2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12418ea5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12418ea7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12418eaa:;
  /* 12418eaa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12418ead mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12418eb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12418eb3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12418eb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12418eb8 je 0x12418ede */
  if (C.zf) goto L_12418ede;
  /* 12418eba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418ebe je 0x12418ecf */
  if (C.zf) goto L_12418ecf;
  /* 12418ec0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418ec3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12418ec6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418ec9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418ecc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12418ecf:;
  /* 12418ecf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418ed2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12418ed4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418ed7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418eda mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12418edc jmp 0x12418eaa */
  goto L_12418eaa;
L_12418ede:;
  /* 12418ede mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418ee1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12418ee4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12418ee6 je 0x12418f04 */
  if (C.zf) goto L_12418f04;
  /* 12418ee8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418eec jne 0x12418f09 */
  if (!C.zf) goto L_12418f09;
  /* 12418eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418ef1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12418ef4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418ef7 je 0x12418f04 */
  if (C.zf) goto L_12418f04;
  /* 12418ef9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418efc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12418eff cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418f02 jne 0x12418f09 */
  if (!C.zf) goto L_12418f09;
L_12418f04:;
  /* 12418f04 jmp 0x12418fb4 */
  goto L_12418fb4;
L_12418f09:;
  /* 12418f09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418f0d je 0x12418fa6 */
  if (C.zf) goto L_12418fa6;
  /* 12418f13 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418f17 je 0x12418f6d */
  if (C.zf) goto L_12418f6d;
  /* 12418f19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418f1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418f1e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12418f20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12418f22 mov cl, byte ptr [eax + 0x124440a1] */
  CL = (r8((uint32_t)(EAX + 0x124440a1)));
  /* 12418f28 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12418f2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12418f2d je 0x12418f58 */
  if (C.zf) goto L_12418f58;
  /* 12418f2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418f32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418f35 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12418f37 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12418f39 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418f3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418f3f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12418f42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418f45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418f48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12418f4b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418f4e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12418f50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418f53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418f56 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12418f58:;
  /* 12418f58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418f5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418f5e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12418f60 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12418f62 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418f65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418f68 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12418f6b jmp 0x12418f99 */
  goto L_12418f99;
L_12418f6d:;
  /* 12418f6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418f70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12418f72 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12418f74 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12418f76 mov cl, byte ptr [eax + 0x124440a1] */
  CL = (r8((uint32_t)(EAX + 0x124440a1)));
  /* 12418f7c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12418f7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12418f81 je 0x12418f99 */
  if (C.zf) goto L_12418f99;
  /* 12418f83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418f86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418f89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12418f8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418f8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12418f91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418f94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418f97 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12418f99:;
  /* 12418f99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418f9c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12418f9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418fa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418fa4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12418fa6:;
  /* 12418fa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12418fa9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418fac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12418faf jmp 0x12418e21 */
  goto L_12418e21;
L_12418fb4:;
  /* 12418fb4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418fb8 je 0x12418fc9 */
  if (C.zf) goto L_12418fc9;
  /* 12418fba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418fbd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12418fc0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12418fc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418fc6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12418fc9:;
  /* 12418fc9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418fcc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12418fce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418fd1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12418fd4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12418fd6 jmp 0x12418dc3 */
  goto L_12418dc3;
L_12418fdb:;
  /* 12418fdb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12418fdf je 0x12418ff3 */
  if (C.zf) goto L_12418ff3;
  /* 12418fe1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418fe4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12418fea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12418fed add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418ff0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12418ff3:;
  /* 12418ff3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12418ff6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12418ff8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12418ffb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12418ffe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12419000 mov esp, ebp */
  ESP = (EBP);
  /* 12419002 pop ebp */
  EBP = (pop32());
  /* 12419003 ret  */
  ESPCHK(0x12418be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009010 @ 0x12419010 (537 bytes, 173 insns) */
void f_12419010(void) {
  FTRACE(0x12419010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419010 push ebp */
  push32((uint32_t)(EBP));
  /* 12419011 mov ebp, esp */
  EBP = (ESP);
  /* 12419013 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419016 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1241901d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12419024 cmp dword ptr [0x12442988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241902b jne 0x1241906a */
  if (!C.zf) goto L_1241906a;
  /* 1241902d call dword ptr [0x12445388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445388))), 0x12419033u);
  /* 12419033 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12419036 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241903a je 0x12419048 */
  if (C.zf) goto L_12419048;
  /* 1241903c mov dword ptr [0x12442988], 1 */
  w32((uint32_t)(0x12442988), (0x1u));
  /* 12419046 jmp 0x1241906a */
  goto L_1241906a;
L_12419048:;
  /* 12419048 call dword ptr [0x124453c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c8))), 0x1241904eu);
  /* 1241904e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12419051 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419055 je 0x12419063 */
  if (C.zf) goto L_12419063;
  /* 12419057 mov dword ptr [0x12442988], 2 */
  w32((uint32_t)(0x12442988), (0x2u));
  /* 12419061 jmp 0x1241906a */
  goto L_1241906a;
L_12419063:;
  /* 12419063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12419065 jmp 0x12419225 */
  goto L_12419225;
L_1241906a:;
  /* 1241906a cmp dword ptr [0x12442988], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442988))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419071 jne 0x1241916e */
  if (!C.zf) goto L_1241916e;
  /* 12419077 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241907b jne 0x12419093 */
  if (!C.zf) goto L_12419093;
  /* 1241907d call dword ptr [0x12445388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445388))), 0x12419083u);
  /* 12419083 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12419086 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241908a jne 0x12419093 */
  if (!C.zf) goto L_12419093;
  /* 1241908c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241908e jmp 0x12419225 */
  goto L_12419225;
L_12419093:;
  /* 12419093 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12419096 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12419099:;
  /* 12419099 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241909c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241909e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 124190a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124190a3 je 0x124190c5 */
  if (C.zf) goto L_124190c5;
  /* 124190a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124190a8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124190ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 124190ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124190b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124190b3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 124190b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124190b8 jne 0x124190c3 */
  if (!C.zf) goto L_124190c3;
  /* 124190ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124190bd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124190c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_124190c3:;
  /* 124190c3 jmp 0x12419099 */
  goto L_12419099;
L_124190c5:;
  /* 124190c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124190c8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124190cb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 124190cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124190d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124190d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124190d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124190d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124190d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 124190db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124190de push edx */
  push32((uint32_t)(EDX));
  /* 124190df mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 124190e2 push eax */
  push32((uint32_t)(EAX));
  /* 124190e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124190e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 124190e7 call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x124190edu);
  /* 124190ed mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 124190f0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124190f4 je 0x12419114 */
  if (C.zf) goto L_12419114;
  /* 124190f6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 124190f8 push 0x1243e198 */
  push32((uint32_t)(0x1243e198u));
  /* 124190fd push 2 */
  push32((uint32_t)(0x2u));
  /* 124190ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12419102 push ecx */
  push32((uint32_t)(ECX));
  /* 12419103 call 0x12416a40 */
  push32(0x12419108u); f_12416a40();
  /* 12419108 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241910b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241910e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419112 jne 0x12419125 */
  if (!C.zf) goto L_12419125;
L_12419114:;
  /* 12419114 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12419117 push edx */
  push32((uint32_t)(EDX));
  /* 12419118 call dword ptr [0x124453c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c0))), 0x1241911eu);
  /* 1241911e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12419120 jmp 0x12419225 */
  goto L_12419225;
L_12419125:;
  /* 12419125 push 0 */
  push32((uint32_t)(0x0u));
  /* 12419127 push 0 */
  push32((uint32_t)(0x0u));
  /* 12419129 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241912c push eax */
  push32((uint32_t)(EAX));
  /* 1241912d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419130 push ecx */
  push32((uint32_t)(ECX));
  /* 12419131 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419134 push edx */
  push32((uint32_t)(EDX));
  /* 12419135 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12419138 push eax */
  push32((uint32_t)(EAX));
  /* 12419139 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241913b push 0 */
  push32((uint32_t)(0x0u));
  /* 1241913d call dword ptr [0x124453c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c4))), 0x12419143u);
  /* 12419143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12419145 jne 0x1241915c */
  if (!C.zf) goto L_1241915c;
  /* 12419147 push 2 */
  push32((uint32_t)(0x2u));
  /* 12419149 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241914c push ecx */
  push32((uint32_t)(ECX));
  /* 1241914d call 0x124174d0 */
  push32(0x12419152u); f_124174d0();
  /* 12419152 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419155 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1241915c:;
  /* 1241915c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241915f push edx */
  push32((uint32_t)(EDX));
  /* 12419160 call dword ptr [0x124453c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c0))), 0x12419166u);
  /* 12419166 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419169 jmp 0x12419225 */
  goto L_12419225;
L_1241916e:;
  /* 1241916e cmp dword ptr [0x12442988], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12442988))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419175 jne 0x12419223 */
  if (!C.zf) goto L_12419223;
  /* 1241917b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241917f jne 0x12419197 */
  if (!C.zf) goto L_12419197;
  /* 12419181 call dword ptr [0x124453c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453c8))), 0x12419187u);
  /* 12419187 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1241918a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241918e jne 0x12419197 */
  if (!C.zf) goto L_12419197;
  /* 12419190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12419192 jmp 0x12419225 */
  goto L_12419225;
L_12419197:;
  /* 12419197 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241919a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1241919d:;
  /* 1241919d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124191a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124191a3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124191a5 je 0x124191c5 */
  if (C.zf) goto L_124191c5;
  /* 124191a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124191aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124191ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124191b0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124191b3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 124191b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 124191b8 jne 0x124191c3 */
  if (!C.zf) goto L_124191c3;
  /* 124191ba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124191bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 124191c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_124191c3:;
  /* 124191c3 jmp 0x1241919d */
  goto L_1241919d;
L_124191c5:;
  /* 124191c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124191c8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124191cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124191ce mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 124191d1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 124191d6 push 0x1243e198 */
  push32((uint32_t)(0x1243e198u));
  /* 124191db push 2 */
  push32((uint32_t)(0x2u));
  /* 124191dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 124191e0 push edx */
  push32((uint32_t)(EDX));
  /* 124191e1 call 0x12416a40 */
  push32(0x124191e6u); f_12416a40();
  /* 124191e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124191e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124191ec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124191f0 jne 0x12419200 */
  if (!C.zf) goto L_12419200;
  /* 124191f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 124191f5 push eax */
  push32((uint32_t)(EAX));
  /* 124191f6 call dword ptr [0x124453bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453bc))), 0x124191fcu);
  /* 124191fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 124191fe jmp 0x12419225 */
  goto L_12419225;
L_12419200:;
  /* 12419200 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12419203 push ecx */
  push32((uint32_t)(ECX));
  /* 12419204 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419207 push edx */
  push32((uint32_t)(EDX));
  /* 12419208 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241920b push eax */
  push32((uint32_t)(EAX));
  /* 1241920c call 0x1241d320 */
  push32(0x12419211u); f_1241d320();
  /* 12419211 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419214 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419217 push ecx */
  push32((uint32_t)(ECX));
  /* 12419218 call dword ptr [0x124453bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453bc))), 0x1241921eu);
  /* 1241921e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12419221 jmp 0x12419225 */
  goto L_12419225;
L_12419223:;
  /* 12419223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12419225:;
  /* 12419225 mov esp, ebp */
  ESP = (EBP);
  /* 12419227 pop ebp */
  EBP = (pop32());
  /* 12419228 ret  */
  ESPCHK(0x12419010u, _esp0);
  ESP += 4; return;
}

/* FUN_10009230 @ 0x12419230 (77 bytes, 25 insns) */
void f_12419230(void) {
  FTRACE(0x12419230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419230 push ebp */
  push32((uint32_t)(EBP));
  /* 12419231 mov ebp, esp */
  EBP = (ESP);
  /* 12419233 push 0 */
  push32((uint32_t)(0x0u));
  /* 12419235 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1241923a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241923c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419240 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12419243 push eax */
  push32((uint32_t)(EAX));
  /* 12419244 call dword ptr [0x12445344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445344))), 0x1241924au);
  /* 1241924a mov dword ptr [0x124441cc], eax */
  w32((uint32_t)(0x124441cc), (EAX));
  /* 1241924f cmp dword ptr [0x124441cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124441cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419256 jne 0x1241925c */
  if (!C.zf) goto L_1241925c;
  /* 12419258 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241925a jmp 0x1241927b */
  goto L_1241927b;
L_1241925c:;
  /* 1241925c call 0x1241ace0 */
  push32(0x12419261u); f_1241ace0();
  /* 12419261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12419263 jne 0x12419276 */
  if (!C.zf) goto L_12419276;
  /* 12419265 mov ecx, dword ptr [0x124441cc] */
  ECX = (r32((uint32_t)(0x124441cc)));
  /* 1241926b push ecx */
  push32((uint32_t)(ECX));
  /* 1241926c call dword ptr [0x12445348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445348))), 0x12419272u);
  /* 12419272 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12419274 jmp 0x1241927b */
  goto L_1241927b;
L_12419276:;
  /* 12419276 mov eax, 1 */
  EAX = (0x1u);
L_1241927b:;
  /* 1241927b pop ebp */
  EBP = (pop32());
  /* 1241927c ret  */
  ESPCHK(0x12419230u, _esp0);
  ESP += 4; return;
}

/* FUN_10009280 @ 0x12419280 (156 bytes, 48 insns) */
void f_12419280(void) {
  FTRACE(0x12419280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419280 push ebp */
  push32((uint32_t)(EBP));
  /* 12419281 mov ebp, esp */
  EBP = (ESP);
  /* 12419283 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419286 mov eax, dword ptr [0x124441c8] */
  EAX = (r32((uint32_t)(0x124441c8)));
  /* 1241928b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241928e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12419295 jmp 0x124192a0 */
  goto L_124192a0;
L_12419297:;
  /* 12419297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241929a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241929d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124192a0:;
  /* 124192a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124192a3 cmp edx, dword ptr [0x124441c4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x124441c4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124192a9 jge 0x124192f6 */
  if ((C.sf==C.of)) goto L_124192f6;
  /* 124192ab push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 124192b0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 124192b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124192b8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 124192bb push ecx */
  push32((uint32_t)(ECX));
  /* 124192bc call dword ptr [0x1244533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244533c))), 0x124192c2u);
  /* 124192c2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 124192c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124192c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124192cc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 124192cf push eax */
  push32((uint32_t)(EAX));
  /* 124192d0 call dword ptr [0x1244533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244533c))), 0x124192d6u);
  /* 124192d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124192d9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 124192dc push edx */
  push32((uint32_t)(EDX));
  /* 124192dd push 0 */
  push32((uint32_t)(0x0u));
  /* 124192df mov eax, dword ptr [0x124441cc] */
  EAX = (r32((uint32_t)(0x124441cc)));
  /* 124192e4 push eax */
  push32((uint32_t)(EAX));
  /* 124192e5 call dword ptr [0x12445340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445340))), 0x124192ebu);
  /* 124192eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 124192ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124192f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 124192f4 jmp 0x12419297 */
  goto L_12419297;
L_124192f6:;
  /* 124192f6 mov edx, dword ptr [0x124441c8] */
  EDX = (r32((uint32_t)(0x124441c8)));
  /* 124192fc push edx */
  push32((uint32_t)(EDX));
  /* 124192fd push 0 */
  push32((uint32_t)(0x0u));
  /* 124192ff mov eax, dword ptr [0x124441cc] */
  EAX = (r32((uint32_t)(0x124441cc)));
  /* 12419304 push eax */
  push32((uint32_t)(EAX));
  /* 12419305 call dword ptr [0x12445340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445340))), 0x1241930bu);
  /* 1241930b mov ecx, dword ptr [0x124441cc] */
  ECX = (r32((uint32_t)(0x124441cc)));
  /* 12419311 push ecx */
  push32((uint32_t)(ECX));
  /* 12419312 call dword ptr [0x12445348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445348))), 0x12419318u);
  /* 12419318 mov esp, ebp */
  ESP = (EBP);
  /* 1241931a pop ebp */
  EBP = (pop32());
  /* 1241931b ret  */
  ESPCHK(0x12419280u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12419320 (73 bytes, 19 insns) */
void f_12419320(void) {
  FTRACE(0x12419320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419320 push ebp */
  push32((uint32_t)(EBP));
  /* 12419321 mov ebp, esp */
  EBP = (ESP);
  /* 12419323 cmp dword ptr [0x1244281c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1244281c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241932a je 0x1241933e */
  if (C.zf) goto L_1241933e;
  /* 1241932c cmp dword ptr [0x1244281c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1244281c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419333 jne 0x12419367 */
  if (!C.zf) goto L_12419367;
  /* 12419335 cmp dword ptr [0x12442820], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442820))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241933c jne 0x12419367 */
  if (!C.zf) goto L_12419367;
L_1241933e:;
  /* 1241933e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12419343 call 0x12419370 */
  push32(0x12419348u); f_12419370();
  /* 12419348 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241934b cmp dword ptr [0x1244298c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1244298c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419352 je 0x1241935a */
  if (C.zf) goto L_1241935a;
  /* 12419354 call dword ptr [0x1244298c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244298c))), 0x1241935au);
L_1241935a:;
  /* 1241935a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1241935f call 0x12419370 */
  push32(0x12419364u); f_12419370();
  /* 12419364 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12419367:;
  /* 12419367 pop ebp */
  EBP = (pop32());
  /* 12419368 ret  */
  ESPCHK(0x12419320u, _esp0);
  ESP += 4; return;
}

/* FUN_10009370 @ 0x12419370 (447 bytes, 131 insns) */
void f_12419370(void) {
  FTRACE(0x12419370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419370 push ebp */
  push32((uint32_t)(EBP));
  /* 12419371 mov ebp, esp */
  EBP = (ESP);
  /* 12419373 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419379 push ebx */
  push32((uint32_t)(EBX));
  /* 1241937a push esi */
  push32((uint32_t)(ESI));
  /* 1241937b push edi */
  push32((uint32_t)(EDI));
  /* 1241937c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12419383 jmp 0x1241938e */
  goto L_1241938e;
L_12419385:;
  /* 12419385 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419388 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241938b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1241938e:;
  /* 1241938e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419392 jae 0x124193a7 */
  if (!C.cf) goto L_124193a7;
  /* 12419394 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419397 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241939a cmp edx, dword ptr [ecx*8 + 0x12440ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12440ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124193a1 jne 0x124193a5 */
  if (!C.zf) goto L_124193a5;
  /* 124193a3 jmp 0x124193a7 */
  goto L_124193a7;
L_124193a5:;
  /* 124193a5 jmp 0x12419385 */
  goto L_12419385;
L_124193a7:;
  /* 124193a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124193aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124193ad cmp ecx, dword ptr [eax*8 + 0x12440ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12440ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124193b4 jne 0x12419528 */
  if (!C.zf) goto L_12419528;
  /* 124193ba cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124193c1 je 0x124193e4 */
  if (C.zf) goto L_124193e4;
  /* 124193c3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 124193c6 mov eax, dword ptr [edx*8 + 0x12440ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12440ab4)));
  /* 124193cd push eax */
  push32((uint32_t)(EAX));
  /* 124193ce push 0 */
  push32((uint32_t)(0x0u));
  /* 124193d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 124193d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124193d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 124193d6 call 0x12415b00 */
  push32(0x124193dbu); f_12415b00();
  /* 124193db add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124193de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124193e1 jne 0x124193e4 */
  if (!C.zf) goto L_124193e4;
  /* 124193e3 int3  */
  x86_unimpl("int3 @ 0x124193e3");
L_124193e4:;
  /* 124193e4 cmp dword ptr [0x1244281c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1244281c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124193eb je 0x124193ff */
  if (C.zf) goto L_124193ff;
  /* 124193ed cmp dword ptr [0x1244281c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1244281c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124193f4 jne 0x12419438 */
  if (!C.zf) goto L_12419438;
  /* 124193f6 cmp dword ptr [0x12442820], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12442820))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124193fd jne 0x12419438 */
  if (!C.zf) goto L_12419438;
L_124193ff:;
  /* 124193ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12419401 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12419404 push ecx */
  push32((uint32_t)(ECX));
  /* 12419405 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419408 mov eax, dword ptr [edx*8 + 0x12440ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12440ab4)));
  /* 1241940f push eax */
  push32((uint32_t)(EAX));
  /* 12419410 call 0x12419870 */
  push32(0x12419415u); f_12419870();
  /* 12419415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419418 push eax */
  push32((uint32_t)(EAX));
  /* 12419419 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241941c mov edx, dword ptr [ecx*8 + 0x12440ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12440ab4)));
  /* 12419423 push edx */
  push32((uint32_t)(EDX));
  /* 12419424 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12419426 call dword ptr [0x12445358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445358))), 0x1241942cu);
  /* 1241942c push eax */
  push32((uint32_t)(EAX));
  /* 1241942d call dword ptr [0x1244535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244535c))), 0x12419433u);
  /* 12419433 jmp 0x12419528 */
  goto L_12419528;
L_12419438:;
  /* 12419438 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241943f je 0x12419528 */
  if (C.zf) goto L_12419528;
  /* 12419445 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1241944a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12419450 push eax */
  push32((uint32_t)(EAX));
  /* 12419451 push 0 */
  push32((uint32_t)(0x0u));
  /* 12419453 call dword ptr [0x12445374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445374))), 0x12419459u);
  /* 12419459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241945b jne 0x12419471 */
  if (!C.zf) goto L_12419471;
  /* 1241945d push 0x1243da00 */
  push32((uint32_t)(0x1243da00u));
  /* 12419462 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12419468 push ecx */
  push32((uint32_t)(ECX));
  /* 12419469 call 0x124199f0 */
  push32(0x1241946eu); f_124199f0();
  /* 1241946e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12419471:;
  /* 12419471 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12419477 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1241947a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241947d push eax */
  push32((uint32_t)(EAX));
  /* 1241947e call 0x12419870 */
  push32(0x12419483u); f_12419870();
  /* 12419483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419486 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419489 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241948c jbe 0x124194ba */
  if ((C.cf||C.zf)) goto L_124194ba;
  /* 1241948e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12419494 push ecx */
  push32((uint32_t)(ECX));
  /* 12419495 call 0x12419870 */
  push32(0x1241949au); f_12419870();
  /* 1241949a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241949d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124194a0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 124194a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124194a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 124194a9 push 0x1243d9fc */
  push32((uint32_t)(0x1243d9fcu));
  /* 124194ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 124194b1 push ecx */
  push32((uint32_t)(ECX));
  /* 124194b2 call 0x1241a260 */
  push32(0x124194b7u); f_1241a260();
  /* 124194b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124194ba:;
  /* 124194ba push 0x1243e454 */
  push32((uint32_t)(0x1243e454u));
  /* 124194bf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 124194c5 push edx */
  push32((uint32_t)(EDX));
  /* 124194c6 call 0x124199f0 */
  push32(0x124194cbu); f_124199f0();
  /* 124194cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124194ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 124194d1 push eax */
  push32((uint32_t)(EAX));
  /* 124194d2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 124194d8 push ecx */
  push32((uint32_t)(ECX));
  /* 124194d9 call 0x12419a00 */
  push32(0x124194deu); f_12419a00();
  /* 124194de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124194e1 push 0x1243d974 */
  push32((uint32_t)(0x1243d974u));
  /* 124194e6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 124194ec push edx */
  push32((uint32_t)(EDX));
  /* 124194ed call 0x12419a00 */
  push32(0x124194f2u); f_12419a00();
  /* 124194f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124194f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 124194f8 mov ecx, dword ptr [eax*8 + 0x12440ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12440ab4)));
  /* 124194ff push ecx */
  push32((uint32_t)(ECX));
  /* 12419500 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12419506 push edx */
  push32((uint32_t)(EDX));
  /* 12419507 call 0x12419a00 */
  push32(0x1241950cu); f_12419a00();
  /* 1241950c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241950f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12419514 push 0x1243e42c */
  push32((uint32_t)(0x1243e42cu));
  /* 12419519 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1241951f push eax */
  push32((uint32_t)(EAX));
  /* 12419520 call 0x1241a1a0 */
  push32(0x12419525u); f_1241a1a0();
  /* 12419525 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12419528:;
  /* 12419528 pop edi */
  EDI = (pop32());
  /* 12419529 pop esi */
  ESI = (pop32());
  /* 1241952a pop ebx */
  EBX = (pop32());
  /* 1241952b mov esp, ebp */
  ESP = (EBP);
  /* 1241952d pop ebp */
  EBP = (pop32());
  /* 1241952e ret  */
  ESPCHK(0x12419370u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12419530 (80 bytes, 27 insns) */
void f_12419530(void) {
  FTRACE(0x12419530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419530 push ebp */
  push32((uint32_t)(EBP));
  /* 12419531 mov ebp, esp */
  EBP = (ESP);
  /* 12419533 push ecx */
  push32((uint32_t)(ECX));
  /* 12419534 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241953b jmp 0x12419546 */
  goto L_12419546;
L_1241953d:;
  /* 1241953d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419540 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419543 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12419546:;
  /* 12419546 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241954a jae 0x1241955f */
  if (!C.cf) goto L_1241955f;
  /* 1241954c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241954f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419552 cmp edx, dword ptr [ecx*8 + 0x12440ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12440ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419559 jne 0x1241955d */
  if (!C.zf) goto L_1241955d;
  /* 1241955b jmp 0x1241955f */
  goto L_1241955f;
L_1241955d:;
  /* 1241955d jmp 0x1241953d */
  goto L_1241953d;
L_1241955f:;
  /* 1241955f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419562 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419565 cmp ecx, dword ptr [eax*8 + 0x12440ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12440ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241956c jne 0x1241957a */
  if (!C.zf) goto L_1241957a;
  /* 1241956e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419571 mov eax, dword ptr [edx*8 + 0x12440ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12440ab4)));
  /* 12419578 jmp 0x1241957c */
  goto L_1241957c;
L_1241957a:;
  /* 1241957a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241957c:;
  /* 1241957c mov esp, ebp */
  ESP = (EBP);
  /* 1241957e pop ebp */
  EBP = (pop32());
  /* 1241957f ret  */
  ESPCHK(0x12419530u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12419580 (66 bytes, 28 insns) */
void f_12419580(void) {
  FTRACE(0x12419580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419580 push ebp */
  push32((uint32_t)(EBP));
  /* 12419581 mov ebp, esp */
  EBP = (ESP);
  /* 12419583 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419587 jne 0x124195a7 */
  if (!C.zf) goto L_124195a7;
  /* 12419589 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241958d jge 0x124195a7 */
  if ((C.sf==C.of)) goto L_124195a7;
  /* 1241958f push 1 */
  push32((uint32_t)(0x1u));
  /* 12419591 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12419594 push eax */
  push32((uint32_t)(EAX));
  /* 12419595 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419598 push ecx */
  push32((uint32_t)(ECX));
  /* 12419599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241959c push edx */
  push32((uint32_t)(EDX));
  /* 1241959d call 0x124195d0 */
  push32(0x124195a2u); f_124195d0();
  /* 124195a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124195a5 jmp 0x124195bd */
  goto L_124195bd;
L_124195a7:;
  /* 124195a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 124195a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124195ac push eax */
  push32((uint32_t)(EAX));
  /* 124195ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124195b0 push ecx */
  push32((uint32_t)(ECX));
  /* 124195b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124195b4 push edx */
  push32((uint32_t)(EDX));
  /* 124195b5 call 0x124195d0 */
  push32(0x124195bau); f_124195d0();
  /* 124195ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_124195bd:;
  /* 124195bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124195c0 pop ebp */
  EBP = (pop32());
  /* 124195c1 ret  */
  ESPCHK(0x12419580u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x124195d0 (194 bytes, 71 insns) */
void f_124195d0(void) {
  FTRACE(0x124195d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124195d0 push ebp */
  push32((uint32_t)(EBP));
  /* 124195d1 mov ebp, esp */
  EBP = (ESP);
  /* 124195d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124195d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124195d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 124195dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124195e0 je 0x124195f9 */
  if (C.zf) goto L_124195f9;
  /* 124195e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124195e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 124195e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124195eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124195ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 124195f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124195f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 124195f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_124195f9:;
  /* 124195f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124195fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_124195ff:;
  /* 124195ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419602 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12419604 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12419607 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1241960a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241960d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241960f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12419612 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12419615 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419619 jbe 0x12419631 */
  if ((C.cf||C.zf)) goto L_12419631;
  /* 1241961b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241961e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419624 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12419626 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419629 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241962c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241962f jmp 0x12419645 */
  goto L_12419645;
L_12419631:;
  /* 12419631 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12419634 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241963a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1241963c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241963f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419642 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12419645:;
  /* 12419645 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419649 ja 0x124195ff */
  if ((!C.cf&&!C.zf)) goto L_124195ff;
  /* 1241964b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241964e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12419651 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419654 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419657 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241965a:;
  /* 1241965a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241965d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1241965f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12419662 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419665 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419668 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1241966a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1241966c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241966f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12419672 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12419674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419677 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241967a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241967d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419680 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419683 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12419686 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419689 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241968c jb 0x1241965a */
  if (C.cf) goto L_1241965a;
  /* 1241968e mov esp, ebp */
  ESP = (EBP);
  /* 12419690 pop ebp */
  EBP = (pop32());
  /* 12419691 ret  */
  ESPCHK(0x124195d0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x124196a0 (63 bytes, 24 insns) */
void f_124196a0(void) {
  FTRACE(0x124196a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124196a0 push ebp */
  push32((uint32_t)(EBP));
  /* 124196a1 mov ebp, esp */
  EBP = (ESP);
  /* 124196a3 push ecx */
  push32((uint32_t)(ECX));
  /* 124196a4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124196a8 jne 0x124196b9 */
  if (!C.zf) goto L_124196b9;
  /* 124196aa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124196ae jge 0x124196b9 */
  if ((C.sf==C.of)) goto L_124196b9;
  /* 124196b0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 124196b7 jmp 0x124196c0 */
  goto L_124196c0;
L_124196b9:;
  /* 124196b9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_124196c0:;
  /* 124196c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124196c3 push eax */
  push32((uint32_t)(EAX));
  /* 124196c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 124196c7 push ecx */
  push32((uint32_t)(ECX));
  /* 124196c8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 124196cb push edx */
  push32((uint32_t)(EDX));
  /* 124196cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 124196cf push eax */
  push32((uint32_t)(EAX));
  /* 124196d0 call 0x124195d0 */
  push32(0x124196d5u); f_124195d0();
  /* 124196d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124196d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124196db mov esp, ebp */
  ESP = (EBP);
  /* 124196dd pop ebp */
  EBP = (pop32());
  /* 124196de ret  */
  ESPCHK(0x124196a0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x124196e0 (30 bytes, 14 insns) */
void f_124196e0(void) {
  FTRACE(0x124196e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124196e0 push ebp */
  push32((uint32_t)(EBP));
  /* 124196e1 mov ebp, esp */
  EBP = (ESP);
  /* 124196e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 124196e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 124196e8 push eax */
  push32((uint32_t)(EAX));
  /* 124196e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 124196ec push ecx */
  push32((uint32_t)(ECX));
  /* 124196ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 124196f0 push edx */
  push32((uint32_t)(EDX));
  /* 124196f1 call 0x124195d0 */
  push32(0x124196f6u); f_124195d0();
  /* 124196f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124196f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124196fc pop ebp */
  EBP = (pop32());
  /* 124196fd ret  */
  ESPCHK(0x124196e0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12419700 (72 bytes, 28 insns) */
void f_12419700(void) {
  FTRACE(0x12419700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419700 push ebp */
  push32((uint32_t)(EBP));
  /* 12419701 mov ebp, esp */
  EBP = (ESP);
  /* 12419703 push ecx */
  push32((uint32_t)(ECX));
  /* 12419704 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419708 jne 0x12419721 */
  if (!C.zf) goto L_12419721;
  /* 1241970a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241970e jg 0x12419721 */
  if ((!C.zf&&C.sf==C.of)) goto L_12419721;
  /* 12419710 jl 0x12419718 */
  if ((C.sf!=C.of)) goto L_12419718;
  /* 12419712 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419716 jae 0x12419721 */
  if (!C.cf) goto L_12419721;
L_12419718:;
  /* 12419718 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1241971f jmp 0x12419728 */
  goto L_12419728;
L_12419721:;
  /* 12419721 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12419728:;
  /* 12419728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241972b push eax */
  push32((uint32_t)(EAX));
  /* 1241972c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241972f push ecx */
  push32((uint32_t)(ECX));
  /* 12419730 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12419733 push edx */
  push32((uint32_t)(EDX));
  /* 12419734 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419737 push eax */
  push32((uint32_t)(EAX));
  /* 12419738 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241973b push ecx */
  push32((uint32_t)(ECX));
  /* 1241973c call 0x12419750 */
  push32(0x12419741u); f_12419750();
  /* 12419741 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12419744 mov esp, ebp */
  ESP = (EBP);
  /* 12419746 pop ebp */
  EBP = (pop32());
  /* 12419747 ret  */
  ESPCHK(0x12419700u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12419750 (242 bytes, 91 insns) */
void f_12419750(void) {
  FTRACE(0x12419750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419750 push ebp */
  push32((uint32_t)(EBP));
  /* 12419751 mov ebp, esp */
  EBP = (ESP);
  /* 12419753 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419756 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12419759 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241975c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419760 je 0x12419784 */
  if (C.zf) goto L_12419784;
  /* 12419762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419765 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12419768 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241976b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241976e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12419771 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419774 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12419776 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419779 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241977c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241977e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12419781 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12419784:;
  /* 12419784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419787 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1241978a:;
  /* 1241978a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1241978d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1241978f push ecx */
  push32((uint32_t)(ECX));
  /* 12419790 push eax */
  push32((uint32_t)(EAX));
  /* 12419791 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419794 push edx */
  push32((uint32_t)(EDX));
  /* 12419795 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419798 push eax */
  push32((uint32_t)(EAX));
  /* 12419799 call 0x1241d6d0 */
  push32(0x1241979eu); f_1241d6d0();
  /* 1241979e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 124197a1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 124197a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124197a6 push edx */
  push32((uint32_t)(EDX));
  /* 124197a7 push ecx */
  push32((uint32_t)(ECX));
  /* 124197a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 124197ab push eax */
  push32((uint32_t)(EAX));
  /* 124197ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 124197af push ecx */
  push32((uint32_t)(ECX));
  /* 124197b0 call 0x1241d660 */
  push32(0x124197b5u); f_1241d660();
  /* 124197b5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 124197b8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 124197bb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124197bf jbe 0x124197d7 */
  if ((C.cf||C.zf)) goto L_124197d7;
  /* 124197c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124197c4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124197c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124197ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124197cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124197cf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124197d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 124197d5 jmp 0x124197eb */
  goto L_124197eb;
L_124197d7:;
  /* 124197d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 124197da add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 124197dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 124197e0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 124197e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 124197e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124197e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_124197eb:;
  /* 124197eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124197ef ja 0x1241978a */
  if ((!C.cf&&!C.zf)) goto L_1241978a;
  /* 124197f1 jb 0x124197f9 */
  if (C.cf) goto L_124197f9;
  /* 124197f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124197f7 ja 0x1241978a */
  if ((!C.cf&&!C.zf)) goto L_1241978a;
L_124197f9:;
  /* 124197f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 124197fc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 124197ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419802 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419805 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12419808:;
  /* 12419808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241980b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1241980d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12419810 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419813 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419816 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12419818 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1241981a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241981d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12419820 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12419822 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419825 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419828 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241982b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241982e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419831 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12419834 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419837 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241983a jb 0x12419808 */
  if (C.cf) goto L_12419808;
  /* 1241983c mov esp, ebp */
  ESP = (EBP);
  /* 1241983e pop ebp */
  EBP = (pop32());
  /* 1241983f ret 0x14 */
  ESPCHK(0x12419750u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12419850 (31 bytes, 15 insns) */
void f_12419850(void) {
  FTRACE(0x12419850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419850 push ebp */
  push32((uint32_t)(EBP));
  /* 12419851 mov ebp, esp */
  EBP = (ESP);
  /* 12419853 push 0 */
  push32((uint32_t)(0x0u));
  /* 12419855 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12419858 push eax */
  push32((uint32_t)(EAX));
  /* 12419859 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241985c push ecx */
  push32((uint32_t)(ECX));
  /* 1241985d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419860 push edx */
  push32((uint32_t)(EDX));
  /* 12419861 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419864 push eax */
  push32((uint32_t)(EAX));
  /* 12419865 call 0x12419750 */
  push32(0x1241986au); f_12419750();
  /* 1241986a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241986d pop ebp */
  EBP = (pop32());
  /* 1241986e ret  */
  ESPCHK(0x12419850u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12419870 (123 bytes, 44 insns) */
void f_12419870(void) {
  FTRACE(0x12419870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419870 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12419874 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1241987a je 0x12419890 */
  if (C.zf) goto L_12419890;
L_1241987c:;
  /* 1241987c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1241987e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1241987f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12419881 je 0x124198c3 */
  if (C.zf) goto L_124198c3;
  /* 12419883 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12419889 jne 0x1241987c */
  if (!C.zf) goto L_1241987c;
  /* 1241988b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12419890:;
  /* 12419890 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12419892 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12419897 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419899 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241989c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241989e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124198a1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 124198a6 je 0x12419890 */
  if (C.zf) goto L_12419890;
  /* 124198a8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 124198ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 124198ad je 0x124198e1 */
  if (C.zf) goto L_124198e1;
  /* 124198af test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 124198b1 je 0x124198d7 */
  if (C.zf) goto L_124198d7;
  /* 124198b3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 124198b8 je 0x124198cd */
  if (C.zf) goto L_124198cd;
  /* 124198ba test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 124198bf je 0x124198c3 */
  if (C.zf) goto L_124198c3;
  /* 124198c1 jmp 0x12419890 */
  goto L_12419890;
L_124198c3:;
  /* 124198c3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 124198c6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 124198ca sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124198cc ret  */
  ESPCHK(0x12419870u, _esp0);
  ESP += 4; return;
L_124198cd:;
  /* 124198cd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 124198d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 124198d4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124198d6 ret  */
  ESPCHK(0x12419870u, _esp0);
  ESP += 4; return;
L_124198d7:;
  /* 124198d7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 124198da mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 124198de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124198e0 ret  */
  ESPCHK(0x12419870u, _esp0);
  ESP += 4; return;
L_124198e1:;
  /* 124198e1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 124198e4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 124198e8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 124198ea ret  */
  ESPCHK(0x12419870u, _esp0);
  ESP += 4; return;
}

/* FUN_100098f0 @ 0x124198f0 (249 bytes, 93 insns) */
void f_124198f0(void) {
  FTRACE(0x124198f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124198f0 push ebp */
  push32((uint32_t)(EBP));
  /* 124198f1 mov ebp, esp */
  EBP = (ESP);
  /* 124198f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 124198f6 push ebx */
  push32((uint32_t)(EBX));
  /* 124198f7 push esi */
  push32((uint32_t)(ESI));
  /* 124198f8 push edi */
  push32((uint32_t)(EDI));
  /* 124198f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 124198fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 124198ff lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12419902 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12419905:;
  /* 12419905 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419909 jne 0x12419929 */
  if (!C.zf) goto L_12419929;
  /* 1241990b push 0x1243e48c */
  push32((uint32_t)(0x1243e48cu));
  /* 12419910 push 0 */
  push32((uint32_t)(0x0u));
  /* 12419912 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12419914 push 0x1243e480 */
  push32((uint32_t)(0x1243e480u));
  /* 12419919 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241991b call 0x12415b00 */
  push32(0x12419920u); f_12415b00();
  /* 12419920 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419923 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419926 jne 0x12419929 */
  if (!C.zf) goto L_12419929;
  /* 12419928 int3  */
  x86_unimpl("int3 @ 0x12419928");
L_12419929:;
  /* 12419929 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241992b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241992d jne 0x12419905 */
  if (!C.zf) goto L_12419905;
L_1241992f:;
  /* 1241992f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419933 jne 0x12419953 */
  if (!C.zf) goto L_12419953;
  /* 12419935 push 0x1243e470 */
  push32((uint32_t)(0x1243e470u));
  /* 1241993a push 0 */
  push32((uint32_t)(0x0u));
  /* 1241993c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1241993e push 0x1243e480 */
  push32((uint32_t)(0x1243e480u));
  /* 12419943 push 2 */
  push32((uint32_t)(0x2u));
  /* 12419945 call 0x12415b00 */
  push32(0x1241994au); f_12415b00();
  /* 1241994a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241994d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419950 jne 0x12419953 */
  if (!C.zf) goto L_12419953;
  /* 12419952 int3  */
  x86_unimpl("int3 @ 0x12419952");
L_12419953:;
  /* 12419953 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12419955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12419957 jne 0x1241992f */
  if (!C.zf) goto L_1241992f;
  /* 12419959 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241995c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12419963 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419969 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1241996c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1241996f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419972 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12419974 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419977 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241997a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1241997d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12419980 push edx */
  push32((uint32_t)(EDX));
  /* 12419981 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12419984 push eax */
  push32((uint32_t)(EAX));
  /* 12419985 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419988 push ecx */
  push32((uint32_t)(ECX));
  /* 12419989 call 0x1241d9d0 */
  push32(0x1241998eu); f_1241d9d0();
  /* 1241998e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419991 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12419994 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419997 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241999a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241999d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 124199a0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 124199a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124199a6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 124199aa jl 0x124199ce */
  if ((C.sf!=C.of)) goto L_124199ce;
  /* 124199ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124199af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124199b1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 124199b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 124199b6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 124199bc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 124199bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124199c2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 124199c4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 124199c7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 124199ca mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 124199cc jmp 0x124199df */
  goto L_124199df;
L_124199ce:;
  /* 124199ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 124199d1 push eax */
  push32((uint32_t)(EAX));
  /* 124199d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 124199d4 call 0x1241d750 */
  push32(0x124199d9u); f_1241d750();
  /* 124199d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 124199dc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_124199df:;
  /* 124199df mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 124199e2 pop edi */
  EDI = (pop32());
  /* 124199e3 pop esi */
  ESI = (pop32());
  /* 124199e4 pop ebx */
  EBX = (pop32());
  /* 124199e5 mov esp, ebp */
  ESP = (EBP);
  /* 124199e7 pop ebp */
  EBP = (pop32());
  /* 124199e8 ret  */
  ESPCHK(0x124198f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f0 @ 0x124199f0 (7 bytes, 3 insns) */
void f_124199f0(void) {
  FTRACE(0x124199f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 124199f0 push edi */
  push32((uint32_t)(EDI));
  /* 124199f1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 124199f5 jmp 0x12419a61 */
  jmp_ind(0x12419a61u); return;
}

/* FUN_10009a00 @ 0x12419a00 (224 bytes, 84 insns) */
void f_12419a00(void) {
  FTRACE(0x12419a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419a00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12419a04 push edi */
  push32((uint32_t)(EDI));
  /* 12419a05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12419a0b je 0x12419a1c */
  if (C.zf) goto L_12419a1c;
L_12419a0d:;
  /* 12419a0d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12419a0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12419a10 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12419a12 je 0x12419a4f */
  if (C.zf) goto L_12419a4f;
  /* 12419a14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12419a1a jne 0x12419a0d */
  if (!C.zf) goto L_12419a0d;
L_12419a1c:;
  /* 12419a1c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12419a1e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12419a23 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419a25 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12419a28 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12419a2a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419a2d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12419a32 je 0x12419a1c */
  if (C.zf) goto L_12419a1c;
  /* 12419a34 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12419a37 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12419a39 je 0x12419a5e */
  if (C.zf) goto L_12419a5e;
  /* 12419a3b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12419a3d je 0x12419a59 */
  if (C.zf) goto L_12419a59;
  /* 12419a3f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12419a44 je 0x12419a54 */
  if (C.zf) goto L_12419a54;
  /* 12419a46 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12419a4b je 0x12419a4f */
  if (C.zf) goto L_12419a4f;
  /* 12419a4d jmp 0x12419a1c */
  goto L_12419a1c;
L_12419a4f:;
  /* 12419a4f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12419a52 jmp 0x12419a61 */
  goto L_12419a61;
L_12419a54:;
  /* 12419a54 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12419a57 jmp 0x12419a61 */
  goto L_12419a61;
L_12419a59:;
  /* 12419a59 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12419a5c jmp 0x12419a61 */
  goto L_12419a61;
L_12419a5e:;
  /* 12419a5e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12419a61:;
  /* 12419a61 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12419a65 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12419a6b je 0x12419a86 */
  if (C.zf) goto L_12419a86;
L_12419a6d:;
  /* 12419a6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12419a6f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12419a70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12419a72 je 0x12419ad8 */
  if (C.zf) goto L_12419ad8;
  /* 12419a74 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12419a76 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12419a77 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12419a7d jne 0x12419a6d */
  if (!C.zf) goto L_12419a6d;
  /* 12419a7f jmp 0x12419a86 */
  goto L_12419a86;
L_12419a81:;
  /* 12419a81 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12419a83 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12419a86:;
  /* 12419a86 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12419a8b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12419a8d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419a8f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12419a92 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12419a94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12419a96 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419a99 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12419a9e je 0x12419a81 */
  if (C.zf) goto L_12419a81;
  /* 12419aa0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12419aa2 je 0x12419ad8 */
  if (C.zf) goto L_12419ad8;
  /* 12419aa4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12419aa6 je 0x12419acf */
  if (C.zf) goto L_12419acf;
  /* 12419aa8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12419aae je 0x12419ac2 */
  if (C.zf) goto L_12419ac2;
  /* 12419ab0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12419ab6 je 0x12419aba */
  if (C.zf) goto L_12419aba;
  /* 12419ab8 jmp 0x12419a81 */
  goto L_12419a81;
L_12419aba:;
  /* 12419aba mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12419abc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12419ac0 pop edi */
  EDI = (pop32());
  /* 12419ac1 ret  */
  ESPCHK(0x12419a00u, _esp0);
  ESP += 4; return;
L_12419ac2:;
  /* 12419ac2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12419ac5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12419ac9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12419acd pop edi */
  EDI = (pop32());
  /* 12419ace ret  */
  ESPCHK(0x12419a00u, _esp0);
  ESP += 4; return;
L_12419acf:;
  /* 12419acf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12419ad2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12419ad6 pop edi */
  EDI = (pop32());
  /* 12419ad7 ret  */
  ESPCHK(0x12419a00u, _esp0);
  ESP += 4; return;
L_12419ad8:;
  /* 12419ad8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12419ada mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12419ade pop edi */
  EDI = (pop32());
  /* 12419adf ret  */
  ESPCHK(0x12419a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ae0 @ 0x12419ae0 (243 bytes, 91 insns) */
void f_12419ae0(void) {
  FTRACE(0x12419ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12419ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12419ae3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 12419ae7 push esi */
  push32((uint32_t)(ESI));
  /* 12419ae8 push edi */
  push32((uint32_t)(EDI));
  /* 12419ae9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12419aec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12419aef:;
  /* 12419aef cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419af3 jne 0x12419b13 */
  if (!C.zf) goto L_12419b13;
  /* 12419af5 push 0x1243e48c */
  push32((uint32_t)(0x1243e48cu));
  /* 12419afa push 0 */
  push32((uint32_t)(0x0u));
  /* 12419afc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12419afe push 0x1243e49c */
  push32((uint32_t)(0x1243e49cu));
  /* 12419b03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12419b05 call 0x12415b00 */
  push32(0x12419b0au); f_12415b00();
  /* 12419b0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419b0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419b10 jne 0x12419b13 */
  if (!C.zf) goto L_12419b13;
  /* 12419b12 int3  */
  x86_unimpl("int3 @ 0x12419b12");
L_12419b13:;
  /* 12419b13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12419b15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12419b17 jne 0x12419aef */
  if (!C.zf) goto L_12419aef;
L_12419b19:;
  /* 12419b19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419b1d jne 0x12419b3d */
  if (!C.zf) goto L_12419b3d;
  /* 12419b1f push 0x1243e470 */
  push32((uint32_t)(0x1243e470u));
  /* 12419b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12419b26 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12419b28 push 0x1243e49c */
  push32((uint32_t)(0x1243e49cu));
  /* 12419b2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12419b2f call 0x12415b00 */
  push32(0x12419b34u); f_12415b00();
  /* 12419b34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419b37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419b3a jne 0x12419b3d */
  if (!C.zf) goto L_12419b3d;
  /* 12419b3c int3  */
  x86_unimpl("int3 @ 0x12419b3c");
L_12419b3d:;
  /* 12419b3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12419b3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12419b41 jne 0x12419b19 */
  if (!C.zf) goto L_12419b19;
  /* 12419b43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b46 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12419b4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419b53 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12419b56 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419b5c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12419b5e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419b64 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12419b67 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12419b6a push ecx */
  push32((uint32_t)(ECX));
  /* 12419b6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12419b6e push edx */
  push32((uint32_t)(EDX));
  /* 12419b6f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b72 push eax */
  push32((uint32_t)(EAX));
  /* 12419b73 call 0x1241d9d0 */
  push32(0x12419b78u); f_1241d9d0();
  /* 12419b78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419b7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12419b7e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b81 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12419b84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419b87 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b8a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12419b8d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b90 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419b94 jl 0x12419bb8 */
  if ((C.sf!=C.of)) goto L_12419bb8;
  /* 12419b96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419b99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12419b9b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12419b9e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12419ba0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12419ba6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12419ba9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419bac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12419bae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419bb1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419bb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12419bb6 jmp 0x12419bc9 */
  goto L_12419bc9;
L_12419bb8:;
  /* 12419bb8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12419bbb push edx */
  push32((uint32_t)(EDX));
  /* 12419bbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12419bbe call 0x1241d750 */
  push32(0x12419bc3u); f_1241d750();
  /* 12419bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419bc6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12419bc9:;
  /* 12419bc9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12419bcc pop edi */
  EDI = (pop32());
  /* 12419bcd pop esi */
  ESI = (pop32());
  /* 12419bce pop ebx */
  EBX = (pop32());
  /* 12419bcf mov esp, ebp */
  ESP = (EBP);
  /* 12419bd1 pop ebp */
  EBP = (pop32());
  /* 12419bd2 ret  */
  ESPCHK(0x12419ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009be0 @ 0x12419be0 (47 bytes, 17 insns) */
void f_12419be0(void) {
  FTRACE(0x12419be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419be0 push ecx */
  push32((uint32_t)(ECX));
  /* 12419be1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419be6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12419bea jb 0x12419c00 */
  if (C.cf) goto L_12419c00;
L_12419bec:;
  /* 12419bec sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419bf2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419bf7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12419bf9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419bfe jae 0x12419bec */
  if (!C.cf) goto L_12419bec;
L_12419c00:;
  /* 12419c00 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419c02 mov eax, esp */
  EAX = (ESP);
  /* 12419c04 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12419c06 mov esp, ecx */
  ESP = (ECX);
  /* 12419c08 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12419c0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12419c0d push eax */
  push32((uint32_t)(EAX));
  /* 12419c0e ret  */
  ESPCHK(0x12419be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c10 @ 0x12419c10 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12419c10(void) {
  FTRACE(0x12419c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12419c11 mov ebp, esp */
  EBP = (ESP);
  /* 12419c13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419c16 push esi */
  push32((uint32_t)(ESI));
  /* 12419c17 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c1b je 0x12419c23 */
  if (C.zf) goto L_12419c23;
  /* 12419c1d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c21 jne 0x12419c28 */
  if (!C.zf) goto L_12419c28;
L_12419c23:;
  /* 12419c23 jmp 0x12419df8 */
  goto L_12419df8;
L_12419c28:;
  /* 12419c28 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c2c je 0x12419c44 */
  if (C.zf) goto L_12419c44;
  /* 12419c2e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c32 je 0x12419c44 */
  if (C.zf) goto L_12419c44;
  /* 12419c34 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c38 je 0x12419c44 */
  if (C.zf) goto L_12419c44;
  /* 12419c3a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c3e jne 0x12419d21 */
  if (!C.zf) goto L_12419d21;
L_12419c44:;
  /* 12419c44 push 1 */
  push32((uint32_t)(0x1u));
  /* 12419c46 call 0x1241a440 */
  push32(0x12419c4bu); f_1241a440();
  /* 12419c4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419c4e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c52 je 0x12419c5a */
  if (C.zf) goto L_12419c5a;
  /* 12419c54 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c58 jne 0x12419c9f */
  if (!C.zf) goto L_12419c9f;
L_12419c5a:;
  /* 12419c5a cmp dword ptr [0x124429a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124429a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c61 jne 0x12419c9f */
  if (!C.zf) goto L_12419c9f;
  /* 12419c63 push 1 */
  push32((uint32_t)(0x1u));
  /* 12419c65 push 0x12419e40 */
  push32((uint32_t)(0x12419e40u));
  /* 12419c6a call dword ptr [0x12445338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445338))), 0x12419c70u);
  /* 12419c70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419c73 jne 0x12419c81 */
  if (!C.zf) goto L_12419c81;
  /* 12419c75 mov dword ptr [0x124429a0], 1 */
  w32((uint32_t)(0x124429a0), (0x1u));
  /* 12419c7f jmp 0x12419c9f */
  goto L_12419c9f;
L_12419c81:;
  /* 12419c81 call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x12419c87u);
  /* 12419c87 mov esi, eax */
  ESI = (EAX);
  /* 12419c89 call 0x1241e920 */
  push32(0x12419c8eu); f_1241e920();
  /* 12419c8e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12419c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 12419c92 call 0x1241a4e0 */
  push32(0x12419c97u); f_1241a4e0();
  /* 12419c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419c9a jmp 0x12419df8 */
  goto L_12419df8;
L_12419c9f:;
  /* 12419c9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419ca2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12419ca5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12419ca8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419cab mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12419cae cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419cb2 ja 0x12419d12 */
  if ((!C.cf&&!C.zf)) goto L_12419d12;
  /* 12419cb4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12419cb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12419cb9 mov dl, byte ptr [eax + 0x12419e1f] */
  DL = (r8((uint32_t)(EAX + 0x12419e1f)));
  /* 12419cbf jmp dword ptr [edx*4 + 0x12419e0b] */
  switch (EDX) {
    case 0: goto L_12419cc6;
    case 1: goto L_12419d00;
    case 2: goto L_12419cda;
    case 3: goto L_12419ced;
    case 4: goto L_12419d12;
    default: x86_unimpl("switch@0x12419cbf out of table"); return;
  }
L_12419cc6:;
  /* 12419cc6 mov ecx, dword ptr [0x12442990] */
  ECX = (r32((uint32_t)(0x12442990)));
  /* 12419ccc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12419ccf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419cd2 mov dword ptr [0x12442990], edx */
  w32((uint32_t)(0x12442990), (EDX));
  /* 12419cd8 jmp 0x12419d12 */
  goto L_12419d12;
L_12419cda:;
  /* 12419cda mov eax, dword ptr [0x12442994] */
  EAX = (r32((uint32_t)(0x12442994)));
  /* 12419cdf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12419ce2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419ce5 mov dword ptr [0x12442994], ecx */
  w32((uint32_t)(0x12442994), (ECX));
  /* 12419ceb jmp 0x12419d12 */
  goto L_12419d12;
L_12419ced:;
  /* 12419ced mov edx, dword ptr [0x12442998] */
  EDX = (r32((uint32_t)(0x12442998)));
  /* 12419cf3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12419cf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419cf9 mov dword ptr [0x12442998], eax */
  w32((uint32_t)(0x12442998), (EAX));
  /* 12419cfe jmp 0x12419d12 */
  goto L_12419d12;
L_12419d00:;
  /* 12419d00 mov ecx, dword ptr [0x1244299c] */
  ECX = (r32((uint32_t)(0x1244299c)));
  /* 12419d06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12419d09 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419d0c mov dword ptr [0x1244299c], edx */
  w32((uint32_t)(0x1244299c), (EDX));
L_12419d12:;
  /* 12419d12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12419d14 call 0x1241a4e0 */
  push32(0x12419d19u); f_1241a4e0();
  /* 12419d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419d1c jmp 0x12419df3 */
  goto L_12419df3;
L_12419d21:;
  /* 12419d21 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419d25 je 0x12419d38 */
  if (C.zf) goto L_12419d38;
  /* 12419d27 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419d2b je 0x12419d38 */
  if (C.zf) goto L_12419d38;
  /* 12419d2d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419d31 je 0x12419d38 */
  if (C.zf) goto L_12419d38;
  /* 12419d33 jmp 0x12419df8 */
  goto L_12419df8;
L_12419d38:;
  /* 12419d38 call 0x12416480 */
  push32(0x12419d3du); f_12416480();
  /* 12419d3d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12419d40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419d43 cmp dword ptr [eax + 0x50], 0x12440c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12440c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419d4a jne 0x12419d95 */
  if (!C.zf) goto L_12419d95;
  /* 12419d4c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12419d51 push 0x1243e4a8 */
  push32((uint32_t)(0x1243e4a8u));
  /* 12419d56 push 2 */
  push32((uint32_t)(0x2u));
  /* 12419d58 mov ecx, dword ptr [0x12440c80] */
  ECX = (r32((uint32_t)(0x12440c80)));
  /* 12419d5e push ecx */
  push32((uint32_t)(ECX));
  /* 12419d5f call 0x12416a40 */
  push32(0x12419d64u); f_12416a40();
  /* 12419d64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419d67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419d6a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12419d6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419d70 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419d74 je 0x12419d93 */
  if (C.zf) goto L_12419d93;
  /* 12419d76 mov ecx, dword ptr [0x12440c80] */
  ECX = (r32((uint32_t)(0x12440c80)));
  /* 12419d7c push ecx */
  push32((uint32_t)(ECX));
  /* 12419d7d push 0x12440c00 */
  push32((uint32_t)(0x12440c00u));
  /* 12419d82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419d85 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12419d88 push eax */
  push32((uint32_t)(EAX));
  /* 12419d89 call 0x1241d320 */
  push32(0x12419d8eu); f_1241d320();
  /* 12419d8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419d91 jmp 0x12419d95 */
  goto L_12419d95;
L_12419d93:;
  /* 12419d93 jmp 0x12419df8 */
  goto L_12419df8;
L_12419d95:;
  /* 12419d95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419d98 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12419d9b push edx */
  push32((uint32_t)(EDX));
  /* 12419d9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419d9f push eax */
  push32((uint32_t)(EAX));
  /* 12419da0 call 0x1241a120 */
  push32(0x12419da5u); f_1241a120();
  /* 12419da5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419da8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12419dab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419daf jne 0x12419db3 */
  if (!C.zf) goto L_12419db3;
  /* 12419db1 jmp 0x12419df8 */
  goto L_12419df8;
L_12419db3:;
  /* 12419db3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419db6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12419db9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12419dbc:;
  /* 12419dbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419dbf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12419dc2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419dc5 jne 0x12419df3 */
  if (!C.zf) goto L_12419df3;
  /* 12419dc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419dca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12419dcd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12419dd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419dd3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419dd6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12419dd9 mov edx, dword ptr [0x12440c84] */
  EDX = (r32((uint32_t)(0x12440c84)));
  /* 12419ddf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12419de2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419de5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12419de8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419dea cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419ded jb 0x12419df1 */
  if (C.cf) goto L_12419df1;
  /* 12419def jmp 0x12419df3 */
  goto L_12419df3;
L_12419df1:;
  /* 12419df1 jmp 0x12419dbc */
  goto L_12419dbc;
L_12419df3:;
  /* 12419df3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12419df6 jmp 0x12419e06 */
  goto L_12419e06;
L_12419df8:;
  /* 12419df8 call 0x1241e910 */
  push32(0x12419dfdu); f_1241e910();
  /* 12419dfd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12419e03 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12419e06:;
  /* 12419e06 pop esi */
  ESI = (pop32());
  /* 12419e07 mov esp, ebp */
  ESP = (EBP);
  /* 12419e09 pop ebp */
  EBP = (pop32());
  /* 12419e0a ret  */
  ESPCHK(0x12419c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e40 @ 0x12419e40 (146 bytes, 45 insns) */
void f_12419e40(void) {
  FTRACE(0x12419e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12419e41 mov ebp, esp */
  EBP = (ESP);
  /* 12419e43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419e46 push 1 */
  push32((uint32_t)(0x1u));
  /* 12419e48 call 0x1241a440 */
  push32(0x12419e4du); f_1241a440();
  /* 12419e4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419e50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419e54 jne 0x12419e6e */
  if (!C.zf) goto L_12419e6e;
  /* 12419e56 mov dword ptr [ebp - 8], 0x12442990 */
  w32((uint32_t)(EBP + -0x8), (0x12442990u));
  /* 12419e5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419e60 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12419e62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12419e65 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12419e6c jmp 0x12419e84 */
  goto L_12419e84;
L_12419e6e:;
  /* 12419e6e mov dword ptr [ebp - 8], 0x12442994 */
  w32((uint32_t)(EBP + -0x8), (0x12442994u));
  /* 12419e75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419e78 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12419e7a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12419e7d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12419e84:;
  /* 12419e84 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419e88 jne 0x12419e98 */
  if (!C.zf) goto L_12419e98;
  /* 12419e8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12419e8c call 0x1241a4e0 */
  push32(0x12419e91u); f_1241a4e0();
  /* 12419e91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419e94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12419e96 jmp 0x12419ecc */
  goto L_12419ecc;
L_12419e98:;
  /* 12419e98 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419e9c je 0x12419ebd */
  if (C.zf) goto L_12419ebd;
  /* 12419e9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12419ea1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12419ea7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12419ea9 call 0x1241a4e0 */
  push32(0x12419eaeu); f_1241a4e0();
  /* 12419eae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419eb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419eb4 push edx */
  push32((uint32_t)(EDX));
  /* 12419eb5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12419eb8u);
  /* 12419eb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419ebb jmp 0x12419ec7 */
  goto L_12419ec7;
L_12419ebd:;
  /* 12419ebd push 1 */
  push32((uint32_t)(0x1u));
  /* 12419ebf call 0x1241a4e0 */
  push32(0x12419ec4u); f_1241a4e0();
  /* 12419ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12419ec7:;
  /* 12419ec7 mov eax, 1 */
  EAX = (0x1u);
L_12419ecc:;
  /* 12419ecc mov esp, ebp */
  ESP = (EBP);
  /* 12419ece pop ebp */
  EBP = (pop32());
  /* 12419ecf ret 4 */
  ESPCHK(0x12419e40u, _esp0);
  ESP += 8; return;
}

/* FUN_10009ee0 @ 0x12419ee0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12419ee0(void) {
  FTRACE(0x12419ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12419ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12419ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12419ee3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419ee6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12419eed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419ef0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12419ef3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12419ef6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12419ef9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12419efc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419f00 ja 0x12419fae */
  if ((!C.cf&&!C.zf)) goto L_12419fae;
  /* 12419f06 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12419f09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12419f0b mov dl, byte ptr [eax + 0x1241a102] */
  DL = (r8((uint32_t)(EAX + 0x1241a102)));
  /* 12419f11 jmp dword ptr [edx*4 + 0x1241a0ea] */
  switch (EDX) {
    case 0: goto L_12419f18;
    case 1: goto L_12419f83;
    case 2: goto L_12419f69;
    case 3: goto L_12419f35;
    case 4: goto L_12419f4f;
    case 5: goto L_12419fae;
    default: x86_unimpl("switch@0x12419f11 out of table"); return;
  }
L_12419f18:;
  /* 12419f18 mov dword ptr [ebp - 0x18], 0x12442990 */
  w32((uint32_t)(EBP + -0x18), (0x12442990u));
  /* 12419f1f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419f22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12419f24 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12419f27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12419f2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419f2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12419f30 jmp 0x12419fb6 */
  goto L_12419fb6;
L_12419f35:;
  /* 12419f35 mov dword ptr [ebp - 0x18], 0x12442994 */
  w32((uint32_t)(EBP + -0x18), (0x12442994u));
  /* 12419f3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419f3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12419f41 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12419f44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12419f47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419f4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12419f4d jmp 0x12419fb6 */
  goto L_12419fb6;
L_12419f4f:;
  /* 12419f4f mov dword ptr [ebp - 0x18], 0x12442998 */
  w32((uint32_t)(EBP + -0x18), (0x12442998u));
  /* 12419f56 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419f59 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12419f5b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12419f5e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12419f61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419f64 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12419f67 jmp 0x12419fb6 */
  goto L_12419fb6;
L_12419f69:;
  /* 12419f69 mov dword ptr [ebp - 0x18], 0x1244299c */
  w32((uint32_t)(EBP + -0x18), (0x1244299cu));
  /* 12419f70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419f73 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12419f75 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12419f78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12419f7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419f7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12419f81 jmp 0x12419fb6 */
  goto L_12419fb6;
L_12419f83:;
  /* 12419f83 call 0x12416480 */
  push32(0x12419f88u); f_12416480();
  /* 12419f88 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12419f8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12419f8e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12419f91 push edx */
  push32((uint32_t)(EDX));
  /* 12419f92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12419f95 push eax */
  push32((uint32_t)(EAX));
  /* 12419f96 call 0x1241a120 */
  push32(0x12419f9bu); f_1241a120();
  /* 12419f9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12419f9e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12419fa1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12419fa4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12419fa7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12419fa9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12419fac jmp 0x12419fb6 */
  goto L_12419fb6;
L_12419fae:;
  /* 12419fae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12419fb1 jmp 0x1241a0e6 */
  goto L_1241a0e6;
L_12419fb6:;
  /* 12419fb6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419fba je 0x12419fc6 */
  if (C.zf) goto L_12419fc6;
  /* 12419fbc push 1 */
  push32((uint32_t)(0x1u));
  /* 12419fbe call 0x1241a440 */
  push32(0x12419fc3u); f_1241a440();
  /* 12419fc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12419fc6:;
  /* 12419fc6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419fca jne 0x12419fe3 */
  if (!C.zf) goto L_12419fe3;
  /* 12419fcc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419fd0 je 0x12419fdc */
  if (C.zf) goto L_12419fdc;
  /* 12419fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12419fd4 call 0x1241a4e0 */
  push32(0x12419fd9u); f_1241a4e0();
  /* 12419fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12419fdc:;
  /* 12419fdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12419fde jmp 0x1241a0e6 */
  goto L_1241a0e6;
L_12419fe3:;
  /* 12419fe3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419fe7 jne 0x1241a000 */
  if (!C.zf) goto L_1241a000;
  /* 12419fe9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12419fed je 0x12419ff9 */
  if (C.zf) goto L_12419ff9;
  /* 12419fef push 1 */
  push32((uint32_t)(0x1u));
  /* 12419ff1 call 0x1241a4e0 */
  push32(0x12419ff6u); f_1241a4e0();
  /* 12419ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12419ff9:;
  /* 12419ff9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12419ffb call 0x12416200 */
  push32(0x1241a000u); f_12416200();
L_1241a000:;
  /* 1241a000 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a004 je 0x1241a012 */
  if (C.zf) goto L_1241a012;
  /* 1241a006 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a00a je 0x1241a012 */
  if (C.zf) goto L_1241a012;
  /* 1241a00c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a010 jne 0x1241a03e */
  if (!C.zf) goto L_1241a03e;
L_1241a012:;
  /* 1241a012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a015 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1241a018 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1241a01b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a01e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1241a025 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a029 jne 0x1241a03e */
  if (!C.zf) goto L_1241a03e;
  /* 1241a02b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a02e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1241a031 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241a034 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a037 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1241a03e:;
  /* 1241a03e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a042 jne 0x1241a080 */
  if (!C.zf) goto L_1241a080;
  /* 1241a044 mov eax, dword ptr [0x12440c78] */
  EAX = (r32((uint32_t)(0x12440c78)));
  /* 1241a049 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1241a04c jmp 0x1241a057 */
  goto L_1241a057;
L_1241a04e:;
  /* 1241a04e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a051 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a054 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1241a057:;
  /* 1241a057 mov edx, dword ptr [0x12440c78] */
  EDX = (r32((uint32_t)(0x12440c78)));
  /* 1241a05d add edx, dword ptr [0x12440c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12440c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a063 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a066 jge 0x1241a07e */
  if ((C.sf==C.of)) goto L_1241a07e;
  /* 1241a068 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a06b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241a06e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a071 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1241a074 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1241a07c jmp 0x1241a04e */
  goto L_1241a04e;
L_1241a07e:;
  /* 1241a07e jmp 0x1241a089 */
  goto L_1241a089;
L_1241a080:;
  /* 1241a080 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241a083 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1241a089:;
  /* 1241a089 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a08d je 0x1241a099 */
  if (C.zf) goto L_1241a099;
  /* 1241a08f push 1 */
  push32((uint32_t)(0x1u));
  /* 1241a091 call 0x1241a4e0 */
  push32(0x1241a096u); f_1241a4e0();
  /* 1241a096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241a099:;
  /* 1241a099 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a09d jne 0x1241a0b0 */
  if (!C.zf) goto L_1241a0b0;
  /* 1241a09f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a0a2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1241a0a5 push edx */
  push32((uint32_t)(EDX));
  /* 1241a0a6 push 8 */
  push32((uint32_t)(0x8u));
  /* 1241a0a8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1241a0abu);
  /* 1241a0ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a0ae jmp 0x1241a0ba */
  goto L_1241a0ba;
L_1241a0b0:;
  /* 1241a0b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a0b3 push eax */
  push32((uint32_t)(EAX));
  /* 1241a0b4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1241a0b7u);
  /* 1241a0b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241a0ba:;
  /* 1241a0ba cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a0be je 0x1241a0cc */
  if (C.zf) goto L_1241a0cc;
  /* 1241a0c0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a0c4 je 0x1241a0cc */
  if (C.zf) goto L_1241a0cc;
  /* 1241a0c6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a0ca jne 0x1241a0e4 */
  if (!C.zf) goto L_1241a0e4;
L_1241a0cc:;
  /* 1241a0cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a0cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241a0d2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1241a0d5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a0d9 jne 0x1241a0e4 */
  if (!C.zf) goto L_1241a0e4;
  /* 1241a0db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a0de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a0e1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1241a0e4:;
  /* 1241a0e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241a0e6:;
  /* 1241a0e6 mov esp, ebp */
  ESP = (EBP);
  /* 1241a0e8 pop ebp */
  EBP = (pop32());
  /* 1241a0e9 ret  */
  ESPCHK(0x12419ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a120 @ 0x1241a120 (91 bytes, 35 insns) */
void f_1241a120(void) {
  FTRACE(0x1241a120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a120 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a121 mov ebp, esp */
  EBP = (ESP);
  /* 1241a123 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a124 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a127 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241a12a:;
  /* 1241a12a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a12d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1241a130 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a133 je 0x1241a153 */
  if (C.zf) goto L_1241a153;
  /* 1241a135 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a138 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a13b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241a13e mov ecx, dword ptr [0x12440c84] */
  ECX = (r32((uint32_t)(0x12440c84)));
  /* 1241a144 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241a147 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a14a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a14c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a14f jae 0x1241a153 */
  if (!C.cf) goto L_1241a153;
  /* 1241a151 jmp 0x1241a12a */
  goto L_1241a12a;
L_1241a153:;
  /* 1241a153 mov eax, dword ptr [0x12440c84] */
  EAX = (r32((uint32_t)(0x12440c84)));
  /* 1241a158 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241a15b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a15e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a160 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a163 jae 0x1241a175 */
  if (!C.cf) goto L_1241a175;
  /* 1241a165 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a168 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1241a16b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a16e jne 0x1241a175 */
  if (!C.zf) goto L_1241a175;
  /* 1241a170 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a173 jmp 0x1241a177 */
  goto L_1241a177;
L_1241a175:;
  /* 1241a175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241a177:;
  /* 1241a177 mov esp, ebp */
  ESP = (EBP);
  /* 1241a179 pop ebp */
  EBP = (pop32());
  /* 1241a17a ret  */
  ESPCHK(0x1241a120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a180 @ 0x1241a180 (13 bytes, 6 insns) */
void f_1241a180(void) {
  FTRACE(0x1241a180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a180 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a181 mov ebp, esp */
  EBP = (ESP);
  /* 1241a183 call 0x12416480 */
  push32(0x1241a188u); f_12416480();
  /* 1241a188 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a18b pop ebp */
  EBP = (pop32());
  /* 1241a18c ret  */
  ESPCHK(0x1241a180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a190 @ 0x1241a190 (13 bytes, 6 insns) */
void f_1241a190(void) {
  FTRACE(0x1241a190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a190 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a191 mov ebp, esp */
  EBP = (ESP);
  /* 1241a193 call 0x12416480 */
  push32(0x1241a198u); f_12416480();
  /* 1241a198 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a19b pop ebp */
  EBP = (pop32());
  /* 1241a19c ret  */
  ESPCHK(0x1241a190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1a0 @ 0x1241a1a0 (187 bytes, 54 insns) */
void f_1241a1a0(void) {
  FTRACE(0x1241a1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a1a1 mov ebp, esp */
  EBP = (ESP);
  /* 1241a1a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241a1a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241a1ad cmp dword ptr [0x124429a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124429a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a1b4 jne 0x1241a213 */
  if (!C.zf) goto L_1241a213;
  /* 1241a1b6 push 0x1243d8d4 */
  push32((uint32_t)(0x1243d8d4u));
  /* 1241a1bb call dword ptr [0x1244536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244536c))), 0x1241a1c1u);
  /* 1241a1c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241a1c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a1c8 je 0x1241a1e7 */
  if (C.zf) goto L_1241a1e7;
  /* 1241a1ca push 0x1243e4d8 */
  push32((uint32_t)(0x1243e4d8u));
  /* 1241a1cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a1d2 push eax */
  push32((uint32_t)(EAX));
  /* 1241a1d3 call dword ptr [0x12445368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445368))), 0x1241a1d9u);
  /* 1241a1d9 mov dword ptr [0x124429a4], eax */
  w32((uint32_t)(0x124429a4), (EAX));
  /* 1241a1de cmp dword ptr [0x124429a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124429a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a1e5 jne 0x1241a1eb */
  if (!C.zf) goto L_1241a1eb;
L_1241a1e7:;
  /* 1241a1e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a1e9 jmp 0x1241a257 */
  goto L_1241a257;
L_1241a1eb:;
  /* 1241a1eb push 0x1243e4c8 */
  push32((uint32_t)(0x1243e4c8u));
  /* 1241a1f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a1f4 call dword ptr [0x12445368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445368))), 0x1241a1fau);
  /* 1241a1fa mov dword ptr [0x124429a8], eax */
  w32((uint32_t)(0x124429a8), (EAX));
  /* 1241a1ff push 0x1243e4b4 */
  push32((uint32_t)(0x1243e4b4u));
  /* 1241a204 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a207 push edx */
  push32((uint32_t)(EDX));
  /* 1241a208 call dword ptr [0x12445368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445368))), 0x1241a20eu);
  /* 1241a20e mov dword ptr [0x124429ac], eax */
  w32((uint32_t)(0x124429ac), (EAX));
L_1241a213:;
  /* 1241a213 cmp dword ptr [0x124429a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124429a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a21a je 0x1241a225 */
  if (C.zf) goto L_1241a225;
  /* 1241a21c call dword ptr [0x124429a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x124429a8))), 0x1241a222u);
  /* 1241a222 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241a225:;
  /* 1241a225 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a229 je 0x1241a241 */
  if (C.zf) goto L_1241a241;
  /* 1241a22b cmp dword ptr [0x124429ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x124429ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a232 je 0x1241a241 */
  if (C.zf) goto L_1241a241;
  /* 1241a234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a237 push eax */
  push32((uint32_t)(EAX));
  /* 1241a238 call dword ptr [0x124429ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124429ac))), 0x1241a23eu);
  /* 1241a23e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241a241:;
  /* 1241a241 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1241a244 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a245 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a248 push edx */
  push32((uint32_t)(EDX));
  /* 1241a249 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a24c push eax */
  push32((uint32_t)(EAX));
  /* 1241a24d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a250 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a251 call dword ptr [0x124429a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x124429a4))), 0x1241a257u);
L_1241a257:;
  /* 1241a257 mov esp, ebp */
  ESP = (EBP);
  /* 1241a259 pop ebp */
  EBP = (pop32());
  /* 1241a25a ret  */
  ESPCHK(0x1241a1a0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1241a260 (254 bytes, 109 insns) */
void f_1241a260(void) {
  FTRACE(0x1241a260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a260 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1241a264 push edi */
  push32((uint32_t)(EDI));
  /* 1241a265 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1241a267 je 0x1241a2e3 */
  if (C.zf) goto L_1241a2e3;
  /* 1241a269 push esi */
  push32((uint32_t)(ESI));
  /* 1241a26a push ebx */
  push32((uint32_t)(EBX));
  /* 1241a26b mov ebx, ecx */
  EBX = (ECX);
  /* 1241a26d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1241a271 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1241a277 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1241a27b jne 0x1241a284 */
  if (!C.zf) goto L_1241a284;
  /* 1241a27d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241a280 jne 0x1241a2f1 */
  if (!C.zf) goto L_1241a2f1;
  /* 1241a282 jmp 0x1241a2a5 */
  goto L_1241a2a5;
L_1241a284:;
  /* 1241a284 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241a286 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1241a287 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241a289 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1241a28a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1241a28b je 0x1241a2b2 */
  if (C.zf) goto L_1241a2b2;
  /* 1241a28d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1241a28f je 0x1241a2ba */
  if (C.zf) goto L_1241a2ba;
  /* 1241a291 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1241a297 jne 0x1241a284 */
  if (!C.zf) goto L_1241a284;
  /* 1241a299 mov ebx, ecx */
  EBX = (ECX);
  /* 1241a29b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241a29e jne 0x1241a2f1 */
  if (!C.zf) goto L_1241a2f1;
L_1241a2a0:;
  /* 1241a2a0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1241a2a3 je 0x1241a2b2 */
  if (C.zf) goto L_1241a2b2;
L_1241a2a5:;
  /* 1241a2a5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1241a2a7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1241a2a8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241a2aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1241a2ab test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1241a2ad je 0x1241a2de */
  if (C.zf) goto L_1241a2de;
  /* 1241a2af dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1241a2b0 jne 0x1241a2a5 */
  if (!C.zf) goto L_1241a2a5;
L_1241a2b2:;
  /* 1241a2b2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1241a2b6 pop ebx */
  EBX = (pop32());
  /* 1241a2b7 pop esi */
  ESI = (pop32());
  /* 1241a2b8 pop edi */
  EDI = (pop32());
  /* 1241a2b9 ret  */
  ESPCHK(0x1241a260u, _esp0);
  ESP += 4; return;
L_1241a2ba:;
  /* 1241a2ba test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1241a2c0 je 0x1241a2d4 */
  if (C.zf) goto L_1241a2d4;
L_1241a2c2:;
  /* 1241a2c2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241a2c4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1241a2c5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1241a2c6 je 0x1241a356 */
  if (C.zf) goto L_1241a356;
  /* 1241a2cc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1241a2d2 jne 0x1241a2c2 */
  if (!C.zf) goto L_1241a2c2;
L_1241a2d4:;
  /* 1241a2d4 mov ebx, ecx */
  EBX = (ECX);
  /* 1241a2d6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241a2d9 jne 0x1241a347 */
  if (!C.zf) goto L_1241a347;
L_1241a2db:;
  /* 1241a2db mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241a2dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1241a2de:;
  /* 1241a2de dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1241a2df jne 0x1241a2db */
  if (!C.zf) goto L_1241a2db;
  /* 1241a2e1 pop ebx */
  EBX = (pop32());
  /* 1241a2e2 pop esi */
  ESI = (pop32());
L_1241a2e3:;
  /* 1241a2e3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1241a2e7 pop edi */
  EDI = (pop32());
  /* 1241a2e8 ret  */
  ESPCHK(0x1241a260u, _esp0);
  ESP += 4; return;
L_1241a2e9:;
  /* 1241a2e9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1241a2eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a2ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1241a2ef je 0x1241a2a0 */
  if (C.zf) goto L_1241a2a0;
L_1241a2f1:;
  /* 1241a2f1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1241a2f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1241a2f8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a2fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241a2fd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a2ff mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1241a301 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a304 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1241a309 je 0x1241a2e9 */
  if (C.zf) goto L_1241a2e9;
  /* 1241a30b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1241a30d je 0x1241a33b */
  if (C.zf) goto L_1241a33b;
  /* 1241a30f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1241a311 je 0x1241a331 */
  if (C.zf) goto L_1241a331;
  /* 1241a313 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1241a319 je 0x1241a327 */
  if (C.zf) goto L_1241a327;
  /* 1241a31b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1241a321 jne 0x1241a2e9 */
  if (!C.zf) goto L_1241a2e9;
  /* 1241a323 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1241a325 jmp 0x1241a33f */
  goto L_1241a33f;
L_1241a327:;
  /* 1241a327 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1241a32d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1241a32f jmp 0x1241a33f */
  goto L_1241a33f;
L_1241a331:;
  /* 1241a331 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1241a337 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1241a339 jmp 0x1241a33f */
  goto L_1241a33f;
L_1241a33b:;
  /* 1241a33b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1241a33d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1241a33f:;
  /* 1241a33f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a344 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1241a345 je 0x1241a351 */
  if (C.zf) goto L_1241a351;
L_1241a347:;
  /* 1241a347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1241a349:;
  /* 1241a349 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1241a34b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a34e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1241a34f jne 0x1241a349 */
  if (!C.zf) goto L_1241a349;
L_1241a351:;
  /* 1241a351 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1241a354 jne 0x1241a2db */
  if (!C.zf) goto L_1241a2db;
L_1241a356:;
  /* 1241a356 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1241a35a pop ebx */
  EBX = (pop32());
  /* 1241a35b pop esi */
  ESI = (pop32());
  /* 1241a35c pop edi */
  EDI = (pop32());
  /* 1241a35d ret  */
  ESPCHK(0x1241a260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a360 @ 0x1241a360 (55 bytes, 16 insns) */
void f_1241a360(void) {
  FTRACE(0x1241a360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a360 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a361 mov ebp, esp */
  EBP = (ESP);
  /* 1241a363 mov eax, dword ptr [0x12440b84] */
  EAX = (r32((uint32_t)(0x12440b84)));
  /* 1241a368 push eax */
  push32((uint32_t)(EAX));
  /* 1241a369 call dword ptr [0x12445334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445334))), 0x1241a36fu);
  /* 1241a36f mov ecx, dword ptr [0x12440b74] */
  ECX = (r32((uint32_t)(0x12440b74)));
  /* 1241a375 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a376 call dword ptr [0x12445334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445334))), 0x1241a37cu);
  /* 1241a37c mov edx, dword ptr [0x12440b64] */
  EDX = (r32((uint32_t)(0x12440b64)));
  /* 1241a382 push edx */
  push32((uint32_t)(EDX));
  /* 1241a383 call dword ptr [0x12445334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445334))), 0x1241a389u);
  /* 1241a389 mov eax, dword ptr [0x12440b44] */
  EAX = (r32((uint32_t)(0x12440b44)));
  /* 1241a38e push eax */
  push32((uint32_t)(EAX));
  /* 1241a38f call dword ptr [0x12445334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445334))), 0x1241a395u);
  /* 1241a395 pop ebp */
  EBP = (pop32());
  /* 1241a396 ret  */
  ESPCHK(0x1241a360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3a0 @ 0x1241a3a0 (159 bytes, 47 insns) */
void f_1241a3a0(void) {
  FTRACE(0x1241a3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1241a3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a3a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241a3ab jmp 0x1241a3b6 */
  goto L_1241a3b6;
L_1241a3ad:;
  /* 1241a3ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a3b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a3b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241a3b6:;
  /* 1241a3b6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a3ba jge 0x1241a409 */
  if ((C.sf==C.of)) goto L_1241a409;
  /* 1241a3bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a3bf cmp dword ptr [ecx*4 + 0x12440b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12440b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a3c7 je 0x1241a407 */
  if (C.zf) goto L_1241a407;
  /* 1241a3c9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a3cd je 0x1241a407 */
  if (C.zf) goto L_1241a407;
  /* 1241a3cf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a3d3 je 0x1241a407 */
  if (C.zf) goto L_1241a407;
  /* 1241a3d5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a3d9 je 0x1241a407 */
  if (C.zf) goto L_1241a407;
  /* 1241a3db cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a3df je 0x1241a407 */
  if (C.zf) goto L_1241a407;
  /* 1241a3e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a3e4 mov eax, dword ptr [edx*4 + 0x12440b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12440b40)));
  /* 1241a3eb push eax */
  push32((uint32_t)(EAX));
  /* 1241a3ec call dword ptr [0x124453b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b0))), 0x1241a3f2u);
  /* 1241a3f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1241a3f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a3f7 mov edx, dword ptr [ecx*4 + 0x12440b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12440b40)));
  /* 1241a3fe push edx */
  push32((uint32_t)(EDX));
  /* 1241a3ff call 0x124174d0 */
  push32(0x1241a404u); f_124174d0();
  /* 1241a404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241a407:;
  /* 1241a407 jmp 0x1241a3ad */
  goto L_1241a3ad;
L_1241a409:;
  /* 1241a409 mov eax, dword ptr [0x12440b64] */
  EAX = (r32((uint32_t)(0x12440b64)));
  /* 1241a40e push eax */
  push32((uint32_t)(EAX));
  /* 1241a40f call dword ptr [0x124453b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b0))), 0x1241a415u);
  /* 1241a415 mov ecx, dword ptr [0x12440b74] */
  ECX = (r32((uint32_t)(0x12440b74)));
  /* 1241a41b push ecx */
  push32((uint32_t)(ECX));
  /* 1241a41c call dword ptr [0x124453b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b0))), 0x1241a422u);
  /* 1241a422 mov edx, dword ptr [0x12440b84] */
  EDX = (r32((uint32_t)(0x12440b84)));
  /* 1241a428 push edx */
  push32((uint32_t)(EDX));
  /* 1241a429 call dword ptr [0x124453b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b0))), 0x1241a42fu);
  /* 1241a42f mov eax, dword ptr [0x12440b44] */
  EAX = (r32((uint32_t)(0x12440b44)));
  /* 1241a434 push eax */
  push32((uint32_t)(EAX));
  /* 1241a435 call dword ptr [0x124453b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453b0))), 0x1241a43bu);
  /* 1241a43b mov esp, ebp */
  ESP = (EBP);
  /* 1241a43d pop ebp */
  EBP = (pop32());
  /* 1241a43e ret  */
  ESPCHK(0x1241a3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a440 @ 0x1241a440 (151 bytes, 46 insns) */
void f_1241a440(void) {
  FTRACE(0x1241a440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a440 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a441 mov ebp, esp */
  EBP = (ESP);
  /* 1241a443 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a447 cmp dword ptr [eax*4 + 0x12440b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12440b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a44f jne 0x1241a4c2 */
  if (!C.zf) goto L_1241a4c2;
  /* 1241a451 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1241a456 push 0x1243e4e4 */
  push32((uint32_t)(0x1243e4e4u));
  /* 1241a45b push 2 */
  push32((uint32_t)(0x2u));
  /* 1241a45d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1241a45f call 0x12416a40 */
  push32(0x1241a464u); f_12416a40();
  /* 1241a464 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a467 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241a46a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a46e jne 0x1241a47a */
  if (!C.zf) goto L_1241a47a;
  /* 1241a470 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1241a472 call 0x124159b0 */
  push32(0x1241a477u); f_124159b0();
  /* 1241a477 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241a47a:;
  /* 1241a47a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1241a47c call 0x1241a440 */
  push32(0x1241a481u); f_1241a440();
  /* 1241a481 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a484 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a487 cmp dword ptr [ecx*4 + 0x12440b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12440b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a48f jne 0x1241a4aa */
  if (!C.zf) goto L_1241a4aa;
  /* 1241a491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a494 push edx */
  push32((uint32_t)(EDX));
  /* 1241a495 call dword ptr [0x12445334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445334))), 0x1241a49bu);
  /* 1241a49b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a49e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a4a1 mov dword ptr [eax*4 + 0x12440b40], ecx */
  w32((uint32_t)(EAX*4 + 0x12440b40), (ECX));
  /* 1241a4a8 jmp 0x1241a4b8 */
  goto L_1241a4b8;
L_1241a4aa:;
  /* 1241a4aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1241a4ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a4af push edx */
  push32((uint32_t)(EDX));
  /* 1241a4b0 call 0x124174d0 */
  push32(0x1241a4b5u); f_124174d0();
  /* 1241a4b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241a4b8:;
  /* 1241a4b8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1241a4ba call 0x1241a4e0 */
  push32(0x1241a4bfu); f_1241a4e0();
  /* 1241a4bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241a4c2:;
  /* 1241a4c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a4c5 mov ecx, dword ptr [eax*4 + 0x12440b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12440b40)));
  /* 1241a4cc push ecx */
  push32((uint32_t)(ECX));
  /* 1241a4cd call dword ptr [0x12445330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445330))), 0x1241a4d3u);
  /* 1241a4d3 mov esp, ebp */
  ESP = (EBP);
  /* 1241a4d5 pop ebp */
  EBP = (pop32());
  /* 1241a4d6 ret  */
  ESPCHK(0x1241a440u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a4e0 @ 0x1241a4e0 (22 bytes, 8 insns) */
void f_1241a4e0(void) {
  FTRACE(0x1241a4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1241a4e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a4e6 mov ecx, dword ptr [eax*4 + 0x12440b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12440b40)));
  /* 1241a4ed push ecx */
  push32((uint32_t)(ECX));
  /* 1241a4ee call dword ptr [0x1244532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244532c))), 0x1241a4f4u);
  /* 1241a4f4 pop ebp */
  EBP = (pop32());
  /* 1241a4f5 ret  */
  ESPCHK(0x1241a4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a500 @ 0x1241a500 (26 bytes, 10 insns) */
void f_1241a500(void) {
  FTRACE(0x1241a500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a500 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a501 mov ebp, esp */
  EBP = (ESP);
  /* 1241a503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a506 push eax */
  push32((uint32_t)(EAX));
  /* 1241a507 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241a509 call dword ptr [0x12445328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445328))), 0x1241a50fu);
  /* 1241a50f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1241a514 call dword ptr [0x12445378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445378))), 0x1241a51au);
  /* 1241a51a pop ebp */
  EBP = (pop32());
  /* 1241a51b ret  */
  ESPCHK(0x1241a500u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1241a520 (446 bytes, 130 insns) */
void f_1241a520(void) {
  FTRACE(0x1241a520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a520 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a521 mov ebp, esp */
  EBP = (ESP);
  /* 1241a523 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241a526 call 0x12416480 */
  push32(0x1241a52bu); f_12416480();
  /* 1241a52b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241a52e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a531 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1241a534 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a535 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a538 push edx */
  push32((uint32_t)(EDX));
  /* 1241a539 call 0x1241a6e0 */
  push32(0x1241a53eu); f_1241a6e0();
  /* 1241a53e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a541 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1241a544 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a548 je 0x1241a553 */
  if (C.zf) goto L_1241a553;
  /* 1241a54a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a54d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a551 jne 0x1241a562 */
  if (!C.zf) goto L_1241a562;
L_1241a553:;
  /* 1241a553 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a556 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a557 call dword ptr [0x12445324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445324))), 0x1241a55du);
  /* 1241a55d jmp 0x1241a6da */
  goto L_1241a6da;
L_1241a562:;
  /* 1241a562 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a565 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a569 jne 0x1241a57f */
  if (!C.zf) goto L_1241a57f;
  /* 1241a56b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a56e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1241a575 mov eax, 1 */
  EAX = (0x1u);
  /* 1241a57a jmp 0x1241a6da */
  goto L_1241a6da;
L_1241a57f:;
  /* 1241a57f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a582 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a586 jne 0x1241a590 */
  if (!C.zf) goto L_1241a590;
  /* 1241a588 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1241a58b jmp 0x1241a6da */
  goto L_1241a6da;
L_1241a590:;
  /* 1241a590 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a593 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1241a596 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241a599 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a59c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1241a59f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1241a5a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a5a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a5a8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1241a5ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a5ae cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a5b2 jne 0x1241a6b7 */
  if (!C.zf) goto L_1241a6b7;
  /* 1241a5b8 mov eax, dword ptr [0x12440c78] */
  EAX = (r32((uint32_t)(0x12440c78)));
  /* 1241a5bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1241a5c0 jmp 0x1241a5cb */
  goto L_1241a5cb;
L_1241a5c2:;
  /* 1241a5c2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241a5c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a5c8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1241a5cb:;
  /* 1241a5cb mov edx, dword ptr [0x12440c78] */
  EDX = (r32((uint32_t)(0x12440c78)));
  /* 1241a5d1 add edx, dword ptr [0x12440c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12440c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a5d7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a5da jge 0x1241a5f2 */
  if ((C.sf==C.of)) goto L_1241a5f2;
  /* 1241a5dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241a5df imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241a5e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a5e5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1241a5e8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1241a5f0 jmp 0x1241a5c2 */
  goto L_1241a5c2;
L_1241a5f2:;
  /* 1241a5f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a5f5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1241a5f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1241a5fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a5fe cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a604 jne 0x1241a615 */
  if (!C.zf) goto L_1241a615;
  /* 1241a606 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a609 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1241a610 jmp 0x1241a69d */
  goto L_1241a69d;
L_1241a615:;
  /* 1241a615 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a618 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a61e jne 0x1241a62c */
  if (!C.zf) goto L_1241a62c;
  /* 1241a620 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a623 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1241a62a jmp 0x1241a69d */
  goto L_1241a69d;
L_1241a62c:;
  /* 1241a62c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a62f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a635 jne 0x1241a643 */
  if (!C.zf) goto L_1241a643;
  /* 1241a637 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a63a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1241a641 jmp 0x1241a69d */
  goto L_1241a69d;
L_1241a643:;
  /* 1241a643 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a646 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a64c jne 0x1241a65a */
  if (!C.zf) goto L_1241a65a;
  /* 1241a64e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a651 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1241a658 jmp 0x1241a69d */
  goto L_1241a69d;
L_1241a65a:;
  /* 1241a65a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a65d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a663 jne 0x1241a671 */
  if (!C.zf) goto L_1241a671;
  /* 1241a665 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a668 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1241a66f jmp 0x1241a69d */
  goto L_1241a69d;
L_1241a671:;
  /* 1241a671 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a674 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a67a jne 0x1241a688 */
  if (!C.zf) goto L_1241a688;
  /* 1241a67c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a67f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1241a686 jmp 0x1241a69d */
  goto L_1241a69d;
L_1241a688:;
  /* 1241a688 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a68b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a691 jne 0x1241a69d */
  if (!C.zf) goto L_1241a69d;
  /* 1241a693 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a696 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1241a69d:;
  /* 1241a69d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a6a0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1241a6a3 push edx */
  push32((uint32_t)(EDX));
  /* 1241a6a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1241a6a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1241a6a9u);
  /* 1241a6a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a6ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a6af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241a6b2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1241a6b5 jmp 0x1241a6ce */
  goto L_1241a6ce;
L_1241a6b7:;
  /* 1241a6b7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a6ba mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1241a6c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241a6c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1241a6c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a6c8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1241a6cbu);
  /* 1241a6cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241a6ce:;
  /* 1241a6ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a6d1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1241a6d4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1241a6d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1241a6da:;
  /* 1241a6da mov esp, ebp */
  ESP = (EBP);
  /* 1241a6dc pop ebp */
  EBP = (pop32());
  /* 1241a6dd ret  */
  ESPCHK(0x1241a520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6e0 @ 0x1241a6e0 (89 bytes, 35 insns) */
void f_1241a6e0(void) {
  FTRACE(0x1241a6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1241a6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a6e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a6e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1241a6ea:;
  /* 1241a6ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a6ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1241a6ef cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a6f2 je 0x1241a712 */
  if (C.zf) goto L_1241a712;
  /* 1241a6f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a6f7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a6fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241a6fd mov ecx, dword ptr [0x12440c84] */
  ECX = (r32((uint32_t)(0x12440c84)));
  /* 1241a703 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241a706 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a709 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a70b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a70e jae 0x1241a712 */
  if (!C.cf) goto L_1241a712;
  /* 1241a710 jmp 0x1241a6ea */
  goto L_1241a6ea;
L_1241a712:;
  /* 1241a712 mov eax, dword ptr [0x12440c84] */
  EAX = (r32((uint32_t)(0x12440c84)));
  /* 1241a717 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1241a71a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a71d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a71f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a722 jae 0x1241a72e */
  if (!C.cf) goto L_1241a72e;
  /* 1241a724 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a727 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1241a729 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a72c je 0x1241a732 */
  if (C.zf) goto L_1241a732;
L_1241a72e:;
  /* 1241a72e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a730 jmp 0x1241a735 */
  goto L_1241a735;
L_1241a732:;
  /* 1241a732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1241a735:;
  /* 1241a735 mov esp, ebp */
  ESP = (EBP);
  /* 1241a737 pop ebp */
  EBP = (pop32());
  /* 1241a738 ret  */
  ESPCHK(0x1241a6e0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1241a740 (48 bytes, 17 insns) */
void f_1241a740(void) {
  FTRACE(0x1241a740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a740 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a741 mov ebp, esp */
  EBP = (ESP);
  /* 1241a743 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a744 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241a746 call 0x1241a440 */
  push32(0x1241a74bu); f_1241a440();
  /* 1241a74b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a74e mov eax, dword ptr [0x12442a14] */
  EAX = (r32((uint32_t)(0x12442a14)));
  /* 1241a753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241a756 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a759 mov dword ptr [0x12442a14], ecx */
  w32((uint32_t)(0x12442a14), (ECX));
  /* 1241a75f push 9 */
  push32((uint32_t)(0x9u));
  /* 1241a761 call 0x1241a4e0 */
  push32(0x1241a766u); f_1241a4e0();
  /* 1241a766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a769 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a76c mov esp, ebp */
  ESP = (EBP);
  /* 1241a76e pop ebp */
  EBP = (pop32());
  /* 1241a76f ret  */
  ESPCHK(0x1241a740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a770 @ 0x1241a770 (10 bytes, 5 insns) */
void f_1241a770(void) {
  FTRACE(0x1241a770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a770 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a771 mov ebp, esp */
  EBP = (ESP);
  /* 1241a773 mov eax, dword ptr [0x12442a14] */
  EAX = (r32((uint32_t)(0x12442a14)));
  /* 1241a778 pop ebp */
  EBP = (pop32());
  /* 1241a779 ret  */
  ESPCHK(0x1241a770u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1241a780 (45 bytes, 19 insns) */
void f_1241a780(void) {
  FTRACE(0x1241a780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a780 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a781 mov ebp, esp */
  EBP = (ESP);
  /* 1241a783 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a784 mov eax, dword ptr [0x12442a14] */
  EAX = (r32((uint32_t)(0x12442a14)));
  /* 1241a789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241a78c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a790 je 0x1241a7a0 */
  if (C.zf) goto L_1241a7a0;
  /* 1241a792 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a795 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a796 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1241a799u);
  /* 1241a799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a79c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241a79e jne 0x1241a7a4 */
  if (!C.zf) goto L_1241a7a4;
L_1241a7a0:;
  /* 1241a7a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a7a2 jmp 0x1241a7a9 */
  goto L_1241a7a9;
L_1241a7a4:;
  /* 1241a7a4 mov eax, 1 */
  EAX = (0x1u);
L_1241a7a9:;
  /* 1241a7a9 mov esp, ebp */
  ESP = (EBP);
  /* 1241a7ab pop ebp */
  EBP = (pop32());
  /* 1241a7ac ret  */
  ESPCHK(0x1241a780u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1241a7b0 (88 bytes, 40 insns) */
void f_1241a7b0(void) {
  FTRACE(0x1241a7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a7b0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1241a7b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1241a7b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241a7ba je 0x1241a803 */
  if (C.zf) goto L_1241a803;
  /* 1241a7bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a7be mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1241a7c2 push edi */
  push32((uint32_t)(EDI));
  /* 1241a7c3 mov edi, ecx */
  EDI = (ECX);
  /* 1241a7c5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a7c8 jb 0x1241a7f7 */
  if (C.cf) goto L_1241a7f7;
  /* 1241a7ca neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1241a7cc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1241a7cf je 0x1241a7d9 */
  if (C.zf) goto L_1241a7d9;
  /* 1241a7d1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1241a7d3:;
  /* 1241a7d3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241a7d5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1241a7d6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1241a7d7 jne 0x1241a7d3 */
  if (!C.zf) goto L_1241a7d3;
L_1241a7d9:;
  /* 1241a7d9 mov ecx, eax */
  ECX = (EAX);
  /* 1241a7db shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1241a7de add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a7e0 mov ecx, eax */
  ECX = (EAX);
  /* 1241a7e2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1241a7e5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a7e7 mov ecx, edx */
  ECX = (EDX);
  /* 1241a7e9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1241a7ec shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1241a7ef je 0x1241a7f7 */
  if (C.zf) goto L_1241a7f7;
  /* 1241a7f1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1241a7f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1241a7f5 je 0x1241a7fd */
  if (C.zf) goto L_1241a7fd;
L_1241a7f7:;
  /* 1241a7f7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1241a7f9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1241a7fa dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1241a7fb jne 0x1241a7f7 */
  if (!C.zf) goto L_1241a7f7;
L_1241a7fd:;
  /* 1241a7fd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1241a801 pop edi */
  EDI = (pop32());
  /* 1241a802 ret  */
  ESPCHK(0x1241a7b0u, _esp0);
  ESP += 4; return;
L_1241a803:;
  /* 1241a803 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1241a807 ret  */
  ESPCHK(0x1241a7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x1241a810 (23 bytes, 10 insns) */
void f_1241a810(void) {
  FTRACE(0x1241a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a810 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a811 mov ebp, esp */
  EBP = (ESP);
  /* 1241a813 mov eax, dword ptr [0x12442a10] */
  EAX = (r32((uint32_t)(0x12442a10)));
  /* 1241a818 push eax */
  push32((uint32_t)(EAX));
  /* 1241a819 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a81c push ecx */
  push32((uint32_t)(ECX));
  /* 1241a81d call 0x1241a830 */
  push32(0x1241a822u); f_1241a830();
  /* 1241a822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a825 pop ebp */
  EBP = (pop32());
  /* 1241a826 ret  */
  ESPCHK(0x1241a810u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1241a830 (87 bytes, 34 insns) */
void f_1241a830(void) {
  FTRACE(0x1241a830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a830 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a831 mov ebp, esp */
  EBP = (ESP);
  /* 1241a833 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a834 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a838 jbe 0x1241a83e */
  if ((C.cf||C.zf)) goto L_1241a83e;
  /* 1241a83a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a83c jmp 0x1241a883 */
  goto L_1241a883;
L_1241a83e:;
  /* 1241a83e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a842 ja 0x1241a855 */
  if ((!C.cf&&!C.zf)) goto L_1241a855;
  /* 1241a844 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a847 push eax */
  push32((uint32_t)(EAX));
  /* 1241a848 call 0x1241a890 */
  push32(0x1241a84du); f_1241a890();
  /* 1241a84d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a850 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241a853 jmp 0x1241a85c */
  goto L_1241a85c;
L_1241a855:;
  /* 1241a855 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1241a85c:;
  /* 1241a85c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a860 jne 0x1241a868 */
  if (!C.zf) goto L_1241a868;
  /* 1241a862 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a866 jne 0x1241a86d */
  if (!C.zf) goto L_1241a86d;
L_1241a868:;
  /* 1241a868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a86b jmp 0x1241a883 */
  goto L_1241a883;
L_1241a86d:;
  /* 1241a86d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a870 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a871 call 0x1241a780 */
  push32(0x1241a876u); f_1241a780();
  /* 1241a876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241a87b jne 0x1241a881 */
  if (!C.zf) goto L_1241a881;
  /* 1241a87d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a87f jmp 0x1241a883 */
  goto L_1241a883;
L_1241a881:;
  /* 1241a881 jmp 0x1241a83e */
  goto L_1241a83e;
L_1241a883:;
  /* 1241a883 mov esp, ebp */
  ESP = (EBP);
  /* 1241a885 pop ebp */
  EBP = (pop32());
  /* 1241a886 ret  */
  ESPCHK(0x1241a830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a890 @ 0x1241a890 (109 bytes, 37 insns) */
void f_1241a890(void) {
  FTRACE(0x1241a890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a890 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a891 mov ebp, esp */
  EBP = (ESP);
  /* 1241a893 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a897 cmp eax, dword ptr [0x12440c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12440c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a89d ja 0x1241a8cd */
  if ((!C.cf&&!C.zf)) goto L_1241a8cd;
  /* 1241a89f push 9 */
  push32((uint32_t)(0x9u));
  /* 1241a8a1 call 0x1241a440 */
  push32(0x1241a8a6u); f_1241a440();
  /* 1241a8a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a8a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a8ac push ecx */
  push32((uint32_t)(ECX));
  /* 1241a8ad call 0x1241b3d0 */
  push32(0x1241a8b2u); f_1241b3d0();
  /* 1241a8b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a8b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241a8b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241a8ba call 0x1241a4e0 */
  push32(0x1241a8bfu); f_1241a4e0();
  /* 1241a8bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a8c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a8c6 je 0x1241a8cd */
  if (C.zf) goto L_1241a8cd;
  /* 1241a8c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a8cb jmp 0x1241a8f9 */
  goto L_1241a8f9;
L_1241a8cd:;
  /* 1241a8cd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a8d1 jne 0x1241a8da */
  if (!C.zf) goto L_1241a8da;
  /* 1241a8d3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1241a8da:;
  /* 1241a8da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a8dd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a8e0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1241a8e3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1241a8e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a8e9 push eax */
  push32((uint32_t)(EAX));
  /* 1241a8ea push 0 */
  push32((uint32_t)(0x0u));
  /* 1241a8ec mov ecx, dword ptr [0x124441cc] */
  ECX = (r32((uint32_t)(0x124441cc)));
  /* 1241a8f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a8f3 call dword ptr [0x12445320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445320))), 0x1241a8f9u);
L_1241a8f9:;
  /* 1241a8f9 mov esp, ebp */
  ESP = (EBP);
  /* 1241a8fb pop ebp */
  EBP = (pop32());
  /* 1241a8fc ret  */
  ESPCHK(0x1241a890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a900 @ 0x1241a900 (10 bytes, 5 insns) */
void f_1241a900(void) {
  FTRACE(0x1241a900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a900 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a901 mov ebp, esp */
  EBP = (ESP);
  /* 1241a903 mov eax, 1 */
  EAX = (0x1u);
  /* 1241a908 pop ebp */
  EBP = (pop32());
  /* 1241a909 ret  */
  ESPCHK(0x1241a900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a910 @ 0x1241a910 (173 bytes, 59 insns) */
void f_1241a910(void) {
  FTRACE(0x1241a910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a910 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a911 mov ebp, esp */
  EBP = (ESP);
  /* 1241a913 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241a916 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a91a jbe 0x1241a923 */
  if ((C.cf||C.zf)) goto L_1241a923;
  /* 1241a91c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a91e jmp 0x1241a9b9 */
  goto L_1241a9b9;
L_1241a923:;
  /* 1241a923 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241a925 call 0x1241a440 */
  push32(0x1241a92au); f_1241a440();
  /* 1241a92a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a92d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a930 push eax */
  push32((uint32_t)(EAX));
  /* 1241a931 call 0x1241ad40 */
  push32(0x1241a936u); f_1241ad40();
  /* 1241a936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a939 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241a93c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a940 je 0x1241a981 */
  if (C.zf) goto L_1241a981;
  /* 1241a942 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1241a949 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a94c cmp ecx, dword ptr [0x12440c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12440c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a952 ja 0x1241a972 */
  if ((!C.cf&&!C.zf)) goto L_1241a972;
  /* 1241a954 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a957 push edx */
  push32((uint32_t)(EDX));
  /* 1241a958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a95b push eax */
  push32((uint32_t)(EAX));
  /* 1241a95c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241a95f push ecx */
  push32((uint32_t)(ECX));
  /* 1241a960 call 0x1241bc10 */
  push32(0x1241a965u); f_1241bc10();
  /* 1241a965 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241a96a je 0x1241a972 */
  if (C.zf) goto L_1241a972;
  /* 1241a96c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a96f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1241a972:;
  /* 1241a972 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241a974 call 0x1241a4e0 */
  push32(0x1241a979u); f_1241a4e0();
  /* 1241a979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a97c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241a97f jmp 0x1241a9b9 */
  goto L_1241a9b9;
L_1241a981:;
  /* 1241a981 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241a983 call 0x1241a4e0 */
  push32(0x1241a988u); f_1241a4e0();
  /* 1241a988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a98b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a98f jne 0x1241a998 */
  if (!C.zf) goto L_1241a998;
  /* 1241a991 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1241a998:;
  /* 1241a998 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a99b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a99e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1241a9a0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1241a9a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a9a6 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a9a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a9aa push edx */
  push32((uint32_t)(EDX));
  /* 1241a9ab push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1241a9ad mov eax, dword ptr [0x124441cc] */
  EAX = (r32((uint32_t)(0x124441cc)));
  /* 1241a9b2 push eax */
  push32((uint32_t)(EAX));
  /* 1241a9b3 call dword ptr [0x1244531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244531c))), 0x1241a9b9u);
L_1241a9b9:;
  /* 1241a9b9 mov esp, ebp */
  ESP = (EBP);
  /* 1241a9bb pop ebp */
  EBP = (pop32());
  /* 1241a9bc ret  */
  ESPCHK(0x1241a910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c0 @ 0x1241a9c0 (490 bytes, 165 insns) */
void f_1241a9c0(void) {
  FTRACE(0x1241a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241a9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241a9c1 mov ebp, esp */
  EBP = (ESP);
  /* 1241a9c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241a9c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a9ca jne 0x1241a9dd */
  if (!C.zf) goto L_1241a9dd;
  /* 1241a9cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241a9cf push eax */
  push32((uint32_t)(EAX));
  /* 1241a9d0 call 0x1241a810 */
  push32(0x1241a9d5u); f_1241a810();
  /* 1241a9d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a9d8 jmp 0x1241aba6 */
  goto L_1241aba6;
L_1241a9dd:;
  /* 1241a9dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241a9e1 jne 0x1241a9f6 */
  if (!C.zf) goto L_1241a9f6;
  /* 1241a9e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241a9e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1241a9e7 call 0x1241abb0 */
  push32(0x1241a9ecu); f_1241abb0();
  /* 1241a9ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241a9ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241a9f1 jmp 0x1241aba6 */
  goto L_1241aba6;
L_1241a9f6:;
  /* 1241a9f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1241a9fd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aa01 ja 0x1241ab79 */
  if ((!C.cf&&!C.zf)) goto L_1241ab79;
  /* 1241aa07 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241aa09 call 0x1241a440 */
  push32(0x1241aa0eu); f_1241a440();
  /* 1241aa0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aa11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241aa14 push edx */
  push32((uint32_t)(EDX));
  /* 1241aa15 call 0x1241ad40 */
  push32(0x1241aa1au); f_1241ad40();
  /* 1241aa1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aa1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1241aa20 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aa24 je 0x1241ab3c */
  if (C.zf) goto L_1241ab3c;
  /* 1241aa2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241aa2d cmp eax, dword ptr [0x12440c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12440c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aa33 ja 0x1241aab0 */
  if ((!C.cf&&!C.zf)) goto L_1241aab0;
  /* 1241aa35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241aa38 push ecx */
  push32((uint32_t)(ECX));
  /* 1241aa39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241aa3c push edx */
  push32((uint32_t)(EDX));
  /* 1241aa3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241aa40 push eax */
  push32((uint32_t)(EAX));
  /* 1241aa41 call 0x1241bc10 */
  push32(0x1241aa46u); f_1241bc10();
  /* 1241aa46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aa49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241aa4b je 0x1241aa55 */
  if (C.zf) goto L_1241aa55;
  /* 1241aa4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241aa50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1241aa53 jmp 0x1241aab0 */
  goto L_1241aab0;
L_1241aa55:;
  /* 1241aa55 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241aa58 push edx */
  push32((uint32_t)(EDX));
  /* 1241aa59 call 0x1241b3d0 */
  push32(0x1241aa5eu); f_1241b3d0();
  /* 1241aa5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aa61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241aa64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aa68 je 0x1241aab0 */
  if (C.zf) goto L_1241aab0;
  /* 1241aa6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241aa6d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1241aa70 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241aa73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1241aa76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241aa79 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aa7c jae 0x1241aa86 */
  if (!C.cf) goto L_1241aa86;
  /* 1241aa7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241aa81 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1241aa84 jmp 0x1241aa8c */
  goto L_1241aa8c;
L_1241aa86:;
  /* 1241aa86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241aa89 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1241aa8c:;
  /* 1241aa8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1241aa8f push edx */
  push32((uint32_t)(EDX));
  /* 1241aa90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241aa93 push eax */
  push32((uint32_t)(EAX));
  /* 1241aa94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241aa97 push ecx */
  push32((uint32_t)(ECX));
  /* 1241aa98 call 0x1241d320 */
  push32(0x1241aa9du); f_1241d320();
  /* 1241aa9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aaa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241aaa3 push edx */
  push32((uint32_t)(EDX));
  /* 1241aaa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241aaa7 push eax */
  push32((uint32_t)(EAX));
  /* 1241aaa8 call 0x1241ae00 */
  push32(0x1241aaadu); f_1241ae00();
  /* 1241aaad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241aab0:;
  /* 1241aab0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aab4 jne 0x1241ab30 */
  if (!C.zf) goto L_1241ab30;
  /* 1241aab6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aaba jne 0x1241aac3 */
  if (!C.zf) goto L_1241aac3;
  /* 1241aabc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1241aac3:;
  /* 1241aac3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241aac6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241aac9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1241aacc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1241aacf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241aad2 push edx */
  push32((uint32_t)(EDX));
  /* 1241aad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241aad5 mov eax, dword ptr [0x124441cc] */
  EAX = (r32((uint32_t)(0x124441cc)));
  /* 1241aada push eax */
  push32((uint32_t)(EAX));
  /* 1241aadb call dword ptr [0x12445320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445320))), 0x1241aae1u);
  /* 1241aae1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1241aae4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aae8 je 0x1241ab30 */
  if (C.zf) goto L_1241ab30;
  /* 1241aaea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241aaed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1241aaf0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1241aaf3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1241aaf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241aaf9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241aafc jae 0x1241ab06 */
  if (!C.cf) goto L_1241ab06;
  /* 1241aafe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241ab01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1241ab04 jmp 0x1241ab0c */
  goto L_1241ab0c;
L_1241ab06:;
  /* 1241ab06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ab09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1241ab0c:;
  /* 1241ab0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1241ab0f push eax */
  push32((uint32_t)(EAX));
  /* 1241ab10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ab13 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ab14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241ab17 push edx */
  push32((uint32_t)(EDX));
  /* 1241ab18 call 0x1241d320 */
  push32(0x1241ab1du); f_1241d320();
  /* 1241ab1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ab20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ab23 push eax */
  push32((uint32_t)(EAX));
  /* 1241ab24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1241ab27 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ab28 call 0x1241ae00 */
  push32(0x1241ab2du); f_1241ae00();
  /* 1241ab2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1241ab30:;
  /* 1241ab30 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241ab32 call 0x1241a4e0 */
  push32(0x1241ab37u); f_1241a4e0();
  /* 1241ab37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ab3a jmp 0x1241ab79 */
  goto L_1241ab79;
L_1241ab3c:;
  /* 1241ab3c push 9 */
  push32((uint32_t)(0x9u));
  /* 1241ab3e call 0x1241a4e0 */
  push32(0x1241ab43u); f_1241a4e0();
  /* 1241ab43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ab46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ab4a jne 0x1241ab53 */
  if (!C.zf) goto L_1241ab53;
  /* 1241ab4c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1241ab53:;
  /* 1241ab53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ab56 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ab59 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1241ab5c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1241ab5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ab62 push eax */
  push32((uint32_t)(EAX));
  /* 1241ab63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ab66 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ab67 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ab69 mov edx, dword ptr [0x124441cc] */
  EDX = (r32((uint32_t)(0x124441cc)));
  /* 1241ab6f push edx */
  push32((uint32_t)(EDX));
  /* 1241ab70 call dword ptr [0x1244531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244531c))), 0x1241ab76u);
  /* 1241ab76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1241ab79:;
  /* 1241ab79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ab7d jne 0x1241ab88 */
  if (!C.zf) goto L_1241ab88;
  /* 1241ab7f cmp dword ptr [0x12442a10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12442a10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ab86 jne 0x1241ab8d */
  if (!C.zf) goto L_1241ab8d;
L_1241ab88:;
  /* 1241ab88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1241ab8b jmp 0x1241aba6 */
  goto L_1241aba6;
L_1241ab8d:;
  /* 1241ab8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1241ab90 push eax */
  push32((uint32_t)(EAX));
  /* 1241ab91 call 0x1241a780 */
  push32(0x1241ab96u); f_1241a780();
  /* 1241ab96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ab99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241ab9b jne 0x1241aba1 */
  if (!C.zf) goto L_1241aba1;
  /* 1241ab9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1241ab9f jmp 0x1241aba6 */
  goto L_1241aba6;
L_1241aba1:;
  /* 1241aba1 jmp 0x1241a9f6 */
  goto L_1241a9f6;
L_1241aba6:;
  /* 1241aba6 mov esp, ebp */
  ESP = (EBP);
  /* 1241aba8 pop ebp */
  EBP = (pop32());
  /* 1241aba9 ret  */
  ESPCHK(0x1241a9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abb0 @ 0x1241abb0 (104 bytes, 38 insns) */
void f_1241abb0(void) {
  FTRACE(0x1241abb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241abb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241abb1 mov ebp, esp */
  EBP = (ESP);
  /* 1241abb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1241abb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241abb8 jne 0x1241abbc */
  if (!C.zf) goto L_1241abbc;
  /* 1241abba jmp 0x1241ac14 */
  goto L_1241ac14;
L_1241abbc:;
  /* 1241abbc push 9 */
  push32((uint32_t)(0x9u));
  /* 1241abbe call 0x1241a440 */
  push32(0x1241abc3u); f_1241a440();
  /* 1241abc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241abc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241abc9 push eax */
  push32((uint32_t)(EAX));
  /* 1241abca call 0x1241ad40 */
  push32(0x1241abcfu); f_1241ad40();
  /* 1241abcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241abd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1241abd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241abd9 je 0x1241abf7 */
  if (C.zf) goto L_1241abf7;
  /* 1241abdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241abde push ecx */
  push32((uint32_t)(ECX));
  /* 1241abdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241abe2 push edx */
  push32((uint32_t)(EDX));
  /* 1241abe3 call 0x1241ae00 */
  push32(0x1241abe8u); f_1241ae00();
  /* 1241abe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241abeb push 9 */
  push32((uint32_t)(0x9u));
  /* 1241abed call 0x1241a4e0 */
  push32(0x1241abf2u); f_1241a4e0();
  /* 1241abf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241abf5 jmp 0x1241ac14 */
  goto L_1241ac14;
L_1241abf7:;
  /* 1241abf7 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241abf9 call 0x1241a4e0 */
  push32(0x1241abfeu); f_1241a4e0();
  /* 1241abfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ac01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1241ac04 push eax */
  push32((uint32_t)(EAX));
  /* 1241ac05 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ac07 mov ecx, dword ptr [0x124441cc] */
  ECX = (r32((uint32_t)(0x124441cc)));
  /* 1241ac0d push ecx */
  push32((uint32_t)(ECX));
  /* 1241ac0e call dword ptr [0x12445340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12445340))), 0x1241ac14u);
L_1241ac14:;
  /* 1241ac14 mov esp, ebp */
  ESP = (EBP);
  /* 1241ac16 pop ebp */
  EBP = (pop32());
  /* 1241ac17 ret  */
  ESPCHK(0x1241abb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac20 @ 0x1241ac20 (116 bytes, 34 insns) */
void f_1241ac20(void) {
  FTRACE(0x1241ac20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241ac20 push ebp */
  push32((uint32_t)(EBP));
  /* 1241ac21 mov ebp, esp */
  EBP = (ESP);
  /* 1241ac23 push ecx */
  push32((uint32_t)(ECX));
  /* 1241ac24 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1241ac2b push 9 */
  push32((uint32_t)(0x9u));
  /* 1241ac2d call 0x1241a440 */
  push32(0x1241ac32u); f_1241a440();
  /* 1241ac32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ac35 call 0x1241c330 */
  push32(0x1241ac3au); f_1241c330();
  /* 1241ac3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241ac3c jge 0x1241ac45 */
  if ((C.sf==C.of)) goto L_1241ac45;
  /* 1241ac3e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1241ac45:;
  /* 1241ac45 push 9 */
  push32((uint32_t)(0x9u));
  /* 1241ac47 call 0x1241a4e0 */
  push32(0x1241ac4cu); f_1241a4e0();
  /* 1241ac4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1241ac4f push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ac51 push 0 */
  push32((uint32_t)(0x0u));
  /* 1241ac53 mov eax, dword ptr [0x124441cc] */
  EAX = (r32((uint32_t)(0x124441cc)));
  /* 1241ac58 push eax */
  push32((uint32_t)(EAX));
  /* 1241ac59 call dword ptr [0x124453ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x124453ac))), 0x1241ac5fu);
  /* 1241ac5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1241ac61 jne 0x1241ac8d */
  if (!C.zf) goto L_1241ac8d;
  /* 1241ac63 call dword ptr [0x1244539c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1244539c))), 0x1241ac69u);
  /* 1241ac69 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1241ac6c jne 0x1241ac86 */
  if (!C.zf) goto L_1241ac86;
  /* 1241ac6e call 0x1241e920 */
  push32(0x1241ac73u); f_1241e920();
  /* 1241ac73 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1241ac79 call 0x1241e910 */
  push32(0x1241ac7eu); f_1241e910();
  /* 1241ac7e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1241ac84 jmp 0x1241ac8d */
  goto L_1241ac8d;
L_1241ac86:;
  /* 1241ac86 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1241ac8d:;
  /* 1241ac8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1241ac90 mov esp, ebp */
  ESP = (EBP);
  /* 1241ac92 pop ebp */
  EBP = (pop32());
  /* 1241ac93 ret  */
  ESPCHK(0x1241ac20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aca0 @ 0x1241aca0 (10 bytes, 5 insns) */
void f_1241aca0(void) {
  FTRACE(0x1241aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1241aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1241aca1 mov ebp, esp */
  EBP = (ESP);
  /* 1241aca3 call 0x1241ac20 */
  push32(0x1241aca8u); f_1241ac20();
  /* 1241aca8 pop ebp */
  EBP = (pop32());
  /* 1241aca9 ret  */
  ESPCHK(0x1241aca0u, _esp0);
  ESP += 4; return;
}

