#include "recomp.h"

/* OnInit @ 0x12761005 (5 bytes, 1 insns) */
void f_12761005(void) {
  FTRACE(0x12761005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12761005 jmp 0x12761090 */
  f_12761090(); return;
}

/* thunk_FUN_10001030 @ 0x1276100a (5 bytes, 1 insns) */
void f_1276100a(void) {
  FTRACE(0x1276100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276100a jmp 0x12761030 */
  f_12761030(); return;
}

/* ProcessScenary @ 0x1276100f (5 bytes, 1 insns) */
void f_1276100f(void) {
  FTRACE(0x1276100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1276100f jmp 0x12761990 */
  f_12761990(); return;
}

/* FUN_10001030 @ 0x12761030 (67 bytes, 26 insns) */
void f_12761030(void) {
  FTRACE(0x12761030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12761030 push ebp */
  push32((uint32_t)(EBP));
  /* 12761031 mov ebp, esp */
  EBP = (ESP);
  /* 12761033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12761036 push ebx */
  push32((uint32_t)(EBX));
  /* 12761037 push esi */
  push32((uint32_t)(ESI));
  /* 12761038 push edi */
  push32((uint32_t)(EDI));
  /* 12761039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1276103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12761041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12761046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12761048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761052 je 0x12761056 */
  if (C.zf) goto L_12761056;
  /* 12761054 jmp 0x1276105b */
  goto L_1276105b;
L_12761056:;
  /* 12761056 call 0x12761005 */
  push32(0x1276105bu); f_12761005();
L_1276105b:;
  /* 1276105b mov eax, 1 */
  EAX = (0x1u);
  /* 12761060 pop edi */
  EDI = (pop32());
  /* 12761061 pop esi */
  ESI = (pop32());
  /* 12761062 pop ebx */
  EBX = (pop32());
  /* 12761063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761068 call 0x127639f0 */
  push32(0x1276106du); f_127639f0();
  /* 1276106d mov esp, ebp */
  ESP = (EBP);
  /* 1276106f pop ebp */
  EBP = (pop32());
  /* 12761070 ret 0xc */
  ESPCHK(0x12761030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12761090 (1843 bytes, 474 insns) */
void f_12761090(void) {
  FTRACE(0x12761090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12761090 push ebp */
  push32((uint32_t)(EBP));
  /* 12761091 mov ebp, esp */
  EBP = (ESP);
  /* 12761093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12761096 push ebx */
  push32((uint32_t)(EBX));
  /* 12761097 push esi */
  push32((uint32_t)(ESI));
  /* 12761098 push edi */
  push32((uint32_t)(EDI));
  /* 12761099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1276109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 127610a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 127610a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127610a8 mov esi, esp */
  ESI = (ESP);
  /* 127610aa push 0x1278b30c */
  push32((uint32_t)(0x1278b30cu));
  /* 127610af push 0x12790400 */
  push32((uint32_t)(0x12790400u));
  /* 127610b4 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127610bau);
  /* 127610ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127610bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127610bf call 0x127639f0 */
  push32(0x127610c4u); f_127639f0();
  /* 127610c4 mov esi, esp */
  ESI = (ESP);
  /* 127610c6 push 0x1278b304 */
  push32((uint32_t)(0x1278b304u));
  /* 127610cb push 0x12790410 */
  push32((uint32_t)(0x12790410u));
  /* 127610d0 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127610d6u);
  /* 127610d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127610d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127610db call 0x127639f0 */
  push32(0x127610e0u); f_127639f0();
  /* 127610e0 mov esi, esp */
  ESI = (ESP);
  /* 127610e2 push 0x1278b2f8 */
  push32((uint32_t)(0x1278b2f8u));
  /* 127610e7 push 0x12790408 */
  push32((uint32_t)(0x12790408u));
  /* 127610ec call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127610f2u);
  /* 127610f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127610f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127610f7 call 0x127639f0 */
  push32(0x127610fcu); f_127639f0();
  /* 127610fc mov esi, esp */
  ESI = (ESP);
  /* 127610fe push 0x1278b2e8 */
  push32((uint32_t)(0x1278b2e8u));
  /* 12761103 push 0x12790420 */
  push32((uint32_t)(0x12790420u));
  /* 12761108 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276110eu);
  /* 1276110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761113 call 0x127639f0 */
  push32(0x12761118u); f_127639f0();
  /* 12761118 mov esi, esp */
  ESI = (ESP);
  /* 1276111a push 0x1278b2dc */
  push32((uint32_t)(0x1278b2dcu));
  /* 1276111f push 0x12790418 */
  push32((uint32_t)(0x12790418u));
  /* 12761124 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276112au);
  /* 1276112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276112f call 0x127639f0 */
  push32(0x12761134u); f_127639f0();
  /* 12761134 mov esi, esp */
  ESI = (ESP);
  /* 12761136 push 0x1278b2d0 */
  push32((uint32_t)(0x1278b2d0u));
  /* 1276113b push 0x12790428 */
  push32((uint32_t)(0x12790428u));
  /* 12761140 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761146u);
  /* 12761146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276114b call 0x127639f0 */
  push32(0x12761150u); f_127639f0();
  /* 12761150 mov esi, esp */
  ESI = (ESP);
  /* 12761152 push 0x1278b2c4 */
  push32((uint32_t)(0x1278b2c4u));
  /* 12761157 push 0x12790440 */
  push32((uint32_t)(0x12790440u));
  /* 1276115c call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761162u);
  /* 12761162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761167 call 0x127639f0 */
  push32(0x1276116cu); f_127639f0();
  /* 1276116c mov esi, esp */
  ESI = (ESP);
  /* 1276116e push 0x1278b2bc */
  push32((uint32_t)(0x1278b2bcu));
  /* 12761173 push 0x12790438 */
  push32((uint32_t)(0x12790438u));
  /* 12761178 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276117eu);
  /* 1276117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761183 call 0x127639f0 */
  push32(0x12761188u); f_127639f0();
  /* 12761188 mov esi, esp */
  ESI = (ESP);
  /* 1276118a push 0x1278b2b4 */
  push32((uint32_t)(0x1278b2b4u));
  /* 1276118f push 0x12790518 */
  push32((uint32_t)(0x12790518u));
  /* 12761194 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276119au);
  /* 1276119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276119f call 0x127639f0 */
  push32(0x127611a4u); f_127639f0();
  /* 127611a4 mov esi, esp */
  ESI = (ESP);
  /* 127611a6 push 0x1278b2ac */
  push32((uint32_t)(0x1278b2acu));
  /* 127611ab push 0x12790580 */
  push32((uint32_t)(0x12790580u));
  /* 127611b0 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127611b6u);
  /* 127611b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127611b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127611bb call 0x127639f0 */
  push32(0x127611c0u); f_127639f0();
  /* 127611c0 mov esi, esp */
  ESI = (ESP);
  /* 127611c2 push 0x1278b2a0 */
  push32((uint32_t)(0x1278b2a0u));
  /* 127611c7 push 0x12790588 */
  push32((uint32_t)(0x12790588u));
  /* 127611cc call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127611d2u);
  /* 127611d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127611d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127611d7 call 0x127639f0 */
  push32(0x127611dcu); f_127639f0();
  /* 127611dc mov esi, esp */
  ESI = (ESP);
  /* 127611de push 0x1278b294 */
  push32((uint32_t)(0x1278b294u));
  /* 127611e3 push 0x12790568 */
  push32((uint32_t)(0x12790568u));
  /* 127611e8 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127611eeu);
  /* 127611ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127611f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127611f3 call 0x127639f0 */
  push32(0x127611f8u); f_127639f0();
  /* 127611f8 mov esi, esp */
  ESI = (ESP);
  /* 127611fa push 0x1278b284 */
  push32((uint32_t)(0x1278b284u));
  /* 127611ff push 0x12790578 */
  push32((uint32_t)(0x12790578u));
  /* 12761204 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276120au);
  /* 1276120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276120f call 0x127639f0 */
  push32(0x12761214u); f_127639f0();
  /* 12761214 mov esi, esp */
  ESI = (ESP);
  /* 12761216 push 0x1278b278 */
  push32((uint32_t)(0x1278b278u));
  /* 1276121b push 0x12790550 */
  push32((uint32_t)(0x12790550u));
  /* 12761220 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761226u);
  /* 12761226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276122b call 0x127639f0 */
  push32(0x12761230u); f_127639f0();
  /* 12761230 mov esi, esp */
  ESI = (ESP);
  /* 12761232 push 0x1278b270 */
  push32((uint32_t)(0x1278b270u));
  /* 12761237 push 0x12790560 */
  push32((uint32_t)(0x12790560u));
  /* 1276123c call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761242u);
  /* 12761242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761247 call 0x127639f0 */
  push32(0x1276124cu); f_127639f0();
  /* 1276124c mov esi, esp */
  ESI = (ESP);
  /* 1276124e push 0x1278b260 */
  push32((uint32_t)(0x1278b260u));
  /* 12761253 push 0x12790528 */
  push32((uint32_t)(0x12790528u));
  /* 12761258 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276125eu);
  /* 1276125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761263 call 0x127639f0 */
  push32(0x12761268u); f_127639f0();
  /* 12761268 mov esi, esp */
  ESI = (ESP);
  /* 1276126a push 0x1278b250 */
  push32((uint32_t)(0x1278b250u));
  /* 1276126f push 0x12790540 */
  push32((uint32_t)(0x12790540u));
  /* 12761274 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276127au);
  /* 1276127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276127f call 0x127639f0 */
  push32(0x12761284u); f_127639f0();
  /* 12761284 mov esi, esp */
  ESI = (ESP);
  /* 12761286 push 0x1278b244 */
  push32((uint32_t)(0x1278b244u));
  /* 1276128b push 0x127905b8 */
  push32((uint32_t)(0x127905b8u));
  /* 12761290 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761296u);
  /* 12761296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276129b call 0x127639f0 */
  push32(0x127612a0u); f_127639f0();
  /* 127612a0 mov esi, esp */
  ESI = (ESP);
  /* 127612a2 push 0x1278b234 */
  push32((uint32_t)(0x1278b234u));
  /* 127612a7 push 0x12790570 */
  push32((uint32_t)(0x12790570u));
  /* 127612ac call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127612b2u);
  /* 127612b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127612b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127612b7 call 0x127639f0 */
  push32(0x127612bcu); f_127639f0();
  /* 127612bc mov esi, esp */
  ESI = (ESP);
  /* 127612be push 0x1278b224 */
  push32((uint32_t)(0x1278b224u));
  /* 127612c3 push 0x12790548 */
  push32((uint32_t)(0x12790548u));
  /* 127612c8 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127612ceu);
  /* 127612ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127612d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127612d3 call 0x127639f0 */
  push32(0x127612d8u); f_127639f0();
  /* 127612d8 mov esi, esp */
  ESI = (ESP);
  /* 127612da push 0x1278b214 */
  push32((uint32_t)(0x1278b214u));
  /* 127612df push 0x12790558 */
  push32((uint32_t)(0x12790558u));
  /* 127612e4 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127612eau);
  /* 127612ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127612ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127612ef call 0x127639f0 */
  push32(0x127612f4u); f_127639f0();
  /* 127612f4 mov esi, esp */
  ESI = (ESP);
  /* 127612f6 push 0x1278b204 */
  push32((uint32_t)(0x1278b204u));
  /* 127612fb push 0x12790520 */
  push32((uint32_t)(0x12790520u));
  /* 12761300 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761306u);
  /* 12761306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276130b call 0x127639f0 */
  push32(0x12761310u); f_127639f0();
  /* 12761310 mov esi, esp */
  ESI = (ESP);
  /* 12761312 push 0x1278b1fc */
  push32((uint32_t)(0x1278b1fcu));
  /* 12761317 push 0x12790538 */
  push32((uint32_t)(0x12790538u));
  /* 1276131c call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761322u);
  /* 12761322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761327 call 0x127639f0 */
  push32(0x1276132cu); f_127639f0();
  /* 1276132c mov esi, esp */
  ESI = (ESP);
  /* 1276132e push 0x1278b1f0 */
  push32((uint32_t)(0x1278b1f0u));
  /* 12761333 push 0x127905b0 */
  push32((uint32_t)(0x127905b0u));
  /* 12761338 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276133eu);
  /* 1276133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761343 call 0x127639f0 */
  push32(0x12761348u); f_127639f0();
  /* 12761348 mov esi, esp */
  ESI = (ESP);
  /* 1276134a push 0x1278b1e0 */
  push32((uint32_t)(0x1278b1e0u));
  /* 1276134f push 0x127905c8 */
  push32((uint32_t)(0x127905c8u));
  /* 12761354 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x1276135au);
  /* 1276135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276135f call 0x127639f0 */
  push32(0x12761364u); f_127639f0();
  /* 12761364 mov esi, esp */
  ESI = (ESP);
  /* 12761366 push 0x1278b1d0 */
  push32((uint32_t)(0x1278b1d0u));
  /* 1276136b push 0x12790598 */
  push32((uint32_t)(0x12790598u));
  /* 12761370 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761376u);
  /* 12761376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276137b call 0x127639f0 */
  push32(0x12761380u); f_127639f0();
  /* 12761380 mov esi, esp */
  ESI = (ESP);
  /* 12761382 push 0x1278b270 */
  push32((uint32_t)(0x1278b270u));
  /* 12761387 push 0x127905a0 */
  push32((uint32_t)(0x127905a0u));
  /* 1276138c call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x12761392u);
  /* 12761392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761397 call 0x127639f0 */
  push32(0x1276139cu); f_127639f0();
  /* 1276139c mov esi, esp */
  ESI = (ESP);
  /* 1276139e push 0x1278b270 */
  push32((uint32_t)(0x1278b270u));
  /* 127613a3 push 0x127903f0 */
  push32((uint32_t)(0x127903f0u));
  /* 127613a8 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127613aeu);
  /* 127613ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127613b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127613b3 call 0x127639f0 */
  push32(0x127613b8u); f_127639f0();
  /* 127613b8 mov esi, esp */
  ESI = (ESP);
  /* 127613ba push 0x1278b1c0 */
  push32((uint32_t)(0x1278b1c0u));
  /* 127613bf push 0x12790590 */
  push32((uint32_t)(0x12790590u));
  /* 127613c4 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127613cau);
  /* 127613ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127613cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127613cf call 0x127639f0 */
  push32(0x127613d4u); f_127639f0();
  /* 127613d4 mov esi, esp */
  ESI = (ESP);
  /* 127613d6 push 0x1278b1b4 */
  push32((uint32_t)(0x1278b1b4u));
  /* 127613db push 0x12790530 */
  push32((uint32_t)(0x12790530u));
  /* 127613e0 call dword ptr [0x127934a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a4))), 0x127613e6u);
  /* 127613e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127613e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127613eb call 0x127639f0 */
  push32(0x127613f0u); f_127639f0();
  /* 127613f0 mov esi, esp */
  ESI = (ESP);
  /* 127613f2 push 0x1278b1ac */
  push32((uint32_t)(0x1278b1acu));
  /* 127613f7 push 0x127904b0 */
  push32((uint32_t)(0x127904b0u));
  /* 127613fc call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x12761402u);
  /* 12761402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761407 call 0x127639f0 */
  push32(0x1276140cu); f_127639f0();
  /* 1276140c mov esi, esp */
  ESI = (ESP);
  /* 1276140e push 0x1278b1a4 */
  push32((uint32_t)(0x1278b1a4u));
  /* 12761413 push 0x127904b8 */
  push32((uint32_t)(0x127904b8u));
  /* 12761418 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x1276141eu);
  /* 1276141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761423 call 0x127639f0 */
  push32(0x12761428u); f_127639f0();
  /* 12761428 mov esi, esp */
  ESI = (ESP);
  /* 1276142a push 0x1278b19c */
  push32((uint32_t)(0x1278b19cu));
  /* 1276142f push 0x127904c0 */
  push32((uint32_t)(0x127904c0u));
  /* 12761434 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x1276143au);
  /* 1276143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276143f call 0x127639f0 */
  push32(0x12761444u); f_127639f0();
  /* 12761444 mov esi, esp */
  ESI = (ESP);
  /* 12761446 push 0x1278b194 */
  push32((uint32_t)(0x1278b194u));
  /* 1276144b push 0x127904c8 */
  push32((uint32_t)(0x127904c8u));
  /* 12761450 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x12761456u);
  /* 12761456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276145b call 0x127639f0 */
  push32(0x12761460u); f_127639f0();
  /* 12761460 mov esi, esp */
  ESI = (ESP);
  /* 12761462 push 0x1278b18c */
  push32((uint32_t)(0x1278b18cu));
  /* 12761467 push 0x127904d0 */
  push32((uint32_t)(0x127904d0u));
  /* 1276146c call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x12761472u);
  /* 12761472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761477 call 0x127639f0 */
  push32(0x1276147cu); f_127639f0();
  /* 1276147c mov esi, esp */
  ESI = (ESP);
  /* 1276147e push 0x1278b184 */
  push32((uint32_t)(0x1278b184u));
  /* 12761483 push 0x127904d8 */
  push32((uint32_t)(0x127904d8u));
  /* 12761488 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x1276148eu);
  /* 1276148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761493 call 0x127639f0 */
  push32(0x12761498u); f_127639f0();
  /* 12761498 mov esi, esp */
  ESI = (ESP);
  /* 1276149a push 0x1278b17c */
  push32((uint32_t)(0x1278b17cu));
  /* 1276149f push 0x127904e0 */
  push32((uint32_t)(0x127904e0u));
  /* 127614a4 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x127614aau);
  /* 127614aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127614ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127614af call 0x127639f0 */
  push32(0x127614b4u); f_127639f0();
  /* 127614b4 mov esi, esp */
  ESI = (ESP);
  /* 127614b6 push 0x1278b170 */
  push32((uint32_t)(0x1278b170u));
  /* 127614bb push 0x127904e8 */
  push32((uint32_t)(0x127904e8u));
  /* 127614c0 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x127614c6u);
  /* 127614c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127614c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127614cb call 0x127639f0 */
  push32(0x127614d0u); f_127639f0();
  /* 127614d0 mov esi, esp */
  ESI = (ESP);
  /* 127614d2 push 0x1278b164 */
  push32((uint32_t)(0x1278b164u));
  /* 127614d7 push 0x127904f0 */
  push32((uint32_t)(0x127904f0u));
  /* 127614dc call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x127614e2u);
  /* 127614e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127614e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127614e7 call 0x127639f0 */
  push32(0x127614ecu); f_127639f0();
  /* 127614ec mov esi, esp */
  ESI = (ESP);
  /* 127614ee push 0x1278b15c */
  push32((uint32_t)(0x1278b15cu));
  /* 127614f3 push 0x12790470 */
  push32((uint32_t)(0x12790470u));
  /* 127614f8 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x127614feu);
  /* 127614fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761503 call 0x127639f0 */
  push32(0x12761508u); f_127639f0();
  /* 12761508 mov esi, esp */
  ESI = (ESP);
  /* 1276150a push 0x1278b150 */
  push32((uint32_t)(0x1278b150u));
  /* 1276150f push 0x12790468 */
  push32((uint32_t)(0x12790468u));
  /* 12761514 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x1276151au);
  /* 1276151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276151f call 0x127639f0 */
  push32(0x12761524u); f_127639f0();
  /* 12761524 mov esi, esp */
  ESI = (ESP);
  /* 12761526 push 0x1278b144 */
  push32((uint32_t)(0x1278b144u));
  /* 1276152b push 0x12790488 */
  push32((uint32_t)(0x12790488u));
  /* 12761530 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x12761536u);
  /* 12761536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276153b call 0x127639f0 */
  push32(0x12761540u); f_127639f0();
  /* 12761540 mov esi, esp */
  ESI = (ESP);
  /* 12761542 push 0x1278b13c */
  push32((uint32_t)(0x1278b13cu));
  /* 12761547 push 0x12790478 */
  push32((uint32_t)(0x12790478u));
  /* 1276154c call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x12761552u);
  /* 12761552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761557 call 0x127639f0 */
  push32(0x1276155cu); f_127639f0();
  /* 1276155c mov esi, esp */
  ESI = (ESP);
  /* 1276155e push 0x1278b134 */
  push32((uint32_t)(0x1278b134u));
  /* 12761563 push 0x12790498 */
  push32((uint32_t)(0x12790498u));
  /* 12761568 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x1276156eu);
  /* 1276156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761573 call 0x127639f0 */
  push32(0x12761578u); f_127639f0();
  /* 12761578 mov esi, esp */
  ESI = (ESP);
  /* 1276157a push 0x1278b128 */
  push32((uint32_t)(0x1278b128u));
  /* 1276157f push 0x12790490 */
  push32((uint32_t)(0x12790490u));
  /* 12761584 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x1276158au);
  /* 1276158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276158f call 0x127639f0 */
  push32(0x12761594u); f_127639f0();
  /* 12761594 mov esi, esp */
  ESI = (ESP);
  /* 12761596 push 0x1278b11c */
  push32((uint32_t)(0x1278b11cu));
  /* 1276159b push 0x127904a8 */
  push32((uint32_t)(0x127904a8u));
  /* 127615a0 call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x127615a6u);
  /* 127615a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127615a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127615ab call 0x127639f0 */
  push32(0x127615b0u); f_127639f0();
  /* 127615b0 mov esi, esp */
  ESI = (ESP);
  /* 127615b2 push 0x1278b110 */
  push32((uint32_t)(0x1278b110u));
  /* 127615b7 push 0x127904a0 */
  push32((uint32_t)(0x127904a0u));
  /* 127615bc call dword ptr [0x127934a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a8))), 0x127615c2u);
  /* 127615c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127615c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127615c7 call 0x127639f0 */
  push32(0x127615ccu); f_127639f0();
  /* 127615cc mov esi, esp */
  ESI = (ESP);
  /* 127615ce push 0xff */
  push32((uint32_t)(0xffu));
  /* 127615d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127615d5 call dword ptr [0x127934ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934ac))), 0x127615dbu);
  /* 127615db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127615de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127615e0 call 0x127639f0 */
  push32(0x127615e5u); f_127639f0();
  /* 127615e5 mov esi, esp */
  ESI = (ESP);
  /* 127615e7 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 127615e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 127615eb call dword ptr [0x127934ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934ac))), 0x127615f1u);
  /* 127615f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127615f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127615f6 call 0x127639f0 */
  push32(0x127615fbu); f_127639f0();
  /* 127615fb mov esi, esp */
  ESI = (ESP);
  /* 127615fd push 0x1278b100 */
  push32((uint32_t)(0x1278b100u));
  /* 12761602 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761604 call dword ptr [0x127934b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b0))), 0x1276160au);
  /* 1276160a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276160d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276160f call 0x127639f0 */
  push32(0x12761614u); f_127639f0();
  /* 12761614 mov esi, esp */
  ESI = (ESP);
  /* 12761616 push 0x1278b0f8 */
  push32((uint32_t)(0x1278b0f8u));
  /* 1276161b push 2 */
  push32((uint32_t)(0x2u));
  /* 1276161d call dword ptr [0x127934b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b0))), 0x12761623u);
  /* 12761623 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761626 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761628 call 0x127639f0 */
  push32(0x1276162du); f_127639f0();
  /* 1276162d mov esi, esp */
  ESI = (ESP);
  /* 1276162f push 0x1278b0ec */
  push32((uint32_t)(0x1278b0ecu));
  /* 12761634 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761636 call dword ptr [0x127934b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b0))), 0x1276163cu);
  /* 1276163c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276163f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761641 call 0x127639f0 */
  push32(0x12761646u); f_127639f0();
  /* 12761646 mov esi, esp */
  ESI = (ESP);
  /* 12761648 push 0x1278b0e4 */
  push32((uint32_t)(0x1278b0e4u));
  /* 1276164d push 0x12790450 */
  push32((uint32_t)(0x12790450u));
  /* 12761652 call dword ptr [0x127934b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b4))), 0x12761658u);
  /* 12761658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276165b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276165d call 0x127639f0 */
  push32(0x12761662u); f_127639f0();
  /* 12761662 mov esi, esp */
  ESI = (ESP);
  /* 12761664 push 0x1278b0d8 */
  push32((uint32_t)(0x1278b0d8u));
  /* 12761669 push 0x12790458 */
  push32((uint32_t)(0x12790458u));
  /* 1276166e call dword ptr [0x127934b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b4))), 0x12761674u);
  /* 12761674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761679 call 0x127639f0 */
  push32(0x1276167eu); f_127639f0();
  /* 1276167e mov esi, esp */
  ESI = (ESP);
  /* 12761680 push 0x1278b0c8 */
  push32((uint32_t)(0x1278b0c8u));
  /* 12761685 push 0x127903e0 */
  push32((uint32_t)(0x127903e0u));
  /* 1276168a call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x12761690u);
  /* 12761690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761693 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761695 call 0x127639f0 */
  push32(0x1276169au); f_127639f0();
  /* 1276169a mov esi, esp */
  ESI = (ESP);
  /* 1276169c push 0x1278b0b8 */
  push32((uint32_t)(0x1278b0b8u));
  /* 127616a1 push 0x12790500 */
  push32((uint32_t)(0x12790500u));
  /* 127616a6 call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x127616acu);
  /* 127616ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127616af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127616b1 call 0x127639f0 */
  push32(0x127616b6u); f_127639f0();
  /* 127616b6 mov esi, esp */
  ESI = (ESP);
  /* 127616b8 push 0x1278b0a8 */
  push32((uint32_t)(0x1278b0a8u));
  /* 127616bd push 0x12790508 */
  push32((uint32_t)(0x12790508u));
  /* 127616c2 call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x127616c8u);
  /* 127616c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127616cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127616cd call 0x127639f0 */
  push32(0x127616d2u); f_127639f0();
  /* 127616d2 mov esi, esp */
  ESI = (ESP);
  /* 127616d4 push 0x1278b09c */
  push32((uint32_t)(0x1278b09cu));
  /* 127616d9 push 0x127903e8 */
  push32((uint32_t)(0x127903e8u));
  /* 127616de call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x127616e4u);
  /* 127616e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127616e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127616e9 call 0x127639f0 */
  push32(0x127616eeu); f_127639f0();
  /* 127616ee mov esi, esp */
  ESI = (ESP);
  /* 127616f0 push 0x1278b088 */
  push32((uint32_t)(0x1278b088u));
  /* 127616f5 push 0x12790510 */
  push32((uint32_t)(0x12790510u));
  /* 127616fa call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x12761700u);
  /* 12761700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761705 call 0x127639f0 */
  push32(0x1276170au); f_127639f0();
  /* 1276170a mov esi, esp */
  ESI = (ESP);
  /* 1276170c push 0x1278b070 */
  push32((uint32_t)(0x1278b070u));
  /* 12761711 push 0x12790480 */
  push32((uint32_t)(0x12790480u));
  /* 12761716 call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x1276171cu);
  /* 1276171c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276171f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761721 call 0x127639f0 */
  push32(0x12761726u); f_127639f0();
  /* 12761726 mov esi, esp */
  ESI = (ESP);
  /* 12761728 push 0x1278b064 */
  push32((uint32_t)(0x1278b064u));
  /* 1276172d push 0x127903f8 */
  push32((uint32_t)(0x127903f8u));
  /* 12761732 call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x12761738u);
  /* 12761738 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276173b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276173d call 0x127639f0 */
  push32(0x12761742u); f_127639f0();
  /* 12761742 mov esi, esp */
  ESI = (ESP);
  /* 12761744 push 0x1278b04c */
  push32((uint32_t)(0x1278b04cu));
  /* 12761749 push 0x12790460 */
  push32((uint32_t)(0x12790460u));
  /* 1276174e call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x12761754u);
  /* 12761754 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761759 call 0x127639f0 */
  push32(0x1276175eu); f_127639f0();
  /* 1276175e mov esi, esp */
  ESI = (ESP);
  /* 12761760 push 0x1278b03c */
  push32((uint32_t)(0x1278b03cu));
  /* 12761765 push 0x127904f8 */
  push32((uint32_t)(0x127904f8u));
  /* 1276176a call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x12761770u);
  /* 12761770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761775 call 0x127639f0 */
  push32(0x1276177au); f_127639f0();
  /* 1276177a mov esi, esp */
  ESI = (ESP);
  /* 1276177c push 0x1278b02c */
  push32((uint32_t)(0x1278b02cu));
  /* 12761781 push 0x127905d0 */
  push32((uint32_t)(0x127905d0u));
  /* 12761786 call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x1276178cu);
  /* 1276178c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276178f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761791 call 0x127639f0 */
  push32(0x12761796u); f_127639f0();
  /* 12761796 mov esi, esp */
  ESI = (ESP);
  /* 12761798 push 0x1278b01c */
  push32((uint32_t)(0x1278b01cu));
  /* 1276179d push 0x12790448 */
  push32((uint32_t)(0x12790448u));
  /* 127617a2 call dword ptr [0x127934b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934b8))), 0x127617a8u);
  /* 127617a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127617ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127617ad call 0x127639f0 */
  push32(0x127617b2u); f_127639f0();
  /* 127617b2 pop edi */
  EDI = (pop32());
  /* 127617b3 pop esi */
  ESI = (pop32());
  /* 127617b4 pop ebx */
  EBX = (pop32());
  /* 127617b5 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127617b8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127617ba call 0x127639f0 */
  push32(0x127617bfu); f_127639f0();
  /* 127617bf mov esp, ebp */
  ESP = (EBP);
  /* 127617c1 pop ebp */
  EBP = (pop32());
  /* 127617c2 ret  */
  ESPCHK(0x12761090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001990 @ 0x12761990 (6442 bytes, 1872 insns) */
void f_12761990(void) {
  FTRACE(0x12761990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12761990 push ebp */
  push32((uint32_t)(EBP));
  /* 12761991 mov ebp, esp */
  EBP = (ESP);
  /* 12761993 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12761996 push ebx */
  push32((uint32_t)(EBX));
  /* 12761997 push esi */
  push32((uint32_t)(ESI));
  /* 12761998 push edi */
  push32((uint32_t)(EDI));
  /* 12761999 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1276199c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 127619a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 127619a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 127619a8 mov esi, esp */
  ESI = (ESP);
  /* 127619aa push 1 */
  push32((uint32_t)(0x1u));
  /* 127619ac call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x127619b2u);
  /* 127619b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127619b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127619b7 call 0x127639f0 */
  push32(0x127619bcu); f_127639f0();
  /* 127619bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127619c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127619c3 je 0x12761d09 */
  if (C.zf) goto L_12761d09;
  /* 127619c9 mov esi, esp */
  ESI = (ESP);
  /* 127619cb push 0 */
  push32((uint32_t)(0x0u));
  /* 127619cd push 1 */
  push32((uint32_t)(0x1u));
  /* 127619cf call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x127619d5u);
  /* 127619d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127619d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127619da call 0x127639f0 */
  push32(0x127619dfu); f_127639f0();
  /* 127619df mov esi, esp */
  ESI = (ESP);
  /* 127619e1 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 127619e6 push 3 */
  push32((uint32_t)(0x3u));
  /* 127619e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127619ea call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x127619f0u);
  /* 127619f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127619f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127619f5 call 0x127639f0 */
  push32(0x127619fau); f_127639f0();
  /* 127619fa mov esi, esp */
  ESI = (ESP);
  /* 127619fc push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12761a01 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761a05 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761a0bu);
  /* 12761a0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761a0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761a10 call 0x127639f0 */
  push32(0x12761a15u); f_127639f0();
  /* 12761a15 mov esi, esp */
  ESI = (ESP);
  /* 12761a17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761a19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12761a1d call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761a23u);
  /* 12761a23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761a26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761a28 call 0x127639f0 */
  push32(0x12761a2du); f_127639f0();
  /* 12761a2d mov esi, esp */
  ESI = (ESP);
  /* 12761a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12761a31 push 2 */
  push32((uint32_t)(0x2u));
  /* 12761a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761a35 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761a3bu);
  /* 12761a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761a3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761a40 call 0x127639f0 */
  push32(0x12761a45u); f_127639f0();
  /* 12761a45 mov esi, esp */
  ESI = (ESP);
  /* 12761a47 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12761a4c push 5 */
  push32((uint32_t)(0x5u));
  /* 12761a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12761a50 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761a56u);
  /* 12761a56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761a59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761a5b call 0x127639f0 */
  push32(0x12761a60u); f_127639f0();
  /* 12761a60 mov esi, esp */
  ESI = (ESP);
  /* 12761a62 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12761a67 push 4 */
  push32((uint32_t)(0x4u));
  /* 12761a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761a6b call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761a71u);
  /* 12761a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761a76 call 0x127639f0 */
  push32(0x12761a7bu); f_127639f0();
  /* 12761a7b mov esi, esp */
  ESI = (ESP);
  /* 12761a7d push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 12761a82 push 3 */
  push32((uint32_t)(0x3u));
  /* 12761a84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761a86 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761a8cu);
  /* 12761a8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761a8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761a91 call 0x127639f0 */
  push32(0x12761a96u); f_127639f0();
  /* 12761a96 mov esi, esp */
  ESI = (ESP);
  /* 12761a98 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 12761a9d push 5 */
  push32((uint32_t)(0x5u));
  /* 12761a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12761aa1 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761aa7u);
  /* 12761aa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761aaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761aac call 0x127639f0 */
  push32(0x12761ab1u); f_127639f0();
  /* 12761ab1 mov esi, esp */
  ESI = (ESP);
  /* 12761ab3 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 12761ab8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12761aba push 1 */
  push32((uint32_t)(0x1u));
  /* 12761abc call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761ac2u);
  /* 12761ac2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761ac7 call 0x127639f0 */
  push32(0x12761accu); f_127639f0();
  /* 12761acc mov esi, esp */
  ESI = (ESP);
  /* 12761ace push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 12761ad3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761ad5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761ad7 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761addu);
  /* 12761add add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761ae2 call 0x127639f0 */
  push32(0x12761ae7u); f_127639f0();
  /* 12761ae7 mov esi, esp */
  ESI = (ESP);
  /* 12761ae9 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 12761aee push 3 */
  push32((uint32_t)(0x3u));
  /* 12761af0 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761af2 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761af8u);
  /* 12761af8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761afb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761afd call 0x127639f0 */
  push32(0x12761b02u); f_127639f0();
  /* 12761b02 mov esi, esp */
  ESI = (ESP);
  /* 12761b04 push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 12761b09 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761b0b push 5 */
  push32((uint32_t)(0x5u));
  /* 12761b0d call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761b13u);
  /* 12761b13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761b16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761b18 call 0x127639f0 */
  push32(0x12761b1du); f_127639f0();
  /* 12761b1d mov esi, esp */
  ESI = (ESP);
  /* 12761b1f push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 12761b24 push 4 */
  push32((uint32_t)(0x4u));
  /* 12761b26 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761b28 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761b2eu);
  /* 12761b2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761b31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761b33 call 0x127639f0 */
  push32(0x12761b38u); f_127639f0();
  /* 12761b38 mov esi, esp */
  ESI = (ESP);
  /* 12761b3a push 0x4876e740 */
  push32((uint32_t)(0x4876e740u));
  /* 12761b3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12761b41 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761b43 call dword ptr [0x1279342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279342c))), 0x12761b49u);
  /* 12761b49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761b4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761b4e call 0x127639f0 */
  push32(0x12761b53u); f_127639f0();
  /* 12761b53 mov esi, esp */
  ESI = (ESP);
  /* 12761b55 push 0x1278b388 */
  push32((uint32_t)(0x1278b388u));
  /* 12761b5a call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12761b60u);
  /* 12761b60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761b63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761b65 call 0x127639f0 */
  push32(0x12761b6au); f_127639f0();
  /* 12761b6a mov esi, esp */
  ESI = (ESP);
  /* 12761b6c push 0x1278b384 */
  push32((uint32_t)(0x1278b384u));
  /* 12761b71 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12761b77u);
  /* 12761b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761b7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761b7c call 0x127639f0 */
  push32(0x12761b81u); f_127639f0();
  /* 12761b81 mov esi, esp */
  ESI = (ESP);
  /* 12761b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761b87 push 0x127904c8 */
  push32((uint32_t)(0x127904c8u));
  /* 12761b8c call dword ptr [0x12793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793434))), 0x12761b92u);
  /* 12761b92 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761b95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761b97 call 0x127639f0 */
  push32(0x12761b9cu); f_127639f0();
  /* 12761b9c mov esi, esp */
  ESI = (ESP);
  /* 12761b9e push 0x127904c8 */
  push32((uint32_t)(0x127904c8u));
  /* 12761ba3 call dword ptr [0x12793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793438))), 0x12761ba9u);
  /* 12761ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761bae call 0x127639f0 */
  push32(0x12761bb3u); f_127639f0();
  /* 12761bb3 mov esi, esp */
  ESI = (ESP);
  /* 12761bb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761bb7 push 0x12790418 */
  push32((uint32_t)(0x12790418u));
  /* 12761bbc call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12761bc2u);
  /* 12761bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761bc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761bc7 call 0x127639f0 */
  push32(0x12761bccu); f_127639f0();
  /* 12761bcc mov esi, esp */
  ESI = (ESP);
  /* 12761bce push 1 */
  push32((uint32_t)(0x1u));
  /* 12761bd0 push 0x12790528 */
  push32((uint32_t)(0x12790528u));
  /* 12761bd5 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12761bdbu);
  /* 12761bdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761bde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761be0 call 0x127639f0 */
  push32(0x12761be5u); f_127639f0();
  /* 12761be5 mov esi, esp */
  ESI = (ESP);
  /* 12761be7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761be9 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761beb call dword ptr [0x12793440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793440))), 0x12761bf1u);
  /* 12761bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761bf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761bf6 call 0x127639f0 */
  push32(0x12761bfbu); f_127639f0();
  /* 12761bfb mov esi, esp */
  ESI = (ESP);
  /* 12761bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12761bff push 0x12790570 */
  push32((uint32_t)(0x12790570u));
  /* 12761c04 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12761c0au);
  /* 12761c0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761c0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761c0f call 0x127639f0 */
  push32(0x12761c14u); f_127639f0();
  /* 12761c14 mov esi, esp */
  ESI = (ESP);
  /* 12761c16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761c18 push 0x127904d0 */
  push32((uint32_t)(0x127904d0u));
  /* 12761c1d push 1 */
  push32((uint32_t)(0x1u));
  /* 12761c1f call dword ptr [0x12793444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793444))), 0x12761c25u);
  /* 12761c25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761c28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761c2a call 0x127639f0 */
  push32(0x12761c2fu); f_127639f0();
  /* 12761c2f mov esi, esp */
  ESI = (ESP);
  /* 12761c31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761c33 push 0x12790548 */
  push32((uint32_t)(0x12790548u));
  /* 12761c38 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12761c3eu);
  /* 12761c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761c43 call 0x127639f0 */
  push32(0x12761c48u); f_127639f0();
  /* 12761c48 mov esi, esp */
  ESI = (ESP);
  /* 12761c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12761c4c push 0x127904d8 */
  push32((uint32_t)(0x127904d8u));
  /* 12761c51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761c53 call dword ptr [0x12793444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793444))), 0x12761c59u);
  /* 12761c59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761c5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761c5e call 0x127639f0 */
  push32(0x12761c63u); f_127639f0();
  /* 12761c63 mov esi, esp */
  ESI = (ESP);
  /* 12761c65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761c67 push 0x12790558 */
  push32((uint32_t)(0x12790558u));
  /* 12761c6c call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12761c72u);
  /* 12761c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761c75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761c77 call 0x127639f0 */
  push32(0x12761c7cu); f_127639f0();
  /* 12761c7c mov esi, esp */
  ESI = (ESP);
  /* 12761c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12761c80 push 0x127904e0 */
  push32((uint32_t)(0x127904e0u));
  /* 12761c85 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761c87 call dword ptr [0x12793444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793444))), 0x12761c8du);
  /* 12761c8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761c90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761c92 call 0x127639f0 */
  push32(0x12761c97u); f_127639f0();
  /* 12761c97 mov esi, esp */
  ESI = (ESP);
  /* 12761c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761c9b push 0x127905b0 */
  push32((uint32_t)(0x127905b0u));
  /* 12761ca0 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12761ca6u);
  /* 12761ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761ca9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761cab call 0x127639f0 */
  push32(0x12761cb0u); f_127639f0();
  /* 12761cb0 mov esi, esp */
  ESI = (ESP);
  /* 12761cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761cb4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12761cb9 push 0x127904a8 */
  push32((uint32_t)(0x127904a8u));
  /* 12761cbe push 1 */
  push32((uint32_t)(0x1u));
  /* 12761cc0 call dword ptr [0x12793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793448))), 0x12761cc6u);
  /* 12761cc6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761cc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761ccb call 0x127639f0 */
  push32(0x12761cd0u); f_127639f0();
  /* 12761cd0 mov esi, esp */
  ESI = (ESP);
  /* 12761cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761cd4 push 0x12790598 */
  push32((uint32_t)(0x12790598u));
  /* 12761cd9 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12761cdfu);
  /* 12761cdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761ce4 call 0x127639f0 */
  push32(0x12761ce9u); f_127639f0();
  /* 12761ce9 mov esi, esp */
  ESI = (ESP);
  /* 12761ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 12761ced push 0x9e */
  push32((uint32_t)(0x9eu));
  /* 12761cf2 push 0x127904a0 */
  push32((uint32_t)(0x127904a0u));
  /* 12761cf7 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761cf9 call dword ptr [0x12793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793448))), 0x12761cffu);
  /* 12761cff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761d02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761d04 call 0x127639f0 */
  push32(0x12761d09u); f_127639f0();
L_12761d09:;
  /* 12761d09 mov esi, esp */
  ESI = (ESP);
  /* 12761d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 12761d0d call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12761d13u);
  /* 12761d13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761d18 call 0x127639f0 */
  push32(0x12761d1du); f_127639f0();
  /* 12761d1d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12761d22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761d24 je 0x12761d87 */
  if (C.zf) goto L_12761d87;
  /* 12761d26 mov esi, esp */
  ESI = (ESP);
  /* 12761d28 push 0x12790590 */
  push32((uint32_t)(0x12790590u));
  /* 12761d2d push 0x12790478 */
  push32((uint32_t)(0x12790478u));
  /* 12761d32 call dword ptr [0x1279344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279344c))), 0x12761d38u);
  /* 12761d38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761d3d call 0x127639f0 */
  push32(0x12761d42u); f_127639f0();
  /* 12761d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761d44 jle 0x12761d87 */
  if ((C.zf||C.sf!=C.of)) goto L_12761d87;
  /* 12761d46 mov esi, esp */
  ESI = (ESP);
  /* 12761d48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761d4a push 2 */
  push32((uint32_t)(0x2u));
  /* 12761d4c call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12761d52u);
  /* 12761d52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761d55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761d57 call 0x127639f0 */
  push32(0x12761d5cu); f_127639f0();
  /* 12761d5c mov esi, esp */
  ESI = (ESP);
  /* 12761d5e push 0x1278b380 */
  push32((uint32_t)(0x1278b380u));
  /* 12761d63 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12761d69u);
  /* 12761d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761d6e call 0x127639f0 */
  push32(0x12761d73u); f_127639f0();
  /* 12761d73 mov esi, esp */
  ESI = (ESP);
  /* 12761d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761d77 call dword ptr [0x12793450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793450))), 0x12761d7du);
  /* 12761d7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761d80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761d82 call 0x127639f0 */
  push32(0x12761d87u); f_127639f0();
L_12761d87:;
  /* 12761d87 mov esi, esp */
  ESI = (ESP);
  /* 12761d89 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761d8b call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12761d91u);
  /* 12761d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761d94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761d96 call 0x127639f0 */
  push32(0x12761d9bu); f_127639f0();
  /* 12761d9b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12761da0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761da2 je 0x12761e01 */
  if (C.zf) goto L_12761e01;
  /* 12761da4 mov esi, esp */
  ESI = (ESP);
  /* 12761da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761da8 push 0x12790470 */
  push32((uint32_t)(0x12790470u));
  /* 12761dad call dword ptr [0x12793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793454))), 0x12761db3u);
  /* 12761db3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761db6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761db8 call 0x127639f0 */
  push32(0x12761dbdu); f_127639f0();
  /* 12761dbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761dbf jle 0x12761e01 */
  if ((C.zf||C.sf!=C.of)) goto L_12761e01;
  /* 12761dc1 mov esi, esp */
  ESI = (ESP);
  /* 12761dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761dc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12761dc7 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12761dcdu);
  /* 12761dcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761dd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761dd2 call 0x127639f0 */
  push32(0x12761dd7u); f_127639f0();
  /* 12761dd7 mov esi, esp */
  ESI = (ESP);
  /* 12761dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761ddb push 5 */
  push32((uint32_t)(0x5u));
  /* 12761ddd call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12761de3u);
  /* 12761de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761de6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761de8 call 0x127639f0 */
  push32(0x12761dedu); f_127639f0();
  /* 12761ded mov esi, esp */
  ESI = (ESP);
  /* 12761def push 0 */
  push32((uint32_t)(0x0u));
  /* 12761df1 call dword ptr [0x12793450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793450))), 0x12761df7u);
  /* 12761df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761dfa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761dfc call 0x127639f0 */
  push32(0x12761e01u); f_127639f0();
L_12761e01:;
  /* 12761e01 mov esi, esp */
  ESI = (ESP);
  /* 12761e03 push 3 */
  push32((uint32_t)(0x3u));
  /* 12761e05 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12761e0bu);
  /* 12761e0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761e0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761e10 call 0x127639f0 */
  push32(0x12761e15u); f_127639f0();
  /* 12761e15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12761e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761e1c je 0x12761ea6 */
  if (C.zf) goto L_12761ea6;
  /* 12761e22 mov esi, esp */
  ESI = (ESP);
  /* 12761e24 push 0x12790578 */
  push32((uint32_t)(0x12790578u));
  /* 12761e29 call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12761e2fu);
  /* 12761e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761e32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761e34 call 0x127639f0 */
  push32(0x12761e39u); f_127639f0();
  /* 12761e39 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761e3c jge 0x12761ea6 */
  if ((C.sf==C.of)) goto L_12761ea6;
  /* 12761e3e mov esi, esp */
  ESI = (ESP);
  /* 12761e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761e42 push 0x12790470 */
  push32((uint32_t)(0x12790470u));
  /* 12761e47 call dword ptr [0x12793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793454))), 0x12761e4du);
  /* 12761e4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761e50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761e52 call 0x127639f0 */
  push32(0x12761e57u); f_127639f0();
  /* 12761e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761e59 jle 0x12761ea6 */
  if ((C.zf||C.sf!=C.of)) goto L_12761ea6;
  /* 12761e5b mov esi, esp */
  ESI = (ESP);
  /* 12761e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12761e5f push 3 */
  push32((uint32_t)(0x3u));
  /* 12761e61 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12761e67u);
  /* 12761e67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761e6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761e6c call 0x127639f0 */
  push32(0x12761e71u); f_127639f0();
  /* 12761e71 mov esi, esp */
  ESI = (ESP);
  /* 12761e73 push 0x1278b37c */
  push32((uint32_t)(0x1278b37cu));
  /* 12761e78 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12761e7eu);
  /* 12761e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761e83 call 0x127639f0 */
  push32(0x12761e88u); f_127639f0();
  /* 12761e88 mov esi, esp */
  ESI = (ESP);
  /* 12761e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12761e8c push 0x12790470 */
  push32((uint32_t)(0x12790470u));
  /* 12761e91 push 0x12790578 */
  push32((uint32_t)(0x12790578u));
  /* 12761e96 call dword ptr [0x1279345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279345c))), 0x12761e9cu);
  /* 12761e9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761ea1 call 0x127639f0 */
  push32(0x12761ea6u); f_127639f0();
L_12761ea6:;
  /* 12761ea6 mov esi, esp */
  ESI = (ESP);
  /* 12761ea8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12761eaa call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12761eb0u);
  /* 12761eb0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761eb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761eb5 call 0x127639f0 */
  push32(0x12761ebau); f_127639f0();
  /* 12761eba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12761ebf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761ec1 je 0x12761fc7 */
  if (C.zf) goto L_12761fc7;
  /* 12761ec7 mov esi, esp */
  ESI = (ESP);
  /* 12761ec9 push 0x12790578 */
  push32((uint32_t)(0x12790578u));
  /* 12761ece call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12761ed4u);
  /* 12761ed4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761ed7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761ed9 call 0x127639f0 */
  push32(0x12761edeu); f_127639f0();
  /* 12761ede test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761ee0 jne 0x12761fc7 */
  if (!C.zf) goto L_12761fc7;
  /* 12761ee6 mov esi, esp */
  ESI = (ESP);
  /* 12761ee8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761eea push 4 */
  push32((uint32_t)(0x4u));
  /* 12761eec call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12761ef2u);
  /* 12761ef2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761ef5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761ef7 call 0x127639f0 */
  push32(0x12761efcu); f_127639f0();
  /* 12761efc mov esi, esp */
  ESI = (ESP);
  /* 12761efe push 0x1278b378 */
  push32((uint32_t)(0x1278b378u));
  /* 12761f03 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12761f09u);
  /* 12761f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761f0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761f0e call 0x127639f0 */
  push32(0x12761f13u); f_127639f0();
  /* 12761f13 mov esi, esp */
  ESI = (ESP);
  /* 12761f15 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12761f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12761f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12761f1e call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12761f24u);
  /* 12761f24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761f27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761f29 call 0x127639f0 */
  push32(0x12761f2eu); f_127639f0();
  /* 12761f2e mov esi, esp */
  ESI = (ESP);
  /* 12761f30 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12761f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 12761f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761f39 call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12761f3fu);
  /* 12761f3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761f42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761f44 call 0x127639f0 */
  push32(0x12761f49u); f_127639f0();
  /* 12761f49 mov esi, esp */
  ESI = (ESP);
  /* 12761f4b push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12761f50 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761f54 call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12761f5au);
  /* 12761f5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761f5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761f5f call 0x127639f0 */
  push32(0x12761f64u); f_127639f0();
  /* 12761f64 mov esi, esp */
  ESI = (ESP);
  /* 12761f66 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12761f6b push 4 */
  push32((uint32_t)(0x4u));
  /* 12761f6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12761f6f call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12761f75u);
  /* 12761f75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761f7a call 0x127639f0 */
  push32(0x12761f7fu); f_127639f0();
  /* 12761f7f mov esi, esp */
  ESI = (ESP);
  /* 12761f81 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12761f86 push 1 */
  push32((uint32_t)(0x1u));
  /* 12761f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761f8a call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12761f90u);
  /* 12761f90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761f93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761f95 call 0x127639f0 */
  push32(0x12761f9au); f_127639f0();
  /* 12761f9a mov esi, esp */
  ESI = (ESP);
  /* 12761f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12761f9e push 0x12790550 */
  push32((uint32_t)(0x12790550u));
  /* 12761fa3 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12761fa9u);
  /* 12761fa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761fac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761fae call 0x127639f0 */
  push32(0x12761fb3u); f_127639f0();
  /* 12761fb3 mov esi, esp */
  ESI = (ESP);
  /* 12761fb5 push 5 */
  push32((uint32_t)(0x5u));
  /* 12761fb7 call dword ptr [0x12793464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793464))), 0x12761fbdu);
  /* 12761fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761fc0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761fc2 call 0x127639f0 */
  push32(0x12761fc7u); f_127639f0();
L_12761fc7:;
  /* 12761fc7 mov esi, esp */
  ESI = (ESP);
  /* 12761fc9 push 6 */
  push32((uint32_t)(0x6u));
  /* 12761fcb call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12761fd1u);
  /* 12761fd1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761fd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761fd6 call 0x127639f0 */
  push32(0x12761fdbu); f_127639f0();
  /* 12761fdb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12761fe0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761fe2 je 0x1276205d */
  if (C.zf) goto L_1276205d;
  /* 12761fe4 mov esi, esp */
  ESI = (ESP);
  /* 12761fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12761fe8 push 0x12790460 */
  push32((uint32_t)(0x12790460u));
  /* 12761fed call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12761ff3u);
  /* 12761ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12761ff6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12761ff8 call 0x127639f0 */
  push32(0x12761ffdu); f_127639f0();
  /* 12761ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12761fff jle 0x1276205d */
  if ((C.zf||C.sf!=C.of)) goto L_1276205d;
  /* 12762001 mov esi, esp */
  ESI = (ESP);
  /* 12762003 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762005 push 6 */
  push32((uint32_t)(0x6u));
  /* 12762007 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x1276200du);
  /* 1276200d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762010 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762012 call 0x127639f0 */
  push32(0x12762017u); f_127639f0();
  /* 12762017 mov esi, esp */
  ESI = (ESP);
  /* 12762019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276201b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1276201d call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762023u);
  /* 12762023 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762026 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762028 call 0x127639f0 */
  push32(0x1276202du); f_127639f0();
  /* 1276202d mov esi, esp */
  ESI = (ESP);
  /* 1276202f push 0x1278b374 */
  push32((uint32_t)(0x1278b374u));
  /* 12762034 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x1276203au);
  /* 1276203a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276203d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276203f call 0x127639f0 */
  push32(0x12762044u); f_127639f0();
  /* 12762044 mov esi, esp */
  ESI = (ESP);
  /* 12762046 push 0x780 */
  push32((uint32_t)(0x780u));
  /* 1276204b push 1 */
  push32((uint32_t)(0x1u));
  /* 1276204d call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x12762053u);
  /* 12762053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762056 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762058 call 0x127639f0 */
  push32(0x1276205du); f_127639f0();
L_1276205d:;
  /* 1276205d mov esi, esp */
  ESI = (ESP);
  /* 1276205f push 1 */
  push32((uint32_t)(0x1u));
  /* 12762061 call dword ptr [0x12793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793470))), 0x12762067u);
  /* 12762067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276206a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276206c call 0x127639f0 */
  push32(0x12762071u); f_127639f0();
  /* 12762071 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762078 je 0x127620c1 */
  if (C.zf) goto L_127620c1;
  /* 1276207a mov esi, esp */
  ESI = (ESP);
  /* 1276207c push 0x1278b370 */
  push32((uint32_t)(0x1278b370u));
  /* 12762081 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762087u);
  /* 12762087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276208a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276208c call 0x127639f0 */
  push32(0x12762091u); f_127639f0();
  /* 12762091 mov esi, esp */
  ESI = (ESP);
  /* 12762093 push 0x1278b368 */
  push32((uint32_t)(0x1278b368u));
  /* 12762098 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x1276209eu);
  /* 1276209e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127620a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127620a3 call 0x127639f0 */
  push32(0x127620a8u); f_127639f0();
  /* 127620a8 mov esi, esp */
  ESI = (ESP);
  /* 127620aa push 0xbb80 */
  push32((uint32_t)(0xbb80u));
  /* 127620af push 2 */
  push32((uint32_t)(0x2u));
  /* 127620b1 call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x127620b7u);
  /* 127620b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127620ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127620bc call 0x127639f0 */
  push32(0x127620c1u); f_127639f0();
L_127620c1:;
  /* 127620c1 mov esi, esp */
  ESI = (ESP);
  /* 127620c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 127620c5 call dword ptr [0x12793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793470))), 0x127620cbu);
  /* 127620cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127620ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127620d0 call 0x127639f0 */
  push32(0x127620d5u); f_127639f0();
  /* 127620d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127620da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127620dc je 0x1276224c */
  if (C.zf) goto L_1276224c;
  /* 127620e2 mov esi, esp */
  ESI = (ESP);
  /* 127620e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127620e6 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 127620e8 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x127620eeu);
  /* 127620ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127620f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127620f3 call 0x127639f0 */
  push32(0x127620f8u); f_127639f0();
  /* 127620f8 mov esi, esp */
  ESI = (ESP);
  /* 127620fa push 0x1278b364 */
  push32((uint32_t)(0x1278b364u));
  /* 127620ff call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762105u);
  /* 12762105 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276210a call 0x127639f0 */
  push32(0x1276210fu); f_127639f0();
  /* 1276210f mov esi, esp */
  ESI = (ESP);
  /* 12762111 push 2 */
  push32((uint32_t)(0x2u));
  /* 12762113 push 2 */
  push32((uint32_t)(0x2u));
  /* 12762115 push 0x12790488 */
  push32((uint32_t)(0x12790488u));
  /* 1276211a call dword ptr [0x12793434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793434))), 0x12762120u);
  /* 12762120 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762123 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762125 call 0x127639f0 */
  push32(0x1276212au); f_127639f0();
  /* 1276212a mov esi, esp */
  ESI = (ESP);
  /* 1276212c push 0x12790488 */
  push32((uint32_t)(0x12790488u));
  /* 12762131 call dword ptr [0x12793438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793438))), 0x12762137u);
  /* 12762137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276213a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276213c call 0x127639f0 */
  push32(0x12762141u); f_127639f0();
  /* 12762141 mov esi, esp */
  ESI = (ESP);
  /* 12762143 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762145 push 0x12790468 */
  push32((uint32_t)(0x12790468u));
  /* 1276214a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276214c push 0x12790500 */
  push32((uint32_t)(0x12790500u));
  /* 12762151 push 0x12790450 */
  push32((uint32_t)(0x12790450u));
  /* 12762156 push 0x127905a8 */
  push32((uint32_t)(0x127905a8u));
  /* 1276215b call dword ptr [0x12793474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793474))), 0x12762161u);
  /* 12762161 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762164 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762166 call 0x127639f0 */
  push32(0x1276216bu); f_127639f0();
  /* 1276216b mov esi, esp */
  ESI = (ESP);
  /* 1276216d push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1276216f push 0x12790488 */
  push32((uint32_t)(0x12790488u));
  /* 12762174 push 1 */
  push32((uint32_t)(0x1u));
  /* 12762176 push 0x12790508 */
  push32((uint32_t)(0x12790508u));
  /* 1276217b push 0x12790458 */
  push32((uint32_t)(0x12790458u));
  /* 12762180 push 0x127905c0 */
  push32((uint32_t)(0x127905c0u));
  /* 12762185 call dword ptr [0x12793474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793474))), 0x1276218bu);
  /* 1276218b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276218e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762190 call 0x127639f0 */
  push32(0x12762195u); f_127639f0();
  /* 12762195 mov esi, esp */
  ESI = (ESP);
  /* 12762197 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762199 push 0x127905a8 */
  push32((uint32_t)(0x127905a8u));
  /* 1276219e call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127621a4u);
  /* 127621a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127621a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127621a9 call 0x127639f0 */
  push32(0x127621aeu); f_127639f0();
  /* 127621ae mov esi, esp */
  ESI = (ESP);
  /* 127621b0 push 0x127905a0 */
  push32((uint32_t)(0x127905a0u));
  /* 127621b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 127621b7 call dword ptr [0x12793478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793478))), 0x127621bdu);
  /* 127621bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127621c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127621c2 call 0x127639f0 */
  push32(0x127621c7u); f_127639f0();
  /* 127621c7 mov esi, esp */
  ESI = (ESP);
  /* 127621c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127621cb push 0x40 */
  push32((uint32_t)(0x40u));
  /* 127621cd push 0x12790498 */
  push32((uint32_t)(0x12790498u));
  /* 127621d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 127621d4 call dword ptr [0x1279347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279347c))), 0x127621dau);
  /* 127621da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127621dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127621df call 0x127639f0 */
  push32(0x127621e4u); f_127639f0();
  /* 127621e4 mov esi, esp */
  ESI = (ESP);
  /* 127621e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127621e8 push 0x127905c0 */
  push32((uint32_t)(0x127905c0u));
  /* 127621ed call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127621f3u);
  /* 127621f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127621f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127621f8 call 0x127639f0 */
  push32(0x127621fdu); f_127639f0();
  /* 127621fd mov esi, esp */
  ESI = (ESP);
  /* 127621ff push 0x127903f0 */
  push32((uint32_t)(0x127903f0u));
  /* 12762204 push 1 */
  push32((uint32_t)(0x1u));
  /* 12762206 call dword ptr [0x12793478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793478))), 0x1276220cu);
  /* 1276220c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276220f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762211 call 0x127639f0 */
  push32(0x12762216u); f_127639f0();
  /* 12762216 mov esi, esp */
  ESI = (ESP);
  /* 12762218 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276221a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1276221c push 0x12790498 */
  push32((uint32_t)(0x12790498u));
  /* 12762221 push 1 */
  push32((uint32_t)(0x1u));
  /* 12762223 call dword ptr [0x1279347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279347c))), 0x12762229u);
  /* 12762229 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276222c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276222e call 0x127639f0 */
  push32(0x12762233u); f_127639f0();
  /* 12762233 mov esi, esp */
  ESI = (ESP);
  /* 12762235 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 1276223a push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1276223c call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x12762242u);
  /* 12762242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762247 call 0x127639f0 */
  push32(0x1276224cu); f_127639f0();
L_1276224c:;
  /* 1276224c mov esi, esp */
  ESI = (ESP);
  /* 1276224e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12762250 call dword ptr [0x12793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793470))), 0x12762256u);
  /* 12762256 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762259 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276225b call 0x127639f0 */
  push32(0x12762260u); f_127639f0();
  /* 12762260 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762267 je 0x1276227d */
  if (C.zf) goto L_1276227d;
  /* 12762269 mov esi, esp */
  ESI = (ESP);
  /* 1276226b push 2 */
  push32((uint32_t)(0x2u));
  /* 1276226d call dword ptr [0x12793450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793450))), 0x12762273u);
  /* 12762273 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762276 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762278 call 0x127639f0 */
  push32(0x1276227du); f_127639f0();
L_1276227d:;
  /* 1276227d mov esi, esp */
  ESI = (ESP);
  /* 1276227f push 7 */
  push32((uint32_t)(0x7u));
  /* 12762281 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762287u);
  /* 12762287 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276228a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276228c call 0x127639f0 */
  push32(0x12762291u); f_127639f0();
  /* 12762291 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762296 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762298 je 0x12762321 */
  if (C.zf) goto L_12762321;
  /* 1276229e mov esi, esp */
  ESI = (ESP);
  /* 127622a0 push 0x127905a0 */
  push32((uint32_t)(0x127905a0u));
  /* 127622a5 push 0x12790498 */
  push32((uint32_t)(0x12790498u));
  /* 127622aa call dword ptr [0x1279344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279344c))), 0x127622b0u);
  /* 127622b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127622b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127622b5 call 0x127639f0 */
  push32(0x127622bau); f_127639f0();
  /* 127622ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127622bc jle 0x12762321 */
  if ((C.zf||C.sf!=C.of)) goto L_12762321;
  /* 127622be mov esi, esp */
  ESI = (ESP);
  /* 127622c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127622c2 push 7 */
  push32((uint32_t)(0x7u));
  /* 127622c4 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x127622cau);
  /* 127622ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127622cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127622cf call 0x127639f0 */
  push32(0x127622d4u); f_127639f0();
  /* 127622d4 mov esi, esp */
  ESI = (ESP);
  /* 127622d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127622d8 push 0x127905a0 */
  push32((uint32_t)(0x127905a0u));
  /* 127622dd call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127622e3u);
  /* 127622e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127622e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127622e8 call 0x127639f0 */
  push32(0x127622edu); f_127639f0();
  /* 127622ed mov esi, esp */
  ESI = (ESP);
  /* 127622ef push 1 */
  push32((uint32_t)(0x1u));
  /* 127622f1 push 0x127903f0 */
  push32((uint32_t)(0x127903f0u));
  /* 127622f6 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127622fcu);
  /* 127622fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127622ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762301 call 0x127639f0 */
  push32(0x12762306u); f_127639f0();
  /* 12762306 mov esi, esp */
  ESI = (ESP);
  /* 12762308 push 1 */
  push32((uint32_t)(0x1u));
  /* 1276230a push 0x12790490 */
  push32((uint32_t)(0x12790490u));
  /* 1276230f push 1 */
  push32((uint32_t)(0x1u));
  /* 12762311 call dword ptr [0x12793444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793444))), 0x12762317u);
  /* 12762317 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276231a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276231c call 0x127639f0 */
  push32(0x12762321u); f_127639f0();
L_12762321:;
  /* 12762321 mov esi, esp */
  ESI = (ESP);
  /* 12762323 push 8 */
  push32((uint32_t)(0x8u));
  /* 12762325 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x1276232bu);
  /* 1276232b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276232e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762330 call 0x127639f0 */
  push32(0x12762335u); f_127639f0();
  /* 12762335 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276233a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276233c je 0x127623d4 */
  if (C.zf) goto L_127623d4;
  /* 12762342 mov esi, esp */
  ESI = (ESP);
  /* 12762344 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762346 push 0x12790480 */
  push32((uint32_t)(0x12790480u));
  /* 1276234b call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762351u);
  /* 12762351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762356 call 0x127639f0 */
  push32(0x1276235bu); f_127639f0();
  /* 1276235b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276235d jle 0x127623d4 */
  if ((C.zf||C.sf!=C.of)) goto L_127623d4;
  /* 1276235f mov esi, esp */
  ESI = (ESP);
  /* 12762361 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762363 push 8 */
  push32((uint32_t)(0x8u));
  /* 12762365 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x1276236bu);
  /* 1276236b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276236e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762370 call 0x127639f0 */
  push32(0x12762375u); f_127639f0();
  /* 12762375 mov esi, esp */
  ESI = (ESP);
  /* 12762377 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762379 push 0x127905c8 */
  push32((uint32_t)(0x127905c8u));
  /* 1276237e call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12762384u);
  /* 12762384 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762389 call 0x127639f0 */
  push32(0x1276238eu); f_127639f0();
  /* 1276238e mov esi, esp */
  ESI = (ESP);
  /* 12762390 push 1 */
  push32((uint32_t)(0x1u));
  /* 12762392 push 0x12790598 */
  push32((uint32_t)(0x12790598u));
  /* 12762397 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x1276239du);
  /* 1276239d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127623a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127623a2 call 0x127639f0 */
  push32(0x127623a7u); f_127639f0();
  /* 127623a7 mov esi, esp */
  ESI = (ESP);
  /* 127623a9 push 5 */
  push32((uint32_t)(0x5u));
  /* 127623ab call dword ptr [0x12793480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793480))), 0x127623b1u);
  /* 127623b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127623b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127623b6 call 0x127639f0 */
  push32(0x127623bbu); f_127639f0();
  /* 127623bb mov esi, esp */
  ESI = (ESP);
  /* 127623bd push 0x17c */
  push32((uint32_t)(0x17cu));
  /* 127623c2 push 3 */
  push32((uint32_t)(0x3u));
  /* 127623c4 call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x127623cau);
  /* 127623ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127623cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127623cf call 0x127639f0 */
  push32(0x127623d4u); f_127639f0();
L_127623d4:;
  /* 127623d4 mov esi, esp */
  ESI = (ESP);
  /* 127623d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 127623d8 call dword ptr [0x12793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793470))), 0x127623deu);
  /* 127623de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127623e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127623e3 call 0x127639f0 */
  push32(0x127623e8u); f_127639f0();
  /* 127623e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127623ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127623ef je 0x1276243d */
  if (C.zf) goto L_1276243d;
  /* 127623f1 mov esi, esp */
  ESI = (ESP);
  /* 127623f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127623f5 push 0x12790598 */
  push32((uint32_t)(0x12790598u));
  /* 127623fa call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12762400u);
  /* 12762400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762403 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762405 call 0x127639f0 */
  push32(0x1276240au); f_127639f0();
  /* 1276240a mov esi, esp */
  ESI = (ESP);
  /* 1276240c push 0 */
  push32((uint32_t)(0x0u));
  /* 1276240e push 0 */
  push32((uint32_t)(0x0u));
  /* 12762410 push 0x127904f0 */
  push32((uint32_t)(0x127904f0u));
  /* 12762415 push 5 */
  push32((uint32_t)(0x5u));
  /* 12762417 call dword ptr [0x12793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793448))), 0x1276241du);
  /* 1276241d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762420 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762422 call 0x127639f0 */
  push32(0x12762427u); f_127639f0();
  /* 12762427 mov esi, esp */
  ESI = (ESP);
  /* 12762429 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1276242b push 5 */
  push32((uint32_t)(0x5u));
  /* 1276242d call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x12762433u);
  /* 12762433 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762438 call 0x127639f0 */
  push32(0x1276243du); f_127639f0();
L_1276243d:;
  /* 1276243d mov esi, esp */
  ESI = (ESP);
  /* 1276243f push 9 */
  push32((uint32_t)(0x9u));
  /* 12762441 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762447u);
  /* 12762447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276244a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276244c call 0x127639f0 */
  push32(0x12762451u); f_127639f0();
  /* 12762451 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762458 je 0x12762534 */
  if (C.zf) goto L_12762534;
  /* 1276245e mov esi, esp */
  ESI = (ESP);
  /* 12762460 push 0x12790598 */
  push32((uint32_t)(0x12790598u));
  /* 12762465 push 0x127904f0 */
  push32((uint32_t)(0x127904f0u));
  /* 1276246a call dword ptr [0x1279344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279344c))), 0x12762470u);
  /* 12762470 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762473 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762475 call 0x127639f0 */
  push32(0x1276247au); f_127639f0();
  /* 1276247a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276247c jle 0x12762534 */
  if ((C.zf||C.sf!=C.of)) goto L_12762534;
  /* 12762482 mov esi, esp */
  ESI = (ESP);
  /* 12762484 push 5 */
  push32((uint32_t)(0x5u));
  /* 12762486 call dword ptr [0x12793484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793484))), 0x1276248cu);
  /* 1276248c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276248f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762491 call 0x127639f0 */
  push32(0x12762496u); f_127639f0();
  /* 12762496 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276249b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276249d je 0x12762534 */
  if (C.zf) goto L_12762534;
  /* 127624a3 mov esi, esp */
  ESI = (ESP);
  /* 127624a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127624a7 push 0x12790598 */
  push32((uint32_t)(0x12790598u));
  /* 127624ac call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127624b2u);
  /* 127624b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127624b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127624b7 call 0x127639f0 */
  push32(0x127624bcu); f_127639f0();
  /* 127624bc mov esi, esp */
  ESI = (ESP);
  /* 127624be push 5 */
  push32((uint32_t)(0x5u));
  /* 127624c0 call dword ptr [0x12793488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793488))), 0x127624c6u);
  /* 127624c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127624c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127624cb call 0x127639f0 */
  push32(0x127624d0u); f_127639f0();
  /* 127624d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127624d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127624d7 je 0x1276251e */
  if (C.zf) goto L_1276251e;
  /* 127624d9 mov esi, esp */
  ESI = (ESP);
  /* 127624db push 0 */
  push32((uint32_t)(0x0u));
  /* 127624dd push 9 */
  push32((uint32_t)(0x9u));
  /* 127624df call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x127624e5u);
  /* 127624e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127624e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127624ea call 0x127639f0 */
  push32(0x127624efu); f_127639f0();
  /* 127624ef mov esi, esp */
  ESI = (ESP);
  /* 127624f1 push 5 */
  push32((uint32_t)(0x5u));
  /* 127624f3 call dword ptr [0x1279348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279348c))), 0x127624f9u);
  /* 127624f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127624fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127624fe call 0x127639f0 */
  push32(0x12762503u); f_127639f0();
  /* 12762503 mov esi, esp */
  ESI = (ESP);
  /* 12762505 push 0x4e2 */
  push32((uint32_t)(0x4e2u));
  /* 1276250a push 4 */
  push32((uint32_t)(0x4u));
  /* 1276250c call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x12762512u);
  /* 12762512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762515 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762517 call 0x127639f0 */
  push32(0x1276251cu); f_127639f0();
  /* 1276251c jmp 0x12762534 */
  goto L_12762534;
L_1276251e:;
  /* 1276251e mov esi, esp */
  ESI = (ESP);
  /* 12762520 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12762522 push 5 */
  push32((uint32_t)(0x5u));
  /* 12762524 call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x1276252au);
  /* 1276252a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276252d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276252f call 0x127639f0 */
  push32(0x12762534u); f_127639f0();
L_12762534:;
  /* 12762534 mov esi, esp */
  ESI = (ESP);
  /* 12762536 push 4 */
  push32((uint32_t)(0x4u));
  /* 12762538 call dword ptr [0x12793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793470))), 0x1276253eu);
  /* 1276253e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762541 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762543 call 0x127639f0 */
  push32(0x12762548u); f_127639f0();
  /* 12762548 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276254d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276254f je 0x12762587 */
  if (C.zf) goto L_12762587;
  /* 12762551 mov esi, esp */
  ESI = (ESP);
  /* 12762553 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762555 push 0x127905c8 */
  push32((uint32_t)(0x127905c8u));
  /* 1276255a call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12762560u);
  /* 12762560 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762563 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762565 call 0x127639f0 */
  push32(0x1276256au); f_127639f0();
  /* 1276256a mov esi, esp */
  ESI = (ESP);
  /* 1276256c push 0 */
  push32((uint32_t)(0x0u));
  /* 1276256e push 0 */
  push32((uint32_t)(0x0u));
  /* 12762570 push 0x12790470 */
  push32((uint32_t)(0x12790470u));
  /* 12762575 push 5 */
  push32((uint32_t)(0x5u));
  /* 12762577 call dword ptr [0x1279347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279347c))), 0x1276257du);
  /* 1276257d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762580 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762582 call 0x127639f0 */
  push32(0x12762587u); f_127639f0();
L_12762587:;
  /* 12762587 mov esi, esp */
  ESI = (ESP);
  /* 12762589 push 0xa */
  push32((uint32_t)(0xau));
  /* 1276258b call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762591u);
  /* 12762591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762596 call 0x127639f0 */
  push32(0x1276259bu); f_127639f0();
  /* 1276259b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127625a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127625a2 je 0x1276263a */
  if (C.zf) goto L_1276263a;
  /* 127625a8 mov esi, esp */
  ESI = (ESP);
  /* 127625aa push 0 */
  push32((uint32_t)(0x0u));
  /* 127625ac push 0x127903f8 */
  push32((uint32_t)(0x127903f8u));
  /* 127625b1 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x127625b7u);
  /* 127625b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127625ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127625bc call 0x127639f0 */
  push32(0x127625c1u); f_127639f0();
  /* 127625c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127625c3 jle 0x1276263a */
  if ((C.zf||C.sf!=C.of)) goto L_1276263a;
  /* 127625c5 mov esi, esp */
  ESI = (ESP);
  /* 127625c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127625c9 push 0xa */
  push32((uint32_t)(0xau));
  /* 127625cb call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x127625d1u);
  /* 127625d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127625d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127625d6 call 0x127639f0 */
  push32(0x127625dbu); f_127639f0();
  /* 127625db mov esi, esp */
  ESI = (ESP);
  /* 127625dd push 0 */
  push32((uint32_t)(0x0u));
  /* 127625df push 0x12790520 */
  push32((uint32_t)(0x12790520u));
  /* 127625e4 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127625eau);
  /* 127625ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127625ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127625ef call 0x127639f0 */
  push32(0x127625f4u); f_127639f0();
  /* 127625f4 mov esi, esp */
  ESI = (ESP);
  /* 127625f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 127625f8 push 0x127905b0 */
  push32((uint32_t)(0x127905b0u));
  /* 127625fd call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12762603u);
  /* 12762603 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762608 call 0x127639f0 */
  push32(0x1276260du); f_127639f0();
  /* 1276260d mov esi, esp */
  ESI = (ESP);
  /* 1276260f push 1 */
  push32((uint32_t)(0x1u));
  /* 12762611 call dword ptr [0x12793480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793480))), 0x12762617u);
  /* 12762617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276261a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276261c call 0x127639f0 */
  push32(0x12762621u); f_127639f0();
  /* 12762621 mov esi, esp */
  ESI = (ESP);
  /* 12762623 push 0x2f8 */
  push32((uint32_t)(0x2f8u));
  /* 12762628 push 6 */
  push32((uint32_t)(0x6u));
  /* 1276262a call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x12762630u);
  /* 12762630 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762633 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762635 call 0x127639f0 */
  push32(0x1276263au); f_127639f0();
L_1276263a:;
  /* 1276263a mov esi, esp */
  ESI = (ESP);
  /* 1276263c push 6 */
  push32((uint32_t)(0x6u));
  /* 1276263e call dword ptr [0x12793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793470))), 0x12762644u);
  /* 12762644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762649 call 0x127639f0 */
  push32(0x1276264eu); f_127639f0();
  /* 1276264e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762653 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762655 je 0x127626a6 */
  if (C.zf) goto L_127626a6;
  /* 12762657 mov esi, esp */
  ESI = (ESP);
  /* 12762659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276265b push 0x127905b0 */
  push32((uint32_t)(0x127905b0u));
  /* 12762660 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12762666u);
  /* 12762666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276266b call 0x127639f0 */
  push32(0x12762670u); f_127639f0();
  /* 12762670 mov esi, esp */
  ESI = (ESP);
  /* 12762672 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762674 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 12762679 push 0x127904e8 */
  push32((uint32_t)(0x127904e8u));
  /* 1276267e push 1 */
  push32((uint32_t)(0x1u));
  /* 12762680 call dword ptr [0x12793448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793448))), 0x12762686u);
  /* 12762686 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276268b call 0x127639f0 */
  push32(0x12762690u); f_127639f0();
  /* 12762690 mov esi, esp */
  ESI = (ESP);
  /* 12762692 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12762694 push 7 */
  push32((uint32_t)(0x7u));
  /* 12762696 call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x1276269cu);
  /* 1276269c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276269f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127626a1 call 0x127639f0 */
  push32(0x127626a6u); f_127639f0();
L_127626a6:;
  /* 127626a6 mov esi, esp */
  ESI = (ESP);
  /* 127626a8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 127626aa call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x127626b0u);
  /* 127626b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127626b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127626b5 call 0x127639f0 */
  push32(0x127626bau); f_127639f0();
  /* 127626ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127626bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127626c1 je 0x1276279d */
  if (C.zf) goto L_1276279d;
  /* 127626c7 mov esi, esp */
  ESI = (ESP);
  /* 127626c9 push 0x127905b0 */
  push32((uint32_t)(0x127905b0u));
  /* 127626ce push 0x127904e8 */
  push32((uint32_t)(0x127904e8u));
  /* 127626d3 call dword ptr [0x1279344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279344c))), 0x127626d9u);
  /* 127626d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127626dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127626de call 0x127639f0 */
  push32(0x127626e3u); f_127639f0();
  /* 127626e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127626e5 jle 0x1276279d */
  if ((C.zf||C.sf!=C.of)) goto L_1276279d;
  /* 127626eb mov esi, esp */
  ESI = (ESP);
  /* 127626ed push 7 */
  push32((uint32_t)(0x7u));
  /* 127626ef call dword ptr [0x12793484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793484))), 0x127626f5u);
  /* 127626f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127626f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127626fa call 0x127639f0 */
  push32(0x127626ffu); f_127639f0();
  /* 127626ff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762704 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762706 je 0x1276279d */
  if (C.zf) goto L_1276279d;
  /* 1276270c mov esi, esp */
  ESI = (ESP);
  /* 1276270e push 0 */
  push32((uint32_t)(0x0u));
  /* 12762710 push 0x127905b0 */
  push32((uint32_t)(0x127905b0u));
  /* 12762715 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x1276271bu);
  /* 1276271b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276271e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762720 call 0x127639f0 */
  push32(0x12762725u); f_127639f0();
  /* 12762725 mov esi, esp */
  ESI = (ESP);
  /* 12762727 push 1 */
  push32((uint32_t)(0x1u));
  /* 12762729 call dword ptr [0x12793488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793488))), 0x1276272fu);
  /* 1276272f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762732 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762734 call 0x127639f0 */
  push32(0x12762739u); f_127639f0();
  /* 12762739 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276273e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762740 je 0x12762787 */
  if (C.zf) goto L_12762787;
  /* 12762742 mov esi, esp */
  ESI = (ESP);
  /* 12762744 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762746 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12762748 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x1276274eu);
  /* 1276274e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762751 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762753 call 0x127639f0 */
  push32(0x12762758u); f_127639f0();
  /* 12762758 mov esi, esp */
  ESI = (ESP);
  /* 1276275a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276275c call dword ptr [0x1279348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279348c))), 0x12762762u);
  /* 12762762 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762765 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762767 call 0x127639f0 */
  push32(0x1276276cu); f_127639f0();
  /* 1276276c mov esi, esp */
  ESI = (ESP);
  /* 1276276e push 0x4e2 */
  push32((uint32_t)(0x4e2u));
  /* 12762773 push 8 */
  push32((uint32_t)(0x8u));
  /* 12762775 call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x1276277bu);
  /* 1276277b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276277e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762780 call 0x127639f0 */
  push32(0x12762785u); f_127639f0();
  /* 12762785 jmp 0x1276279d */
  goto L_1276279d;
L_12762787:;
  /* 12762787 mov esi, esp */
  ESI = (ESP);
  /* 12762789 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1276278b push 7 */
  push32((uint32_t)(0x7u));
  /* 1276278d call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x12762793u);
  /* 12762793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762796 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762798 call 0x127639f0 */
  push32(0x1276279du); f_127639f0();
L_1276279d:;
  /* 1276279d mov esi, esp */
  ESI = (ESP);
  /* 1276279f push 8 */
  push32((uint32_t)(0x8u));
  /* 127627a1 call dword ptr [0x12793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793470))), 0x127627a7u);
  /* 127627a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127627aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127627ac call 0x127639f0 */
  push32(0x127627b1u); f_127639f0();
  /* 127627b1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127627b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127627b8 je 0x127627f0 */
  if (C.zf) goto L_127627f0;
  /* 127627ba mov esi, esp */
  ESI = (ESP);
  /* 127627bc push 0 */
  push32((uint32_t)(0x0u));
  /* 127627be push 0x12790520 */
  push32((uint32_t)(0x12790520u));
  /* 127627c3 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127627c9u);
  /* 127627c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127627cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127627ce call 0x127639f0 */
  push32(0x127627d3u); f_127639f0();
  /* 127627d3 mov esi, esp */
  ESI = (ESP);
  /* 127627d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127627d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127627d9 push 0x12790470 */
  push32((uint32_t)(0x12790470u));
  /* 127627de push 1 */
  push32((uint32_t)(0x1u));
  /* 127627e0 call dword ptr [0x1279347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279347c))), 0x127627e6u);
  /* 127627e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127627e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127627eb call 0x127639f0 */
  push32(0x127627f0u); f_127639f0();
L_127627f0:;
  /* 127627f0 mov esi, esp */
  ESI = (ESP);
  /* 127627f2 push 0xc */
  push32((uint32_t)(0xcu));
  /* 127627f4 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x127627fau);
  /* 127627fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127627fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127627ff call 0x127639f0 */
  push32(0x12762804u); f_127639f0();
  /* 12762804 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276280b je 0x127628f2 */
  if (C.zf) goto L_127628f2;
  /* 12762811 mov esi, esp */
  ESI = (ESP);
  /* 12762813 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762815 push 0x127904b0 */
  push32((uint32_t)(0x127904b0u));
  /* 1276281a call dword ptr [0x12793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793454))), 0x12762820u);
  /* 12762820 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762825 call 0x127639f0 */
  push32(0x1276282au); f_127639f0();
  /* 1276282a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276282c jle 0x127628f2 */
  if ((C.zf||C.sf!=C.of)) goto L_127628f2;
  /* 12762832 mov esi, esp */
  ESI = (ESP);
  /* 12762834 push 5 */
  push32((uint32_t)(0x5u));
  /* 12762836 push 0x127904b0 */
  push32((uint32_t)(0x127904b0u));
  /* 1276283b call dword ptr [0x12793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793454))), 0x12762841u);
  /* 12762841 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762844 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762846 call 0x127639f0 */
  push32(0x1276284bu); f_127639f0();
  /* 1276284b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276284d jne 0x127628f2 */
  if (!C.zf) goto L_127628f2;
  /* 12762853 mov esi, esp */
  ESI = (ESP);
  /* 12762855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762857 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12762859 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x1276285fu);
  /* 1276285f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762864 call 0x127639f0 */
  push32(0x12762869u); f_127639f0();
  /* 12762869 mov esi, esp */
  ESI = (ESP);
  /* 1276286b push 0x1278b360 */
  push32((uint32_t)(0x1278b360u));
  /* 12762870 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762876u);
  /* 12762876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762879 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276287b call 0x127639f0 */
  push32(0x12762880u); f_127639f0();
  /* 12762880 mov esi, esp */
  ESI = (ESP);
  /* 12762882 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12762887 push 1 */
  push32((uint32_t)(0x1u));
  /* 12762889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276288b call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12762891u);
  /* 12762891 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762896 call 0x127639f0 */
  push32(0x1276289bu); f_127639f0();
  /* 1276289b mov esi, esp */
  ESI = (ESP);
  /* 1276289d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276289f push 0x12790438 */
  push32((uint32_t)(0x12790438u));
  /* 127628a4 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127628aau);
  /* 127628aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127628ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127628af call 0x127639f0 */
  push32(0x127628b4u); f_127639f0();
  /* 127628b4 mov esi, esp */
  ESI = (ESP);
  /* 127628b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127628b8 call dword ptr [0x12793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793490))), 0x127628beu);
  /* 127628be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127628c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127628c3 call 0x127639f0 */
  push32(0x127628c8u); f_127639f0();
  /* 127628c8 mov esi, esp */
  ESI = (ESP);
  /* 127628ca push 0 */
  push32((uint32_t)(0x0u));
  /* 127628cc push 0x127904b0 */
  push32((uint32_t)(0x127904b0u));
  /* 127628d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127628d3 push 0x127903e0 */
  push32((uint32_t)(0x127903e0u));
  /* 127628d8 push 0x12790450 */
  push32((uint32_t)(0x12790450u));
  /* 127628dd push 0x12790430 */
  push32((uint32_t)(0x12790430u));
  /* 127628e2 call dword ptr [0x12793474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793474))), 0x127628e8u);
  /* 127628e8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127628eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127628ed call 0x127639f0 */
  push32(0x127628f2u); f_127639f0();
L_127628f2:;
  /* 127628f2 mov esi, esp */
  ESI = (ESP);
  /* 127628f4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 127628f6 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x127628fcu);
  /* 127628fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127628ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762901 call 0x127639f0 */
  push32(0x12762906u); f_127639f0();
  /* 12762906 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276290b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276290d je 0x127629f2 */
  if (C.zf) goto L_127629f2;
  /* 12762913 mov esi, esp */
  ESI = (ESP);
  /* 12762915 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762917 push 0x127904b8 */
  push32((uint32_t)(0x127904b8u));
  /* 1276291c call dword ptr [0x12793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793454))), 0x12762922u);
  /* 12762922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762927 call 0x127639f0 */
  push32(0x1276292cu); f_127639f0();
  /* 1276292c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276292e jle 0x127629f2 */
  if ((C.zf||C.sf!=C.of)) goto L_127629f2;
  /* 12762934 mov esi, esp */
  ESI = (ESP);
  /* 12762936 push 0x12790428 */
  push32((uint32_t)(0x12790428u));
  /* 1276293b call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12762941u);
  /* 12762941 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762944 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762946 call 0x127639f0 */
  push32(0x1276294bu); f_127639f0();
  /* 1276294b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276294d jne 0x127629f2 */
  if (!C.zf) goto L_127629f2;
  /* 12762953 mov esi, esp */
  ESI = (ESP);
  /* 12762955 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762957 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12762959 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x1276295fu);
  /* 1276295f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762962 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762964 call 0x127639f0 */
  push32(0x12762969u); f_127639f0();
  /* 12762969 mov esi, esp */
  ESI = (ESP);
  /* 1276296b push 0x1278b35c */
  push32((uint32_t)(0x1278b35cu));
  /* 12762970 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762976u);
  /* 12762976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762979 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276297b call 0x127639f0 */
  push32(0x12762980u); f_127639f0();
  /* 12762980 mov esi, esp */
  ESI = (ESP);
  /* 12762982 push 0x2af8 */
  push32((uint32_t)(0x2af8u));
  /* 12762987 push 5 */
  push32((uint32_t)(0x5u));
  /* 12762989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276298b call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12762991u);
  /* 12762991 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762994 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762996 call 0x127639f0 */
  push32(0x1276299bu); f_127639f0();
  /* 1276299b mov esi, esp */
  ESI = (ESP);
  /* 1276299d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276299f push 0x12790518 */
  push32((uint32_t)(0x12790518u));
  /* 127629a4 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127629aau);
  /* 127629aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127629ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127629af call 0x127639f0 */
  push32(0x127629b4u); f_127639f0();
  /* 127629b4 mov esi, esp */
  ESI = (ESP);
  /* 127629b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 127629b8 call dword ptr [0x12793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793490))), 0x127629beu);
  /* 127629be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127629c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127629c3 call 0x127639f0 */
  push32(0x127629c8u); f_127639f0();
  /* 127629c8 mov esi, esp */
  ESI = (ESP);
  /* 127629ca push 0 */
  push32((uint32_t)(0x0u));
  /* 127629cc push 0x127904b8 */
  push32((uint32_t)(0x127904b8u));
  /* 127629d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 127629d3 push 0x127903e0 */
  push32((uint32_t)(0x127903e0u));
  /* 127629d8 push 0x12790450 */
  push32((uint32_t)(0x12790450u));
  /* 127629dd push 0x12790430 */
  push32((uint32_t)(0x12790430u));
  /* 127629e2 call dword ptr [0x12793474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793474))), 0x127629e8u);
  /* 127629e8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127629eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127629ed call 0x127639f0 */
  push32(0x127629f2u); f_127639f0();
L_127629f2:;
  /* 127629f2 mov esi, esp */
  ESI = (ESP);
  /* 127629f4 push 0xe */
  push32((uint32_t)(0xeu));
  /* 127629f6 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x127629fcu);
  /* 127629fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127629ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762a01 call 0x127639f0 */
  push32(0x12762a06u); f_127639f0();
  /* 12762a06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762a0d je 0x12762af2 */
  if (C.zf) goto L_12762af2;
  /* 12762a13 mov esi, esp */
  ESI = (ESP);
  /* 12762a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762a17 push 0x127904c0 */
  push32((uint32_t)(0x127904c0u));
  /* 12762a1c call dword ptr [0x12793454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793454))), 0x12762a22u);
  /* 12762a22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762a25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762a27 call 0x127639f0 */
  push32(0x12762a2cu); f_127639f0();
  /* 12762a2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762a2e jle 0x12762af2 */
  if ((C.zf||C.sf!=C.of)) goto L_12762af2;
  /* 12762a34 mov esi, esp */
  ESI = (ESP);
  /* 12762a36 push 0x12790440 */
  push32((uint32_t)(0x12790440u));
  /* 12762a3b call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12762a41u);
  /* 12762a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762a44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762a46 call 0x127639f0 */
  push32(0x12762a4bu); f_127639f0();
  /* 12762a4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762a4d jne 0x12762af2 */
  if (!C.zf) goto L_12762af2;
  /* 12762a53 mov esi, esp */
  ESI = (ESP);
  /* 12762a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762a57 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12762a59 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762a5fu);
  /* 12762a5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762a62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762a64 call 0x127639f0 */
  push32(0x12762a69u); f_127639f0();
  /* 12762a69 mov esi, esp */
  ESI = (ESP);
  /* 12762a6b push 0x1278b354 */
  push32((uint32_t)(0x1278b354u));
  /* 12762a70 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762a76u);
  /* 12762a76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762a79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762a7b call 0x127639f0 */
  push32(0x12762a80u); f_127639f0();
  /* 12762a80 mov esi, esp */
  ESI = (ESP);
  /* 12762a82 push 0x2ee0 */
  push32((uint32_t)(0x2ee0u));
  /* 12762a87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12762a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762a8b call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12762a91u);
  /* 12762a91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762a96 call 0x127639f0 */
  push32(0x12762a9bu); f_127639f0();
  /* 12762a9b mov esi, esp */
  ESI = (ESP);
  /* 12762a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12762a9f push 0x12790580 */
  push32((uint32_t)(0x12790580u));
  /* 12762aa4 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12762aaau);
  /* 12762aaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762aad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762aaf call 0x127639f0 */
  push32(0x12762ab4u); f_127639f0();
  /* 12762ab4 mov esi, esp */
  ESI = (ESP);
  /* 12762ab6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12762ab8 call dword ptr [0x12793490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793490))), 0x12762abeu);
  /* 12762abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ac3 call 0x127639f0 */
  push32(0x12762ac8u); f_127639f0();
  /* 12762ac8 mov esi, esp */
  ESI = (ESP);
  /* 12762aca push 0 */
  push32((uint32_t)(0x0u));
  /* 12762acc push 0x127904c0 */
  push32((uint32_t)(0x127904c0u));
  /* 12762ad1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12762ad3 push 0x127903e0 */
  push32((uint32_t)(0x127903e0u));
  /* 12762ad8 push 0x12790450 */
  push32((uint32_t)(0x12790450u));
  /* 12762add push 0x12790430 */
  push32((uint32_t)(0x12790430u));
  /* 12762ae2 call dword ptr [0x12793474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793474))), 0x12762ae8u);
  /* 12762ae8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762aeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762aed call 0x127639f0 */
  push32(0x12762af2u); f_127639f0();
L_12762af2:;
  /* 12762af2 mov esi, esp */
  ESI = (ESP);
  /* 12762af4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12762af6 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762afcu);
  /* 12762afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762aff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762b01 call 0x127639f0 */
  push32(0x12762b06u); f_127639f0();
  /* 12762b06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762b0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762b0d je 0x12762c3c */
  if (C.zf) goto L_12762c3c;
  /* 12762b13 mov esi, esp */
  ESI = (ESP);
  /* 12762b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762b17 push 0x12790460 */
  push32((uint32_t)(0x12790460u));
  /* 12762b1c call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762b22u);
  /* 12762b22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762b25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762b27 call 0x127639f0 */
  push32(0x12762b2cu); f_127639f0();
  /* 12762b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762b2e jle 0x12762c3c */
  if ((C.zf||C.sf!=C.of)) goto L_12762c3c;
  /* 12762b34 mov esi, esp */
  ESI = (ESP);
  /* 12762b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762b38 push 0x12790510 */
  push32((uint32_t)(0x12790510u));
  /* 12762b3d call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762b43u);
  /* 12762b43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762b46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762b48 call 0x127639f0 */
  push32(0x12762b4du); f_127639f0();
  /* 12762b4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762b4f jle 0x12762c3c */
  if ((C.zf||C.sf!=C.of)) goto L_12762c3c;
  /* 12762b55 mov esi, esp */
  ESI = (ESP);
  /* 12762b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762b59 push 0x12790480 */
  push32((uint32_t)(0x12790480u));
  /* 12762b5e call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762b64u);
  /* 12762b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762b67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762b69 call 0x127639f0 */
  push32(0x12762b6eu); f_127639f0();
  /* 12762b6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762b70 jle 0x12762c3c */
  if ((C.zf||C.sf!=C.of)) goto L_12762c3c;
  /* 12762b76 mov esi, esp */
  ESI = (ESP);
  /* 12762b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762b7a push 0x127903e8 */
  push32((uint32_t)(0x127903e8u));
  /* 12762b7f call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762b85u);
  /* 12762b85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762b8a call 0x127639f0 */
  push32(0x12762b8fu); f_127639f0();
  /* 12762b8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762b91 jle 0x12762c3c */
  if ((C.zf||C.sf!=C.of)) goto L_12762c3c;
  /* 12762b97 mov esi, esp */
  ESI = (ESP);
  /* 12762b99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762b9b push 0x127903f8 */
  push32((uint32_t)(0x127903f8u));
  /* 12762ba0 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762ba6u);
  /* 12762ba6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762ba9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762bab call 0x127639f0 */
  push32(0x12762bb0u); f_127639f0();
  /* 12762bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762bb2 jle 0x12762c3c */
  if ((C.zf||C.sf!=C.of)) goto L_12762c3c;
  /* 12762bb8 mov esi, esp */
  ESI = (ESP);
  /* 12762bba push 0 */
  push32((uint32_t)(0x0u));
  /* 12762bbc push 0x127904f8 */
  push32((uint32_t)(0x127904f8u));
  /* 12762bc1 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762bc7u);
  /* 12762bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762bca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762bcc call 0x127639f0 */
  push32(0x12762bd1u); f_127639f0();
  /* 12762bd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762bd3 jle 0x12762c3c */
  if ((C.zf||C.sf!=C.of)) goto L_12762c3c;
  /* 12762bd5 mov esi, esp */
  ESI = (ESP);
  /* 12762bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762bd9 push 0x127905d0 */
  push32((uint32_t)(0x127905d0u));
  /* 12762bde call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762be4u);
  /* 12762be4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762be7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762be9 call 0x127639f0 */
  push32(0x12762beeu); f_127639f0();
  /* 12762bee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762bf0 jle 0x12762c3c */
  if ((C.zf||C.sf!=C.of)) goto L_12762c3c;
  /* 12762bf2 mov esi, esp */
  ESI = (ESP);
  /* 12762bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762bf6 push 0x12790448 */
  push32((uint32_t)(0x12790448u));
  /* 12762bfb call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762c01u);
  /* 12762c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762c04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762c06 call 0x127639f0 */
  push32(0x12762c0bu); f_127639f0();
  /* 12762c0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762c0d jle 0x12762c3c */
  if ((C.zf||C.sf!=C.of)) goto L_12762c3c;
  /* 12762c0f mov esi, esp */
  ESI = (ESP);
  /* 12762c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762c13 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12762c15 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762c1bu);
  /* 12762c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762c1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762c20 call 0x127639f0 */
  push32(0x12762c25u); f_127639f0();
  /* 12762c25 mov esi, esp */
  ESI = (ESP);
  /* 12762c27 push 0x1278b34c */
  push32((uint32_t)(0x1278b34cu));
  /* 12762c2c call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762c32u);
  /* 12762c32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762c35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762c37 call 0x127639f0 */
  push32(0x12762c3cu); f_127639f0();
L_12762c3c:;
  /* 12762c3c mov esi, esp */
  ESI = (ESP);
  /* 12762c3e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12762c40 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762c46u);
  /* 12762c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762c4b call 0x127639f0 */
  push32(0x12762c50u); f_127639f0();
  /* 12762c50 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762c55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762c57 je 0x12762cbd */
  if (C.zf) goto L_12762cbd;
  /* 12762c59 mov esi, esp */
  ESI = (ESP);
  /* 12762c5b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12762c5d call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762c63u);
  /* 12762c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762c66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762c68 call 0x127639f0 */
  push32(0x12762c6du); f_127639f0();
  /* 12762c6d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762c74 jne 0x12762cbd */
  if (!C.zf) goto L_12762cbd;
  /* 12762c76 mov esi, esp */
  ESI = (ESP);
  /* 12762c78 push 0x127905a0 */
  push32((uint32_t)(0x127905a0u));
  /* 12762c7d call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12762c83u);
  /* 12762c83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762c86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762c88 call 0x127639f0 */
  push32(0x12762c8du); f_127639f0();
  /* 12762c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762c8f jne 0x12762cbd */
  if (!C.zf) goto L_12762cbd;
  /* 12762c91 mov esi, esp */
  ESI = (ESP);
  /* 12762c93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762c95 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12762c97 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762c9du);
  /* 12762c9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762ca0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ca2 call 0x127639f0 */
  push32(0x12762ca7u); f_127639f0();
  /* 12762ca7 mov esi, esp */
  ESI = (ESP);
  /* 12762ca9 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12762cab push 0xa */
  push32((uint32_t)(0xau));
  /* 12762cad call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x12762cb3u);
  /* 12762cb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762cb8 call 0x127639f0 */
  push32(0x12762cbdu); f_127639f0();
L_12762cbd:;
  /* 12762cbd mov esi, esp */
  ESI = (ESP);
  /* 12762cbf push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12762cc1 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762cc7u);
  /* 12762cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ccc call 0x127639f0 */
  push32(0x12762cd1u); f_127639f0();
  /* 12762cd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762cd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762cd8 je 0x12762d24 */
  if (C.zf) goto L_12762d24;
  /* 12762cda mov esi, esp */
  ESI = (ESP);
  /* 12762cdc push 0xa */
  push32((uint32_t)(0xau));
  /* 12762cde call dword ptr [0x12793484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793484))), 0x12762ce4u);
  /* 12762ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ce9 call 0x127639f0 */
  push32(0x12762ceeu); f_127639f0();
  /* 12762cee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762cf5 je 0x12762d24 */
  if (C.zf) goto L_12762d24;
  /* 12762cf7 mov esi, esp */
  ESI = (ESP);
  /* 12762cf9 push 0x1278b344 */
  push32((uint32_t)(0x1278b344u));
  /* 12762cfe call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762d04u);
  /* 12762d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762d09 call 0x127639f0 */
  push32(0x12762d0eu); f_127639f0();
  /* 12762d0e mov esi, esp */
  ESI = (ESP);
  /* 12762d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762d12 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12762d14 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762d1au);
  /* 12762d1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762d1f call 0x127639f0 */
  push32(0x12762d24u); f_127639f0();
L_12762d24:;
  /* 12762d24 mov esi, esp */
  ESI = (ESP);
  /* 12762d26 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12762d28 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762d2eu);
  /* 12762d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762d33 call 0x127639f0 */
  push32(0x12762d38u); f_127639f0();
  /* 12762d38 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762d3f je 0x12762e9e */
  if (C.zf) goto L_12762e9e;
  /* 12762d45 mov esi, esp */
  ESI = (ESP);
  /* 12762d47 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12762d49 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762d4fu);
  /* 12762d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762d52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762d54 call 0x127639f0 */
  push32(0x12762d59u); f_127639f0();
  /* 12762d59 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762d60 jne 0x12762e9e */
  if (!C.zf) goto L_12762e9e;
  /* 12762d66 mov esi, esp */
  ESI = (ESP);
  /* 12762d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762d6a push 0x12790460 */
  push32((uint32_t)(0x12790460u));
  /* 12762d6f call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762d75u);
  /* 12762d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762d78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762d7a call 0x127639f0 */
  push32(0x12762d7fu); f_127639f0();
  /* 12762d7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762d81 jle 0x12762e9e */
  if ((C.zf||C.sf!=C.of)) goto L_12762e9e;
  /* 12762d87 mov esi, esp */
  ESI = (ESP);
  /* 12762d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762d8b push 0x12790510 */
  push32((uint32_t)(0x12790510u));
  /* 12762d90 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762d96u);
  /* 12762d96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762d99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762d9b call 0x127639f0 */
  push32(0x12762da0u); f_127639f0();
  /* 12762da0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762da2 jle 0x12762e9e */
  if ((C.zf||C.sf!=C.of)) goto L_12762e9e;
  /* 12762da8 mov esi, esp */
  ESI = (ESP);
  /* 12762daa push 0 */
  push32((uint32_t)(0x0u));
  /* 12762dac push 0x12790480 */
  push32((uint32_t)(0x12790480u));
  /* 12762db1 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762db7u);
  /* 12762db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762dba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762dbc call 0x127639f0 */
  push32(0x12762dc1u); f_127639f0();
  /* 12762dc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762dc3 jle 0x12762e9e */
  if ((C.zf||C.sf!=C.of)) goto L_12762e9e;
  /* 12762dc9 mov esi, esp */
  ESI = (ESP);
  /* 12762dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12762dcd push 0x127903e8 */
  push32((uint32_t)(0x127903e8u));
  /* 12762dd2 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762dd8u);
  /* 12762dd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762ddb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ddd call 0x127639f0 */
  push32(0x12762de2u); f_127639f0();
  /* 12762de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762de4 jle 0x12762e9e */
  if ((C.zf||C.sf!=C.of)) goto L_12762e9e;
  /* 12762dea mov esi, esp */
  ESI = (ESP);
  /* 12762dec push 0 */
  push32((uint32_t)(0x0u));
  /* 12762dee push 0x127903f8 */
  push32((uint32_t)(0x127903f8u));
  /* 12762df3 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762df9u);
  /* 12762df9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762dfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762dfe call 0x127639f0 */
  push32(0x12762e03u); f_127639f0();
  /* 12762e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762e05 jle 0x12762e9e */
  if ((C.zf||C.sf!=C.of)) goto L_12762e9e;
  /* 12762e0b mov esi, esp */
  ESI = (ESP);
  /* 12762e0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12762e0f push 0x127904f8 */
  push32((uint32_t)(0x127904f8u));
  /* 12762e14 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762e1au);
  /* 12762e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762e1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762e1f call 0x127639f0 */
  push32(0x12762e24u); f_127639f0();
  /* 12762e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762e26 jle 0x12762e9e */
  if ((C.zf||C.sf!=C.of)) goto L_12762e9e;
  /* 12762e28 mov esi, esp */
  ESI = (ESP);
  /* 12762e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12762e2c push 0x127905d0 */
  push32((uint32_t)(0x127905d0u));
  /* 12762e31 call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762e37u);
  /* 12762e37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762e3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762e3c call 0x127639f0 */
  push32(0x12762e41u); f_127639f0();
  /* 12762e41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762e43 jle 0x12762e9e */
  if ((C.zf||C.sf!=C.of)) goto L_12762e9e;
  /* 12762e45 mov esi, esp */
  ESI = (ESP);
  /* 12762e47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762e49 push 0x12790448 */
  push32((uint32_t)(0x12790448u));
  /* 12762e4e call dword ptr [0x12793468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793468))), 0x12762e54u);
  /* 12762e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762e57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762e59 call 0x127639f0 */
  push32(0x12762e5eu); f_127639f0();
  /* 12762e5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762e60 jle 0x12762e9e */
  if ((C.zf||C.sf!=C.of)) goto L_12762e9e;
  /* 12762e62 mov esi, esp */
  ESI = (ESP);
  /* 12762e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762e66 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12762e68 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762e6eu);
  /* 12762e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762e71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762e73 call 0x127639f0 */
  push32(0x12762e78u); f_127639f0();
  /* 12762e78 mov esi, esp */
  ESI = (ESP);
  /* 12762e7a push 0x1278b33c */
  push32((uint32_t)(0x1278b33cu));
  /* 12762e7f call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762e85u);
  /* 12762e85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762e88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762e8a call 0x127639f0 */
  push32(0x12762e8fu); f_127639f0();
  /* 12762e8f mov esi, esp */
  ESI = (ESP);
  /* 12762e91 call dword ptr [0x12793494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793494))), 0x12762e97u);
  /* 12762e97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762e99 call 0x127639f0 */
  push32(0x12762e9eu); f_127639f0();
L_12762e9e:;
  /* 12762e9e mov esi, esp */
  ESI = (ESP);
  /* 12762ea0 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12762ea2 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762ea8u);
  /* 12762ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762eab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ead call 0x127639f0 */
  push32(0x12762eb2u); f_127639f0();
  /* 12762eb2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762eb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762eb9 je 0x12762f12 */
  if (C.zf) goto L_12762f12;
  /* 12762ebb mov esi, esp */
  ESI = (ESP);
  /* 12762ebd push 0x12790410 */
  push32((uint32_t)(0x12790410u));
  /* 12762ec2 call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12762ec8u);
  /* 12762ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ecd call 0x127639f0 */
  push32(0x12762ed2u); f_127639f0();
  /* 12762ed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762ed4 jne 0x12762f12 */
  if (!C.zf) goto L_12762f12;
  /* 12762ed6 mov esi, esp */
  ESI = (ESP);
  /* 12762ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762eda push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12762edc call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762ee2u);
  /* 12762ee2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762ee5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ee7 call 0x127639f0 */
  push32(0x12762eecu); f_127639f0();
  /* 12762eec mov esi, esp */
  ESI = (ESP);
  /* 12762eee push 0x1278b334 */
  push32((uint32_t)(0x1278b334u));
  /* 12762ef3 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762ef9u);
  /* 12762ef9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762efc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762efe call 0x127639f0 */
  push32(0x12762f03u); f_127639f0();
  /* 12762f03 mov esi, esp */
  ESI = (ESP);
  /* 12762f05 call dword ptr [0x12793498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793498))), 0x12762f0bu);
  /* 12762f0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762f0d call 0x127639f0 */
  push32(0x12762f12u); f_127639f0();
L_12762f12:;
  /* 12762f12 mov esi, esp */
  ESI = (ESP);
  /* 12762f14 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12762f16 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762f1cu);
  /* 12762f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762f1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762f21 call 0x127639f0 */
  push32(0x12762f26u); f_127639f0();
  /* 12762f26 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762f2d je 0x12762f77 */
  if (C.zf) goto L_12762f77;
  /* 12762f2f mov esi, esp */
  ESI = (ESP);
  /* 12762f31 push 0x12790400 */
  push32((uint32_t)(0x12790400u));
  /* 12762f36 call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12762f3cu);
  /* 12762f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762f3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762f41 call 0x127639f0 */
  push32(0x12762f46u); f_127639f0();
  /* 12762f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762f48 jne 0x12762f77 */
  if (!C.zf) goto L_12762f77;
  /* 12762f4a mov esi, esp */
  ESI = (ESP);
  /* 12762f4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12762f4e push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12762f50 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762f56u);
  /* 12762f56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762f59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762f5b call 0x127639f0 */
  push32(0x12762f60u); f_127639f0();
  /* 12762f60 mov esi, esp */
  ESI = (ESP);
  /* 12762f62 push 0x1278b32c */
  push32((uint32_t)(0x1278b32cu));
  /* 12762f67 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762f6du);
  /* 12762f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762f70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762f72 call 0x127639f0 */
  push32(0x12762f77u); f_127639f0();
L_12762f77:;
  /* 12762f77 mov esi, esp */
  ESI = (ESP);
  /* 12762f79 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12762f7b call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762f81u);
  /* 12762f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762f84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762f86 call 0x127639f0 */
  push32(0x12762f8bu); f_127639f0();
  /* 12762f8b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12762f90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762f92 je 0x12762feb */
  if (C.zf) goto L_12762feb;
  /* 12762f94 mov esi, esp */
  ESI = (ESP);
  /* 12762f96 push 0x12790408 */
  push32((uint32_t)(0x12790408u));
  /* 12762f9b call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12762fa1u);
  /* 12762fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762fa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762fa6 call 0x127639f0 */
  push32(0x12762fabu); f_127639f0();
  /* 12762fab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12762fad jne 0x12762feb */
  if (!C.zf) goto L_12762feb;
  /* 12762faf mov esi, esp */
  ESI = (ESP);
  /* 12762fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12762fb3 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12762fb5 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12762fbbu);
  /* 12762fbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762fbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762fc0 call 0x127639f0 */
  push32(0x12762fc5u); f_127639f0();
  /* 12762fc5 mov esi, esp */
  ESI = (ESP);
  /* 12762fc7 push 0x1278b324 */
  push32((uint32_t)(0x1278b324u));
  /* 12762fcc call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12762fd2u);
  /* 12762fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762fd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762fd7 call 0x127639f0 */
  push32(0x12762fdcu); f_127639f0();
  /* 12762fdc mov esi, esp */
  ESI = (ESP);
  /* 12762fde call dword ptr [0x12793498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793498))), 0x12762fe4u);
  /* 12762fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762fe6 call 0x127639f0 */
  push32(0x12762febu); f_127639f0();
L_12762feb:;
  /* 12762feb mov esi, esp */
  ESI = (ESP);
  /* 12762fed push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12762fef call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12762ff5u);
  /* 12762ff5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12762ff8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12762ffa call 0x127639f0 */
  push32(0x12762fffu); f_127639f0();
  /* 12762fff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763006 je 0x127630a5 */
  if (C.zf) goto L_127630a5;
  /* 1276300c mov esi, esp */
  ESI = (ESP);
  /* 1276300e push 0x12790420 */
  push32((uint32_t)(0x12790420u));
  /* 12763013 call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12763019u);
  /* 12763019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276301c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276301e call 0x127639f0 */
  push32(0x12763023u); f_127639f0();
  /* 12763023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763025 jne 0x127630a5 */
  if (!C.zf) goto L_127630a5;
  /* 12763027 mov esi, esp */
  ESI = (ESP);
  /* 12763029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276302b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1276302d call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x12763033u);
  /* 12763033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763036 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763038 call 0x127639f0 */
  push32(0x1276303du); f_127639f0();
  /* 1276303d mov esi, esp */
  ESI = (ESP);
  /* 1276303f push 0x1278b31c */
  push32((uint32_t)(0x1278b31cu));
  /* 12763044 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x1276304au);
  /* 1276304a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276304d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276304f call 0x127639f0 */
  push32(0x12763054u); f_127639f0();
  /* 12763054 mov esi, esp */
  ESI = (ESP);
  /* 12763056 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1276305b push 1 */
  push32((uint32_t)(0x1u));
  /* 1276305d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276305f call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12763065u);
  /* 12763065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276306a call 0x127639f0 */
  push32(0x1276306fu); f_127639f0();
  /* 1276306f mov esi, esp */
  ESI = (ESP);
  /* 12763071 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 12763076 push 4 */
  push32((uint32_t)(0x4u));
  /* 12763078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276307a call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x12763080u);
  /* 12763080 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763083 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763085 call 0x127639f0 */
  push32(0x1276308au); f_127639f0();
  /* 1276308a mov esi, esp */
  ESI = (ESP);
  /* 1276308c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12763091 push 5 */
  push32((uint32_t)(0x5u));
  /* 12763093 push 0 */
  push32((uint32_t)(0x0u));
  /* 12763095 call dword ptr [0x12793460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793460))), 0x1276309bu);
  /* 1276309b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276309e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127630a0 call 0x127639f0 */
  push32(0x127630a5u); f_127639f0();
L_127630a5:;
  /* 127630a5 mov esi, esp */
  ESI = (ESP);
  /* 127630a7 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 127630a9 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x127630afu);
  /* 127630af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127630b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127630b4 call 0x127639f0 */
  push32(0x127630b9u); f_127639f0();
  /* 127630b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127630be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127630c0 je 0x12763136 */
  if (C.zf) goto L_12763136;
  /* 127630c2 mov esi, esp */
  ESI = (ESP);
  /* 127630c4 push 0x127905c8 */
  push32((uint32_t)(0x127905c8u));
  /* 127630c9 call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x127630cfu);
  /* 127630cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127630d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127630d4 call 0x127639f0 */
  push32(0x127630d9u); f_127639f0();
  /* 127630d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127630db jne 0x12763136 */
  if (!C.zf) goto L_12763136;
  /* 127630dd mov esi, esp */
  ESI = (ESP);
  /* 127630df push 0 */
  push32((uint32_t)(0x0u));
  /* 127630e1 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 127630e3 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x127630e9u);
  /* 127630e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127630ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127630ee call 0x127639f0 */
  push32(0x127630f3u); f_127639f0();
  /* 127630f3 mov esi, esp */
  ESI = (ESP);
  /* 127630f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127630f7 push 0x12790560 */
  push32((uint32_t)(0x12790560u));
  /* 127630fc call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12763102u);
  /* 12763102 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763105 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763107 call 0x127639f0 */
  push32(0x1276310cu); f_127639f0();
  /* 1276310c mov esi, esp */
  ESI = (ESP);
  /* 1276310e push 5 */
  push32((uint32_t)(0x5u));
  /* 12763110 call dword ptr [0x1279349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279349c))), 0x12763116u);
  /* 12763116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763119 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276311b call 0x127639f0 */
  push32(0x12763120u); f_127639f0();
  /* 12763120 mov esi, esp */
  ESI = (ESP);
  /* 12763122 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12763124 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12763126 call dword ptr [0x1279346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279346c))), 0x1276312cu);
  /* 1276312c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276312f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763131 call 0x127639f0 */
  push32(0x12763136u); f_127639f0();
L_12763136:;
  /* 12763136 mov esi, esp */
  ESI = (ESP);
  /* 12763138 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1276313a call dword ptr [0x12793470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793470))), 0x12763140u);
  /* 12763140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763143 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763145 call 0x127639f0 */
  push32(0x1276314au); f_127639f0();
  /* 1276314a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276314f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763151 je 0x1276318c */
  if (C.zf) goto L_1276318c;
  /* 12763153 mov esi, esp */
  ESI = (ESP);
  /* 12763155 push 0 */
  push32((uint32_t)(0x0u));
  /* 12763157 push 0x127905b8 */
  push32((uint32_t)(0x127905b8u));
  /* 1276315c call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x12763162u);
  /* 12763162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763167 call 0x127639f0 */
  push32(0x1276316cu); f_127639f0();
  /* 1276316c mov esi, esp */
  ESI = (ESP);
  /* 1276316e push 0 */
  push32((uint32_t)(0x0u));
  /* 12763170 push 0xc0 */
  push32((uint32_t)(0xc0u));
  /* 12763175 push 0x12790470 */
  push32((uint32_t)(0x12790470u));
  /* 1276317a push 5 */
  push32((uint32_t)(0x5u));
  /* 1276317c call dword ptr [0x1279347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279347c))), 0x12763182u);
  /* 12763182 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763185 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763187 call 0x127639f0 */
  push32(0x1276318cu); f_127639f0();
L_1276318c:;
  /* 1276318c mov esi, esp */
  ESI = (ESP);
  /* 1276318e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12763190 call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12763196u);
  /* 12763196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763199 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276319b call 0x127639f0 */
  push32(0x127631a0u); f_127639f0();
  /* 127631a0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 127631a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127631a7 je 0x12763207 */
  if (C.zf) goto L_12763207;
  /* 127631a9 mov esi, esp */
  ESI = (ESP);
  /* 127631ab push 0x127905b8 */
  push32((uint32_t)(0x127905b8u));
  /* 127631b0 call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x127631b6u);
  /* 127631b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127631b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127631bb call 0x127639f0 */
  push32(0x127631c0u); f_127639f0();
  /* 127631c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127631c2 jne 0x12763207 */
  if (!C.zf) goto L_12763207;
  /* 127631c4 mov esi, esp */
  ESI = (ESP);
  /* 127631c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127631c8 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 127631ca call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x127631d0u);
  /* 127631d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127631d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127631d5 call 0x127639f0 */
  push32(0x127631dau); f_127639f0();
  /* 127631da mov esi, esp */
  ESI = (ESP);
  /* 127631dc push 0 */
  push32((uint32_t)(0x0u));
  /* 127631de push 0x12790560 */
  push32((uint32_t)(0x12790560u));
  /* 127631e3 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x127631e9u);
  /* 127631e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127631ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127631ee call 0x127639f0 */
  push32(0x127631f3u); f_127639f0();
  /* 127631f3 mov esi, esp */
  ESI = (ESP);
  /* 127631f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 127631f7 call dword ptr [0x127934a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127934a0))), 0x127631fdu);
  /* 127631fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763202 call 0x127639f0 */
  push32(0x12763207u); f_127639f0();
L_12763207:;
  /* 12763207 mov esi, esp */
  ESI = (ESP);
  /* 12763209 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1276320b call dword ptr [0x12793424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793424))), 0x12763211u);
  /* 12763211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763216 call 0x127639f0 */
  push32(0x1276321bu); f_127639f0();
  /* 1276321b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763220 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763222 je 0x127632a9 */
  if (C.zf) goto L_127632a9;
  /* 12763228 mov esi, esp */
  ESI = (ESP);
  /* 1276322a push 0x12790540 */
  push32((uint32_t)(0x12790540u));
  /* 1276322f call dword ptr [0x12793458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793458))), 0x12763235u);
  /* 12763235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763238 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276323a call 0x127639f0 */
  push32(0x1276323fu); f_127639f0();
  /* 1276323f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763241 jne 0x127632a9 */
  if (!C.zf) goto L_127632a9;
  /* 12763243 mov esi, esp */
  ESI = (ESP);
  /* 12763245 push 0 */
  push32((uint32_t)(0x0u));
  /* 12763247 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12763249 call dword ptr [0x12793428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793428))), 0x1276324fu);
  /* 1276324f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763252 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763254 call 0x127639f0 */
  push32(0x12763259u); f_127639f0();
  /* 12763259 mov esi, esp */
  ESI = (ESP);
  /* 1276325b push 0x1278b314 */
  push32((uint32_t)(0x1278b314u));
  /* 12763260 call dword ptr [0x12793430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793430))), 0x12763266u);
  /* 12763266 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276326b call 0x127639f0 */
  push32(0x12763270u); f_127639f0();
  /* 12763270 mov esi, esp */
  ESI = (ESP);
  /* 12763272 push 0 */
  push32((uint32_t)(0x0u));
  /* 12763274 push 0x12790538 */
  push32((uint32_t)(0x12790538u));
  /* 12763279 call dword ptr [0x1279343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279343c))), 0x1276327fu);
  /* 1276327f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763282 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763284 call 0x127639f0 */
  push32(0x12763289u); f_127639f0();
  /* 12763289 mov esi, esp */
  ESI = (ESP);
  /* 1276328b push 0 */
  push32((uint32_t)(0x0u));
  /* 1276328d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12763292 push 0x12790470 */
  push32((uint32_t)(0x12790470u));
  /* 12763297 push 5 */
  push32((uint32_t)(0x5u));
  /* 12763299 call dword ptr [0x1279347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279347c))), 0x1276329fu);
  /* 1276329f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127632a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127632a4 call 0x127639f0 */
  push32(0x127632a9u); f_127639f0();
L_127632a9:;
  /* 127632a9 pop edi */
  EDI = (pop32());
  /* 127632aa pop esi */
  ESI = (pop32());
  /* 127632ab pop ebx */
  EBX = (pop32());
  /* 127632ac add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127632af cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127632b1 call 0x127639f0 */
  push32(0x127632b6u); f_127639f0();
  /* 127632b6 mov esp, ebp */
  ESP = (EBP);
  /* 127632b8 pop ebp */
  EBP = (pop32());
  /* 127632b9 ret  */
  ESPCHK(0x12761990u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x127639f0 (56 bytes, 28 insns) */
void f_127639f0(void) {
  FTRACE(0x127639f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127639f0 jne 0x127639f3 */
  if (!C.zf) goto L_127639f3;
  /* 127639f2 ret  */
  ESPCHK(0x127639f0u, _esp0);
  ESP += 4; return;
L_127639f3:;
  /* 127639f3 push ebp */
  push32((uint32_t)(EBP));
  /* 127639f4 mov ebp, esp */
  EBP = (ESP);
  /* 127639f6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127639f9 push eax */
  push32((uint32_t)(EAX));
  /* 127639fa push edx */
  push32((uint32_t)(EDX));
  /* 127639fb push ebx */
  push32((uint32_t)(EBX));
  /* 127639fc push esi */
  push32((uint32_t)(ESI));
  /* 127639fd push edi */
  push32((uint32_t)(EDI));
  /* 127639fe push 0x1278b3a0 */
  push32((uint32_t)(0x1278b3a0u));
  /* 12763a03 push 0x1278b39c */
  push32((uint32_t)(0x1278b39cu));
  /* 12763a08 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12763a0a push 0x1278b38c */
  push32((uint32_t)(0x1278b38cu));
  /* 12763a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 12763a11 call 0x12763dc0 */
  push32(0x12763a16u); f_12763dc0();
  /* 12763a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763a19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763a1c jne 0x12763a1f */
  if (!C.zf) goto L_12763a1f;
  /* 12763a1e int3  */
  x86_unimpl("int3 @ 0x12763a1e");
L_12763a1f:;
  /* 12763a1f pop edi */
  EDI = (pop32());
  /* 12763a20 pop esi */
  ESI = (pop32());
  /* 12763a21 pop ebx */
  EBX = (pop32());
  /* 12763a22 pop edx */
  EDX = (pop32());
  /* 12763a23 pop eax */
  EAX = (pop32());
  /* 12763a24 mov esp, ebp */
  ESP = (EBP);
  /* 12763a26 pop ebp */
  EBP = (pop32());
  /* 12763a27 ret  */
  ESPCHK(0x127639f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a30 @ 0x12763a30 (313 bytes, 78 insns) */
void f_12763a30(void) {
  FTRACE(0x12763a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12763a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12763a31 mov ebp, esp */
  EBP = (ESP);
  /* 12763a33 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763a37 jne 0x12763af7 */
  if (!C.zf) goto L_12763af7;
  /* 12763a3d call dword ptr [0x12793340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793340))), 0x12763a43u);
  /* 12763a43 mov dword ptr [0x12790660], eax */
  w32((uint32_t)(0x12790660), (EAX));
  /* 12763a48 push 1 */
  push32((uint32_t)(0x1u));
  /* 12763a4a call 0x127674f0 */
  push32(0x12763a4fu); f_127674f0();
  /* 12763a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763a54 jne 0x12763a5d */
  if (!C.zf) goto L_12763a5d;
  /* 12763a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12763a58 jmp 0x12763b65 */
  goto L_12763b65;
L_12763a5d:;
  /* 12763a5d mov eax, dword ptr [0x12790660] */
  EAX = (r32((uint32_t)(0x12790660)));
  /* 12763a62 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12763a65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763a6a mov dword ptr [0x1279066c], eax */
  w32((uint32_t)(0x1279066c), (EAX));
  /* 12763a6f mov ecx, dword ptr [0x12790660] */
  ECX = (r32((uint32_t)(0x12790660)));
  /* 12763a75 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12763a7b mov dword ptr [0x12790668], ecx */
  w32((uint32_t)(0x12790668), (ECX));
  /* 12763a81 mov edx, dword ptr [0x12790668] */
  EDX = (r32((uint32_t)(0x12790668)));
  /* 12763a87 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12763a8a add edx, dword ptr [0x1279066c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1279066c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12763a90 mov dword ptr [0x12790664], edx */
  w32((uint32_t)(0x12790664), (EDX));
  /* 12763a96 mov eax, dword ptr [0x12790660] */
  EAX = (r32((uint32_t)(0x12790660)));
  /* 12763a9b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12763a9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763aa3 mov dword ptr [0x12790660], eax */
  w32((uint32_t)(0x12790660), (EAX));
  /* 12763aa8 call 0x12764660 */
  push32(0x12763aadu); f_12764660();
  /* 12763aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763aaf jne 0x12763abd */
  if (!C.zf) goto L_12763abd;
  /* 12763ab1 call 0x12767540 */
  push32(0x12763ab6u); f_12767540();
  /* 12763ab6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12763ab8 jmp 0x12763b65 */
  goto L_12763b65;
L_12763abd:;
  /* 12763abd call dword ptr [0x1279333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279333c))), 0x12763ac3u);
  /* 12763ac3 mov dword ptr [0x127921ac], eax */
  w32((uint32_t)(0x127921ac), (EAX));
  /* 12763ac8 call 0x127672d0 */
  push32(0x12763acdu); f_127672d0();
  /* 12763acd mov dword ptr [0x12790648], eax */
  w32((uint32_t)(0x12790648), (EAX));
  /* 12763ad2 call 0x12764910 */
  push32(0x12763ad7u); f_12764910();
  /* 12763ad7 call 0x12766dc0 */
  push32(0x12763adcu); f_12766dc0();
  /* 12763adc call 0x12766c70 */
  push32(0x12763ae1u); f_12766c70();
  /* 12763ae1 call 0x12764460 */
  push32(0x12763ae6u); f_12764460();
  /* 12763ae6 mov ecx, dword ptr [0x12790644] */
  ECX = (r32((uint32_t)(0x12790644)));
  /* 12763aec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12763aef mov dword ptr [0x12790644], ecx */
  w32((uint32_t)(0x12790644), (ECX));
  /* 12763af5 jmp 0x12763b60 */
  goto L_12763b60;
L_12763af7:;
  /* 12763af7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763afb jne 0x12763b50 */
  if (!C.zf) goto L_12763b50;
  /* 12763afd cmp dword ptr [0x12790644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763b04 jle 0x12763b4a */
  if ((C.zf||C.sf!=C.of)) goto L_12763b4a;
  /* 12763b06 mov edx, dword ptr [0x12790644] */
  EDX = (r32((uint32_t)(0x12790644)));
  /* 12763b0c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12763b0f mov dword ptr [0x12790644], edx */
  w32((uint32_t)(0x12790644), (EDX));
  /* 12763b15 cmp dword ptr [0x12790698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763b1c jne 0x12763b23 */
  if (!C.zf) goto L_12763b23;
  /* 12763b1e call 0x127644e0 */
  push32(0x12763b23u); f_127644e0();
L_12763b23:;
  /* 12763b23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12763b25 call 0x12766210 */
  push32(0x12763b2au); f_12766210();
  /* 12763b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763b2d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12763b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763b32 je 0x12763b39 */
  if (C.zf) goto L_12763b39;
  /* 12763b34 call 0x12766b20 */
  push32(0x12763b39u); f_12766b20();
L_12763b39:;
  /* 12763b39 call 0x12764c40 */
  push32(0x12763b3eu); f_12764c40();
  /* 12763b3e call 0x127646f0 */
  push32(0x12763b43u); f_127646f0();
  /* 12763b43 call 0x12767540 */
  push32(0x12763b48u); f_12767540();
  /* 12763b48 jmp 0x12763b4e */
  goto L_12763b4e;
L_12763b4a:;
  /* 12763b4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12763b4c jmp 0x12763b65 */
  goto L_12763b65;
L_12763b4e:;
  /* 12763b4e jmp 0x12763b60 */
  goto L_12763b60;
L_12763b50:;
  /* 12763b50 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763b54 jne 0x12763b60 */
  if (!C.zf) goto L_12763b60;
  /* 12763b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12763b58 call 0x127647e0 */
  push32(0x12763b5du); f_127647e0();
  /* 12763b5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12763b60:;
  /* 12763b60 mov eax, 1 */
  EAX = (0x1u);
L_12763b65:;
  /* 12763b65 pop ebp */
  EBP = (pop32());
  /* 12763b66 ret 0xc */
  ESPCHK(0x12763a30u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12763b70 (243 bytes, 86 insns) */
void f_12763b70(void) {
  FTRACE(0x12763b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12763b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12763b71 mov ebp, esp */
  EBP = (ESP);
  /* 12763b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12763b74 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12763b7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763b7f jne 0x12763b91 */
  if (!C.zf) goto L_12763b91;
  /* 12763b81 cmp dword ptr [0x12790644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763b88 jne 0x12763b91 */
  if (!C.zf) goto L_12763b91;
  /* 12763b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12763b8c jmp 0x12763c5d */
  goto L_12763c5d;
L_12763b91:;
  /* 12763b91 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763b95 je 0x12763b9d */
  if (C.zf) goto L_12763b9d;
  /* 12763b97 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763b9b jne 0x12763bdf */
  if (!C.zf) goto L_12763bdf;
L_12763b9d:;
  /* 12763b9d cmp dword ptr [0x127921bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127921bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763ba4 je 0x12763bbb */
  if (C.zf) goto L_12763bbb;
  /* 12763ba6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12763ba9 push eax */
  push32((uint32_t)(EAX));
  /* 12763baa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763bad push ecx */
  push32((uint32_t)(ECX));
  /* 12763bae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763bb1 push edx */
  push32((uint32_t)(EDX));
  /* 12763bb2 call dword ptr [0x127921bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127921bc))), 0x12763bb8u);
  /* 12763bb8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12763bbb:;
  /* 12763bbb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763bbf je 0x12763bd5 */
  if (C.zf) goto L_12763bd5;
  /* 12763bc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12763bc4 push eax */
  push32((uint32_t)(EAX));
  /* 12763bc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 12763bc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763bcc push edx */
  push32((uint32_t)(EDX));
  /* 12763bcd call 0x12763a30 */
  push32(0x12763bd2u); f_12763a30();
  /* 12763bd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12763bd5:;
  /* 12763bd5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763bd9 jne 0x12763bdf */
  if (!C.zf) goto L_12763bdf;
  /* 12763bdb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12763bdd jmp 0x12763c5d */
  goto L_12763c5d;
L_12763bdf:;
  /* 12763bdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12763be2 push eax */
  push32((uint32_t)(EAX));
  /* 12763be3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763be6 push ecx */
  push32((uint32_t)(ECX));
  /* 12763be7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763bea push edx */
  push32((uint32_t)(EDX));
  /* 12763beb call 0x1276100a */
  push32(0x12763bf0u); f_1276100a();
  /* 12763bf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12763bf3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763bf7 jne 0x12763c0e */
  if (!C.zf) goto L_12763c0e;
  /* 12763bf9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763bfd jne 0x12763c0e */
  if (!C.zf) goto L_12763c0e;
  /* 12763bff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12763c02 push eax */
  push32((uint32_t)(EAX));
  /* 12763c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12763c05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763c08 push ecx */
  push32((uint32_t)(ECX));
  /* 12763c09 call 0x12763a30 */
  push32(0x12763c0eu); f_12763a30();
L_12763c0e:;
  /* 12763c0e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763c12 je 0x12763c1a */
  if (C.zf) goto L_12763c1a;
  /* 12763c14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763c18 jne 0x12763c5a */
  if (!C.zf) goto L_12763c5a;
L_12763c1a:;
  /* 12763c1a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12763c1d push edx */
  push32((uint32_t)(EDX));
  /* 12763c1e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763c21 push eax */
  push32((uint32_t)(EAX));
  /* 12763c22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763c25 push ecx */
  push32((uint32_t)(ECX));
  /* 12763c26 call 0x12763a30 */
  push32(0x12763c2bu); f_12763a30();
  /* 12763c2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763c2d jne 0x12763c36 */
  if (!C.zf) goto L_12763c36;
  /* 12763c2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12763c36:;
  /* 12763c36 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763c3a je 0x12763c5a */
  if (C.zf) goto L_12763c5a;
  /* 12763c3c cmp dword ptr [0x127921bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127921bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763c43 je 0x12763c5a */
  if (C.zf) goto L_12763c5a;
  /* 12763c45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12763c48 push edx */
  push32((uint32_t)(EDX));
  /* 12763c49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763c4c push eax */
  push32((uint32_t)(EAX));
  /* 12763c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763c50 push ecx */
  push32((uint32_t)(ECX));
  /* 12763c51 call dword ptr [0x127921bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127921bc))), 0x12763c57u);
  /* 12763c57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12763c5a:;
  /* 12763c5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12763c5d:;
  /* 12763c5d mov esp, ebp */
  ESP = (EBP);
  /* 12763c5f pop ebp */
  EBP = (pop32());
  /* 12763c60 ret 0xc */
  ESPCHK(0x12763b70u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12763c70 (58 bytes, 18 insns) */
void f_12763c70(void) {
  FTRACE(0x12763c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12763c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12763c71 mov ebp, esp */
  EBP = (ESP);
  /* 12763c73 cmp dword ptr [0x12790650], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790650))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763c7a je 0x12763c8e */
  if (C.zf) goto L_12763c8e;
  /* 12763c7c cmp dword ptr [0x12790650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763c83 jne 0x12763c93 */
  if (!C.zf) goto L_12763c93;
  /* 12763c85 cmp dword ptr [0x12790654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763c8c jne 0x12763c93 */
  if (!C.zf) goto L_12763c93;
L_12763c8e:;
  /* 12763c8e call 0x127675e0 */
  push32(0x12763c93u); f_127675e0();
L_12763c93:;
  /* 12763c93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763c96 push eax */
  push32((uint32_t)(EAX));
  /* 12763c97 call 0x12767630 */
  push32(0x12763c9cu); f_12767630();
  /* 12763c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763c9f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12763ca4 call dword ptr [0x1278ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1278ea30))), 0x12763caau);
  /* 12763caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763cad pop ebp */
  EBP = (pop32());
  /* 12763cae ret  */
  ESPCHK(0x12763c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cb0 @ 0x12763cb0 (11 bytes, 5 insns) */
void f_12763cb0(void) {
  FTRACE(0x12763cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12763cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12763cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12763cb3 call dword ptr [0x12793344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793344))), 0x12763cb9u);
  /* 12763cb9 pop ebp */
  EBP = (pop32());
  /* 12763cba ret  */
  ESPCHK(0x12763cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cc0 @ 0x12763cc0 (87 bytes, 30 insns) */
void f_12763cc0(void) {
  FTRACE(0x12763cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12763cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12763cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12763cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12763cc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763cc8 jl 0x12763cd0 */
  if ((C.sf!=C.of)) goto L_12763cd0;
  /* 12763cca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763cce jl 0x12763cd5 */
  if ((C.sf!=C.of)) goto L_12763cd5;
L_12763cd0:;
  /* 12763cd0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763cd3 jmp 0x12763d13 */
  goto L_12763d13;
L_12763cd5:;
  /* 12763cd5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763cd9 jne 0x12763ce7 */
  if (!C.zf) goto L_12763ce7;
  /* 12763cdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763cde mov eax, dword ptr [eax*4 + 0x1278ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1278ea38)));
  /* 12763ce5 jmp 0x12763d13 */
  goto L_12763d13;
L_12763ce7:;
  /* 12763ce7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763cea and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12763ced test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12763cef je 0x12763cf6 */
  if (C.zf) goto L_12763cf6;
  /* 12763cf1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763cf4 jmp 0x12763d13 */
  goto L_12763d13;
L_12763cf6:;
  /* 12763cf6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763cf9 mov eax, dword ptr [edx*4 + 0x1278ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1278ea38)));
  /* 12763d00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12763d03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763d06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763d09 mov dword ptr [ecx*4 + 0x1278ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1278ea38), (EDX));
  /* 12763d10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12763d13:;
  /* 12763d13 mov esp, ebp */
  ESP = (EBP);
  /* 12763d15 pop ebp */
  EBP = (pop32());
  /* 12763d16 ret  */
  ESPCHK(0x12763cc0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12763d20 (126 bytes, 38 insns) */
void f_12763d20(void) {
  FTRACE(0x12763d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12763d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12763d21 mov ebp, esp */
  EBP = (ESP);
  /* 12763d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12763d24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763d28 jl 0x12763d30 */
  if ((C.sf!=C.of)) goto L_12763d30;
  /* 12763d2a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763d2e jl 0x12763d37 */
  if ((C.sf!=C.of)) goto L_12763d37;
L_12763d30:;
  /* 12763d30 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12763d35 jmp 0x12763d9a */
  goto L_12763d9a;
L_12763d37:;
  /* 12763d37 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763d3b jne 0x12763d49 */
  if (!C.zf) goto L_12763d49;
  /* 12763d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763d40 mov eax, dword ptr [eax*4 + 0x1278ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1278ea44)));
  /* 12763d47 jmp 0x12763d9a */
  goto L_12763d9a;
L_12763d49:;
  /* 12763d49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763d4c mov edx, dword ptr [ecx*4 + 0x1278ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278ea44)));
  /* 12763d53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12763d56 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763d5a jne 0x12763d70 */
  if (!C.zf) goto L_12763d70;
  /* 12763d5c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12763d5e call dword ptr [0x12793348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793348))), 0x12763d64u);
  /* 12763d64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763d67 mov dword ptr [ecx*4 + 0x1278ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1278ea44), (EAX));
  /* 12763d6e jmp 0x12763d97 */
  goto L_12763d97;
L_12763d70:;
  /* 12763d70 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763d74 jne 0x12763d8a */
  if (!C.zf) goto L_12763d8a;
  /* 12763d76 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12763d78 call dword ptr [0x12793348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793348))), 0x12763d7eu);
  /* 12763d7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763d81 mov dword ptr [edx*4 + 0x1278ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1278ea44), (EAX));
  /* 12763d88 jmp 0x12763d97 */
  goto L_12763d97;
L_12763d8a:;
  /* 12763d8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763d8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763d90 mov dword ptr [eax*4 + 0x1278ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1278ea44), (ECX));
L_12763d97:;
  /* 12763d97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12763d9a:;
  /* 12763d9a mov esp, ebp */
  ESP = (EBP);
  /* 12763d9c pop ebp */
  EBP = (pop32());
  /* 12763d9d ret  */
  ESPCHK(0x12763d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x12763da0 (28 bytes, 11 insns) */
void f_12763da0(void) {
  FTRACE(0x12763da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12763da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12763da1 mov ebp, esp */
  EBP = (ESP);
  /* 12763da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12763da4 mov eax, dword ptr [0x127921a0] */
  EAX = (r32((uint32_t)(0x127921a0)));
  /* 12763da9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12763dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763daf mov dword ptr [0x127921a0], ecx */
  w32((uint32_t)(0x127921a0), (ECX));
  /* 12763db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12763db8 mov esp, ebp */
  ESP = (EBP);
  /* 12763dba pop ebp */
  EBP = (pop32());
  /* 12763dbb ret  */
  ESPCHK(0x12763da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x12763dc0 (912 bytes, 248 insns) */
void f_12763dc0(void) {
  FTRACE(0x12763dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12763dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12763dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12763dc3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12763dc8 call 0x12767ea0 */
  push32(0x12763dcdu); f_12767ea0();
  /* 12763dcd push edi */
  push32((uint32_t)(EDI));
  /* 12763dce mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12763dd5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12763dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12763ddc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12763de2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12763de4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12763de6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12763de7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12763dee mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12763df3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12763df5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12763dfb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12763dfd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12763dff stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12763e00 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12763e07 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12763e0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12763e0e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12763e14 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12763e16 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12763e18 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12763e19 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12763e1c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12763e22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763e26 jl 0x12763e2e */
  if ((C.sf!=C.of)) goto L_12763e2e;
  /* 12763e28 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763e2c jl 0x12763e36 */
  if ((C.sf!=C.of)) goto L_12763e36;
L_12763e2e:;
  /* 12763e2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763e31 jmp 0x1276414b */
  goto L_1276414b;
L_12763e36:;
  /* 12763e36 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763e3a jne 0x12763ee0 */
  if (!C.zf) goto L_12763ee0;
  /* 12763e40 push 0x1278ea34 */
  push32((uint32_t)(0x1278ea34u));
  /* 12763e45 call dword ptr [0x12793360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793360))), 0x12763e4bu);
  /* 12763e4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763e4d jle 0x12763ee0 */
  if ((C.zf||C.sf!=C.of)) goto L_12763ee0;
  /* 12763e53 cmp dword ptr [0x12790658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763e5a jne 0x12763e9e */
  if (!C.zf) goto L_12763e9e;
  /* 12763e5c push 0x1278b548 */
  push32((uint32_t)(0x1278b548u));
  /* 12763e61 call dword ptr [0x1279335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279335c))), 0x12763e67u);
  /* 12763e67 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12763e6d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763e74 je 0x12763e96 */
  if (C.zf) goto L_12763e96;
  /* 12763e76 push 0x1278b53c */
  push32((uint32_t)(0x1278b53cu));
  /* 12763e7b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12763e81 push ecx */
  push32((uint32_t)(ECX));
  /* 12763e82 call dword ptr [0x12793358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793358))), 0x12763e88u);
  /* 12763e88 mov dword ptr [0x12790658], eax */
  w32((uint32_t)(0x12790658), (EAX));
  /* 12763e8d cmp dword ptr [0x12790658], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790658))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763e94 jne 0x12763e9e */
  if (!C.zf) goto L_12763e9e;
L_12763e96:;
  /* 12763e96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763e99 jmp 0x1276414b */
  goto L_1276414b;
L_12763e9e:;
  /* 12763e9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12763ea1 push edx */
  push32((uint32_t)(EDX));
  /* 12763ea2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763ea5 push eax */
  push32((uint32_t)(EAX));
  /* 12763ea6 push 0x1278b508 */
  push32((uint32_t)(0x1278b508u));
  /* 12763eab lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12763eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12763eb2 call dword ptr [0x12790658] */
  call_ind((uint32_t)(r32((uint32_t)(0x12790658))), 0x12763eb8u);
  /* 12763eb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763ebb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12763ec1 push edx */
  push32((uint32_t)(EDX));
  /* 12763ec2 call dword ptr [0x12793354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793354))), 0x12763ec8u);
  /* 12763ec8 push 0x1278ea34 */
  push32((uint32_t)(0x1278ea34u));
  /* 12763ecd call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x12763ed3u);
  /* 12763ed3 call 0x12763cb0 */
  push32(0x12763ed8u); f_12763cb0();
  /* 12763ed8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12763edb jmp 0x1276414b */
  goto L_1276414b;
L_12763ee0:;
  /* 12763ee0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763ee4 je 0x12763f1d */
  if (C.zf) goto L_12763f1d;
  /* 12763ee6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12763eec push eax */
  push32((uint32_t)(EAX));
  /* 12763eed mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12763ef0 push ecx */
  push32((uint32_t)(ECX));
  /* 12763ef1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12763ef6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12763efc push edx */
  push32((uint32_t)(EDX));
  /* 12763efd call 0x12767da0 */
  push32(0x12763f02u); f_12767da0();
  /* 12763f02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763f05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763f07 jge 0x12763f1d */
  if ((C.sf==C.of)) goto L_12763f1d;
  /* 12763f09 push 0x1278b4dc */
  push32((uint32_t)(0x1278b4dcu));
  /* 12763f0e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12763f14 push eax */
  push32((uint32_t)(EAX));
  /* 12763f15 call 0x12767cb0 */
  push32(0x12763f1au); f_12767cb0();
  /* 12763f1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12763f1d:;
  /* 12763f1d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763f21 jne 0x12763f55 */
  if (!C.zf) goto L_12763f55;
  /* 12763f23 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763f27 je 0x12763f35 */
  if (C.zf) goto L_12763f35;
  /* 12763f29 mov dword ptr [ebp - 0x3028], 0x1278b4c8 */
  w32((uint32_t)(EBP + -0x3028), (0x1278b4c8u));
  /* 12763f33 jmp 0x12763f3f */
  goto L_12763f3f;
L_12763f35:;
  /* 12763f35 mov dword ptr [ebp - 0x3028], 0x1278b4b4 */
  w32((uint32_t)(EBP + -0x3028), (0x1278b4b4u));
L_12763f3f:;
  /* 12763f3f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12763f45 push ecx */
  push32((uint32_t)(ECX));
  /* 12763f46 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12763f4c push edx */
  push32((uint32_t)(EDX));
  /* 12763f4d call 0x12767cb0 */
  push32(0x12763f52u); f_12767cb0();
  /* 12763f52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12763f55:;
  /* 12763f55 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12763f5b push eax */
  push32((uint32_t)(EAX));
  /* 12763f5c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12763f62 push ecx */
  push32((uint32_t)(ECX));
  /* 12763f63 call 0x12767cc0 */
  push32(0x12763f68u); f_12767cc0();
  /* 12763f68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763f6b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763f6f jne 0x12763faa */
  if (!C.zf) goto L_12763faa;
  /* 12763f71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12763f74 mov eax, dword ptr [edx*4 + 0x1278ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1278ea38)));
  /* 12763f7b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12763f7e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763f80 je 0x12763f96 */
  if (C.zf) goto L_12763f96;
  /* 12763f82 push 0x1278b4b0 */
  push32((uint32_t)(0x1278b4b0u));
  /* 12763f87 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12763f8d push ecx */
  push32((uint32_t)(ECX));
  /* 12763f8e call 0x12767cc0 */
  push32(0x12763f93u); f_12767cc0();
  /* 12763f93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12763f96:;
  /* 12763f96 push 0x1278b4ac */
  push32((uint32_t)(0x1278b4acu));
  /* 12763f9b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12763fa1 push edx */
  push32((uint32_t)(EDX));
  /* 12763fa2 call 0x12767cc0 */
  push32(0x12763fa7u); f_12767cc0();
  /* 12763fa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12763faa:;
  /* 12763faa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12763fae je 0x12763ff2 */
  if (C.zf) goto L_12763ff2;
  /* 12763fb0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12763fb6 push eax */
  push32((uint32_t)(EAX));
  /* 12763fb7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12763fba push ecx */
  push32((uint32_t)(ECX));
  /* 12763fbb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12763fbe push edx */
  push32((uint32_t)(EDX));
  /* 12763fbf push 0x1278b4a0 */
  push32((uint32_t)(0x1278b4a0u));
  /* 12763fc4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12763fc9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12763fcf push eax */
  push32((uint32_t)(EAX));
  /* 12763fd0 call 0x12767bb0 */
  push32(0x12763fd5u); f_12767bb0();
  /* 12763fd5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12763fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12763fda jge 0x12763ff0 */
  if ((C.sf==C.of)) goto L_12763ff0;
  /* 12763fdc push 0x1278b4dc */
  push32((uint32_t)(0x1278b4dcu));
  /* 12763fe1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12763fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 12763fe8 call 0x12767cb0 */
  push32(0x12763fedu); f_12767cb0();
  /* 12763fed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12763ff0:;
  /* 12763ff0 jmp 0x12764008 */
  goto L_12764008;
L_12763ff2:;
  /* 12763ff2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12763ff8 push edx */
  push32((uint32_t)(EDX));
  /* 12763ff9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12763fff push eax */
  push32((uint32_t)(EAX));
  /* 12764000 call 0x12767cb0 */
  push32(0x12764005u); f_12767cb0();
  /* 12764005 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12764008:;
  /* 12764008 cmp dword ptr [0x127921a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127921a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276400f je 0x1276404c */
  if (C.zf) goto L_1276404c;
  /* 12764011 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12764017 push ecx */
  push32((uint32_t)(ECX));
  /* 12764018 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1276401e push edx */
  push32((uint32_t)(EDX));
  /* 1276401f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764022 push eax */
  push32((uint32_t)(EAX));
  /* 12764023 call dword ptr [0x127921a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127921a0))), 0x12764029u);
  /* 12764029 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276402c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276402e je 0x1276404c */
  if (C.zf) goto L_1276404c;
  /* 12764030 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764034 jne 0x12764041 */
  if (!C.zf) goto L_12764041;
  /* 12764036 push 0x1278ea34 */
  push32((uint32_t)(0x1278ea34u));
  /* 1276403b call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x12764041u);
L_12764041:;
  /* 12764041 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12764047 jmp 0x1276414b */
  goto L_1276414b;
L_1276404c:;
  /* 1276404c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276404f mov edx, dword ptr [ecx*4 + 0x1278ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278ea38)));
  /* 12764056 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12764059 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276405b je 0x1276409b */
  if (C.zf) goto L_1276409b;
  /* 1276405d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764060 cmp dword ptr [eax*4 + 0x1278ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1278ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764068 je 0x1276409b */
  if (C.zf) goto L_1276409b;
  /* 1276406a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276406c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12764072 push ecx */
  push32((uint32_t)(ECX));
  /* 12764073 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12764079 push edx */
  push32((uint32_t)(EDX));
  /* 1276407a call 0x12767b30 */
  push32(0x1276407fu); f_12767b30();
  /* 1276407f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764082 push eax */
  push32((uint32_t)(EAX));
  /* 12764083 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12764089 push eax */
  push32((uint32_t)(EAX));
  /* 1276408a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276408d mov edx, dword ptr [ecx*4 + 0x1278ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278ea44)));
  /* 12764094 push edx */
  push32((uint32_t)(EDX));
  /* 12764095 call dword ptr [0x1279334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279334c))), 0x1276409bu);
L_1276409b:;
  /* 1276409b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276409e mov ecx, dword ptr [eax*4 + 0x1278ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1278ea38)));
  /* 127640a5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 127640a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127640aa je 0x127640b9 */
  if (C.zf) goto L_127640b9;
  /* 127640ac lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 127640b2 push edx */
  push32((uint32_t)(EDX));
  /* 127640b3 call dword ptr [0x12793354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793354))), 0x127640b9u);
L_127640b9:;
  /* 127640b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127640bc mov ecx, dword ptr [eax*4 + 0x1278ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1278ea38)));
  /* 127640c3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127640c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127640c8 je 0x12764138 */
  if (C.zf) goto L_12764138;
  /* 127640ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127640ce je 0x127640ed */
  if (C.zf) goto L_127640ed;
  /* 127640d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 127640d2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 127640d8 push edx */
  push32((uint32_t)(EDX));
  /* 127640d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127640dc push eax */
  push32((uint32_t)(EAX));
  /* 127640dd call 0x12767840 */
  push32(0x127640e2u); f_12767840();
  /* 127640e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127640e5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 127640eb jmp 0x127640f7 */
  goto L_127640f7;
L_127640ed:;
  /* 127640ed mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_127640f7:;
  /* 127640f7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 127640fd push ecx */
  push32((uint32_t)(ECX));
  /* 127640fe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12764101 push edx */
  push32((uint32_t)(EDX));
  /* 12764102 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12764108 push eax */
  push32((uint32_t)(EAX));
  /* 12764109 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276410c push ecx */
  push32((uint32_t)(ECX));
  /* 1276410d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764110 push edx */
  push32((uint32_t)(EDX));
  /* 12764111 call 0x12764150 */
  push32(0x12764116u); f_12764150();
  /* 12764116 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764119 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1276411f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764123 jne 0x12764130 */
  if (!C.zf) goto L_12764130;
  /* 12764125 push 0x1278ea34 */
  push32((uint32_t)(0x1278ea34u));
  /* 1276412a call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x12764130u);
L_12764130:;
  /* 12764130 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12764136 jmp 0x1276414b */
  goto L_1276414b;
L_12764138:;
  /* 12764138 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276413c jne 0x12764149 */
  if (!C.zf) goto L_12764149;
  /* 1276413e push 0x1278ea34 */
  push32((uint32_t)(0x1278ea34u));
  /* 12764143 call dword ptr [0x12793350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793350))), 0x12764149u);
L_12764149:;
  /* 12764149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276414b:;
  /* 1276414b pop edi */
  EDI = (pop32());
  /* 1276414c mov esp, ebp */
  ESP = (EBP);
  /* 1276414e pop ebp */
  EBP = (pop32());
  /* 1276414f ret  */
  ESPCHK(0x12763dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004150 @ 0x12764150 (780 bytes, 197 insns) */
void f_12764150(void) {
  FTRACE(0x12764150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764150 push ebp */
  push32((uint32_t)(EBP));
  /* 12764151 mov ebp, esp */
  EBP = (ESP);
  /* 12764153 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12764158 call 0x12767ea0 */
  push32(0x1276415du); f_12767ea0();
L_1276415d:;
  /* 1276415d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764161 jne 0x12764188 */
  if (!C.zf) goto L_12764188;
  /* 12764163 push 0x1278b698 */
  push32((uint32_t)(0x1278b698u));
  /* 12764168 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276416a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1276416f push 0x1278b68c */
  push32((uint32_t)(0x1278b68cu));
  /* 12764174 push 2 */
  push32((uint32_t)(0x2u));
  /* 12764176 call 0x12763dc0 */
  push32(0x1276417bu); f_12763dc0();
  /* 1276417b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276417e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764181 jne 0x12764188 */
  if (!C.zf) goto L_12764188;
  /* 12764183 call 0x12763cb0 */
  push32(0x12764188u); f_12763cb0();
L_12764188:;
  /* 12764188 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276418a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276418c jne 0x1276415d */
  if (!C.zf) goto L_1276415d;
  /* 1276418e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12764193 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12764199 push ecx */
  push32((uint32_t)(ECX));
  /* 1276419a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276419c call dword ptr [0x12793364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793364))), 0x127641a2u);
  /* 127641a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127641a4 jne 0x127641ba */
  if (!C.zf) goto L_127641ba;
  /* 127641a6 push 0x1278b674 */
  push32((uint32_t)(0x1278b674u));
  /* 127641ab lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 127641b1 push edx */
  push32((uint32_t)(EDX));
  /* 127641b2 call 0x12767cb0 */
  push32(0x127641b7u); f_12767cb0();
  /* 127641b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127641ba:;
  /* 127641ba lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 127641c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127641c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127641c6 push ecx */
  push32((uint32_t)(ECX));
  /* 127641c7 call 0x12767b30 */
  push32(0x127641ccu); f_12767b30();
  /* 127641cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127641cf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127641d2 jbe 0x127641fd */
  if ((C.cf||C.zf)) goto L_127641fd;
  /* 127641d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127641d7 push edx */
  push32((uint32_t)(EDX));
  /* 127641d8 call 0x12767b30 */
  push32(0x127641ddu); f_12767b30();
  /* 127641dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127641e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127641e3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 127641e7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127641ea push 3 */
  push32((uint32_t)(0x3u));
  /* 127641ec push 0x1278b670 */
  push32((uint32_t)(0x1278b670u));
  /* 127641f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127641f4 push eax */
  push32((uint32_t)(EAX));
  /* 127641f5 call 0x12768520 */
  push32(0x127641fau); f_12768520();
  /* 127641fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127641fd:;
  /* 127641fd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12764200 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12764206 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276420d je 0x12764258 */
  if (C.zf) goto L_12764258;
  /* 1276420f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12764215 push edx */
  push32((uint32_t)(EDX));
  /* 12764216 call 0x12767b30 */
  push32(0x1276421bu); f_12767b30();
  /* 1276421b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276421e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764221 jbe 0x12764258 */
  if ((C.cf||C.zf)) goto L_12764258;
  /* 12764223 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12764229 push eax */
  push32((uint32_t)(EAX));
  /* 1276422a call 0x12767b30 */
  push32(0x1276422fu); f_12767b30();
  /* 1276422f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764232 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12764238 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1276423c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12764242 push 3 */
  push32((uint32_t)(0x3u));
  /* 12764244 push 0x1278b670 */
  push32((uint32_t)(0x1278b670u));
  /* 12764249 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1276424f push eax */
  push32((uint32_t)(EAX));
  /* 12764250 call 0x12768520 */
  push32(0x12764255u); f_12768520();
  /* 12764255 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12764258:;
  /* 12764258 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276425c jne 0x1276426a */
  if (!C.zf) goto L_1276426a;
  /* 1276425e mov dword ptr [ebp - 0x1114], 0x1278b5fc */
  w32((uint32_t)(EBP + -0x1114), (0x1278b5fcu));
  /* 12764268 jmp 0x12764274 */
  goto L_12764274;
L_1276426a:;
  /* 1276426a mov dword ptr [ebp - 0x1114], 0x1278b39c */
  w32((uint32_t)(EBP + -0x1114), (0x1278b39cu));
L_12764274:;
  /* 12764274 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12764277 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1276427a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276427c je 0x12764289 */
  if (C.zf) goto L_12764289;
  /* 1276427e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12764281 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12764287 jmp 0x12764293 */
  goto L_12764293;
L_12764289:;
  /* 12764289 mov dword ptr [ebp - 0x1118], 0x1278b39c */
  w32((uint32_t)(EBP + -0x1118), (0x1278b39cu));
L_12764293:;
  /* 12764293 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12764296 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12764299 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276429b je 0x127642af */
  if (C.zf) goto L_127642af;
  /* 1276429d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127642a1 jne 0x127642af */
  if (!C.zf) goto L_127642af;
  /* 127642a3 mov dword ptr [ebp - 0x111c], 0x1278b5ec */
  w32((uint32_t)(EBP + -0x111c), (0x1278b5ecu));
  /* 127642ad jmp 0x127642b9 */
  goto L_127642b9;
L_127642af:;
  /* 127642af mov dword ptr [ebp - 0x111c], 0x1278b39c */
  w32((uint32_t)(EBP + -0x111c), (0x1278b39cu));
L_127642b9:;
  /* 127642b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127642bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127642bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127642c1 je 0x127642cf */
  if (C.zf) goto L_127642cf;
  /* 127642c3 mov dword ptr [ebp - 0x1120], 0x1278b5e8 */
  w32((uint32_t)(EBP + -0x1120), (0x1278b5e8u));
  /* 127642cd jmp 0x127642d9 */
  goto L_127642d9;
L_127642cf:;
  /* 127642cf mov dword ptr [ebp - 0x1120], 0x1278b39c */
  w32((uint32_t)(EBP + -0x1120), (0x1278b39cu));
L_127642d9:;
  /* 127642d9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127642dd je 0x127642ea */
  if (C.zf) goto L_127642ea;
  /* 127642df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127642e2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 127642e8 jmp 0x127642f4 */
  goto L_127642f4;
L_127642ea:;
  /* 127642ea mov dword ptr [ebp - 0x1124], 0x1278b39c */
  w32((uint32_t)(EBP + -0x1124), (0x1278b39cu));
L_127642f4:;
  /* 127642f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127642f8 je 0x12764306 */
  if (C.zf) goto L_12764306;
  /* 127642fa mov dword ptr [ebp - 0x1128], 0x1278b5e0 */
  w32((uint32_t)(EBP + -0x1128), (0x1278b5e0u));
  /* 12764304 jmp 0x12764310 */
  goto L_12764310;
L_12764306:;
  /* 12764306 mov dword ptr [ebp - 0x1128], 0x1278b39c */
  w32((uint32_t)(EBP + -0x1128), (0x1278b39cu));
L_12764310:;
  /* 12764310 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764314 je 0x12764321 */
  if (C.zf) goto L_12764321;
  /* 12764316 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12764319 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1276431f jmp 0x1276432b */
  goto L_1276432b;
L_12764321:;
  /* 12764321 mov dword ptr [ebp - 0x112c], 0x1278b39c */
  w32((uint32_t)(EBP + -0x112c), (0x1278b39cu));
L_1276432b:;
  /* 1276432b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276432f je 0x1276433d */
  if (C.zf) goto L_1276433d;
  /* 12764331 mov dword ptr [ebp - 0x1130], 0x1278b5d8 */
  w32((uint32_t)(EBP + -0x1130), (0x1278b5d8u));
  /* 1276433b jmp 0x12764347 */
  goto L_12764347;
L_1276433d:;
  /* 1276433d mov dword ptr [ebp - 0x1130], 0x1278b39c */
  w32((uint32_t)(EBP + -0x1130), (0x1278b39cu));
L_12764347:;
  /* 12764347 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276434e je 0x1276435e */
  if (C.zf) goto L_1276435e;
  /* 12764350 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12764356 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1276435c jmp 0x12764368 */
  goto L_12764368;
L_1276435e:;
  /* 1276435e mov dword ptr [ebp - 0x1134], 0x1278b39c */
  w32((uint32_t)(EBP + -0x1134), (0x1278b39cu));
L_12764368:;
  /* 12764368 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276436f je 0x1276437d */
  if (C.zf) goto L_1276437d;
  /* 12764371 mov dword ptr [ebp - 0x1138], 0x1278b5cc */
  w32((uint32_t)(EBP + -0x1138), (0x1278b5ccu));
  /* 1276437b jmp 0x12764387 */
  goto L_12764387;
L_1276437d:;
  /* 1276437d mov dword ptr [ebp - 0x1138], 0x1278b39c */
  w32((uint32_t)(EBP + -0x1138), (0x1278b39cu));
L_12764387:;
  /* 12764387 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1276438d push edx */
  push32((uint32_t)(EDX));
  /* 1276438e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12764394 push eax */
  push32((uint32_t)(EAX));
  /* 12764395 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1276439b push ecx */
  push32((uint32_t)(ECX));
  /* 1276439c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 127643a2 push edx */
  push32((uint32_t)(EDX));
  /* 127643a3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 127643a9 push eax */
  push32((uint32_t)(EAX));
  /* 127643aa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 127643b0 push ecx */
  push32((uint32_t)(ECX));
  /* 127643b1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 127643b7 push edx */
  push32((uint32_t)(EDX));
  /* 127643b8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 127643be push eax */
  push32((uint32_t)(EAX));
  /* 127643bf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 127643c5 push ecx */
  push32((uint32_t)(ECX));
  /* 127643c6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 127643cc push edx */
  push32((uint32_t)(EDX));
  /* 127643cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127643d0 push eax */
  push32((uint32_t)(EAX));
  /* 127643d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127643d4 mov edx, dword ptr [ecx*4 + 0x1278ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278ea50)));
  /* 127643db push edx */
  push32((uint32_t)(EDX));
  /* 127643dc push 0x1278b578 */
  push32((uint32_t)(0x1278b578u));
  /* 127643e1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127643e6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 127643ec push eax */
  push32((uint32_t)(EAX));
  /* 127643ed call 0x12767bb0 */
  push32(0x127643f2u); f_12767bb0();
  /* 127643f2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127643f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127643f7 jge 0x1276440d */
  if ((C.sf==C.of)) goto L_1276440d;
  /* 127643f9 push 0x1278b4dc */
  push32((uint32_t)(0x1278b4dcu));
  /* 127643fe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12764404 push ecx */
  push32((uint32_t)(ECX));
  /* 12764405 call 0x12767cb0 */
  push32(0x1276440au); f_12767cb0();
  /* 1276440a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276440d:;
  /* 1276440d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12764412 push 0x1278b554 */
  push32((uint32_t)(0x1278b554u));
  /* 12764417 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1276441d push edx */
  push32((uint32_t)(EDX));
  /* 1276441e call 0x12768460 */
  push32(0x12764423u); f_12768460();
  /* 12764423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764426 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1276442c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764433 jne 0x12764446 */
  if (!C.zf) goto L_12764446;
  /* 12764435 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12764437 call 0x127681a0 */
  push32(0x1276443cu); f_127681a0();
  /* 1276443c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276443f push 3 */
  push32((uint32_t)(0x3u));
  /* 12764441 call 0x127644c0 */
  push32(0x12764446u); f_127644c0();
L_12764446:;
  /* 12764446 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276444d jne 0x12764456 */
  if (!C.zf) goto L_12764456;
  /* 1276444f mov eax, 1 */
  EAX = (0x1u);
  /* 12764454 jmp 0x12764458 */
  goto L_12764458;
L_12764456:;
  /* 12764456 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12764458:;
  /* 12764458 mov esp, ebp */
  ESP = (EBP);
  /* 1276445a pop ebp */
  EBP = (pop32());
  /* 1276445b ret  */
  ESPCHK(0x12764150u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x12764460 (56 bytes, 15 insns) */
void f_12764460(void) {
  FTRACE(0x12764460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764460 push ebp */
  push32((uint32_t)(EBP));
  /* 12764461 mov ebp, esp */
  EBP = (ESP);
  /* 12764463 cmp dword ptr [0x1279219c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1279219c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276446a je 0x12764472 */
  if (C.zf) goto L_12764472;
  /* 1276446c call dword ptr [0x1279219c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279219c))), 0x12764472u);
L_12764472:;
  /* 12764472 push 0x1278e418 */
  push32((uint32_t)(0x1278e418u));
  /* 12764477 push 0x1278e208 */
  push32((uint32_t)(0x1278e208u));
  /* 1276447c call 0x12764630 */
  push32(0x12764481u); f_12764630();
  /* 12764481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764484 push 0x1278e104 */
  push32((uint32_t)(0x1278e104u));
  /* 12764489 push 0x1278e000 */
  push32((uint32_t)(0x1278e000u));
  /* 1276448e call 0x12764630 */
  push32(0x12764493u); f_12764630();
  /* 12764493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764496 pop ebp */
  EBP = (pop32());
  /* 12764497 ret  */
  ESPCHK(0x12764460u, _esp0);
  ESP += 4; return;
}

/* FUN_100044a0 @ 0x127644a0 (21 bytes, 10 insns) */
void f_127644a0(void) {
  FTRACE(0x127644a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127644a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127644a1 mov ebp, esp */
  EBP = (ESP);
  /* 127644a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127644a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127644a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127644aa push eax */
  push32((uint32_t)(EAX));
  /* 127644ab call 0x12764520 */
  push32(0x127644b0u); f_12764520();
  /* 127644b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127644b3 pop ebp */
  EBP = (pop32());
  /* 127644b4 ret  */
  ESPCHK(0x127644a0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x127644c0 (21 bytes, 10 insns) */
void f_127644c0(void) {
  FTRACE(0x127644c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127644c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127644c1 mov ebp, esp */
  EBP = (ESP);
  /* 127644c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127644c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 127644c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127644ca push eax */
  push32((uint32_t)(EAX));
  /* 127644cb call 0x12764520 */
  push32(0x127644d0u); f_12764520();
  /* 127644d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127644d3 pop ebp */
  EBP = (pop32());
  /* 127644d4 ret  */
  ESPCHK(0x127644c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044e0 @ 0x127644e0 (19 bytes, 9 insns) */
void f_127644e0(void) {
  FTRACE(0x127644e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127644e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127644e1 mov ebp, esp */
  EBP = (ESP);
  /* 127644e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 127644e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127644e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127644e9 call 0x12764520 */
  push32(0x127644eeu); f_12764520();
  /* 127644ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127644f1 pop ebp */
  EBP = (pop32());
  /* 127644f2 ret  */
  ESPCHK(0x127644e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004500 @ 0x12764500 (19 bytes, 9 insns) */
void f_12764500(void) {
  FTRACE(0x12764500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764500 push ebp */
  push32((uint32_t)(EBP));
  /* 12764501 mov ebp, esp */
  EBP = (ESP);
  /* 12764503 push 1 */
  push32((uint32_t)(0x1u));
  /* 12764505 push 1 */
  push32((uint32_t)(0x1u));
  /* 12764507 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764509 call 0x12764520 */
  push32(0x1276450eu); f_12764520();
  /* 1276450e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764511 pop ebp */
  EBP = (pop32());
  /* 12764512 ret  */
  ESPCHK(0x12764500u, _esp0);
  ESP += 4; return;
}

/* FUN_10004520 @ 0x12764520 (227 bytes, 61 insns) */
void f_12764520(void) {
  FTRACE(0x12764520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764520 push ebp */
  push32((uint32_t)(EBP));
  /* 12764521 mov ebp, esp */
  EBP = (ESP);
  /* 12764523 push ecx */
  push32((uint32_t)(ECX));
  /* 12764524 call 0x12764610 */
  push32(0x12764529u); f_12764610();
  /* 12764529 cmp dword ptr [0x1279069c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1279069c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764530 jne 0x12764543 */
  if (!C.zf) goto L_12764543;
  /* 12764532 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764535 push eax */
  push32((uint32_t)(EAX));
  /* 12764536 call dword ptr [0x12793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793370))), 0x1276453cu);
  /* 1276453c push eax */
  push32((uint32_t)(EAX));
  /* 1276453d call dword ptr [0x1279336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279336c))), 0x12764543u);
L_12764543:;
  /* 12764543 mov dword ptr [0x12790698], 1 */
  w32((uint32_t)(0x12790698), (0x1u));
  /* 1276454d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12764550 mov byte ptr [0x12790694], cl */
  w8((uint32_t)(0x12790694), (CL));
  /* 12764556 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276455a jne 0x127645a3 */
  if (!C.zf) goto L_127645a3;
  /* 1276455c cmp dword ptr [0x12792198], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764563 je 0x12764591 */
  if (C.zf) goto L_12764591;
  /* 12764565 mov edx, dword ptr [0x12792194] */
  EDX = (r32((uint32_t)(0x12792194)));
  /* 1276456b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1276456e:;
  /* 1276456e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764571 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12764574 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12764577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276457a cmp ecx, dword ptr [0x12792198] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12792198))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764580 jb 0x12764591 */
  if (C.cf) goto L_12764591;
  /* 12764582 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764585 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764588 je 0x1276458f */
  if (C.zf) goto L_1276458f;
  /* 1276458a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276458d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1276458fu);
L_1276458f:;
  /* 1276458f jmp 0x1276456e */
  goto L_1276456e;
L_12764591:;
  /* 12764591 push 0x1278e724 */
  push32((uint32_t)(0x1278e724u));
  /* 12764596 push 0x1278e51c */
  push32((uint32_t)(0x1278e51cu));
  /* 1276459b call 0x12764630 */
  push32(0x127645a0u); f_12764630();
  /* 127645a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127645a3:;
  /* 127645a3 push 0x1278e92c */
  push32((uint32_t)(0x1278e92cu));
  /* 127645a8 push 0x1278e828 */
  push32((uint32_t)(0x1278e828u));
  /* 127645ad call 0x12764630 */
  push32(0x127645b2u); f_12764630();
  /* 127645b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127645b5 cmp dword ptr [0x127906a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127906a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127645bc jne 0x127645de */
  if (!C.zf) goto L_127645de;
  /* 127645be push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 127645c0 call 0x12766210 */
  push32(0x127645c5u); f_12766210();
  /* 127645c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127645c8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 127645cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127645cd je 0x127645de */
  if (C.zf) goto L_127645de;
  /* 127645cf mov dword ptr [0x127906a0], 1 */
  w32((uint32_t)(0x127906a0), (0x1u));
  /* 127645d9 call 0x12766b20 */
  push32(0x127645deu); f_12766b20();
L_127645de:;
  /* 127645de cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127645e2 je 0x127645eb */
  if (C.zf) goto L_127645eb;
  /* 127645e4 call 0x12764620 */
  push32(0x127645e9u); f_12764620();
  /* 127645e9 jmp 0x127645ff */
  goto L_127645ff;
L_127645eb:;
  /* 127645eb mov dword ptr [0x1279069c], 1 */
  w32((uint32_t)(0x1279069c), (0x1u));
  /* 127645f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127645f8 push ecx */
  push32((uint32_t)(ECX));
  /* 127645f9 call dword ptr [0x12793368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793368))), 0x127645ffu);
L_127645ff:;
  /* 127645ff mov esp, ebp */
  ESP = (EBP);
  /* 12764601 pop ebp */
  EBP = (pop32());
  /* 12764602 ret  */
  ESPCHK(0x12764520u, _esp0);
  ESP += 4; return;
}

/* FUN_10004610 @ 0x12764610 (15 bytes, 7 insns) */
void f_12764610(void) {
  FTRACE(0x12764610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764610 push ebp */
  push32((uint32_t)(EBP));
  /* 12764611 mov ebp, esp */
  EBP = (ESP);
  /* 12764613 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12764615 call 0x12768700 */
  push32(0x1276461au); f_12768700();
  /* 1276461a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276461d pop ebp */
  EBP = (pop32());
  /* 1276461e ret  */
  ESPCHK(0x12764610u, _esp0);
  ESP += 4; return;
}

/* FUN_10004620 @ 0x12764620 (15 bytes, 7 insns) */
void f_12764620(void) {
  FTRACE(0x12764620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764620 push ebp */
  push32((uint32_t)(EBP));
  /* 12764621 mov ebp, esp */
  EBP = (ESP);
  /* 12764623 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12764625 call 0x127687a0 */
  push32(0x1276462au); f_127687a0();
  /* 1276462a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276462d pop ebp */
  EBP = (pop32());
  /* 1276462e ret  */
  ESPCHK(0x12764620u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12764630 (37 bytes, 16 insns) */
void f_12764630(void) {
  FTRACE(0x12764630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764630 push ebp */
  push32((uint32_t)(EBP));
  /* 12764631 mov ebp, esp */
  EBP = (ESP);
L_12764633:;
  /* 12764633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764636 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764639 jae 0x12764653 */
  if (!C.cf) goto L_12764653;
  /* 1276463b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276463e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764641 je 0x12764648 */
  if (C.zf) goto L_12764648;
  /* 12764643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764646 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12764648u);
L_12764648:;
  /* 12764648 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276464b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276464e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12764651 jmp 0x12764633 */
  goto L_12764633;
L_12764653:;
  /* 12764653 pop ebp */
  EBP = (pop32());
  /* 12764654 ret  */
  ESPCHK(0x12764630u, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x12764660 (130 bytes, 42 insns) */
void f_12764660(void) {
  FTRACE(0x12764660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764660 push ebp */
  push32((uint32_t)(EBP));
  /* 12764661 mov ebp, esp */
  EBP = (ESP);
  /* 12764663 push ecx */
  push32((uint32_t)(ECX));
  /* 12764664 call 0x12768620 */
  push32(0x12764669u); f_12768620();
  /* 12764669 call dword ptr [0x1279337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279337c))), 0x1276466fu);
  /* 1276466f mov dword ptr [0x1278ea5c], eax */
  w32((uint32_t)(0x1278ea5c), (EAX));
  /* 12764674 cmp dword ptr [0x1278ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1278ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276467b jne 0x12764681 */
  if (!C.zf) goto L_12764681;
  /* 1276467d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276467f jmp 0x127646de */
  goto L_127646de;
L_12764681:;
  /* 12764681 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12764683 push 0x1278b6b0 */
  push32((uint32_t)(0x1278b6b0u));
  /* 12764688 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276468a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1276468c push 1 */
  push32((uint32_t)(0x1u));
  /* 1276468e call 0x12765110 */
  push32(0x12764693u); f_12765110();
  /* 12764693 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764696 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12764699 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276469d je 0x127646b4 */
  if (C.zf) goto L_127646b4;
  /* 1276469f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127646a2 push eax */
  push32((uint32_t)(EAX));
  /* 127646a3 mov ecx, dword ptr [0x1278ea5c] */
  ECX = (r32((uint32_t)(0x1278ea5c)));
  /* 127646a9 push ecx */
  push32((uint32_t)(ECX));
  /* 127646aa call dword ptr [0x12793378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793378))), 0x127646b0u);
  /* 127646b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127646b2 jne 0x127646b8 */
  if (!C.zf) goto L_127646b8;
L_127646b4:;
  /* 127646b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127646b6 jmp 0x127646de */
  goto L_127646de;
L_127646b8:;
  /* 127646b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127646bb push edx */
  push32((uint32_t)(EDX));
  /* 127646bc call 0x12764720 */
  push32(0x127646c1u); f_12764720();
  /* 127646c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127646c4 call dword ptr [0x12793374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793374))), 0x127646cau);
  /* 127646ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127646cd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127646cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127646d2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 127646d9 mov eax, 1 */
  EAX = (0x1u);
L_127646de:;
  /* 127646de mov esp, ebp */
  ESP = (EBP);
  /* 127646e0 pop ebp */
  EBP = (pop32());
  /* 127646e1 ret  */
  ESPCHK(0x12764660u, _esp0);
  ESP += 4; return;
}

/* FUN_100046f0 @ 0x127646f0 (41 bytes, 11 insns) */
void f_127646f0(void) {
  FTRACE(0x127646f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127646f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127646f1 mov ebp, esp */
  EBP = (ESP);
  /* 127646f3 call 0x12768660 */
  push32(0x127646f8u); f_12768660();
  /* 127646f8 cmp dword ptr [0x1278ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1278ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127646ff je 0x12764717 */
  if (C.zf) goto L_12764717;
  /* 12764701 mov eax, dword ptr [0x1278ea5c] */
  EAX = (r32((uint32_t)(0x1278ea5c)));
  /* 12764706 push eax */
  push32((uint32_t)(EAX));
  /* 12764707 call dword ptr [0x127932a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127932a0))), 0x1276470du);
  /* 1276470d mov dword ptr [0x1278ea5c], 0xffffffff */
  w32((uint32_t)(0x1278ea5c), (0xffffffffu));
L_12764717:;
  /* 12764717 pop ebp */
  EBP = (pop32());
  /* 12764718 ret  */
  ESPCHK(0x127646f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004720 @ 0x12764720 (25 bytes, 8 insns) */
void f_12764720(void) {
  FTRACE(0x12764720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764720 push ebp */
  push32((uint32_t)(EBP));
  /* 12764721 mov ebp, esp */
  EBP = (ESP);
  /* 12764723 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764726 mov dword ptr [eax + 0x50], 0x1278ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1278ec00u));
  /* 1276472d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764730 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12764737 pop ebp */
  EBP = (pop32());
  /* 12764738 ret  */
  ESPCHK(0x12764720u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x12764740 (152 bytes, 48 insns) */
void f_12764740(void) {
  FTRACE(0x12764740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764740 push ebp */
  push32((uint32_t)(EBP));
  /* 12764741 mov ebp, esp */
  EBP = (ESP);
  /* 12764743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12764746 call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x1276474cu);
  /* 1276474c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276474f mov eax, dword ptr [0x1278ea5c] */
  EAX = (r32((uint32_t)(0x1278ea5c)));
  /* 12764754 push eax */
  push32((uint32_t)(EAX));
  /* 12764755 call dword ptr [0x12793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793384))), 0x1276475bu);
  /* 1276475b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276475e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764762 jne 0x127647c7 */
  if (!C.zf) goto L_127647c7;
  /* 12764764 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12764769 push 0x1278b6b0 */
  push32((uint32_t)(0x1278b6b0u));
  /* 1276476e push 2 */
  push32((uint32_t)(0x2u));
  /* 12764770 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12764772 push 1 */
  push32((uint32_t)(0x1u));
  /* 12764774 call 0x12765110 */
  push32(0x12764779u); f_12765110();
  /* 12764779 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276477c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276477f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764783 je 0x127647bd */
  if (C.zf) goto L_127647bd;
  /* 12764785 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764788 push ecx */
  push32((uint32_t)(ECX));
  /* 12764789 mov edx, dword ptr [0x1278ea5c] */
  EDX = (r32((uint32_t)(0x1278ea5c)));
  /* 1276478f push edx */
  push32((uint32_t)(EDX));
  /* 12764790 call dword ptr [0x12793378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793378))), 0x12764796u);
  /* 12764796 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12764798 je 0x127647bd */
  if (C.zf) goto L_127647bd;
  /* 1276479a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276479d push eax */
  push32((uint32_t)(EAX));
  /* 1276479e call 0x12764720 */
  push32(0x127647a3u); f_12764720();
  /* 127647a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127647a6 call dword ptr [0x12793374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793374))), 0x127647acu);
  /* 127647ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127647af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127647b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127647b4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 127647bb jmp 0x127647c7 */
  goto L_127647c7;
L_127647bd:;
  /* 127647bd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 127647bf call 0x12763c70 */
  push32(0x127647c4u); f_12763c70();
  /* 127647c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127647c7:;
  /* 127647c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127647ca push eax */
  push32((uint32_t)(EAX));
  /* 127647cb call dword ptr [0x12793380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793380))), 0x127647d1u);
  /* 127647d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127647d4 mov esp, ebp */
  ESP = (EBP);
  /* 127647d6 pop ebp */
  EBP = (pop32());
  /* 127647d7 ret  */
  ESPCHK(0x12764740u, _esp0);
  ESP += 4; return;
}

/* FUN_100047e0 @ 0x127647e0 (263 bytes, 86 insns) */
void f_127647e0(void) {
  FTRACE(0x127647e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127647e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127647e1 mov ebp, esp */
  EBP = (ESP);
  /* 127647e3 cmp dword ptr [0x1278ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1278ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127647ea je 0x127648e5 */
  if (C.zf) goto L_127648e5;
  /* 127647f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127647f4 jne 0x12764805 */
  if (!C.zf) goto L_12764805;
  /* 127647f6 mov eax, dword ptr [0x1278ea5c] */
  EAX = (r32((uint32_t)(0x1278ea5c)));
  /* 127647fb push eax */
  push32((uint32_t)(EAX));
  /* 127647fc call dword ptr [0x12793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793384))), 0x12764802u);
  /* 12764802 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12764805:;
  /* 12764805 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764809 je 0x127648d6 */
  if (C.zf) goto L_127648d6;
  /* 1276480f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764812 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764816 je 0x12764829 */
  if (C.zf) goto L_12764829;
  /* 12764818 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276481a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276481d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12764820 push eax */
  push32((uint32_t)(EAX));
  /* 12764821 call 0x12765790 */
  push32(0x12764826u); f_12765790();
  /* 12764826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12764829:;
  /* 12764829 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276482c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764830 je 0x12764843 */
  if (C.zf) goto L_12764843;
  /* 12764832 push 2 */
  push32((uint32_t)(0x2u));
  /* 12764834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764837 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1276483a push eax */
  push32((uint32_t)(EAX));
  /* 1276483b call 0x12765790 */
  push32(0x12764840u); f_12765790();
  /* 12764840 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12764843:;
  /* 12764843 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764846 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276484a je 0x1276485d */
  if (C.zf) goto L_1276485d;
  /* 1276484c push 2 */
  push32((uint32_t)(0x2u));
  /* 1276484e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764851 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12764854 push eax */
  push32((uint32_t)(EAX));
  /* 12764855 call 0x12765790 */
  push32(0x1276485au); f_12765790();
  /* 1276485a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276485d:;
  /* 1276485d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764860 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764864 je 0x12764877 */
  if (C.zf) goto L_12764877;
  /* 12764866 push 2 */
  push32((uint32_t)(0x2u));
  /* 12764868 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276486b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1276486e push eax */
  push32((uint32_t)(EAX));
  /* 1276486f call 0x12765790 */
  push32(0x12764874u); f_12765790();
  /* 12764874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12764877:;
  /* 12764877 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276487a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276487e je 0x12764891 */
  if (C.zf) goto L_12764891;
  /* 12764880 push 2 */
  push32((uint32_t)(0x2u));
  /* 12764882 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764885 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12764888 push eax */
  push32((uint32_t)(EAX));
  /* 12764889 call 0x12765790 */
  push32(0x1276488eu); f_12765790();
  /* 1276488e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12764891:;
  /* 12764891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764894 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764898 je 0x127648ab */
  if (C.zf) goto L_127648ab;
  /* 1276489a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276489c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276489f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 127648a2 push eax */
  push32((uint32_t)(EAX));
  /* 127648a3 call 0x12765790 */
  push32(0x127648a8u); f_12765790();
  /* 127648a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127648ab:;
  /* 127648ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127648ae cmp dword ptr [ecx + 0x50], 0x1278ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1278ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127648b5 je 0x127648c8 */
  if (C.zf) goto L_127648c8;
  /* 127648b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127648b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127648bc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 127648bf push eax */
  push32((uint32_t)(EAX));
  /* 127648c0 call 0x12765790 */
  push32(0x127648c5u); f_12765790();
  /* 127648c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127648c8:;
  /* 127648c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 127648ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127648cd push ecx */
  push32((uint32_t)(ECX));
  /* 127648ce call 0x12765790 */
  push32(0x127648d3u); f_12765790();
  /* 127648d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127648d6:;
  /* 127648d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127648d8 mov edx, dword ptr [0x1278ea5c] */
  EDX = (r32((uint32_t)(0x1278ea5c)));
  /* 127648de push edx */
  push32((uint32_t)(EDX));
  /* 127648df call dword ptr [0x12793378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793378))), 0x127648e5u);
L_127648e5:;
  /* 127648e5 pop ebp */
  EBP = (pop32());
  /* 127648e6 ret  */
  ESPCHK(0x127647e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100048f0 @ 0x127648f0 (11 bytes, 5 insns) */
void f_127648f0(void) {
  FTRACE(0x127648f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127648f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127648f1 mov ebp, esp */
  EBP = (ESP);
  /* 127648f3 call dword ptr [0x12793374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793374))), 0x127648f9u);
  /* 127648f9 pop ebp */
  EBP = (pop32());
  /* 127648fa ret  */
  ESPCHK(0x127648f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004900 @ 0x12764900 (11 bytes, 5 insns) */
void f_12764900(void) {
  FTRACE(0x12764900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764900 push ebp */
  push32((uint32_t)(EBP));
  /* 12764901 mov ebp, esp */
  EBP = (ESP);
  /* 12764903 call dword ptr [0x1279338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279338c))), 0x12764909u);
  /* 12764909 pop ebp */
  EBP = (pop32());
  /* 1276490a ret  */
  ESPCHK(0x12764900u, _esp0);
  ESP += 4; return;
}

/* FUN_10004910 @ 0x12764910 (804 bytes, 236 insns) */
void f_12764910(void) {
  FTRACE(0x12764910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764910 push ebp */
  push32((uint32_t)(EBP));
  /* 12764911 mov ebp, esp */
  EBP = (ESP);
  /* 12764913 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12764916 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1276491b push 0x1278b6bc */
  push32((uint32_t)(0x1278b6bcu));
  /* 12764920 push 2 */
  push32((uint32_t)(0x2u));
  /* 12764922 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12764927 call 0x12764d00 */
  push32(0x1276492cu); f_12764d00();
  /* 1276492c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276492f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12764932 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764936 jne 0x12764942 */
  if (!C.zf) goto L_12764942;
  /* 12764938 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1276493a call 0x12763c70 */
  push32(0x1276493fu); f_12763c70();
  /* 1276493f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12764942:;
  /* 12764942 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764945 mov dword ptr [0x12792040], eax */
  w32((uint32_t)(0x12792040), (EAX));
  /* 1276494a mov dword ptr [0x1279217c], 0x20 */
  w32((uint32_t)(0x1279217c), (0x20u));
  /* 12764954 jmp 0x1276495f */
  goto L_1276495f;
L_12764956:;
  /* 12764956 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764959 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276495c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1276495f:;
  /* 1276495f mov edx, dword ptr [0x12792040] */
  EDX = (r32((uint32_t)(0x12792040)));
  /* 12764965 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276496b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276496e jae 0x12764993 */
  if (!C.cf) goto L_12764993;
  /* 12764970 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764973 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12764977 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1276497a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12764980 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764983 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12764987 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1276498a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12764991 jmp 0x12764956 */
  goto L_12764956;
L_12764993:;
  /* 12764993 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12764996 push ecx */
  push32((uint32_t)(ECX));
  /* 12764997 call dword ptr [0x12793398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793398))), 0x1276499du);
  /* 1276499d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 127649a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127649a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127649a8 je 0x12764b35 */
  if (C.zf) goto L_12764b35;
  /* 127649ae cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127649b2 je 0x12764b35 */
  if (C.zf) goto L_12764b35;
  /* 127649b8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127649bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 127649bd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 127649c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127649c3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127649c6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127649c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127649cc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127649cf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 127649d2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127649d9 jge 0x127649e3 */
  if ((C.sf==C.of)) goto L_127649e3;
  /* 127649db mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 127649de mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 127649e1 jmp 0x127649ea */
  goto L_127649ea;
L_127649e3:;
  /* 127649e3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_127649ea:;
  /* 127649ea mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 127649ed mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 127649f0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 127649f7 jmp 0x12764a02 */
  goto L_12764a02;
L_127649f9:;
  /* 127649f9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 127649fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127649ff mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12764a02:;
  /* 12764a02 mov ecx, dword ptr [0x1279217c] */
  ECX = (r32((uint32_t)(0x1279217c)));
  /* 12764a08 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764a0b jge 0x12764aa2 */
  if ((C.sf==C.of)) goto L_12764aa2;
  /* 12764a11 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12764a16 push 0x1278b6bc */
  push32((uint32_t)(0x1278b6bcu));
  /* 12764a1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12764a1d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12764a22 call 0x12764d00 */
  push32(0x12764a27u); f_12764d00();
  /* 12764a27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764a2a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12764a2d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764a31 jne 0x12764a3e */
  if (!C.zf) goto L_12764a3e;
  /* 12764a33 mov edx, dword ptr [0x1279217c] */
  EDX = (r32((uint32_t)(0x1279217c)));
  /* 12764a39 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12764a3c jmp 0x12764aa2 */
  goto L_12764aa2;
L_12764a3e:;
  /* 12764a3e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12764a41 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764a44 mov dword ptr [eax*4 + 0x12792040], ecx */
  w32((uint32_t)(EAX*4 + 0x12792040), (ECX));
  /* 12764a4b mov edx, dword ptr [0x1279217c] */
  EDX = (r32((uint32_t)(0x1279217c)));
  /* 12764a51 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764a54 mov dword ptr [0x1279217c], edx */
  w32((uint32_t)(0x1279217c), (EDX));
  /* 12764a5a jmp 0x12764a65 */
  goto L_12764a65;
L_12764a5c:;
  /* 12764a5c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764a5f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764a62 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12764a65:;
  /* 12764a65 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12764a68 mov edx, dword ptr [ecx*4 + 0x12792040] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12792040)));
  /* 12764a6f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764a75 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764a78 jae 0x12764a9d */
  if (!C.cf) goto L_12764a9d;
  /* 12764a7a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764a7d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12764a81 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764a84 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12764a8a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764a8d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12764a91 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764a94 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12764a9b jmp 0x12764a5c */
  goto L_12764a5c;
L_12764a9d:;
  /* 12764a9d jmp 0x127649f9 */
  goto L_127649f9;
L_12764aa2:;
  /* 12764aa2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12764aa9 jmp 0x12764ac6 */
  goto L_12764ac6;
L_12764aab:;
  /* 12764aab mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12764aae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764ab1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12764ab4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764ab7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764aba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12764abd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12764ac0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764ac3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12764ac6:;
  /* 12764ac6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12764ac9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764acc jge 0x12764b35 */
  if ((C.sf==C.of)) goto L_12764b35;
  /* 12764ace mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12764ad1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764ad4 je 0x12764b30 */
  if (C.zf) goto L_12764b30;
  /* 12764ad6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764ad9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12764adc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12764adf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12764ae1 je 0x12764b30 */
  if (C.zf) goto L_12764b30;
  /* 12764ae3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764ae6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12764ae9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12764aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12764aee jne 0x12764b00 */
  if (!C.zf) goto L_12764b00;
  /* 12764af0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12764af3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12764af5 push edx */
  push32((uint32_t)(EDX));
  /* 12764af6 call dword ptr [0x12793394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793394))), 0x12764afcu);
  /* 12764afc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12764afe je 0x12764b30 */
  if (C.zf) goto L_12764b30;
L_12764b00:;
  /* 12764b00 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12764b03 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12764b06 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12764b09 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12764b0c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12764b0f mov edx, dword ptr [eax*4 + 0x12792040] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 12764b16 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764b18 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12764b1b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764b1e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12764b21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12764b23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12764b25 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764b28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764b2b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12764b2d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12764b30:;
  /* 12764b30 jmp 0x12764aab */
  goto L_12764aab;
L_12764b35:;
  /* 12764b35 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12764b3c jmp 0x12764b47 */
  goto L_12764b47;
L_12764b3e:;
  /* 12764b3e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12764b41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764b44 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12764b47:;
  /* 12764b47 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764b4b jge 0x12764c24 */
  if ((C.sf==C.of)) goto L_12764c24;
  /* 12764b51 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12764b54 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12764b57 mov edx, dword ptr [0x12792040] */
  EDX = (r32((uint32_t)(0x12792040)));
  /* 12764b5d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764b5f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12764b62 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764b65 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764b68 jne 0x12764c10 */
  if (!C.zf) goto L_12764c10;
  /* 12764b6e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764b71 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12764b75 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764b79 jne 0x12764b84 */
  if (!C.zf) goto L_12764b84;
  /* 12764b7b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12764b82 jmp 0x12764b94 */
  goto L_12764b94;
L_12764b84:;
  /* 12764b84 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12764b87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12764b8a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12764b8c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12764b8e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764b91 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12764b94:;
  /* 12764b94 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12764b97 push eax */
  push32((uint32_t)(EAX));
  /* 12764b98 call dword ptr [0x12793348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793348))), 0x12764b9eu);
  /* 12764b9e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12764ba1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764ba5 je 0x12764bff */
  if (C.zf) goto L_12764bff;
  /* 12764ba7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12764baa push ecx */
  push32((uint32_t)(ECX));
  /* 12764bab call dword ptr [0x12793394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793394))), 0x12764bb1u);
  /* 12764bb1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12764bb4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764bb8 je 0x12764bff */
  if (C.zf) goto L_12764bff;
  /* 12764bba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764bbd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12764bc0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12764bc2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12764bc5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12764bcb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764bce jne 0x12764be0 */
  if (!C.zf) goto L_12764be0;
  /* 12764bd0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764bd3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12764bd6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12764bd8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764bdb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12764bde jmp 0x12764bfd */
  goto L_12764bfd;
L_12764be0:;
  /* 12764be0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12764be3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12764be9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764bec jne 0x12764bfd */
  if (!C.zf) goto L_12764bfd;
  /* 12764bee mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764bf1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12764bf4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12764bf7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764bfa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12764bfd:;
  /* 12764bfd jmp 0x12764c0e */
  goto L_12764c0e;
L_12764bff:;
  /* 12764bff mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764c02 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12764c05 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12764c08 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764c0b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12764c0e:;
  /* 12764c0e jmp 0x12764c1f */
  goto L_12764c1f;
L_12764c10:;
  /* 12764c10 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764c13 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12764c16 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12764c19 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12764c1c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12764c1f:;
  /* 12764c1f jmp 0x12764b3e */
  goto L_12764b3e;
L_12764c24:;
  /* 12764c24 mov eax, dword ptr [0x1279217c] */
  EAX = (r32((uint32_t)(0x1279217c)));
  /* 12764c29 push eax */
  push32((uint32_t)(EAX));
  /* 12764c2a call dword ptr [0x12793390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793390))), 0x12764c30u);
  /* 12764c30 mov esp, ebp */
  ESP = (EBP);
  /* 12764c32 pop ebp */
  EBP = (pop32());
  /* 12764c33 ret  */
  ESPCHK(0x12764910u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12764c40 (155 bytes, 45 insns) */
void f_12764c40(void) {
  FTRACE(0x12764c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12764c41 mov ebp, esp */
  EBP = (ESP);
  /* 12764c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12764c46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12764c4d jmp 0x12764c58 */
  goto L_12764c58;
L_12764c4f:;
  /* 12764c4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12764c52 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764c55 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12764c58:;
  /* 12764c58 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764c5c jge 0x12764cd7 */
  if ((C.sf==C.of)) goto L_12764cd7;
  /* 12764c5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12764c61 cmp dword ptr [ecx*4 + 0x12792040], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12792040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764c69 je 0x12764cd2 */
  if (C.zf) goto L_12764cd2;
  /* 12764c6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12764c6e mov eax, dword ptr [edx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 12764c75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12764c78 jmp 0x12764c83 */
  goto L_12764c83;
L_12764c7a:;
  /* 12764c7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764c7d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764c80 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12764c83:;
  /* 12764c83 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12764c86 mov eax, dword ptr [edx*4 + 0x12792040] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12792040)));
  /* 12764c8d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764c92 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764c95 jae 0x12764caf */
  if (!C.cf) goto L_12764caf;
  /* 12764c97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764c9a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764c9e je 0x12764cad */
  if (C.zf) goto L_12764cad;
  /* 12764ca0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764ca3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764ca6 push edx */
  push32((uint32_t)(EDX));
  /* 12764ca7 call dword ptr [0x1279339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279339c))), 0x12764cadu);
L_12764cad:;
  /* 12764cad jmp 0x12764c7a */
  goto L_12764c7a;
L_12764caf:;
  /* 12764caf push 2 */
  push32((uint32_t)(0x2u));
  /* 12764cb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12764cb4 mov ecx, dword ptr [eax*4 + 0x12792040] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12792040)));
  /* 12764cbb push ecx */
  push32((uint32_t)(ECX));
  /* 12764cbc call 0x12765790 */
  push32(0x12764cc1u); f_12765790();
  /* 12764cc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764cc4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12764cc7 mov dword ptr [edx*4 + 0x12792040], 0 */
  w32((uint32_t)(EDX*4 + 0x12792040), (0x0u));
L_12764cd2:;
  /* 12764cd2 jmp 0x12764c4f */
  goto L_12764c4f;
L_12764cd7:;
  /* 12764cd7 mov esp, ebp */
  ESP = (EBP);
  /* 12764cd9 pop ebp */
  EBP = (pop32());
  /* 12764cda ret  */
  ESPCHK(0x12764c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ce0 @ 0x12764ce0 (29 bytes, 13 insns) */
void f_12764ce0(void) {
  FTRACE(0x12764ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12764ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12764ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764ce7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12764ce9 mov eax, dword ptr [0x12790848] */
  EAX = (r32((uint32_t)(0x12790848)));
  /* 12764cee push eax */
  push32((uint32_t)(EAX));
  /* 12764cef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 12764cf3 call 0x12764d50 */
  push32(0x12764cf8u); f_12764d50();
  /* 12764cf8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764cfb pop ebp */
  EBP = (pop32());
  /* 12764cfc ret  */
  ESPCHK(0x12764ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d00 @ 0x12764d00 (35 bytes, 16 insns) */
void f_12764d00(void) {
  FTRACE(0x12764d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764d00 push ebp */
  push32((uint32_t)(EBP));
  /* 12764d01 mov ebp, esp */
  EBP = (ESP);
  /* 12764d03 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12764d06 push eax */
  push32((uint32_t)(EAX));
  /* 12764d07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12764d0a push ecx */
  push32((uint32_t)(ECX));
  /* 12764d0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12764d0e push edx */
  push32((uint32_t)(EDX));
  /* 12764d0f mov eax, dword ptr [0x12790848] */
  EAX = (r32((uint32_t)(0x12790848)));
  /* 12764d14 push eax */
  push32((uint32_t)(EAX));
  /* 12764d15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764d18 push ecx */
  push32((uint32_t)(ECX));
  /* 12764d19 call 0x12764d50 */
  push32(0x12764d1eu); f_12764d50();
  /* 12764d1e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764d21 pop ebp */
  EBP = (pop32());
  /* 12764d22 ret  */
  ESPCHK(0x12764d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d30 @ 0x12764d30 (27 bytes, 13 insns) */
void f_12764d30(void) {
  FTRACE(0x12764d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12764d31 mov ebp, esp */
  EBP = (ESP);
  /* 12764d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12764d39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12764d3c push eax */
  push32((uint32_t)(EAX));
  /* 12764d3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764d40 push ecx */
  push32((uint32_t)(ECX));
  /* 12764d41 call 0x12764d50 */
  push32(0x12764d46u); f_12764d50();
  /* 12764d46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764d49 pop ebp */
  EBP = (pop32());
  /* 12764d4a ret  */
  ESPCHK(0x12764d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d50 @ 0x12764d50 (94 bytes, 38 insns) */
void f_12764d50(void) {
  FTRACE(0x12764d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12764d51 mov ebp, esp */
  EBP = (ESP);
  /* 12764d53 push ecx */
  push32((uint32_t)(ECX));
L_12764d54:;
  /* 12764d54 push 9 */
  push32((uint32_t)(0x9u));
  /* 12764d56 call 0x12768700 */
  push32(0x12764d5bu); f_12768700();
  /* 12764d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764d5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12764d61 push eax */
  push32((uint32_t)(EAX));
  /* 12764d62 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12764d65 push ecx */
  push32((uint32_t)(ECX));
  /* 12764d66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12764d69 push edx */
  push32((uint32_t)(EDX));
  /* 12764d6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764d6d push eax */
  push32((uint32_t)(EAX));
  /* 12764d6e call 0x12764dd0 */
  push32(0x12764d73u); f_12764dd0();
  /* 12764d73 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764d76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12764d79 push 9 */
  push32((uint32_t)(0x9u));
  /* 12764d7b call 0x127687a0 */
  push32(0x12764d80u); f_127687a0();
  /* 12764d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764d83 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764d87 jne 0x12764d8f */
  if (!C.zf) goto L_12764d8f;
  /* 12764d89 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764d8d jne 0x12764d94 */
  if (!C.zf) goto L_12764d94;
L_12764d8f:;
  /* 12764d8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764d92 jmp 0x12764daa */
  goto L_12764daa;
L_12764d94:;
  /* 12764d94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764d97 push ecx */
  push32((uint32_t)(ECX));
  /* 12764d98 call 0x12768a40 */
  push32(0x12764d9du); f_12768a40();
  /* 12764d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764da0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12764da2 jne 0x12764da8 */
  if (!C.zf) goto L_12764da8;
  /* 12764da4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12764da6 jmp 0x12764daa */
  goto L_12764daa;
L_12764da8:;
  /* 12764da8 jmp 0x12764d54 */
  goto L_12764d54;
L_12764daa:;
  /* 12764daa mov esp, ebp */
  ESP = (EBP);
  /* 12764dac pop ebp */
  EBP = (pop32());
  /* 12764dad ret  */
  ESPCHK(0x12764d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x12764db0 (23 bytes, 11 insns) */
void f_12764db0(void) {
  FTRACE(0x12764db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12764db1 mov ebp, esp */
  EBP = (ESP);
  /* 12764db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12764db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764dbc push eax */
  push32((uint32_t)(EAX));
  /* 12764dbd call 0x12764dd0 */
  push32(0x12764dc2u); f_12764dd0();
  /* 12764dc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764dc5 pop ebp */
  EBP = (pop32());
  /* 12764dc6 ret  */
  ESPCHK(0x12764db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dd0 @ 0x12764dd0 (787 bytes, 254 insns) */
void f_12764dd0(void) {
  FTRACE(0x12764dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12764dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12764dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12764dd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12764dd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12764dd7 push esi */
  push32((uint32_t)(ESI));
  /* 12764dd8 push edi */
  push32((uint32_t)(EDI));
  /* 12764dd9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12764de0 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 12764de5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12764de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12764dea je 0x12764e1c */
  if (C.zf) goto L_12764e1c;
L_12764dec:;
  /* 12764dec call 0x12765ea0 */
  push32(0x12764df1u); f_12765ea0();
  /* 12764df1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12764df3 jne 0x12764e16 */
  if (!C.zf) goto L_12764e16;
  /* 12764df5 push 0x1278b7b0 */
  push32((uint32_t)(0x1278b7b0u));
  /* 12764dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12764dfc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12764e01 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12764e06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12764e08 call 0x12763dc0 */
  push32(0x12764e0du); f_12763dc0();
  /* 12764e0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764e10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764e13 jne 0x12764e16 */
  if (!C.zf) goto L_12764e16;
  /* 12764e15 int3  */
  x86_unimpl("int3 @ 0x12764e15");
L_12764e16:;
  /* 12764e16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12764e18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12764e1a jne 0x12764dec */
  if (!C.zf) goto L_12764dec;
L_12764e1c:;
  /* 12764e1c mov edx, dword ptr [0x1278ea88] */
  EDX = (r32((uint32_t)(0x1278ea88)));
  /* 12764e22 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12764e25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12764e28 cmp eax, dword ptr [0x1278ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764e2e jne 0x12764e31 */
  if (!C.zf) goto L_12764e31;
  /* 12764e30 int3  */
  x86_unimpl("int3 @ 0x12764e30");
L_12764e31:;
  /* 12764e31 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12764e34 push ecx */
  push32((uint32_t)(ECX));
  /* 12764e35 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12764e38 push edx */
  push32((uint32_t)(EDX));
  /* 12764e39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12764e3c push eax */
  push32((uint32_t)(EAX));
  /* 12764e3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12764e40 push ecx */
  push32((uint32_t)(ECX));
  /* 12764e41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764e44 push edx */
  push32((uint32_t)(EDX));
  /* 12764e45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12764e49 call dword ptr [0x1278ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1278ec90))), 0x12764e4fu);
  /* 12764e4f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12764e54 jne 0x12764eb4 */
  if (!C.zf) goto L_12764eb4;
  /* 12764e56 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764e5a je 0x12764e87 */
  if (C.zf) goto L_12764e87;
L_12764e5c:;
  /* 12764e5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12764e5f push eax */
  push32((uint32_t)(EAX));
  /* 12764e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12764e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12764e64 push 0x1278b76c */
  push32((uint32_t)(0x1278b76cu));
  /* 12764e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e71 call 0x12763dc0 */
  push32(0x12764e76u); f_12763dc0();
  /* 12764e76 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764e79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764e7c jne 0x12764e7f */
  if (!C.zf) goto L_12764e7f;
  /* 12764e7e int3  */
  x86_unimpl("int3 @ 0x12764e7e");
L_12764e7f:;
  /* 12764e7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12764e81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12764e83 jne 0x12764e5c */
  if (!C.zf) goto L_12764e5c;
  /* 12764e85 jmp 0x12764ead */
  goto L_12764ead;
L_12764e87:;
  /* 12764e87 push 0x1278b748 */
  push32((uint32_t)(0x1278b748u));
  /* 12764e8c push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12764e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764e99 call 0x12763dc0 */
  push32(0x12764e9eu); f_12763dc0();
  /* 12764e9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764ea1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764ea4 jne 0x12764ea7 */
  if (!C.zf) goto L_12764ea7;
  /* 12764ea6 int3  */
  x86_unimpl("int3 @ 0x12764ea6");
L_12764ea7:;
  /* 12764ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12764ea9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12764eab jne 0x12764e87 */
  if (!C.zf) goto L_12764e87;
L_12764ead:;
  /* 12764ead xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12764eaf jmp 0x127650dc */
  goto L_127650dc;
L_12764eb4:;
  /* 12764eb4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12764eb7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12764ebd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764ec0 je 0x12764ed6 */
  if (C.zf) goto L_12764ed6;
  /* 12764ec2 mov edx, dword ptr [0x1278ea84] */
  EDX = (r32((uint32_t)(0x1278ea84)));
  /* 12764ec8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12764ecb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12764ecd jne 0x12764ed6 */
  if (!C.zf) goto L_12764ed6;
  /* 12764ecf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12764ed6:;
  /* 12764ed6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764eda ja 0x12764ee7 */
  if ((!C.cf&&!C.zf)) goto L_12764ee7;
  /* 12764edc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764edf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764ee2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764ee5 jbe 0x12764f13 */
  if ((C.cf||C.zf)) goto L_12764f13;
L_12764ee7:;
  /* 12764ee7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764eea push ecx */
  push32((uint32_t)(ECX));
  /* 12764eeb push 0x1278b720 */
  push32((uint32_t)(0x1278b720u));
  /* 12764ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12764ef8 call 0x12763dc0 */
  push32(0x12764efdu); f_12763dc0();
  /* 12764efd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764f00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764f03 jne 0x12764f06 */
  if (!C.zf) goto L_12764f06;
  /* 12764f05 int3  */
  x86_unimpl("int3 @ 0x12764f05");
L_12764f06:;
  /* 12764f06 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12764f08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12764f0a jne 0x12764ee7 */
  if (!C.zf) goto L_12764ee7;
  /* 12764f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12764f0e jmp 0x127650dc */
  goto L_127650dc;
L_12764f13:;
  /* 12764f13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12764f16 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12764f1b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764f1e je 0x12764f60 */
  if (C.zf) goto L_12764f60;
  /* 12764f20 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764f24 je 0x12764f60 */
  if (C.zf) goto L_12764f60;
  /* 12764f26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12764f29 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12764f2f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764f32 je 0x12764f60 */
  if (C.zf) goto L_12764f60;
  /* 12764f34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764f38 je 0x12764f60 */
  if (C.zf) goto L_12764f60;
L_12764f3a:;
  /* 12764f3a push 0x1278b6ec */
  push32((uint32_t)(0x1278b6ecu));
  /* 12764f3f push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12764f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12764f4a push 1 */
  push32((uint32_t)(0x1u));
  /* 12764f4c call 0x12763dc0 */
  push32(0x12764f51u); f_12763dc0();
  /* 12764f51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764f54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764f57 jne 0x12764f5a */
  if (!C.zf) goto L_12764f5a;
  /* 12764f59 int3  */
  x86_unimpl("int3 @ 0x12764f59");
L_12764f5a:;
  /* 12764f5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12764f5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12764f5e jne 0x12764f3a */
  if (!C.zf) goto L_12764f3a;
L_12764f60:;
  /* 12764f60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764f63 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764f66 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12764f69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12764f6c push ecx */
  push32((uint32_t)(ECX));
  /* 12764f6d call 0x12768b50 */
  push32(0x12764f72u); f_12768b50();
  /* 12764f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12764f75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12764f78 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764f7c jne 0x12764f85 */
  if (!C.zf) goto L_12764f85;
  /* 12764f7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12764f80 jmp 0x127650dc */
  goto L_127650dc;
L_12764f85:;
  /* 12764f85 mov edx, dword ptr [0x1278ea88] */
  EDX = (r32((uint32_t)(0x1278ea88)));
  /* 12764f8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764f8e mov dword ptr [0x1278ea88], edx */
  w32((uint32_t)(0x1278ea88), (EDX));
  /* 12764f94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12764f98 je 0x12764fe3 */
  if (C.zf) goto L_12764fe3;
  /* 12764f9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764f9d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12764fa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764fa6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12764fad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764fb0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12764fb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764fba mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12764fc1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764fc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12764fc7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12764fca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764fcd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12764fd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12764fd7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12764fde jmp 0x12765083 */
  goto L_12765083;
L_12764fe3:;
  /* 12764fe3 mov edx, dword ptr [0x127906a8] */
  EDX = (r32((uint32_t)(0x127906a8)));
  /* 12764fe9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764fec mov dword ptr [0x127906a8], edx */
  w32((uint32_t)(0x127906a8), (EDX));
  /* 12764ff2 mov eax, dword ptr [0x127906b0] */
  EAX = (r32((uint32_t)(0x127906b0)));
  /* 12764ff7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12764ffa mov dword ptr [0x127906b0], eax */
  w32((uint32_t)(0x127906b0), (EAX));
  /* 12764fff mov ecx, dword ptr [0x127906b0] */
  ECX = (r32((uint32_t)(0x127906b0)));
  /* 12765005 cmp ecx, dword ptr [0x127906b4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x127906b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276500b jbe 0x12765019 */
  if ((C.cf||C.zf)) goto L_12765019;
  /* 1276500d mov edx, dword ptr [0x127906b0] */
  EDX = (r32((uint32_t)(0x127906b0)));
  /* 12765013 mov dword ptr [0x127906b4], edx */
  w32((uint32_t)(0x127906b4), (EDX));
L_12765019:;
  /* 12765019 cmp dword ptr [0x127906ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127906ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765020 je 0x1276502f */
  if (C.zf) goto L_1276502f;
  /* 12765022 mov eax, dword ptr [0x127906ac] */
  EAX = (r32((uint32_t)(0x127906ac)));
  /* 12765027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276502a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1276502d jmp 0x12765038 */
  goto L_12765038;
L_1276502f:;
  /* 1276502f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765032 mov dword ptr [0x127906a4], edx */
  w32((uint32_t)(0x127906a4), (EDX));
L_12765038:;
  /* 12765038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276503b mov ecx, dword ptr [0x127906ac] */
  ECX = (r32((uint32_t)(0x127906ac)));
  /* 12765041 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12765043 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765046 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1276504d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765050 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12765053 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12765056 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765059 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276505c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1276505f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765062 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765065 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12765068 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276506b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276506e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12765071 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765074 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765077 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1276507a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276507d mov dword ptr [0x127906ac], ecx */
  w32((uint32_t)(0x127906ac), (ECX));
L_12765083:;
  /* 12765083 push 4 */
  push32((uint32_t)(0x4u));
  /* 12765085 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12765087 mov dl, byte ptr [0x1278ea90] */
  DL = (r8((uint32_t)(0x1278ea90)));
  /* 1276508d push edx */
  push32((uint32_t)(EDX));
  /* 1276508e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765091 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765094 push eax */
  push32((uint32_t)(EAX));
  /* 12765095 call 0x12768a70 */
  push32(0x1276509au); f_12768a70();
  /* 1276509a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276509d push 4 */
  push32((uint32_t)(0x4u));
  /* 1276509f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127650a1 mov cl, byte ptr [0x1278ea90] */
  CL = (r8((uint32_t)(0x1278ea90)));
  /* 127650a7 push ecx */
  push32((uint32_t)(ECX));
  /* 127650a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127650ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127650ae lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 127650b2 push ecx */
  push32((uint32_t)(ECX));
  /* 127650b3 call 0x12768a70 */
  push32(0x127650b8u); f_12768a70();
  /* 127650b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127650bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127650be push edx */
  push32((uint32_t)(EDX));
  /* 127650bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127650c1 mov al, byte ptr [0x1278ea92] */
  AL = (r8((uint32_t)(0x1278ea92)));
  /* 127650c6 push eax */
  push32((uint32_t)(EAX));
  /* 127650c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127650ca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127650cd push ecx */
  push32((uint32_t)(ECX));
  /* 127650ce call 0x12768a70 */
  push32(0x127650d3u); f_12768a70();
  /* 127650d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127650d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127650d9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_127650dc:;
  /* 127650dc pop edi */
  EDI = (pop32());
  /* 127650dd pop esi */
  ESI = (pop32());
  /* 127650de pop ebx */
  EBX = (pop32());
  /* 127650df mov esp, ebp */
  ESP = (EBP);
  /* 127650e1 pop ebp */
  EBP = (pop32());
  /* 127650e2 ret  */
  ESPCHK(0x12764dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100050f0 @ 0x127650f0 (27 bytes, 13 insns) */
void f_127650f0(void) {
  FTRACE(0x127650f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127650f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127650f1 mov ebp, esp */
  EBP = (ESP);
  /* 127650f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127650f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127650f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127650f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127650fc push eax */
  push32((uint32_t)(EAX));
  /* 127650fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765100 push ecx */
  push32((uint32_t)(ECX));
  /* 12765101 call 0x12765110 */
  push32(0x12765106u); f_12765110();
  /* 12765106 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765109 pop ebp */
  EBP = (pop32());
  /* 1276510a ret  */
  ESPCHK(0x127650f0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12765110 (96 bytes, 37 insns) */
void f_12765110(void) {
  FTRACE(0x12765110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765110 push ebp */
  push32((uint32_t)(EBP));
  /* 12765111 mov ebp, esp */
  EBP = (ESP);
  /* 12765113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765116 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765119 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276511d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12765120 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12765123 push ecx */
  push32((uint32_t)(ECX));
  /* 12765124 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12765127 push edx */
  push32((uint32_t)(EDX));
  /* 12765128 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276512b push eax */
  push32((uint32_t)(EAX));
  /* 1276512c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276512f push ecx */
  push32((uint32_t)(ECX));
  /* 12765130 call 0x12764d00 */
  push32(0x12765135u); f_12764d00();
  /* 12765135 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765138 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276513b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276513f je 0x12765169 */
  if (C.zf) goto L_12765169;
  /* 12765141 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765144 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12765147 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276514a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276514d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12765150:;
  /* 12765150 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765153 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765156 jae 0x12765169 */
  if (!C.cf) goto L_12765169;
  /* 12765158 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276515b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1276515e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765161 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765164 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12765167 jmp 0x12765150 */
  goto L_12765150;
L_12765169:;
  /* 12765169 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276516c mov esp, ebp */
  ESP = (EBP);
  /* 1276516e pop ebp */
  EBP = (pop32());
  /* 1276516f ret  */
  ESPCHK(0x12765110u, _esp0);
  ESP += 4; return;
}

/* FUN_10005170 @ 0x12765170 (27 bytes, 13 insns) */
void f_12765170(void) {
  FTRACE(0x12765170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765170 push ebp */
  push32((uint32_t)(EBP));
  /* 12765171 mov ebp, esp */
  EBP = (ESP);
  /* 12765173 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765175 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765177 push 1 */
  push32((uint32_t)(0x1u));
  /* 12765179 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276517c push eax */
  push32((uint32_t)(EAX));
  /* 1276517d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765180 push ecx */
  push32((uint32_t)(ECX));
  /* 12765181 call 0x12765190 */
  push32(0x12765186u); f_12765190();
  /* 12765186 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765189 pop ebp */
  EBP = (pop32());
  /* 1276518a ret  */
  ESPCHK(0x12765170u, _esp0);
  ESP += 4; return;
}

/* FUN_10005190 @ 0x12765190 (64 bytes, 27 insns) */
void f_12765190(void) {
  FTRACE(0x12765190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765190 push ebp */
  push32((uint32_t)(EBP));
  /* 12765191 mov ebp, esp */
  EBP = (ESP);
  /* 12765193 push ecx */
  push32((uint32_t)(ECX));
  /* 12765194 push 9 */
  push32((uint32_t)(0x9u));
  /* 12765196 call 0x12768700 */
  push32(0x1276519bu); f_12768700();
  /* 1276519b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276519e push 1 */
  push32((uint32_t)(0x1u));
  /* 127651a0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127651a3 push eax */
  push32((uint32_t)(EAX));
  /* 127651a4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127651a7 push ecx */
  push32((uint32_t)(ECX));
  /* 127651a8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127651ab push edx */
  push32((uint32_t)(EDX));
  /* 127651ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127651af push eax */
  push32((uint32_t)(EAX));
  /* 127651b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127651b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127651b4 call 0x127651d0 */
  push32(0x127651b9u); f_127651d0();
  /* 127651b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127651bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127651bf push 9 */
  push32((uint32_t)(0x9u));
  /* 127651c1 call 0x127687a0 */
  push32(0x127651c6u); f_127687a0();
  /* 127651c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127651c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127651cc mov esp, ebp */
  ESP = (EBP);
  /* 127651ce pop ebp */
  EBP = (pop32());
  /* 127651cf ret  */
  ESPCHK(0x12765190u, _esp0);
  ESP += 4; return;
}

/* FUN_100051d0 @ 0x127651d0 (1297 bytes, 431 insns) */
void f_127651d0(void) {
  FTRACE(0x127651d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127651d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127651d1 mov ebp, esp */
  EBP = (ESP);
  /* 127651d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127651d6 push ebx */
  push32((uint32_t)(EBX));
  /* 127651d7 push esi */
  push32((uint32_t)(ESI));
  /* 127651d8 push edi */
  push32((uint32_t)(EDI));
  /* 127651d9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 127651e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127651e4 jne 0x12765203 */
  if (!C.zf) goto L_12765203;
  /* 127651e6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 127651e9 push eax */
  push32((uint32_t)(EAX));
  /* 127651ea mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127651ed push ecx */
  push32((uint32_t)(ECX));
  /* 127651ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127651f1 push edx */
  push32((uint32_t)(EDX));
  /* 127651f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127651f5 push eax */
  push32((uint32_t)(EAX));
  /* 127651f6 call 0x12764d00 */
  push32(0x127651fbu); f_12764d00();
  /* 127651fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127651fe jmp 0x127656da */
  goto L_127656da;
L_12765203:;
  /* 12765203 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765207 je 0x12765226 */
  if (C.zf) goto L_12765226;
  /* 12765209 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276520d jne 0x12765226 */
  if (!C.zf) goto L_12765226;
  /* 1276520f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12765212 push ecx */
  push32((uint32_t)(ECX));
  /* 12765213 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765216 push edx */
  push32((uint32_t)(EDX));
  /* 12765217 call 0x12765790 */
  push32(0x1276521cu); f_12765790();
  /* 1276521c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276521f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765221 jmp 0x127656da */
  goto L_127656da;
L_12765226:;
  /* 12765226 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 1276522b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1276522e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765230 je 0x12765262 */
  if (C.zf) goto L_12765262;
L_12765232:;
  /* 12765232 call 0x12765ea0 */
  push32(0x12765237u); f_12765ea0();
  /* 12765237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765239 jne 0x1276525c */
  if (!C.zf) goto L_1276525c;
  /* 1276523b push 0x1278b7b0 */
  push32((uint32_t)(0x1278b7b0u));
  /* 12765240 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765242 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12765247 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 1276524c push 2 */
  push32((uint32_t)(0x2u));
  /* 1276524e call 0x12763dc0 */
  push32(0x12765253u); f_12763dc0();
  /* 12765253 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765256 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765259 jne 0x1276525c */
  if (!C.zf) goto L_1276525c;
  /* 1276525b int3  */
  x86_unimpl("int3 @ 0x1276525b");
L_1276525c:;
  /* 1276525c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276525e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765260 jne 0x12765232 */
  if (!C.zf) goto L_12765232;
L_12765262:;
  /* 12765262 mov edx, dword ptr [0x1278ea88] */
  EDX = (r32((uint32_t)(0x1278ea88)));
  /* 12765268 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1276526b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276526e cmp eax, dword ptr [0x1278ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765274 jne 0x12765277 */
  if (!C.zf) goto L_12765277;
  /* 12765276 int3  */
  x86_unimpl("int3 @ 0x12765276");
L_12765277:;
  /* 12765277 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276527a push ecx */
  push32((uint32_t)(ECX));
  /* 1276527b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1276527e push edx */
  push32((uint32_t)(EDX));
  /* 1276527f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12765282 push eax */
  push32((uint32_t)(EAX));
  /* 12765283 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12765286 push ecx */
  push32((uint32_t)(ECX));
  /* 12765287 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276528a push edx */
  push32((uint32_t)(EDX));
  /* 1276528b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276528e push eax */
  push32((uint32_t)(EAX));
  /* 1276528f push 2 */
  push32((uint32_t)(0x2u));
  /* 12765291 call dword ptr [0x1278ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1278ec90))), 0x12765297u);
  /* 12765297 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276529a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276529c jne 0x127652fc */
  if (!C.zf) goto L_127652fc;
  /* 1276529e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127652a2 je 0x127652cf */
  if (C.zf) goto L_127652cf;
L_127652a4:;
  /* 127652a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 127652a7 push ecx */
  push32((uint32_t)(ECX));
  /* 127652a8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127652ab push edx */
  push32((uint32_t)(EDX));
  /* 127652ac push 0x1278b92c */
  push32((uint32_t)(0x1278b92cu));
  /* 127652b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127652b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127652b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127652b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127652b9 call 0x12763dc0 */
  push32(0x127652beu); f_12763dc0();
  /* 127652be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127652c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127652c4 jne 0x127652c7 */
  if (!C.zf) goto L_127652c7;
  /* 127652c6 int3  */
  x86_unimpl("int3 @ 0x127652c6");
L_127652c7:;
  /* 127652c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127652c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127652cb jne 0x127652a4 */
  if (!C.zf) goto L_127652a4;
  /* 127652cd jmp 0x127652f5 */
  goto L_127652f5;
L_127652cf:;
  /* 127652cf push 0x1278b908 */
  push32((uint32_t)(0x1278b908u));
  /* 127652d4 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 127652d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127652db push 0 */
  push32((uint32_t)(0x0u));
  /* 127652dd push 0 */
  push32((uint32_t)(0x0u));
  /* 127652df push 0 */
  push32((uint32_t)(0x0u));
  /* 127652e1 call 0x12763dc0 */
  push32(0x127652e6u); f_12763dc0();
  /* 127652e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127652e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127652ec jne 0x127652ef */
  if (!C.zf) goto L_127652ef;
  /* 127652ee int3  */
  x86_unimpl("int3 @ 0x127652ee");
L_127652ef:;
  /* 127652ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127652f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127652f3 jne 0x127652cf */
  if (!C.zf) goto L_127652cf;
L_127652f5:;
  /* 127652f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127652f7 jmp 0x127656da */
  goto L_127656da;
L_127652fc:;
  /* 127652fc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765300 jbe 0x1276532e */
  if ((C.cf||C.zf)) goto L_1276532e;
L_12765302:;
  /* 12765302 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765305 push edx */
  push32((uint32_t)(EDX));
  /* 12765306 push 0x1278b8d8 */
  push32((uint32_t)(0x1278b8d8u));
  /* 1276530b push 0 */
  push32((uint32_t)(0x0u));
  /* 1276530d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276530f push 0 */
  push32((uint32_t)(0x0u));
  /* 12765311 push 1 */
  push32((uint32_t)(0x1u));
  /* 12765313 call 0x12763dc0 */
  push32(0x12765318u); f_12763dc0();
  /* 12765318 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276531b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276531e jne 0x12765321 */
  if (!C.zf) goto L_12765321;
  /* 12765320 int3  */
  x86_unimpl("int3 @ 0x12765320");
L_12765321:;
  /* 12765321 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765323 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765325 jne 0x12765302 */
  if (!C.zf) goto L_12765302;
  /* 12765327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765329 jmp 0x127656da */
  goto L_127656da;
L_1276532e:;
  /* 1276532e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765332 je 0x12765376 */
  if (C.zf) goto L_12765376;
  /* 12765334 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12765337 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276533d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765340 je 0x12765376 */
  if (C.zf) goto L_12765376;
  /* 12765342 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12765345 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1276534b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276534e je 0x12765376 */
  if (C.zf) goto L_12765376;
L_12765350:;
  /* 12765350 push 0x1278b6ec */
  push32((uint32_t)(0x1278b6ecu));
  /* 12765355 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 1276535a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276535c push 0 */
  push32((uint32_t)(0x0u));
  /* 1276535e push 0 */
  push32((uint32_t)(0x0u));
  /* 12765360 push 1 */
  push32((uint32_t)(0x1u));
  /* 12765362 call 0x12763dc0 */
  push32(0x12765367u); f_12763dc0();
  /* 12765367 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276536a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276536d jne 0x12765370 */
  if (!C.zf) goto L_12765370;
  /* 1276536f int3  */
  x86_unimpl("int3 @ 0x1276536f");
L_12765370:;
  /* 12765370 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765374 jne 0x12765350 */
  if (!C.zf) goto L_12765350;
L_12765376:;
  /* 12765376 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765379 push ecx */
  push32((uint32_t)(ECX));
  /* 1276537a call 0x12766300 */
  push32(0x1276537fu); f_12766300();
  /* 1276537f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765384 jne 0x127653a7 */
  if (!C.zf) goto L_127653a7;
  /* 12765386 push 0x1278b8b4 */
  push32((uint32_t)(0x1278b8b4u));
  /* 1276538b push 0 */
  push32((uint32_t)(0x0u));
  /* 1276538d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12765392 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765397 push 2 */
  push32((uint32_t)(0x2u));
  /* 12765399 call 0x12763dc0 */
  push32(0x1276539eu); f_12763dc0();
  /* 1276539e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127653a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127653a4 jne 0x127653a7 */
  if (!C.zf) goto L_127653a7;
  /* 127653a6 int3  */
  x86_unimpl("int3 @ 0x127653a6");
L_127653a7:;
  /* 127653a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127653a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127653ab jne 0x12765376 */
  if (!C.zf) goto L_12765376;
  /* 127653ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127653b0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127653b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127653b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127653b9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127653bd jne 0x127653c6 */
  if (!C.zf) goto L_127653c6;
  /* 127653bf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_127653c6:;
  /* 127653c6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127653ca je 0x1276540a */
  if (C.zf) goto L_1276540a;
L_127653cc:;
  /* 127653cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127653cf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127653d6 jne 0x127653e1 */
  if (!C.zf) goto L_127653e1;
  /* 127653d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127653db cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127653df je 0x12765402 */
  if (C.zf) goto L_12765402;
L_127653e1:;
  /* 127653e1 push 0x1278b86c */
  push32((uint32_t)(0x1278b86cu));
  /* 127653e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127653e8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 127653ed push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 127653f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127653f4 call 0x12763dc0 */
  push32(0x127653f9u); f_12763dc0();
  /* 127653f9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127653fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127653ff jne 0x12765402 */
  if (!C.zf) goto L_12765402;
  /* 12765401 int3  */
  x86_unimpl("int3 @ 0x12765401");
L_12765402:;
  /* 12765402 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765406 jne 0x127653cc */
  if (!C.zf) goto L_127653cc;
  /* 12765408 jmp 0x1276546e */
  goto L_1276546e;
L_1276540a:;
  /* 1276540a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276540d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12765410 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12765415 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765418 jne 0x1276542f */
  if (!C.zf) goto L_1276542f;
  /* 1276541a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276541d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12765423 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765426 jne 0x1276542f */
  if (!C.zf) goto L_1276542f;
  /* 12765428 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1276542f:;
  /* 1276542f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765432 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12765435 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276543a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276543d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12765443 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765445 je 0x12765468 */
  if (C.zf) goto L_12765468;
  /* 12765447 push 0x1278b830 */
  push32((uint32_t)(0x1278b830u));
  /* 1276544c push 0 */
  push32((uint32_t)(0x0u));
  /* 1276544e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12765453 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765458 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276545a call 0x12763dc0 */
  push32(0x1276545fu); f_12763dc0();
  /* 1276545f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765462 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765465 jne 0x12765468 */
  if (!C.zf) goto L_12765468;
  /* 12765467 int3  */
  x86_unimpl("int3 @ 0x12765467");
L_12765468:;
  /* 12765468 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276546a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1276546c jne 0x1276542f */
  if (!C.zf) goto L_1276542f;
L_1276546e:;
  /* 1276546e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765472 je 0x12765499 */
  if (C.zf) goto L_12765499;
  /* 12765474 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765477 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276547a push eax */
  push32((uint32_t)(EAX));
  /* 1276547b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276547e push ecx */
  push32((uint32_t)(ECX));
  /* 1276547f call 0x12768c80 */
  push32(0x12765484u); f_12768c80();
  /* 12765484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765487 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1276548a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276548e jne 0x12765497 */
  if (!C.zf) goto L_12765497;
  /* 12765490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765492 jmp 0x127656da */
  goto L_127656da;
L_12765497:;
  /* 12765497 jmp 0x127654bc */
  goto L_127654bc;
L_12765499:;
  /* 12765499 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276549c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276549f push edx */
  push32((uint32_t)(EDX));
  /* 127654a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127654a3 push eax */
  push32((uint32_t)(EAX));
  /* 127654a4 call 0x12768bd0 */
  push32(0x127654a9u); f_12768bd0();
  /* 127654a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127654ac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127654af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127654b3 jne 0x127654bc */
  if (!C.zf) goto L_127654bc;
  /* 127654b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127654b7 jmp 0x127656da */
  goto L_127656da;
L_127654bc:;
  /* 127654bc mov ecx, dword ptr [0x1278ea88] */
  ECX = (r32((uint32_t)(0x1278ea88)));
  /* 127654c2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127654c5 mov dword ptr [0x1278ea88], ecx */
  w32((uint32_t)(0x1278ea88), (ECX));
  /* 127654cb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127654cf jne 0x12765527 */
  if (!C.zf) goto L_12765527;
  /* 127654d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127654d4 mov eax, dword ptr [0x127906a8] */
  EAX = (r32((uint32_t)(0x127906a8)));
  /* 127654d9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127654dc mov dword ptr [0x127906a8], eax */
  w32((uint32_t)(0x127906a8), (EAX));
  /* 127654e1 mov ecx, dword ptr [0x127906a8] */
  ECX = (r32((uint32_t)(0x127906a8)));
  /* 127654e7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127654ea mov dword ptr [0x127906a8], ecx */
  w32((uint32_t)(0x127906a8), (ECX));
  /* 127654f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127654f3 mov eax, dword ptr [0x127906b0] */
  EAX = (r32((uint32_t)(0x127906b0)));
  /* 127654f8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127654fb mov dword ptr [0x127906b0], eax */
  w32((uint32_t)(0x127906b0), (EAX));
  /* 12765500 mov ecx, dword ptr [0x127906b0] */
  ECX = (r32((uint32_t)(0x127906b0)));
  /* 12765506 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765509 mov dword ptr [0x127906b0], ecx */
  w32((uint32_t)(0x127906b0), (ECX));
  /* 1276550f mov edx, dword ptr [0x127906b0] */
  EDX = (r32((uint32_t)(0x127906b0)));
  /* 12765515 cmp edx, dword ptr [0x127906b4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x127906b4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276551b jbe 0x12765527 */
  if ((C.cf||C.zf)) goto L_12765527;
  /* 1276551d mov eax, dword ptr [0x127906b0] */
  EAX = (r32((uint32_t)(0x127906b0)));
  /* 12765522 mov dword ptr [0x127906b4], eax */
  w32((uint32_t)(0x127906b4), (EAX));
L_12765527:;
  /* 12765527 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276552a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276552d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12765530 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765533 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765536 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765539 jbe 0x1276555f */
  if ((C.cf||C.zf)) goto L_1276555f;
  /* 1276553b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276553e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765541 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765544 push edx */
  push32((uint32_t)(EDX));
  /* 12765545 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765547 mov al, byte ptr [0x1278ea92] */
  AL = (r8((uint32_t)(0x1278ea92)));
  /* 1276554c push eax */
  push32((uint32_t)(EAX));
  /* 1276554d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765550 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765553 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765556 push edx */
  push32((uint32_t)(EDX));
  /* 12765557 call 0x12768a70 */
  push32(0x1276555cu); f_12768a70();
  /* 1276555c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276555f:;
  /* 1276555f push 4 */
  push32((uint32_t)(0x4u));
  /* 12765561 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765563 mov al, byte ptr [0x1278ea90] */
  AL = (r8((uint32_t)(0x1278ea90)));
  /* 12765568 push eax */
  push32((uint32_t)(EAX));
  /* 12765569 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276556c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276556f push ecx */
  push32((uint32_t)(ECX));
  /* 12765570 call 0x12768a70 */
  push32(0x12765575u); f_12768a70();
  /* 12765575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765578 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276557c jne 0x12765599 */
  if (!C.zf) goto L_12765599;
  /* 1276557e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765581 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12765584 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12765587 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276558a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276558d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12765590 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765593 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12765596 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12765599:;
  /* 12765599 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276559c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276559f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_127655a2:;
  /* 127655a2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127655a6 jne 0x127655d7 */
  if (!C.zf) goto L_127655d7;
  /* 127655a8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127655ac jne 0x127655b6 */
  if (!C.zf) goto L_127655b6;
  /* 127655ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127655b1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127655b4 je 0x127655d7 */
  if (C.zf) goto L_127655d7;
L_127655b6:;
  /* 127655b6 push 0x1278b7fc */
  push32((uint32_t)(0x1278b7fcu));
  /* 127655bb push 0 */
  push32((uint32_t)(0x0u));
  /* 127655bd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 127655c2 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 127655c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 127655c9 call 0x12763dc0 */
  push32(0x127655ceu); f_12763dc0();
  /* 127655ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127655d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127655d4 jne 0x127655d7 */
  if (!C.zf) goto L_127655d7;
  /* 127655d6 int3  */
  x86_unimpl("int3 @ 0x127655d6");
L_127655d7:;
  /* 127655d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127655d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127655db jne 0x127655a2 */
  if (!C.zf) goto L_127655a2;
  /* 127655dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127655e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127655e3 je 0x127655eb */
  if (C.zf) goto L_127655eb;
  /* 127655e5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127655e9 je 0x127655f3 */
  if (C.zf) goto L_127655f3;
L_127655eb:;
  /* 127655eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127655ee jmp 0x127656da */
  goto L_127656da;
L_127655f3:;
  /* 127655f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127655f6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127655f9 je 0x1276560b */
  if (C.zf) goto L_1276560b;
  /* 127655fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127655fe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12765600 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765603 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12765606 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12765609 jmp 0x12765647 */
  goto L_12765647;
L_1276560b:;
  /* 1276560b mov eax, dword ptr [0x127906a4] */
  EAX = (r32((uint32_t)(0x127906a4)));
  /* 12765610 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765613 je 0x12765636 */
  if (C.zf) goto L_12765636;
  /* 12765615 push 0x1278b7e0 */
  push32((uint32_t)(0x1278b7e0u));
  /* 1276561a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276561c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12765621 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765626 push 2 */
  push32((uint32_t)(0x2u));
  /* 12765628 call 0x12763dc0 */
  push32(0x1276562du); f_12763dc0();
  /* 1276562d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765630 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765633 jne 0x12765636 */
  if (!C.zf) goto L_12765636;
  /* 12765635 int3  */
  x86_unimpl("int3 @ 0x12765635");
L_12765636:;
  /* 12765636 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765638 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276563a jne 0x1276560b */
  if (!C.zf) goto L_1276560b;
  /* 1276563c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276563f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12765642 mov dword ptr [0x127906a4], eax */
  w32((uint32_t)(0x127906a4), (EAX));
L_12765647:;
  /* 12765647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276564a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276564e je 0x1276565f */
  if (C.zf) goto L_1276565f;
  /* 12765650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765653 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12765656 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765659 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276565b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1276565d jmp 0x1276569a */
  goto L_1276569a;
L_1276565f:;
  /* 1276565f mov eax, dword ptr [0x127906ac] */
  EAX = (r32((uint32_t)(0x127906ac)));
  /* 12765664 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765667 je 0x1276568a */
  if (C.zf) goto L_1276568a;
  /* 12765669 push 0x1278b7c4 */
  push32((uint32_t)(0x1278b7c4u));
  /* 1276566e push 0 */
  push32((uint32_t)(0x0u));
  /* 12765670 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12765675 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 1276567a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276567c call 0x12763dc0 */
  push32(0x12765681u); f_12763dc0();
  /* 12765681 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765684 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765687 jne 0x1276568a */
  if (!C.zf) goto L_1276568a;
  /* 12765689 int3  */
  x86_unimpl("int3 @ 0x12765689");
L_1276568a:;
  /* 1276568a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276568c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276568e jne 0x1276565f */
  if (!C.zf) goto L_1276565f;
  /* 12765690 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765693 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12765695 mov dword ptr [0x127906ac], eax */
  w32((uint32_t)(0x127906ac), (EAX));
L_1276569a:;
  /* 1276569a cmp dword ptr [0x127906ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127906ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127656a1 je 0x127656b1 */
  if (C.zf) goto L_127656b1;
  /* 127656a3 mov ecx, dword ptr [0x127906ac] */
  ECX = (r32((uint32_t)(0x127906ac)));
  /* 127656a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127656ac mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 127656af jmp 0x127656b9 */
  goto L_127656b9;
L_127656b1:;
  /* 127656b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127656b4 mov dword ptr [0x127906a4], eax */
  w32((uint32_t)(0x127906a4), (EAX));
L_127656b9:;
  /* 127656b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127656bc mov edx, dword ptr [0x127906ac] */
  EDX = (r32((uint32_t)(0x127906ac)));
  /* 127656c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127656c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127656c7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 127656ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 127656d1 mov dword ptr [0x127906ac], ecx */
  w32((uint32_t)(0x127906ac), (ECX));
  /* 127656d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127656da:;
  /* 127656da pop edi */
  EDI = (pop32());
  /* 127656db pop esi */
  ESI = (pop32());
  /* 127656dc pop ebx */
  EBX = (pop32());
  /* 127656dd mov esp, ebp */
  ESP = (EBP);
  /* 127656df pop ebp */
  EBP = (pop32());
  /* 127656e0 ret  */
  ESPCHK(0x127651d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f0 @ 0x127656f0 (27 bytes, 13 insns) */
void f_127656f0(void) {
  FTRACE(0x127656f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127656f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127656f1 mov ebp, esp */
  EBP = (ESP);
  /* 127656f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127656f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127656f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 127656f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127656fc push eax */
  push32((uint32_t)(EAX));
  /* 127656fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765700 push ecx */
  push32((uint32_t)(ECX));
  /* 12765701 call 0x12765710 */
  push32(0x12765706u); f_12765710();
  /* 12765706 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765709 pop ebp */
  EBP = (pop32());
  /* 1276570a ret  */
  ESPCHK(0x127656f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005710 @ 0x12765710 (64 bytes, 27 insns) */
void f_12765710(void) {
  FTRACE(0x12765710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765710 push ebp */
  push32((uint32_t)(EBP));
  /* 12765711 mov ebp, esp */
  EBP = (ESP);
  /* 12765713 push ecx */
  push32((uint32_t)(ECX));
  /* 12765714 push 9 */
  push32((uint32_t)(0x9u));
  /* 12765716 call 0x12768700 */
  push32(0x1276571bu); f_12768700();
  /* 1276571b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276571e push 0 */
  push32((uint32_t)(0x0u));
  /* 12765720 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12765723 push eax */
  push32((uint32_t)(EAX));
  /* 12765724 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12765727 push ecx */
  push32((uint32_t)(ECX));
  /* 12765728 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276572b push edx */
  push32((uint32_t)(EDX));
  /* 1276572c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276572f push eax */
  push32((uint32_t)(EAX));
  /* 12765730 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765733 push ecx */
  push32((uint32_t)(ECX));
  /* 12765734 call 0x127651d0 */
  push32(0x12765739u); f_127651d0();
  /* 12765739 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276573c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276573f push 9 */
  push32((uint32_t)(0x9u));
  /* 12765741 call 0x127687a0 */
  push32(0x12765746u); f_127687a0();
  /* 12765746 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276574c mov esp, ebp */
  ESP = (EBP);
  /* 1276574e pop ebp */
  EBP = (pop32());
  /* 1276574f ret  */
  ESPCHK(0x12765710u, _esp0);
  ESP += 4; return;
}

/* FUN_10005750 @ 0x12765750 (19 bytes, 9 insns) */
void f_12765750(void) {
  FTRACE(0x12765750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765750 push ebp */
  push32((uint32_t)(EBP));
  /* 12765751 mov ebp, esp */
  EBP = (ESP);
  /* 12765753 push 1 */
  push32((uint32_t)(0x1u));
  /* 12765755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765758 push eax */
  push32((uint32_t)(EAX));
  /* 12765759 call 0x12765790 */
  push32(0x1276575eu); f_12765790();
  /* 1276575e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765761 pop ebp */
  EBP = (pop32());
  /* 12765762 ret  */
  ESPCHK(0x12765750u, _esp0);
  ESP += 4; return;
}

/* FUN_10005770 @ 0x12765770 (19 bytes, 9 insns) */
void f_12765770(void) {
  FTRACE(0x12765770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765770 push ebp */
  push32((uint32_t)(EBP));
  /* 12765771 mov ebp, esp */
  EBP = (ESP);
  /* 12765773 push 1 */
  push32((uint32_t)(0x1u));
  /* 12765775 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765778 push eax */
  push32((uint32_t)(EAX));
  /* 12765779 call 0x127657c0 */
  push32(0x1276577eu); f_127657c0();
  /* 1276577e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765781 pop ebp */
  EBP = (pop32());
  /* 12765782 ret  */
  ESPCHK(0x12765770u, _esp0);
  ESP += 4; return;
}

/* FUN_10005790 @ 0x12765790 (41 bytes, 16 insns) */
void f_12765790(void) {
  FTRACE(0x12765790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765790 push ebp */
  push32((uint32_t)(EBP));
  /* 12765791 mov ebp, esp */
  EBP = (ESP);
  /* 12765793 push 9 */
  push32((uint32_t)(0x9u));
  /* 12765795 call 0x12768700 */
  push32(0x1276579au); f_12768700();
  /* 1276579a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276579d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127657a0 push eax */
  push32((uint32_t)(EAX));
  /* 127657a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127657a4 push ecx */
  push32((uint32_t)(ECX));
  /* 127657a5 call 0x127657c0 */
  push32(0x127657aau); f_127657c0();
  /* 127657aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127657ad push 9 */
  push32((uint32_t)(0x9u));
  /* 127657af call 0x127687a0 */
  push32(0x127657b4u); f_127687a0();
  /* 127657b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127657b7 pop ebp */
  EBP = (pop32());
  /* 127657b8 ret  */
  ESPCHK(0x12765790u, _esp0);
  ESP += 4; return;
}

/* FUN_100057c0 @ 0x127657c0 (1004 bytes, 342 insns) */
void f_127657c0(void) {
  FTRACE(0x127657c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127657c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127657c1 mov ebp, esp */
  EBP = (ESP);
  /* 127657c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127657c4 push ebx */
  push32((uint32_t)(EBX));
  /* 127657c5 push esi */
  push32((uint32_t)(ESI));
  /* 127657c6 push edi */
  push32((uint32_t)(EDI));
  /* 127657c7 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 127657cc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127657cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127657d1 je 0x12765803 */
  if (C.zf) goto L_12765803;
L_127657d3:;
  /* 127657d3 call 0x12765ea0 */
  push32(0x127657d8u); f_12765ea0();
  /* 127657d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127657da jne 0x127657fd */
  if (!C.zf) goto L_127657fd;
  /* 127657dc push 0x1278b7b0 */
  push32((uint32_t)(0x1278b7b0u));
  /* 127657e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127657e3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 127657e8 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 127657ed push 2 */
  push32((uint32_t)(0x2u));
  /* 127657ef call 0x12763dc0 */
  push32(0x127657f4u); f_12763dc0();
  /* 127657f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127657f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127657fa jne 0x127657fd */
  if (!C.zf) goto L_127657fd;
  /* 127657fc int3  */
  x86_unimpl("int3 @ 0x127657fc");
L_127657fd:;
  /* 127657fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127657ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765801 jne 0x127657d3 */
  if (!C.zf) goto L_127657d3;
L_12765803:;
  /* 12765803 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765807 jne 0x1276580e */
  if (!C.zf) goto L_1276580e;
  /* 12765809 jmp 0x12765ba5 */
  goto L_12765ba5;
L_1276580e:;
  /* 1276580e push 0 */
  push32((uint32_t)(0x0u));
  /* 12765810 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765812 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765814 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765817 push edx */
  push32((uint32_t)(EDX));
  /* 12765818 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276581a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276581d push eax */
  push32((uint32_t)(EAX));
  /* 1276581e push 3 */
  push32((uint32_t)(0x3u));
  /* 12765820 call dword ptr [0x1278ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1278ec90))), 0x12765826u);
  /* 12765826 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276582b jne 0x12765858 */
  if (!C.zf) goto L_12765858;
L_1276582d:;
  /* 1276582d push 0x1278ba74 */
  push32((uint32_t)(0x1278ba74u));
  /* 12765832 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12765837 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276583b push 0 */
  push32((uint32_t)(0x0u));
  /* 1276583d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276583f call 0x12763dc0 */
  push32(0x12765844u); f_12763dc0();
  /* 12765844 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765847 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276584a jne 0x1276584d */
  if (!C.zf) goto L_1276584d;
  /* 1276584c int3  */
  x86_unimpl("int3 @ 0x1276584c");
L_1276584d:;
  /* 1276584d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276584f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765851 jne 0x1276582d */
  if (!C.zf) goto L_1276582d;
  /* 12765853 jmp 0x12765ba5 */
  goto L_12765ba5;
L_12765858:;
  /* 12765858 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276585b push edx */
  push32((uint32_t)(EDX));
  /* 1276585c call 0x12766300 */
  push32(0x12765861u); f_12766300();
  /* 12765861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765866 jne 0x12765889 */
  if (!C.zf) goto L_12765889;
  /* 12765868 push 0x1278b8b4 */
  push32((uint32_t)(0x1278b8b4u));
  /* 1276586d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276586f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12765874 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765879 push 2 */
  push32((uint32_t)(0x2u));
  /* 1276587b call 0x12763dc0 */
  push32(0x12765880u); f_12763dc0();
  /* 12765880 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765883 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765886 jne 0x12765889 */
  if (!C.zf) goto L_12765889;
  /* 12765888 int3  */
  x86_unimpl("int3 @ 0x12765888");
L_12765889:;
  /* 12765889 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276588b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276588d jne 0x12765858 */
  if (!C.zf) goto L_12765858;
  /* 1276588f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765892 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765895 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12765898:;
  /* 12765898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276589b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1276589e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127658a3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127658a6 je 0x127658eb */
  if (C.zf) goto L_127658eb;
  /* 127658a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127658ab cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127658af je 0x127658eb */
  if (C.zf) goto L_127658eb;
  /* 127658b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127658b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127658b7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127658bc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127658bf je 0x127658eb */
  if (C.zf) goto L_127658eb;
  /* 127658c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127658c4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127658c8 je 0x127658eb */
  if (C.zf) goto L_127658eb;
  /* 127658ca push 0x1278ba4c */
  push32((uint32_t)(0x1278ba4cu));
  /* 127658cf push 0 */
  push32((uint32_t)(0x0u));
  /* 127658d1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 127658d6 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 127658db push 2 */
  push32((uint32_t)(0x2u));
  /* 127658dd call 0x12763dc0 */
  push32(0x127658e2u); f_12763dc0();
  /* 127658e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127658e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127658e8 jne 0x127658eb */
  if (!C.zf) goto L_127658eb;
  /* 127658ea int3  */
  x86_unimpl("int3 @ 0x127658ea");
L_127658eb:;
  /* 127658eb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127658ed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127658ef jne 0x12765898 */
  if (!C.zf) goto L_12765898;
  /* 127658f1 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 127658f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 127658f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127658fb jne 0x127659c6 */
  if (!C.zf) goto L_127659c6;
  /* 12765901 push 4 */
  push32((uint32_t)(0x4u));
  /* 12765903 mov cl, byte ptr [0x1278ea90] */
  CL = (r8((uint32_t)(0x1278ea90)));
  /* 12765909 push ecx */
  push32((uint32_t)(ECX));
  /* 1276590a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276590d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765910 push edx */
  push32((uint32_t)(EDX));
  /* 12765911 call 0x12765e10 */
  push32(0x12765916u); f_12765e10();
  /* 12765916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765919 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276591b jne 0x12765960 */
  if (!C.zf) goto L_12765960;
L_1276591d:;
  /* 1276591d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765920 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765923 push eax */
  push32((uint32_t)(EAX));
  /* 12765924 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765927 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1276592a push edx */
  push32((uint32_t)(EDX));
  /* 1276592b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276592e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12765931 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12765937 mov edx, dword ptr [ecx*4 + 0x1278ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278ea94)));
  /* 1276593e push edx */
  push32((uint32_t)(EDX));
  /* 1276593f push 0x1278ba20 */
  push32((uint32_t)(0x1278ba20u));
  /* 12765944 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765946 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276594a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276594c call 0x12763dc0 */
  push32(0x12765951u); f_12763dc0();
  /* 12765951 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765954 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765957 jne 0x1276595a */
  if (!C.zf) goto L_1276595a;
  /* 12765959 int3  */
  x86_unimpl("int3 @ 0x12765959");
L_1276595a:;
  /* 1276595a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276595c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276595e jne 0x1276591d */
  if (!C.zf) goto L_1276591d;
L_12765960:;
  /* 12765960 push 4 */
  push32((uint32_t)(0x4u));
  /* 12765962 mov cl, byte ptr [0x1278ea90] */
  CL = (r8((uint32_t)(0x1278ea90)));
  /* 12765968 push ecx */
  push32((uint32_t)(ECX));
  /* 12765969 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276596c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1276596f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765972 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12765976 push edx */
  push32((uint32_t)(EDX));
  /* 12765977 call 0x12765e10 */
  push32(0x1276597cu); f_12765e10();
  /* 1276597c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276597f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765981 jne 0x127659c6 */
  if (!C.zf) goto L_127659c6;
L_12765983:;
  /* 12765983 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765986 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765989 push eax */
  push32((uint32_t)(EAX));
  /* 1276598a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276598d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12765990 push edx */
  push32((uint32_t)(EDX));
  /* 12765991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765994 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12765997 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276599d mov edx, dword ptr [ecx*4 + 0x1278ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278ea94)));
  /* 127659a4 push edx */
  push32((uint32_t)(EDX));
  /* 127659a5 push 0x1278b9f4 */
  push32((uint32_t)(0x1278b9f4u));
  /* 127659aa push 0 */
  push32((uint32_t)(0x0u));
  /* 127659ac push 0 */
  push32((uint32_t)(0x0u));
  /* 127659ae push 0 */
  push32((uint32_t)(0x0u));
  /* 127659b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127659b2 call 0x12763dc0 */
  push32(0x127659b7u); f_12763dc0();
  /* 127659b7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127659ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127659bd jne 0x127659c0 */
  if (!C.zf) goto L_127659c0;
  /* 127659bf int3  */
  x86_unimpl("int3 @ 0x127659bf");
L_127659c0:;
  /* 127659c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127659c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127659c4 jne 0x12765983 */
  if (!C.zf) goto L_12765983;
L_127659c6:;
  /* 127659c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127659c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127659cd jne 0x12765a3b */
  if (!C.zf) goto L_12765a3b;
L_127659cf:;
  /* 127659cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127659d2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127659d9 jne 0x127659e4 */
  if (!C.zf) goto L_127659e4;
  /* 127659db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127659de cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127659e2 je 0x12765a05 */
  if (C.zf) goto L_12765a05;
L_127659e4:;
  /* 127659e4 push 0x1278b9b4 */
  push32((uint32_t)(0x1278b9b4u));
  /* 127659e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127659eb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 127659f0 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 127659f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 127659f7 call 0x12763dc0 */
  push32(0x127659fcu); f_12763dc0();
  /* 127659fc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127659ff cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765a02 jne 0x12765a05 */
  if (!C.zf) goto L_12765a05;
  /* 12765a04 int3  */
  x86_unimpl("int3 @ 0x12765a04");
L_12765a05:;
  /* 12765a05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765a07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765a09 jne 0x127659cf */
  if (!C.zf) goto L_127659cf;
  /* 12765a0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765a0e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12765a11 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765a14 push eax */
  push32((uint32_t)(EAX));
  /* 12765a15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765a17 mov cl, byte ptr [0x1278ea91] */
  CL = (r8((uint32_t)(0x1278ea91)));
  /* 12765a1d push ecx */
  push32((uint32_t)(ECX));
  /* 12765a1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765a21 push edx */
  push32((uint32_t)(EDX));
  /* 12765a22 call 0x12768a70 */
  push32(0x12765a27u); f_12768a70();
  /* 12765a27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765a2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765a2d push eax */
  push32((uint32_t)(EAX));
  /* 12765a2e call 0x12768e70 */
  push32(0x12765a33u); f_12768e70();
  /* 12765a33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765a36 jmp 0x12765ba5 */
  goto L_12765ba5;
L_12765a3b:;
  /* 12765a3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765a3e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765a42 jne 0x12765a51 */
  if (!C.zf) goto L_12765a51;
  /* 12765a44 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765a48 jne 0x12765a51 */
  if (!C.zf) goto L_12765a51;
  /* 12765a4a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12765a51:;
  /* 12765a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765a54 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12765a57 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765a5a je 0x12765a7d */
  if (C.zf) goto L_12765a7d;
  /* 12765a5c push 0x1278b994 */
  push32((uint32_t)(0x1278b994u));
  /* 12765a61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765a63 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12765a68 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765a6d push 2 */
  push32((uint32_t)(0x2u));
  /* 12765a6f call 0x12763dc0 */
  push32(0x12765a74u); f_12763dc0();
  /* 12765a74 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765a77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765a7a jne 0x12765a7d */
  if (!C.zf) goto L_12765a7d;
  /* 12765a7c int3  */
  x86_unimpl("int3 @ 0x12765a7c");
L_12765a7d:;
  /* 12765a7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765a7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765a81 jne 0x12765a51 */
  if (!C.zf) goto L_12765a51;
  /* 12765a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765a86 mov eax, dword ptr [0x127906b0] */
  EAX = (r32((uint32_t)(0x127906b0)));
  /* 12765a8b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765a8e mov dword ptr [0x127906b0], eax */
  w32((uint32_t)(0x127906b0), (EAX));
  /* 12765a93 mov ecx, dword ptr [0x1278ea84] */
  ECX = (r32((uint32_t)(0x1278ea84)));
  /* 12765a99 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12765a9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765a9e jne 0x12765b7c */
  if (!C.zf) goto L_12765b7c;
  /* 12765aa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765aa7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765aaa je 0x12765abc */
  if (C.zf) goto L_12765abc;
  /* 12765aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765aaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12765ab1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765ab4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12765ab7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12765aba jmp 0x12765afa */
  goto L_12765afa;
L_12765abc:;
  /* 12765abc mov ecx, dword ptr [0x127906a4] */
  ECX = (r32((uint32_t)(0x127906a4)));
  /* 12765ac2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765ac5 je 0x12765ae8 */
  if (C.zf) goto L_12765ae8;
  /* 12765ac7 push 0x1278b97c */
  push32((uint32_t)(0x1278b97cu));
  /* 12765acc push 0 */
  push32((uint32_t)(0x0u));
  /* 12765ace push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12765ad3 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765ad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12765ada call 0x12763dc0 */
  push32(0x12765adfu); f_12763dc0();
  /* 12765adf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765ae2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765ae5 jne 0x12765ae8 */
  if (!C.zf) goto L_12765ae8;
  /* 12765ae7 int3  */
  x86_unimpl("int3 @ 0x12765ae7");
L_12765ae8:;
  /* 12765ae8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12765aea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12765aec jne 0x12765abc */
  if (!C.zf) goto L_12765abc;
  /* 12765aee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765af1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12765af4 mov dword ptr [0x127906a4], ecx */
  w32((uint32_t)(0x127906a4), (ECX));
L_12765afa:;
  /* 12765afa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765afd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765b01 je 0x12765b12 */
  if (C.zf) goto L_12765b12;
  /* 12765b03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12765b09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b0c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12765b0e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12765b10 jmp 0x12765b4f */
  goto L_12765b4f;
L_12765b12:;
  /* 12765b12 mov ecx, dword ptr [0x127906ac] */
  ECX = (r32((uint32_t)(0x127906ac)));
  /* 12765b18 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765b1b je 0x12765b3e */
  if (C.zf) goto L_12765b3e;
  /* 12765b1d push 0x1278b964 */
  push32((uint32_t)(0x1278b964u));
  /* 12765b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765b24 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12765b29 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765b2e push 2 */
  push32((uint32_t)(0x2u));
  /* 12765b30 call 0x12763dc0 */
  push32(0x12765b35u); f_12763dc0();
  /* 12765b35 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765b38 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765b3b jne 0x12765b3e */
  if (!C.zf) goto L_12765b3e;
  /* 12765b3d int3  */
  x86_unimpl("int3 @ 0x12765b3d");
L_12765b3e:;
  /* 12765b3e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12765b40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12765b42 jne 0x12765b12 */
  if (!C.zf) goto L_12765b12;
  /* 12765b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12765b49 mov dword ptr [0x127906ac], ecx */
  w32((uint32_t)(0x127906ac), (ECX));
L_12765b4f:;
  /* 12765b4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b52 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12765b55 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765b58 push eax */
  push32((uint32_t)(EAX));
  /* 12765b59 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765b5b mov cl, byte ptr [0x1278ea91] */
  CL = (r8((uint32_t)(0x1278ea91)));
  /* 12765b61 push ecx */
  push32((uint32_t)(ECX));
  /* 12765b62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b65 push edx */
  push32((uint32_t)(EDX));
  /* 12765b66 call 0x12768a70 */
  push32(0x12765b6bu); f_12768a70();
  /* 12765b6b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765b6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b71 push eax */
  push32((uint32_t)(EAX));
  /* 12765b72 call 0x12768e70 */
  push32(0x12765b77u); f_12768e70();
  /* 12765b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765b7a jmp 0x12765ba5 */
  goto L_12765ba5;
L_12765b7c:;
  /* 12765b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b7f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12765b86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b89 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12765b8c push eax */
  push32((uint32_t)(EAX));
  /* 12765b8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765b8f mov cl, byte ptr [0x1278ea91] */
  CL = (r8((uint32_t)(0x1278ea91)));
  /* 12765b95 push ecx */
  push32((uint32_t)(ECX));
  /* 12765b96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765b99 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765b9c push edx */
  push32((uint32_t)(EDX));
  /* 12765b9d call 0x12768a70 */
  push32(0x12765ba2u); f_12768a70();
  /* 12765ba2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12765ba5:;
  /* 12765ba5 pop edi */
  EDI = (pop32());
  /* 12765ba6 pop esi */
  ESI = (pop32());
  /* 12765ba7 pop ebx */
  EBX = (pop32());
  /* 12765ba8 mov esp, ebp */
  ESP = (EBP);
  /* 12765baa pop ebp */
  EBP = (pop32());
  /* 12765bab ret  */
  ESPCHK(0x127657c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bb0 @ 0x12765bb0 (19 bytes, 9 insns) */
void f_12765bb0(void) {
  FTRACE(0x12765bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12765bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12765bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12765bb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765bb8 push eax */
  push32((uint32_t)(EAX));
  /* 12765bb9 call 0x12765bd0 */
  push32(0x12765bbeu); f_12765bd0();
  /* 12765bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765bc1 pop ebp */
  EBP = (pop32());
  /* 12765bc2 ret  */
  ESPCHK(0x12765bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bd0 @ 0x12765bd0 (342 bytes, 119 insns) */
void f_12765bd0(void) {
  FTRACE(0x12765bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12765bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12765bd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12765bd7 push esi */
  push32((uint32_t)(ESI));
  /* 12765bd8 push edi */
  push32((uint32_t)(EDI));
  /* 12765bd9 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 12765bde and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12765be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765be3 je 0x12765c15 */
  if (C.zf) goto L_12765c15;
L_12765be5:;
  /* 12765be5 call 0x12765ea0 */
  push32(0x12765beau); f_12765ea0();
  /* 12765bea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765bec jne 0x12765c0f */
  if (!C.zf) goto L_12765c0f;
  /* 12765bee push 0x1278b7b0 */
  push32((uint32_t)(0x1278b7b0u));
  /* 12765bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765bf5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12765bfa push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765bff push 2 */
  push32((uint32_t)(0x2u));
  /* 12765c01 call 0x12763dc0 */
  push32(0x12765c06u); f_12763dc0();
  /* 12765c06 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765c0c jne 0x12765c0f */
  if (!C.zf) goto L_12765c0f;
  /* 12765c0e int3  */
  x86_unimpl("int3 @ 0x12765c0e");
L_12765c0f:;
  /* 12765c0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765c11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765c13 jne 0x12765be5 */
  if (!C.zf) goto L_12765be5;
L_12765c15:;
  /* 12765c15 push 9 */
  push32((uint32_t)(0x9u));
  /* 12765c17 call 0x12768700 */
  push32(0x12765c1cu); f_12768700();
  /* 12765c1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12765c1f:;
  /* 12765c1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765c22 push edx */
  push32((uint32_t)(EDX));
  /* 12765c23 call 0x12766300 */
  push32(0x12765c28u); f_12766300();
  /* 12765c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765c2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765c2d jne 0x12765c50 */
  if (!C.zf) goto L_12765c50;
  /* 12765c2f push 0x1278b8b4 */
  push32((uint32_t)(0x1278b8b4u));
  /* 12765c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765c36 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12765c3b push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765c40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12765c42 call 0x12763dc0 */
  push32(0x12765c47u); f_12763dc0();
  /* 12765c47 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765c4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765c4d jne 0x12765c50 */
  if (!C.zf) goto L_12765c50;
  /* 12765c4f int3  */
  x86_unimpl("int3 @ 0x12765c4f");
L_12765c50:;
  /* 12765c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765c54 jne 0x12765c1f */
  if (!C.zf) goto L_12765c1f;
  /* 12765c56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765c59 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765c5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12765c5f:;
  /* 12765c5f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765c62 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12765c65 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12765c6a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765c6d je 0x12765cb2 */
  if (C.zf) goto L_12765cb2;
  /* 12765c6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765c72 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765c76 je 0x12765cb2 */
  if (C.zf) goto L_12765cb2;
  /* 12765c78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765c7b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12765c7e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12765c83 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765c86 je 0x12765cb2 */
  if (C.zf) goto L_12765cb2;
  /* 12765c88 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765c8b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765c8f je 0x12765cb2 */
  if (C.zf) goto L_12765cb2;
  /* 12765c91 push 0x1278ba4c */
  push32((uint32_t)(0x1278ba4cu));
  /* 12765c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765c98 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12765c9d push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765ca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12765ca4 call 0x12763dc0 */
  push32(0x12765ca9u); f_12763dc0();
  /* 12765ca9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765cac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765caf jne 0x12765cb2 */
  if (!C.zf) goto L_12765cb2;
  /* 12765cb1 int3  */
  x86_unimpl("int3 @ 0x12765cb1");
L_12765cb2:;
  /* 12765cb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12765cb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12765cb6 jne 0x12765c5f */
  if (!C.zf) goto L_12765c5f;
  /* 12765cb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765cbb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765cbf jne 0x12765cce */
  if (!C.zf) goto L_12765cce;
  /* 12765cc1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765cc5 jne 0x12765cce */
  if (!C.zf) goto L_12765cce;
  /* 12765cc7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12765cce:;
  /* 12765cce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765cd1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765cd5 je 0x12765d09 */
  if (C.zf) goto L_12765d09;
L_12765cd7:;
  /* 12765cd7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765cda mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12765cdd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765ce0 je 0x12765d03 */
  if (C.zf) goto L_12765d03;
  /* 12765ce2 push 0x1278b994 */
  push32((uint32_t)(0x1278b994u));
  /* 12765ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765ce9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12765cee push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765cf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12765cf5 call 0x12763dc0 */
  push32(0x12765cfau); f_12763dc0();
  /* 12765cfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765cfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765d00 jne 0x12765d03 */
  if (!C.zf) goto L_12765d03;
  /* 12765d02 int3  */
  x86_unimpl("int3 @ 0x12765d02");
L_12765d03:;
  /* 12765d03 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765d05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765d07 jne 0x12765cd7 */
  if (!C.zf) goto L_12765cd7;
L_12765d09:;
  /* 12765d09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765d0c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12765d0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12765d12 push 9 */
  push32((uint32_t)(0x9u));
  /* 12765d14 call 0x127687a0 */
  push32(0x12765d19u); f_127687a0();
  /* 12765d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765d1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765d1f pop edi */
  EDI = (pop32());
  /* 12765d20 pop esi */
  ESI = (pop32());
  /* 12765d21 pop ebx */
  EBX = (pop32());
  /* 12765d22 mov esp, ebp */
  ESP = (EBP);
  /* 12765d24 pop ebp */
  EBP = (pop32());
  /* 12765d25 ret  */
  ESPCHK(0x12765bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d30 @ 0x12765d30 (28 bytes, 11 insns) */
void f_12765d30(void) {
  FTRACE(0x12765d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12765d31 mov ebp, esp */
  EBP = (ESP);
  /* 12765d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12765d34 mov eax, dword ptr [0x1278ea8c] */
  EAX = (r32((uint32_t)(0x1278ea8c)));
  /* 12765d39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12765d3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765d3f mov dword ptr [0x1278ea8c], ecx */
  w32((uint32_t)(0x1278ea8c), (ECX));
  /* 12765d45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765d48 mov esp, ebp */
  ESP = (EBP);
  /* 12765d4a pop ebp */
  EBP = (pop32());
  /* 12765d4b ret  */
  ESPCHK(0x12765d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d50 @ 0x12765d50 (157 bytes, 59 insns) */
void f_12765d50(void) {
  FTRACE(0x12765d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12765d51 mov ebp, esp */
  EBP = (ESP);
  /* 12765d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12765d54 push ebx */
  push32((uint32_t)(EBX));
  /* 12765d55 push esi */
  push32((uint32_t)(ESI));
  /* 12765d56 push edi */
  push32((uint32_t)(EDI));
  /* 12765d57 push 9 */
  push32((uint32_t)(0x9u));
  /* 12765d59 call 0x12768700 */
  push32(0x12765d5eu); f_12768700();
  /* 12765d5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765d61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765d64 push eax */
  push32((uint32_t)(EAX));
  /* 12765d65 call 0x12766300 */
  push32(0x12765d6au); f_12766300();
  /* 12765d6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765d6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765d6f je 0x12765ddc */
  if (C.zf) goto L_12765ddc;
  /* 12765d71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765d74 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765d77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12765d7a:;
  /* 12765d7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765d7d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12765d80 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12765d85 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765d88 je 0x12765dcd */
  if (C.zf) goto L_12765dcd;
  /* 12765d8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765d8d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765d91 je 0x12765dcd */
  if (C.zf) goto L_12765dcd;
  /* 12765d93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765d96 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12765d99 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12765d9e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765da1 je 0x12765dcd */
  if (C.zf) goto L_12765dcd;
  /* 12765da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765da6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765daa je 0x12765dcd */
  if (C.zf) goto L_12765dcd;
  /* 12765dac push 0x1278ba4c */
  push32((uint32_t)(0x1278ba4cu));
  /* 12765db1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765db3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12765db8 push 0x1278b7a4 */
  push32((uint32_t)(0x1278b7a4u));
  /* 12765dbd push 2 */
  push32((uint32_t)(0x2u));
  /* 12765dbf call 0x12763dc0 */
  push32(0x12765dc4u); f_12763dc0();
  /* 12765dc4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765dc7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765dca jne 0x12765dcd */
  if (!C.zf) goto L_12765dcd;
  /* 12765dcc int3  */
  x86_unimpl("int3 @ 0x12765dcc");
L_12765dcd:;
  /* 12765dcd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12765dcf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12765dd1 jne 0x12765d7a */
  if (!C.zf) goto L_12765d7a;
  /* 12765dd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765dd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765dd9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12765ddc:;
  /* 12765ddc push 9 */
  push32((uint32_t)(0x9u));
  /* 12765dde call 0x127687a0 */
  push32(0x12765de3u); f_127687a0();
  /* 12765de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765de6 pop edi */
  EDI = (pop32());
  /* 12765de7 pop esi */
  ESI = (pop32());
  /* 12765de8 pop ebx */
  EBX = (pop32());
  /* 12765de9 mov esp, ebp */
  ESP = (EBP);
  /* 12765deb pop ebp */
  EBP = (pop32());
  /* 12765dec ret  */
  ESPCHK(0x12765d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005df0 @ 0x12765df0 (28 bytes, 11 insns) */
void f_12765df0(void) {
  FTRACE(0x12765df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12765df1 mov ebp, esp */
  EBP = (ESP);
  /* 12765df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12765df4 mov eax, dword ptr [0x1278ec90] */
  EAX = (r32((uint32_t)(0x1278ec90)));
  /* 12765df9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12765dfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765dff mov dword ptr [0x1278ec90], ecx */
  w32((uint32_t)(0x1278ec90), (ECX));
  /* 12765e05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765e08 mov esp, ebp */
  ESP = (EBP);
  /* 12765e0a pop ebp */
  EBP = (pop32());
  /* 12765e0b ret  */
  ESPCHK(0x12765df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x12765e10 (136 bytes, 55 insns) */
void f_12765e10(void) {
  FTRACE(0x12765e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12765e11 mov ebp, esp */
  EBP = (ESP);
  /* 12765e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12765e14 push ebx */
  push32((uint32_t)(EBX));
  /* 12765e15 push esi */
  push32((uint32_t)(ESI));
  /* 12765e16 push edi */
  push32((uint32_t)(EDI));
  /* 12765e17 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12765e1e:;
  /* 12765e1e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12765e21 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12765e24 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765e27 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12765e2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765e2c je 0x12765e8e */
  if (C.zf) goto L_12765e8e;
  /* 12765e2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765e31 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765e33 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12765e35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765e38 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12765e3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765e41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765e44 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12765e47 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765e49 je 0x12765e8c */
  if (C.zf) goto L_12765e8c;
L_12765e4b:;
  /* 12765e4b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12765e4e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12765e53 push eax */
  push32((uint32_t)(EAX));
  /* 12765e54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765e57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12765e59 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12765e5c push edx */
  push32((uint32_t)(EDX));
  /* 12765e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12765e60 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765e63 push eax */
  push32((uint32_t)(EAX));
  /* 12765e64 push 0x1278ba90 */
  push32((uint32_t)(0x1278ba90u));
  /* 12765e69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12765e6d push 0 */
  push32((uint32_t)(0x0u));
  /* 12765e6f push 0 */
  push32((uint32_t)(0x0u));
  /* 12765e71 call 0x12763dc0 */
  push32(0x12765e76u); f_12763dc0();
  /* 12765e76 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765e79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765e7c jne 0x12765e7f */
  if (!C.zf) goto L_12765e7f;
  /* 12765e7e int3  */
  x86_unimpl("int3 @ 0x12765e7e");
L_12765e7f:;
  /* 12765e7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765e81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765e83 jne 0x12765e4b */
  if (!C.zf) goto L_12765e4b;
  /* 12765e85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12765e8c:;
  /* 12765e8c jmp 0x12765e1e */
  goto L_12765e1e;
L_12765e8e:;
  /* 12765e8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12765e91 pop edi */
  EDI = (pop32());
  /* 12765e92 pop esi */
  ESI = (pop32());
  /* 12765e93 pop ebx */
  EBX = (pop32());
  /* 12765e94 mov esp, ebp */
  ESP = (EBP);
  /* 12765e96 pop ebp */
  EBP = (pop32());
  /* 12765e97 ret  */
  ESPCHK(0x12765e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ea0 @ 0x12765ea0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12765ea0(void) {
  FTRACE(0x12765ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12765ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12765ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12765ea3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12765ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 12765ea7 push esi */
  push32((uint32_t)(ESI));
  /* 12765ea8 push edi */
  push32((uint32_t)(EDI));
  /* 12765ea9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12765eb0 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 12765eb5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12765eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765eba jne 0x12765ec6 */
  if (!C.zf) goto L_12765ec6;
  /* 12765ebc mov eax, 1 */
  EAX = (0x1u);
  /* 12765ec1 jmp 0x127661f8 */
  goto L_127661f8;
L_12765ec6:;
  /* 12765ec6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12765ec8 call 0x12768700 */
  push32(0x12765ecdu); f_12768700();
  /* 12765ecd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765ed0 call 0x12768ee0 */
  push32(0x12765ed5u); f_12768ee0();
  /* 12765ed5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12765ed8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765edc je 0x12765fe9 */
  if (C.zf) goto L_12765fe9;
  /* 12765ee2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765ee6 je 0x12765fe9 */
  if (C.zf) goto L_12765fe9;
  /* 12765eec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12765eef mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12765ef2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12765ef5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12765ef8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12765efb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765eff ja 0x12765fb2 */
  if ((!C.cf&&!C.zf)) goto L_12765fb2;
  /* 12765f05 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12765f08 jmp dword ptr [eax*4 + 0x127661ff] */
  switch (EAX) {
    case 0: goto L_12765f8a;
    case 1: goto L_12765f62;
    case 2: goto L_12765f3a;
    case 3: goto L_12765f0f;
    default: x86_unimpl("switch@0x12765f08 out of table"); return;
  }
L_12765f0f:;
  /* 12765f0f push 0x1278bbe4 */
  push32((uint32_t)(0x1278bbe4u));
  /* 12765f14 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12765f19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f1b push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f21 call 0x12763dc0 */
  push32(0x12765f26u); f_12763dc0();
  /* 12765f26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765f29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765f2c jne 0x12765f2f */
  if (!C.zf) goto L_12765f2f;
  /* 12765f2e int3  */
  x86_unimpl("int3 @ 0x12765f2e");
L_12765f2f:;
  /* 12765f2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765f31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765f33 jne 0x12765f0f */
  if (!C.zf) goto L_12765f0f;
  /* 12765f35 jmp 0x12765fd8 */
  goto L_12765fd8;
L_12765f3a:;
  /* 12765f3a push 0x1278bbc0 */
  push32((uint32_t)(0x1278bbc0u));
  /* 12765f3f push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12765f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f4c call 0x12763dc0 */
  push32(0x12765f51u); f_12763dc0();
  /* 12765f51 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765f54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765f57 jne 0x12765f5a */
  if (!C.zf) goto L_12765f5a;
  /* 12765f59 int3  */
  x86_unimpl("int3 @ 0x12765f59");
L_12765f5a:;
  /* 12765f5a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12765f5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12765f5e jne 0x12765f3a */
  if (!C.zf) goto L_12765f3a;
  /* 12765f60 jmp 0x12765fd8 */
  goto L_12765fd8;
L_12765f62:;
  /* 12765f62 push 0x1278bb9c */
  push32((uint32_t)(0x1278bb9cu));
  /* 12765f67 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12765f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f74 call 0x12763dc0 */
  push32(0x12765f79u); f_12763dc0();
  /* 12765f79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765f7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765f7f jne 0x12765f82 */
  if (!C.zf) goto L_12765f82;
  /* 12765f81 int3  */
  x86_unimpl("int3 @ 0x12765f81");
L_12765f82:;
  /* 12765f82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765f84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12765f86 jne 0x12765f62 */
  if (!C.zf) goto L_12765f62;
  /* 12765f88 jmp 0x12765fd8 */
  goto L_12765fd8;
L_12765f8a:;
  /* 12765f8a push 0x1278bb78 */
  push32((uint32_t)(0x1278bb78u));
  /* 12765f8f push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12765f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f9a push 0 */
  push32((uint32_t)(0x0u));
  /* 12765f9c call 0x12763dc0 */
  push32(0x12765fa1u); f_12763dc0();
  /* 12765fa1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765fa4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765fa7 jne 0x12765faa */
  if (!C.zf) goto L_12765faa;
  /* 12765fa9 int3  */
  x86_unimpl("int3 @ 0x12765fa9");
L_12765faa:;
  /* 12765faa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12765fac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12765fae jne 0x12765f8a */
  if (!C.zf) goto L_12765f8a;
  /* 12765fb0 jmp 0x12765fd8 */
  goto L_12765fd8;
L_12765fb2:;
  /* 12765fb2 push 0x1278bb4c */
  push32((uint32_t)(0x1278bb4cu));
  /* 12765fb7 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12765fbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12765fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 12765fc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12765fc4 call 0x12763dc0 */
  push32(0x12765fc9u); f_12763dc0();
  /* 12765fc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765fcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765fcf jne 0x12765fd2 */
  if (!C.zf) goto L_12765fd2;
  /* 12765fd1 int3  */
  x86_unimpl("int3 @ 0x12765fd1");
L_12765fd2:;
  /* 12765fd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12765fd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12765fd6 jne 0x12765fb2 */
  if (!C.zf) goto L_12765fb2;
L_12765fd8:;
  /* 12765fd8 push 9 */
  push32((uint32_t)(0x9u));
  /* 12765fda call 0x127687a0 */
  push32(0x12765fdfu); f_127687a0();
  /* 12765fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12765fe2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12765fe4 jmp 0x127661f8 */
  goto L_127661f8;
L_12765fe9:;
  /* 12765fe9 mov eax, dword ptr [0x127906ac] */
  EAX = (r32((uint32_t)(0x127906ac)));
  /* 12765fee mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12765ff1 jmp 0x12765ffb */
  goto L_12765ffb;
L_12765ff3:;
  /* 12765ff3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12765ff6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12765ff8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12765ffb:;
  /* 12765ffb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12765fff je 0x127661eb */
  if (C.zf) goto L_127661eb;
  /* 12766005 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1276600c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276600f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12766012 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12766018 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276601b je 0x12766040 */
  if (C.zf) goto L_12766040;
  /* 1276601d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766020 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766024 je 0x12766040 */
  if (C.zf) goto L_12766040;
  /* 12766026 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766029 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1276602c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12766032 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766035 je 0x12766040 */
  if (C.zf) goto L_12766040;
  /* 12766037 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276603a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276603e jne 0x12766058 */
  if (!C.zf) goto L_12766058;
L_12766040:;
  /* 12766040 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766043 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12766046 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276604c mov edx, dword ptr [ecx*4 + 0x1278ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278ea94)));
  /* 12766053 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12766056 jmp 0x1276605f */
  goto L_1276605f;
L_12766058:;
  /* 12766058 mov dword ptr [ebp - 0x14], 0x1278bb44 */
  w32((uint32_t)(EBP + -0x14), (0x1278bb44u));
L_1276605f:;
  /* 1276605f push 4 */
  push32((uint32_t)(0x4u));
  /* 12766061 mov al, byte ptr [0x1278ea90] */
  AL = (r8((uint32_t)(0x1278ea90)));
  /* 12766066 push eax */
  push32((uint32_t)(EAX));
  /* 12766067 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276606a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276606d push ecx */
  push32((uint32_t)(ECX));
  /* 1276606e call 0x12765e10 */
  push32(0x12766073u); f_12765e10();
  /* 12766073 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766078 jne 0x127660b4 */
  if (!C.zf) goto L_127660b4;
L_1276607a:;
  /* 1276607a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276607d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766080 push edx */
  push32((uint32_t)(EDX));
  /* 12766081 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766084 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12766087 push ecx */
  push32((uint32_t)(ECX));
  /* 12766088 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276608b push edx */
  push32((uint32_t)(EDX));
  /* 1276608c push 0x1278ba20 */
  push32((uint32_t)(0x1278ba20u));
  /* 12766091 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766093 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766095 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766097 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766099 call 0x12763dc0 */
  push32(0x1276609eu); f_12763dc0();
  /* 1276609e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127660a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127660a4 jne 0x127660a7 */
  if (!C.zf) goto L_127660a7;
  /* 127660a6 int3  */
  x86_unimpl("int3 @ 0x127660a6");
L_127660a7:;
  /* 127660a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127660a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127660ab jne 0x1276607a */
  if (!C.zf) goto L_1276607a;
  /* 127660ad mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127660b4:;
  /* 127660b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 127660b6 mov cl, byte ptr [0x1278ea90] */
  CL = (r8((uint32_t)(0x1278ea90)));
  /* 127660bc push ecx */
  push32((uint32_t)(ECX));
  /* 127660bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127660c0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 127660c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127660c6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 127660ca push edx */
  push32((uint32_t)(EDX));
  /* 127660cb call 0x12765e10 */
  push32(0x127660d0u); f_12765e10();
  /* 127660d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127660d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127660d5 jne 0x12766111 */
  if (!C.zf) goto L_12766111;
L_127660d7:;
  /* 127660d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127660da add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127660dd push eax */
  push32((uint32_t)(EAX));
  /* 127660de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127660e1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 127660e4 push edx */
  push32((uint32_t)(EDX));
  /* 127660e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127660e8 push eax */
  push32((uint32_t)(EAX));
  /* 127660e9 push 0x1278b9f4 */
  push32((uint32_t)(0x1278b9f4u));
  /* 127660ee push 0 */
  push32((uint32_t)(0x0u));
  /* 127660f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127660f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127660f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127660f6 call 0x12763dc0 */
  push32(0x127660fbu); f_12763dc0();
  /* 127660fb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127660fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766101 jne 0x12766104 */
  if (!C.zf) goto L_12766104;
  /* 12766103 int3  */
  x86_unimpl("int3 @ 0x12766103");
L_12766104:;
  /* 12766104 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12766106 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12766108 jne 0x127660d7 */
  if (!C.zf) goto L_127660d7;
  /* 1276610a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12766111:;
  /* 12766111 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766114 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766118 jne 0x1276616a */
  if (!C.zf) goto L_1276616a;
  /* 1276611a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276611d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12766120 push ecx */
  push32((uint32_t)(ECX));
  /* 12766121 mov dl, byte ptr [0x1278ea91] */
  DL = (r8((uint32_t)(0x1278ea91)));
  /* 12766127 push edx */
  push32((uint32_t)(EDX));
  /* 12766128 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276612b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276612e push eax */
  push32((uint32_t)(EAX));
  /* 1276612f call 0x12765e10 */
  push32(0x12766134u); f_12765e10();
  /* 12766134 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766139 jne 0x1276616a */
  if (!C.zf) goto L_1276616a;
L_1276613b:;
  /* 1276613b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276613e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766141 push ecx */
  push32((uint32_t)(ECX));
  /* 12766142 push 0x1278bb18 */
  push32((uint32_t)(0x1278bb18u));
  /* 12766147 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766149 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276614b push 0 */
  push32((uint32_t)(0x0u));
  /* 1276614d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276614f call 0x12763dc0 */
  push32(0x12766154u); f_12763dc0();
  /* 12766154 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766157 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276615a jne 0x1276615d */
  if (!C.zf) goto L_1276615d;
  /* 1276615c int3  */
  x86_unimpl("int3 @ 0x1276615c");
L_1276615d:;
  /* 1276615d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276615f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12766161 jne 0x1276613b */
  if (!C.zf) goto L_1276613b;
  /* 12766163 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1276616a:;
  /* 1276616a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276616e jne 0x127661e6 */
  if (!C.zf) goto L_127661e6;
  /* 12766170 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766173 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766177 je 0x127661ac */
  if (C.zf) goto L_127661ac;
L_12766179:;
  /* 12766179 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276617c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1276617f push edx */
  push32((uint32_t)(EDX));
  /* 12766180 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766183 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12766186 push ecx */
  push32((uint32_t)(ECX));
  /* 12766187 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276618a push edx */
  push32((uint32_t)(EDX));
  /* 1276618b push 0x1278baf8 */
  push32((uint32_t)(0x1278baf8u));
  /* 12766190 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766192 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766194 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766196 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766198 call 0x12763dc0 */
  push32(0x1276619du); f_12763dc0();
  /* 1276619d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127661a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127661a3 jne 0x127661a6 */
  if (!C.zf) goto L_127661a6;
  /* 127661a5 int3  */
  x86_unimpl("int3 @ 0x127661a5");
L_127661a6:;
  /* 127661a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127661a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127661aa jne 0x12766179 */
  if (!C.zf) goto L_12766179;
L_127661ac:;
  /* 127661ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127661af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 127661b2 push edx */
  push32((uint32_t)(EDX));
  /* 127661b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127661b6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127661b9 push eax */
  push32((uint32_t)(EAX));
  /* 127661ba mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 127661bd push ecx */
  push32((uint32_t)(ECX));
  /* 127661be push 0x1278bacc */
  push32((uint32_t)(0x1278baccu));
  /* 127661c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127661c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127661c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127661c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127661cb call 0x12763dc0 */
  push32(0x127661d0u); f_12763dc0();
  /* 127661d0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127661d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127661d6 jne 0x127661d9 */
  if (!C.zf) goto L_127661d9;
  /* 127661d8 int3  */
  x86_unimpl("int3 @ 0x127661d8");
L_127661d9:;
  /* 127661d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127661db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127661dd jne 0x127661ac */
  if (!C.zf) goto L_127661ac;
  /* 127661df mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127661e6:;
  /* 127661e6 jmp 0x12765ff3 */
  goto L_12765ff3;
L_127661eb:;
  /* 127661eb push 9 */
  push32((uint32_t)(0x9u));
  /* 127661ed call 0x127687a0 */
  push32(0x127661f2u); f_127687a0();
  /* 127661f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127661f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127661f8:;
  /* 127661f8 pop edi */
  EDI = (pop32());
  /* 127661f9 pop esi */
  ESI = (pop32());
  /* 127661fa pop ebx */
  EBX = (pop32());
  /* 127661fb mov esp, ebp */
  ESP = (EBP);
  /* 127661fd pop ebp */
  EBP = (pop32());
  /* 127661fe ret  */
  ESPCHK(0x12765ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x12766210 (34 bytes, 13 insns) */
void f_12766210(void) {
  FTRACE(0x12766210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766210 push ebp */
  push32((uint32_t)(EBP));
  /* 12766211 mov ebp, esp */
  EBP = (ESP);
  /* 12766213 push ecx */
  push32((uint32_t)(ECX));
  /* 12766214 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 12766219 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276621c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766220 je 0x1276622b */
  if (C.zf) goto L_1276622b;
  /* 12766222 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766225 mov dword ptr [0x1278ea84], ecx */
  w32((uint32_t)(0x1278ea84), (ECX));
L_1276622b:;
  /* 1276622b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276622e mov esp, ebp */
  ESP = (EBP);
  /* 12766230 pop ebp */
  EBP = (pop32());
  /* 12766231 ret  */
  ESPCHK(0x12766210u, _esp0);
  ESP += 4; return;
}

/* FUN_10006240 @ 0x12766240 (103 bytes, 38 insns) */
void f_12766240(void) {
  FTRACE(0x12766240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766240 push ebp */
  push32((uint32_t)(EBP));
  /* 12766241 mov ebp, esp */
  EBP = (ESP);
  /* 12766243 push ecx */
  push32((uint32_t)(ECX));
  /* 12766244 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 12766249 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1276624c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276624e jne 0x12766252 */
  if (!C.zf) goto L_12766252;
  /* 12766250 jmp 0x127662a3 */
  goto L_127662a3;
L_12766252:;
  /* 12766252 push 9 */
  push32((uint32_t)(0x9u));
  /* 12766254 call 0x12768700 */
  push32(0x12766259u); f_12768700();
  /* 12766259 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276625c mov ecx, dword ptr [0x127906ac] */
  ECX = (r32((uint32_t)(0x127906ac)));
  /* 12766262 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12766265 jmp 0x1276626f */
  goto L_1276626f;
L_12766267:;
  /* 12766267 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276626a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1276626c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276626f:;
  /* 1276626f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766273 je 0x12766299 */
  if (C.zf) goto L_12766299;
  /* 12766275 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766278 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1276627b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12766281 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766284 jne 0x12766297 */
  if (!C.zf) goto L_12766297;
  /* 12766286 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12766289 push eax */
  push32((uint32_t)(EAX));
  /* 1276628a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276628d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766290 push ecx */
  push32((uint32_t)(ECX));
  /* 12766291 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12766294u);
  /* 12766294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12766297:;
  /* 12766297 jmp 0x12766267 */
  goto L_12766267;
L_12766299:;
  /* 12766299 push 9 */
  push32((uint32_t)(0x9u));
  /* 1276629b call 0x127687a0 */
  push32(0x127662a0u); f_127687a0();
  /* 127662a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127662a3:;
  /* 127662a3 mov esp, ebp */
  ESP = (EBP);
  /* 127662a5 pop ebp */
  EBP = (pop32());
  /* 127662a6 ret  */
  ESPCHK(0x12766240u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x127662b0 (75 bytes, 28 insns) */
void f_127662b0(void) {
  FTRACE(0x127662b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127662b0 push ebp */
  push32((uint32_t)(EBP));
  /* 127662b1 mov ebp, esp */
  EBP = (ESP);
  /* 127662b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127662b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127662b8 je 0x127662ed */
  if (C.zf) goto L_127662ed;
  /* 127662ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127662bd push eax */
  push32((uint32_t)(EAX));
  /* 127662be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127662c1 push ecx */
  push32((uint32_t)(ECX));
  /* 127662c2 call dword ptr [0x127933a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933a4))), 0x127662c8u);
  /* 127662c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127662ca jne 0x127662ed */
  if (!C.zf) goto L_127662ed;
  /* 127662cc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127662d0 je 0x127662e4 */
  if (C.zf) goto L_127662e4;
  /* 127662d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127662d5 push edx */
  push32((uint32_t)(EDX));
  /* 127662d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127662d9 push eax */
  push32((uint32_t)(EAX));
  /* 127662da call dword ptr [0x127933a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933a0))), 0x127662e0u);
  /* 127662e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127662e2 jne 0x127662ed */
  if (!C.zf) goto L_127662ed;
L_127662e4:;
  /* 127662e4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127662eb jmp 0x127662f4 */
  goto L_127662f4;
L_127662ed:;
  /* 127662ed mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127662f4:;
  /* 127662f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127662f7 mov esp, ebp */
  ESP = (EBP);
  /* 127662f9 pop ebp */
  EBP = (pop32());
  /* 127662fa ret  */
  ESPCHK(0x127662b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x12766300 (134 bytes, 50 insns) */
void f_12766300(void) {
  FTRACE(0x12766300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766300 push ebp */
  push32((uint32_t)(EBP));
  /* 12766301 mov ebp, esp */
  EBP = (ESP);
  /* 12766303 push ecx */
  push32((uint32_t)(ECX));
  /* 12766304 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766308 jne 0x1276630e */
  if (!C.zf) goto L_1276630e;
  /* 1276630a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276630c jmp 0x12766382 */
  goto L_12766382;
L_1276630e:;
  /* 1276630e push 1 */
  push32((uint32_t)(0x1u));
  /* 12766310 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12766312 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766315 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766318 push eax */
  push32((uint32_t)(EAX));
  /* 12766319 call 0x127662b0 */
  push32(0x1276631eu); f_127662b0();
  /* 1276631e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766323 jne 0x12766329 */
  if (!C.zf) goto L_12766329;
  /* 12766325 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12766327 jmp 0x12766382 */
  goto L_12766382;
L_12766329:;
  /* 12766329 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276632c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276632f push ecx */
  push32((uint32_t)(ECX));
  /* 12766330 call 0x12769000 */
  push32(0x12766335u); f_12769000();
  /* 12766335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766338 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276633b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276633f je 0x12766356 */
  if (C.zf) goto L_12766356;
  /* 12766341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766344 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766347 push edx */
  push32((uint32_t)(EDX));
  /* 12766348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276634b push eax */
  push32((uint32_t)(EAX));
  /* 1276634c call 0x12769060 */
  push32(0x12766351u); f_12769060();
  /* 12766351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766354 jmp 0x12766382 */
  goto L_12766382;
L_12766356:;
  /* 12766356 mov ecx, dword ptr [0x12790660] */
  ECX = (r32((uint32_t)(0x12790660)));
  /* 1276635c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12766362 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12766364 je 0x1276636d */
  if (C.zf) goto L_1276636d;
  /* 12766366 mov eax, 1 */
  EAX = (0x1u);
  /* 1276636b jmp 0x12766382 */
  goto L_12766382;
L_1276636d:;
  /* 1276636d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766370 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766373 push edx */
  push32((uint32_t)(EDX));
  /* 12766374 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766376 mov eax, dword ptr [0x1279200c] */
  EAX = (r32((uint32_t)(0x1279200c)));
  /* 1276637b push eax */
  push32((uint32_t)(EAX));
  /* 1276637c call dword ptr [0x127933a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933a8))), 0x12766382u);
L_12766382:;
  /* 12766382 mov esp, ebp */
  ESP = (EBP);
  /* 12766384 pop ebp */
  EBP = (pop32());
  /* 12766385 ret  */
  ESPCHK(0x12766300u, _esp0);
  ESP += 4; return;
}

/* FUN_10006390 @ 0x12766390 (227 bytes, 80 insns) */
void f_12766390(void) {
  FTRACE(0x12766390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766390 push ebp */
  push32((uint32_t)(EBP));
  /* 12766391 mov ebp, esp */
  EBP = (ESP);
  /* 12766393 push ecx */
  push32((uint32_t)(ECX));
  /* 12766394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766397 push eax */
  push32((uint32_t)(EAX));
  /* 12766398 call 0x12766300 */
  push32(0x1276639du); f_12766300();
  /* 1276639d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127663a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127663a2 jne 0x127663ab */
  if (!C.zf) goto L_127663ab;
  /* 127663a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127663a6 jmp 0x1276646f */
  goto L_1276646f;
L_127663ab:;
  /* 127663ab push 9 */
  push32((uint32_t)(0x9u));
  /* 127663ad call 0x12768700 */
  push32(0x127663b2u); f_12768700();
  /* 127663b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127663b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127663b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127663bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127663be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127663c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127663c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127663c9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127663cc je 0x127663f0 */
  if (C.zf) goto L_127663f0;
  /* 127663ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127663d1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127663d5 je 0x127663f0 */
  if (C.zf) goto L_127663f0;
  /* 127663d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127663da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127663dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127663e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127663e5 je 0x127663f0 */
  if (C.zf) goto L_127663f0;
  /* 127663e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127663ea cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127663ee jne 0x12766463 */
  if (!C.zf) goto L_12766463;
L_127663f0:;
  /* 127663f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 127663f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127663f5 push edx */
  push32((uint32_t)(EDX));
  /* 127663f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127663f9 push eax */
  push32((uint32_t)(EAX));
  /* 127663fa call 0x127662b0 */
  push32(0x127663ffu); f_127662b0();
  /* 127663ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766404 je 0x12766463 */
  if (C.zf) goto L_12766463;
  /* 12766406 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766409 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1276640c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276640f jne 0x12766463 */
  if (!C.zf) goto L_12766463;
  /* 12766411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766414 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12766417 cmp ecx, dword ptr [0x1278ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1278ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276641d jg 0x12766463 */
  if ((!C.zf&&C.sf==C.of)) goto L_12766463;
  /* 1276641f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766423 je 0x12766430 */
  if (C.zf) goto L_12766430;
  /* 12766425 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276642b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1276642e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12766430:;
  /* 12766430 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766434 je 0x12766441 */
  if (C.zf) goto L_12766441;
  /* 12766436 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12766439 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276643c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1276643f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12766441:;
  /* 12766441 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766445 je 0x12766452 */
  if (C.zf) goto L_12766452;
  /* 12766447 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276644a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276644d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12766450 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12766452:;
  /* 12766452 push 9 */
  push32((uint32_t)(0x9u));
  /* 12766454 call 0x127687a0 */
  push32(0x12766459u); f_127687a0();
  /* 12766459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276645c mov eax, 1 */
  EAX = (0x1u);
  /* 12766461 jmp 0x1276646f */
  goto L_1276646f;
L_12766463:;
  /* 12766463 push 9 */
  push32((uint32_t)(0x9u));
  /* 12766465 call 0x127687a0 */
  push32(0x1276646au); f_127687a0();
  /* 1276646a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276646d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276646f:;
  /* 1276646f mov esp, ebp */
  ESP = (EBP);
  /* 12766471 pop ebp */
  EBP = (pop32());
  /* 12766472 ret  */
  ESPCHK(0x12766390u, _esp0);
  ESP += 4; return;
}

/* FUN_10006480 @ 0x12766480 (28 bytes, 11 insns) */
void f_12766480(void) {
  FTRACE(0x12766480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766480 push ebp */
  push32((uint32_t)(EBP));
  /* 12766481 mov ebp, esp */
  EBP = (ESP);
  /* 12766483 push ecx */
  push32((uint32_t)(ECX));
  /* 12766484 mov eax, dword ptr [0x12792018] */
  EAX = (r32((uint32_t)(0x12792018)));
  /* 12766489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276648c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276648f mov dword ptr [0x12792018], ecx */
  w32((uint32_t)(0x12792018), (ECX));
  /* 12766495 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766498 mov esp, ebp */
  ESP = (EBP);
  /* 1276649a pop ebp */
  EBP = (pop32());
  /* 1276649b ret  */
  ESPCHK(0x12766480u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x127664a0 (362 bytes, 116 insns) */
void f_127664a0(void) {
  FTRACE(0x127664a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127664a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127664a1 mov ebp, esp */
  EBP = (ESP);
  /* 127664a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127664a6 push ebx */
  push32((uint32_t)(EBX));
  /* 127664a7 push esi */
  push32((uint32_t)(ESI));
  /* 127664a8 push edi */
  push32((uint32_t)(EDI));
  /* 127664a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127664ad jne 0x127664da */
  if (!C.zf) goto L_127664da;
L_127664af:;
  /* 127664af push 0x1278bc2c */
  push32((uint32_t)(0x1278bc2cu));
  /* 127664b4 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 127664b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127664bb push 0 */
  push32((uint32_t)(0x0u));
  /* 127664bd push 0 */
  push32((uint32_t)(0x0u));
  /* 127664bf push 0 */
  push32((uint32_t)(0x0u));
  /* 127664c1 call 0x12763dc0 */
  push32(0x127664c6u); f_12763dc0();
  /* 127664c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127664c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127664cc jne 0x127664cf */
  if (!C.zf) goto L_127664cf;
  /* 127664ce int3  */
  x86_unimpl("int3 @ 0x127664ce");
L_127664cf:;
  /* 127664cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127664d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127664d3 jne 0x127664af */
  if (!C.zf) goto L_127664af;
  /* 127664d5 jmp 0x12766603 */
  goto L_12766603;
L_127664da:;
  /* 127664da push 9 */
  push32((uint32_t)(0x9u));
  /* 127664dc call 0x12768700 */
  push32(0x127664e1u); f_12768700();
  /* 127664e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127664e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127664e7 mov edx, dword ptr [0x127906ac] */
  EDX = (r32((uint32_t)(0x127906ac)));
  /* 127664ed mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 127664ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127664f6 jmp 0x12766501 */
  goto L_12766501;
L_127664f8:;
  /* 127664f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127664fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127664fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12766501:;
  /* 12766501 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766505 jge 0x12766525 */
  if ((C.sf==C.of)) goto L_12766525;
  /* 12766507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276650a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276650d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12766515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276651b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12766523 jmp 0x127664f8 */
  goto L_127664f8;
L_12766525:;
  /* 12766525 mov edx, dword ptr [0x127906ac] */
  EDX = (r32((uint32_t)(0x127906ac)));
  /* 1276652b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1276652e jmp 0x12766538 */
  goto L_12766538;
L_12766530:;
  /* 12766530 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766533 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12766535 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12766538:;
  /* 12766538 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276653c je 0x127665e1 */
  if (C.zf) goto L_127665e1;
  /* 12766542 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766545 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12766548 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276654d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276654f jl 0x127665b7 */
  if ((C.sf!=C.of)) goto L_127665b7;
  /* 12766551 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766554 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12766557 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1276655d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766560 jge 0x127665b7 */
  if ((C.sf==C.of)) goto L_127665b7;
  /* 12766562 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766565 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12766568 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276656e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766571 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12766575 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766578 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276657b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1276657e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12766584 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766587 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1276658b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276658e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12766591 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12766596 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766599 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1276659d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127665a0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127665a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127665a6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 127665a9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127665ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127665b1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 127665b5 jmp 0x127665dc */
  goto L_127665dc;
L_127665b7:;
  /* 127665b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127665ba push edx */
  push32((uint32_t)(EDX));
  /* 127665bb push 0x1278bc08 */
  push32((uint32_t)(0x1278bc08u));
  /* 127665c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 127665c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 127665c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 127665c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127665c8 call 0x12763dc0 */
  push32(0x127665cdu); f_12763dc0();
  /* 127665cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127665d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127665d3 jne 0x127665d6 */
  if (!C.zf) goto L_127665d6;
  /* 127665d5 int3  */
  x86_unimpl("int3 @ 0x127665d5");
L_127665d6:;
  /* 127665d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127665d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127665da jne 0x127665b7 */
  if (!C.zf) goto L_127665b7;
L_127665dc:;
  /* 127665dc jmp 0x12766530 */
  goto L_12766530;
L_127665e1:;
  /* 127665e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127665e4 mov edx, dword ptr [0x127906b4] */
  EDX = (r32((uint32_t)(0x127906b4)));
  /* 127665ea mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 127665ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127665f0 mov ecx, dword ptr [0x127906a8] */
  ECX = (r32((uint32_t)(0x127906a8)));
  /* 127665f6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 127665f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 127665fb call 0x127687a0 */
  push32(0x12766600u); f_127687a0();
  /* 12766600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12766603:;
  /* 12766603 pop edi */
  EDI = (pop32());
  /* 12766604 pop esi */
  ESI = (pop32());
  /* 12766605 pop ebx */
  EBX = (pop32());
  /* 12766606 mov esp, ebp */
  ESP = (EBP);
  /* 12766608 pop ebp */
  EBP = (pop32());
  /* 12766609 ret  */
  ESPCHK(0x127664a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006610 @ 0x12766610 (291 bytes, 95 insns) */
void f_12766610(void) {
  FTRACE(0x12766610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766610 push ebp */
  push32((uint32_t)(EBP));
  /* 12766611 mov ebp, esp */
  EBP = (ESP);
  /* 12766613 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766616 push ebx */
  push32((uint32_t)(EBX));
  /* 12766617 push esi */
  push32((uint32_t)(ESI));
  /* 12766618 push edi */
  push32((uint32_t)(EDI));
  /* 12766619 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12766620 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766624 je 0x12766632 */
  if (C.zf) goto L_12766632;
  /* 12766626 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276662a je 0x12766632 */
  if (C.zf) goto L_12766632;
  /* 1276662c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766630 jne 0x12766660 */
  if (!C.zf) goto L_12766660;
L_12766632:;
  /* 12766632 push 0x1278bc54 */
  push32((uint32_t)(0x1278bc54u));
  /* 12766637 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 1276663c push 0 */
  push32((uint32_t)(0x0u));
  /* 1276663e push 0 */
  push32((uint32_t)(0x0u));
  /* 12766640 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766642 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766644 call 0x12763dc0 */
  push32(0x12766649u); f_12763dc0();
  /* 12766649 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276664c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276664f jne 0x12766652 */
  if (!C.zf) goto L_12766652;
  /* 12766651 int3  */
  x86_unimpl("int3 @ 0x12766651");
L_12766652:;
  /* 12766652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12766654 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766656 jne 0x12766632 */
  if (!C.zf) goto L_12766632;
  /* 12766658 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276665b jmp 0x1276672c */
  goto L_1276672c;
L_12766660:;
  /* 12766660 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12766667 jmp 0x12766672 */
  goto L_12766672;
L_12766669:;
  /* 12766669 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276666c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276666f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12766672:;
  /* 12766672 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766676 jge 0x127666fc */
  if ((C.sf==C.of)) goto L_127666fc;
  /* 1276667c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276667f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766685 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12766688 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1276668c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766690 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766696 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1276669a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276669d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127666a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127666a3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 127666a6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 127666aa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127666ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127666b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127666b4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 127666b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127666bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127666be cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127666c3 jne 0x127666d2 */
  if (!C.zf) goto L_127666d2;
  /* 127666c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127666c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127666cb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127666d0 je 0x127666f7 */
  if (C.zf) goto L_127666f7;
L_127666d2:;
  /* 127666d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127666d6 je 0x127666f7 */
  if (C.zf) goto L_127666f7;
  /* 127666d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127666dc jne 0x127666f0 */
  if (!C.zf) goto L_127666f0;
  /* 127666de cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127666e2 jne 0x127666f7 */
  if (!C.zf) goto L_127666f7;
  /* 127666e4 mov eax, dword ptr [0x1278ea84] */
  EAX = (r32((uint32_t)(0x1278ea84)));
  /* 127666e9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 127666ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127666ee je 0x127666f7 */
  if (C.zf) goto L_127666f7;
L_127666f0:;
  /* 127666f0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_127666f7:;
  /* 127666f7 jmp 0x12766669 */
  goto L_12766669;
L_127666fc:;
  /* 127666fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 127666ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12766702 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12766705 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766708 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276670b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1276670e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766711 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12766714 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12766717 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276671a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276671d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12766720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766723 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12766729 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1276672c:;
  /* 1276672c pop edi */
  EDI = (pop32());
  /* 1276672d pop esi */
  ESI = (pop32());
  /* 1276672e pop ebx */
  EBX = (pop32());
  /* 1276672f mov esp, ebp */
  ESP = (EBP);
  /* 12766731 pop ebp */
  EBP = (pop32());
  /* 12766732 ret  */
  ESPCHK(0x12766610u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x12766740 (697 bytes, 253 insns) */
void f_12766740(void) {
  FTRACE(0x12766740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766740 push ebp */
  push32((uint32_t)(EBP));
  /* 12766741 mov ebp, esp */
  EBP = (ESP);
  /* 12766743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766746 push ebx */
  push32((uint32_t)(EBX));
  /* 12766747 push esi */
  push32((uint32_t)(ESI));
  /* 12766748 push edi */
  push32((uint32_t)(EDI));
  /* 12766749 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12766750 push 9 */
  push32((uint32_t)(0x9u));
  /* 12766752 call 0x12768700 */
  push32(0x12766757u); f_12768700();
  /* 12766757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276675a:;
  /* 1276675a push 0x1278bd4c */
  push32((uint32_t)(0x1278bd4cu));
  /* 1276675f push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12766764 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766766 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276676a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276676c call 0x12763dc0 */
  push32(0x12766771u); f_12763dc0();
  /* 12766771 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766774 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766777 jne 0x1276677a */
  if (!C.zf) goto L_1276677a;
  /* 12766779 int3  */
  x86_unimpl("int3 @ 0x12766779");
L_1276677a:;
  /* 1276677a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276677c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276677e jne 0x1276675a */
  if (!C.zf) goto L_1276675a;
  /* 12766780 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766784 je 0x1276678e */
  if (C.zf) goto L_1276678e;
  /* 12766786 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766789 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276678b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1276678e:;
  /* 1276678e mov eax, dword ptr [0x127906ac] */
  EAX = (r32((uint32_t)(0x127906ac)));
  /* 12766793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12766796 jmp 0x127667a0 */
  goto L_127667a0;
L_12766798:;
  /* 12766798 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276679b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276679d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_127667a0:;
  /* 127667a0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127667a4 je 0x127669c2 */
  if (C.zf) goto L_127669c2;
  /* 127667aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127667ad cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127667b0 je 0x127669c2 */
  if (C.zf) goto L_127669c2;
  /* 127667b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127667b9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127667bc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127667c2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127667c5 je 0x127667f4 */
  if (C.zf) goto L_127667f4;
  /* 127667c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127667ca mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 127667cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 127667d3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127667d5 je 0x127667f4 */
  if (C.zf) goto L_127667f4;
  /* 127667d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127667da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127667dd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127667e2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127667e5 jne 0x127667f9 */
  if (!C.zf) goto L_127667f9;
  /* 127667e7 mov ecx, dword ptr [0x1278ea84] */
  ECX = (r32((uint32_t)(0x1278ea84)));
  /* 127667ed and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 127667f0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127667f2 jne 0x127667f9 */
  if (!C.zf) goto L_127667f9;
L_127667f4:;
  /* 127667f4 jmp 0x127669bd */
  goto L_127669bd;
L_127667f9:;
  /* 127667f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127667fc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766800 je 0x12766872 */
  if (C.zf) goto L_12766872;
  /* 12766802 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766804 push 1 */
  push32((uint32_t)(0x1u));
  /* 12766806 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766809 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1276680c push ecx */
  push32((uint32_t)(ECX));
  /* 1276680d call 0x127662b0 */
  push32(0x12766812u); f_127662b0();
  /* 12766812 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766817 jne 0x12766843 */
  if (!C.zf) goto L_12766843;
L_12766819:;
  /* 12766819 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276681c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1276681f push eax */
  push32((uint32_t)(EAX));
  /* 12766820 push 0x1278bd38 */
  push32((uint32_t)(0x1278bd38u));
  /* 12766825 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766827 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276682b push 0 */
  push32((uint32_t)(0x0u));
  /* 1276682d call 0x12763dc0 */
  push32(0x12766832u); f_12763dc0();
  /* 12766832 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766835 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766838 jne 0x1276683b */
  if (!C.zf) goto L_1276683b;
  /* 1276683a int3  */
  x86_unimpl("int3 @ 0x1276683a");
L_1276683b:;
  /* 1276683b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1276683d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1276683f jne 0x12766819 */
  if (!C.zf) goto L_12766819;
  /* 12766841 jmp 0x12766872 */
  goto L_12766872;
L_12766843:;
  /* 12766843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766846 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12766849 push eax */
  push32((uint32_t)(EAX));
  /* 1276684a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276684d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12766850 push edx */
  push32((uint32_t)(EDX));
  /* 12766851 push 0x1278bd2c */
  push32((uint32_t)(0x1278bd2cu));
  /* 12766856 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766858 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276685a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276685c push 0 */
  push32((uint32_t)(0x0u));
  /* 1276685e call 0x12763dc0 */
  push32(0x12766863u); f_12763dc0();
  /* 12766863 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766866 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766869 jne 0x1276686c */
  if (!C.zf) goto L_1276686c;
  /* 1276686b int3  */
  x86_unimpl("int3 @ 0x1276686b");
L_1276686c:;
  /* 1276686c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276686e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766870 jne 0x12766843 */
  if (!C.zf) goto L_12766843;
L_12766872:;
  /* 12766872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766875 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12766878 push edx */
  push32((uint32_t)(EDX));
  /* 12766879 push 0x1278bd24 */
  push32((uint32_t)(0x1278bd24u));
  /* 1276687e push 0 */
  push32((uint32_t)(0x0u));
  /* 12766880 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766882 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766884 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766886 call 0x12763dc0 */
  push32(0x1276688bu); f_12763dc0();
  /* 1276688b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276688e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766891 jne 0x12766894 */
  if (!C.zf) goto L_12766894;
  /* 12766893 int3  */
  x86_unimpl("int3 @ 0x12766893");
L_12766894:;
  /* 12766894 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12766896 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766898 jne 0x12766872 */
  if (!C.zf) goto L_12766872;
  /* 1276689a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276689d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 127668a0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127668a6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127668a9 jne 0x1276691c */
  if (!C.zf) goto L_1276691c;
L_127668ab:;
  /* 127668ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127668ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127668b1 push ecx */
  push32((uint32_t)(ECX));
  /* 127668b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127668b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 127668b8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 127668bb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127668c0 push eax */
  push32((uint32_t)(EAX));
  /* 127668c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127668c4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127668c7 push ecx */
  push32((uint32_t)(ECX));
  /* 127668c8 push 0x1278bcf0 */
  push32((uint32_t)(0x1278bcf0u));
  /* 127668cd push 0 */
  push32((uint32_t)(0x0u));
  /* 127668cf push 0 */
  push32((uint32_t)(0x0u));
  /* 127668d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 127668d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127668d5 call 0x12763dc0 */
  push32(0x127668dau); f_12763dc0();
  /* 127668da add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127668dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127668e0 jne 0x127668e3 */
  if (!C.zf) goto L_127668e3;
  /* 127668e2 int3  */
  x86_unimpl("int3 @ 0x127668e2");
L_127668e3:;
  /* 127668e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127668e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127668e7 jne 0x127668ab */
  if (!C.zf) goto L_127668ab;
  /* 127668e9 cmp dword ptr [0x12792018], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792018))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127668f0 je 0x1276690b */
  if (C.zf) goto L_1276690b;
  /* 127668f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127668f5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 127668f8 push ecx */
  push32((uint32_t)(ECX));
  /* 127668f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127668fc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127668ff push edx */
  push32((uint32_t)(EDX));
  /* 12766900 call dword ptr [0x12792018] */
  call_ind((uint32_t)(r32((uint32_t)(0x12792018))), 0x12766906u);
  /* 12766906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766909 jmp 0x12766917 */
  goto L_12766917;
L_1276690b:;
  /* 1276690b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276690e push eax */
  push32((uint32_t)(EAX));
  /* 1276690f call 0x12766a00 */
  push32(0x12766914u); f_12766a00();
  /* 12766914 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12766917:;
  /* 12766917 jmp 0x127669bd */
  goto L_127669bd;
L_1276691c:;
  /* 1276691c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276691f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766923 jne 0x12766962 */
  if (!C.zf) goto L_12766962;
L_12766925:;
  /* 12766925 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766928 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1276692b push eax */
  push32((uint32_t)(EAX));
  /* 1276692c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276692f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766932 push ecx */
  push32((uint32_t)(ECX));
  /* 12766933 push 0x1278bcc8 */
  push32((uint32_t)(0x1278bcc8u));
  /* 12766938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276693a push 0 */
  push32((uint32_t)(0x0u));
  /* 1276693c push 0 */
  push32((uint32_t)(0x0u));
  /* 1276693e push 0 */
  push32((uint32_t)(0x0u));
  /* 12766940 call 0x12763dc0 */
  push32(0x12766945u); f_12763dc0();
  /* 12766945 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766948 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276694b jne 0x1276694e */
  if (!C.zf) goto L_1276694e;
  /* 1276694d int3  */
  x86_unimpl("int3 @ 0x1276694d");
L_1276694e:;
  /* 1276694e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12766950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12766952 jne 0x12766925 */
  if (!C.zf) goto L_12766925;
  /* 12766954 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766957 push eax */
  push32((uint32_t)(EAX));
  /* 12766958 call 0x12766a00 */
  push32(0x1276695du); f_12766a00();
  /* 1276695d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766960 jmp 0x127669bd */
  goto L_127669bd;
L_12766962:;
  /* 12766962 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766965 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12766968 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1276696e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766971 jne 0x127669bd */
  if (!C.zf) goto L_127669bd;
L_12766973:;
  /* 12766973 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766976 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12766979 push ecx */
  push32((uint32_t)(ECX));
  /* 1276697a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276697d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12766980 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12766983 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12766988 push eax */
  push32((uint32_t)(EAX));
  /* 12766989 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276698c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276698f push ecx */
  push32((uint32_t)(ECX));
  /* 12766990 push 0x1278bc94 */
  push32((uint32_t)(0x1278bc94u));
  /* 12766995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766997 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276699b push 0 */
  push32((uint32_t)(0x0u));
  /* 1276699d call 0x12763dc0 */
  push32(0x127669a2u); f_12763dc0();
  /* 127669a2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127669a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127669a8 jne 0x127669ab */
  if (!C.zf) goto L_127669ab;
  /* 127669aa int3  */
  x86_unimpl("int3 @ 0x127669aa");
L_127669ab:;
  /* 127669ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127669ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 127669af jne 0x12766973 */
  if (!C.zf) goto L_12766973;
  /* 127669b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127669b4 push eax */
  push32((uint32_t)(EAX));
  /* 127669b5 call 0x12766a00 */
  push32(0x127669bau); f_12766a00();
  /* 127669ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127669bd:;
  /* 127669bd jmp 0x12766798 */
  goto L_12766798;
L_127669c2:;
  /* 127669c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 127669c4 call 0x127687a0 */
  push32(0x127669c9u); f_127687a0();
  /* 127669c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127669cc:;
  /* 127669cc push 0x1278bc7c */
  push32((uint32_t)(0x1278bc7cu));
  /* 127669d1 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 127669d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 127669d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 127669da push 0 */
  push32((uint32_t)(0x0u));
  /* 127669dc push 0 */
  push32((uint32_t)(0x0u));
  /* 127669de call 0x12763dc0 */
  push32(0x127669e3u); f_12763dc0();
  /* 127669e3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127669e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127669e9 jne 0x127669ec */
  if (!C.zf) goto L_127669ec;
  /* 127669eb int3  */
  x86_unimpl("int3 @ 0x127669eb");
L_127669ec:;
  /* 127669ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127669ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127669f0 jne 0x127669cc */
  if (!C.zf) goto L_127669cc;
  /* 127669f2 pop edi */
  EDI = (pop32());
  /* 127669f3 pop esi */
  ESI = (pop32());
  /* 127669f4 pop ebx */
  EBX = (pop32());
  /* 127669f5 mov esp, ebp */
  ESP = (EBP);
  /* 127669f7 pop ebp */
  EBP = (pop32());
  /* 127669f8 ret  */
  ESPCHK(0x12766740u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x12766a00 (276 bytes, 89 insns) */
void f_12766a00(void) {
  FTRACE(0x12766a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12766a01 mov ebp, esp */
  EBP = (ESP);
  /* 12766a03 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766a06 push ebx */
  push32((uint32_t)(EBX));
  /* 12766a07 push esi */
  push32((uint32_t)(ESI));
  /* 12766a08 push edi */
  push32((uint32_t)(EDI));
  /* 12766a09 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12766a10 jmp 0x12766a1b */
  goto L_12766a1b;
L_12766a12:;
  /* 12766a12 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12766a15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766a18 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12766a1b:;
  /* 12766a1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766a1e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766a22 jge 0x12766a2f */
  if ((C.sf==C.of)) goto L_12766a2f;
  /* 12766a24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766a27 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12766a2a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12766a2d jmp 0x12766a36 */
  goto L_12766a36;
L_12766a2f:;
  /* 12766a2f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12766a36:;
  /* 12766a36 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12766a39 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766a3c jge 0x12766adc */
  if ((C.sf==C.of)) goto L_12766adc;
  /* 12766a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766a45 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766a48 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12766a4b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12766a4e cmp dword ptr [0x1278eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1278eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766a55 jle 0x12766a73 */
  if ((C.zf||C.sf!=C.of)) goto L_12766a73;
  /* 12766a57 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12766a5c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12766a5f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12766a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12766a66 call 0x1276ad10 */
  push32(0x12766a6bu); f_1276ad10();
  /* 12766a6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766a6e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12766a71 jmp 0x12766a90 */
  goto L_12766a90;
L_12766a73:;
  /* 12766a73 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12766a76 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12766a7c mov eax, dword ptr [0x1278ec98] */
  EAX = (r32((uint32_t)(0x1278ec98)));
  /* 12766a81 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12766a83 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12766a87 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12766a8d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12766a90:;
  /* 12766a90 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766a94 je 0x12766aa4 */
  if (C.zf) goto L_12766aa4;
  /* 12766a96 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12766a99 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12766a9f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12766aa2 jmp 0x12766aab */
  goto L_12766aab;
L_12766aa4:;
  /* 12766aa4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12766aab:;
  /* 12766aab mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12766aae mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12766ab1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12766ab5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12766ab8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12766abe push edx */
  push32((uint32_t)(EDX));
  /* 12766abf push 0x1278bd70 */
  push32((uint32_t)(0x1278bd70u));
  /* 12766ac4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12766ac7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12766aca lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12766ace push ecx */
  push32((uint32_t)(ECX));
  /* 12766acf call 0x1276ac10 */
  push32(0x12766ad4u); f_1276ac10();
  /* 12766ad4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766ad7 jmp 0x12766a12 */
  goto L_12766a12;
L_12766adc:;
  /* 12766adc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12766adf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12766ae4:;
  /* 12766ae4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12766ae7 push eax */
  push32((uint32_t)(EAX));
  /* 12766ae8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12766aeb push ecx */
  push32((uint32_t)(ECX));
  /* 12766aec push 0x1278bd60 */
  push32((uint32_t)(0x1278bd60u));
  /* 12766af1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766af9 call 0x12763dc0 */
  push32(0x12766afeu); f_12763dc0();
  /* 12766afe add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766b01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766b04 jne 0x12766b07 */
  if (!C.zf) goto L_12766b07;
  /* 12766b06 int3  */
  x86_unimpl("int3 @ 0x12766b06");
L_12766b07:;
  /* 12766b07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12766b09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12766b0b jne 0x12766ae4 */
  if (!C.zf) goto L_12766ae4;
  /* 12766b0d pop edi */
  EDI = (pop32());
  /* 12766b0e pop esi */
  ESI = (pop32());
  /* 12766b0f pop ebx */
  EBX = (pop32());
  /* 12766b10 mov esp, ebp */
  ESP = (EBP);
  /* 12766b12 pop ebp */
  EBP = (pop32());
  /* 12766b13 ret  */
  ESPCHK(0x12766a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b20 @ 0x12766b20 (116 bytes, 46 insns) */
void f_12766b20(void) {
  FTRACE(0x12766b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12766b21 mov ebp, esp */
  EBP = (ESP);
  /* 12766b23 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766b26 push ebx */
  push32((uint32_t)(EBX));
  /* 12766b27 push esi */
  push32((uint32_t)(ESI));
  /* 12766b28 push edi */
  push32((uint32_t)(EDI));
  /* 12766b29 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12766b2c push eax */
  push32((uint32_t)(EAX));
  /* 12766b2d call 0x127664a0 */
  push32(0x12766b32u); f_127664a0();
  /* 12766b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766b35 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766b39 jne 0x12766b54 */
  if (!C.zf) goto L_12766b54;
  /* 12766b3b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766b3f jne 0x12766b54 */
  if (!C.zf) goto L_12766b54;
  /* 12766b41 mov ecx, dword ptr [0x1278ea84] */
  ECX = (r32((uint32_t)(0x1278ea84)));
  /* 12766b47 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12766b4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12766b4c je 0x12766b8b */
  if (C.zf) goto L_12766b8b;
  /* 12766b4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766b52 je 0x12766b8b */
  if (C.zf) goto L_12766b8b;
L_12766b54:;
  /* 12766b54 push 0x1278bd78 */
  push32((uint32_t)(0x1278bd78u));
  /* 12766b59 push 0x1278b744 */
  push32((uint32_t)(0x1278b744u));
  /* 12766b5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12766b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766b62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766b64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766b66 call 0x12763dc0 */
  push32(0x12766b6bu); f_12763dc0();
  /* 12766b6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766b6e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766b71 jne 0x12766b74 */
  if (!C.zf) goto L_12766b74;
  /* 12766b73 int3  */
  x86_unimpl("int3 @ 0x12766b73");
L_12766b74:;
  /* 12766b74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12766b76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12766b78 jne 0x12766b54 */
  if (!C.zf) goto L_12766b54;
  /* 12766b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12766b7c call 0x12766740 */
  push32(0x12766b81u); f_12766740();
  /* 12766b81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766b84 mov eax, 1 */
  EAX = (0x1u);
  /* 12766b89 jmp 0x12766b8d */
  goto L_12766b8d;
L_12766b8b:;
  /* 12766b8b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12766b8d:;
  /* 12766b8d pop edi */
  EDI = (pop32());
  /* 12766b8e pop esi */
  ESI = (pop32());
  /* 12766b8f pop ebx */
  EBX = (pop32());
  /* 12766b90 mov esp, ebp */
  ESP = (EBP);
  /* 12766b92 pop ebp */
  EBP = (pop32());
  /* 12766b93 ret  */
  ESPCHK(0x12766b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x12766ba0 (197 bytes, 79 insns) */
void f_12766ba0(void) {
  FTRACE(0x12766ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12766ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12766ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12766ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 12766ba5 push esi */
  push32((uint32_t)(ESI));
  /* 12766ba6 push edi */
  push32((uint32_t)(EDI));
  /* 12766ba7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766bab jne 0x12766bb2 */
  if (!C.zf) goto L_12766bb2;
  /* 12766bad jmp 0x12766c5e */
  goto L_12766c5e;
L_12766bb2:;
  /* 12766bb2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12766bb9 jmp 0x12766bc4 */
  goto L_12766bc4;
L_12766bbb:;
  /* 12766bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766bbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766bc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12766bc4:;
  /* 12766bc4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766bc8 jge 0x12766c0e */
  if ((C.sf==C.of)) goto L_12766c0e;
L_12766bca:;
  /* 12766bca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766bcd mov edx, dword ptr [ecx*4 + 0x1278ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278ea94)));
  /* 12766bd4 push edx */
  push32((uint32_t)(EDX));
  /* 12766bd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766bd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766bdb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12766bdf push edx */
  push32((uint32_t)(EDX));
  /* 12766be0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766be3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766be6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12766bea push edx */
  push32((uint32_t)(EDX));
  /* 12766beb push 0x1278bdd4 */
  push32((uint32_t)(0x1278bdd4u));
  /* 12766bf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766bf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766bf8 call 0x12763dc0 */
  push32(0x12766bfdu); f_12763dc0();
  /* 12766bfd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766c00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766c03 jne 0x12766c06 */
  if (!C.zf) goto L_12766c06;
  /* 12766c05 int3  */
  x86_unimpl("int3 @ 0x12766c05");
L_12766c06:;
  /* 12766c06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12766c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766c0a jne 0x12766bca */
  if (!C.zf) goto L_12766bca;
  /* 12766c0c jmp 0x12766bbb */
  goto L_12766bbb;
L_12766c0e:;
  /* 12766c0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766c11 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12766c14 push edx */
  push32((uint32_t)(EDX));
  /* 12766c15 push 0x1278bdb0 */
  push32((uint32_t)(0x1278bdb0u));
  /* 12766c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12766c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12766c1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12766c20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766c22 call 0x12763dc0 */
  push32(0x12766c27u); f_12763dc0();
  /* 12766c27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766c2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766c2d jne 0x12766c30 */
  if (!C.zf) goto L_12766c30;
  /* 12766c2f int3  */
  x86_unimpl("int3 @ 0x12766c2f");
L_12766c30:;
  /* 12766c30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12766c32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766c34 jne 0x12766c0e */
  if (!C.zf) goto L_12766c0e;
L_12766c36:;
  /* 12766c36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766c39 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12766c3c push edx */
  push32((uint32_t)(EDX));
  /* 12766c3d push 0x1278bd90 */
  push32((uint32_t)(0x1278bd90u));
  /* 12766c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766c46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12766c4a call 0x12763dc0 */
  push32(0x12766c4fu); f_12763dc0();
  /* 12766c4f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766c52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766c55 jne 0x12766c58 */
  if (!C.zf) goto L_12766c58;
  /* 12766c57 int3  */
  x86_unimpl("int3 @ 0x12766c57");
L_12766c58:;
  /* 12766c58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12766c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766c5c jne 0x12766c36 */
  if (!C.zf) goto L_12766c36;
L_12766c5e:;
  /* 12766c5e pop edi */
  EDI = (pop32());
  /* 12766c5f pop esi */
  ESI = (pop32());
  /* 12766c60 pop ebx */
  EBX = (pop32());
  /* 12766c61 mov esp, ebp */
  ESP = (EBP);
  /* 12766c63 pop ebp */
  EBP = (pop32());
  /* 12766c64 ret  */
  ESPCHK(0x12766ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x12766c70 (329 bytes, 102 insns) */
void f_12766c70(void) {
  FTRACE(0x12766c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12766c71 mov ebp, esp */
  EBP = (ESP);
  /* 12766c73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766c76 cmp dword ptr [0x12792190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766c7d jne 0x12766c84 */
  if (!C.zf) goto L_12766c84;
  /* 12766c7f call 0x1276b5b0 */
  push32(0x12766c84u); f_1276b5b0();
L_12766c84:;
  /* 12766c84 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12766c8b mov eax, dword ptr [0x12790648] */
  EAX = (r32((uint32_t)(0x12790648)));
  /* 12766c90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12766c93:;
  /* 12766c93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766c96 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12766c99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12766c9b je 0x12766cc9 */
  if (C.zf) goto L_12766cc9;
  /* 12766c9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766ca0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12766ca3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766ca6 je 0x12766cb1 */
  if (C.zf) goto L_12766cb1;
  /* 12766ca8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766cab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766cae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12766cb1:;
  /* 12766cb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766cb4 push eax */
  push32((uint32_t)(EAX));
  /* 12766cb5 call 0x12767b30 */
  push32(0x12766cbau); f_12767b30();
  /* 12766cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766cbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766cc0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12766cc4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12766cc7 jmp 0x12766c93 */
  goto L_12766c93;
L_12766cc9:;
  /* 12766cc9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12766ccb push 0x1278bdf4 */
  push32((uint32_t)(0x1278bdf4u));
  /* 12766cd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12766cd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766cd5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12766cdc push ecx */
  push32((uint32_t)(ECX));
  /* 12766cdd call 0x12764d00 */
  push32(0x12766ce2u); f_12764d00();
  /* 12766ce2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766ce5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12766ce8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766ceb mov dword ptr [0x1279067c], edx */
  w32((uint32_t)(0x1279067c), (EDX));
  /* 12766cf1 cmp dword ptr [0x1279067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1279067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766cf8 jne 0x12766d04 */
  if (!C.zf) goto L_12766d04;
  /* 12766cfa push 9 */
  push32((uint32_t)(0x9u));
  /* 12766cfc call 0x12763c70 */
  push32(0x12766d01u); f_12763c70();
  /* 12766d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12766d04:;
  /* 12766d04 mov eax, dword ptr [0x12790648] */
  EAX = (r32((uint32_t)(0x12790648)));
  /* 12766d09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12766d0c jmp 0x12766d17 */
  goto L_12766d17;
L_12766d0e:;
  /* 12766d0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766d11 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766d14 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12766d17:;
  /* 12766d17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766d1a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12766d1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766d1f je 0x12766d87 */
  if (C.zf) goto L_12766d87;
  /* 12766d21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766d24 push ecx */
  push32((uint32_t)(ECX));
  /* 12766d25 call 0x12767b30 */
  push32(0x12766d2au); f_12767b30();
  /* 12766d2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766d2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766d30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12766d33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766d36 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12766d39 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766d3c je 0x12766d85 */
  if (C.zf) goto L_12766d85;
  /* 12766d3e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12766d40 push 0x1278bdf4 */
  push32((uint32_t)(0x1278bdf4u));
  /* 12766d45 push 2 */
  push32((uint32_t)(0x2u));
  /* 12766d47 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12766d4a push ecx */
  push32((uint32_t)(ECX));
  /* 12766d4b call 0x12764d00 */
  push32(0x12766d50u); f_12764d00();
  /* 12766d50 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766d53 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766d56 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12766d58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766d5b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766d5e jne 0x12766d6a */
  if (!C.zf) goto L_12766d6a;
  /* 12766d60 push 9 */
  push32((uint32_t)(0x9u));
  /* 12766d62 call 0x12763c70 */
  push32(0x12766d67u); f_12763c70();
  /* 12766d67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12766d6a:;
  /* 12766d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766d6d push ecx */
  push32((uint32_t)(ECX));
  /* 12766d6e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766d71 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12766d73 push eax */
  push32((uint32_t)(EAX));
  /* 12766d74 call 0x12767cb0 */
  push32(0x12766d79u); f_12767cb0();
  /* 12766d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766d7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766d7f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766d82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12766d85:;
  /* 12766d85 jmp 0x12766d0e */
  goto L_12766d0e;
L_12766d87:;
  /* 12766d87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12766d89 mov edx, dword ptr [0x12790648] */
  EDX = (r32((uint32_t)(0x12790648)));
  /* 12766d8f push edx */
  push32((uint32_t)(EDX));
  /* 12766d90 call 0x12765790 */
  push32(0x12766d95u); f_12765790();
  /* 12766d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766d98 mov dword ptr [0x12790648], 0 */
  w32((uint32_t)(0x12790648), (0x0u));
  /* 12766da2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766da5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12766dab mov dword ptr [0x12792180], 1 */
  w32((uint32_t)(0x12792180), (0x1u));
  /* 12766db5 mov esp, ebp */
  ESP = (EBP);
  /* 12766db7 pop ebp */
  EBP = (pop32());
  /* 12766db8 ret  */
  ESPCHK(0x12766c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x12766dc0 (216 bytes, 69 insns) */
void f_12766dc0(void) {
  FTRACE(0x12766dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12766dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12766dc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766dc6 cmp dword ptr [0x12792190], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12792190))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766dcd jne 0x12766dd4 */
  if (!C.zf) goto L_12766dd4;
  /* 12766dcf call 0x1276b5b0 */
  push32(0x12766dd4u); f_1276b5b0();
L_12766dd4:;
  /* 12766dd4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12766dd9 push 0x127906b8 */
  push32((uint32_t)(0x127906b8u));
  /* 12766dde push 0 */
  push32((uint32_t)(0x0u));
  /* 12766de0 call dword ptr [0x12793364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793364))), 0x12766de6u);
  /* 12766de6 mov dword ptr [0x1279068c], 0x127906b8 */
  w32((uint32_t)(0x1279068c), (0x127906b8u));
  /* 12766df0 mov eax, dword ptr [0x127921ac] */
  EAX = (r32((uint32_t)(0x127921ac)));
  /* 12766df5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12766df8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12766dfa jne 0x12766e07 */
  if (!C.zf) goto L_12766e07;
  /* 12766dfc mov edx, dword ptr [0x1279068c] */
  EDX = (r32((uint32_t)(0x1279068c)));
  /* 12766e02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12766e05 jmp 0x12766e0f */
  goto L_12766e0f;
L_12766e07:;
  /* 12766e07 mov eax, dword ptr [0x127921ac] */
  EAX = (r32((uint32_t)(0x127921ac)));
  /* 12766e0c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12766e0f:;
  /* 12766e0f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12766e12 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12766e15 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12766e18 push edx */
  push32((uint32_t)(EDX));
  /* 12766e19 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12766e1c push eax */
  push32((uint32_t)(EAX));
  /* 12766e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 12766e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12766e21 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12766e24 push ecx */
  push32((uint32_t)(ECX));
  /* 12766e25 call 0x12766ea0 */
  push32(0x12766e2au); f_12766ea0();
  /* 12766e2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766e2d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12766e32 push 0x1278be00 */
  push32((uint32_t)(0x1278be00u));
  /* 12766e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12766e39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766e3f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12766e42 push ecx */
  push32((uint32_t)(ECX));
  /* 12766e43 call 0x12764d00 */
  push32(0x12766e48u); f_12764d00();
  /* 12766e48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766e4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12766e4e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766e52 jne 0x12766e5e */
  if (!C.zf) goto L_12766e5e;
  /* 12766e54 push 8 */
  push32((uint32_t)(0x8u));
  /* 12766e56 call 0x12763c70 */
  push32(0x12766e5bu); f_12763c70();
  /* 12766e5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12766e5e:;
  /* 12766e5e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12766e61 push edx */
  push32((uint32_t)(EDX));
  /* 12766e62 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12766e65 push eax */
  push32((uint32_t)(EAX));
  /* 12766e66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766e69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766e6c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12766e6f push eax */
  push32((uint32_t)(EAX));
  /* 12766e70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12766e74 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12766e77 push edx */
  push32((uint32_t)(EDX));
  /* 12766e78 call 0x12766ea0 */
  push32(0x12766e7du); f_12766ea0();
  /* 12766e7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12766e80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766e83 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766e86 mov dword ptr [0x12790670], eax */
  w32((uint32_t)(0x12790670), (EAX));
  /* 12766e8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12766e8e mov dword ptr [0x12790674], ecx */
  w32((uint32_t)(0x12790674), (ECX));
  /* 12766e94 mov esp, ebp */
  ESP = (EBP);
  /* 12766e96 pop ebp */
  EBP = (pop32());
  /* 12766e97 ret  */
  ESPCHK(0x12766dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x12766ea0 (1060 bytes, 360 insns) */
void f_12766ea0(void) {
  FTRACE(0x12766ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12766ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12766ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12766ea3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12766ea6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766ea9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12766eaf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12766eb2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12766eb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12766ebb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12766ebe cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766ec2 je 0x12766ed5 */
  if (C.zf) goto L_12766ed5;
  /* 12766ec4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12766ec7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766eca mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12766ecc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12766ecf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766ed2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12766ed5:;
  /* 12766ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766ed8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12766edb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766ede jne 0x12766fad */
  if (!C.zf) goto L_12766fad;
L_12766ee4:;
  /* 12766ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766ee7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766eea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12766eed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766ef0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12766ef3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766ef6 je 0x12766f72 */
  if (C.zf) goto L_12766f72;
  /* 12766ef8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766efb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12766efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766f00 je 0x12766f72 */
  if (C.zf) goto L_12766f72;
  /* 12766f02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766f05 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12766f07 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12766f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12766f0b mov al, byte ptr [edx + 0x12791ee1] */
  AL = (r8((uint32_t)(EDX + 0x12791ee1)));
  /* 12766f11 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12766f14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12766f16 je 0x12766f47 */
  if (C.zf) goto L_12766f47;
  /* 12766f18 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766f1b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12766f1d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766f20 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766f23 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12766f25 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766f29 je 0x12766f47 */
  if (C.zf) goto L_12766f47;
  /* 12766f2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766f2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766f31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12766f33 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12766f35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766f38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766f3b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12766f3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766f41 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766f44 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12766f47:;
  /* 12766f47 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766f4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12766f4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766f4f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766f52 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12766f54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766f58 je 0x12766f6d */
  if (C.zf) goto L_12766f6d;
  /* 12766f5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766f5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766f60 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12766f62 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12766f64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766f67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766f6a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12766f6d:;
  /* 12766f6d jmp 0x12766ee4 */
  goto L_12766ee4;
L_12766f72:;
  /* 12766f72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766f75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12766f77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766f7a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766f7d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12766f7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766f83 je 0x12766f94 */
  if (C.zf) goto L_12766f94;
  /* 12766f85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766f88 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12766f8b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766f8e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766f91 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12766f94:;
  /* 12766f94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766f97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12766f9a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766f9d jne 0x12766fa8 */
  if (!C.zf) goto L_12766fa8;
  /* 12766f9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766fa2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766fa5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12766fa8:;
  /* 12766fa8 jmp 0x1276707c */
  goto L_1276707c;
L_12766fad:;
  /* 12766fad mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766fb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12766fb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766fb5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766fb8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12766fba cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12766fbe je 0x12766fd3 */
  if (C.zf) goto L_12766fd3;
  /* 12766fc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766fc3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766fc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12766fc8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12766fca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12766fcd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766fd0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12766fd3:;
  /* 12766fd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766fd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12766fd8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12766fdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12766fde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12766fe1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12766fe4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12766fe7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12766fed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12766fef mov dl, byte ptr [ecx + 0x12791ee1] */
  DL = (r8((uint32_t)(ECX + 0x12791ee1)));
  /* 12766ff5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12766ff8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12766ffa je 0x1276702b */
  if (C.zf) goto L_1276702b;
  /* 12766ffc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12766fff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12767001 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767004 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12767007 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12767009 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276700d je 0x12767022 */
  if (C.zf) goto L_12767022;
  /* 1276700f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767015 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12767017 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12767019 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276701c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276701f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12767022:;
  /* 12767022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767025 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767028 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1276702b:;
  /* 1276702b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276702e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12767034 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767037 je 0x12767057 */
  if (C.zf) goto L_12767057;
  /* 12767039 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276703c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12767041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12767043 je 0x12767057 */
  if (C.zf) goto L_12767057;
  /* 12767045 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767048 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1276704e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767051 jne 0x12766fad */
  if (!C.zf) goto L_12766fad;
L_12767057:;
  /* 12767057 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276705a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12767060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12767062 jne 0x1276706f */
  if (!C.zf) goto L_1276706f;
  /* 12767064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767067 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276706a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276706d jmp 0x1276707c */
  goto L_1276707c;
L_1276706f:;
  /* 1276706f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767073 je 0x1276707c */
  if (C.zf) goto L_1276707c;
  /* 12767075 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767078 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1276707c:;
  /* 1276707c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12767083:;
  /* 12767083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767086 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12767089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276708b je 0x127670ae */
  if (C.zf) goto L_127670ae;
L_1276708d:;
  /* 1276708d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767090 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12767093 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767096 je 0x127670a3 */
  if (C.zf) goto L_127670a3;
  /* 12767098 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276709b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1276709e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127670a1 jne 0x127670ae */
  if (!C.zf) goto L_127670ae;
L_127670a3:;
  /* 127670a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127670a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127670a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127670ac jmp 0x1276708d */
  goto L_1276708d;
L_127670ae:;
  /* 127670ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127670b1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127670b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127670b6 jne 0x127670bd */
  if (!C.zf) goto L_127670bd;
  /* 127670b8 jmp 0x1276729b */
  goto L_1276729b;
L_127670bd:;
  /* 127670bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127670c1 je 0x127670d4 */
  if (C.zf) goto L_127670d4;
  /* 127670c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127670c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127670c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 127670cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127670ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127670d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_127670d4:;
  /* 127670d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127670d7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127670d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127670dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127670df mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_127670e1:;
  /* 127670e1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 127670e8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_127670ef:;
  /* 127670ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127670f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127670f5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127670f8 jne 0x1276710e */
  if (!C.zf) goto L_1276710e;
  /* 127670fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127670fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767100 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12767103 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12767106 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767109 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1276710c jmp 0x127670ef */
  goto L_127670ef;
L_1276710e:;
  /* 1276710e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767111 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12767114 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767117 jne 0x1276716a */
  if (!C.zf) goto L_1276716a;
  /* 12767119 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276711c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276711e mov ecx, 2 */
  ECX = (0x2u);
  /* 12767123 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12767125 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12767127 jne 0x12767162 */
  if (!C.zf) goto L_12767162;
  /* 12767129 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276712d je 0x1276714f */
  if (C.zf) goto L_1276714f;
  /* 1276712f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767132 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12767136 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767139 jne 0x12767146 */
  if (!C.zf) goto L_12767146;
  /* 1276713b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276713e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767141 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12767144 jmp 0x1276714d */
  goto L_1276714d;
L_12767146:;
  /* 12767146 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1276714d:;
  /* 1276714d jmp 0x12767156 */
  goto L_12767156;
L_1276714f:;
  /* 1276714f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12767156:;
  /* 12767156 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12767158 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276715c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1276715f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12767162:;
  /* 12767162 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12767165 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12767167 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1276716a:;
  /* 1276716a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276716d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12767170 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767173 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12767176 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12767178 je 0x1276719e */
  if (C.zf) goto L_1276719e;
  /* 1276717a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276717e je 0x1276718f */
  if (C.zf) goto L_1276718f;
  /* 12767180 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767183 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12767186 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767189 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276718c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1276718f:;
  /* 1276718f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12767192 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12767194 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767197 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276719a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1276719c jmp 0x1276716a */
  goto L_1276716a;
L_1276719e:;
  /* 1276719e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127671a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 127671a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 127671a6 je 0x127671c4 */
  if (C.zf) goto L_127671c4;
  /* 127671a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127671ac jne 0x127671c9 */
  if (!C.zf) goto L_127671c9;
  /* 127671ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127671b1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 127671b4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127671b7 je 0x127671c4 */
  if (C.zf) goto L_127671c4;
  /* 127671b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127671bc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 127671bf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127671c2 jne 0x127671c9 */
  if (!C.zf) goto L_127671c9;
L_127671c4:;
  /* 127671c4 jmp 0x12767274 */
  goto L_12767274;
L_127671c9:;
  /* 127671c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127671cd je 0x12767266 */
  if (C.zf) goto L_12767266;
  /* 127671d3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127671d7 je 0x1276722d */
  if (C.zf) goto L_1276722d;
  /* 127671d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127671dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127671de mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 127671e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 127671e2 mov cl, byte ptr [eax + 0x12791ee1] */
  CL = (r8((uint32_t)(EAX + 0x12791ee1)));
  /* 127671e8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 127671eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 127671ed je 0x12767218 */
  if (C.zf) goto L_12767218;
  /* 127671ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127671f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127671f5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 127671f7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 127671f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127671fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127671ff mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12767202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767205 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767208 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276720b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276720e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12767210 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767213 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12767216 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12767218:;
  /* 12767218 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276721b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276721e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12767220 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12767222 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767225 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767228 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1276722b jmp 0x12767259 */
  goto L_12767259;
L_1276722d:;
  /* 1276722d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767230 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12767232 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12767234 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12767236 mov cl, byte ptr [eax + 0x12791ee1] */
  CL = (r8((uint32_t)(EAX + 0x12791ee1)));
  /* 1276723c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1276723f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12767241 je 0x12767259 */
  if (C.zf) goto L_12767259;
  /* 12767243 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767246 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767249 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276724c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276724f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12767251 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767254 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12767257 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12767259:;
  /* 12767259 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276725c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276725e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767261 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12767264 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12767266:;
  /* 12767266 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767269 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276726c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276726f jmp 0x127670e1 */
  goto L_127670e1;
L_12767274:;
  /* 12767274 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767278 je 0x12767289 */
  if (C.zf) goto L_12767289;
  /* 1276727a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276727d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12767280 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767283 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767286 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12767289:;
  /* 12767289 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1276728c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1276728e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767291 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12767294 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12767296 jmp 0x12767083 */
  goto L_12767083;
L_1276729b:;
  /* 1276729b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276729f je 0x127672b3 */
  if (C.zf) goto L_127672b3;
  /* 127672a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127672a4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 127672aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127672ad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127672b0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_127672b3:;
  /* 127672b3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 127672b6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127672b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127672bb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127672be mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 127672c0 mov esp, ebp */
  ESP = (EBP);
  /* 127672c2 pop ebp */
  EBP = (pop32());
  /* 127672c3 ret  */
  ESPCHK(0x12766ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x127672d0 (537 bytes, 173 insns) */
void f_127672d0(void) {
  FTRACE(0x127672d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127672d0 push ebp */
  push32((uint32_t)(EBP));
  /* 127672d1 mov ebp, esp */
  EBP = (ESP);
  /* 127672d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127672d6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 127672dd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 127672e4 cmp dword ptr [0x127907bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127907bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127672eb jne 0x1276732a */
  if (!C.zf) goto L_1276732a;
  /* 127672ed call dword ptr [0x127933bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933bc))), 0x127672f3u);
  /* 127672f3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 127672f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127672fa je 0x12767308 */
  if (C.zf) goto L_12767308;
  /* 127672fc mov dword ptr [0x127907bc], 1 */
  w32((uint32_t)(0x127907bc), (0x1u));
  /* 12767306 jmp 0x1276732a */
  goto L_1276732a;
L_12767308:;
  /* 12767308 call dword ptr [0x127933b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b8))), 0x1276730eu);
  /* 1276730e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12767311 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767315 je 0x12767323 */
  if (C.zf) goto L_12767323;
  /* 12767317 mov dword ptr [0x127907bc], 2 */
  w32((uint32_t)(0x127907bc), (0x2u));
  /* 12767321 jmp 0x1276732a */
  goto L_1276732a;
L_12767323:;
  /* 12767323 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12767325 jmp 0x127674e5 */
  goto L_127674e5;
L_1276732a:;
  /* 1276732a cmp dword ptr [0x127907bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x127907bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767331 jne 0x1276742e */
  if (!C.zf) goto L_1276742e;
  /* 12767337 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276733b jne 0x12767353 */
  if (!C.zf) goto L_12767353;
  /* 1276733d call dword ptr [0x127933bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933bc))), 0x12767343u);
  /* 12767343 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12767346 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276734a jne 0x12767353 */
  if (!C.zf) goto L_12767353;
  /* 1276734c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276734e jmp 0x127674e5 */
  goto L_127674e5;
L_12767353:;
  /* 12767353 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12767356 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12767359:;
  /* 12767359 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276735c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1276735e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12767361 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12767363 je 0x12767385 */
  if (C.zf) goto L_12767385;
  /* 12767365 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767368 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276736b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276736e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767371 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12767373 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12767376 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12767378 jne 0x12767383 */
  if (!C.zf) goto L_12767383;
  /* 1276737a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276737d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767380 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12767383:;
  /* 12767383 jmp 0x12767359 */
  goto L_12767359;
L_12767385:;
  /* 12767385 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767388 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276738b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1276738d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767390 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12767393 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767395 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767397 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767399 push 0 */
  push32((uint32_t)(0x0u));
  /* 1276739b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276739e push edx */
  push32((uint32_t)(EDX));
  /* 1276739f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127673a2 push eax */
  push32((uint32_t)(EAX));
  /* 127673a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127673a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127673a7 call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x127673adu);
  /* 127673ad mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 127673b0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127673b4 je 0x127673d4 */
  if (C.zf) goto L_127673d4;
  /* 127673b6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 127673b8 push 0x1278be0c */
  push32((uint32_t)(0x1278be0cu));
  /* 127673bd push 2 */
  push32((uint32_t)(0x2u));
  /* 127673bf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127673c2 push ecx */
  push32((uint32_t)(ECX));
  /* 127673c3 call 0x12764d00 */
  push32(0x127673c8u); f_12764d00();
  /* 127673c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127673cb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 127673ce cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127673d2 jne 0x127673e5 */
  if (!C.zf) goto L_127673e5;
L_127673d4:;
  /* 127673d4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 127673d7 push edx */
  push32((uint32_t)(EDX));
  /* 127673d8 call dword ptr [0x127933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b0))), 0x127673deu);
  /* 127673de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127673e0 jmp 0x127674e5 */
  goto L_127674e5;
L_127673e5:;
  /* 127673e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 127673e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127673e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127673ec push eax */
  push32((uint32_t)(EAX));
  /* 127673ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127673f0 push ecx */
  push32((uint32_t)(ECX));
  /* 127673f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127673f4 push edx */
  push32((uint32_t)(EDX));
  /* 127673f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 127673f8 push eax */
  push32((uint32_t)(EAX));
  /* 127673f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 127673fb push 0 */
  push32((uint32_t)(0x0u));
  /* 127673fd call dword ptr [0x127933b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b4))), 0x12767403u);
  /* 12767403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12767405 jne 0x1276741c */
  if (!C.zf) goto L_1276741c;
  /* 12767407 push 2 */
  push32((uint32_t)(0x2u));
  /* 12767409 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276740c push ecx */
  push32((uint32_t)(ECX));
  /* 1276740d call 0x12765790 */
  push32(0x12767412u); f_12765790();
  /* 12767412 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767415 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1276741c:;
  /* 1276741c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276741f push edx */
  push32((uint32_t)(EDX));
  /* 12767420 call dword ptr [0x127933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b0))), 0x12767426u);
  /* 12767426 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12767429 jmp 0x127674e5 */
  goto L_127674e5;
L_1276742e:;
  /* 1276742e cmp dword ptr [0x127907bc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x127907bc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767435 jne 0x127674e3 */
  if (!C.zf) goto L_127674e3;
  /* 1276743b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276743f jne 0x12767457 */
  if (!C.zf) goto L_12767457;
  /* 12767441 call dword ptr [0x127933b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933b8))), 0x12767447u);
  /* 12767447 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1276744a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276744e jne 0x12767457 */
  if (!C.zf) goto L_12767457;
  /* 12767450 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12767452 jmp 0x127674e5 */
  goto L_127674e5;
L_12767457:;
  /* 12767457 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1276745a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1276745d:;
  /* 1276745d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767460 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12767463 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12767465 je 0x12767485 */
  if (C.zf) goto L_12767485;
  /* 12767467 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276746a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276746d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12767470 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767473 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12767476 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12767478 jne 0x12767483 */
  if (!C.zf) goto L_12767483;
  /* 1276747a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276747d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767480 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12767483:;
  /* 12767483 jmp 0x1276745d */
  goto L_1276745d;
L_12767485:;
  /* 12767485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767488 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276748b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276748e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12767491 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12767496 push 0x1278be0c */
  push32((uint32_t)(0x1278be0cu));
  /* 1276749b push 2 */
  push32((uint32_t)(0x2u));
  /* 1276749d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127674a0 push edx */
  push32((uint32_t)(EDX));
  /* 127674a1 call 0x12764d00 */
  push32(0x127674a6u); f_12764d00();
  /* 127674a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127674a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127674ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127674b0 jne 0x127674c0 */
  if (!C.zf) goto L_127674c0;
  /* 127674b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 127674b5 push eax */
  push32((uint32_t)(EAX));
  /* 127674b6 call dword ptr [0x127933ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933ac))), 0x127674bcu);
  /* 127674bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127674be jmp 0x127674e5 */
  goto L_127674e5;
L_127674c0:;
  /* 127674c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127674c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127674c4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 127674c7 push edx */
  push32((uint32_t)(EDX));
  /* 127674c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127674cb push eax */
  push32((uint32_t)(EAX));
  /* 127674cc call 0x1276b5e0 */
  push32(0x127674d1u); f_1276b5e0();
  /* 127674d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127674d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127674d7 push ecx */
  push32((uint32_t)(ECX));
  /* 127674d8 call dword ptr [0x127933ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933ac))), 0x127674deu);
  /* 127674de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127674e1 jmp 0x127674e5 */
  goto L_127674e5;
L_127674e3:;
  /* 127674e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127674e5:;
  /* 127674e5 mov esp, ebp */
  ESP = (EBP);
  /* 127674e7 pop ebp */
  EBP = (pop32());
  /* 127674e8 ret  */
  ESPCHK(0x127672d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074f0 @ 0x127674f0 (77 bytes, 25 insns) */
void f_127674f0(void) {
  FTRACE(0x127674f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127674f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127674f1 mov ebp, esp */
  EBP = (ESP);
  /* 127674f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127674f5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 127674fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127674fc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767500 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12767503 push eax */
  push32((uint32_t)(EAX));
  /* 12767504 call dword ptr [0x12793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793334))), 0x1276750au);
  /* 1276750a mov dword ptr [0x1279200c], eax */
  w32((uint32_t)(0x1279200c), (EAX));
  /* 1276750f cmp dword ptr [0x1279200c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1279200c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767516 jne 0x1276751c */
  if (!C.zf) goto L_1276751c;
  /* 12767518 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276751a jmp 0x1276753b */
  goto L_1276753b;
L_1276751c:;
  /* 1276751c call 0x12768fa0 */
  push32(0x12767521u); f_12768fa0();
  /* 12767521 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12767523 jne 0x12767536 */
  if (!C.zf) goto L_12767536;
  /* 12767525 mov ecx, dword ptr [0x1279200c] */
  ECX = (r32((uint32_t)(0x1279200c)));
  /* 1276752b push ecx */
  push32((uint32_t)(ECX));
  /* 1276752c call dword ptr [0x12793338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793338))), 0x12767532u);
  /* 12767532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12767534 jmp 0x1276753b */
  goto L_1276753b;
L_12767536:;
  /* 12767536 mov eax, 1 */
  EAX = (0x1u);
L_1276753b:;
  /* 1276753b pop ebp */
  EBP = (pop32());
  /* 1276753c ret  */
  ESPCHK(0x127674f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007540 @ 0x12767540 (156 bytes, 48 insns) */
void f_12767540(void) {
  FTRACE(0x12767540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767540 push ebp */
  push32((uint32_t)(EBP));
  /* 12767541 mov ebp, esp */
  EBP = (ESP);
  /* 12767543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767546 mov eax, dword ptr [0x12792008] */
  EAX = (r32((uint32_t)(0x12792008)));
  /* 1276754b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276754e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12767555 jmp 0x12767560 */
  goto L_12767560;
L_12767557:;
  /* 12767557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276755a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276755d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12767560:;
  /* 12767560 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767563 cmp edx, dword ptr [0x12792004] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12792004))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767569 jge 0x127675b6 */
  if ((C.sf==C.of)) goto L_127675b6;
  /* 1276756b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12767570 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12767575 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767578 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1276757b push ecx */
  push32((uint32_t)(ECX));
  /* 1276757c call dword ptr [0x1279332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279332c))), 0x12767582u);
  /* 12767582 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12767587 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767589 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276758c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1276758f push eax */
  push32((uint32_t)(EAX));
  /* 12767590 call dword ptr [0x1279332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279332c))), 0x12767596u);
  /* 12767596 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767599 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1276759c push edx */
  push32((uint32_t)(EDX));
  /* 1276759d push 0 */
  push32((uint32_t)(0x0u));
  /* 1276759f mov eax, dword ptr [0x1279200c] */
  EAX = (r32((uint32_t)(0x1279200c)));
  /* 127675a4 push eax */
  push32((uint32_t)(EAX));
  /* 127675a5 call dword ptr [0x12793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793330))), 0x127675abu);
  /* 127675ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127675ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127675b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127675b4 jmp 0x12767557 */
  goto L_12767557;
L_127675b6:;
  /* 127675b6 mov edx, dword ptr [0x12792008] */
  EDX = (r32((uint32_t)(0x12792008)));
  /* 127675bc push edx */
  push32((uint32_t)(EDX));
  /* 127675bd push 0 */
  push32((uint32_t)(0x0u));
  /* 127675bf mov eax, dword ptr [0x1279200c] */
  EAX = (r32((uint32_t)(0x1279200c)));
  /* 127675c4 push eax */
  push32((uint32_t)(EAX));
  /* 127675c5 call dword ptr [0x12793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793330))), 0x127675cbu);
  /* 127675cb mov ecx, dword ptr [0x1279200c] */
  ECX = (r32((uint32_t)(0x1279200c)));
  /* 127675d1 push ecx */
  push32((uint32_t)(ECX));
  /* 127675d2 call dword ptr [0x12793338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793338))), 0x127675d8u);
  /* 127675d8 mov esp, ebp */
  ESP = (EBP);
  /* 127675da pop ebp */
  EBP = (pop32());
  /* 127675db ret  */
  ESPCHK(0x12767540u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x127675e0 (73 bytes, 19 insns) */
void f_127675e0(void) {
  FTRACE(0x127675e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127675e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127675e1 mov ebp, esp */
  EBP = (ESP);
  /* 127675e3 cmp dword ptr [0x12790650], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790650))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127675ea je 0x127675fe */
  if (C.zf) goto L_127675fe;
  /* 127675ec cmp dword ptr [0x12790650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127675f3 jne 0x12767627 */
  if (!C.zf) goto L_12767627;
  /* 127675f5 cmp dword ptr [0x12790654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127675fc jne 0x12767627 */
  if (!C.zf) goto L_12767627;
L_127675fe:;
  /* 127675fe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12767603 call 0x12767630 */
  push32(0x12767608u); f_12767630();
  /* 12767608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276760b cmp dword ptr [0x127907c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127907c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767612 je 0x1276761a */
  if (C.zf) goto L_1276761a;
  /* 12767614 call dword ptr [0x127907c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127907c0))), 0x1276761au);
L_1276761a:;
  /* 1276761a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1276761f call 0x12767630 */
  push32(0x12767624u); f_12767630();
  /* 12767624 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12767627:;
  /* 12767627 pop ebp */
  EBP = (pop32());
  /* 12767628 ret  */
  ESPCHK(0x127675e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007630 @ 0x12767630 (447 bytes, 131 insns) */
void f_12767630(void) {
  FTRACE(0x12767630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767630 push ebp */
  push32((uint32_t)(EBP));
  /* 12767631 mov ebp, esp */
  EBP = (ESP);
  /* 12767633 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767639 push ebx */
  push32((uint32_t)(EBX));
  /* 1276763a push esi */
  push32((uint32_t)(ESI));
  /* 1276763b push edi */
  push32((uint32_t)(EDI));
  /* 1276763c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12767643 jmp 0x1276764e */
  goto L_1276764e;
L_12767645:;
  /* 12767645 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767648 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276764b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1276764e:;
  /* 1276764e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767652 jae 0x12767667 */
  if (!C.cf) goto L_12767667;
  /* 12767654 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276765a cmp edx, dword ptr [ecx*8 + 0x1278eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1278eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767661 jne 0x12767665 */
  if (!C.zf) goto L_12767665;
  /* 12767663 jmp 0x12767667 */
  goto L_12767667;
L_12767665:;
  /* 12767665 jmp 0x12767645 */
  goto L_12767645;
L_12767667:;
  /* 12767667 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276766a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276766d cmp ecx, dword ptr [eax*8 + 0x1278eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1278eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767674 jne 0x127677e8 */
  if (!C.zf) goto L_127677e8;
  /* 1276767a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767681 je 0x127676a4 */
  if (C.zf) goto L_127676a4;
  /* 12767683 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767686 mov eax, dword ptr [edx*8 + 0x1278eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1278eab4)));
  /* 1276768d push eax */
  push32((uint32_t)(EAX));
  /* 1276768e push 0 */
  push32((uint32_t)(0x0u));
  /* 12767690 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767692 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767694 push 1 */
  push32((uint32_t)(0x1u));
  /* 12767696 call 0x12763dc0 */
  push32(0x1276769bu); f_12763dc0();
  /* 1276769b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276769e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127676a1 jne 0x127676a4 */
  if (!C.zf) goto L_127676a4;
  /* 127676a3 int3  */
  x86_unimpl("int3 @ 0x127676a3");
L_127676a4:;
  /* 127676a4 cmp dword ptr [0x12790650], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790650))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127676ab je 0x127676bf */
  if (C.zf) goto L_127676bf;
  /* 127676ad cmp dword ptr [0x12790650], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790650))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127676b4 jne 0x127676f8 */
  if (!C.zf) goto L_127676f8;
  /* 127676b6 cmp dword ptr [0x12790654], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12790654))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127676bd jne 0x127676f8 */
  if (!C.zf) goto L_127676f8;
L_127676bf:;
  /* 127676bf push 0 */
  push32((uint32_t)(0x0u));
  /* 127676c1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 127676c4 push ecx */
  push32((uint32_t)(ECX));
  /* 127676c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127676c8 mov eax, dword ptr [edx*8 + 0x1278eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1278eab4)));
  /* 127676cf push eax */
  push32((uint32_t)(EAX));
  /* 127676d0 call 0x12767b30 */
  push32(0x127676d5u); f_12767b30();
  /* 127676d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127676d8 push eax */
  push32((uint32_t)(EAX));
  /* 127676d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127676dc mov edx, dword ptr [ecx*8 + 0x1278eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1278eab4)));
  /* 127676e3 push edx */
  push32((uint32_t)(EDX));
  /* 127676e4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 127676e6 call dword ptr [0x12793348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793348))), 0x127676ecu);
  /* 127676ec push eax */
  push32((uint32_t)(EAX));
  /* 127676ed call dword ptr [0x1279334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279334c))), 0x127676f3u);
  /* 127676f3 jmp 0x127677e8 */
  goto L_127677e8;
L_127676f8:;
  /* 127676f8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127676ff je 0x127677e8 */
  if (C.zf) goto L_127677e8;
  /* 12767705 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1276770a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12767710 push eax */
  push32((uint32_t)(EAX));
  /* 12767711 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767713 call dword ptr [0x12793364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793364))), 0x12767719u);
  /* 12767719 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1276771b jne 0x12767731 */
  if (!C.zf) goto L_12767731;
  /* 1276771d push 0x1278b674 */
  push32((uint32_t)(0x1278b674u));
  /* 12767722 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12767728 push ecx */
  push32((uint32_t)(ECX));
  /* 12767729 call 0x12767cb0 */
  push32(0x1276772eu); f_12767cb0();
  /* 1276772e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12767731:;
  /* 12767731 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12767737 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1276773a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276773d push eax */
  push32((uint32_t)(EAX));
  /* 1276773e call 0x12767b30 */
  push32(0x12767743u); f_12767b30();
  /* 12767743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767746 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767749 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276774c jbe 0x1276777a */
  if ((C.cf||C.zf)) goto L_1276777a;
  /* 1276774e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12767754 push ecx */
  push32((uint32_t)(ECX));
  /* 12767755 call 0x12767b30 */
  push32(0x1276775au); f_12767b30();
  /* 1276775a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276775d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767760 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12767764 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12767767 push 3 */
  push32((uint32_t)(0x3u));
  /* 12767769 push 0x1278b670 */
  push32((uint32_t)(0x1278b670u));
  /* 1276776e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767771 push ecx */
  push32((uint32_t)(ECX));
  /* 12767772 call 0x12768520 */
  push32(0x12767777u); f_12768520();
  /* 12767777 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276777a:;
  /* 1276777a push 0x1278c0c8 */
  push32((uint32_t)(0x1278c0c8u));
  /* 1276777f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12767785 push edx */
  push32((uint32_t)(EDX));
  /* 12767786 call 0x12767cb0 */
  push32(0x1276778bu); f_12767cb0();
  /* 1276778b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276778e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767791 push eax */
  push32((uint32_t)(EAX));
  /* 12767792 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12767798 push ecx */
  push32((uint32_t)(ECX));
  /* 12767799 call 0x12767cc0 */
  push32(0x1276779eu); f_12767cc0();
  /* 1276779e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127677a1 push 0x1278b5e8 */
  push32((uint32_t)(0x1278b5e8u));
  /* 127677a6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 127677ac push edx */
  push32((uint32_t)(EDX));
  /* 127677ad call 0x12767cc0 */
  push32(0x127677b2u); f_12767cc0();
  /* 127677b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127677b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127677b8 mov ecx, dword ptr [eax*8 + 0x1278eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1278eab4)));
  /* 127677bf push ecx */
  push32((uint32_t)(ECX));
  /* 127677c0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 127677c6 push edx */
  push32((uint32_t)(EDX));
  /* 127677c7 call 0x12767cc0 */
  push32(0x127677ccu); f_12767cc0();
  /* 127677cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127677cf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 127677d4 push 0x1278c0a0 */
  push32((uint32_t)(0x1278c0a0u));
  /* 127677d9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 127677df push eax */
  push32((uint32_t)(EAX));
  /* 127677e0 call 0x12768460 */
  push32(0x127677e5u); f_12768460();
  /* 127677e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127677e8:;
  /* 127677e8 pop edi */
  EDI = (pop32());
  /* 127677e9 pop esi */
  ESI = (pop32());
  /* 127677ea pop ebx */
  EBX = (pop32());
  /* 127677eb mov esp, ebp */
  ESP = (EBP);
  /* 127677ed pop ebp */
  EBP = (pop32());
  /* 127677ee ret  */
  ESPCHK(0x12767630u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x127677f0 (80 bytes, 27 insns) */
void f_127677f0(void) {
  FTRACE(0x127677f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127677f0 push ebp */
  push32((uint32_t)(EBP));
  /* 127677f1 mov ebp, esp */
  EBP = (ESP);
  /* 127677f3 push ecx */
  push32((uint32_t)(ECX));
  /* 127677f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 127677fb jmp 0x12767806 */
  goto L_12767806;
L_127677fd:;
  /* 127677fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767800 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767803 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12767806:;
  /* 12767806 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276780a jae 0x1276781f */
  if (!C.cf) goto L_1276781f;
  /* 1276780c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276780f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767812 cmp edx, dword ptr [ecx*8 + 0x1278eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1278eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767819 jne 0x1276781d */
  if (!C.zf) goto L_1276781d;
  /* 1276781b jmp 0x1276781f */
  goto L_1276781f;
L_1276781d:;
  /* 1276781d jmp 0x127677fd */
  goto L_127677fd;
L_1276781f:;
  /* 1276781f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767822 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767825 cmp ecx, dword ptr [eax*8 + 0x1278eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1278eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276782c jne 0x1276783a */
  if (!C.zf) goto L_1276783a;
  /* 1276782e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767831 mov eax, dword ptr [edx*8 + 0x1278eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1278eab4)));
  /* 12767838 jmp 0x1276783c */
  goto L_1276783c;
L_1276783a:;
  /* 1276783a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1276783c:;
  /* 1276783c mov esp, ebp */
  ESP = (EBP);
  /* 1276783e pop ebp */
  EBP = (pop32());
  /* 1276783f ret  */
  ESPCHK(0x127677f0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12767840 (66 bytes, 28 insns) */
void f_12767840(void) {
  FTRACE(0x12767840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767840 push ebp */
  push32((uint32_t)(EBP));
  /* 12767841 mov ebp, esp */
  EBP = (ESP);
  /* 12767843 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767847 jne 0x12767867 */
  if (!C.zf) goto L_12767867;
  /* 12767849 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276784d jge 0x12767867 */
  if ((C.sf==C.of)) goto L_12767867;
  /* 1276784f push 1 */
  push32((uint32_t)(0x1u));
  /* 12767851 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767854 push eax */
  push32((uint32_t)(EAX));
  /* 12767855 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767858 push ecx */
  push32((uint32_t)(ECX));
  /* 12767859 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276785c push edx */
  push32((uint32_t)(EDX));
  /* 1276785d call 0x12767890 */
  push32(0x12767862u); f_12767890();
  /* 12767862 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767865 jmp 0x1276787d */
  goto L_1276787d;
L_12767867:;
  /* 12767867 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767869 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1276786c push eax */
  push32((uint32_t)(EAX));
  /* 1276786d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767870 push ecx */
  push32((uint32_t)(ECX));
  /* 12767871 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767874 push edx */
  push32((uint32_t)(EDX));
  /* 12767875 call 0x12767890 */
  push32(0x1276787au); f_12767890();
  /* 1276787a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276787d:;
  /* 1276787d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767880 pop ebp */
  EBP = (pop32());
  /* 12767881 ret  */
  ESPCHK(0x12767840u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12767890 (194 bytes, 71 insns) */
void f_12767890(void) {
  FTRACE(0x12767890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767890 push ebp */
  push32((uint32_t)(EBP));
  /* 12767891 mov ebp, esp */
  EBP = (ESP);
  /* 12767893 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767896 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276789c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127678a0 je 0x127678b9 */
  if (C.zf) goto L_127678b9;
  /* 127678a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127678a5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 127678a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127678ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127678ae mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 127678b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127678b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 127678b6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_127678b9:;
  /* 127678b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127678bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_127678bf:;
  /* 127678bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127678c2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127678c4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127678c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 127678ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127678cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127678cf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 127678d2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 127678d5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127678d9 jbe 0x127678f1 */
  if ((C.cf||C.zf)) goto L_127678f1;
  /* 127678db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127678de add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127678e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127678e4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127678e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127678e9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127678ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 127678ef jmp 0x12767905 */
  goto L_12767905;
L_127678f1:;
  /* 127678f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 127678f4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127678f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127678fa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 127678fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127678ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767902 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12767905:;
  /* 12767905 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767909 ja 0x127678bf */
  if ((!C.cf&&!C.zf)) goto L_127678bf;
  /* 1276790b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276790e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12767911 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767914 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767917 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1276791a:;
  /* 1276791a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276791d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1276791f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12767922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767925 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767928 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1276792a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1276792c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276792f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12767932 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12767934 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767937 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1276793a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1276793d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767940 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767943 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12767946 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767949 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276794c jb 0x1276791a */
  if (C.cf) goto L_1276791a;
  /* 1276794e mov esp, ebp */
  ESP = (EBP);
  /* 12767950 pop ebp */
  EBP = (pop32());
  /* 12767951 ret  */
  ESPCHK(0x12767890u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12767960 (63 bytes, 24 insns) */
void f_12767960(void) {
  FTRACE(0x12767960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767960 push ebp */
  push32((uint32_t)(EBP));
  /* 12767961 mov ebp, esp */
  EBP = (ESP);
  /* 12767963 push ecx */
  push32((uint32_t)(ECX));
  /* 12767964 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767968 jne 0x12767979 */
  if (!C.zf) goto L_12767979;
  /* 1276796a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276796e jge 0x12767979 */
  if ((C.sf==C.of)) goto L_12767979;
  /* 12767970 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12767977 jmp 0x12767980 */
  goto L_12767980;
L_12767979:;
  /* 12767979 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12767980:;
  /* 12767980 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767983 push eax */
  push32((uint32_t)(EAX));
  /* 12767984 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767987 push ecx */
  push32((uint32_t)(ECX));
  /* 12767988 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276798b push edx */
  push32((uint32_t)(EDX));
  /* 1276798c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276798f push eax */
  push32((uint32_t)(EAX));
  /* 12767990 call 0x12767890 */
  push32(0x12767995u); f_12767890();
  /* 12767995 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767998 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276799b mov esp, ebp */
  ESP = (EBP);
  /* 1276799d pop ebp */
  EBP = (pop32());
  /* 1276799e ret  */
  ESPCHK(0x12767960u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x127679a0 (30 bytes, 14 insns) */
void f_127679a0(void) {
  FTRACE(0x127679a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127679a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127679a1 mov ebp, esp */
  EBP = (ESP);
  /* 127679a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 127679a5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 127679a8 push eax */
  push32((uint32_t)(EAX));
  /* 127679a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127679ac push ecx */
  push32((uint32_t)(ECX));
  /* 127679ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127679b0 push edx */
  push32((uint32_t)(EDX));
  /* 127679b1 call 0x12767890 */
  push32(0x127679b6u); f_12767890();
  /* 127679b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 127679b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127679bc pop ebp */
  EBP = (pop32());
  /* 127679bd ret  */
  ESPCHK(0x127679a0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x127679c0 (72 bytes, 28 insns) */
void f_127679c0(void) {
  FTRACE(0x127679c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127679c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127679c1 mov ebp, esp */
  EBP = (ESP);
  /* 127679c3 push ecx */
  push32((uint32_t)(ECX));
  /* 127679c4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127679c8 jne 0x127679e1 */
  if (!C.zf) goto L_127679e1;
  /* 127679ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127679ce jg 0x127679e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_127679e1;
  /* 127679d0 jl 0x127679d8 */
  if ((C.sf!=C.of)) goto L_127679d8;
  /* 127679d2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127679d6 jae 0x127679e1 */
  if (!C.cf) goto L_127679e1;
L_127679d8:;
  /* 127679d8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 127679df jmp 0x127679e8 */
  goto L_127679e8;
L_127679e1:;
  /* 127679e1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_127679e8:;
  /* 127679e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127679eb push eax */
  push32((uint32_t)(EAX));
  /* 127679ec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 127679ef push ecx */
  push32((uint32_t)(ECX));
  /* 127679f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 127679f3 push edx */
  push32((uint32_t)(EDX));
  /* 127679f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127679f7 push eax */
  push32((uint32_t)(EAX));
  /* 127679f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 127679fb push ecx */
  push32((uint32_t)(ECX));
  /* 127679fc call 0x12767a10 */
  push32(0x12767a01u); f_12767a10();
  /* 12767a01 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767a04 mov esp, ebp */
  ESP = (EBP);
  /* 12767a06 pop ebp */
  EBP = (pop32());
  /* 12767a07 ret  */
  ESPCHK(0x127679c0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x12767a10 (242 bytes, 91 insns) */
void f_12767a10(void) {
  FTRACE(0x12767a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12767a11 mov ebp, esp */
  EBP = (ESP);
  /* 12767a13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767a16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767a19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12767a1c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767a20 je 0x12767a44 */
  if (C.zf) goto L_12767a44;
  /* 12767a22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767a25 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12767a28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767a2b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767a2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12767a31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767a34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12767a36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767a39 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767a3c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12767a3e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12767a41 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12767a44:;
  /* 12767a44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767a47 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12767a4a:;
  /* 12767a4a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12767a4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12767a4f push ecx */
  push32((uint32_t)(ECX));
  /* 12767a50 push eax */
  push32((uint32_t)(EAX));
  /* 12767a51 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767a54 push edx */
  push32((uint32_t)(EDX));
  /* 12767a55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767a58 push eax */
  push32((uint32_t)(EAX));
  /* 12767a59 call 0x1276b990 */
  push32(0x12767a5eu); f_1276b990();
  /* 12767a5e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12767a61 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12767a64 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12767a66 push edx */
  push32((uint32_t)(EDX));
  /* 12767a67 push ecx */
  push32((uint32_t)(ECX));
  /* 12767a68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767a6b push eax */
  push32((uint32_t)(EAX));
  /* 12767a6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767a6f push ecx */
  push32((uint32_t)(ECX));
  /* 12767a70 call 0x1276b920 */
  push32(0x12767a75u); f_1276b920();
  /* 12767a75 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12767a78 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12767a7b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767a7f jbe 0x12767a97 */
  if ((C.cf||C.zf)) goto L_12767a97;
  /* 12767a81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767a84 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767a87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767a8a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12767a8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767a8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767a92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12767a95 jmp 0x12767aab */
  goto L_12767aab;
L_12767a97:;
  /* 12767a97 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12767a9a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767aa0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12767aa2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767aa5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767aa8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12767aab:;
  /* 12767aab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767aaf ja 0x12767a4a */
  if ((!C.cf&&!C.zf)) goto L_12767a4a;
  /* 12767ab1 jb 0x12767ab9 */
  if (C.cf) goto L_12767ab9;
  /* 12767ab3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767ab7 ja 0x12767a4a */
  if ((!C.cf&&!C.zf)) goto L_12767a4a;
L_12767ab9:;
  /* 12767ab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767abc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12767abf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767ac2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767ac5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12767ac8:;
  /* 12767ac8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767acb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12767acd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12767ad0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767ad3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767ad6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12767ad8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12767ada mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767add mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12767ae0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12767ae2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12767ae5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767ae8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12767aeb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767aee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767af1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12767af4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12767af7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767afa jb 0x12767ac8 */
  if (C.cf) goto L_12767ac8;
  /* 12767afc mov esp, ebp */
  ESP = (EBP);
  /* 12767afe pop ebp */
  EBP = (pop32());
  /* 12767aff ret 0x14 */
  ESPCHK(0x12767a10u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x12767b10 (31 bytes, 15 insns) */
void f_12767b10(void) {
  FTRACE(0x12767b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12767b11 mov ebp, esp */
  EBP = (ESP);
  /* 12767b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767b15 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12767b18 push eax */
  push32((uint32_t)(EAX));
  /* 12767b19 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767b1c push ecx */
  push32((uint32_t)(ECX));
  /* 12767b1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767b20 push edx */
  push32((uint32_t)(EDX));
  /* 12767b21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767b24 push eax */
  push32((uint32_t)(EAX));
  /* 12767b25 call 0x12767a10 */
  push32(0x12767b2au); f_12767a10();
  /* 12767b2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767b2d pop ebp */
  EBP = (pop32());
  /* 12767b2e ret  */
  ESPCHK(0x12767b10u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12767b30 (123 bytes, 44 insns) */
void f_12767b30(void) {
  FTRACE(0x12767b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767b30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12767b34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12767b3a je 0x12767b50 */
  if (C.zf) goto L_12767b50;
L_12767b3c:;
  /* 12767b3c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12767b3e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12767b3f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12767b41 je 0x12767b83 */
  if (C.zf) goto L_12767b83;
  /* 12767b43 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12767b49 jne 0x12767b3c */
  if (!C.zf) goto L_12767b3c;
  /* 12767b4b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12767b50:;
  /* 12767b50 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12767b52 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12767b57 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767b59 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12767b5c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12767b5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767b61 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12767b66 je 0x12767b50 */
  if (C.zf) goto L_12767b50;
  /* 12767b68 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12767b6b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12767b6d je 0x12767ba1 */
  if (C.zf) goto L_12767ba1;
  /* 12767b6f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12767b71 je 0x12767b97 */
  if (C.zf) goto L_12767b97;
  /* 12767b73 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12767b78 je 0x12767b8d */
  if (C.zf) goto L_12767b8d;
  /* 12767b7a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12767b7f je 0x12767b83 */
  if (C.zf) goto L_12767b83;
  /* 12767b81 jmp 0x12767b50 */
  goto L_12767b50;
L_12767b83:;
  /* 12767b83 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12767b86 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12767b8a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767b8c ret  */
  ESPCHK(0x12767b30u, _esp0);
  ESP += 4; return;
L_12767b8d:;
  /* 12767b8d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12767b90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12767b94 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767b96 ret  */
  ESPCHK(0x12767b30u, _esp0);
  ESP += 4; return;
L_12767b97:;
  /* 12767b97 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 12767b9a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12767b9e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767ba0 ret  */
  ESPCHK(0x12767b30u, _esp0);
  ESP += 4; return;
L_12767ba1:;
  /* 12767ba1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12767ba4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12767ba8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767baa ret  */
  ESPCHK(0x12767b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x12767bb0 (249 bytes, 93 insns) */
void f_12767bb0(void) {
  FTRACE(0x12767bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12767bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12767bb3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 12767bb7 push esi */
  push32((uint32_t)(ESI));
  /* 12767bb8 push edi */
  push32((uint32_t)(EDI));
  /* 12767bb9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12767bbc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12767bbf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12767bc2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12767bc5:;
  /* 12767bc5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767bc9 jne 0x12767be9 */
  if (!C.zf) goto L_12767be9;
  /* 12767bcb push 0x1278c100 */
  push32((uint32_t)(0x1278c100u));
  /* 12767bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767bd2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12767bd4 push 0x1278c0f4 */
  push32((uint32_t)(0x1278c0f4u));
  /* 12767bd9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12767bdb call 0x12763dc0 */
  push32(0x12767be0u); f_12763dc0();
  /* 12767be0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767be3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767be6 jne 0x12767be9 */
  if (!C.zf) goto L_12767be9;
  /* 12767be8 int3  */
  x86_unimpl("int3 @ 0x12767be8");
L_12767be9:;
  /* 12767be9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12767beb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12767bed jne 0x12767bc5 */
  if (!C.zf) goto L_12767bc5;
L_12767bef:;
  /* 12767bef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767bf3 jne 0x12767c13 */
  if (!C.zf) goto L_12767c13;
  /* 12767bf5 push 0x1278c0e4 */
  push32((uint32_t)(0x1278c0e4u));
  /* 12767bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12767bfc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12767bfe push 0x1278c0f4 */
  push32((uint32_t)(0x1278c0f4u));
  /* 12767c03 push 2 */
  push32((uint32_t)(0x2u));
  /* 12767c05 call 0x12763dc0 */
  push32(0x12767c0au); f_12763dc0();
  /* 12767c0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767c0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767c10 jne 0x12767c13 */
  if (!C.zf) goto L_12767c13;
  /* 12767c12 int3  */
  x86_unimpl("int3 @ 0x12767c12");
L_12767c13:;
  /* 12767c13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12767c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12767c17 jne 0x12767bef */
  if (!C.zf) goto L_12767bef;
  /* 12767c19 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c1c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12767c23 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767c29 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12767c2c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767c32 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12767c34 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767c3a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12767c3d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12767c40 push edx */
  push32((uint32_t)(EDX));
  /* 12767c41 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767c44 push eax */
  push32((uint32_t)(EAX));
  /* 12767c45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c48 push ecx */
  push32((uint32_t)(ECX));
  /* 12767c49 call 0x1276bc90 */
  push32(0x12767c4eu); f_1276bc90();
  /* 12767c4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767c51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12767c54 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c57 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12767c5a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767c5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c60 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12767c63 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c66 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767c6a jl 0x12767c8e */
  if ((C.sf!=C.of)) goto L_12767c8e;
  /* 12767c6c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12767c71 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12767c74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12767c76 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12767c7c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12767c7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c82 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12767c84 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767c87 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c8a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12767c8c jmp 0x12767c9f */
  goto L_12767c9f;
L_12767c8e:;
  /* 12767c8e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767c91 push eax */
  push32((uint32_t)(EAX));
  /* 12767c92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767c94 call 0x1276ba10 */
  push32(0x12767c99u); f_1276ba10();
  /* 12767c99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767c9c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12767c9f:;
  /* 12767c9f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12767ca2 pop edi */
  EDI = (pop32());
  /* 12767ca3 pop esi */
  ESI = (pop32());
  /* 12767ca4 pop ebx */
  EBX = (pop32());
  /* 12767ca5 mov esp, ebp */
  ESP = (EBP);
  /* 12767ca7 pop ebp */
  EBP = (pop32());
  /* 12767ca8 ret  */
  ESPCHK(0x12767bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cb0 @ 0x12767cb0 (7 bytes, 3 insns) */
void f_12767cb0(void) {
  FTRACE(0x12767cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767cb0 push edi */
  push32((uint32_t)(EDI));
  /* 12767cb1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12767cb5 jmp 0x12767d21 */
  jmp_ind(0x12767d21u); return;
}

/* FUN_10007cc0 @ 0x12767cc0 (224 bytes, 84 insns) */
void f_12767cc0(void) {
  FTRACE(0x12767cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767cc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12767cc4 push edi */
  push32((uint32_t)(EDI));
  /* 12767cc5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12767ccb je 0x12767cdc */
  if (C.zf) goto L_12767cdc;
L_12767ccd:;
  /* 12767ccd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12767ccf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12767cd0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12767cd2 je 0x12767d0f */
  if (C.zf) goto L_12767d0f;
  /* 12767cd4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12767cda jne 0x12767ccd */
  if (!C.zf) goto L_12767ccd;
L_12767cdc:;
  /* 12767cdc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12767cde mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12767ce3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767ce5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12767ce8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12767cea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767ced test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12767cf2 je 0x12767cdc */
  if (C.zf) goto L_12767cdc;
  /* 12767cf4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12767cf7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12767cf9 je 0x12767d1e */
  if (C.zf) goto L_12767d1e;
  /* 12767cfb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12767cfd je 0x12767d19 */
  if (C.zf) goto L_12767d19;
  /* 12767cff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12767d04 je 0x12767d14 */
  if (C.zf) goto L_12767d14;
  /* 12767d06 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12767d0b je 0x12767d0f */
  if (C.zf) goto L_12767d0f;
  /* 12767d0d jmp 0x12767cdc */
  goto L_12767cdc;
L_12767d0f:;
  /* 12767d0f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12767d12 jmp 0x12767d21 */
  goto L_12767d21;
L_12767d14:;
  /* 12767d14 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12767d17 jmp 0x12767d21 */
  goto L_12767d21;
L_12767d19:;
  /* 12767d19 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12767d1c jmp 0x12767d21 */
  goto L_12767d21;
L_12767d1e:;
  /* 12767d1e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12767d21:;
  /* 12767d21 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12767d25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12767d2b je 0x12767d46 */
  if (C.zf) goto L_12767d46;
L_12767d2d:;
  /* 12767d2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12767d2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12767d30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12767d32 je 0x12767d98 */
  if (C.zf) goto L_12767d98;
  /* 12767d34 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12767d36 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12767d37 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12767d3d jne 0x12767d2d */
  if (!C.zf) goto L_12767d2d;
  /* 12767d3f jmp 0x12767d46 */
  goto L_12767d46;
L_12767d41:;
  /* 12767d41 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12767d43 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12767d46:;
  /* 12767d46 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12767d4b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12767d4d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767d4f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12767d52 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12767d54 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12767d56 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767d59 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12767d5e je 0x12767d41 */
  if (C.zf) goto L_12767d41;
  /* 12767d60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12767d62 je 0x12767d98 */
  if (C.zf) goto L_12767d98;
  /* 12767d64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12767d66 je 0x12767d8f */
  if (C.zf) goto L_12767d8f;
  /* 12767d68 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12767d6e je 0x12767d82 */
  if (C.zf) goto L_12767d82;
  /* 12767d70 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12767d76 je 0x12767d7a */
  if (C.zf) goto L_12767d7a;
  /* 12767d78 jmp 0x12767d41 */
  goto L_12767d41;
L_12767d7a:;
  /* 12767d7a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12767d7c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12767d80 pop edi */
  EDI = (pop32());
  /* 12767d81 ret  */
  ESPCHK(0x12767cc0u, _esp0);
  ESP += 4; return;
L_12767d82:;
  /* 12767d82 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12767d85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12767d89 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12767d8d pop edi */
  EDI = (pop32());
  /* 12767d8e ret  */
  ESPCHK(0x12767cc0u, _esp0);
  ESP += 4; return;
L_12767d8f:;
  /* 12767d8f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12767d92 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12767d96 pop edi */
  EDI = (pop32());
  /* 12767d97 ret  */
  ESPCHK(0x12767cc0u, _esp0);
  ESP += 4; return;
L_12767d98:;
  /* 12767d98 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12767d9a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12767d9e pop edi */
  EDI = (pop32());
  /* 12767d9f ret  */
  ESPCHK(0x12767cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x12767da0 (243 bytes, 91 insns) */
void f_12767da0(void) {
  FTRACE(0x12767da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12767da1 mov ebp, esp */
  EBP = (ESP);
  /* 12767da3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767da6 push ebx */
  push32((uint32_t)(EBX));
  /* 12767da7 push esi */
  push32((uint32_t)(ESI));
  /* 12767da8 push edi */
  push32((uint32_t)(EDI));
  /* 12767da9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12767dac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12767daf:;
  /* 12767daf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767db3 jne 0x12767dd3 */
  if (!C.zf) goto L_12767dd3;
  /* 12767db5 push 0x1278c100 */
  push32((uint32_t)(0x1278c100u));
  /* 12767dba push 0 */
  push32((uint32_t)(0x0u));
  /* 12767dbc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12767dbe push 0x1278c110 */
  push32((uint32_t)(0x1278c110u));
  /* 12767dc3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12767dc5 call 0x12763dc0 */
  push32(0x12767dcau); f_12763dc0();
  /* 12767dca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767dcd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767dd0 jne 0x12767dd3 */
  if (!C.zf) goto L_12767dd3;
  /* 12767dd2 int3  */
  x86_unimpl("int3 @ 0x12767dd2");
L_12767dd3:;
  /* 12767dd3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12767dd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12767dd7 jne 0x12767daf */
  if (!C.zf) goto L_12767daf;
L_12767dd9:;
  /* 12767dd9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767ddd jne 0x12767dfd */
  if (!C.zf) goto L_12767dfd;
  /* 12767ddf push 0x1278c0e4 */
  push32((uint32_t)(0x1278c0e4u));
  /* 12767de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12767de6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12767de8 push 0x1278c110 */
  push32((uint32_t)(0x1278c110u));
  /* 12767ded push 2 */
  push32((uint32_t)(0x2u));
  /* 12767def call 0x12763dc0 */
  push32(0x12767df4u); f_12763dc0();
  /* 12767df4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767df7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767dfa jne 0x12767dfd */
  if (!C.zf) goto L_12767dfd;
  /* 12767dfc int3  */
  x86_unimpl("int3 @ 0x12767dfc");
L_12767dfd:;
  /* 12767dfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12767dff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12767e01 jne 0x12767dd9 */
  if (!C.zf) goto L_12767dd9;
  /* 12767e03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e06 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12767e0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767e13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12767e16 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767e1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12767e1e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767e24 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12767e27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12767e2a push ecx */
  push32((uint32_t)(ECX));
  /* 12767e2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12767e2e push edx */
  push32((uint32_t)(EDX));
  /* 12767e2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e32 push eax */
  push32((uint32_t)(EAX));
  /* 12767e33 call 0x1276bc90 */
  push32(0x12767e38u); f_1276bc90();
  /* 12767e38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767e3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12767e3e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e41 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12767e44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767e47 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12767e4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e50 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767e54 jl 0x12767e78 */
  if ((C.sf!=C.of)) goto L_12767e78;
  /* 12767e56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12767e5b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12767e5e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12767e60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12767e66 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12767e69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12767e6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12767e71 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12767e76 jmp 0x12767e89 */
  goto L_12767e89;
L_12767e78:;
  /* 12767e78 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12767e7b push edx */
  push32((uint32_t)(EDX));
  /* 12767e7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12767e7e call 0x1276ba10 */
  push32(0x12767e83u); f_1276ba10();
  /* 12767e83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767e86 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12767e89:;
  /* 12767e89 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12767e8c pop edi */
  EDI = (pop32());
  /* 12767e8d pop esi */
  ESI = (pop32());
  /* 12767e8e pop ebx */
  EBX = (pop32());
  /* 12767e8f mov esp, ebp */
  ESP = (EBP);
  /* 12767e91 pop ebp */
  EBP = (pop32());
  /* 12767e92 ret  */
  ESPCHK(0x12767da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x12767ea0 (47 bytes, 17 insns) */
void f_12767ea0(void) {
  FTRACE(0x12767ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767ea0 push ecx */
  push32((uint32_t)(ECX));
  /* 12767ea1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767ea6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12767eaa jb 0x12767ec0 */
  if (C.cf) goto L_12767ec0;
L_12767eac:;
  /* 12767eac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767eb2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767eb7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12767eb9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767ebe jae 0x12767eac */
  if (!C.cf) goto L_12767eac;
L_12767ec0:;
  /* 12767ec0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767ec2 mov eax, esp */
  EAX = (ESP);
  /* 12767ec4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12767ec6 mov esp, ecx */
  ESP = (ECX);
  /* 12767ec8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12767eca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12767ecd push eax */
  push32((uint32_t)(EAX));
  /* 12767ece ret  */
  ESPCHK(0x12767ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ed0 @ 0x12767ed0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12767ed0(void) {
  FTRACE(0x12767ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12767ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12767ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12767ed3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767ed6 push esi */
  push32((uint32_t)(ESI));
  /* 12767ed7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767edb je 0x12767ee3 */
  if (C.zf) goto L_12767ee3;
  /* 12767edd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767ee1 jne 0x12767ee8 */
  if (!C.zf) goto L_12767ee8;
L_12767ee3:;
  /* 12767ee3 jmp 0x127680b8 */
  goto L_127680b8;
L_12767ee8:;
  /* 12767ee8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767eec je 0x12767f04 */
  if (C.zf) goto L_12767f04;
  /* 12767eee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767ef2 je 0x12767f04 */
  if (C.zf) goto L_12767f04;
  /* 12767ef4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767ef8 je 0x12767f04 */
  if (C.zf) goto L_12767f04;
  /* 12767efa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767efe jne 0x12767fe1 */
  if (!C.zf) goto L_12767fe1;
L_12767f04:;
  /* 12767f04 push 1 */
  push32((uint32_t)(0x1u));
  /* 12767f06 call 0x12768700 */
  push32(0x12767f0bu); f_12768700();
  /* 12767f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767f0e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767f12 je 0x12767f1a */
  if (C.zf) goto L_12767f1a;
  /* 12767f14 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767f18 jne 0x12767f5f */
  if (!C.zf) goto L_12767f5f;
L_12767f1a:;
  /* 12767f1a cmp dword ptr [0x127907d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127907d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767f21 jne 0x12767f5f */
  if (!C.zf) goto L_12767f5f;
  /* 12767f23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12767f25 push 0x12768100 */
  push32((uint32_t)(0x12768100u));
  /* 12767f2a call dword ptr [0x12793328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793328))), 0x12767f30u);
  /* 12767f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767f33 jne 0x12767f41 */
  if (!C.zf) goto L_12767f41;
  /* 12767f35 mov dword ptr [0x127907d4], 1 */
  w32((uint32_t)(0x127907d4), (0x1u));
  /* 12767f3f jmp 0x12767f5f */
  goto L_12767f5f;
L_12767f41:;
  /* 12767f41 call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x12767f47u);
  /* 12767f47 mov esi, eax */
  ESI = (EAX);
  /* 12767f49 call 0x1276cbe0 */
  push32(0x12767f4eu); f_1276cbe0();
  /* 12767f4e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12767f50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12767f52 call 0x127687a0 */
  push32(0x12767f57u); f_127687a0();
  /* 12767f57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767f5a jmp 0x127680b8 */
  goto L_127680b8;
L_12767f5f:;
  /* 12767f5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12767f62 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12767f65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12767f68 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12767f6b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12767f6e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767f72 ja 0x12767fd2 */
  if ((!C.cf&&!C.zf)) goto L_12767fd2;
  /* 12767f74 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12767f77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12767f79 mov dl, byte ptr [eax + 0x127680df] */
  DL = (r8((uint32_t)(EAX + 0x127680df)));
  /* 12767f7f jmp dword ptr [edx*4 + 0x127680cb] */
  switch (EDX) {
    case 0: goto L_12767f86;
    case 1: goto L_12767fc0;
    case 2: goto L_12767f9a;
    case 3: goto L_12767fad;
    case 4: goto L_12767fd2;
    default: x86_unimpl("switch@0x12767f7f out of table"); return;
  }
L_12767f86:;
  /* 12767f86 mov ecx, dword ptr [0x127907c4] */
  ECX = (r32((uint32_t)(0x127907c4)));
  /* 12767f8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12767f8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767f92 mov dword ptr [0x127907c4], edx */
  w32((uint32_t)(0x127907c4), (EDX));
  /* 12767f98 jmp 0x12767fd2 */
  goto L_12767fd2;
L_12767f9a:;
  /* 12767f9a mov eax, dword ptr [0x127907c8] */
  EAX = (r32((uint32_t)(0x127907c8)));
  /* 12767f9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12767fa2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767fa5 mov dword ptr [0x127907c8], ecx */
  w32((uint32_t)(0x127907c8), (ECX));
  /* 12767fab jmp 0x12767fd2 */
  goto L_12767fd2;
L_12767fad:;
  /* 12767fad mov edx, dword ptr [0x127907cc] */
  EDX = (r32((uint32_t)(0x127907cc)));
  /* 12767fb3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12767fb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767fb9 mov dword ptr [0x127907cc], eax */
  w32((uint32_t)(0x127907cc), (EAX));
  /* 12767fbe jmp 0x12767fd2 */
  goto L_12767fd2;
L_12767fc0:;
  /* 12767fc0 mov ecx, dword ptr [0x127907d0] */
  ECX = (r32((uint32_t)(0x127907d0)));
  /* 12767fc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12767fc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12767fcc mov dword ptr [0x127907d0], edx */
  w32((uint32_t)(0x127907d0), (EDX));
L_12767fd2:;
  /* 12767fd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12767fd4 call 0x127687a0 */
  push32(0x12767fd9u); f_127687a0();
  /* 12767fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12767fdc jmp 0x127680b3 */
  goto L_127680b3;
L_12767fe1:;
  /* 12767fe1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767fe5 je 0x12767ff8 */
  if (C.zf) goto L_12767ff8;
  /* 12767fe7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767feb je 0x12767ff8 */
  if (C.zf) goto L_12767ff8;
  /* 12767fed cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12767ff1 je 0x12767ff8 */
  if (C.zf) goto L_12767ff8;
  /* 12767ff3 jmp 0x127680b8 */
  goto L_127680b8;
L_12767ff8:;
  /* 12767ff8 call 0x12764740 */
  push32(0x12767ffdu); f_12764740();
  /* 12767ffd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12768000 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768003 cmp dword ptr [eax + 0x50], 0x1278ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1278ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276800a jne 0x12768055 */
  if (!C.zf) goto L_12768055;
  /* 1276800c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12768011 push 0x1278c11c */
  push32((uint32_t)(0x1278c11cu));
  /* 12768016 push 2 */
  push32((uint32_t)(0x2u));
  /* 12768018 mov ecx, dword ptr [0x1278ec80] */
  ECX = (r32((uint32_t)(0x1278ec80)));
  /* 1276801e push ecx */
  push32((uint32_t)(ECX));
  /* 1276801f call 0x12764d00 */
  push32(0x12768024u); f_12764d00();
  /* 12768024 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768027 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276802a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1276802d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768030 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768034 je 0x12768053 */
  if (C.zf) goto L_12768053;
  /* 12768036 mov ecx, dword ptr [0x1278ec80] */
  ECX = (r32((uint32_t)(0x1278ec80)));
  /* 1276803c push ecx */
  push32((uint32_t)(ECX));
  /* 1276803d push 0x1278ec00 */
  push32((uint32_t)(0x1278ec00u));
  /* 12768042 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768045 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12768048 push eax */
  push32((uint32_t)(EAX));
  /* 12768049 call 0x1276b5e0 */
  push32(0x1276804eu); f_1276b5e0();
  /* 1276804e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768051 jmp 0x12768055 */
  goto L_12768055;
L_12768053:;
  /* 12768053 jmp 0x127680b8 */
  goto L_127680b8;
L_12768055:;
  /* 12768055 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768058 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1276805b push edx */
  push32((uint32_t)(EDX));
  /* 1276805c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276805f push eax */
  push32((uint32_t)(EAX));
  /* 12768060 call 0x127683e0 */
  push32(0x12768065u); f_127683e0();
  /* 12768065 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768068 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1276806b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276806f jne 0x12768073 */
  if (!C.zf) goto L_12768073;
  /* 12768071 jmp 0x127680b8 */
  goto L_127680b8;
L_12768073:;
  /* 12768073 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768076 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12768079 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1276807c:;
  /* 1276807c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276807f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12768082 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768085 jne 0x127680b3 */
  if (!C.zf) goto L_127680b3;
  /* 12768087 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276808a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276808d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12768090 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768093 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768096 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12768099 mov edx, dword ptr [0x1278ec84] */
  EDX = (r32((uint32_t)(0x1278ec84)));
  /* 1276809f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127680a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127680a5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 127680a8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127680aa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127680ad jb 0x127680b1 */
  if (C.cf) goto L_127680b1;
  /* 127680af jmp 0x127680b3 */
  goto L_127680b3;
L_127680b1:;
  /* 127680b1 jmp 0x1276807c */
  goto L_1276807c;
L_127680b3:;
  /* 127680b3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127680b6 jmp 0x127680c6 */
  goto L_127680c6;
L_127680b8:;
  /* 127680b8 call 0x1276cbd0 */
  push32(0x127680bdu); f_1276cbd0();
  /* 127680bd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 127680c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_127680c6:;
  /* 127680c6 pop esi */
  ESI = (pop32());
  /* 127680c7 mov esp, ebp */
  ESP = (EBP);
  /* 127680c9 pop ebp */
  EBP = (pop32());
  /* 127680ca ret  */
  ESPCHK(0x12767ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008100 @ 0x12768100 (146 bytes, 45 insns) */
void f_12768100(void) {
  FTRACE(0x12768100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768100 push ebp */
  push32((uint32_t)(EBP));
  /* 12768101 mov ebp, esp */
  EBP = (ESP);
  /* 12768103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12768106 push 1 */
  push32((uint32_t)(0x1u));
  /* 12768108 call 0x12768700 */
  push32(0x1276810du); f_12768700();
  /* 1276810d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768110 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768114 jne 0x1276812e */
  if (!C.zf) goto L_1276812e;
  /* 12768116 mov dword ptr [ebp - 8], 0x127907c4 */
  w32((uint32_t)(EBP + -0x8), (0x127907c4u));
  /* 1276811d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768120 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12768122 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12768125 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1276812c jmp 0x12768144 */
  goto L_12768144;
L_1276812e:;
  /* 1276812e mov dword ptr [ebp - 8], 0x127907c8 */
  w32((uint32_t)(EBP + -0x8), (0x127907c8u));
  /* 12768135 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768138 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1276813a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1276813d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12768144:;
  /* 12768144 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768148 jne 0x12768158 */
  if (!C.zf) goto L_12768158;
  /* 1276814a push 1 */
  push32((uint32_t)(0x1u));
  /* 1276814c call 0x127687a0 */
  push32(0x12768151u); f_127687a0();
  /* 12768151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768156 jmp 0x1276818c */
  goto L_1276818c;
L_12768158:;
  /* 12768158 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276815c je 0x1276817d */
  if (C.zf) goto L_1276817d;
  /* 1276815e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768161 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12768167 push 1 */
  push32((uint32_t)(0x1u));
  /* 12768169 call 0x127687a0 */
  push32(0x1276816eu); f_127687a0();
  /* 1276816e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768171 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768174 push edx */
  push32((uint32_t)(EDX));
  /* 12768175 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12768178u);
  /* 12768178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276817b jmp 0x12768187 */
  goto L_12768187;
L_1276817d:;
  /* 1276817d push 1 */
  push32((uint32_t)(0x1u));
  /* 1276817f call 0x127687a0 */
  push32(0x12768184u); f_127687a0();
  /* 12768184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12768187:;
  /* 12768187 mov eax, 1 */
  EAX = (0x1u);
L_1276818c:;
  /* 1276818c mov esp, ebp */
  ESP = (EBP);
  /* 1276818e pop ebp */
  EBP = (pop32());
  /* 1276818f ret 4 */
  ESPCHK(0x12768100u, _esp0);
  ESP += 8; return;
}

/* FUN_100081a0 @ 0x127681a0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_127681a0(void) {
  FTRACE(0x127681a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127681a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127681a1 mov ebp, esp */
  EBP = (ESP);
  /* 127681a3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127681a6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 127681ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127681b0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 127681b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 127681b6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 127681b9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 127681bc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127681c0 ja 0x1276826e */
  if ((!C.cf&&!C.zf)) goto L_1276826e;
  /* 127681c6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 127681c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127681cb mov dl, byte ptr [eax + 0x127683c2] */
  DL = (r8((uint32_t)(EAX + 0x127683c2)));
  /* 127681d1 jmp dword ptr [edx*4 + 0x127683aa] */
  switch (EDX) {
    case 0: goto L_127681d8;
    case 1: goto L_12768243;
    case 2: goto L_12768229;
    case 3: goto L_127681f5;
    case 4: goto L_1276820f;
    case 5: goto L_1276826e;
    default: x86_unimpl("switch@0x127681d1 out of table"); return;
  }
L_127681d8:;
  /* 127681d8 mov dword ptr [ebp - 0x18], 0x127907c4 */
  w32((uint32_t)(EBP + -0x18), (0x127907c4u));
  /* 127681df mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127681e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127681e4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 127681e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 127681ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127681ed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 127681f0 jmp 0x12768276 */
  goto L_12768276;
L_127681f5:;
  /* 127681f5 mov dword ptr [ebp - 0x18], 0x127907c8 */
  w32((uint32_t)(EBP + -0x18), (0x127907c8u));
  /* 127681fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 127681ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12768201 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12768204 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12768207 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276820a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1276820d jmp 0x12768276 */
  goto L_12768276;
L_1276820f:;
  /* 1276820f mov dword ptr [ebp - 0x18], 0x127907cc */
  w32((uint32_t)(EBP + -0x18), (0x127907ccu));
  /* 12768216 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12768219 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1276821b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1276821e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12768221 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768224 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12768227 jmp 0x12768276 */
  goto L_12768276;
L_12768229:;
  /* 12768229 mov dword ptr [ebp - 0x18], 0x127907d0 */
  w32((uint32_t)(EBP + -0x18), (0x127907d0u));
  /* 12768230 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12768233 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12768235 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12768238 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1276823b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276823e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12768241 jmp 0x12768276 */
  goto L_12768276;
L_12768243:;
  /* 12768243 call 0x12764740 */
  push32(0x12768248u); f_12764740();
  /* 12768248 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276824b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276824e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12768251 push edx */
  push32((uint32_t)(EDX));
  /* 12768252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768255 push eax */
  push32((uint32_t)(EAX));
  /* 12768256 call 0x127683e0 */
  push32(0x1276825bu); f_127683e0();
  /* 1276825b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276825e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768261 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12768264 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12768267 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12768269 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1276826c jmp 0x12768276 */
  goto L_12768276;
L_1276826e:;
  /* 1276826e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12768271 jmp 0x127683a6 */
  goto L_127683a6;
L_12768276:;
  /* 12768276 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276827a je 0x12768286 */
  if (C.zf) goto L_12768286;
  /* 1276827c push 1 */
  push32((uint32_t)(0x1u));
  /* 1276827e call 0x12768700 */
  push32(0x12768283u); f_12768700();
  /* 12768283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12768286:;
  /* 12768286 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276828a jne 0x127682a3 */
  if (!C.zf) goto L_127682a3;
  /* 1276828c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768290 je 0x1276829c */
  if (C.zf) goto L_1276829c;
  /* 12768292 push 1 */
  push32((uint32_t)(0x1u));
  /* 12768294 call 0x127687a0 */
  push32(0x12768299u); f_127687a0();
  /* 12768299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276829c:;
  /* 1276829c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1276829e jmp 0x127683a6 */
  goto L_127683a6;
L_127682a3:;
  /* 127682a3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127682a7 jne 0x127682c0 */
  if (!C.zf) goto L_127682c0;
  /* 127682a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127682ad je 0x127682b9 */
  if (C.zf) goto L_127682b9;
  /* 127682af push 1 */
  push32((uint32_t)(0x1u));
  /* 127682b1 call 0x127687a0 */
  push32(0x127682b6u); f_127687a0();
  /* 127682b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127682b9:;
  /* 127682b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 127682bb call 0x127644c0 */
  push32(0x127682c0u); f_127644c0();
L_127682c0:;
  /* 127682c0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127682c4 je 0x127682d2 */
  if (C.zf) goto L_127682d2;
  /* 127682c6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127682ca je 0x127682d2 */
  if (C.zf) goto L_127682d2;
  /* 127682cc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127682d0 jne 0x127682fe */
  if (!C.zf) goto L_127682fe;
L_127682d2:;
  /* 127682d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127682d5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 127682d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 127682db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127682de mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 127682e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127682e9 jne 0x127682fe */
  if (!C.zf) goto L_127682fe;
  /* 127682eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127682ee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 127682f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 127682f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127682f7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_127682fe:;
  /* 127682fe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768302 jne 0x12768340 */
  if (!C.zf) goto L_12768340;
  /* 12768304 mov eax, dword ptr [0x1278ec78] */
  EAX = (r32((uint32_t)(0x1278ec78)));
  /* 12768309 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1276830c jmp 0x12768317 */
  goto L_12768317;
L_1276830e:;
  /* 1276830e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12768311 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768314 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12768317:;
  /* 12768317 mov edx, dword ptr [0x1278ec78] */
  EDX = (r32((uint32_t)(0x1278ec78)));
  /* 1276831d add edx, dword ptr [0x1278ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1278ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768323 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768326 jge 0x1276833e */
  if ((C.sf==C.of)) goto L_1276833e;
  /* 12768328 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276832b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276832e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768331 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12768334 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1276833c jmp 0x1276830e */
  goto L_1276830e;
L_1276833e:;
  /* 1276833e jmp 0x12768349 */
  goto L_12768349;
L_12768340:;
  /* 12768340 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12768343 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12768349:;
  /* 12768349 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276834d je 0x12768359 */
  if (C.zf) goto L_12768359;
  /* 1276834f push 1 */
  push32((uint32_t)(0x1u));
  /* 12768351 call 0x127687a0 */
  push32(0x12768356u); f_127687a0();
  /* 12768356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12768359:;
  /* 12768359 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276835d jne 0x12768370 */
  if (!C.zf) goto L_12768370;
  /* 1276835f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768362 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12768365 push edx */
  push32((uint32_t)(EDX));
  /* 12768366 push 8 */
  push32((uint32_t)(0x8u));
  /* 12768368 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1276836bu);
  /* 1276836b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276836e jmp 0x1276837a */
  goto L_1276837a;
L_12768370:;
  /* 12768370 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768373 push eax */
  push32((uint32_t)(EAX));
  /* 12768374 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12768377u);
  /* 12768377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276837a:;
  /* 1276837a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276837e je 0x1276838c */
  if (C.zf) goto L_1276838c;
  /* 12768380 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768384 je 0x1276838c */
  if (C.zf) goto L_1276838c;
  /* 12768386 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276838a jne 0x127683a4 */
  if (!C.zf) goto L_127683a4;
L_1276838c:;
  /* 1276838c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276838f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12768392 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12768395 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768399 jne 0x127683a4 */
  if (!C.zf) goto L_127683a4;
  /* 1276839b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276839e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127683a1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_127683a4:;
  /* 127683a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_127683a6:;
  /* 127683a6 mov esp, ebp */
  ESP = (EBP);
  /* 127683a8 pop ebp */
  EBP = (pop32());
  /* 127683a9 ret  */
  ESPCHK(0x127681a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083e0 @ 0x127683e0 (91 bytes, 35 insns) */
void f_127683e0(void) {
  FTRACE(0x127683e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127683e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127683e1 mov ebp, esp */
  EBP = (ESP);
  /* 127683e3 push ecx */
  push32((uint32_t)(ECX));
  /* 127683e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127683e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127683ea:;
  /* 127683ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127683ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 127683f0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127683f3 je 0x12768413 */
  if (C.zf) goto L_12768413;
  /* 127683f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127683f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127683fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127683fe mov ecx, dword ptr [0x1278ec84] */
  ECX = (r32((uint32_t)(0x1278ec84)));
  /* 12768404 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12768407 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276840a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276840c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276840f jae 0x12768413 */
  if (!C.cf) goto L_12768413;
  /* 12768411 jmp 0x127683ea */
  goto L_127683ea;
L_12768413:;
  /* 12768413 mov eax, dword ptr [0x1278ec84] */
  EAX = (r32((uint32_t)(0x1278ec84)));
  /* 12768418 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1276841b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1276841e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768420 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768423 jae 0x12768435 */
  if (!C.cf) goto L_12768435;
  /* 12768425 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768428 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1276842b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276842e jne 0x12768435 */
  if (!C.zf) goto L_12768435;
  /* 12768430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768433 jmp 0x12768437 */
  goto L_12768437;
L_12768435:;
  /* 12768435 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12768437:;
  /* 12768437 mov esp, ebp */
  ESP = (EBP);
  /* 12768439 pop ebp */
  EBP = (pop32());
  /* 1276843a ret  */
  ESPCHK(0x127683e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008440 @ 0x12768440 (13 bytes, 6 insns) */
void f_12768440(void) {
  FTRACE(0x12768440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768440 push ebp */
  push32((uint32_t)(EBP));
  /* 12768441 mov ebp, esp */
  EBP = (ESP);
  /* 12768443 call 0x12764740 */
  push32(0x12768448u); f_12764740();
  /* 12768448 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276844b pop ebp */
  EBP = (pop32());
  /* 1276844c ret  */
  ESPCHK(0x12768440u, _esp0);
  ESP += 4; return;
}

/* FUN_10008450 @ 0x12768450 (13 bytes, 6 insns) */
void f_12768450(void) {
  FTRACE(0x12768450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768450 push ebp */
  push32((uint32_t)(EBP));
  /* 12768451 mov ebp, esp */
  EBP = (ESP);
  /* 12768453 call 0x12764740 */
  push32(0x12768458u); f_12764740();
  /* 12768458 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1276845b pop ebp */
  EBP = (pop32());
  /* 1276845c ret  */
  ESPCHK(0x12768450u, _esp0);
  ESP += 4; return;
}

/* FUN_10008460 @ 0x12768460 (187 bytes, 54 insns) */
void f_12768460(void) {
  FTRACE(0x12768460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768460 push ebp */
  push32((uint32_t)(EBP));
  /* 12768461 mov ebp, esp */
  EBP = (ESP);
  /* 12768463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12768466 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276846d cmp dword ptr [0x127907d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127907d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768474 jne 0x127684d3 */
  if (!C.zf) goto L_127684d3;
  /* 12768476 push 0x1278b548 */
  push32((uint32_t)(0x1278b548u));
  /* 1276847b call dword ptr [0x1279335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279335c))), 0x12768481u);
  /* 12768481 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12768484 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768488 je 0x127684a7 */
  if (C.zf) goto L_127684a7;
  /* 1276848a push 0x1278c14c */
  push32((uint32_t)(0x1278c14cu));
  /* 1276848f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768492 push eax */
  push32((uint32_t)(EAX));
  /* 12768493 call dword ptr [0x12793358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793358))), 0x12768499u);
  /* 12768499 mov dword ptr [0x127907d8], eax */
  w32((uint32_t)(0x127907d8), (EAX));
  /* 1276849e cmp dword ptr [0x127907d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127907d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127684a5 jne 0x127684ab */
  if (!C.zf) goto L_127684ab;
L_127684a7:;
  /* 127684a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127684a9 jmp 0x12768517 */
  goto L_12768517;
L_127684ab:;
  /* 127684ab push 0x1278c13c */
  push32((uint32_t)(0x1278c13cu));
  /* 127684b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127684b3 push ecx */
  push32((uint32_t)(ECX));
  /* 127684b4 call dword ptr [0x12793358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793358))), 0x127684bau);
  /* 127684ba mov dword ptr [0x127907dc], eax */
  w32((uint32_t)(0x127907dc), (EAX));
  /* 127684bf push 0x1278c128 */
  push32((uint32_t)(0x1278c128u));
  /* 127684c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127684c7 push edx */
  push32((uint32_t)(EDX));
  /* 127684c8 call dword ptr [0x12793358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793358))), 0x127684ceu);
  /* 127684ce mov dword ptr [0x127907e0], eax */
  w32((uint32_t)(0x127907e0), (EAX));
L_127684d3:;
  /* 127684d3 cmp dword ptr [0x127907dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127907dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127684da je 0x127684e5 */
  if (C.zf) goto L_127684e5;
  /* 127684dc call dword ptr [0x127907dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x127907dc))), 0x127684e2u);
  /* 127684e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127684e5:;
  /* 127684e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127684e9 je 0x12768501 */
  if (C.zf) goto L_12768501;
  /* 127684eb cmp dword ptr [0x127907e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x127907e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127684f2 je 0x12768501 */
  if (C.zf) goto L_12768501;
  /* 127684f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127684f7 push eax */
  push32((uint32_t)(EAX));
  /* 127684f8 call dword ptr [0x127907e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x127907e0))), 0x127684feu);
  /* 127684fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12768501:;
  /* 12768501 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12768504 push ecx */
  push32((uint32_t)(ECX));
  /* 12768505 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768508 push edx */
  push32((uint32_t)(EDX));
  /* 12768509 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276850c push eax */
  push32((uint32_t)(EAX));
  /* 1276850d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768510 push ecx */
  push32((uint32_t)(ECX));
  /* 12768511 call dword ptr [0x127907d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127907d8))), 0x12768517u);
L_12768517:;
  /* 12768517 mov esp, ebp */
  ESP = (EBP);
  /* 12768519 pop ebp */
  EBP = (pop32());
  /* 1276851a ret  */
  ESPCHK(0x12768460u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12768520 (254 bytes, 109 insns) */
void f_12768520(void) {
  FTRACE(0x12768520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768520 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12768524 push edi */
  push32((uint32_t)(EDI));
  /* 12768525 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12768527 je 0x127685a3 */
  if (C.zf) goto L_127685a3;
  /* 12768529 push esi */
  push32((uint32_t)(ESI));
  /* 1276852a push ebx */
  push32((uint32_t)(EBX));
  /* 1276852b mov ebx, ecx */
  EBX = (ECX);
  /* 1276852d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12768531 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12768537 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1276853b jne 0x12768544 */
  if (!C.zf) goto L_12768544;
  /* 1276853d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12768540 jne 0x127685b1 */
  if (!C.zf) goto L_127685b1;
  /* 12768542 jmp 0x12768565 */
  goto L_12768565;
L_12768544:;
  /* 12768544 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12768546 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12768547 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12768549 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1276854a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1276854b je 0x12768572 */
  if (C.zf) goto L_12768572;
  /* 1276854d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1276854f je 0x1276857a */
  if (C.zf) goto L_1276857a;
  /* 12768551 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12768557 jne 0x12768544 */
  if (!C.zf) goto L_12768544;
  /* 12768559 mov ebx, ecx */
  EBX = (ECX);
  /* 1276855b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1276855e jne 0x127685b1 */
  if (!C.zf) goto L_127685b1;
L_12768560:;
  /* 12768560 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12768563 je 0x12768572 */
  if (C.zf) goto L_12768572;
L_12768565:;
  /* 12768565 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12768567 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12768568 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276856a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1276856b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1276856d je 0x1276859e */
  if (C.zf) goto L_1276859e;
  /* 1276856f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12768570 jne 0x12768565 */
  if (!C.zf) goto L_12768565;
L_12768572:;
  /* 12768572 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12768576 pop ebx */
  EBX = (pop32());
  /* 12768577 pop esi */
  ESI = (pop32());
  /* 12768578 pop edi */
  EDI = (pop32());
  /* 12768579 ret  */
  ESPCHK(0x12768520u, _esp0);
  ESP += 4; return;
L_1276857a:;
  /* 1276857a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12768580 je 0x12768594 */
  if (C.zf) goto L_12768594;
L_12768582:;
  /* 12768582 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12768584 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12768585 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12768586 je 0x12768616 */
  if (C.zf) goto L_12768616;
  /* 1276858c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12768592 jne 0x12768582 */
  if (!C.zf) goto L_12768582;
L_12768594:;
  /* 12768594 mov ebx, ecx */
  EBX = (ECX);
  /* 12768596 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12768599 jne 0x12768607 */
  if (!C.zf) goto L_12768607;
L_1276859b:;
  /* 1276859b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1276859d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1276859e:;
  /* 1276859e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1276859f jne 0x1276859b */
  if (!C.zf) goto L_1276859b;
  /* 127685a1 pop ebx */
  EBX = (pop32());
  /* 127685a2 pop esi */
  ESI = (pop32());
L_127685a3:;
  /* 127685a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 127685a7 pop edi */
  EDI = (pop32());
  /* 127685a8 ret  */
  ESPCHK(0x12768520u, _esp0);
  ESP += 4; return;
L_127685a9:;
  /* 127685a9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127685ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 127685ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 127685af je 0x12768560 */
  if (C.zf) goto L_12768560;
L_127685b1:;
  /* 127685b1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 127685b6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 127685b8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127685ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 127685bd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 127685bf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 127685c1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 127685c4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 127685c9 je 0x127685a9 */
  if (C.zf) goto L_127685a9;
  /* 127685cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 127685cd je 0x127685fb */
  if (C.zf) goto L_127685fb;
  /* 127685cf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 127685d1 je 0x127685f1 */
  if (C.zf) goto L_127685f1;
  /* 127685d3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 127685d9 je 0x127685e7 */
  if (C.zf) goto L_127685e7;
  /* 127685db test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 127685e1 jne 0x127685a9 */
  if (!C.zf) goto L_127685a9;
  /* 127685e3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127685e5 jmp 0x127685ff */
  goto L_127685ff;
L_127685e7:;
  /* 127685e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 127685ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127685ef jmp 0x127685ff */
  goto L_127685ff;
L_127685f1:;
  /* 127685f1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 127685f7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 127685f9 jmp 0x127685ff */
  goto L_127685ff;
L_127685fb:;
  /* 127685fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 127685fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_127685ff:;
  /* 127685ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12768602 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768604 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12768605 je 0x12768611 */
  if (C.zf) goto L_12768611;
L_12768607:;
  /* 12768607 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12768609:;
  /* 12768609 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1276860b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1276860e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1276860f jne 0x12768609 */
  if (!C.zf) goto L_12768609;
L_12768611:;
  /* 12768611 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12768614 jne 0x1276859b */
  if (!C.zf) goto L_1276859b;
L_12768616:;
  /* 12768616 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1276861a pop ebx */
  EBX = (pop32());
  /* 1276861b pop esi */
  ESI = (pop32());
  /* 1276861c pop edi */
  EDI = (pop32());
  /* 1276861d ret  */
  ESPCHK(0x12768520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008620 @ 0x12768620 (55 bytes, 16 insns) */
void f_12768620(void) {
  FTRACE(0x12768620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768620 push ebp */
  push32((uint32_t)(EBP));
  /* 12768621 mov ebp, esp */
  EBP = (ESP);
  /* 12768623 mov eax, dword ptr [0x1278eb84] */
  EAX = (r32((uint32_t)(0x1278eb84)));
  /* 12768628 push eax */
  push32((uint32_t)(EAX));
  /* 12768629 call dword ptr [0x12793324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793324))), 0x1276862fu);
  /* 1276862f mov ecx, dword ptr [0x1278eb74] */
  ECX = (r32((uint32_t)(0x1278eb74)));
  /* 12768635 push ecx */
  push32((uint32_t)(ECX));
  /* 12768636 call dword ptr [0x12793324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793324))), 0x1276863cu);
  /* 1276863c mov edx, dword ptr [0x1278eb64] */
  EDX = (r32((uint32_t)(0x1278eb64)));
  /* 12768642 push edx */
  push32((uint32_t)(EDX));
  /* 12768643 call dword ptr [0x12793324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793324))), 0x12768649u);
  /* 12768649 mov eax, dword ptr [0x1278eb44] */
  EAX = (r32((uint32_t)(0x1278eb44)));
  /* 1276864e push eax */
  push32((uint32_t)(EAX));
  /* 1276864f call dword ptr [0x12793324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793324))), 0x12768655u);
  /* 12768655 pop ebp */
  EBP = (pop32());
  /* 12768656 ret  */
  ESPCHK(0x12768620u, _esp0);
  ESP += 4; return;
}

/* FUN_10008660 @ 0x12768660 (159 bytes, 47 insns) */
void f_12768660(void) {
  FTRACE(0x12768660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768660 push ebp */
  push32((uint32_t)(EBP));
  /* 12768661 mov ebp, esp */
  EBP = (ESP);
  /* 12768663 push ecx */
  push32((uint32_t)(ECX));
  /* 12768664 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1276866b jmp 0x12768676 */
  goto L_12768676;
L_1276866d:;
  /* 1276866d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768670 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768673 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12768676:;
  /* 12768676 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276867a jge 0x127686c9 */
  if ((C.sf==C.of)) goto L_127686c9;
  /* 1276867c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276867f cmp dword ptr [ecx*4 + 0x1278eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1278eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768687 je 0x127686c7 */
  if (C.zf) goto L_127686c7;
  /* 12768689 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276868d je 0x127686c7 */
  if (C.zf) goto L_127686c7;
  /* 1276868f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768693 je 0x127686c7 */
  if (C.zf) goto L_127686c7;
  /* 12768695 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768699 je 0x127686c7 */
  if (C.zf) goto L_127686c7;
  /* 1276869b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276869f je 0x127686c7 */
  if (C.zf) goto L_127686c7;
  /* 127686a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127686a4 mov eax, dword ptr [edx*4 + 0x1278eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1278eb40)));
  /* 127686ab push eax */
  push32((uint32_t)(EAX));
  /* 127686ac call dword ptr [0x1279339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279339c))), 0x127686b2u);
  /* 127686b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 127686b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127686b7 mov edx, dword ptr [ecx*4 + 0x1278eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1278eb40)));
  /* 127686be push edx */
  push32((uint32_t)(EDX));
  /* 127686bf call 0x12765790 */
  push32(0x127686c4u); f_12765790();
  /* 127686c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_127686c7:;
  /* 127686c7 jmp 0x1276866d */
  goto L_1276866d;
L_127686c9:;
  /* 127686c9 mov eax, dword ptr [0x1278eb64] */
  EAX = (r32((uint32_t)(0x1278eb64)));
  /* 127686ce push eax */
  push32((uint32_t)(EAX));
  /* 127686cf call dword ptr [0x1279339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279339c))), 0x127686d5u);
  /* 127686d5 mov ecx, dword ptr [0x1278eb74] */
  ECX = (r32((uint32_t)(0x1278eb74)));
  /* 127686db push ecx */
  push32((uint32_t)(ECX));
  /* 127686dc call dword ptr [0x1279339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279339c))), 0x127686e2u);
  /* 127686e2 mov edx, dword ptr [0x1278eb84] */
  EDX = (r32((uint32_t)(0x1278eb84)));
  /* 127686e8 push edx */
  push32((uint32_t)(EDX));
  /* 127686e9 call dword ptr [0x1279339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279339c))), 0x127686efu);
  /* 127686ef mov eax, dword ptr [0x1278eb44] */
  EAX = (r32((uint32_t)(0x1278eb44)));
  /* 127686f4 push eax */
  push32((uint32_t)(EAX));
  /* 127686f5 call dword ptr [0x1279339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279339c))), 0x127686fbu);
  /* 127686fb mov esp, ebp */
  ESP = (EBP);
  /* 127686fd pop ebp */
  EBP = (pop32());
  /* 127686fe ret  */
  ESPCHK(0x12768660u, _esp0);
  ESP += 4; return;
}

/* FUN_10008700 @ 0x12768700 (151 bytes, 46 insns) */
void f_12768700(void) {
  FTRACE(0x12768700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768700 push ebp */
  push32((uint32_t)(EBP));
  /* 12768701 mov ebp, esp */
  EBP = (ESP);
  /* 12768703 push ecx */
  push32((uint32_t)(ECX));
  /* 12768704 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768707 cmp dword ptr [eax*4 + 0x1278eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1278eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276870f jne 0x12768782 */
  if (!C.zf) goto L_12768782;
  /* 12768711 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12768716 push 0x1278c158 */
  push32((uint32_t)(0x1278c158u));
  /* 1276871b push 2 */
  push32((uint32_t)(0x2u));
  /* 1276871d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1276871f call 0x12764d00 */
  push32(0x12768724u); f_12764d00();
  /* 12768724 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768727 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1276872a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276872e jne 0x1276873a */
  if (!C.zf) goto L_1276873a;
  /* 12768730 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12768732 call 0x12763c70 */
  push32(0x12768737u); f_12763c70();
  /* 12768737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276873a:;
  /* 1276873a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1276873c call 0x12768700 */
  push32(0x12768741u); f_12768700();
  /* 12768741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768744 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768747 cmp dword ptr [ecx*4 + 0x1278eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1278eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276874f jne 0x1276876a */
  if (!C.zf) goto L_1276876a;
  /* 12768751 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768754 push edx */
  push32((uint32_t)(EDX));
  /* 12768755 call dword ptr [0x12793324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793324))), 0x1276875bu);
  /* 1276875b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1276875e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768761 mov dword ptr [eax*4 + 0x1278eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1278eb40), (ECX));
  /* 12768768 jmp 0x12768778 */
  goto L_12768778;
L_1276876a:;
  /* 1276876a push 2 */
  push32((uint32_t)(0x2u));
  /* 1276876c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1276876f push edx */
  push32((uint32_t)(EDX));
  /* 12768770 call 0x12765790 */
  push32(0x12768775u); f_12765790();
  /* 12768775 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12768778:;
  /* 12768778 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1276877a call 0x127687a0 */
  push32(0x1276877fu); f_127687a0();
  /* 1276877f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12768782:;
  /* 12768782 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768785 mov ecx, dword ptr [eax*4 + 0x1278eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1278eb40)));
  /* 1276878c push ecx */
  push32((uint32_t)(ECX));
  /* 1276878d call dword ptr [0x12793320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793320))), 0x12768793u);
  /* 12768793 mov esp, ebp */
  ESP = (EBP);
  /* 12768795 pop ebp */
  EBP = (pop32());
  /* 12768796 ret  */
  ESPCHK(0x12768700u, _esp0);
  ESP += 4; return;
}

/* FUN_100087a0 @ 0x127687a0 (22 bytes, 8 insns) */
void f_127687a0(void) {
  FTRACE(0x127687a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127687a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127687a1 mov ebp, esp */
  EBP = (ESP);
  /* 127687a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127687a6 mov ecx, dword ptr [eax*4 + 0x1278eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1278eb40)));
  /* 127687ad push ecx */
  push32((uint32_t)(ECX));
  /* 127687ae call dword ptr [0x1279331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279331c))), 0x127687b4u);
  /* 127687b4 pop ebp */
  EBP = (pop32());
  /* 127687b5 ret  */
  ESPCHK(0x127687a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x127687c0 (26 bytes, 10 insns) */
void f_127687c0(void) {
  FTRACE(0x127687c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127687c0 push ebp */
  push32((uint32_t)(EBP));
  /* 127687c1 mov ebp, esp */
  EBP = (ESP);
  /* 127687c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 127687c6 push eax */
  push32((uint32_t)(EAX));
  /* 127687c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 127687c9 call dword ptr [0x12793318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793318))), 0x127687cfu);
  /* 127687cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 127687d4 call dword ptr [0x12793368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793368))), 0x127687dau);
  /* 127687da pop ebp */
  EBP = (pop32());
  /* 127687db ret  */
  ESPCHK(0x127687c0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x127687e0 (446 bytes, 130 insns) */
void f_127687e0(void) {
  FTRACE(0x127687e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127687e0 push ebp */
  push32((uint32_t)(EBP));
  /* 127687e1 mov ebp, esp */
  EBP = (ESP);
  /* 127687e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 127687e6 call 0x12764740 */
  push32(0x127687ebu); f_12764740();
  /* 127687eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 127687ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127687f1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 127687f4 push ecx */
  push32((uint32_t)(ECX));
  /* 127687f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 127687f8 push edx */
  push32((uint32_t)(EDX));
  /* 127687f9 call 0x127689a0 */
  push32(0x127687feu); f_127689a0();
  /* 127687fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768801 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12768804 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768808 je 0x12768813 */
  if (C.zf) goto L_12768813;
  /* 1276880a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276880d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768811 jne 0x12768822 */
  if (!C.zf) goto L_12768822;
L_12768813:;
  /* 12768813 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768816 push ecx */
  push32((uint32_t)(ECX));
  /* 12768817 call dword ptr [0x12793314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793314))), 0x1276881du);
  /* 1276881d jmp 0x1276899a */
  goto L_1276899a;
L_12768822:;
  /* 12768822 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12768825 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768829 jne 0x1276883f */
  if (!C.zf) goto L_1276883f;
  /* 1276882b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276882e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12768835 mov eax, 1 */
  EAX = (0x1u);
  /* 1276883a jmp 0x1276899a */
  goto L_1276899a;
L_1276883f:;
  /* 1276883f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12768842 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768846 jne 0x12768850 */
  if (!C.zf) goto L_12768850;
  /* 12768848 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1276884b jmp 0x1276899a */
  goto L_1276899a;
L_12768850:;
  /* 12768850 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12768853 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12768856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12768859 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276885c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1276885f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12768862 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768865 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768868 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1276886b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276886e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768872 jne 0x12768977 */
  if (!C.zf) goto L_12768977;
  /* 12768878 mov eax, dword ptr [0x1278ec78] */
  EAX = (r32((uint32_t)(0x1278ec78)));
  /* 1276887d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12768880 jmp 0x1276888b */
  goto L_1276888b;
L_12768882:;
  /* 12768882 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12768885 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768888 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1276888b:;
  /* 1276888b mov edx, dword ptr [0x1278ec78] */
  EDX = (r32((uint32_t)(0x1278ec78)));
  /* 12768891 add edx, dword ptr [0x1278ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1278ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768897 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276889a jge 0x127688b2 */
  if ((C.sf==C.of)) goto L_127688b2;
  /* 1276889c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1276889f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127688a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127688a5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 127688a8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 127688b0 jmp 0x12768882 */
  goto L_12768882;
L_127688b2:;
  /* 127688b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127688b5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 127688b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 127688bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 127688be cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127688c4 jne 0x127688d5 */
  if (!C.zf) goto L_127688d5;
  /* 127688c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 127688c9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 127688d0 jmp 0x1276895d */
  goto L_1276895d;
L_127688d5:;
  /* 127688d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 127688d8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127688de jne 0x127688ec */
  if (!C.zf) goto L_127688ec;
  /* 127688e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 127688e3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 127688ea jmp 0x1276895d */
  goto L_1276895d;
L_127688ec:;
  /* 127688ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 127688ef cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127688f5 jne 0x12768903 */
  if (!C.zf) goto L_12768903;
  /* 127688f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 127688fa mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12768901 jmp 0x1276895d */
  goto L_1276895d;
L_12768903:;
  /* 12768903 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12768906 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276890c jne 0x1276891a */
  if (!C.zf) goto L_1276891a;
  /* 1276890e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768911 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12768918 jmp 0x1276895d */
  goto L_1276895d;
L_1276891a:;
  /* 1276891a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276891d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768923 jne 0x12768931 */
  if (!C.zf) goto L_12768931;
  /* 12768925 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768928 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1276892f jmp 0x1276895d */
  goto L_1276895d;
L_12768931:;
  /* 12768931 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12768934 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1276893a jne 0x12768948 */
  if (!C.zf) goto L_12768948;
  /* 1276893c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276893f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12768946 jmp 0x1276895d */
  goto L_1276895d;
L_12768948:;
  /* 12768948 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276894b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768951 jne 0x1276895d */
  if (!C.zf) goto L_1276895d;
  /* 12768953 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768956 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1276895d:;
  /* 1276895d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768960 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12768963 push edx */
  push32((uint32_t)(EDX));
  /* 12768964 push 8 */
  push32((uint32_t)(0x8u));
  /* 12768966 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12768969u);
  /* 12768969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1276896c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1276896f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12768972 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12768975 jmp 0x1276898e */
  goto L_1276898e;
L_12768977:;
  /* 12768977 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1276897a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12768981 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12768984 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12768987 push ecx */
  push32((uint32_t)(ECX));
  /* 12768988 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1276898bu);
  /* 1276898b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1276898e:;
  /* 1276898e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768991 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12768994 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12768997 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1276899a:;
  /* 1276899a mov esp, ebp */
  ESP = (EBP);
  /* 1276899c pop ebp */
  EBP = (pop32());
  /* 1276899d ret  */
  ESPCHK(0x127687e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089a0 @ 0x127689a0 (89 bytes, 35 insns) */
void f_127689a0(void) {
  FTRACE(0x127689a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 127689a0 push ebp */
  push32((uint32_t)(EBP));
  /* 127689a1 mov ebp, esp */
  EBP = (ESP);
  /* 127689a3 push ecx */
  push32((uint32_t)(ECX));
  /* 127689a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 127689a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_127689aa:;
  /* 127689aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 127689ad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 127689af cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127689b2 je 0x127689d2 */
  if (C.zf) goto L_127689d2;
  /* 127689b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 127689b7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 127689ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 127689bd mov ecx, dword ptr [0x1278ec84] */
  ECX = (r32((uint32_t)(0x1278ec84)));
  /* 127689c3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127689c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 127689c9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 127689cb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127689ce jae 0x127689d2 */
  if (!C.cf) goto L_127689d2;
  /* 127689d0 jmp 0x127689aa */
  goto L_127689aa;
L_127689d2:;
  /* 127689d2 mov eax, dword ptr [0x1278ec84] */
  EAX = (r32((uint32_t)(0x1278ec84)));
  /* 127689d7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 127689da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 127689dd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 127689df cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127689e2 jae 0x127689ee */
  if (!C.cf) goto L_127689ee;
  /* 127689e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 127689e7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 127689e9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 127689ec je 0x127689f2 */
  if (C.zf) goto L_127689f2;
L_127689ee:;
  /* 127689ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 127689f0 jmp 0x127689f5 */
  goto L_127689f5;
L_127689f2:;
  /* 127689f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_127689f5:;
  /* 127689f5 mov esp, ebp */
  ESP = (EBP);
  /* 127689f7 pop ebp */
  EBP = (pop32());
  /* 127689f8 ret  */
  ESPCHK(0x127689a0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12768a00 (48 bytes, 17 insns) */
void f_12768a00(void) {
  FTRACE(0x12768a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12768a01 mov ebp, esp */
  EBP = (ESP);
  /* 12768a03 push ecx */
  push32((uint32_t)(ECX));
  /* 12768a04 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768a06 call 0x12768700 */
  push32(0x12768a0bu); f_12768700();
  /* 12768a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768a0e mov eax, dword ptr [0x1279084c] */
  EAX = (r32((uint32_t)(0x1279084c)));
  /* 12768a13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12768a16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768a19 mov dword ptr [0x1279084c], ecx */
  w32((uint32_t)(0x1279084c), (ECX));
  /* 12768a1f push 9 */
  push32((uint32_t)(0x9u));
  /* 12768a21 call 0x127687a0 */
  push32(0x12768a26u); f_127687a0();
  /* 12768a26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768a29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768a2c mov esp, ebp */
  ESP = (EBP);
  /* 12768a2e pop ebp */
  EBP = (pop32());
  /* 12768a2f ret  */
  ESPCHK(0x12768a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a30 @ 0x12768a30 (10 bytes, 5 insns) */
void f_12768a30(void) {
  FTRACE(0x12768a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12768a31 mov ebp, esp */
  EBP = (ESP);
  /* 12768a33 mov eax, dword ptr [0x1279084c] */
  EAX = (r32((uint32_t)(0x1279084c)));
  /* 12768a38 pop ebp */
  EBP = (pop32());
  /* 12768a39 ret  */
  ESPCHK(0x12768a30u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12768a40 (45 bytes, 19 insns) */
void f_12768a40(void) {
  FTRACE(0x12768a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12768a41 mov ebp, esp */
  EBP = (ESP);
  /* 12768a43 push ecx */
  push32((uint32_t)(ECX));
  /* 12768a44 mov eax, dword ptr [0x1279084c] */
  EAX = (r32((uint32_t)(0x1279084c)));
  /* 12768a49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12768a4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768a50 je 0x12768a60 */
  if (C.zf) goto L_12768a60;
  /* 12768a52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768a55 push ecx */
  push32((uint32_t)(ECX));
  /* 12768a56 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12768a59u);
  /* 12768a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768a5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12768a5e jne 0x12768a64 */
  if (!C.zf) goto L_12768a64;
L_12768a60:;
  /* 12768a60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768a62 jmp 0x12768a69 */
  goto L_12768a69;
L_12768a64:;
  /* 12768a64 mov eax, 1 */
  EAX = (0x1u);
L_12768a69:;
  /* 12768a69 mov esp, ebp */
  ESP = (EBP);
  /* 12768a6b pop ebp */
  EBP = (pop32());
  /* 12768a6c ret  */
  ESPCHK(0x12768a40u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12768a70 (88 bytes, 40 insns) */
void f_12768a70(void) {
  FTRACE(0x12768a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768a70 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12768a74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12768a78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12768a7a je 0x12768ac3 */
  if (C.zf) goto L_12768ac3;
  /* 12768a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768a7e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12768a82 push edi */
  push32((uint32_t)(EDI));
  /* 12768a83 mov edi, ecx */
  EDI = (ECX);
  /* 12768a85 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768a88 jb 0x12768ab7 */
  if (C.cf) goto L_12768ab7;
  /* 12768a8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12768a8c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12768a8f je 0x12768a99 */
  if (C.zf) goto L_12768a99;
  /* 12768a91 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12768a93:;
  /* 12768a93 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12768a95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12768a96 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12768a97 jne 0x12768a93 */
  if (!C.zf) goto L_12768a93;
L_12768a99:;
  /* 12768a99 mov ecx, eax */
  ECX = (EAX);
  /* 12768a9b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12768a9e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768aa0 mov ecx, eax */
  ECX = (EAX);
  /* 12768aa2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12768aa5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768aa7 mov ecx, edx */
  ECX = (EDX);
  /* 12768aa9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12768aac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12768aaf je 0x12768ab7 */
  if (C.zf) goto L_12768ab7;
  /* 12768ab1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12768ab3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12768ab5 je 0x12768abd */
  if (C.zf) goto L_12768abd;
L_12768ab7:;
  /* 12768ab7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12768ab9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12768aba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 12768abb jne 0x12768ab7 */
  if (!C.zf) goto L_12768ab7;
L_12768abd:;
  /* 12768abd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12768ac1 pop edi */
  EDI = (pop32());
  /* 12768ac2 ret  */
  ESPCHK(0x12768a70u, _esp0);
  ESP += 4; return;
L_12768ac3:;
  /* 12768ac3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12768ac7 ret  */
  ESPCHK(0x12768a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ad0 @ 0x12768ad0 (23 bytes, 10 insns) */
void f_12768ad0(void) {
  FTRACE(0x12768ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12768ad1 mov ebp, esp */
  EBP = (ESP);
  /* 12768ad3 mov eax, dword ptr [0x12790848] */
  EAX = (r32((uint32_t)(0x12790848)));
  /* 12768ad8 push eax */
  push32((uint32_t)(EAX));
  /* 12768ad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768adc push ecx */
  push32((uint32_t)(ECX));
  /* 12768add call 0x12768af0 */
  push32(0x12768ae2u); f_12768af0();
  /* 12768ae2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768ae5 pop ebp */
  EBP = (pop32());
  /* 12768ae6 ret  */
  ESPCHK(0x12768ad0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12768af0 (87 bytes, 34 insns) */
void f_12768af0(void) {
  FTRACE(0x12768af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12768af1 mov ebp, esp */
  EBP = (ESP);
  /* 12768af3 push ecx */
  push32((uint32_t)(ECX));
  /* 12768af4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768af8 jbe 0x12768afe */
  if ((C.cf||C.zf)) goto L_12768afe;
  /* 12768afa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768afc jmp 0x12768b43 */
  goto L_12768b43;
L_12768afe:;
  /* 12768afe cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768b02 ja 0x12768b15 */
  if ((!C.cf&&!C.zf)) goto L_12768b15;
  /* 12768b04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768b07 push eax */
  push32((uint32_t)(EAX));
  /* 12768b08 call 0x12768b50 */
  push32(0x12768b0du); f_12768b50();
  /* 12768b0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768b10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12768b13 jmp 0x12768b1c */
  goto L_12768b1c;
L_12768b15:;
  /* 12768b15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12768b1c:;
  /* 12768b1c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768b20 jne 0x12768b28 */
  if (!C.zf) goto L_12768b28;
  /* 12768b22 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768b26 jne 0x12768b2d */
  if (!C.zf) goto L_12768b2d;
L_12768b28:;
  /* 12768b28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768b2b jmp 0x12768b43 */
  goto L_12768b43;
L_12768b2d:;
  /* 12768b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768b30 push ecx */
  push32((uint32_t)(ECX));
  /* 12768b31 call 0x12768a40 */
  push32(0x12768b36u); f_12768a40();
  /* 12768b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768b39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12768b3b jne 0x12768b41 */
  if (!C.zf) goto L_12768b41;
  /* 12768b3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768b3f jmp 0x12768b43 */
  goto L_12768b43;
L_12768b41:;
  /* 12768b41 jmp 0x12768afe */
  goto L_12768afe;
L_12768b43:;
  /* 12768b43 mov esp, ebp */
  ESP = (EBP);
  /* 12768b45 pop ebp */
  EBP = (pop32());
  /* 12768b46 ret  */
  ESPCHK(0x12768af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b50 @ 0x12768b50 (109 bytes, 37 insns) */
void f_12768b50(void) {
  FTRACE(0x12768b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12768b51 mov ebp, esp */
  EBP = (ESP);
  /* 12768b53 push ecx */
  push32((uint32_t)(ECX));
  /* 12768b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768b57 cmp eax, dword ptr [0x1278ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768b5d ja 0x12768b8d */
  if ((!C.cf&&!C.zf)) goto L_12768b8d;
  /* 12768b5f push 9 */
  push32((uint32_t)(0x9u));
  /* 12768b61 call 0x12768700 */
  push32(0x12768b66u); f_12768700();
  /* 12768b66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768b69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768b6c push ecx */
  push32((uint32_t)(ECX));
  /* 12768b6d call 0x12769690 */
  push32(0x12768b72u); f_12769690();
  /* 12768b72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768b75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12768b78 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768b7a call 0x127687a0 */
  push32(0x12768b7fu); f_127687a0();
  /* 12768b7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768b82 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768b86 je 0x12768b8d */
  if (C.zf) goto L_12768b8d;
  /* 12768b88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768b8b jmp 0x12768bb9 */
  goto L_12768bb9;
L_12768b8d:;
  /* 12768b8d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768b91 jne 0x12768b9a */
  if (!C.zf) goto L_12768b9a;
  /* 12768b93 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_12768b9a:;
  /* 12768b9a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768b9d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768ba0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12768ba3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12768ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768ba9 push eax */
  push32((uint32_t)(EAX));
  /* 12768baa push 0 */
  push32((uint32_t)(0x0u));
  /* 12768bac mov ecx, dword ptr [0x1279200c] */
  ECX = (r32((uint32_t)(0x1279200c)));
  /* 12768bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12768bb3 call dword ptr [0x12793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793310))), 0x12768bb9u);
L_12768bb9:;
  /* 12768bb9 mov esp, ebp */
  ESP = (EBP);
  /* 12768bbb pop ebp */
  EBP = (pop32());
  /* 12768bbc ret  */
  ESPCHK(0x12768b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x12768bc0 (10 bytes, 5 insns) */
void f_12768bc0(void) {
  FTRACE(0x12768bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12768bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12768bc3 mov eax, 1 */
  EAX = (0x1u);
  /* 12768bc8 pop ebp */
  EBP = (pop32());
  /* 12768bc9 ret  */
  ESPCHK(0x12768bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd0 @ 0x12768bd0 (173 bytes, 59 insns) */
void f_12768bd0(void) {
  FTRACE(0x12768bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12768bd1 mov ebp, esp */
  EBP = (ESP);
  /* 12768bd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12768bd6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768bda jbe 0x12768be3 */
  if ((C.cf||C.zf)) goto L_12768be3;
  /* 12768bdc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768bde jmp 0x12768c79 */
  goto L_12768c79;
L_12768be3:;
  /* 12768be3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768be5 call 0x12768700 */
  push32(0x12768beau); f_12768700();
  /* 12768bea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768bf0 push eax */
  push32((uint32_t)(EAX));
  /* 12768bf1 call 0x12769000 */
  push32(0x12768bf6u); f_12769000();
  /* 12768bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768bf9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12768bfc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768c00 je 0x12768c41 */
  if (C.zf) goto L_12768c41;
  /* 12768c02 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12768c09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768c0c cmp ecx, dword ptr [0x1278ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1278ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768c12 ja 0x12768c32 */
  if ((!C.cf&&!C.zf)) goto L_12768c32;
  /* 12768c14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768c17 push edx */
  push32((uint32_t)(EDX));
  /* 12768c18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768c1b push eax */
  push32((uint32_t)(EAX));
  /* 12768c1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768c1f push ecx */
  push32((uint32_t)(ECX));
  /* 12768c20 call 0x12769ed0 */
  push32(0x12768c25u); f_12769ed0();
  /* 12768c25 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768c28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12768c2a je 0x12768c32 */
  if (C.zf) goto L_12768c32;
  /* 12768c2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768c2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12768c32:;
  /* 12768c32 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768c34 call 0x127687a0 */
  push32(0x12768c39u); f_127687a0();
  /* 12768c39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768c3f jmp 0x12768c79 */
  goto L_12768c79;
L_12768c41:;
  /* 12768c41 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768c43 call 0x127687a0 */
  push32(0x12768c48u); f_127687a0();
  /* 12768c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768c4b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768c4f jne 0x12768c58 */
  if (!C.zf) goto L_12768c58;
  /* 12768c51 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12768c58:;
  /* 12768c58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768c5b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768c5e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12768c60 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12768c63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768c66 push ecx */
  push32((uint32_t)(ECX));
  /* 12768c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768c6a push edx */
  push32((uint32_t)(EDX));
  /* 12768c6b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12768c6d mov eax, dword ptr [0x1279200c] */
  EAX = (r32((uint32_t)(0x1279200c)));
  /* 12768c72 push eax */
  push32((uint32_t)(EAX));
  /* 12768c73 call dword ptr [0x1279330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279330c))), 0x12768c79u);
L_12768c79:;
  /* 12768c79 mov esp, ebp */
  ESP = (EBP);
  /* 12768c7b pop ebp */
  EBP = (pop32());
  /* 12768c7c ret  */
  ESPCHK(0x12768bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c80 @ 0x12768c80 (490 bytes, 165 insns) */
void f_12768c80(void) {
  FTRACE(0x12768c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12768c81 mov ebp, esp */
  EBP = (ESP);
  /* 12768c83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12768c86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768c8a jne 0x12768c9d */
  if (!C.zf) goto L_12768c9d;
  /* 12768c8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768c8f push eax */
  push32((uint32_t)(EAX));
  /* 12768c90 call 0x12768ad0 */
  push32(0x12768c95u); f_12768ad0();
  /* 12768c95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768c98 jmp 0x12768e66 */
  goto L_12768e66;
L_12768c9d:;
  /* 12768c9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768ca1 jne 0x12768cb6 */
  if (!C.zf) goto L_12768cb6;
  /* 12768ca3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768ca6 push ecx */
  push32((uint32_t)(ECX));
  /* 12768ca7 call 0x12768e70 */
  push32(0x12768cacu); f_12768e70();
  /* 12768cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768caf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768cb1 jmp 0x12768e66 */
  goto L_12768e66;
L_12768cb6:;
  /* 12768cb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12768cbd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768cc1 ja 0x12768e39 */
  if ((!C.cf&&!C.zf)) goto L_12768e39;
  /* 12768cc7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768cc9 call 0x12768700 */
  push32(0x12768cceu); f_12768700();
  /* 12768cce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768cd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768cd4 push edx */
  push32((uint32_t)(EDX));
  /* 12768cd5 call 0x12769000 */
  push32(0x12768cdau); f_12769000();
  /* 12768cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768cdd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12768ce0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768ce4 je 0x12768dfc */
  if (C.zf) goto L_12768dfc;
  /* 12768cea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768ced cmp eax, dword ptr [0x1278ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1278ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768cf3 ja 0x12768d70 */
  if ((!C.cf&&!C.zf)) goto L_12768d70;
  /* 12768cf5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768cf8 push ecx */
  push32((uint32_t)(ECX));
  /* 12768cf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768cfc push edx */
  push32((uint32_t)(EDX));
  /* 12768cfd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12768d00 push eax */
  push32((uint32_t)(EAX));
  /* 12768d01 call 0x12769ed0 */
  push32(0x12768d06u); f_12769ed0();
  /* 12768d06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12768d0b je 0x12768d15 */
  if (C.zf) goto L_12768d15;
  /* 12768d0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768d10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12768d13 jmp 0x12768d70 */
  goto L_12768d70;
L_12768d15:;
  /* 12768d15 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768d18 push edx */
  push32((uint32_t)(EDX));
  /* 12768d19 call 0x12769690 */
  push32(0x12768d1eu); f_12769690();
  /* 12768d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768d21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12768d24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768d28 je 0x12768d70 */
  if (C.zf) goto L_12768d70;
  /* 12768d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768d2d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12768d30 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12768d33 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12768d36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768d39 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768d3c jae 0x12768d46 */
  if (!C.cf) goto L_12768d46;
  /* 12768d3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768d41 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12768d44 jmp 0x12768d4c */
  goto L_12768d4c;
L_12768d46:;
  /* 12768d46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768d49 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12768d4c:;
  /* 12768d4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12768d4f push edx */
  push32((uint32_t)(EDX));
  /* 12768d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768d53 push eax */
  push32((uint32_t)(EAX));
  /* 12768d54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768d57 push ecx */
  push32((uint32_t)(ECX));
  /* 12768d58 call 0x1276b5e0 */
  push32(0x12768d5du); f_1276b5e0();
  /* 12768d5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768d60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768d63 push edx */
  push32((uint32_t)(EDX));
  /* 12768d64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12768d67 push eax */
  push32((uint32_t)(EAX));
  /* 12768d68 call 0x127690c0 */
  push32(0x12768d6du); f_127690c0();
  /* 12768d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12768d70:;
  /* 12768d70 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768d74 jne 0x12768df0 */
  if (!C.zf) goto L_12768df0;
  /* 12768d76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768d7a jne 0x12768d83 */
  if (!C.zf) goto L_12768d83;
  /* 12768d7c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12768d83:;
  /* 12768d83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768d86 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768d89 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12768d8c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12768d8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768d92 push edx */
  push32((uint32_t)(EDX));
  /* 12768d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12768d95 mov eax, dword ptr [0x1279200c] */
  EAX = (r32((uint32_t)(0x1279200c)));
  /* 12768d9a push eax */
  push32((uint32_t)(EAX));
  /* 12768d9b call dword ptr [0x12793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793310))), 0x12768da1u);
  /* 12768da1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12768da4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768da8 je 0x12768df0 */
  if (C.zf) goto L_12768df0;
  /* 12768daa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768dad mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12768db0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12768db3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12768db6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768db9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768dbc jae 0x12768dc6 */
  if (!C.cf) goto L_12768dc6;
  /* 12768dbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768dc1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12768dc4 jmp 0x12768dcc */
  goto L_12768dcc;
L_12768dc6:;
  /* 12768dc6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768dc9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12768dcc:;
  /* 12768dcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12768dcf push eax */
  push32((uint32_t)(EAX));
  /* 12768dd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12768dd4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768dd7 push edx */
  push32((uint32_t)(EDX));
  /* 12768dd8 call 0x1276b5e0 */
  push32(0x12768dddu); f_1276b5e0();
  /* 12768ddd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768de3 push eax */
  push32((uint32_t)(EAX));
  /* 12768de4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12768de7 push ecx */
  push32((uint32_t)(ECX));
  /* 12768de8 call 0x127690c0 */
  push32(0x12768dedu); f_127690c0();
  /* 12768ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12768df0:;
  /* 12768df0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768df2 call 0x127687a0 */
  push32(0x12768df7u); f_127687a0();
  /* 12768df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768dfa jmp 0x12768e39 */
  goto L_12768e39;
L_12768dfc:;
  /* 12768dfc push 9 */
  push32((uint32_t)(0x9u));
  /* 12768dfe call 0x127687a0 */
  push32(0x12768e03u); f_127687a0();
  /* 12768e03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768e06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768e0a jne 0x12768e13 */
  if (!C.zf) goto L_12768e13;
  /* 12768e0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12768e13:;
  /* 12768e13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768e16 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12768e19 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12768e1c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12768e1f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768e22 push eax */
  push32((uint32_t)(EAX));
  /* 12768e23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768e26 push ecx */
  push32((uint32_t)(ECX));
  /* 12768e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12768e29 mov edx, dword ptr [0x1279200c] */
  EDX = (r32((uint32_t)(0x1279200c)));
  /* 12768e2f push edx */
  push32((uint32_t)(EDX));
  /* 12768e30 call dword ptr [0x1279330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1279330c))), 0x12768e36u);
  /* 12768e36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12768e39:;
  /* 12768e39 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768e3d jne 0x12768e48 */
  if (!C.zf) goto L_12768e48;
  /* 12768e3f cmp dword ptr [0x12790848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12790848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768e46 jne 0x12768e4d */
  if (!C.zf) goto L_12768e4d;
L_12768e48:;
  /* 12768e48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12768e4b jmp 0x12768e66 */
  goto L_12768e66;
L_12768e4d:;
  /* 12768e4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12768e50 push eax */
  push32((uint32_t)(EAX));
  /* 12768e51 call 0x12768a40 */
  push32(0x12768e56u); f_12768a40();
  /* 12768e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12768e5b jne 0x12768e61 */
  if (!C.zf) goto L_12768e61;
  /* 12768e5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12768e5f jmp 0x12768e66 */
  goto L_12768e66;
L_12768e61:;
  /* 12768e61 jmp 0x12768cb6 */
  goto L_12768cb6;
L_12768e66:;
  /* 12768e66 mov esp, ebp */
  ESP = (EBP);
  /* 12768e68 pop ebp */
  EBP = (pop32());
  /* 12768e69 ret  */
  ESPCHK(0x12768c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e70 @ 0x12768e70 (104 bytes, 38 insns) */
void f_12768e70(void) {
  FTRACE(0x12768e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12768e71 mov ebp, esp */
  EBP = (ESP);
  /* 12768e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12768e74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768e78 jne 0x12768e7c */
  if (!C.zf) goto L_12768e7c;
  /* 12768e7a jmp 0x12768ed4 */
  goto L_12768ed4;
L_12768e7c:;
  /* 12768e7c push 9 */
  push32((uint32_t)(0x9u));
  /* 12768e7e call 0x12768700 */
  push32(0x12768e83u); f_12768700();
  /* 12768e83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768e86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768e89 push eax */
  push32((uint32_t)(EAX));
  /* 12768e8a call 0x12769000 */
  push32(0x12768e8fu); f_12769000();
  /* 12768e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768e92 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12768e95 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768e99 je 0x12768eb7 */
  if (C.zf) goto L_12768eb7;
  /* 12768e9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768e9e push ecx */
  push32((uint32_t)(ECX));
  /* 12768e9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768ea2 push edx */
  push32((uint32_t)(EDX));
  /* 12768ea3 call 0x127690c0 */
  push32(0x12768ea8u); f_127690c0();
  /* 12768ea8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768eab push 9 */
  push32((uint32_t)(0x9u));
  /* 12768ead call 0x127687a0 */
  push32(0x12768eb2u); f_127687a0();
  /* 12768eb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768eb5 jmp 0x12768ed4 */
  goto L_12768ed4;
L_12768eb7:;
  /* 12768eb7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768eb9 call 0x127687a0 */
  push32(0x12768ebeu); f_127687a0();
  /* 12768ebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768ec1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12768ec4 push eax */
  push32((uint32_t)(EAX));
  /* 12768ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12768ec7 mov ecx, dword ptr [0x1279200c] */
  ECX = (r32((uint32_t)(0x1279200c)));
  /* 12768ecd push ecx */
  push32((uint32_t)(ECX));
  /* 12768ece call dword ptr [0x12793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793330))), 0x12768ed4u);
L_12768ed4:;
  /* 12768ed4 mov esp, ebp */
  ESP = (EBP);
  /* 12768ed6 pop ebp */
  EBP = (pop32());
  /* 12768ed7 ret  */
  ESPCHK(0x12768e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ee0 @ 0x12768ee0 (116 bytes, 34 insns) */
void f_12768ee0(void) {
  FTRACE(0x12768ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12768ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12768ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12768ee4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12768eeb push 9 */
  push32((uint32_t)(0x9u));
  /* 12768eed call 0x12768700 */
  push32(0x12768ef2u); f_12768700();
  /* 12768ef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768ef5 call 0x1276a5f0 */
  push32(0x12768efau); f_1276a5f0();
  /* 12768efa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12768efc jge 0x12768f05 */
  if ((C.sf==C.of)) goto L_12768f05;
  /* 12768efe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12768f05:;
  /* 12768f05 push 9 */
  push32((uint32_t)(0x9u));
  /* 12768f07 call 0x127687a0 */
  push32(0x12768f0cu); f_127687a0();
  /* 12768f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12768f0f push 0 */
  push32((uint32_t)(0x0u));
  /* 12768f11 push 0 */
  push32((uint32_t)(0x0u));
  /* 12768f13 mov eax, dword ptr [0x1279200c] */
  EAX = (r32((uint32_t)(0x1279200c)));
  /* 12768f18 push eax */
  push32((uint32_t)(EAX));
  /* 12768f19 call dword ptr [0x127933a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x127933a8))), 0x12768f1fu);
  /* 12768f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12768f21 jne 0x12768f4d */
  if (!C.zf) goto L_12768f4d;
  /* 12768f23 call dword ptr [0x12793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12793388))), 0x12768f29u);
  /* 12768f29 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12768f2c jne 0x12768f46 */
  if (!C.zf) goto L_12768f46;
  /* 12768f2e call 0x1276cbe0 */
  push32(0x12768f33u); f_1276cbe0();
  /* 12768f33 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12768f39 call 0x1276cbd0 */
  push32(0x12768f3eu); f_1276cbd0();
  /* 12768f3e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12768f44 jmp 0x12768f4d */
  goto L_12768f4d;
L_12768f46:;
  /* 12768f46 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12768f4d:;
  /* 12768f4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12768f50 mov esp, ebp */
  ESP = (EBP);
  /* 12768f52 pop ebp */
  EBP = (pop32());
  /* 12768f53 ret  */
  ESPCHK(0x12768ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f60 @ 0x12768f60 (10 bytes, 5 insns) */
void f_12768f60(void) {
  FTRACE(0x12768f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12768f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12768f61 mov ebp, esp */
  EBP = (ESP);
  /* 12768f63 call 0x12768ee0 */
  push32(0x12768f68u); f_12768ee0();
  /* 12768f68 pop ebp */
  EBP = (pop32());
  /* 12768f69 ret  */
  ESPCHK(0x12768f60u, _esp0);
  ESP += 4; return;
}

