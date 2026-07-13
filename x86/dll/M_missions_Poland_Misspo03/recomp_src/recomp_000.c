#include "recomp.h"

/* thunk_FUN_10003140 @ 0x10871005 (5 bytes, 1 insns) */
void f_10871005(void) {
  FTRACE(0x10871005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10871005 jmp 0x10873140 */
  f_10873140(); return;
}

/* OnInit @ 0x1087100a (5 bytes, 1 insns) */
void f_1087100a(void) {
  FTRACE(0x1087100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087100a jmp 0x10871090 */
  f_10871090(); return;
}

/* thunk_FUN_10001030 @ 0x1087100f (5 bytes, 1 insns) */
void f_1087100f(void) {
  FTRACE(0x1087100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1087100f jmp 0x10871030 */
  f_10871030(); return;
}

/* ProcessScenary @ 0x10871014 (5 bytes, 1 insns) */
void f_10871014(void) {
  FTRACE(0x10871014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10871014 jmp 0x108717c0 */
  f_108717c0(); return;
}

/* FUN_10001030 @ 0x10871030 (67 bytes, 26 insns) */
void f_10871030(void) {
  FTRACE(0x10871030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10871030 push ebp */
  push32((uint32_t)(EBP));
  /* 10871031 mov ebp, esp */
  EBP = (ESP);
  /* 10871033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10871036 push ebx */
  push32((uint32_t)(EBX));
  /* 10871037 push esi */
  push32((uint32_t)(ESI));
  /* 10871038 push edi */
  push32((uint32_t)(EDI));
  /* 10871039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1087103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10871041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10871046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10871048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871052 je 0x10871056 */
  if (C.zf) goto L_10871056;
  /* 10871054 jmp 0x1087105b */
  goto L_1087105b;
L_10871056:;
  /* 10871056 call 0x1087100a */
  push32(0x1087105bu); f_1087100a();
L_1087105b:;
  /* 1087105b mov eax, 1 */
  EAX = (0x1u);
  /* 10871060 pop edi */
  EDI = (pop32());
  /* 10871061 pop esi */
  ESI = (pop32());
  /* 10871062 pop ebx */
  EBX = (pop32());
  /* 10871063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871068 call 0x10873290 */
  push32(0x1087106du); f_10873290();
  /* 1087106d mov esp, ebp */
  ESP = (EBP);
  /* 1087106f pop ebp */
  EBP = (pop32());
  /* 10871070 ret 0xc */
  ESPCHK(0x10871030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10871090 (1462 bytes, 385 insns) */
void f_10871090(void) {
  FTRACE(0x10871090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10871090 push ebp */
  push32((uint32_t)(EBP));
  /* 10871091 mov ebp, esp */
  EBP = (ESP);
  /* 10871093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10871096 push ebx */
  push32((uint32_t)(EBX));
  /* 10871097 push esi */
  push32((uint32_t)(ESI));
  /* 10871098 push edi */
  push32((uint32_t)(EDI));
  /* 10871099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1087109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 108710a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108710a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108710a8 mov esi, esp */
  ESI = (ESP);
  /* 108710aa push 0x1089b14c */
  push32((uint32_t)(0x1089b14cu));
  /* 108710af push 0x108a0420 */
  push32((uint32_t)(0x108a0420u));
  /* 108710b4 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x108710bau);
  /* 108710ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108710bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108710bf call 0x10873290 */
  push32(0x108710c4u); f_10873290();
  /* 108710c4 mov esi, esp */
  ESI = (ESP);
  /* 108710c6 push 0x1089b148 */
  push32((uint32_t)(0x1089b148u));
  /* 108710cb push 0x108a0428 */
  push32((uint32_t)(0x108a0428u));
  /* 108710d0 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x108710d6u);
  /* 108710d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108710d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108710db call 0x10873290 */
  push32(0x108710e0u); f_10873290();
  /* 108710e0 mov esi, esp */
  ESI = (ESP);
  /* 108710e2 push 0x1089b144 */
  push32((uint32_t)(0x1089b144u));
  /* 108710e7 push 0x108a0430 */
  push32((uint32_t)(0x108a0430u));
  /* 108710ec call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x108710f2u);
  /* 108710f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108710f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108710f7 call 0x10873290 */
  push32(0x108710fcu); f_10873290();
  /* 108710fc mov esi, esp */
  ESI = (ESP);
  /* 108710fe push 0x1089b140 */
  push32((uint32_t)(0x1089b140u));
  /* 10871103 push 0x108a04c8 */
  push32((uint32_t)(0x108a04c8u));
  /* 10871108 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x1087110eu);
  /* 1087110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871113 call 0x10873290 */
  push32(0x10871118u); f_10873290();
  /* 10871118 mov esi, esp */
  ESI = (ESP);
  /* 1087111a push 0x1089b13c */
  push32((uint32_t)(0x1089b13cu));
  /* 1087111f push 0x108a0438 */
  push32((uint32_t)(0x108a0438u));
  /* 10871124 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x1087112au);
  /* 1087112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087112f call 0x10873290 */
  push32(0x10871134u); f_10873290();
  /* 10871134 mov esi, esp */
  ESI = (ESP);
  /* 10871136 push 0x1089b138 */
  push32((uint32_t)(0x1089b138u));
  /* 1087113b push 0x108a0440 */
  push32((uint32_t)(0x108a0440u));
  /* 10871140 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x10871146u);
  /* 10871146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087114b call 0x10873290 */
  push32(0x10871150u); f_10873290();
  /* 10871150 mov esi, esp */
  ESI = (ESP);
  /* 10871152 push 0x1089b134 */
  push32((uint32_t)(0x1089b134u));
  /* 10871157 push 0x108a0448 */
  push32((uint32_t)(0x108a0448u));
  /* 1087115c call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x10871162u);
  /* 10871162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871167 call 0x10873290 */
  push32(0x1087116cu); f_10873290();
  /* 1087116c mov esi, esp */
  ESI = (ESP);
  /* 1087116e push 0x1089b130 */
  push32((uint32_t)(0x1089b130u));
  /* 10871173 push 0x108a0450 */
  push32((uint32_t)(0x108a0450u));
  /* 10871178 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x1087117eu);
  /* 1087117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871183 call 0x10873290 */
  push32(0x10871188u); f_10873290();
  /* 10871188 mov esi, esp */
  ESI = (ESP);
  /* 1087118a push 0x1089b12c */
  push32((uint32_t)(0x1089b12cu));
  /* 1087118f push 0x108a04f8 */
  push32((uint32_t)(0x108a04f8u));
  /* 10871194 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x1087119au);
  /* 1087119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087119f call 0x10873290 */
  push32(0x108711a4u); f_10873290();
  /* 108711a4 mov esi, esp */
  ESI = (ESP);
  /* 108711a6 push 0x1089b128 */
  push32((uint32_t)(0x1089b128u));
  /* 108711ab push 0x108a0458 */
  push32((uint32_t)(0x108a0458u));
  /* 108711b0 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x108711b6u);
  /* 108711b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108711b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108711bb call 0x10873290 */
  push32(0x108711c0u); f_10873290();
  /* 108711c0 mov esi, esp */
  ESI = (ESP);
  /* 108711c2 push 0x1089b124 */
  push32((uint32_t)(0x1089b124u));
  /* 108711c7 push 0x108a0500 */
  push32((uint32_t)(0x108a0500u));
  /* 108711cc call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x108711d2u);
  /* 108711d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108711d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108711d7 call 0x10873290 */
  push32(0x108711dcu); f_10873290();
  /* 108711dc mov esi, esp */
  ESI = (ESP);
  /* 108711de push 0x1089b120 */
  push32((uint32_t)(0x1089b120u));
  /* 108711e3 push 0x108a0460 */
  push32((uint32_t)(0x108a0460u));
  /* 108711e8 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x108711eeu);
  /* 108711ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108711f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108711f3 call 0x10873290 */
  push32(0x108711f8u); f_10873290();
  /* 108711f8 mov esi, esp */
  ESI = (ESP);
  /* 108711fa push 0x1089b11c */
  push32((uint32_t)(0x1089b11cu));
  /* 108711ff push 0x108a0468 */
  push32((uint32_t)(0x108a0468u));
  /* 10871204 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x1087120au);
  /* 1087120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087120f call 0x10873290 */
  push32(0x10871214u); f_10873290();
  /* 10871214 mov esi, esp */
  ESI = (ESP);
  /* 10871216 push 0x1089b118 */
  push32((uint32_t)(0x1089b118u));
  /* 1087121b push 0x108a0470 */
  push32((uint32_t)(0x108a0470u));
  /* 10871220 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x10871226u);
  /* 10871226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087122b call 0x10873290 */
  push32(0x10871230u); f_10873290();
  /* 10871230 mov esi, esp */
  ESI = (ESP);
  /* 10871232 push 0x1089b114 */
  push32((uint32_t)(0x1089b114u));
  /* 10871237 push 0x108a0478 */
  push32((uint32_t)(0x108a0478u));
  /* 1087123c call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x10871242u);
  /* 10871242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871247 call 0x10873290 */
  push32(0x1087124cu); f_10873290();
  /* 1087124c mov esi, esp */
  ESI = (ESP);
  /* 1087124e push 0x1089b110 */
  push32((uint32_t)(0x1089b110u));
  /* 10871253 push 0x108a0480 */
  push32((uint32_t)(0x108a0480u));
  /* 10871258 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x1087125eu);
  /* 1087125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871263 call 0x10873290 */
  push32(0x10871268u); f_10873290();
  /* 10871268 mov esi, esp */
  ESI = (ESP);
  /* 1087126a push 0x1089b10c */
  push32((uint32_t)(0x1089b10cu));
  /* 1087126f push 0x108a0488 */
  push32((uint32_t)(0x108a0488u));
  /* 10871274 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x1087127au);
  /* 1087127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087127f call 0x10873290 */
  push32(0x10871284u); f_10873290();
  /* 10871284 mov esi, esp */
  ESI = (ESP);
  /* 10871286 push 0x1089b108 */
  push32((uint32_t)(0x1089b108u));
  /* 1087128b push 0x108a0490 */
  push32((uint32_t)(0x108a0490u));
  /* 10871290 call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x10871296u);
  /* 10871296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087129b call 0x10873290 */
  push32(0x108712a0u); f_10873290();
  /* 108712a0 mov esi, esp */
  ESI = (ESP);
  /* 108712a2 push 0x1089b104 */
  push32((uint32_t)(0x1089b104u));
  /* 108712a7 push 0x108a0498 */
  push32((uint32_t)(0x108a0498u));
  /* 108712ac call dword ptr [0x108a34c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c4))), 0x108712b2u);
  /* 108712b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108712b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108712b7 call 0x10873290 */
  push32(0x108712bcu); f_10873290();
  /* 108712bc mov esi, esp */
  ESI = (ESP);
  /* 108712be push 0x1089b100 */
  push32((uint32_t)(0x1089b100u));
  /* 108712c3 push 0x108a04a0 */
  push32((uint32_t)(0x108a04a0u));
  /* 108712c8 call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x108712ceu);
  /* 108712ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108712d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108712d3 call 0x10873290 */
  push32(0x108712d8u); f_10873290();
  /* 108712d8 mov esi, esp */
  ESI = (ESP);
  /* 108712da push 0x1089b0fc */
  push32((uint32_t)(0x1089b0fcu));
  /* 108712df push 0x108a04a8 */
  push32((uint32_t)(0x108a04a8u));
  /* 108712e4 call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x108712eau);
  /* 108712ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108712ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108712ef call 0x10873290 */
  push32(0x108712f4u); f_10873290();
  /* 108712f4 mov esi, esp */
  ESI = (ESP);
  /* 108712f6 push 0x1089b0f8 */
  push32((uint32_t)(0x1089b0f8u));
  /* 108712fb push 0x108a04b0 */
  push32((uint32_t)(0x108a04b0u));
  /* 10871300 call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x10871306u);
  /* 10871306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087130b call 0x10873290 */
  push32(0x10871310u); f_10873290();
  /* 10871310 mov esi, esp */
  ESI = (ESP);
  /* 10871312 push 0x1089b0f4 */
  push32((uint32_t)(0x1089b0f4u));
  /* 10871317 push 0x108a04b8 */
  push32((uint32_t)(0x108a04b8u));
  /* 1087131c call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x10871322u);
  /* 10871322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871327 call 0x10873290 */
  push32(0x1087132cu); f_10873290();
  /* 1087132c mov esi, esp */
  ESI = (ESP);
  /* 1087132e push 0x1089b0f0 */
  push32((uint32_t)(0x1089b0f0u));
  /* 10871333 push 0x108a04c0 */
  push32((uint32_t)(0x108a04c0u));
  /* 10871338 call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x1087133eu);
  /* 1087133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871343 call 0x10873290 */
  push32(0x10871348u); f_10873290();
  /* 10871348 mov esi, esp */
  ESI = (ESP);
  /* 1087134a push 0x1089b0ec */
  push32((uint32_t)(0x1089b0ecu));
  /* 1087134f push 0x108a04d0 */
  push32((uint32_t)(0x108a04d0u));
  /* 10871354 call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x1087135au);
  /* 1087135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087135f call 0x10873290 */
  push32(0x10871364u); f_10873290();
  /* 10871364 mov esi, esp */
  ESI = (ESP);
  /* 10871366 push 0x1089b0e8 */
  push32((uint32_t)(0x1089b0e8u));
  /* 1087136b push 0x108a04d8 */
  push32((uint32_t)(0x108a04d8u));
  /* 10871370 call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x10871376u);
  /* 10871376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087137b call 0x10873290 */
  push32(0x10871380u); f_10873290();
  /* 10871380 mov esi, esp */
  ESI = (ESP);
  /* 10871382 push 0x1089b0e4 */
  push32((uint32_t)(0x1089b0e4u));
  /* 10871387 push 0x108a04e0 */
  push32((uint32_t)(0x108a04e0u));
  /* 1087138c call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x10871392u);
  /* 10871392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871397 call 0x10873290 */
  push32(0x1087139cu); f_10873290();
  /* 1087139c mov esi, esp */
  ESI = (ESP);
  /* 1087139e push 0x1089b0e0 */
  push32((uint32_t)(0x1089b0e0u));
  /* 108713a3 push 0x108a04e8 */
  push32((uint32_t)(0x108a04e8u));
  /* 108713a8 call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x108713aeu);
  /* 108713ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108713b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108713b3 call 0x10873290 */
  push32(0x108713b8u); f_10873290();
  /* 108713b8 mov esi, esp */
  ESI = (ESP);
  /* 108713ba push 0x1089b0dc */
  push32((uint32_t)(0x1089b0dcu));
  /* 108713bf push 0x108a0538 */
  push32((uint32_t)(0x108a0538u));
  /* 108713c4 call dword ptr [0x108a34d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d4))), 0x108713cau);
  /* 108713ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108713cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108713cf call 0x10873290 */
  push32(0x108713d4u); f_10873290();
  /* 108713d4 mov esi, esp */
  ESI = (ESP);
  /* 108713d6 push 0x1089b0c0 */
  push32((uint32_t)(0x1089b0c0u));
  /* 108713db push 0x108a05b0 */
  push32((uint32_t)(0x108a05b0u));
  /* 108713e0 call dword ptr [0x108a34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d8))), 0x108713e6u);
  /* 108713e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108713e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108713eb call 0x10873290 */
  push32(0x108713f0u); f_10873290();
  /* 108713f0 mov esi, esp */
  ESI = (ESP);
  /* 108713f2 push 0x1089b0ac */
  push32((uint32_t)(0x1089b0acu));
  /* 108713f7 push 0x108a0588 */
  push32((uint32_t)(0x108a0588u));
  /* 108713fc call dword ptr [0x108a34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d8))), 0x10871402u);
  /* 10871402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871407 call 0x10873290 */
  push32(0x1087140cu); f_10873290();
  /* 1087140c mov esi, esp */
  ESI = (ESP);
  /* 1087140e push 0x1089b09c */
  push32((uint32_t)(0x1089b09cu));
  /* 10871413 push 0x108a0548 */
  push32((uint32_t)(0x108a0548u));
  /* 10871418 call dword ptr [0x108a34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d8))), 0x1087141eu);
  /* 1087141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871423 call 0x10873290 */
  push32(0x10871428u); f_10873290();
  /* 10871428 mov esi, esp */
  ESI = (ESP);
  /* 1087142a push 0x1089b08c */
  push32((uint32_t)(0x1089b08cu));
  /* 1087142f push 0x108a03f8 */
  push32((uint32_t)(0x108a03f8u));
  /* 10871434 call dword ptr [0x108a34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d8))), 0x1087143au);
  /* 1087143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087143f call 0x10873290 */
  push32(0x10871444u); f_10873290();
  /* 10871444 mov esi, esp */
  ESI = (ESP);
  /* 10871446 push 0x1089b07c */
  push32((uint32_t)(0x1089b07cu));
  /* 1087144b push 0x108a03e8 */
  push32((uint32_t)(0x108a03e8u));
  /* 10871450 call dword ptr [0x108a34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d8))), 0x10871456u);
  /* 10871456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087145b call 0x10873290 */
  push32(0x10871460u); f_10873290();
  /* 10871460 mov esi, esp */
  ESI = (ESP);
  /* 10871462 push 0x1089b064 */
  push32((uint32_t)(0x1089b064u));
  /* 10871467 push 0x108a0510 */
  push32((uint32_t)(0x108a0510u));
  /* 1087146c call dword ptr [0x108a34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d8))), 0x10871472u);
  /* 10871472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871477 call 0x10873290 */
  push32(0x1087147cu); f_10873290();
  /* 1087147c mov esi, esp */
  ESI = (ESP);
  /* 1087147e push 0x1089b050 */
  push32((uint32_t)(0x1089b050u));
  /* 10871483 push 0x108a0540 */
  push32((uint32_t)(0x108a0540u));
  /* 10871488 call dword ptr [0x108a34d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d8))), 0x1087148eu);
  /* 1087148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871493 call 0x10873290 */
  push32(0x10871498u); f_10873290();
  /* 10871498 mov esi, esp */
  ESI = (ESP);
  /* 1087149a push 0x1089b048 */
  push32((uint32_t)(0x1089b048u));
  /* 1087149f push 0x108a0530 */
  push32((uint32_t)(0x108a0530u));
  /* 108714a4 call dword ptr [0x108a34d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d0))), 0x108714aau);
  /* 108714aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108714ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108714af call 0x10873290 */
  push32(0x108714b4u); f_10873290();
  /* 108714b4 mov esi, esp */
  ESI = (ESP);
  /* 108714b6 push 0x1089b03c */
  push32((uint32_t)(0x1089b03cu));
  /* 108714bb push 0x108a0528 */
  push32((uint32_t)(0x108a0528u));
  /* 108714c0 call dword ptr [0x108a34d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d0))), 0x108714c6u);
  /* 108714c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108714c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108714cb call 0x10873290 */
  push32(0x108714d0u); f_10873290();
  /* 108714d0 mov esi, esp */
  ESI = (ESP);
  /* 108714d2 push 0x1089b02c */
  push32((uint32_t)(0x1089b02cu));
  /* 108714d7 push 0x108a03e0 */
  push32((uint32_t)(0x108a03e0u));
  /* 108714dc call dword ptr [0x108a34d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34d0))), 0x108714e2u);
  /* 108714e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108714e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108714e7 call 0x10873290 */
  push32(0x108714ecu); f_10873290();
  /* 108714ec mov esi, esp */
  ESI = (ESP);
  /* 108714ee push 0x1089b024 */
  push32((uint32_t)(0x1089b024u));
  /* 108714f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 108714f5 call dword ptr [0x108a34e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34e0))), 0x108714fbu);
  /* 108714fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108714fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871500 call 0x10873290 */
  push32(0x10871505u); f_10873290();
  /* 10871505 mov esi, esp */
  ESI = (ESP);
  /* 10871507 push 0x1089b01c */
  push32((uint32_t)(0x1089b01cu));
  /* 1087150c push 5 */
  push32((uint32_t)(0x5u));
  /* 1087150e call dword ptr [0x108a34e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34e0))), 0x10871514u);
  /* 10871514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871517 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871519 call 0x10873290 */
  push32(0x1087151eu); f_10873290();
  /* 1087151e mov esi, esp */
  ESI = (ESP);
  /* 10871520 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871522 push 0x108a05b0 */
  push32((uint32_t)(0x108a05b0u));
  /* 10871527 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871529 call dword ptr [0x108a34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34e4))), 0x1087152fu);
  /* 1087152f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871532 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871534 call 0x10873290 */
  push32(0x10871539u); f_10873290();
  /* 10871539 mov esi, esp */
  ESI = (ESP);
  /* 1087153b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087153d push 0x108a0588 */
  push32((uint32_t)(0x108a0588u));
  /* 10871542 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871544 call dword ptr [0x108a34e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34e4))), 0x1087154au);
  /* 1087154a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087154d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087154f call 0x10873290 */
  push32(0x10871554u); f_10873290();
  /* 10871554 mov esi, esp */
  ESI = (ESP);
  /* 10871556 push 4 */
  push32((uint32_t)(0x4u));
  /* 10871558 push 0x108a0400 */
  push32((uint32_t)(0x108a0400u));
  /* 1087155d call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x10871563u);
  /* 10871563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871566 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871568 call 0x10873290 */
  push32(0x1087156du); f_10873290();
  /* 1087156d mov esi, esp */
  ESI = (ESP);
  /* 1087156f push 4 */
  push32((uint32_t)(0x4u));
  /* 10871571 push 0x108a0520 */
  push32((uint32_t)(0x108a0520u));
  /* 10871576 call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x1087157cu);
  /* 1087157c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087157f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871581 call 0x10873290 */
  push32(0x10871586u); f_10873290();
  /* 10871586 mov esi, esp */
  ESI = (ESP);
  /* 10871588 push 8 */
  push32((uint32_t)(0x8u));
  /* 1087158a push 0x108a0408 */
  push32((uint32_t)(0x108a0408u));
  /* 1087158f call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x10871595u);
  /* 10871595 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871598 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087159a call 0x10873290 */
  push32(0x1087159fu); f_10873290();
  /* 1087159f mov esi, esp */
  ESI = (ESP);
  /* 108715a1 push 8 */
  push32((uint32_t)(0x8u));
  /* 108715a3 push 0x108a0410 */
  push32((uint32_t)(0x108a0410u));
  /* 108715a8 call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x108715aeu);
  /* 108715ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108715b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108715b3 call 0x10873290 */
  push32(0x108715b8u); f_10873290();
  /* 108715b8 mov esi, esp */
  ESI = (ESP);
  /* 108715ba push 8 */
  push32((uint32_t)(0x8u));
  /* 108715bc push 0x108a0418 */
  push32((uint32_t)(0x108a0418u));
  /* 108715c1 call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x108715c7u);
  /* 108715c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108715ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108715cc call 0x10873290 */
  push32(0x108715d1u); f_10873290();
  /* 108715d1 mov esi, esp */
  ESI = (ESP);
  /* 108715d3 push 8 */
  push32((uint32_t)(0x8u));
  /* 108715d5 push 0x108a0598 */
  push32((uint32_t)(0x108a0598u));
  /* 108715da call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x108715e0u);
  /* 108715e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108715e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108715e5 call 0x10873290 */
  push32(0x108715eau); f_10873290();
  /* 108715ea mov esi, esp */
  ESI = (ESP);
  /* 108715ec push 8 */
  push32((uint32_t)(0x8u));
  /* 108715ee push 0x108a0590 */
  push32((uint32_t)(0x108a0590u));
  /* 108715f3 call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x108715f9u);
  /* 108715f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108715fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108715fe call 0x10873290 */
  push32(0x10871603u); f_10873290();
  /* 10871603 mov esi, esp */
  ESI = (ESP);
  /* 10871605 push 8 */
  push32((uint32_t)(0x8u));
  /* 10871607 push 0x108a05a8 */
  push32((uint32_t)(0x108a05a8u));
  /* 1087160c call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x10871612u);
  /* 10871612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871615 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871617 call 0x10873290 */
  push32(0x1087161cu); f_10873290();
  /* 1087161c mov esi, esp */
  ESI = (ESP);
  /* 1087161e push 8 */
  push32((uint32_t)(0x8u));
  /* 10871620 push 0x108a05a0 */
  push32((uint32_t)(0x108a05a0u));
  /* 10871625 call dword ptr [0x108a34dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34dc))), 0x1087162bu);
  /* 1087162b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087162e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871630 call 0x10873290 */
  push32(0x10871635u); f_10873290();
  /* 10871635 pop edi */
  EDI = (pop32());
  /* 10871636 pop esi */
  ESI = (pop32());
  /* 10871637 pop ebx */
  EBX = (pop32());
  /* 10871638 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087163b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087163d call 0x10873290 */
  push32(0x10871642u); f_10873290();
  /* 10871642 mov esp, ebp */
  ESP = (EBP);
  /* 10871644 pop ebp */
  EBP = (pop32());
  /* 10871645 ret  */
  ESPCHK(0x10871090u, _esp0);
  ESP += 4; return;
}

/* FUN_100017c0 @ 0x108717c0 (5223 bytes, 1482 insns) */
void f_108717c0(void) {
  FTRACE(0x108717c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108717c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108717c1 mov ebp, esp */
  EBP = (ESP);
  /* 108717c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108717c6 push ebx */
  push32((uint32_t)(EBX));
  /* 108717c7 push esi */
  push32((uint32_t)(ESI));
  /* 108717c8 push edi */
  push32((uint32_t)(EDI));
  /* 108717c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 108717cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 108717d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108717d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108717d8 mov esi, esp */
  ESI = (ESP);
  /* 108717da push 0x63 */
  push32((uint32_t)(0x63u));
  /* 108717dc call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x108717e2u);
  /* 108717e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108717e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108717e7 call 0x10873290 */
  push32(0x108717ecu); f_10873290();
  /* 108717ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108717f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108717f3 je 0x10871afb */
  if (C.zf) goto L_10871afb;
  /* 108717f9 mov esi, esp */
  ESI = (ESP);
  /* 108717fb push 0 */
  push32((uint32_t)(0x0u));
  /* 108717fd push 0x108a0420 */
  push32((uint32_t)(0x108a0420u));
  /* 10871802 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10871808u);
  /* 10871808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087180b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087180d call 0x10873290 */
  push32(0x10871812u); f_10873290();
  /* 10871812 mov dword ptr [0x108a0400], 0xa */
  w32((uint32_t)(0x108a0400), (0xau));
  /* 1087181c mov dword ptr [0x108a0520], 4 */
  w32((uint32_t)(0x108a0520), (0x4u));
  /* 10871826 mov esi, esp */
  ESI = (ESP);
  /* 10871828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087182a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1087182c call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10871832u);
  /* 10871832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871835 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871837 call 0x10873290 */
  push32(0x1087183cu); f_10873290();
  /* 1087183c mov esi, esp */
  ESI = (ESP);
  /* 1087183e push 1 */
  push32((uint32_t)(0x1u));
  /* 10871840 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x10871846u);
  /* 10871846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087184b call 0x10873290 */
  push32(0x10871850u); f_10873290();
  /* 10871850 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10871856 mov ecx, 0x7530 */
  ECX = (0x7530u);
  /* 1087185b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087185d mov esi, esp */
  ESI = (ESP);
  /* 1087185f push ecx */
  push32((uint32_t)(ECX));
  /* 10871860 push 3 */
  push32((uint32_t)(0x3u));
  /* 10871862 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871864 call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x1087186au);
  /* 1087186a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087186d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087186f call 0x10873290 */
  push32(0x10871874u); f_10873290();
  /* 10871874 mov esi, esp */
  ESI = (ESP);
  /* 10871876 push 1 */
  push32((uint32_t)(0x1u));
  /* 10871878 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x1087187eu);
  /* 1087187e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871883 call 0x10873290 */
  push32(0x10871888u); f_10873290();
  /* 10871888 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087188e mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 10871893 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10871895 mov esi, esp */
  ESI = (ESP);
  /* 10871897 push edx */
  push32((uint32_t)(EDX));
  /* 10871898 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087189a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087189c call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x108718a2u);
  /* 108718a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108718a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108718a7 call 0x10873290 */
  push32(0x108718acu); f_10873290();
  /* 108718ac mov esi, esp */
  ESI = (ESP);
  /* 108718ae push 0 */
  push32((uint32_t)(0x0u));
  /* 108718b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108718b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108718b4 call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x108718bau);
  /* 108718ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108718bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108718bf call 0x10873290 */
  push32(0x108718c4u); f_10873290();
  /* 108718c4 mov esi, esp */
  ESI = (ESP);
  /* 108718c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108718c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108718ca push 0 */
  push32((uint32_t)(0x0u));
  /* 108718cc call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x108718d2u);
  /* 108718d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108718d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108718d7 call 0x10873290 */
  push32(0x108718dcu); f_10873290();
  /* 108718dc mov esi, esp */
  ESI = (ESP);
  /* 108718de push 1 */
  push32((uint32_t)(0x1u));
  /* 108718e0 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x108718e6u);
  /* 108718e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108718e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108718eb call 0x10873290 */
  push32(0x108718f0u); f_10873290();
  /* 108718f0 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108718f6 mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 108718fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108718fd mov esi, esp */
  ESI = (ESP);
  /* 108718ff push ecx */
  push32((uint32_t)(ECX));
  /* 10871900 push 5 */
  push32((uint32_t)(0x5u));
  /* 10871902 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871904 call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x1087190au);
  /* 1087190a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087190d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087190f call 0x10873290 */
  push32(0x10871914u); f_10873290();
  /* 10871914 mov esi, esp */
  ESI = (ESP);
  /* 10871916 push 1 */
  push32((uint32_t)(0x1u));
  /* 10871918 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x1087191eu);
  /* 1087191e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871921 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871923 call 0x10873290 */
  push32(0x10871928u); f_10873290();
  /* 10871928 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087192e mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 10871933 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10871935 mov esi, esp */
  ESI = (ESP);
  /* 10871937 push edx */
  push32((uint32_t)(EDX));
  /* 10871938 push 4 */
  push32((uint32_t)(0x4u));
  /* 1087193a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087193c call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x10871942u);
  /* 10871942 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871945 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871947 call 0x10873290 */
  push32(0x1087194cu); f_10873290();
  /* 1087194c mov esi, esp */
  ESI = (ESP);
  /* 1087194e push 0x1089b1fc */
  push32((uint32_t)(0x1089b1fcu));
  /* 10871953 call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x10871959u);
  /* 10871959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087195c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087195e call 0x10873290 */
  push32(0x10871963u); f_10873290();
  /* 10871963 mov esi, esp */
  ESI = (ESP);
  /* 10871965 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871967 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x1087196du);
  /* 1087196d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871970 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871972 call 0x10873290 */
  push32(0x10871977u); f_10873290();
  /* 10871977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871979 jne 0x10871a02 */
  if (!C.zf) goto L_10871a02;
  /* 1087197f mov esi, esp */
  ESI = (ESP);
  /* 10871981 push 0x7a120 */
  push32((uint32_t)(0x7a120u));
  /* 10871986 push 3 */
  push32((uint32_t)(0x3u));
  /* 10871988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087198a call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x10871990u);
  /* 10871990 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871993 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871995 call 0x10873290 */
  push32(0x1087199au); f_10873290();
  /* 1087199a mov esi, esp */
  ESI = (ESP);
  /* 1087199c push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 108719a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108719a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108719a5 call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x108719abu);
  /* 108719ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108719ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108719b0 call 0x10873290 */
  push32(0x108719b5u); f_10873290();
  /* 108719b5 mov esi, esp */
  ESI = (ESP);
  /* 108719b7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 108719bc push 5 */
  push32((uint32_t)(0x5u));
  /* 108719be push 0 */
  push32((uint32_t)(0x0u));
  /* 108719c0 call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x108719c6u);
  /* 108719c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108719c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108719cb call 0x10873290 */
  push32(0x108719d0u); f_10873290();
  /* 108719d0 mov esi, esp */
  ESI = (ESP);
  /* 108719d2 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 108719d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 108719d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108719db call dword ptr [0x108a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3454))), 0x108719e1u);
  /* 108719e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108719e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108719e6 call 0x10873290 */
  push32(0x108719ebu); f_10873290();
  /* 108719eb mov esi, esp */
  ESI = (ESP);
  /* 108719ed push 0x1089b1f4 */
  push32((uint32_t)(0x1089b1f4u));
  /* 108719f2 call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x108719f8u);
  /* 108719f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108719fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108719fd call 0x10873290 */
  push32(0x10871a02u); f_10873290();
L_10871a02:;
  /* 10871a02 mov esi, esp */
  ESI = (ESP);
  /* 10871a04 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10871a06 call dword ptr [0x108a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a345c))), 0x10871a0cu);
  /* 10871a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871a0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871a11 call 0x10873290 */
  push32(0x10871a16u); f_10873290();
  /* 10871a16 mov esi, esp */
  ESI = (ESP);
  /* 10871a18 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10871a1a call dword ptr [0x108a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a345c))), 0x10871a20u);
  /* 10871a20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871a25 call 0x10873290 */
  push32(0x10871a2au); f_10873290();
  /* 10871a2a mov esi, esp */
  ESI = (ESP);
  /* 10871a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10871a2e push 0x108a04b0 */
  push32((uint32_t)(0x108a04b0u));
  /* 10871a33 push 5 */
  push32((uint32_t)(0x5u));
  /* 10871a35 push 0x108a0548 */
  push32((uint32_t)(0x108a0548u));
  /* 10871a3a push 0x108a0530 */
  push32((uint32_t)(0x108a0530u));
  /* 10871a3f push 0x108a0598 */
  push32((uint32_t)(0x108a0598u));
  /* 10871a44 call dword ptr [0x108a3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3460))), 0x10871a4au);
  /* 10871a4a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871a4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871a4f call 0x10873290 */
  push32(0x10871a54u); f_10873290();
  /* 10871a54 mov esi, esp */
  ESI = (ESP);
  /* 10871a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871a58 push 0x108a04e0 */
  push32((uint32_t)(0x108a04e0u));
  /* 10871a5d push 3 */
  push32((uint32_t)(0x3u));
  /* 10871a5f push 0x108a0548 */
  push32((uint32_t)(0x108a0548u));
  /* 10871a64 push 0x108a0530 */
  push32((uint32_t)(0x108a0530u));
  /* 10871a69 push 0x108a05a8 */
  push32((uint32_t)(0x108a05a8u));
  /* 10871a6e call dword ptr [0x108a3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3460))), 0x10871a74u);
  /* 10871a74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871a77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871a79 call 0x10873290 */
  push32(0x10871a7eu); f_10873290();
  /* 10871a7e mov esi, esp */
  ESI = (ESP);
  /* 10871a80 push 0x108a0480 */
  push32((uint32_t)(0x108a0480u));
  /* 10871a85 call dword ptr [0x108a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3458))), 0x10871a8bu);
  /* 10871a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871a90 call 0x10873290 */
  push32(0x10871a95u); f_10873290();
  /* 10871a95 mov esi, esp */
  ESI = (ESP);
  /* 10871a97 push 0x108a0488 */
  push32((uint32_t)(0x108a0488u));
  /* 10871a9c call dword ptr [0x108a3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3468))), 0x10871aa2u);
  /* 10871aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871aa5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871aa7 call 0x10873290 */
  push32(0x10871aacu); f_10873290();
  /* 10871aac mov esi, esp */
  ESI = (ESP);
  /* 10871aae push 0x108a0490 */
  push32((uint32_t)(0x108a0490u));
  /* 10871ab3 call dword ptr [0x108a346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a346c))), 0x10871ab9u);
  /* 10871ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871abe call 0x10873290 */
  push32(0x10871ac3u); f_10873290();
  /* 10871ac3 mov esi, esp */
  ESI = (ESP);
  /* 10871ac5 push 0x1089b1e8 */
  push32((uint32_t)(0x1089b1e8u));
  /* 10871aca push 0x1089b1e4 */
  push32((uint32_t)(0x1089b1e4u));
  /* 10871acf call dword ptr [0x108a3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3464))), 0x10871ad5u);
  /* 10871ad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871ad8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871ada call 0x10873290 */
  push32(0x10871adfu); f_10873290();
  /* 10871adf mov esi, esp */
  ESI = (ESP);
  /* 10871ae1 push 0x1089b1d8 */
  push32((uint32_t)(0x1089b1d8u));
  /* 10871ae6 push 0x1089b1e4 */
  push32((uint32_t)(0x1089b1e4u));
  /* 10871aeb call dword ptr [0x108a3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3464))), 0x10871af1u);
  /* 10871af1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871af6 call 0x10873290 */
  push32(0x10871afbu); f_10873290();
L_10871afb:;
  /* 10871afb mov esi, esp */
  ESI = (ESP);
  /* 10871afd push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10871aff call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x10871b05u);
  /* 10871b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871b08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871b0a call 0x10873290 */
  push32(0x10871b0fu); f_10873290();
  /* 10871b0f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10871b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871b16 je 0x10871b9c */
  if (C.zf) goto L_10871b9c;
  /* 10871b1c push 0x108a0420 */
  push32((uint32_t)(0x108a0420u));
  /* 10871b21 call 0x10871005 */
  push32(0x10871b26u); f_10871005();
  /* 10871b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871b2b jne 0x10871b9c */
  if (!C.zf) goto L_10871b9c;
  /* 10871b2d mov esi, esp */
  ESI = (ESP);
  /* 10871b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10871b31 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10871b33 call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10871b39u);
  /* 10871b39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871b3e call 0x10873290 */
  push32(0x10871b43u); f_10873290();
  /* 10871b43 mov esi, esp */
  ESI = (ESP);
  /* 10871b45 push 3 */
  push32((uint32_t)(0x3u));
  /* 10871b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871b49 call dword ptr [0x108a3474] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3474))), 0x10871b4fu);
  /* 10871b4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871b52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871b54 call 0x10873290 */
  push32(0x10871b59u); f_10873290();
  /* 10871b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871b5b jle 0x10871b76 */
  if ((C.zf||C.sf!=C.of)) goto L_10871b76;
  /* 10871b5d mov esi, esp */
  ESI = (ESP);
  /* 10871b5f push 0x1089b1cc */
  push32((uint32_t)(0x1089b1ccu));
  /* 10871b64 call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x10871b6au);
  /* 10871b6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871b6f call 0x10873290 */
  push32(0x10871b74u); f_10873290();
  /* 10871b74 jmp 0x10871b8d */
  goto L_10871b8d;
L_10871b76:;
  /* 10871b76 mov esi, esp */
  ESI = (ESP);
  /* 10871b78 push 0x1089b1c0 */
  push32((uint32_t)(0x1089b1c0u));
  /* 10871b7d call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x10871b83u);
  /* 10871b83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871b86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871b88 call 0x10873290 */
  push32(0x10871b8du); f_10873290();
L_10871b8d:;
  /* 10871b8d mov esi, esp */
  ESI = (ESP);
  /* 10871b8f call dword ptr [0x108a3478] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3478))), 0x10871b95u);
  /* 10871b95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871b97 call 0x10873290 */
  push32(0x10871b9cu); f_10873290();
L_10871b9c:;
  /* 10871b9c mov esi, esp */
  ESI = (ESP);
  /* 10871b9e push 0x108a0420 */
  push32((uint32_t)(0x108a0420u));
  /* 10871ba3 call dword ptr [0x108a3470] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3470))), 0x10871ba9u);
  /* 10871ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871bae call 0x10873290 */
  push32(0x10871bb3u); f_10873290();
  /* 10871bb3 cmp dword ptr [0x108a0400], eax */
  { uint32_t _a=(r32((uint32_t)(0x108a0400))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871bb9 jg 0x10871c45 */
  if ((!C.zf&&C.sf==C.of)) goto L_10871c45;
  /* 10871bbf mov eax, dword ptr [0x108a0400] */
  EAX = (r32((uint32_t)(0x108a0400)));
  /* 10871bc4 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10871bc5 mov ecx, 5 */
  ECX = (0x5u);
  /* 10871bca idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10871bcc mov edx, dword ptr [0x108a0400] */
  EDX = (r32((uint32_t)(0x108a0400)));
  /* 10871bd2 lea eax, [edx + eax + 0xa] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0xa));
  /* 10871bd6 mov dword ptr [0x108a0400], eax */
  w32((uint32_t)(0x108a0400), (EAX));
  /* 10871bdb mov esi, esp */
  ESI = (ESP);
  /* 10871bdd push 0x1089b1b8 */
  push32((uint32_t)(0x1089b1b8u));
  /* 10871be2 call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x10871be8u);
  /* 10871be8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871beb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871bed call 0x10873290 */
  push32(0x10871bf2u); f_10873290();
  /* 10871bf2 mov esi, esp */
  ESI = (ESP);
  /* 10871bf4 push 0x108a0558 */
  push32((uint32_t)(0x108a0558u));
  /* 10871bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871bfb push 0x108a0420 */
  push32((uint32_t)(0x108a0420u));
  /* 10871c00 call dword ptr [0x108a3480] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3480))), 0x10871c06u);
  /* 10871c06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871c09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871c0b call 0x10873290 */
  push32(0x10871c10u); f_10873290();
  /* 10871c10 mov cl, byte ptr [0x108a0560] */
  CL = (r8((uint32_t)(0x108a0560)));
  /* 10871c16 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10871c19 mov byte ptr [0x108a0560], cl */
  w8((uint32_t)(0x108a0560), (CL));
  /* 10871c1f mov dl, byte ptr [0x108a0561] */
  DL = (r8((uint32_t)(0x108a0561)));
  /* 10871c25 add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10871c28 mov byte ptr [0x108a0561], dl */
  w8((uint32_t)(0x108a0561), (DL));
  /* 10871c2e mov esi, esp */
  ESI = (ESP);
  /* 10871c30 push 0x108a0558 */
  push32((uint32_t)(0x108a0558u));
  /* 10871c35 call dword ptr [0x108a3484] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3484))), 0x10871c3bu);
  /* 10871c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871c3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871c40 call 0x10873290 */
  push32(0x10871c45u); f_10873290();
L_10871c45:;
  /* 10871c45 mov esi, esp */
  ESI = (ESP);
  /* 10871c47 push 6 */
  push32((uint32_t)(0x6u));
  /* 10871c49 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x10871c4fu);
  /* 10871c4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871c52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871c54 call 0x10873290 */
  push32(0x10871c59u); f_10873290();
  /* 10871c59 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10871c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871c60 je 0x10871caf */
  if (C.zf) goto L_10871caf;
  /* 10871c62 push 0x108a0468 */
  push32((uint32_t)(0x108a0468u));
  /* 10871c67 call 0x10871005 */
  push32(0x10871c6cu); f_10871005();
  /* 10871c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871c6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871c71 jne 0x10871caf */
  if (!C.zf) goto L_10871caf;
  /* 10871c73 mov esi, esp */
  ESI = (ESP);
  /* 10871c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871c77 push 6 */
  push32((uint32_t)(0x6u));
  /* 10871c79 call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10871c7fu);
  /* 10871c7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871c84 call 0x10873290 */
  push32(0x10871c89u); f_10873290();
  /* 10871c89 mov esi, esp */
  ESI = (ESP);
  /* 10871c8b push 0x1089b1b0 */
  push32((uint32_t)(0x1089b1b0u));
  /* 10871c90 call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x10871c96u);
  /* 10871c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871c99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871c9b call 0x10873290 */
  push32(0x10871ca0u); f_10873290();
  /* 10871ca0 mov esi, esp */
  ESI = (ESP);
  /* 10871ca2 call dword ptr [0x108a347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a347c))), 0x10871ca8u);
  /* 10871ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871caa call 0x10873290 */
  push32(0x10871cafu); f_10873290();
L_10871caf:;
  /* 10871caf mov esi, esp */
  ESI = (ESP);
  /* 10871cb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10871cb3 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x10871cb9u);
  /* 10871cb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871cbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871cbe call 0x10873290 */
  push32(0x10871cc3u); f_10873290();
  /* 10871cc3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10871cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871cca je 0x10871dec */
  if (C.zf) goto L_10871dec;
  /* 10871cd0 push 0x108a0428 */
  push32((uint32_t)(0x108a0428u));
  /* 10871cd5 call 0x10871005 */
  push32(0x10871cdau); f_10871005();
  /* 10871cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871cdf jne 0x10871dec */
  if (!C.zf) goto L_10871dec;
  /* 10871ce5 push 0x108a0430 */
  push32((uint32_t)(0x108a0430u));
  /* 10871cea call 0x10871005 */
  push32(0x10871cefu); f_10871005();
  /* 10871cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871cf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871cf4 jle 0x10871dec */
  if ((C.zf||C.sf!=C.of)) goto L_10871dec;
  /* 10871cfa mov esi, esp */
  ESI = (ESP);
  /* 10871cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10871cfe push 1 */
  push32((uint32_t)(0x1u));
  /* 10871d00 call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10871d06u);
  /* 10871d06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871d09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871d0b call 0x10873290 */
  push32(0x10871d10u); f_10873290();
  /* 10871d10 mov esi, esp */
  ESI = (ESP);
  /* 10871d12 push 5 */
  push32((uint32_t)(0x5u));
  /* 10871d14 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x10871d1au);
  /* 10871d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871d1f call 0x10873290 */
  push32(0x10871d24u); f_10873290();
  /* 10871d24 mov esi, esp */
  ESI = (ESP);
  /* 10871d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871d28 push 0x108a0430 */
  push32((uint32_t)(0x108a0430u));
  /* 10871d2d call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10871d33u);
  /* 10871d33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871d38 call 0x10873290 */
  push32(0x10871d3du); f_10873290();
  /* 10871d3d mov esi, esp */
  ESI = (ESP);
  /* 10871d3f push 0x1089b1a8 */
  push32((uint32_t)(0x1089b1a8u));
  /* 10871d44 call dword ptr [0x108a3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3490))), 0x10871d4au);
  /* 10871d4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871d4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871d4f call 0x10873290 */
  push32(0x10871d54u); f_10873290();
  /* 10871d54 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10871d59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871d5b je 0x10871d75 */
  if (C.zf) goto L_10871d75;
  /* 10871d5d mov esi, esp */
  ESI = (ESP);
  /* 10871d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10871d61 push 5 */
  push32((uint32_t)(0x5u));
  /* 10871d63 call dword ptr [0x108a3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3488))), 0x10871d69u);
  /* 10871d69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871d6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871d6e call 0x10873290 */
  push32(0x10871d73u); f_10873290();
  /* 10871d73 jmp 0x10871d9f */
  goto L_10871d9f;
L_10871d75:;
  /* 10871d75 mov esi, esp */
  ESI = (ESP);
  /* 10871d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871d79 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10871d7b call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10871d81u);
  /* 10871d81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871d84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871d86 call 0x10873290 */
  push32(0x10871d8bu); f_10873290();
  /* 10871d8b mov esi, esp */
  ESI = (ESP);
  /* 10871d8d push 5 */
  push32((uint32_t)(0x5u));
  /* 10871d8f call dword ptr [0x108a3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3498))), 0x10871d95u);
  /* 10871d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871d98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871d9a call 0x10873290 */
  push32(0x10871d9fu); f_10873290();
L_10871d9f:;
  /* 10871d9f mov esi, esp */
  ESI = (ESP);
  /* 10871da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871da3 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x10871da9u);
  /* 10871da9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871dae call 0x10873290 */
  push32(0x10871db3u); f_10873290();
  /* 10871db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871db5 jne 0x10871dec */
  if (!C.zf) goto L_10871dec;
  /* 10871db7 cmp dword ptr [0x108a0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871dbe jle 0x10871dec */
  if ((C.zf||C.sf!=C.of)) goto L_10871dec;
  /* 10871dc0 mov esi, esp */
  ESI = (ESP);
  /* 10871dc2 mov eax, dword ptr [0x108a0520] */
  EAX = (r32((uint32_t)(0x108a0520)));
  /* 10871dc7 push eax */
  push32((uint32_t)(EAX));
  /* 10871dc8 push 0x1089b1a0 */
  push32((uint32_t)(0x1089b1a0u));
  /* 10871dcd call dword ptr [0x108a349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a349c))), 0x10871dd3u);
  /* 10871dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871dd8 call 0x10873290 */
  push32(0x10871dddu); f_10873290();
  /* 10871ddd mov ecx, dword ptr [0x108a0520] */
  ECX = (r32((uint32_t)(0x108a0520)));
  /* 10871de3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10871de6 mov dword ptr [0x108a0520], ecx */
  w32((uint32_t)(0x108a0520), (ECX));
L_10871dec:;
  /* 10871dec mov esi, esp */
  ESI = (ESP);
  /* 10871dee push 2 */
  push32((uint32_t)(0x2u));
  /* 10871df0 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x10871df6u);
  /* 10871df6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871df9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871dfb call 0x10873290 */
  push32(0x10871e00u); f_10873290();
  /* 10871e00 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10871e05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871e07 je 0x10871f12 */
  if (C.zf) goto L_10871f12;
  /* 10871e0d push 0x108a0438 */
  push32((uint32_t)(0x108a0438u));
  /* 10871e12 call 0x10871005 */
  push32(0x10871e17u); f_10871005();
  /* 10871e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871e1c jne 0x10871f12 */
  if (!C.zf) goto L_10871f12;
  /* 10871e22 push 0x108a0440 */
  push32((uint32_t)(0x108a0440u));
  /* 10871e27 call 0x10871005 */
  push32(0x10871e2cu); f_10871005();
  /* 10871e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871e31 jle 0x10871f12 */
  if ((C.zf||C.sf!=C.of)) goto L_10871f12;
  /* 10871e37 mov esi, esp */
  ESI = (ESP);
  /* 10871e39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871e3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10871e3d call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10871e43u);
  /* 10871e43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871e46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871e48 call 0x10873290 */
  push32(0x10871e4du); f_10873290();
  /* 10871e4d mov esi, esp */
  ESI = (ESP);
  /* 10871e4f push 5 */
  push32((uint32_t)(0x5u));
  /* 10871e51 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x10871e57u);
  /* 10871e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871e5c call 0x10873290 */
  push32(0x10871e61u); f_10873290();
  /* 10871e61 mov esi, esp */
  ESI = (ESP);
  /* 10871e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871e65 push 0x108a0440 */
  push32((uint32_t)(0x108a0440u));
  /* 10871e6a call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10871e70u);
  /* 10871e70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871e73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871e75 call 0x10873290 */
  push32(0x10871e7au); f_10873290();
  /* 10871e7a mov esi, esp */
  ESI = (ESP);
  /* 10871e7c push 0x1089b198 */
  push32((uint32_t)(0x1089b198u));
  /* 10871e81 call dword ptr [0x108a3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3490))), 0x10871e87u);
  /* 10871e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871e8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871e8c call 0x10873290 */
  push32(0x10871e91u); f_10873290();
  /* 10871e91 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10871e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871e98 je 0x10871eb2 */
  if (C.zf) goto L_10871eb2;
  /* 10871e9a mov esi, esp */
  ESI = (ESP);
  /* 10871e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10871e9e push 5 */
  push32((uint32_t)(0x5u));
  /* 10871ea0 call dword ptr [0x108a3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3488))), 0x10871ea6u);
  /* 10871ea6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871ea9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871eab call 0x10873290 */
  push32(0x10871eb0u); f_10873290();
  /* 10871eb0 jmp 0x10871ec6 */
  goto L_10871ec6;
L_10871eb2:;
  /* 10871eb2 mov esi, esp */
  ESI = (ESP);
  /* 10871eb4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10871eb6 call dword ptr [0x108a3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3498))), 0x10871ebcu);
  /* 10871ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871ebf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871ec1 call 0x10873290 */
  push32(0x10871ec6u); f_10873290();
L_10871ec6:;
  /* 10871ec6 mov esi, esp */
  ESI = (ESP);
  /* 10871ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871eca call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x10871ed0u);
  /* 10871ed0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871ed3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871ed5 call 0x10873290 */
  push32(0x10871edau); f_10873290();
  /* 10871eda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871edc jne 0x10871f12 */
  if (!C.zf) goto L_10871f12;
  /* 10871ede cmp dword ptr [0x108a0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871ee5 jle 0x10871f12 */
  if ((C.zf||C.sf!=C.of)) goto L_10871f12;
  /* 10871ee7 mov esi, esp */
  ESI = (ESP);
  /* 10871ee9 mov edx, dword ptr [0x108a0520] */
  EDX = (r32((uint32_t)(0x108a0520)));
  /* 10871eef push edx */
  push32((uint32_t)(EDX));
  /* 10871ef0 push 0x1089b1a0 */
  push32((uint32_t)(0x1089b1a0u));
  /* 10871ef5 call dword ptr [0x108a349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a349c))), 0x10871efbu);
  /* 10871efb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871efe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871f00 call 0x10873290 */
  push32(0x10871f05u); f_10873290();
  /* 10871f05 mov eax, dword ptr [0x108a0520] */
  EAX = (r32((uint32_t)(0x108a0520)));
  /* 10871f0a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10871f0d mov dword ptr [0x108a0520], eax */
  w32((uint32_t)(0x108a0520), (EAX));
L_10871f12:;
  /* 10871f12 mov esi, esp */
  ESI = (ESP);
  /* 10871f14 push 3 */
  push32((uint32_t)(0x3u));
  /* 10871f16 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x10871f1cu);
  /* 10871f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871f1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871f21 call 0x10873290 */
  push32(0x10871f26u); f_10873290();
  /* 10871f26 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10871f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871f2d je 0x10872050 */
  if (C.zf) goto L_10872050;
  /* 10871f33 push 0x108a0448 */
  push32((uint32_t)(0x108a0448u));
  /* 10871f38 call 0x10871005 */
  push32(0x10871f3du); f_10871005();
  /* 10871f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871f40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871f42 jne 0x10872050 */
  if (!C.zf) goto L_10872050;
  /* 10871f48 push 0x108a0450 */
  push32((uint32_t)(0x108a0450u));
  /* 10871f4d call 0x10871005 */
  push32(0x10871f52u); f_10871005();
  /* 10871f52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871f57 jle 0x10872050 */
  if ((C.zf||C.sf!=C.of)) goto L_10872050;
  /* 10871f5d mov esi, esp */
  ESI = (ESP);
  /* 10871f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10871f61 push 3 */
  push32((uint32_t)(0x3u));
  /* 10871f63 call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10871f69u);
  /* 10871f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871f6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871f6e call 0x10873290 */
  push32(0x10871f73u); f_10873290();
  /* 10871f73 mov esi, esp */
  ESI = (ESP);
  /* 10871f75 push 5 */
  push32((uint32_t)(0x5u));
  /* 10871f77 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x10871f7du);
  /* 10871f7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871f82 call 0x10873290 */
  push32(0x10871f87u); f_10873290();
  /* 10871f87 mov esi, esp */
  ESI = (ESP);
  /* 10871f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871f8b push 0x108a0450 */
  push32((uint32_t)(0x108a0450u));
  /* 10871f90 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10871f96u);
  /* 10871f96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871f99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871f9b call 0x10873290 */
  push32(0x10871fa0u); f_10873290();
  /* 10871fa0 mov esi, esp */
  ESI = (ESP);
  /* 10871fa2 push 0x1089b190 */
  push32((uint32_t)(0x1089b190u));
  /* 10871fa7 call dword ptr [0x108a3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3490))), 0x10871fadu);
  /* 10871fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871fb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871fb2 call 0x10873290 */
  push32(0x10871fb7u); f_10873290();
  /* 10871fb7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10871fbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10871fbe je 0x10871fd8 */
  if (C.zf) goto L_10871fd8;
  /* 10871fc0 mov esi, esp */
  ESI = (ESP);
  /* 10871fc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10871fc4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10871fc6 call dword ptr [0x108a3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3488))), 0x10871fccu);
  /* 10871fcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871fcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871fd1 call 0x10873290 */
  push32(0x10871fd6u); f_10873290();
  /* 10871fd6 jmp 0x10872002 */
  goto L_10872002;
L_10871fd8:;
  /* 10871fd8 mov esi, esp */
  ESI = (ESP);
  /* 10871fda push 0 */
  push32((uint32_t)(0x0u));
  /* 10871fdc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10871fde call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10871fe4u);
  /* 10871fe4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871fe7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871fe9 call 0x10873290 */
  push32(0x10871feeu); f_10873290();
  /* 10871fee mov esi, esp */
  ESI = (ESP);
  /* 10871ff0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10871ff2 call dword ptr [0x108a3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3498))), 0x10871ff8u);
  /* 10871ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10871ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10871ffd call 0x10873290 */
  push32(0x10872002u); f_10873290();
L_10872002:;
  /* 10872002 mov esi, esp */
  ESI = (ESP);
  /* 10872004 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872006 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x1087200cu);
  /* 1087200c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087200f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872011 call 0x10873290 */
  push32(0x10872016u); f_10873290();
  /* 10872016 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872018 jne 0x10872050 */
  if (!C.zf) goto L_10872050;
  /* 1087201a cmp dword ptr [0x108a0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872021 jle 0x10872050 */
  if ((C.zf||C.sf!=C.of)) goto L_10872050;
  /* 10872023 mov esi, esp */
  ESI = (ESP);
  /* 10872025 mov ecx, dword ptr [0x108a0520] */
  ECX = (r32((uint32_t)(0x108a0520)));
  /* 1087202b push ecx */
  push32((uint32_t)(ECX));
  /* 1087202c push 0x1089b1a0 */
  push32((uint32_t)(0x1089b1a0u));
  /* 10872031 call dword ptr [0x108a349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a349c))), 0x10872037u);
  /* 10872037 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087203a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087203c call 0x10873290 */
  push32(0x10872041u); f_10873290();
  /* 10872041 mov edx, dword ptr [0x108a0520] */
  EDX = (r32((uint32_t)(0x108a0520)));
  /* 10872047 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087204a mov dword ptr [0x108a0520], edx */
  w32((uint32_t)(0x108a0520), (EDX));
L_10872050:;
  /* 10872050 mov esi, esp */
  ESI = (ESP);
  /* 10872052 push 4 */
  push32((uint32_t)(0x4u));
  /* 10872054 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x1087205au);
  /* 1087205a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087205d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087205f call 0x10873290 */
  push32(0x10872064u); f_10873290();
  /* 10872064 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10872069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087206b je 0x1087218d */
  if (C.zf) goto L_1087218d;
  /* 10872071 push 0x108a0458 */
  push32((uint32_t)(0x108a0458u));
  /* 10872076 call 0x10871005 */
  push32(0x1087207bu); f_10871005();
  /* 1087207b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087207e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872080 jne 0x1087218d */
  if (!C.zf) goto L_1087218d;
  /* 10872086 push 0x108a0460 */
  push32((uint32_t)(0x108a0460u));
  /* 1087208b call 0x10871005 */
  push32(0x10872090u); f_10871005();
  /* 10872090 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872095 jle 0x1087218d */
  if ((C.zf||C.sf!=C.of)) goto L_1087218d;
  /* 1087209b mov esi, esp */
  ESI = (ESP);
  /* 1087209d push 0 */
  push32((uint32_t)(0x0u));
  /* 1087209f push 4 */
  push32((uint32_t)(0x4u));
  /* 108720a1 call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x108720a7u);
  /* 108720a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108720aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108720ac call 0x10873290 */
  push32(0x108720b1u); f_10873290();
  /* 108720b1 mov esi, esp */
  ESI = (ESP);
  /* 108720b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 108720b5 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x108720bbu);
  /* 108720bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108720be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108720c0 call 0x10873290 */
  push32(0x108720c5u); f_10873290();
  /* 108720c5 mov esi, esp */
  ESI = (ESP);
  /* 108720c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108720c9 push 0x108a0460 */
  push32((uint32_t)(0x108a0460u));
  /* 108720ce call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x108720d4u);
  /* 108720d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108720d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108720d9 call 0x10873290 */
  push32(0x108720deu); f_10873290();
  /* 108720de mov esi, esp */
  ESI = (ESP);
  /* 108720e0 push 0x1089b188 */
  push32((uint32_t)(0x1089b188u));
  /* 108720e5 call dword ptr [0x108a3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3490))), 0x108720ebu);
  /* 108720eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108720ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108720f0 call 0x10873290 */
  push32(0x108720f5u); f_10873290();
  /* 108720f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108720fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108720fc je 0x10872116 */
  if (C.zf) goto L_10872116;
  /* 108720fe mov esi, esp */
  ESI = (ESP);
  /* 10872100 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872102 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872104 call dword ptr [0x108a3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3488))), 0x1087210au);
  /* 1087210a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087210d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087210f call 0x10873290 */
  push32(0x10872114u); f_10873290();
  /* 10872114 jmp 0x10872140 */
  goto L_10872140;
L_10872116:;
  /* 10872116 mov esi, esp */
  ESI = (ESP);
  /* 10872118 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087211a push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1087211c call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10872122u);
  /* 10872122 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872125 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872127 call 0x10873290 */
  push32(0x1087212cu); f_10873290();
  /* 1087212c mov esi, esp */
  ESI = (ESP);
  /* 1087212e push 5 */
  push32((uint32_t)(0x5u));
  /* 10872130 call dword ptr [0x108a3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3498))), 0x10872136u);
  /* 10872136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872139 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087213b call 0x10873290 */
  push32(0x10872140u); f_10873290();
L_10872140:;
  /* 10872140 mov esi, esp */
  ESI = (ESP);
  /* 10872142 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872144 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x1087214au);
  /* 1087214a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087214d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087214f call 0x10873290 */
  push32(0x10872154u); f_10873290();
  /* 10872154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872156 jne 0x1087218d */
  if (!C.zf) goto L_1087218d;
  /* 10872158 cmp dword ptr [0x108a0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087215f jle 0x1087218d */
  if ((C.zf||C.sf!=C.of)) goto L_1087218d;
  /* 10872161 mov esi, esp */
  ESI = (ESP);
  /* 10872163 mov eax, dword ptr [0x108a0520] */
  EAX = (r32((uint32_t)(0x108a0520)));
  /* 10872168 push eax */
  push32((uint32_t)(EAX));
  /* 10872169 push 0x1089b1a0 */
  push32((uint32_t)(0x1089b1a0u));
  /* 1087216e call dword ptr [0x108a349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a349c))), 0x10872174u);
  /* 10872174 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872177 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872179 call 0x10873290 */
  push32(0x1087217eu); f_10873290();
  /* 1087217e mov ecx, dword ptr [0x108a0520] */
  ECX = (r32((uint32_t)(0x108a0520)));
  /* 10872184 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10872187 mov dword ptr [0x108a0520], ecx */
  w32((uint32_t)(0x108a0520), (ECX));
L_1087218d:;
  /* 1087218d mov esi, esp */
  ESI = (ESP);
  /* 1087218f push 5 */
  push32((uint32_t)(0x5u));
  /* 10872191 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x10872197u);
  /* 10872197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087219a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087219c call 0x10873290 */
  push32(0x108721a1u); f_10873290();
  /* 108721a1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108721a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108721a8 je 0x108722b3 */
  if (C.zf) goto L_108722b3;
  /* 108721ae push 0x108a0470 */
  push32((uint32_t)(0x108a0470u));
  /* 108721b3 call 0x10871005 */
  push32(0x108721b8u); f_10871005();
  /* 108721b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108721bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108721bd jne 0x108722b3 */
  if (!C.zf) goto L_108722b3;
  /* 108721c3 push 0x108a0478 */
  push32((uint32_t)(0x108a0478u));
  /* 108721c8 call 0x10871005 */
  push32(0x108721cdu); f_10871005();
  /* 108721cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108721d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108721d2 jle 0x108722b3 */
  if ((C.zf||C.sf!=C.of)) goto L_108722b3;
  /* 108721d8 mov esi, esp */
  ESI = (ESP);
  /* 108721da push 0 */
  push32((uint32_t)(0x0u));
  /* 108721dc push 5 */
  push32((uint32_t)(0x5u));
  /* 108721de call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x108721e4u);
  /* 108721e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108721e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108721e9 call 0x10873290 */
  push32(0x108721eeu); f_10873290();
  /* 108721ee mov esi, esp */
  ESI = (ESP);
  /* 108721f0 push 5 */
  push32((uint32_t)(0x5u));
  /* 108721f2 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x108721f8u);
  /* 108721f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108721fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108721fd call 0x10873290 */
  push32(0x10872202u); f_10873290();
  /* 10872202 mov esi, esp */
  ESI = (ESP);
  /* 10872204 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872206 push 0x108a0478 */
  push32((uint32_t)(0x108a0478u));
  /* 1087220b call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10872211u);
  /* 10872211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872216 call 0x10873290 */
  push32(0x1087221bu); f_10873290();
  /* 1087221b mov esi, esp */
  ESI = (ESP);
  /* 1087221d push 0x1089b180 */
  push32((uint32_t)(0x1089b180u));
  /* 10872222 call dword ptr [0x108a3490] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3490))), 0x10872228u);
  /* 10872228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087222b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087222d call 0x10873290 */
  push32(0x10872232u); f_10873290();
  /* 10872232 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10872237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872239 je 0x10872253 */
  if (C.zf) goto L_10872253;
  /* 1087223b mov esi, esp */
  ESI = (ESP);
  /* 1087223d push 0 */
  push32((uint32_t)(0x0u));
  /* 1087223f push 5 */
  push32((uint32_t)(0x5u));
  /* 10872241 call dword ptr [0x108a3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3488))), 0x10872247u);
  /* 10872247 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087224a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087224c call 0x10873290 */
  push32(0x10872251u); f_10873290();
  /* 10872251 jmp 0x10872267 */
  goto L_10872267;
L_10872253:;
  /* 10872253 mov esi, esp */
  ESI = (ESP);
  /* 10872255 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872257 call dword ptr [0x108a3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3498))), 0x1087225du);
  /* 1087225d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872260 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872262 call 0x10873290 */
  push32(0x10872267u); f_10873290();
L_10872267:;
  /* 10872267 mov esi, esp */
  ESI = (ESP);
  /* 10872269 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087226b call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x10872271u);
  /* 10872271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872276 call 0x10873290 */
  push32(0x1087227bu); f_10873290();
  /* 1087227b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087227d jne 0x108722b3 */
  if (!C.zf) goto L_108722b3;
  /* 1087227f cmp dword ptr [0x108a0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872286 jle 0x108722b3 */
  if ((C.zf||C.sf!=C.of)) goto L_108722b3;
  /* 10872288 mov esi, esp */
  ESI = (ESP);
  /* 1087228a mov edx, dword ptr [0x108a0520] */
  EDX = (r32((uint32_t)(0x108a0520)));
  /* 10872290 push edx */
  push32((uint32_t)(EDX));
  /* 10872291 push 0x1089b1a0 */
  push32((uint32_t)(0x1089b1a0u));
  /* 10872296 call dword ptr [0x108a349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a349c))), 0x1087229cu);
  /* 1087229c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087229f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108722a1 call 0x10873290 */
  push32(0x108722a6u); f_10873290();
  /* 108722a6 mov eax, dword ptr [0x108a0520] */
  EAX = (r32((uint32_t)(0x108a0520)));
  /* 108722ab sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108722ae mov dword ptr [0x108a0520], eax */
  w32((uint32_t)(0x108a0520), (EAX));
L_108722b3:;
  /* 108722b3 mov esi, esp */
  ESI = (ESP);
  /* 108722b5 push 7 */
  push32((uint32_t)(0x7u));
  /* 108722b7 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x108722bdu);
  /* 108722bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108722c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108722c2 call 0x10873290 */
  push32(0x108722c7u); f_10873290();
  /* 108722c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108722cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108722ce je 0x10872428 */
  if (C.zf) goto L_10872428;
  /* 108722d4 push 0x108a0428 */
  push32((uint32_t)(0x108a0428u));
  /* 108722d9 call 0x10871005 */
  push32(0x108722deu); f_10871005();
  /* 108722de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108722e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108722e3 jne 0x10872428 */
  if (!C.zf) goto L_10872428;
  /* 108722e9 push 0x108a0438 */
  push32((uint32_t)(0x108a0438u));
  /* 108722ee call 0x10871005 */
  push32(0x108722f3u); f_10871005();
  /* 108722f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108722f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108722f8 jne 0x10872428 */
  if (!C.zf) goto L_10872428;
  /* 108722fe push 0x108a0448 */
  push32((uint32_t)(0x108a0448u));
  /* 10872303 call 0x10871005 */
  push32(0x10872308u); f_10871005();
  /* 10872308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087230b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087230d jne 0x10872428 */
  if (!C.zf) goto L_10872428;
  /* 10872313 push 0x108a0458 */
  push32((uint32_t)(0x108a0458u));
  /* 10872318 call 0x10871005 */
  push32(0x1087231du); f_10871005();
  /* 1087231d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872320 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872322 jne 0x10872428 */
  if (!C.zf) goto L_10872428;
  /* 10872328 push 0x108a0470 */
  push32((uint32_t)(0x108a0470u));
  /* 1087232d call 0x10871005 */
  push32(0x10872332u); f_10871005();
  /* 10872332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872337 jne 0x10872428 */
  if (!C.zf) goto L_10872428;
  /* 1087233d mov esi, esp */
  ESI = (ESP);
  /* 1087233f push 0 */
  push32((uint32_t)(0x0u));
  /* 10872341 push 7 */
  push32((uint32_t)(0x7u));
  /* 10872343 call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10872349u);
  /* 10872349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087234c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087234e call 0x10873290 */
  push32(0x10872353u); f_10873290();
  /* 10872353 mov esi, esp */
  ESI = (ESP);
  /* 10872355 push 0x1089b178 */
  push32((uint32_t)(0x1089b178u));
  /* 1087235a call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x10872360u);
  /* 10872360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872363 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872365 call 0x10873290 */
  push32(0x1087236au); f_10873290();
  /* 1087236a mov esi, esp */
  ESI = (ESP);
  /* 1087236c push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1087236e call dword ptr [0x108a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a345c))), 0x10872374u);
  /* 10872374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872379 call 0x10873290 */
  push32(0x1087237eu); f_10873290();
  /* 1087237e mov esi, esp */
  ESI = (ESP);
  /* 10872380 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10872382 call dword ptr [0x108a3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3494))), 0x10872388u);
  /* 10872388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087238b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087238d call 0x10873290 */
  push32(0x10872392u); f_10873290();
  /* 10872392 mov esi, esp */
  ESI = (ESP);
  /* 10872394 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10872396 call dword ptr [0x108a3494] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3494))), 0x1087239cu);
  /* 1087239c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087239f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108723a1 call 0x10873290 */
  push32(0x108723a6u); f_10873290();
  /* 108723a6 mov esi, esp */
  ESI = (ESP);
  /* 108723a8 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 108723ad push 4 */
  push32((uint32_t)(0x4u));
  /* 108723af call dword ptr [0x108a34a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34a4))), 0x108723b5u);
  /* 108723b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108723b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108723ba call 0x10873290 */
  push32(0x108723bfu); f_10873290();
  /* 108723bf mov esi, esp */
  ESI = (ESP);
  /* 108723c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108723c3 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x108723c9u);
  /* 108723c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108723cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108723ce call 0x10873290 */
  push32(0x108723d3u); f_10873290();
  /* 108723d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108723d5 jne 0x108723f2 */
  if (!C.zf) goto L_108723f2;
  /* 108723d7 mov esi, esp */
  ESI = (ESP);
  /* 108723d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 108723db push 3 */
  push32((uint32_t)(0x3u));
  /* 108723dd push 0x108a0538 */
  push32((uint32_t)(0x108a0538u));
  /* 108723e2 call dword ptr [0x108a34a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34a8))), 0x108723e8u);
  /* 108723e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108723eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108723ed call 0x10873290 */
  push32(0x108723f2u); f_10873290();
L_108723f2:;
  /* 108723f2 mov esi, esp */
  ESI = (ESP);
  /* 108723f4 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 108723f6 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x108723fcu);
  /* 108723fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108723ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872401 call 0x10873290 */
  push32(0x10872406u); f_10873290();
  /* 10872406 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087240b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087240d je 0x10872428 */
  if (C.zf) goto L_10872428;
  /* 1087240f mov esi, esp */
  ESI = (ESP);
  /* 10872411 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10872416 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872418 call dword ptr [0x108a34a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34a4))), 0x1087241eu);
  /* 1087241e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872423 call 0x10873290 */
  push32(0x10872428u); f_10873290();
L_10872428:;
  /* 10872428 mov esi, esp */
  ESI = (ESP);
  /* 1087242a push 1 */
  push32((uint32_t)(0x1u));
  /* 1087242c call dword ptr [0x108a34a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34a0))), 0x10872432u);
  /* 10872432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872437 call 0x10873290 */
  push32(0x1087243cu); f_10873290();
  /* 1087243c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10872441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872443 je 0x1087255a */
  if (C.zf) goto L_1087255a;
  /* 10872449 push 0x108a0430 */
  push32((uint32_t)(0x108a0430u));
  /* 1087244e call 0x10871005 */
  push32(0x10872453u); f_10871005();
  /* 10872453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872456 mov esi, eax */
  ESI = (EAX);
  /* 10872458 push 0x108a0440 */
  push32((uint32_t)(0x108a0440u));
  /* 1087245d call 0x10871005 */
  push32(0x10872462u); f_10871005();
  /* 10872462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872465 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10872467 push 0x108a0450 */
  push32((uint32_t)(0x108a0450u));
  /* 1087246c call 0x10871005 */
  push32(0x10872471u); f_10871005();
  /* 10872471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872474 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10872476 push 0x108a0460 */
  push32((uint32_t)(0x108a0460u));
  /* 1087247b call 0x10871005 */
  push32(0x10872480u); f_10871005();
  /* 10872480 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872483 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10872485 push 0x108a0478 */
  push32((uint32_t)(0x108a0478u));
  /* 1087248a call 0x10871005 */
  push32(0x1087248fu); f_10871005();
  /* 1087248f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872492 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10872494 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10872496 jle 0x1087255a */
  if ((C.zf||C.sf!=C.of)) goto L_1087255a;
  /* 1087249c mov esi, esp */
  ESI = (ESP);
  /* 1087249e push 0x1089b170 */
  push32((uint32_t)(0x1089b170u));
  /* 108724a3 call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x108724a9u);
  /* 108724a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108724ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108724ae call 0x10873290 */
  push32(0x108724b3u); f_10873290();
  /* 108724b3 mov esi, esp */
  ESI = (ESP);
  /* 108724b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108724b7 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x108724bdu);
  /* 108724bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108724c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108724c2 call 0x10873290 */
  push32(0x108724c7u); f_10873290();
  /* 108724c7 mov esi, esp */
  ESI = (ESP);
  /* 108724c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108724cb push 0x108a0430 */
  push32((uint32_t)(0x108a0430u));
  /* 108724d0 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x108724d6u);
  /* 108724d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108724d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108724db call 0x10873290 */
  push32(0x108724e0u); f_10873290();
  /* 108724e0 mov esi, esp */
  ESI = (ESP);
  /* 108724e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108724e4 push 0x108a0440 */
  push32((uint32_t)(0x108a0440u));
  /* 108724e9 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x108724efu);
  /* 108724ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108724f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108724f4 call 0x10873290 */
  push32(0x108724f9u); f_10873290();
  /* 108724f9 mov esi, esp */
  ESI = (ESP);
  /* 108724fb push 1 */
  push32((uint32_t)(0x1u));
  /* 108724fd push 0x108a0450 */
  push32((uint32_t)(0x108a0450u));
  /* 10872502 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10872508u);
  /* 10872508 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087250b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087250d call 0x10873290 */
  push32(0x10872512u); f_10873290();
  /* 10872512 mov esi, esp */
  ESI = (ESP);
  /* 10872514 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872516 push 0x108a0460 */
  push32((uint32_t)(0x108a0460u));
  /* 1087251b call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10872521u);
  /* 10872521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872524 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872526 call 0x10873290 */
  push32(0x1087252bu); f_10873290();
  /* 1087252b mov esi, esp */
  ESI = (ESP);
  /* 1087252d push 1 */
  push32((uint32_t)(0x1u));
  /* 1087252f push 0x108a0478 */
  push32((uint32_t)(0x108a0478u));
  /* 10872534 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x1087253au);
  /* 1087253a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087253d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087253f call 0x10873290 */
  push32(0x10872544u); f_10873290();
  /* 10872544 mov esi, esp */
  ESI = (ESP);
  /* 10872546 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872548 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087254a call dword ptr [0x108a3488] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3488))), 0x10872550u);
  /* 10872550 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872553 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872555 call 0x10873290 */
  push32(0x1087255au); f_10873290();
L_1087255a:;
  /* 1087255a mov esi, esp */
  ESI = (ESP);
  /* 1087255c push 9 */
  push32((uint32_t)(0x9u));
  /* 1087255e call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x10872564u);
  /* 10872564 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872567 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872569 call 0x10873290 */
  push32(0x1087256eu); f_10873290();
  /* 1087256e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10872573 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872575 je 0x10872681 */
  if (C.zf) goto L_10872681;
  /* 1087257b mov esi, esp */
  ESI = (ESP);
  /* 1087257d push 0 */
  push32((uint32_t)(0x0u));
  /* 1087257f push 0x108a04b0 */
  push32((uint32_t)(0x108a04b0u));
  /* 10872584 call dword ptr [0x108a34b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34b0))), 0x1087258au);
  /* 1087258a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087258d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087258f call 0x10873290 */
  push32(0x10872594u); f_10873290();
  /* 10872594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872596 jle 0x10872681 */
  if ((C.zf||C.sf!=C.of)) goto L_10872681;
  /* 1087259c push 0x108a04c8 */
  push32((uint32_t)(0x108a04c8u));
  /* 108725a1 call 0x10871005 */
  push32(0x108725a6u); f_10871005();
  /* 108725a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108725a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108725ab jne 0x10872681 */
  if (!C.zf) goto L_10872681;
  /* 108725b1 mov esi, esp */
  ESI = (ESP);
  /* 108725b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108725b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 108725b7 call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x108725bdu);
  /* 108725bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108725c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108725c2 call 0x10873290 */
  push32(0x108725c7u); f_10873290();
  /* 108725c7 mov esi, esp */
  ESI = (ESP);
  /* 108725c9 push 0x1089b168 */
  push32((uint32_t)(0x1089b168u));
  /* 108725ce call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x108725d4u);
  /* 108725d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108725d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108725d9 call 0x10873290 */
  push32(0x108725deu); f_10873290();
  /* 108725de mov esi, esp */
  ESI = (ESP);
  /* 108725e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108725e2 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x108725e8u);
  /* 108725e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108725eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108725ed call 0x10873290 */
  push32(0x108725f2u); f_10873290();
  /* 108725f2 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108725f8 mov ecx, 0x4b0 */
  ECX = (0x4b0u);
  /* 108725fd sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108725ff mov esi, esp */
  ESI = (ESP);
  /* 10872601 push ecx */
  push32((uint32_t)(ECX));
  /* 10872602 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872604 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872606 call dword ptr [0x108a34b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34b4))), 0x1087260cu);
  /* 1087260c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087260f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872611 call 0x10873290 */
  push32(0x10872616u); f_10873290();
  /* 10872616 mov esi, esp */
  ESI = (ESP);
  /* 10872618 push 5 */
  push32((uint32_t)(0x5u));
  /* 1087261a call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x10872620u);
  /* 10872620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872623 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872625 call 0x10873290 */
  push32(0x1087262au); f_10873290();
  /* 1087262a mov esi, esp */
  ESI = (ESP);
  /* 1087262c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087262e push 0x108a0598 */
  push32((uint32_t)(0x108a0598u));
  /* 10872633 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10872639u);
  /* 10872639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087263c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087263e call 0x10873290 */
  push32(0x10872643u); f_10873290();
  /* 10872643 mov esi, esp */
  ESI = (ESP);
  /* 10872645 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872647 call dword ptr [0x108a34ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34ac))), 0x1087264du);
  /* 1087264d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872650 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872652 call 0x10873290 */
  push32(0x10872657u); f_10873290();
  /* 10872657 mov esi, esp */
  ESI = (ESP);
  /* 10872659 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087265b push 0x108a04b0 */
  push32((uint32_t)(0x108a04b0u));
  /* 10872660 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872662 push 0x108a03f8 */
  push32((uint32_t)(0x108a03f8u));
  /* 10872667 push 0x108a0530 */
  push32((uint32_t)(0x108a0530u));
  /* 1087266c push 0x108a0590 */
  push32((uint32_t)(0x108a0590u));
  /* 10872671 call dword ptr [0x108a3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3460))), 0x10872677u);
  /* 10872677 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087267a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087267c call 0x10873290 */
  push32(0x10872681u); f_10873290();
L_10872681:;
  /* 10872681 mov esi, esp */
  ESI = (ESP);
  /* 10872683 push 0xa */
  push32((uint32_t)(0xau));
  /* 10872685 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x1087268bu);
  /* 1087268b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087268e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872690 call 0x10873290 */
  push32(0x10872695u); f_10873290();
  /* 10872695 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087269a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087269c je 0x108727a8 */
  if (C.zf) goto L_108727a8;
  /* 108726a2 mov esi, esp */
  ESI = (ESP);
  /* 108726a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108726a6 push 0x108a04e0 */
  push32((uint32_t)(0x108a04e0u));
  /* 108726ab call dword ptr [0x108a34b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34b0))), 0x108726b1u);
  /* 108726b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108726b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108726b6 call 0x10873290 */
  push32(0x108726bbu); f_10873290();
  /* 108726bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108726bd jle 0x108727a8 */
  if ((C.zf||C.sf!=C.of)) goto L_108727a8;
  /* 108726c3 push 0x108a0500 */
  push32((uint32_t)(0x108a0500u));
  /* 108726c8 call 0x10871005 */
  push32(0x108726cdu); f_10871005();
  /* 108726cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108726d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108726d2 jne 0x108727a8 */
  if (!C.zf) goto L_108727a8;
  /* 108726d8 mov esi, esp */
  ESI = (ESP);
  /* 108726da push 0 */
  push32((uint32_t)(0x0u));
  /* 108726dc push 0xa */
  push32((uint32_t)(0xau));
  /* 108726de call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x108726e4u);
  /* 108726e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108726e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108726e9 call 0x10873290 */
  push32(0x108726eeu); f_10873290();
  /* 108726ee mov esi, esp */
  ESI = (ESP);
  /* 108726f0 push 0x1089b15c */
  push32((uint32_t)(0x1089b15cu));
  /* 108726f5 call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x108726fbu);
  /* 108726fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108726fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872700 call 0x10873290 */
  push32(0x10872705u); f_10873290();
  /* 10872705 mov esi, esp */
  ESI = (ESP);
  /* 10872707 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872709 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x1087270fu);
  /* 1087270f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872714 call 0x10873290 */
  push32(0x10872719u); f_10873290();
  /* 10872719 imul eax, eax, 0xc8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xc8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087271f mov edx, 0x4b0 */
  EDX = (0x4b0u);
  /* 10872724 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10872726 mov esi, esp */
  ESI = (ESP);
  /* 10872728 push edx */
  push32((uint32_t)(EDX));
  /* 10872729 push 1 */
  push32((uint32_t)(0x1u));
  /* 1087272b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087272d call dword ptr [0x108a34b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34b4))), 0x10872733u);
  /* 10872733 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872738 call 0x10873290 */
  push32(0x1087273du); f_10873290();
  /* 1087273d mov esi, esp */
  ESI = (ESP);
  /* 1087273f push 3 */
  push32((uint32_t)(0x3u));
  /* 10872741 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x10872747u);
  /* 10872747 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087274a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087274c call 0x10873290 */
  push32(0x10872751u); f_10873290();
  /* 10872751 mov esi, esp */
  ESI = (ESP);
  /* 10872753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872755 push 0x108a05a8 */
  push32((uint32_t)(0x108a05a8u));
  /* 1087275a call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10872760u);
  /* 10872760 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872763 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872765 call 0x10873290 */
  push32(0x1087276au); f_10873290();
  /* 1087276a mov esi, esp */
  ESI = (ESP);
  /* 1087276c push 3 */
  push32((uint32_t)(0x3u));
  /* 1087276e call dword ptr [0x108a34ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34ac))), 0x10872774u);
  /* 10872774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872777 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872779 call 0x10873290 */
  push32(0x1087277eu); f_10873290();
  /* 1087277e mov esi, esp */
  ESI = (ESP);
  /* 10872780 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872782 push 0x108a04e0 */
  push32((uint32_t)(0x108a04e0u));
  /* 10872787 push 3 */
  push32((uint32_t)(0x3u));
  /* 10872789 push 0x108a03f8 */
  push32((uint32_t)(0x108a03f8u));
  /* 1087278e push 0x108a0530 */
  push32((uint32_t)(0x108a0530u));
  /* 10872793 push 0x108a05a0 */
  push32((uint32_t)(0x108a05a0u));
  /* 10872798 call dword ptr [0x108a3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3460))), 0x1087279eu);
  /* 1087279e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108727a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108727a3 call 0x10873290 */
  push32(0x108727a8u); f_10873290();
L_108727a8:;
  /* 108727a8 mov esi, esp */
  ESI = (ESP);
  /* 108727aa push 0xb */
  push32((uint32_t)(0xbu));
  /* 108727ac call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x108727b2u);
  /* 108727b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108727b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108727b7 call 0x10873290 */
  push32(0x108727bcu); f_10873290();
  /* 108727bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108727c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108727c3 je 0x1087285c */
  if (C.zf) goto L_1087285c;
  /* 108727c9 mov esi, esp */
  ESI = (ESP);
  /* 108727cb push 0 */
  push32((uint32_t)(0x0u));
  /* 108727cd push 0x108a04d8 */
  push32((uint32_t)(0x108a04d8u));
  /* 108727d2 call dword ptr [0x108a34b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34b0))), 0x108727d8u);
  /* 108727d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108727db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108727dd call 0x10873290 */
  push32(0x108727e2u); f_10873290();
  /* 108727e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108727e4 jle 0x1087285c */
  if ((C.zf||C.sf!=C.of)) goto L_1087285c;
  /* 108727e6 push 0x108a04f8 */
  push32((uint32_t)(0x108a04f8u));
  /* 108727eb call 0x10871005 */
  push32(0x108727f0u); f_10871005();
  /* 108727f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108727f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108727f5 jne 0x1087285c */
  if (!C.zf) goto L_1087285c;
  /* 108727f7 mov esi, esp */
  ESI = (ESP);
  /* 108727f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108727fb push 0xb */
  push32((uint32_t)(0xbu));
  /* 108727fd call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10872803u);
  /* 10872803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872806 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872808 call 0x10873290 */
  push32(0x1087280du); f_10873290();
  /* 1087280d mov esi, esp */
  ESI = (ESP);
  /* 1087280f push 0x1089b150 */
  push32((uint32_t)(0x1089b150u));
  /* 10872814 call dword ptr [0x108a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a344c))), 0x1087281au);
  /* 1087281a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087281d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087281f call 0x10873290 */
  push32(0x10872824u); f_10873290();
  /* 10872824 mov esi, esp */
  ESI = (ESP);
  /* 10872826 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872828 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x1087282eu);
  /* 1087282e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872833 call 0x10873290 */
  push32(0x10872838u); f_10873290();
  /* 10872838 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087283e mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 10872843 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10872845 mov esi, esp */
  ESI = (ESP);
  /* 10872847 push ecx */
  push32((uint32_t)(ECX));
  /* 10872848 push 3 */
  push32((uint32_t)(0x3u));
  /* 1087284a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087284c call dword ptr [0x108a34b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34b4))), 0x10872852u);
  /* 10872852 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872855 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872857 call 0x10873290 */
  push32(0x1087285cu); f_10873290();
L_1087285c:;
  /* 1087285c mov esi, esp */
  ESI = (ESP);
  /* 1087285e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10872860 call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x10872866u);
  /* 10872866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087286b call 0x10873290 */
  push32(0x10872870u); f_10873290();
  /* 10872870 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10872875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872877 je 0x108729d6 */
  if (C.zf) goto L_108729d6;
  /* 1087287d mov esi, esp */
  ESI = (ESP);
  /* 1087287f call dword ptr [0x108a34bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34bc))), 0x10872885u);
  /* 10872885 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872887 call 0x10873290 */
  push32(0x1087288cu); f_10873290();
  /* 1087288c mov esi, eax */
  ESI = (EAX);
  /* 1087288e mov edi, esp */
  EDI = (ESP);
  /* 10872890 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872892 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x10872898u);
  /* 10872898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087289b cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087289d call 0x10873290 */
  push32(0x108728a2u); f_10873290();
  /* 108728a2 imul eax, eax, 0x4e20 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4e20u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108728a8 mov edx, 0x1d4c0 */
  EDX = (0x1d4c0u);
  /* 108728ad sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108728af cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108728b1 jle 0x108729d6 */
  if ((C.zf||C.sf!=C.of)) goto L_108729d6;
  /* 108728b7 mov esi, esp */
  ESI = (ESP);
  /* 108728b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108728bb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108728bd call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x108728c3u);
  /* 108728c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108728c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108728c8 call 0x10873290 */
  push32(0x108728cdu); f_10873290();
  /* 108728cd mov esi, esp */
  ESI = (ESP);
  /* 108728cf push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 108728d4 push 0x108a04a8 */
  push32((uint32_t)(0x108a04a8u));
  /* 108728d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 108728db push 0x108a03e8 */
  push32((uint32_t)(0x108a03e8u));
  /* 108728e0 push 0x108a0528 */
  push32((uint32_t)(0x108a0528u));
  /* 108728e5 push 0x108a0408 */
  push32((uint32_t)(0x108a0408u));
  /* 108728ea call dword ptr [0x108a3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3460))), 0x108728f0u);
  /* 108728f0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108728f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108728f5 call 0x10873290 */
  push32(0x108728fau); f_10873290();
  /* 108728fa mov esi, esp */
  ESI = (ESP);
  /* 108728fc push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10872901 push 0x108a04a8 */
  push32((uint32_t)(0x108a04a8u));
  /* 10872906 push 3 */
  push32((uint32_t)(0x3u));
  /* 10872908 push 0x108a0510 */
  push32((uint32_t)(0x108a0510u));
  /* 1087290d push 0x108a03e0 */
  push32((uint32_t)(0x108a03e0u));
  /* 10872912 push 0x108a0410 */
  push32((uint32_t)(0x108a0410u));
  /* 10872917 call dword ptr [0x108a3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3460))), 0x1087291du);
  /* 1087291d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872922 call 0x10873290 */
  push32(0x10872927u); f_10873290();
  /* 10872927 mov esi, esp */
  ESI = (ESP);
  /* 10872929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087292b push 0x108a0408 */
  push32((uint32_t)(0x108a0408u));
  /* 10872930 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10872936u);
  /* 10872936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087293b call 0x10873290 */
  push32(0x10872940u); f_10873290();
  /* 10872940 mov esi, esp */
  ESI = (ESP);
  /* 10872942 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872944 push 0x108a0410 */
  push32((uint32_t)(0x108a0410u));
  /* 10872949 call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x1087294fu);
  /* 1087294f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872954 call 0x10873290 */
  push32(0x10872959u); f_10873290();
  /* 10872959 mov esi, esp */
  ESI = (ESP);
  /* 1087295b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087295d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10872962 push 0x108a04d0 */
  push32((uint32_t)(0x108a04d0u));
  /* 10872967 push 3 */
  push32((uint32_t)(0x3u));
  /* 10872969 call dword ptr [0x108a34c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c0))), 0x1087296fu);
  /* 1087296f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872972 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872974 call 0x10873290 */
  push32(0x10872979u); f_10873290();
  /* 10872979 mov esi, esp */
  ESI = (ESP);
  /* 1087297b push 2 */
  push32((uint32_t)(0x2u));
  /* 1087297d push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10872982 push 0x108a04c0 */
  push32((uint32_t)(0x108a04c0u));
  /* 10872987 push 3 */
  push32((uint32_t)(0x3u));
  /* 10872989 call dword ptr [0x108a34c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c0))), 0x1087298fu);
  /* 1087298f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872992 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872994 call 0x10873290 */
  push32(0x10872999u); f_10873290();
  /* 10872999 mov esi, esp */
  ESI = (ESP);
  /* 1087299b push 2 */
  push32((uint32_t)(0x2u));
  /* 1087299d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108729a2 push 0x108a04e8 */
  push32((uint32_t)(0x108a04e8u));
  /* 108729a7 push 3 */
  push32((uint32_t)(0x3u));
  /* 108729a9 call dword ptr [0x108a34c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c0))), 0x108729afu);
  /* 108729af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108729b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108729b4 call 0x10873290 */
  push32(0x108729b9u); f_10873290();
  /* 108729b9 mov esi, esp */
  ESI = (ESP);
  /* 108729bb push 2 */
  push32((uint32_t)(0x2u));
  /* 108729bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108729bf push 0x108a04c0 */
  push32((uint32_t)(0x108a04c0u));
  /* 108729c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 108729c6 call dword ptr [0x108a34c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c0))), 0x108729ccu);
  /* 108729cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108729cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108729d1 call 0x10873290 */
  push32(0x108729d6u); f_10873290();
L_108729d6:;
  /* 108729d6 mov esi, esp */
  ESI = (ESP);
  /* 108729d8 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 108729da call dword ptr [0x108a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3444))), 0x108729e0u);
  /* 108729e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108729e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108729e5 call 0x10873290 */
  push32(0x108729eau); f_10873290();
  /* 108729ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108729ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108729f1 je 0x10872b07 */
  if (C.zf) goto L_10872b07;
  /* 108729f7 mov esi, esp */
  ESI = (ESP);
  /* 108729f9 call dword ptr [0x108a34bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34bc))), 0x108729ffu);
  /* 108729ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872a01 call 0x10873290 */
  push32(0x10872a06u); f_10873290();
  /* 10872a06 mov esi, eax */
  ESI = (EAX);
  /* 10872a08 mov edi, esp */
  EDI = (ESP);
  /* 10872a0a push 1 */
  push32((uint32_t)(0x1u));
  /* 10872a0c call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x10872a12u);
  /* 10872a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872a15 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872a17 call 0x10873290 */
  push32(0x10872a1cu); f_10873290();
  /* 10872a1c imul eax, eax, 0x4e20 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4e20u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10872a22 mov ecx, 0x249f0 */
  ECX = (0x249f0u);
  /* 10872a27 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10872a29 cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872a2b jle 0x10872b07 */
  if ((C.zf||C.sf!=C.of)) goto L_10872b07;
  /* 10872a31 mov esi, esp */
  ESI = (ESP);
  /* 10872a33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872a35 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10872a37 call dword ptr [0x108a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3440))), 0x10872a3du);
  /* 10872a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872a40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872a42 call 0x10873290 */
  push32(0x10872a47u); f_10873290();
  /* 10872a47 mov esi, esp */
  ESI = (ESP);
  /* 10872a49 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10872a4e push 0x108a04a0 */
  push32((uint32_t)(0x108a04a0u));
  /* 10872a53 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872a55 push 0x108a0540 */
  push32((uint32_t)(0x108a0540u));
  /* 10872a5a push 0x108a0528 */
  push32((uint32_t)(0x108a0528u));
  /* 10872a5f push 0x108a0418 */
  push32((uint32_t)(0x108a0418u));
  /* 10872a64 call dword ptr [0x108a3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3460))), 0x10872a6au);
  /* 10872a6a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872a6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872a6f call 0x10873290 */
  push32(0x10872a74u); f_10873290();
  /* 10872a74 mov esi, esp */
  ESI = (ESP);
  /* 10872a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872a78 push 0x108a0418 */
  push32((uint32_t)(0x108a0418u));
  /* 10872a7d call dword ptr [0x108a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3448))), 0x10872a83u);
  /* 10872a83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872a86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872a88 call 0x10873290 */
  push32(0x10872a8du); f_10873290();
  /* 10872a8d mov esi, esp */
  ESI = (ESP);
  /* 10872a8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10872a91 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10872a96 push 0x108a04b8 */
  push32((uint32_t)(0x108a04b8u));
  /* 10872a9b push 5 */
  push32((uint32_t)(0x5u));
  /* 10872a9d call dword ptr [0x108a34c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c0))), 0x10872aa3u);
  /* 10872aa3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872aa6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872aa8 call 0x10873290 */
  push32(0x10872aadu); f_10873290();
  /* 10872aad mov esi, esp */
  ESI = (ESP);
  /* 10872aaf push 2 */
  push32((uint32_t)(0x2u));
  /* 10872ab1 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10872ab3 push 0x108a04c0 */
  push32((uint32_t)(0x108a04c0u));
  /* 10872ab8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872aba call dword ptr [0x108a34c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c0))), 0x10872ac0u);
  /* 10872ac0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872ac3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872ac5 call 0x10873290 */
  push32(0x10872acau); f_10873290();
  /* 10872aca mov esi, esp */
  ESI = (ESP);
  /* 10872acc push 2 */
  push32((uint32_t)(0x2u));
  /* 10872ace push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10872ad0 push 0x108a04d0 */
  push32((uint32_t)(0x108a04d0u));
  /* 10872ad5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872ad7 call dword ptr [0x108a34c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c0))), 0x10872addu);
  /* 10872add add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872ae2 call 0x10873290 */
  push32(0x10872ae7u); f_10873290();
  /* 10872ae7 mov esi, esp */
  ESI = (ESP);
  /* 10872ae9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10872aeb push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10872af0 push 0x108a04c0 */
  push32((uint32_t)(0x108a04c0u));
  /* 10872af5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872af7 call dword ptr [0x108a34c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c0))), 0x10872afdu);
  /* 10872afd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872b00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b02 call 0x10873290 */
  push32(0x10872b07u); f_10873290();
L_10872b07:;
  /* 10872b07 mov esi, esp */
  ESI = (ESP);
  /* 10872b09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872b0b call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x10872b11u);
  /* 10872b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872b14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b16 call 0x10873290 */
  push32(0x10872b1bu); f_10873290();
  /* 10872b1b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b1e jle 0x10872b80 */
  if ((C.zf||C.sf!=C.of)) goto L_10872b80;
  /* 10872b20 mov esi, esp */
  ESI = (ESP);
  /* 10872b22 push 3 */
  push32((uint32_t)(0x3u));
  /* 10872b24 push 0x108a0498 */
  push32((uint32_t)(0x108a0498u));
  /* 10872b29 call dword ptr [0x108a34b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34b8))), 0x10872b2fu);
  /* 10872b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872b32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b34 call 0x10873290 */
  push32(0x10872b39u); f_10873290();
  /* 10872b39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872b3b jle 0x10872b80 */
  if ((C.zf||C.sf!=C.of)) goto L_10872b80;
  /* 10872b3d mov esi, esp */
  ESI = (ESP);
  /* 10872b3f push 3 */
  push32((uint32_t)(0x3u));
  /* 10872b41 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x10872b47u);
  /* 10872b47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872b4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b4c call 0x10873290 */
  push32(0x10872b51u); f_10873290();
  /* 10872b51 mov esi, esp */
  ESI = (ESP);
  /* 10872b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872b55 push 0x108a0498 */
  push32((uint32_t)(0x108a0498u));
  /* 10872b5a push 3 */
  push32((uint32_t)(0x3u));
  /* 10872b5c call dword ptr [0x108a34c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c8))), 0x10872b62u);
  /* 10872b62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872b65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b67 call 0x10873290 */
  push32(0x10872b6cu); f_10873290();
  /* 10872b6c mov esi, esp */
  ESI = (ESP);
  /* 10872b6e push 3 */
  push32((uint32_t)(0x3u));
  /* 10872b70 call dword ptr [0x108a3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3498))), 0x10872b76u);
  /* 10872b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872b79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b7b call 0x10873290 */
  push32(0x10872b80u); f_10873290();
L_10872b80:;
  /* 10872b80 mov esi, esp */
  ESI = (ESP);
  /* 10872b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 10872b84 call dword ptr [0x108a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3450))), 0x10872b8au);
  /* 10872b8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872b8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b8f call 0x10873290 */
  push32(0x10872b94u); f_10873290();
  /* 10872b94 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872b97 jle 0x10872c16 */
  if ((C.zf||C.sf!=C.of)) goto L_10872c16;
  /* 10872b99 mov esi, esp */
  ESI = (ESP);
  /* 10872b9b push 5 */
  push32((uint32_t)(0x5u));
  /* 10872b9d push 0x108a0498 */
  push32((uint32_t)(0x108a0498u));
  /* 10872ba2 call dword ptr [0x108a34b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34b8))), 0x10872ba8u);
  /* 10872ba8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872bab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872bad call 0x10873290 */
  push32(0x10872bb2u); f_10873290();
  /* 10872bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872bb4 jle 0x10872c16 */
  if ((C.zf||C.sf!=C.of)) goto L_10872c16;
  /* 10872bb6 mov esi, esp */
  ESI = (ESP);
  /* 10872bb8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10872bba call dword ptr [0x108a34cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34cc))), 0x10872bc0u);
  /* 10872bc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872bc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872bc5 call 0x10873290 */
  push32(0x10872bcau); f_10873290();
  /* 10872bca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10872bcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10872bd1 je 0x10872c16 */
  if (C.zf) goto L_10872c16;
  /* 10872bd3 mov esi, esp */
  ESI = (ESP);
  /* 10872bd5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872bd7 call dword ptr [0x108a348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a348c))), 0x10872bddu);
  /* 10872bdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872be0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872be2 call 0x10873290 */
  push32(0x10872be7u); f_10873290();
  /* 10872be7 mov esi, esp */
  ESI = (ESP);
  /* 10872be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10872beb push 0x108a0498 */
  push32((uint32_t)(0x108a0498u));
  /* 10872bf0 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872bf2 call dword ptr [0x108a34c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a34c8))), 0x10872bf8u);
  /* 10872bf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872bfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872bfd call 0x10873290 */
  push32(0x10872c02u); f_10873290();
  /* 10872c02 mov esi, esp */
  ESI = (ESP);
  /* 10872c04 push 5 */
  push32((uint32_t)(0x5u));
  /* 10872c06 call dword ptr [0x108a3498] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3498))), 0x10872c0cu);
  /* 10872c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872c0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872c11 call 0x10873290 */
  push32(0x10872c16u); f_10873290();
L_10872c16:;
  /* 10872c16 pop edi */
  EDI = (pop32());
  /* 10872c17 pop esi */
  ESI = (pop32());
  /* 10872c18 pop ebx */
  EBX = (pop32());
  /* 10872c19 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10872c1c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10872c1e call 0x10873290 */
  push32(0x10872c23u); f_10873290();
  /* 10872c23 mov esp, ebp */
  ESP = (EBP);
  /* 10872c25 pop ebp */
  EBP = (pop32());
  /* 10872c26 ret  */
  ESPCHK(0x108717c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003140 @ 0x10873140 (63 bytes, 26 insns) */
void f_10873140(void) {
  FTRACE(0x10873140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873140 push ebp */
  push32((uint32_t)(EBP));
  /* 10873141 mov ebp, esp */
  EBP = (ESP);
  /* 10873143 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10873146 push ebx */
  push32((uint32_t)(EBX));
  /* 10873147 push esi */
  push32((uint32_t)(ESI));
  /* 10873148 push edi */
  push32((uint32_t)(EDI));
  /* 10873149 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1087314c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10873151 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10873156 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10873158 mov esi, esp */
  ESI = (ESP);
  /* 1087315a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087315d push eax */
  push32((uint32_t)(EAX));
  /* 1087315e call dword ptr [0x108a343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a343c))), 0x10873164u);
  /* 10873164 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873169 call 0x10873290 */
  push32(0x1087316eu); f_10873290();
  /* 1087316e pop edi */
  EDI = (pop32());
  /* 1087316f pop esi */
  ESI = (pop32());
  /* 10873170 pop ebx */
  EBX = (pop32());
  /* 10873171 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873174 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873176 call 0x10873290 */
  push32(0x1087317bu); f_10873290();
  /* 1087317b mov esp, ebp */
  ESP = (EBP);
  /* 1087317d pop ebp */
  EBP = (pop32());
  /* 1087317e ret  */
  ESPCHK(0x10873140u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10873290 (56 bytes, 28 insns) */
void f_10873290(void) {
  FTRACE(0x10873290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873290 jne 0x10873293 */
  if (!C.zf) goto L_10873293;
  /* 10873292 ret  */
  ESPCHK(0x10873290u, _esp0);
  ESP += 4; return;
L_10873293:;
  /* 10873293 push ebp */
  push32((uint32_t)(EBP));
  /* 10873294 mov ebp, esp */
  EBP = (ESP);
  /* 10873296 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10873299 push eax */
  push32((uint32_t)(EAX));
  /* 1087329a push edx */
  push32((uint32_t)(EDX));
  /* 1087329b push ebx */
  push32((uint32_t)(EBX));
  /* 1087329c push esi */
  push32((uint32_t)(ESI));
  /* 1087329d push edi */
  push32((uint32_t)(EDI));
  /* 1087329e push 0x1089b218 */
  push32((uint32_t)(0x1089b218u));
  /* 108732a3 push 0x1089b214 */
  push32((uint32_t)(0x1089b214u));
  /* 108732a8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 108732aa push 0x1089b204 */
  push32((uint32_t)(0x1089b204u));
  /* 108732af push 1 */
  push32((uint32_t)(0x1u));
  /* 108732b1 call 0x10873660 */
  push32(0x108732b6u); f_10873660();
  /* 108732b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108732b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108732bc jne 0x108732bf */
  if (!C.zf) goto L_108732bf;
  /* 108732be int3  */
  x86_unimpl("int3 @ 0x108732be");
L_108732bf:;
  /* 108732bf pop edi */
  EDI = (pop32());
  /* 108732c0 pop esi */
  ESI = (pop32());
  /* 108732c1 pop ebx */
  EBX = (pop32());
  /* 108732c2 pop edx */
  EDX = (pop32());
  /* 108732c3 pop eax */
  EAX = (pop32());
  /* 108732c4 mov esp, ebp */
  ESP = (EBP);
  /* 108732c6 pop ebp */
  EBP = (pop32());
  /* 108732c7 ret  */
  ESPCHK(0x10873290u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x108732d0 (313 bytes, 78 insns) */
void f_108732d0(void) {
  FTRACE(0x108732d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108732d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108732d1 mov ebp, esp */
  EBP = (ESP);
  /* 108732d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108732d7 jne 0x10873397 */
  if (!C.zf) goto L_10873397;
  /* 108732dd call dword ptr [0x108a3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3368))), 0x108732e3u);
  /* 108732e3 mov dword ptr [0x108a0638], eax */
  w32((uint32_t)(0x108a0638), (EAX));
  /* 108732e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 108732ea call 0x10876d90 */
  push32(0x108732efu); f_10876d90();
  /* 108732ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108732f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108732f4 jne 0x108732fd */
  if (!C.zf) goto L_108732fd;
  /* 108732f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108732f8 jmp 0x10873405 */
  goto L_10873405;
L_108732fd:;
  /* 108732fd mov eax, dword ptr [0x108a0638] */
  EAX = (r32((uint32_t)(0x108a0638)));
  /* 10873302 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10873305 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087330a mov dword ptr [0x108a0644], eax */
  w32((uint32_t)(0x108a0644), (EAX));
  /* 1087330f mov ecx, dword ptr [0x108a0638] */
  ECX = (r32((uint32_t)(0x108a0638)));
  /* 10873315 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087331b mov dword ptr [0x108a0640], ecx */
  w32((uint32_t)(0x108a0640), (ECX));
  /* 10873321 mov edx, dword ptr [0x108a0640] */
  EDX = (r32((uint32_t)(0x108a0640)));
  /* 10873327 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1087332a add edx, dword ptr [0x108a0644] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108a0644))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10873330 mov dword ptr [0x108a063c], edx */
  w32((uint32_t)(0x108a063c), (EDX));
  /* 10873336 mov eax, dword ptr [0x108a0638] */
  EAX = (r32((uint32_t)(0x108a0638)));
  /* 1087333b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1087333e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10873343 mov dword ptr [0x108a0638], eax */
  w32((uint32_t)(0x108a0638), (EAX));
  /* 10873348 call 0x10873f00 */
  push32(0x1087334du); f_10873f00();
  /* 1087334d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087334f jne 0x1087335d */
  if (!C.zf) goto L_1087335d;
  /* 10873351 call 0x10876de0 */
  push32(0x10873356u); f_10876de0();
  /* 10873356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10873358 jmp 0x10873405 */
  goto L_10873405;
L_1087335d:;
  /* 1087335d call dword ptr [0x108a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3364))), 0x10873363u);
  /* 10873363 mov dword ptr [0x108a218c], eax */
  w32((uint32_t)(0x108a218c), (EAX));
  /* 10873368 call 0x10876b70 */
  push32(0x1087336du); f_10876b70();
  /* 1087336d mov dword ptr [0x108a0620], eax */
  w32((uint32_t)(0x108a0620), (EAX));
  /* 10873372 call 0x108741b0 */
  push32(0x10873377u); f_108741b0();
  /* 10873377 call 0x10876660 */
  push32(0x1087337cu); f_10876660();
  /* 1087337c call 0x10876510 */
  push32(0x10873381u); f_10876510();
  /* 10873381 call 0x10873d00 */
  push32(0x10873386u); f_10873d00();
  /* 10873386 mov ecx, dword ptr [0x108a061c] */
  ECX = (r32((uint32_t)(0x108a061c)));
  /* 1087338c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087338f mov dword ptr [0x108a061c], ecx */
  w32((uint32_t)(0x108a061c), (ECX));
  /* 10873395 jmp 0x10873400 */
  goto L_10873400;
L_10873397:;
  /* 10873397 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087339b jne 0x108733f0 */
  if (!C.zf) goto L_108733f0;
  /* 1087339d cmp dword ptr [0x108a061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108733a4 jle 0x108733ea */
  if ((C.zf||C.sf!=C.of)) goto L_108733ea;
  /* 108733a6 mov edx, dword ptr [0x108a061c] */
  EDX = (r32((uint32_t)(0x108a061c)));
  /* 108733ac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108733af mov dword ptr [0x108a061c], edx */
  w32((uint32_t)(0x108a061c), (EDX));
  /* 108733b5 cmp dword ptr [0x108a0670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108733bc jne 0x108733c3 */
  if (!C.zf) goto L_108733c3;
  /* 108733be call 0x10873d80 */
  push32(0x108733c3u); f_10873d80();
L_108733c3:;
  /* 108733c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108733c5 call 0x10875ab0 */
  push32(0x108733cau); f_10875ab0();
  /* 108733ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108733cd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108733d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108733d2 je 0x108733d9 */
  if (C.zf) goto L_108733d9;
  /* 108733d4 call 0x108763c0 */
  push32(0x108733d9u); f_108763c0();
L_108733d9:;
  /* 108733d9 call 0x108744e0 */
  push32(0x108733deu); f_108744e0();
  /* 108733de call 0x10873f90 */
  push32(0x108733e3u); f_10873f90();
  /* 108733e3 call 0x10876de0 */
  push32(0x108733e8u); f_10876de0();
  /* 108733e8 jmp 0x108733ee */
  goto L_108733ee;
L_108733ea:;
  /* 108733ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108733ec jmp 0x10873405 */
  goto L_10873405;
L_108733ee:;
  /* 108733ee jmp 0x10873400 */
  goto L_10873400;
L_108733f0:;
  /* 108733f0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108733f4 jne 0x10873400 */
  if (!C.zf) goto L_10873400;
  /* 108733f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108733f8 call 0x10874080 */
  push32(0x108733fdu); f_10874080();
  /* 108733fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10873400:;
  /* 10873400 mov eax, 1 */
  EAX = (0x1u);
L_10873405:;
  /* 10873405 pop ebp */
  EBP = (pop32());
  /* 10873406 ret 0xc */
  ESPCHK(0x108732d0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10873410 (243 bytes, 86 insns) */
void f_10873410(void) {
  FTRACE(0x10873410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873410 push ebp */
  push32((uint32_t)(EBP));
  /* 10873411 mov ebp, esp */
  EBP = (ESP);
  /* 10873413 push ecx */
  push32((uint32_t)(ECX));
  /* 10873414 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1087341b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087341f jne 0x10873431 */
  if (!C.zf) goto L_10873431;
  /* 10873421 cmp dword ptr [0x108a061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873428 jne 0x10873431 */
  if (!C.zf) goto L_10873431;
  /* 1087342a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087342c jmp 0x108734fd */
  goto L_108734fd;
L_10873431:;
  /* 10873431 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873435 je 0x1087343d */
  if (C.zf) goto L_1087343d;
  /* 10873437 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087343b jne 0x1087347f */
  if (!C.zf) goto L_1087347f;
L_1087343d:;
  /* 1087343d cmp dword ptr [0x108a219c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a219c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873444 je 0x1087345b */
  if (C.zf) goto L_1087345b;
  /* 10873446 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10873449 push eax */
  push32((uint32_t)(EAX));
  /* 1087344a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087344d push ecx */
  push32((uint32_t)(ECX));
  /* 1087344e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873451 push edx */
  push32((uint32_t)(EDX));
  /* 10873452 call dword ptr [0x108a219c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a219c))), 0x10873458u);
  /* 10873458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087345b:;
  /* 1087345b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087345f je 0x10873475 */
  if (C.zf) goto L_10873475;
  /* 10873461 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10873464 push eax */
  push32((uint32_t)(EAX));
  /* 10873465 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10873468 push ecx */
  push32((uint32_t)(ECX));
  /* 10873469 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087346c push edx */
  push32((uint32_t)(EDX));
  /* 1087346d call 0x108732d0 */
  push32(0x10873472u); f_108732d0();
  /* 10873472 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10873475:;
  /* 10873475 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873479 jne 0x1087347f */
  if (!C.zf) goto L_1087347f;
  /* 1087347b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087347d jmp 0x108734fd */
  goto L_108734fd;
L_1087347f:;
  /* 1087347f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10873482 push eax */
  push32((uint32_t)(EAX));
  /* 10873483 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10873486 push ecx */
  push32((uint32_t)(ECX));
  /* 10873487 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087348a push edx */
  push32((uint32_t)(EDX));
  /* 1087348b call 0x1087100f */
  push32(0x10873490u); f_1087100f();
  /* 10873490 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10873493 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873497 jne 0x108734ae */
  if (!C.zf) goto L_108734ae;
  /* 10873499 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087349d jne 0x108734ae */
  if (!C.zf) goto L_108734ae;
  /* 1087349f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108734a2 push eax */
  push32((uint32_t)(EAX));
  /* 108734a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108734a5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108734a8 push ecx */
  push32((uint32_t)(ECX));
  /* 108734a9 call 0x108732d0 */
  push32(0x108734aeu); f_108732d0();
L_108734ae:;
  /* 108734ae cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108734b2 je 0x108734ba */
  if (C.zf) goto L_108734ba;
  /* 108734b4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108734b8 jne 0x108734fa */
  if (!C.zf) goto L_108734fa;
L_108734ba:;
  /* 108734ba mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108734bd push edx */
  push32((uint32_t)(EDX));
  /* 108734be mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108734c1 push eax */
  push32((uint32_t)(EAX));
  /* 108734c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108734c5 push ecx */
  push32((uint32_t)(ECX));
  /* 108734c6 call 0x108732d0 */
  push32(0x108734cbu); f_108732d0();
  /* 108734cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108734cd jne 0x108734d6 */
  if (!C.zf) goto L_108734d6;
  /* 108734cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108734d6:;
  /* 108734d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108734da je 0x108734fa */
  if (C.zf) goto L_108734fa;
  /* 108734dc cmp dword ptr [0x108a219c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a219c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108734e3 je 0x108734fa */
  if (C.zf) goto L_108734fa;
  /* 108734e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108734e8 push edx */
  push32((uint32_t)(EDX));
  /* 108734e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108734ec push eax */
  push32((uint32_t)(EAX));
  /* 108734ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108734f0 push ecx */
  push32((uint32_t)(ECX));
  /* 108734f1 call dword ptr [0x108a219c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a219c))), 0x108734f7u);
  /* 108734f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108734fa:;
  /* 108734fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108734fd:;
  /* 108734fd mov esp, ebp */
  ESP = (EBP);
  /* 108734ff pop ebp */
  EBP = (pop32());
  /* 10873500 ret 0xc */
  ESPCHK(0x10873410u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10873510 (58 bytes, 18 insns) */
void f_10873510(void) {
  FTRACE(0x10873510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873510 push ebp */
  push32((uint32_t)(EBP));
  /* 10873511 mov ebp, esp */
  EBP = (ESP);
  /* 10873513 cmp dword ptr [0x108a0628], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a0628))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087351a je 0x1087352e */
  if (C.zf) goto L_1087352e;
  /* 1087351c cmp dword ptr [0x108a0628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873523 jne 0x10873533 */
  if (!C.zf) goto L_10873533;
  /* 10873525 cmp dword ptr [0x108a062c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a062c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087352c jne 0x10873533 */
  if (!C.zf) goto L_10873533;
L_1087352e:;
  /* 1087352e call 0x10876e80 */
  push32(0x10873533u); f_10876e80();
L_10873533:;
  /* 10873533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873536 push eax */
  push32((uint32_t)(EAX));
  /* 10873537 call 0x10876ed0 */
  push32(0x1087353cu); f_10876ed0();
  /* 1087353c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087353f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10873544 call dword ptr [0x1089ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1089ea30))), 0x1087354au);
  /* 1087354a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087354d pop ebp */
  EBP = (pop32());
  /* 1087354e ret  */
  ESPCHK(0x10873510u, _esp0);
  ESP += 4; return;
}

/* FUN_10003550 @ 0x10873550 (11 bytes, 5 insns) */
void f_10873550(void) {
  FTRACE(0x10873550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873550 push ebp */
  push32((uint32_t)(EBP));
  /* 10873551 mov ebp, esp */
  EBP = (ESP);
  /* 10873553 call dword ptr [0x108a336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a336c))), 0x10873559u);
  /* 10873559 pop ebp */
  EBP = (pop32());
  /* 1087355a ret  */
  ESPCHK(0x10873550u, _esp0);
  ESP += 4; return;
}

/* FUN_10003560 @ 0x10873560 (87 bytes, 30 insns) */
void f_10873560(void) {
  FTRACE(0x10873560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873560 push ebp */
  push32((uint32_t)(EBP));
  /* 10873561 mov ebp, esp */
  EBP = (ESP);
  /* 10873563 push ecx */
  push32((uint32_t)(ECX));
  /* 10873564 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873568 jl 0x10873570 */
  if ((C.sf!=C.of)) goto L_10873570;
  /* 1087356a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087356e jl 0x10873575 */
  if ((C.sf!=C.of)) goto L_10873575;
L_10873570:;
  /* 10873570 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10873573 jmp 0x108735b3 */
  goto L_108735b3;
L_10873575:;
  /* 10873575 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873579 jne 0x10873587 */
  if (!C.zf) goto L_10873587;
  /* 1087357b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087357e mov eax, dword ptr [eax*4 + 0x1089ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1089ea38)));
  /* 10873585 jmp 0x108735b3 */
  goto L_108735b3;
L_10873587:;
  /* 10873587 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087358a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1087358d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087358f je 0x10873596 */
  if (C.zf) goto L_10873596;
  /* 10873591 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10873594 jmp 0x108735b3 */
  goto L_108735b3;
L_10873596:;
  /* 10873596 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873599 mov eax, dword ptr [edx*4 + 0x1089ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1089ea38)));
  /* 108735a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108735a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108735a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108735a9 mov dword ptr [ecx*4 + 0x1089ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1089ea38), (EDX));
  /* 108735b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108735b3:;
  /* 108735b3 mov esp, ebp */
  ESP = (EBP);
  /* 108735b5 pop ebp */
  EBP = (pop32());
  /* 108735b6 ret  */
  ESPCHK(0x10873560u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x108735c0 (126 bytes, 38 insns) */
void f_108735c0(void) {
  FTRACE(0x108735c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108735c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108735c1 mov ebp, esp */
  EBP = (ESP);
  /* 108735c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108735c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108735c8 jl 0x108735d0 */
  if ((C.sf!=C.of)) goto L_108735d0;
  /* 108735ca cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108735ce jl 0x108735d7 */
  if ((C.sf!=C.of)) goto L_108735d7;
L_108735d0:;
  /* 108735d0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 108735d5 jmp 0x1087363a */
  goto L_1087363a;
L_108735d7:;
  /* 108735d7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108735db jne 0x108735e9 */
  if (!C.zf) goto L_108735e9;
  /* 108735dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108735e0 mov eax, dword ptr [eax*4 + 0x1089ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1089ea44)));
  /* 108735e7 jmp 0x1087363a */
  goto L_1087363a;
L_108735e9:;
  /* 108735e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108735ec mov edx, dword ptr [ecx*4 + 0x1089ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089ea44)));
  /* 108735f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108735f6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108735fa jne 0x10873610 */
  if (!C.zf) goto L_10873610;
  /* 108735fc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 108735fe call dword ptr [0x108a3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3370))), 0x10873604u);
  /* 10873604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873607 mov dword ptr [ecx*4 + 0x1089ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1089ea44), (EAX));
  /* 1087360e jmp 0x10873637 */
  goto L_10873637;
L_10873610:;
  /* 10873610 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873614 jne 0x1087362a */
  if (!C.zf) goto L_1087362a;
  /* 10873616 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10873618 call dword ptr [0x108a3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3370))), 0x1087361eu);
  /* 1087361e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873621 mov dword ptr [edx*4 + 0x1089ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1089ea44), (EAX));
  /* 10873628 jmp 0x10873637 */
  goto L_10873637;
L_1087362a:;
  /* 1087362a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087362d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10873630 mov dword ptr [eax*4 + 0x1089ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1089ea44), (ECX));
L_10873637:;
  /* 10873637 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1087363a:;
  /* 1087363a mov esp, ebp */
  ESP = (EBP);
  /* 1087363c pop ebp */
  EBP = (pop32());
  /* 1087363d ret  */
  ESPCHK(0x108735c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003640 @ 0x10873640 (28 bytes, 11 insns) */
void f_10873640(void) {
  FTRACE(0x10873640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873640 push ebp */
  push32((uint32_t)(EBP));
  /* 10873641 mov ebp, esp */
  EBP = (ESP);
  /* 10873643 push ecx */
  push32((uint32_t)(ECX));
  /* 10873644 mov eax, dword ptr [0x108a2180] */
  EAX = (r32((uint32_t)(0x108a2180)));
  /* 10873649 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087364c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087364f mov dword ptr [0x108a2180], ecx */
  w32((uint32_t)(0x108a2180), (ECX));
  /* 10873655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873658 mov esp, ebp */
  ESP = (EBP);
  /* 1087365a pop ebp */
  EBP = (pop32());
  /* 1087365b ret  */
  ESPCHK(0x10873640u, _esp0);
  ESP += 4; return;
}

/* FUN_10003660 @ 0x10873660 (912 bytes, 248 insns) */
void f_10873660(void) {
  FTRACE(0x10873660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873660 push ebp */
  push32((uint32_t)(EBP));
  /* 10873661 mov ebp, esp */
  EBP = (ESP);
  /* 10873663 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10873668 call 0x10877740 */
  push32(0x1087366du); f_10877740();
  /* 1087366d push edi */
  push32((uint32_t)(EDI));
  /* 1087366e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10873675 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1087367a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087367c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10873682 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10873684 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10873686 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10873687 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1087368e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10873693 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10873695 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1087369b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1087369d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1087369f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 108736a0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 108736a7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 108736ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108736ae lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 108736b4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108736b6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 108736b8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 108736b9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 108736bc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 108736c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108736c6 jl 0x108736ce */
  if ((C.sf!=C.of)) goto L_108736ce;
  /* 108736c8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108736cc jl 0x108736d6 */
  if ((C.sf!=C.of)) goto L_108736d6;
L_108736ce:;
  /* 108736ce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108736d1 jmp 0x108739eb */
  goto L_108739eb;
L_108736d6:;
  /* 108736d6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108736da jne 0x10873780 */
  if (!C.zf) goto L_10873780;
  /* 108736e0 push 0x1089ea34 */
  push32((uint32_t)(0x1089ea34u));
  /* 108736e5 call dword ptr [0x108a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3388))), 0x108736ebu);
  /* 108736eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108736ed jle 0x10873780 */
  if ((C.zf||C.sf!=C.of)) goto L_10873780;
  /* 108736f3 cmp dword ptr [0x108a0630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108736fa jne 0x1087373e */
  if (!C.zf) goto L_1087373e;
  /* 108736fc push 0x1089b3c0 */
  push32((uint32_t)(0x1089b3c0u));
  /* 10873701 call dword ptr [0x108a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3384))), 0x10873707u);
  /* 10873707 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1087370d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873714 je 0x10873736 */
  if (C.zf) goto L_10873736;
  /* 10873716 push 0x1089b3b4 */
  push32((uint32_t)(0x1089b3b4u));
  /* 1087371b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10873721 push ecx */
  push32((uint32_t)(ECX));
  /* 10873722 call dword ptr [0x108a3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3380))), 0x10873728u);
  /* 10873728 mov dword ptr [0x108a0630], eax */
  w32((uint32_t)(0x108a0630), (EAX));
  /* 1087372d cmp dword ptr [0x108a0630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873734 jne 0x1087373e */
  if (!C.zf) goto L_1087373e;
L_10873736:;
  /* 10873736 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10873739 jmp 0x108739eb */
  goto L_108739eb;
L_1087373e:;
  /* 1087373e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10873741 push edx */
  push32((uint32_t)(EDX));
  /* 10873742 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10873745 push eax */
  push32((uint32_t)(EAX));
  /* 10873746 push 0x1089b380 */
  push32((uint32_t)(0x1089b380u));
  /* 1087374b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10873751 push ecx */
  push32((uint32_t)(ECX));
  /* 10873752 call dword ptr [0x108a0630] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a0630))), 0x10873758u);
  /* 10873758 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087375b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10873761 push edx */
  push32((uint32_t)(EDX));
  /* 10873762 call dword ptr [0x108a337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a337c))), 0x10873768u);
  /* 10873768 push 0x1089ea34 */
  push32((uint32_t)(0x1089ea34u));
  /* 1087376d call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x10873773u);
  /* 10873773 call 0x10873550 */
  push32(0x10873778u); f_10873550();
  /* 10873778 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087377b jmp 0x108739eb */
  goto L_108739eb;
L_10873780:;
  /* 10873780 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873784 je 0x108737bd */
  if (C.zf) goto L_108737bd;
  /* 10873786 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1087378c push eax */
  push32((uint32_t)(EAX));
  /* 1087378d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10873790 push ecx */
  push32((uint32_t)(ECX));
  /* 10873791 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10873796 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1087379c push edx */
  push32((uint32_t)(EDX));
  /* 1087379d call 0x10877640 */
  push32(0x108737a2u); f_10877640();
  /* 108737a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108737a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108737a7 jge 0x108737bd */
  if ((C.sf==C.of)) goto L_108737bd;
  /* 108737a9 push 0x1089b354 */
  push32((uint32_t)(0x1089b354u));
  /* 108737ae lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 108737b4 push eax */
  push32((uint32_t)(EAX));
  /* 108737b5 call 0x10877550 */
  push32(0x108737bau); f_10877550();
  /* 108737ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108737bd:;
  /* 108737bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108737c1 jne 0x108737f5 */
  if (!C.zf) goto L_108737f5;
  /* 108737c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108737c7 je 0x108737d5 */
  if (C.zf) goto L_108737d5;
  /* 108737c9 mov dword ptr [ebp - 0x3028], 0x1089b340 */
  w32((uint32_t)(EBP + -0x3028), (0x1089b340u));
  /* 108737d3 jmp 0x108737df */
  goto L_108737df;
L_108737d5:;
  /* 108737d5 mov dword ptr [ebp - 0x3028], 0x1089b32c */
  w32((uint32_t)(EBP + -0x3028), (0x1089b32cu));
L_108737df:;
  /* 108737df mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 108737e5 push ecx */
  push32((uint32_t)(ECX));
  /* 108737e6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 108737ec push edx */
  push32((uint32_t)(EDX));
  /* 108737ed call 0x10877550 */
  push32(0x108737f2u); f_10877550();
  /* 108737f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108737f5:;
  /* 108737f5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 108737fb push eax */
  push32((uint32_t)(EAX));
  /* 108737fc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10873802 push ecx */
  push32((uint32_t)(ECX));
  /* 10873803 call 0x10877560 */
  push32(0x10873808u); f_10877560();
  /* 10873808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087380b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087380f jne 0x1087384a */
  if (!C.zf) goto L_1087384a;
  /* 10873811 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873814 mov eax, dword ptr [edx*4 + 0x1089ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1089ea38)));
  /* 1087381b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1087381e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10873820 je 0x10873836 */
  if (C.zf) goto L_10873836;
  /* 10873822 push 0x1089b328 */
  push32((uint32_t)(0x1089b328u));
  /* 10873827 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1087382d push ecx */
  push32((uint32_t)(ECX));
  /* 1087382e call 0x10877560 */
  push32(0x10873833u); f_10877560();
  /* 10873833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10873836:;
  /* 10873836 push 0x1089b324 */
  push32((uint32_t)(0x1089b324u));
  /* 1087383b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10873841 push edx */
  push32((uint32_t)(EDX));
  /* 10873842 call 0x10877560 */
  push32(0x10873847u); f_10877560();
  /* 10873847 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087384a:;
  /* 1087384a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087384e je 0x10873892 */
  if (C.zf) goto L_10873892;
  /* 10873850 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10873856 push eax */
  push32((uint32_t)(EAX));
  /* 10873857 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087385a push ecx */
  push32((uint32_t)(ECX));
  /* 1087385b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087385e push edx */
  push32((uint32_t)(EDX));
  /* 1087385f push 0x1089b318 */
  push32((uint32_t)(0x1089b318u));
  /* 10873864 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10873869 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1087386f push eax */
  push32((uint32_t)(EAX));
  /* 10873870 call 0x10877450 */
  push32(0x10873875u); f_10877450();
  /* 10873875 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087387a jge 0x10873890 */
  if ((C.sf==C.of)) goto L_10873890;
  /* 1087387c push 0x1089b354 */
  push32((uint32_t)(0x1089b354u));
  /* 10873881 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10873887 push ecx */
  push32((uint32_t)(ECX));
  /* 10873888 call 0x10877550 */
  push32(0x1087388du); f_10877550();
  /* 1087388d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10873890:;
  /* 10873890 jmp 0x108738a8 */
  goto L_108738a8;
L_10873892:;
  /* 10873892 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10873898 push edx */
  push32((uint32_t)(EDX));
  /* 10873899 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1087389f push eax */
  push32((uint32_t)(EAX));
  /* 108738a0 call 0x10877550 */
  push32(0x108738a5u); f_10877550();
  /* 108738a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108738a8:;
  /* 108738a8 cmp dword ptr [0x108a2180], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a2180))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108738af je 0x108738ec */
  if (C.zf) goto L_108738ec;
  /* 108738b1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 108738b7 push ecx */
  push32((uint32_t)(ECX));
  /* 108738b8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108738be push edx */
  push32((uint32_t)(EDX));
  /* 108738bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108738c2 push eax */
  push32((uint32_t)(EAX));
  /* 108738c3 call dword ptr [0x108a2180] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a2180))), 0x108738c9u);
  /* 108738c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108738cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108738ce je 0x108738ec */
  if (C.zf) goto L_108738ec;
  /* 108738d0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108738d4 jne 0x108738e1 */
  if (!C.zf) goto L_108738e1;
  /* 108738d6 push 0x1089ea34 */
  push32((uint32_t)(0x1089ea34u));
  /* 108738db call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x108738e1u);
L_108738e1:;
  /* 108738e1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 108738e7 jmp 0x108739eb */
  goto L_108739eb;
L_108738ec:;
  /* 108738ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108738ef mov edx, dword ptr [ecx*4 + 0x1089ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089ea38)));
  /* 108738f6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 108738f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108738fb je 0x1087393b */
  if (C.zf) goto L_1087393b;
  /* 108738fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873900 cmp dword ptr [eax*4 + 0x1089ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1089ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873908 je 0x1087393b */
  if (C.zf) goto L_1087393b;
  /* 1087390a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087390c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10873912 push ecx */
  push32((uint32_t)(ECX));
  /* 10873913 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10873919 push edx */
  push32((uint32_t)(EDX));
  /* 1087391a call 0x108773d0 */
  push32(0x1087391fu); f_108773d0();
  /* 1087391f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873922 push eax */
  push32((uint32_t)(EAX));
  /* 10873923 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10873929 push eax */
  push32((uint32_t)(EAX));
  /* 1087392a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087392d mov edx, dword ptr [ecx*4 + 0x1089ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089ea44)));
  /* 10873934 push edx */
  push32((uint32_t)(EDX));
  /* 10873935 call dword ptr [0x108a3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3374))), 0x1087393bu);
L_1087393b:;
  /* 1087393b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087393e mov ecx, dword ptr [eax*4 + 0x1089ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1089ea38)));
  /* 10873945 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10873948 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087394a je 0x10873959 */
  if (C.zf) goto L_10873959;
  /* 1087394c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10873952 push edx */
  push32((uint32_t)(EDX));
  /* 10873953 call dword ptr [0x108a337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a337c))), 0x10873959u);
L_10873959:;
  /* 10873959 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087395c mov ecx, dword ptr [eax*4 + 0x1089ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1089ea38)));
  /* 10873963 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10873966 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10873968 je 0x108739d8 */
  if (C.zf) goto L_108739d8;
  /* 1087396a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087396e je 0x1087398d */
  if (C.zf) goto L_1087398d;
  /* 10873970 push 0xa */
  push32((uint32_t)(0xau));
  /* 10873972 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10873978 push edx */
  push32((uint32_t)(EDX));
  /* 10873979 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087397c push eax */
  push32((uint32_t)(EAX));
  /* 1087397d call 0x108770e0 */
  push32(0x10873982u); f_108770e0();
  /* 10873982 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873985 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1087398b jmp 0x10873997 */
  goto L_10873997;
L_1087398d:;
  /* 1087398d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10873997:;
  /* 10873997 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1087399d push ecx */
  push32((uint32_t)(ECX));
  /* 1087399e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108739a1 push edx */
  push32((uint32_t)(EDX));
  /* 108739a2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 108739a8 push eax */
  push32((uint32_t)(EAX));
  /* 108739a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108739ac push ecx */
  push32((uint32_t)(ECX));
  /* 108739ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108739b0 push edx */
  push32((uint32_t)(EDX));
  /* 108739b1 call 0x108739f0 */
  push32(0x108739b6u); f_108739f0();
  /* 108739b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108739b9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 108739bf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108739c3 jne 0x108739d0 */
  if (!C.zf) goto L_108739d0;
  /* 108739c5 push 0x1089ea34 */
  push32((uint32_t)(0x1089ea34u));
  /* 108739ca call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x108739d0u);
L_108739d0:;
  /* 108739d0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 108739d6 jmp 0x108739eb */
  goto L_108739eb;
L_108739d8:;
  /* 108739d8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108739dc jne 0x108739e9 */
  if (!C.zf) goto L_108739e9;
  /* 108739de push 0x1089ea34 */
  push32((uint32_t)(0x1089ea34u));
  /* 108739e3 call dword ptr [0x108a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3378))), 0x108739e9u);
L_108739e9:;
  /* 108739e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108739eb:;
  /* 108739eb pop edi */
  EDI = (pop32());
  /* 108739ec mov esp, ebp */
  ESP = (EBP);
  /* 108739ee pop ebp */
  EBP = (pop32());
  /* 108739ef ret  */
  ESPCHK(0x10873660u, _esp0);
  ESP += 4; return;
}

/* FUN_100039f0 @ 0x108739f0 (780 bytes, 197 insns) */
void f_108739f0(void) {
  FTRACE(0x108739f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108739f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108739f1 mov ebp, esp */
  EBP = (ESP);
  /* 108739f3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 108739f8 call 0x10877740 */
  push32(0x108739fdu); f_10877740();
L_108739fd:;
  /* 108739fd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873a01 jne 0x10873a28 */
  if (!C.zf) goto L_10873a28;
  /* 10873a03 push 0x1089b510 */
  push32((uint32_t)(0x1089b510u));
  /* 10873a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10873a0a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10873a0f push 0x1089b504 */
  push32((uint32_t)(0x1089b504u));
  /* 10873a14 push 2 */
  push32((uint32_t)(0x2u));
  /* 10873a16 call 0x10873660 */
  push32(0x10873a1bu); f_10873660();
  /* 10873a1b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873a1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873a21 jne 0x10873a28 */
  if (!C.zf) goto L_10873a28;
  /* 10873a23 call 0x10873550 */
  push32(0x10873a28u); f_10873550();
L_10873a28:;
  /* 10873a28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10873a2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10873a2c jne 0x108739fd */
  if (!C.zf) goto L_108739fd;
  /* 10873a2e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10873a33 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10873a39 push ecx */
  push32((uint32_t)(ECX));
  /* 10873a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10873a3c call dword ptr [0x108a338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a338c))), 0x10873a42u);
  /* 10873a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10873a44 jne 0x10873a5a */
  if (!C.zf) goto L_10873a5a;
  /* 10873a46 push 0x1089b4ec */
  push32((uint32_t)(0x1089b4ecu));
  /* 10873a4b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10873a51 push edx */
  push32((uint32_t)(EDX));
  /* 10873a52 call 0x10877550 */
  push32(0x10873a57u); f_10877550();
  /* 10873a57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10873a5a:;
  /* 10873a5a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10873a60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10873a63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873a66 push ecx */
  push32((uint32_t)(ECX));
  /* 10873a67 call 0x108773d0 */
  push32(0x10873a6cu); f_108773d0();
  /* 10873a6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873a6f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873a72 jbe 0x10873a9d */
  if ((C.cf||C.zf)) goto L_10873a9d;
  /* 10873a74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873a77 push edx */
  push32((uint32_t)(EDX));
  /* 10873a78 call 0x108773d0 */
  push32(0x10873a7du); f_108773d0();
  /* 10873a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873a80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873a83 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10873a87 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10873a8a push 3 */
  push32((uint32_t)(0x3u));
  /* 10873a8c push 0x1089b4e8 */
  push32((uint32_t)(0x1089b4e8u));
  /* 10873a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873a94 push eax */
  push32((uint32_t)(EAX));
  /* 10873a95 call 0x10877dc0 */
  push32(0x10873a9au); f_10877dc0();
  /* 10873a9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10873a9d:;
  /* 10873a9d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10873aa0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10873aa6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873aad je 0x10873af8 */
  if (C.zf) goto L_10873af8;
  /* 10873aaf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10873ab5 push edx */
  push32((uint32_t)(EDX));
  /* 10873ab6 call 0x108773d0 */
  push32(0x10873abbu); f_108773d0();
  /* 10873abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873abe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873ac1 jbe 0x10873af8 */
  if ((C.cf||C.zf)) goto L_10873af8;
  /* 10873ac3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10873ac9 push eax */
  push32((uint32_t)(EAX));
  /* 10873aca call 0x108773d0 */
  push32(0x10873acfu); f_108773d0();
  /* 10873acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873ad2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10873ad8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10873adc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10873ae2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10873ae4 push 0x1089b4e8 */
  push32((uint32_t)(0x1089b4e8u));
  /* 10873ae9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10873aef push eax */
  push32((uint32_t)(EAX));
  /* 10873af0 call 0x10877dc0 */
  push32(0x10873af5u); f_10877dc0();
  /* 10873af5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10873af8:;
  /* 10873af8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873afc jne 0x10873b0a */
  if (!C.zf) goto L_10873b0a;
  /* 10873afe mov dword ptr [ebp - 0x1114], 0x1089b474 */
  w32((uint32_t)(EBP + -0x1114), (0x1089b474u));
  /* 10873b08 jmp 0x10873b14 */
  goto L_10873b14;
L_10873b0a:;
  /* 10873b0a mov dword ptr [ebp - 0x1114], 0x1089b214 */
  w32((uint32_t)(EBP + -0x1114), (0x1089b214u));
L_10873b14:;
  /* 10873b14 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10873b17 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10873b1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10873b1c je 0x10873b29 */
  if (C.zf) goto L_10873b29;
  /* 10873b1e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10873b21 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10873b27 jmp 0x10873b33 */
  goto L_10873b33;
L_10873b29:;
  /* 10873b29 mov dword ptr [ebp - 0x1118], 0x1089b214 */
  w32((uint32_t)(EBP + -0x1118), (0x1089b214u));
L_10873b33:;
  /* 10873b33 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10873b36 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10873b39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10873b3b je 0x10873b4f */
  if (C.zf) goto L_10873b4f;
  /* 10873b3d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873b41 jne 0x10873b4f */
  if (!C.zf) goto L_10873b4f;
  /* 10873b43 mov dword ptr [ebp - 0x111c], 0x1089b464 */
  w32((uint32_t)(EBP + -0x111c), (0x1089b464u));
  /* 10873b4d jmp 0x10873b59 */
  goto L_10873b59;
L_10873b4f:;
  /* 10873b4f mov dword ptr [ebp - 0x111c], 0x1089b214 */
  w32((uint32_t)(EBP + -0x111c), (0x1089b214u));
L_10873b59:;
  /* 10873b59 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10873b5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10873b5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10873b61 je 0x10873b6f */
  if (C.zf) goto L_10873b6f;
  /* 10873b63 mov dword ptr [ebp - 0x1120], 0x1089b460 */
  w32((uint32_t)(EBP + -0x1120), (0x1089b460u));
  /* 10873b6d jmp 0x10873b79 */
  goto L_10873b79;
L_10873b6f:;
  /* 10873b6f mov dword ptr [ebp - 0x1120], 0x1089b214 */
  w32((uint32_t)(EBP + -0x1120), (0x1089b214u));
L_10873b79:;
  /* 10873b79 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873b7d je 0x10873b8a */
  if (C.zf) goto L_10873b8a;
  /* 10873b7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10873b82 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10873b88 jmp 0x10873b94 */
  goto L_10873b94;
L_10873b8a:;
  /* 10873b8a mov dword ptr [ebp - 0x1124], 0x1089b214 */
  w32((uint32_t)(EBP + -0x1124), (0x1089b214u));
L_10873b94:;
  /* 10873b94 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873b98 je 0x10873ba6 */
  if (C.zf) goto L_10873ba6;
  /* 10873b9a mov dword ptr [ebp - 0x1128], 0x1089b458 */
  w32((uint32_t)(EBP + -0x1128), (0x1089b458u));
  /* 10873ba4 jmp 0x10873bb0 */
  goto L_10873bb0;
L_10873ba6:;
  /* 10873ba6 mov dword ptr [ebp - 0x1128], 0x1089b214 */
  w32((uint32_t)(EBP + -0x1128), (0x1089b214u));
L_10873bb0:;
  /* 10873bb0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873bb4 je 0x10873bc1 */
  if (C.zf) goto L_10873bc1;
  /* 10873bb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10873bb9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10873bbf jmp 0x10873bcb */
  goto L_10873bcb;
L_10873bc1:;
  /* 10873bc1 mov dword ptr [ebp - 0x112c], 0x1089b214 */
  w32((uint32_t)(EBP + -0x112c), (0x1089b214u));
L_10873bcb:;
  /* 10873bcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873bcf je 0x10873bdd */
  if (C.zf) goto L_10873bdd;
  /* 10873bd1 mov dword ptr [ebp - 0x1130], 0x1089b450 */
  w32((uint32_t)(EBP + -0x1130), (0x1089b450u));
  /* 10873bdb jmp 0x10873be7 */
  goto L_10873be7;
L_10873bdd:;
  /* 10873bdd mov dword ptr [ebp - 0x1130], 0x1089b214 */
  w32((uint32_t)(EBP + -0x1130), (0x1089b214u));
L_10873be7:;
  /* 10873be7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873bee je 0x10873bfe */
  if (C.zf) goto L_10873bfe;
  /* 10873bf0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10873bf6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10873bfc jmp 0x10873c08 */
  goto L_10873c08;
L_10873bfe:;
  /* 10873bfe mov dword ptr [ebp - 0x1134], 0x1089b214 */
  w32((uint32_t)(EBP + -0x1134), (0x1089b214u));
L_10873c08:;
  /* 10873c08 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873c0f je 0x10873c1d */
  if (C.zf) goto L_10873c1d;
  /* 10873c11 mov dword ptr [ebp - 0x1138], 0x1089b444 */
  w32((uint32_t)(EBP + -0x1138), (0x1089b444u));
  /* 10873c1b jmp 0x10873c27 */
  goto L_10873c27;
L_10873c1d:;
  /* 10873c1d mov dword ptr [ebp - 0x1138], 0x1089b214 */
  w32((uint32_t)(EBP + -0x1138), (0x1089b214u));
L_10873c27:;
  /* 10873c27 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10873c2d push edx */
  push32((uint32_t)(EDX));
  /* 10873c2e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10873c34 push eax */
  push32((uint32_t)(EAX));
  /* 10873c35 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10873c3b push ecx */
  push32((uint32_t)(ECX));
  /* 10873c3c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10873c42 push edx */
  push32((uint32_t)(EDX));
  /* 10873c43 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10873c49 push eax */
  push32((uint32_t)(EAX));
  /* 10873c4a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10873c50 push ecx */
  push32((uint32_t)(ECX));
  /* 10873c51 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10873c57 push edx */
  push32((uint32_t)(EDX));
  /* 10873c58 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10873c5e push eax */
  push32((uint32_t)(EAX));
  /* 10873c5f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10873c65 push ecx */
  push32((uint32_t)(ECX));
  /* 10873c66 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10873c6c push edx */
  push32((uint32_t)(EDX));
  /* 10873c6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873c70 push eax */
  push32((uint32_t)(EAX));
  /* 10873c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873c74 mov edx, dword ptr [ecx*4 + 0x1089ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089ea50)));
  /* 10873c7b push edx */
  push32((uint32_t)(EDX));
  /* 10873c7c push 0x1089b3f0 */
  push32((uint32_t)(0x1089b3f0u));
  /* 10873c81 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10873c86 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10873c8c push eax */
  push32((uint32_t)(EAX));
  /* 10873c8d call 0x10877450 */
  push32(0x10873c92u); f_10877450();
  /* 10873c92 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873c95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10873c97 jge 0x10873cad */
  if ((C.sf==C.of)) goto L_10873cad;
  /* 10873c99 push 0x1089b354 */
  push32((uint32_t)(0x1089b354u));
  /* 10873c9e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10873ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 10873ca5 call 0x10877550 */
  push32(0x10873caau); f_10877550();
  /* 10873caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10873cad:;
  /* 10873cad push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10873cb2 push 0x1089b3cc */
  push32((uint32_t)(0x1089b3ccu));
  /* 10873cb7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10873cbd push edx */
  push32((uint32_t)(EDX));
  /* 10873cbe call 0x10877d00 */
  push32(0x10873cc3u); f_10877d00();
  /* 10873cc3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873cc6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10873ccc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873cd3 jne 0x10873ce6 */
  if (!C.zf) goto L_10873ce6;
  /* 10873cd5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10873cd7 call 0x10877a40 */
  push32(0x10873cdcu); f_10877a40();
  /* 10873cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873cdf push 3 */
  push32((uint32_t)(0x3u));
  /* 10873ce1 call 0x10873d60 */
  push32(0x10873ce6u); f_10873d60();
L_10873ce6:;
  /* 10873ce6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873ced jne 0x10873cf6 */
  if (!C.zf) goto L_10873cf6;
  /* 10873cef mov eax, 1 */
  EAX = (0x1u);
  /* 10873cf4 jmp 0x10873cf8 */
  goto L_10873cf8;
L_10873cf6:;
  /* 10873cf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10873cf8:;
  /* 10873cf8 mov esp, ebp */
  ESP = (EBP);
  /* 10873cfa pop ebp */
  EBP = (pop32());
  /* 10873cfb ret  */
  ESPCHK(0x108739f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d00 @ 0x10873d00 (56 bytes, 15 insns) */
void f_10873d00(void) {
  FTRACE(0x10873d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10873d01 mov ebp, esp */
  EBP = (ESP);
  /* 10873d03 cmp dword ptr [0x108a217c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a217c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873d0a je 0x10873d12 */
  if (C.zf) goto L_10873d12;
  /* 10873d0c call dword ptr [0x108a217c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a217c))), 0x10873d12u);
L_10873d12:;
  /* 10873d12 push 0x1089e418 */
  push32((uint32_t)(0x1089e418u));
  /* 10873d17 push 0x1089e208 */
  push32((uint32_t)(0x1089e208u));
  /* 10873d1c call 0x10873ed0 */
  push32(0x10873d21u); f_10873ed0();
  /* 10873d21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873d24 push 0x1089e104 */
  push32((uint32_t)(0x1089e104u));
  /* 10873d29 push 0x1089e000 */
  push32((uint32_t)(0x1089e000u));
  /* 10873d2e call 0x10873ed0 */
  push32(0x10873d33u); f_10873ed0();
  /* 10873d33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873d36 pop ebp */
  EBP = (pop32());
  /* 10873d37 ret  */
  ESPCHK(0x10873d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d40 @ 0x10873d40 (21 bytes, 10 insns) */
void f_10873d40(void) {
  FTRACE(0x10873d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10873d41 mov ebp, esp */
  EBP = (ESP);
  /* 10873d43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10873d45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10873d47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873d4a push eax */
  push32((uint32_t)(EAX));
  /* 10873d4b call 0x10873dc0 */
  push32(0x10873d50u); f_10873dc0();
  /* 10873d50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873d53 pop ebp */
  EBP = (pop32());
  /* 10873d54 ret  */
  ESPCHK(0x10873d40u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10873d60 (21 bytes, 10 insns) */
void f_10873d60(void) {
  FTRACE(0x10873d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10873d61 mov ebp, esp */
  EBP = (ESP);
  /* 10873d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10873d65 push 1 */
  push32((uint32_t)(0x1u));
  /* 10873d67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873d6a push eax */
  push32((uint32_t)(EAX));
  /* 10873d6b call 0x10873dc0 */
  push32(0x10873d70u); f_10873dc0();
  /* 10873d70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873d73 pop ebp */
  EBP = (pop32());
  /* 10873d74 ret  */
  ESPCHK(0x10873d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d80 @ 0x10873d80 (19 bytes, 9 insns) */
void f_10873d80(void) {
  FTRACE(0x10873d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10873d81 mov ebp, esp */
  EBP = (ESP);
  /* 10873d83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10873d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10873d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10873d89 call 0x10873dc0 */
  push32(0x10873d8eu); f_10873dc0();
  /* 10873d8e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873d91 pop ebp */
  EBP = (pop32());
  /* 10873d92 ret  */
  ESPCHK(0x10873d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003da0 @ 0x10873da0 (19 bytes, 9 insns) */
void f_10873da0(void) {
  FTRACE(0x10873da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10873da1 mov ebp, esp */
  EBP = (ESP);
  /* 10873da3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10873da5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10873da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10873da9 call 0x10873dc0 */
  push32(0x10873daeu); f_10873dc0();
  /* 10873dae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873db1 pop ebp */
  EBP = (pop32());
  /* 10873db2 ret  */
  ESPCHK(0x10873da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003dc0 @ 0x10873dc0 (227 bytes, 61 insns) */
void f_10873dc0(void) {
  FTRACE(0x10873dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10873dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10873dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10873dc4 call 0x10873eb0 */
  push32(0x10873dc9u); f_10873eb0();
  /* 10873dc9 cmp dword ptr [0x108a0674], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a0674))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873dd0 jne 0x10873de3 */
  if (!C.zf) goto L_10873de3;
  /* 10873dd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873dd5 push eax */
  push32((uint32_t)(EAX));
  /* 10873dd6 call dword ptr [0x108a3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3398))), 0x10873ddcu);
  /* 10873ddc push eax */
  push32((uint32_t)(EAX));
  /* 10873ddd call dword ptr [0x108a3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3394))), 0x10873de3u);
L_10873de3:;
  /* 10873de3 mov dword ptr [0x108a0670], 1 */
  w32((uint32_t)(0x108a0670), (0x1u));
  /* 10873ded mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10873df0 mov byte ptr [0x108a066c], cl */
  w8((uint32_t)(0x108a066c), (CL));
  /* 10873df6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873dfa jne 0x10873e43 */
  if (!C.zf) goto L_10873e43;
  /* 10873dfc cmp dword ptr [0x108a2178], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a2178))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873e03 je 0x10873e31 */
  if (C.zf) goto L_10873e31;
  /* 10873e05 mov edx, dword ptr [0x108a2174] */
  EDX = (r32((uint32_t)(0x108a2174)));
  /* 10873e0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10873e0e:;
  /* 10873e0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873e11 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10873e14 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10873e17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873e1a cmp ecx, dword ptr [0x108a2178] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a2178))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873e20 jb 0x10873e31 */
  if (C.cf) goto L_10873e31;
  /* 10873e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873e25 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873e28 je 0x10873e2f */
  if (C.zf) goto L_10873e2f;
  /* 10873e2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873e2d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10873e2fu);
L_10873e2f:;
  /* 10873e2f jmp 0x10873e0e */
  goto L_10873e0e;
L_10873e31:;
  /* 10873e31 push 0x1089e724 */
  push32((uint32_t)(0x1089e724u));
  /* 10873e36 push 0x1089e51c */
  push32((uint32_t)(0x1089e51cu));
  /* 10873e3b call 0x10873ed0 */
  push32(0x10873e40u); f_10873ed0();
  /* 10873e40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10873e43:;
  /* 10873e43 push 0x1089e92c */
  push32((uint32_t)(0x1089e92cu));
  /* 10873e48 push 0x1089e828 */
  push32((uint32_t)(0x1089e828u));
  /* 10873e4d call 0x10873ed0 */
  push32(0x10873e52u); f_10873ed0();
  /* 10873e52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873e55 cmp dword ptr [0x108a0678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873e5c jne 0x10873e7e */
  if (!C.zf) goto L_10873e7e;
  /* 10873e5e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10873e60 call 0x10875ab0 */
  push32(0x10873e65u); f_10875ab0();
  /* 10873e65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873e68 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10873e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10873e6d je 0x10873e7e */
  if (C.zf) goto L_10873e7e;
  /* 10873e6f mov dword ptr [0x108a0678], 1 */
  w32((uint32_t)(0x108a0678), (0x1u));
  /* 10873e79 call 0x108763c0 */
  push32(0x10873e7eu); f_108763c0();
L_10873e7e:;
  /* 10873e7e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873e82 je 0x10873e8b */
  if (C.zf) goto L_10873e8b;
  /* 10873e84 call 0x10873ec0 */
  push32(0x10873e89u); f_10873ec0();
  /* 10873e89 jmp 0x10873e9f */
  goto L_10873e9f;
L_10873e8b:;
  /* 10873e8b mov dword ptr [0x108a0674], 1 */
  w32((uint32_t)(0x108a0674), (0x1u));
  /* 10873e95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873e98 push ecx */
  push32((uint32_t)(ECX));
  /* 10873e99 call dword ptr [0x108a3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3390))), 0x10873e9fu);
L_10873e9f:;
  /* 10873e9f mov esp, ebp */
  ESP = (EBP);
  /* 10873ea1 pop ebp */
  EBP = (pop32());
  /* 10873ea2 ret  */
  ESPCHK(0x10873dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb0 @ 0x10873eb0 (15 bytes, 7 insns) */
void f_10873eb0(void) {
  FTRACE(0x10873eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10873eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10873eb3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10873eb5 call 0x10877fa0 */
  push32(0x10873ebau); f_10877fa0();
  /* 10873eba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873ebd pop ebp */
  EBP = (pop32());
  /* 10873ebe ret  */
  ESPCHK(0x10873eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ec0 @ 0x10873ec0 (15 bytes, 7 insns) */
void f_10873ec0(void) {
  FTRACE(0x10873ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10873ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10873ec3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10873ec5 call 0x10878040 */
  push32(0x10873ecau); f_10878040();
  /* 10873eca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873ecd pop ebp */
  EBP = (pop32());
  /* 10873ece ret  */
  ESPCHK(0x10873ec0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10873ed0 (37 bytes, 16 insns) */
void f_10873ed0(void) {
  FTRACE(0x10873ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10873ed1 mov ebp, esp */
  EBP = (ESP);
L_10873ed3:;
  /* 10873ed3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873ed6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873ed9 jae 0x10873ef3 */
  if (!C.cf) goto L_10873ef3;
  /* 10873edb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873ede cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873ee1 je 0x10873ee8 */
  if (C.zf) goto L_10873ee8;
  /* 10873ee3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873ee6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10873ee8u);
L_10873ee8:;
  /* 10873ee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873eeb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10873eee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10873ef1 jmp 0x10873ed3 */
  goto L_10873ed3;
L_10873ef3:;
  /* 10873ef3 pop ebp */
  EBP = (pop32());
  /* 10873ef4 ret  */
  ESPCHK(0x10873ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f00 @ 0x10873f00 (130 bytes, 42 insns) */
void f_10873f00(void) {
  FTRACE(0x10873f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10873f01 mov ebp, esp */
  EBP = (ESP);
  /* 10873f03 push ecx */
  push32((uint32_t)(ECX));
  /* 10873f04 call 0x10877ec0 */
  push32(0x10873f09u); f_10877ec0();
  /* 10873f09 call dword ptr [0x108a33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33a4))), 0x10873f0fu);
  /* 10873f0f mov dword ptr [0x1089ea5c], eax */
  w32((uint32_t)(0x1089ea5c), (EAX));
  /* 10873f14 cmp dword ptr [0x1089ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1089ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873f1b jne 0x10873f21 */
  if (!C.zf) goto L_10873f21;
  /* 10873f1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10873f1f jmp 0x10873f7e */
  goto L_10873f7e;
L_10873f21:;
  /* 10873f21 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10873f23 push 0x1089b528 */
  push32((uint32_t)(0x1089b528u));
  /* 10873f28 push 2 */
  push32((uint32_t)(0x2u));
  /* 10873f2a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10873f2c push 1 */
  push32((uint32_t)(0x1u));
  /* 10873f2e call 0x108749b0 */
  push32(0x10873f33u); f_108749b0();
  /* 10873f33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873f36 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10873f39 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873f3d je 0x10873f54 */
  if (C.zf) goto L_10873f54;
  /* 10873f3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873f42 push eax */
  push32((uint32_t)(EAX));
  /* 10873f43 mov ecx, dword ptr [0x1089ea5c] */
  ECX = (r32((uint32_t)(0x1089ea5c)));
  /* 10873f49 push ecx */
  push32((uint32_t)(ECX));
  /* 10873f4a call dword ptr [0x108a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32bc))), 0x10873f50u);
  /* 10873f50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10873f52 jne 0x10873f58 */
  if (!C.zf) goto L_10873f58;
L_10873f54:;
  /* 10873f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10873f56 jmp 0x10873f7e */
  goto L_10873f7e;
L_10873f58:;
  /* 10873f58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873f5b push edx */
  push32((uint32_t)(EDX));
  /* 10873f5c call 0x10873fc0 */
  push32(0x10873f61u); f_10873fc0();
  /* 10873f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10873f64 call dword ptr [0x108a32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32b8))), 0x10873f6au);
  /* 10873f6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873f6d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10873f6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10873f72 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10873f79 mov eax, 1 */
  EAX = (0x1u);
L_10873f7e:;
  /* 10873f7e mov esp, ebp */
  ESP = (EBP);
  /* 10873f80 pop ebp */
  EBP = (pop32());
  /* 10873f81 ret  */
  ESPCHK(0x10873f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f90 @ 0x10873f90 (41 bytes, 11 insns) */
void f_10873f90(void) {
  FTRACE(0x10873f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10873f91 mov ebp, esp */
  EBP = (ESP);
  /* 10873f93 call 0x10877f00 */
  push32(0x10873f98u); f_10877f00();
  /* 10873f98 cmp dword ptr [0x1089ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1089ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10873f9f je 0x10873fb7 */
  if (C.zf) goto L_10873fb7;
  /* 10873fa1 mov eax, dword ptr [0x1089ea5c] */
  EAX = (r32((uint32_t)(0x1089ea5c)));
  /* 10873fa6 push eax */
  push32((uint32_t)(EAX));
  /* 10873fa7 call dword ptr [0x108a33a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33a8))), 0x10873fadu);
  /* 10873fad mov dword ptr [0x1089ea5c], 0xffffffff */
  w32((uint32_t)(0x1089ea5c), (0xffffffffu));
L_10873fb7:;
  /* 10873fb7 pop ebp */
  EBP = (pop32());
  /* 10873fb8 ret  */
  ESPCHK(0x10873f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x10873fc0 (25 bytes, 8 insns) */
void f_10873fc0(void) {
  FTRACE(0x10873fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10873fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10873fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873fc6 mov dword ptr [eax + 0x50], 0x1089ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1089ec00u));
  /* 10873fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10873fd0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10873fd7 pop ebp */
  EBP = (pop32());
  /* 10873fd8 ret  */
  ESPCHK(0x10873fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe0 @ 0x10873fe0 (152 bytes, 48 insns) */
void f_10873fe0(void) {
  FTRACE(0x10873fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10873fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10873fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10873fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10873fe6 call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x10873fecu);
  /* 10873fec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10873fef mov eax, dword ptr [0x1089ea5c] */
  EAX = (r32((uint32_t)(0x1089ea5c)));
  /* 10873ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10873ff5 call dword ptr [0x108a33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b0))), 0x10873ffbu);
  /* 10873ffb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10873ffe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874002 jne 0x10874067 */
  if (!C.zf) goto L_10874067;
  /* 10874004 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10874009 push 0x1089b528 */
  push32((uint32_t)(0x1089b528u));
  /* 1087400e push 2 */
  push32((uint32_t)(0x2u));
  /* 10874010 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10874012 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874014 call 0x108749b0 */
  push32(0x10874019u); f_108749b0();
  /* 10874019 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087401c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087401f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874023 je 0x1087405d */
  if (C.zf) goto L_1087405d;
  /* 10874025 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874028 push ecx */
  push32((uint32_t)(ECX));
  /* 10874029 mov edx, dword ptr [0x1089ea5c] */
  EDX = (r32((uint32_t)(0x1089ea5c)));
  /* 1087402f push edx */
  push32((uint32_t)(EDX));
  /* 10874030 call dword ptr [0x108a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32bc))), 0x10874036u);
  /* 10874036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874038 je 0x1087405d */
  if (C.zf) goto L_1087405d;
  /* 1087403a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087403d push eax */
  push32((uint32_t)(EAX));
  /* 1087403e call 0x10873fc0 */
  push32(0x10874043u); f_10873fc0();
  /* 10874043 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874046 call dword ptr [0x108a32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32b8))), 0x1087404cu);
  /* 1087404c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087404f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10874051 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874054 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1087405b jmp 0x10874067 */
  goto L_10874067;
L_1087405d:;
  /* 1087405d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1087405f call 0x10873510 */
  push32(0x10874064u); f_10873510();
  /* 10874064 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10874067:;
  /* 10874067 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087406a push eax */
  push32((uint32_t)(EAX));
  /* 1087406b call dword ptr [0x108a33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33ac))), 0x10874071u);
  /* 10874071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874074 mov esp, ebp */
  ESP = (EBP);
  /* 10874076 pop ebp */
  EBP = (pop32());
  /* 10874077 ret  */
  ESPCHK(0x10873fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x10874080 (263 bytes, 86 insns) */
void f_10874080(void) {
  FTRACE(0x10874080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874080 push ebp */
  push32((uint32_t)(EBP));
  /* 10874081 mov ebp, esp */
  EBP = (ESP);
  /* 10874083 cmp dword ptr [0x1089ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1089ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087408a je 0x10874185 */
  if (C.zf) goto L_10874185;
  /* 10874090 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874094 jne 0x108740a5 */
  if (!C.zf) goto L_108740a5;
  /* 10874096 mov eax, dword ptr [0x1089ea5c] */
  EAX = (r32((uint32_t)(0x1089ea5c)));
  /* 1087409b push eax */
  push32((uint32_t)(EAX));
  /* 1087409c call dword ptr [0x108a33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b0))), 0x108740a2u);
  /* 108740a2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108740a5:;
  /* 108740a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108740a9 je 0x10874176 */
  if (C.zf) goto L_10874176;
  /* 108740af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108740b2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108740b6 je 0x108740c9 */
  if (C.zf) goto L_108740c9;
  /* 108740b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108740ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108740bd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 108740c0 push eax */
  push32((uint32_t)(EAX));
  /* 108740c1 call 0x10875030 */
  push32(0x108740c6u); f_10875030();
  /* 108740c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108740c9:;
  /* 108740c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108740cc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108740d0 je 0x108740e3 */
  if (C.zf) goto L_108740e3;
  /* 108740d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108740d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108740d7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 108740da push eax */
  push32((uint32_t)(EAX));
  /* 108740db call 0x10875030 */
  push32(0x108740e0u); f_10875030();
  /* 108740e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108740e3:;
  /* 108740e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108740e6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108740ea je 0x108740fd */
  if (C.zf) goto L_108740fd;
  /* 108740ec push 2 */
  push32((uint32_t)(0x2u));
  /* 108740ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108740f1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 108740f4 push eax */
  push32((uint32_t)(EAX));
  /* 108740f5 call 0x10875030 */
  push32(0x108740fau); f_10875030();
  /* 108740fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108740fd:;
  /* 108740fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874100 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874104 je 0x10874117 */
  if (C.zf) goto L_10874117;
  /* 10874106 push 2 */
  push32((uint32_t)(0x2u));
  /* 10874108 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087410b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1087410e push eax */
  push32((uint32_t)(EAX));
  /* 1087410f call 0x10875030 */
  push32(0x10874114u); f_10875030();
  /* 10874114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10874117:;
  /* 10874117 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087411a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087411e je 0x10874131 */
  if (C.zf) goto L_10874131;
  /* 10874120 push 2 */
  push32((uint32_t)(0x2u));
  /* 10874122 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874125 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10874128 push eax */
  push32((uint32_t)(EAX));
  /* 10874129 call 0x10875030 */
  push32(0x1087412eu); f_10875030();
  /* 1087412e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10874131:;
  /* 10874131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874134 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874138 je 0x1087414b */
  if (C.zf) goto L_1087414b;
  /* 1087413a push 2 */
  push32((uint32_t)(0x2u));
  /* 1087413c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087413f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10874142 push eax */
  push32((uint32_t)(EAX));
  /* 10874143 call 0x10875030 */
  push32(0x10874148u); f_10875030();
  /* 10874148 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087414b:;
  /* 1087414b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087414e cmp dword ptr [ecx + 0x50], 0x1089ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1089ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874155 je 0x10874168 */
  if (C.zf) goto L_10874168;
  /* 10874157 push 2 */
  push32((uint32_t)(0x2u));
  /* 10874159 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087415c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1087415f push eax */
  push32((uint32_t)(EAX));
  /* 10874160 call 0x10875030 */
  push32(0x10874165u); f_10875030();
  /* 10874165 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10874168:;
  /* 10874168 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087416a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087416d push ecx */
  push32((uint32_t)(ECX));
  /* 1087416e call 0x10875030 */
  push32(0x10874173u); f_10875030();
  /* 10874173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10874176:;
  /* 10874176 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874178 mov edx, dword ptr [0x1089ea5c] */
  EDX = (r32((uint32_t)(0x1089ea5c)));
  /* 1087417e push edx */
  push32((uint32_t)(EDX));
  /* 1087417f call dword ptr [0x108a32bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32bc))), 0x10874185u);
L_10874185:;
  /* 10874185 pop ebp */
  EBP = (pop32());
  /* 10874186 ret  */
  ESPCHK(0x10874080u, _esp0);
  ESP += 4; return;
}

/* FUN_10004190 @ 0x10874190 (11 bytes, 5 insns) */
void f_10874190(void) {
  FTRACE(0x10874190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874190 push ebp */
  push32((uint32_t)(EBP));
  /* 10874191 mov ebp, esp */
  EBP = (ESP);
  /* 10874193 call dword ptr [0x108a32b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a32b8))), 0x10874199u);
  /* 10874199 pop ebp */
  EBP = (pop32());
  /* 1087419a ret  */
  ESPCHK(0x10874190u, _esp0);
  ESP += 4; return;
}

/* FUN_100041a0 @ 0x108741a0 (11 bytes, 5 insns) */
void f_108741a0(void) {
  FTRACE(0x108741a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108741a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108741a1 mov ebp, esp */
  EBP = (ESP);
  /* 108741a3 call dword ptr [0x108a33b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b8))), 0x108741a9u);
  /* 108741a9 pop ebp */
  EBP = (pop32());
  /* 108741aa ret  */
  ESPCHK(0x108741a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041b0 @ 0x108741b0 (804 bytes, 236 insns) */
void f_108741b0(void) {
  FTRACE(0x108741b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108741b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108741b1 mov ebp, esp */
  EBP = (ESP);
  /* 108741b3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108741b6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 108741bb push 0x1089b534 */
  push32((uint32_t)(0x1089b534u));
  /* 108741c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108741c2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108741c7 call 0x108745a0 */
  push32(0x108741ccu); f_108745a0();
  /* 108741cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108741cf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 108741d2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108741d6 jne 0x108741e2 */
  if (!C.zf) goto L_108741e2;
  /* 108741d8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 108741da call 0x10873510 */
  push32(0x108741dfu); f_10873510();
  /* 108741df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108741e2:;
  /* 108741e2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108741e5 mov dword ptr [0x108a2020], eax */
  w32((uint32_t)(0x108a2020), (EAX));
  /* 108741ea mov dword ptr [0x108a215c], 0x20 */
  w32((uint32_t)(0x108a215c), (0x20u));
  /* 108741f4 jmp 0x108741ff */
  goto L_108741ff;
L_108741f6:;
  /* 108741f6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108741f9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108741fc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_108741ff:;
  /* 108741ff mov edx, dword ptr [0x108a2020] */
  EDX = (r32((uint32_t)(0x108a2020)));
  /* 10874205 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087420b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087420e jae 0x10874233 */
  if (!C.cf) goto L_10874233;
  /* 10874210 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10874213 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10874217 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1087421a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10874220 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10874223 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10874227 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1087422a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10874231 jmp 0x108741f6 */
  goto L_108741f6;
L_10874233:;
  /* 10874233 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10874236 push ecx */
  push32((uint32_t)(ECX));
  /* 10874237 call dword ptr [0x108a33c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c0))), 0x1087423du);
  /* 1087423d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10874240 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10874246 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10874248 je 0x108743d5 */
  if (C.zf) goto L_108743d5;
  /* 1087424e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874252 je 0x108743d5 */
  if (C.zf) goto L_108743d5;
  /* 10874258 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087425b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087425d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10874260 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10874263 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874266 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10874269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087426c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087426f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10874272 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874279 jge 0x10874283 */
  if ((C.sf==C.of)) goto L_10874283;
  /* 1087427b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1087427e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10874281 jmp 0x1087428a */
  goto L_1087428a;
L_10874283:;
  /* 10874283 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1087428a:;
  /* 1087428a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1087428d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10874290 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10874297 jmp 0x108742a2 */
  goto L_108742a2;
L_10874299:;
  /* 10874299 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1087429c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087429f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_108742a2:;
  /* 108742a2 mov ecx, dword ptr [0x108a215c] */
  ECX = (r32((uint32_t)(0x108a215c)));
  /* 108742a8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108742ab jge 0x10874342 */
  if ((C.sf==C.of)) goto L_10874342;
  /* 108742b1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 108742b6 push 0x1089b534 */
  push32((uint32_t)(0x1089b534u));
  /* 108742bb push 2 */
  push32((uint32_t)(0x2u));
  /* 108742bd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 108742c2 call 0x108745a0 */
  push32(0x108742c7u); f_108745a0();
  /* 108742c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108742ca mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 108742cd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108742d1 jne 0x108742de */
  if (!C.zf) goto L_108742de;
  /* 108742d3 mov edx, dword ptr [0x108a215c] */
  EDX = (r32((uint32_t)(0x108a215c)));
  /* 108742d9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 108742dc jmp 0x10874342 */
  goto L_10874342;
L_108742de:;
  /* 108742de mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 108742e1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108742e4 mov dword ptr [eax*4 + 0x108a2020], ecx */
  w32((uint32_t)(EAX*4 + 0x108a2020), (ECX));
  /* 108742eb mov edx, dword ptr [0x108a215c] */
  EDX = (r32((uint32_t)(0x108a215c)));
  /* 108742f1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108742f4 mov dword ptr [0x108a215c], edx */
  w32((uint32_t)(0x108a215c), (EDX));
  /* 108742fa jmp 0x10874305 */
  goto L_10874305;
L_108742fc:;
  /* 108742fc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108742ff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874302 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10874305:;
  /* 10874305 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10874308 mov edx, dword ptr [ecx*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(ECX*4 + 0x108a2020)));
  /* 1087430f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874315 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874318 jae 0x1087433d */
  if (!C.cf) goto L_1087433d;
  /* 1087431a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1087431d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10874321 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10874324 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1087432a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1087432d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10874331 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10874334 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1087433b jmp 0x108742fc */
  goto L_108742fc;
L_1087433d:;
  /* 1087433d jmp 0x10874299 */
  goto L_10874299;
L_10874342:;
  /* 10874342 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10874349 jmp 0x10874366 */
  goto L_10874366;
L_1087434b:;
  /* 1087434b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1087434e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874351 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10874354 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874357 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087435a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087435d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10874360 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874363 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10874366:;
  /* 10874366 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10874369 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087436c jge 0x108743d5 */
  if ((C.sf==C.of)) goto L_108743d5;
  /* 1087436e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10874371 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874374 je 0x108743d0 */
  if (C.zf) goto L_108743d0;
  /* 10874376 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874379 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087437c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1087437f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10874381 je 0x108743d0 */
  if (C.zf) goto L_108743d0;
  /* 10874383 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874386 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10874389 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1087438c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087438e jne 0x108743a0 */
  if (!C.zf) goto L_108743a0;
  /* 10874390 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10874393 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10874395 push edx */
  push32((uint32_t)(EDX));
  /* 10874396 call dword ptr [0x108a33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33a0))), 0x1087439cu);
  /* 1087439c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087439e je 0x108743d0 */
  if (C.zf) goto L_108743d0;
L_108743a0:;
  /* 108743a0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 108743a3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 108743a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108743a9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 108743ac imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108743af mov edx, dword ptr [eax*4 + 0x108a2020] */
  EDX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 108743b6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108743b8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 108743bb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108743be mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 108743c1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108743c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108743c5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108743c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108743cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108743cd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_108743d0:;
  /* 108743d0 jmp 0x1087434b */
  goto L_1087434b;
L_108743d5:;
  /* 108743d5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 108743dc jmp 0x108743e7 */
  goto L_108743e7;
L_108743de:;
  /* 108743de mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 108743e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108743e4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_108743e7:;
  /* 108743e7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108743eb jge 0x108744c4 */
  if ((C.sf==C.of)) goto L_108744c4;
  /* 108743f1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 108743f4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108743f7 mov edx, dword ptr [0x108a2020] */
  EDX = (r32((uint32_t)(0x108a2020)));
  /* 108743fd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108743ff mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10874402 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10874405 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874408 jne 0x108744b0 */
  if (!C.zf) goto L_108744b0;
  /* 1087440e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10874411 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10874415 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874419 jne 0x10874424 */
  if (!C.zf) goto L_10874424;
  /* 1087441b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10874422 jmp 0x10874434 */
  goto L_10874434;
L_10874424:;
  /* 10874424 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10874427 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087442a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087442c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087442e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874431 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10874434:;
  /* 10874434 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10874437 push eax */
  push32((uint32_t)(EAX));
  /* 10874438 call dword ptr [0x108a3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3370))), 0x1087443eu);
  /* 1087443e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10874441 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874445 je 0x1087449f */
  if (C.zf) goto L_1087449f;
  /* 10874447 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1087444a push ecx */
  push32((uint32_t)(ECX));
  /* 1087444b call dword ptr [0x108a33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33a0))), 0x10874451u);
  /* 10874451 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10874454 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874458 je 0x1087449f */
  if (C.zf) goto L_1087449f;
  /* 1087445a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1087445d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10874460 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10874462 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10874465 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087446b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087446e jne 0x10874480 */
  if (!C.zf) goto L_10874480;
  /* 10874470 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10874473 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10874476 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10874478 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1087447b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1087447e jmp 0x1087449d */
  goto L_1087449d;
L_10874480:;
  /* 10874480 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10874483 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10874489 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087448c jne 0x1087449d */
  if (!C.zf) goto L_1087449d;
  /* 1087448e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10874491 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10874494 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10874497 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1087449a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1087449d:;
  /* 1087449d jmp 0x108744ae */
  goto L_108744ae;
L_1087449f:;
  /* 1087449f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108744a2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108744a5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 108744a8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108744ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_108744ae:;
  /* 108744ae jmp 0x108744bf */
  goto L_108744bf;
L_108744b0:;
  /* 108744b0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 108744b3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 108744b6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 108744b9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 108744bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_108744bf:;
  /* 108744bf jmp 0x108743de */
  goto L_108743de;
L_108744c4:;
  /* 108744c4 mov eax, dword ptr [0x108a215c] */
  EAX = (r32((uint32_t)(0x108a215c)));
  /* 108744c9 push eax */
  push32((uint32_t)(EAX));
  /* 108744ca call dword ptr [0x108a339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a339c))), 0x108744d0u);
  /* 108744d0 mov esp, ebp */
  ESP = (EBP);
  /* 108744d2 pop ebp */
  EBP = (pop32());
  /* 108744d3 ret  */
  ESPCHK(0x108741b0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x108744e0 (155 bytes, 45 insns) */
void f_108744e0(void) {
  FTRACE(0x108744e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108744e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108744e1 mov ebp, esp */
  EBP = (ESP);
  /* 108744e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108744e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 108744ed jmp 0x108744f8 */
  goto L_108744f8;
L_108744ef:;
  /* 108744ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108744f2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108744f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108744f8:;
  /* 108744f8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108744fc jge 0x10874577 */
  if ((C.sf==C.of)) goto L_10874577;
  /* 108744fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874501 cmp dword ptr [ecx*4 + 0x108a2020], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x108a2020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874509 je 0x10874572 */
  if (C.zf) goto L_10874572;
  /* 1087450b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087450e mov eax, dword ptr [edx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 10874515 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10874518 jmp 0x10874523 */
  goto L_10874523;
L_1087451a:;
  /* 1087451a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087451d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874520 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10874523:;
  /* 10874523 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874526 mov eax, dword ptr [edx*4 + 0x108a2020] */
  EAX = (r32((uint32_t)(EDX*4 + 0x108a2020)));
  /* 1087452d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874532 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874535 jae 0x1087454f */
  if (!C.cf) goto L_1087454f;
  /* 10874537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087453a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087453e je 0x1087454d */
  if (C.zf) goto L_1087454d;
  /* 10874540 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874543 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874546 push edx */
  push32((uint32_t)(EDX));
  /* 10874547 call dword ptr [0x108a33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c4))), 0x1087454du);
L_1087454d:;
  /* 1087454d jmp 0x1087451a */
  goto L_1087451a;
L_1087454f:;
  /* 1087454f push 2 */
  push32((uint32_t)(0x2u));
  /* 10874551 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874554 mov ecx, dword ptr [eax*4 + 0x108a2020] */
  ECX = (r32((uint32_t)(EAX*4 + 0x108a2020)));
  /* 1087455b push ecx */
  push32((uint32_t)(ECX));
  /* 1087455c call 0x10875030 */
  push32(0x10874561u); f_10875030();
  /* 10874561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874564 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874567 mov dword ptr [edx*4 + 0x108a2020], 0 */
  w32((uint32_t)(EDX*4 + 0x108a2020), (0x0u));
L_10874572:;
  /* 10874572 jmp 0x108744ef */
  goto L_108744ef;
L_10874577:;
  /* 10874577 mov esp, ebp */
  ESP = (EBP);
  /* 10874579 pop ebp */
  EBP = (pop32());
  /* 1087457a ret  */
  ESPCHK(0x108744e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004580 @ 0x10874580 (29 bytes, 13 insns) */
void f_10874580(void) {
  FTRACE(0x10874580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874580 push ebp */
  push32((uint32_t)(EBP));
  /* 10874581 mov ebp, esp */
  EBP = (ESP);
  /* 10874583 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874585 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874587 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874589 mov eax, dword ptr [0x108a0820] */
  EAX = (r32((uint32_t)(0x108a0820)));
  /* 1087458e push eax */
  push32((uint32_t)(EAX));
  /* 1087458f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874592 push ecx */
  push32((uint32_t)(ECX));
  /* 10874593 call 0x108745f0 */
  push32(0x10874598u); f_108745f0();
  /* 10874598 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087459b pop ebp */
  EBP = (pop32());
  /* 1087459c ret  */
  ESPCHK(0x10874580u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x108745a0 (35 bytes, 16 insns) */
void f_108745a0(void) {
  FTRACE(0x108745a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108745a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108745a1 mov ebp, esp */
  EBP = (ESP);
  /* 108745a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108745a6 push eax */
  push32((uint32_t)(EAX));
  /* 108745a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108745aa push ecx */
  push32((uint32_t)(ECX));
  /* 108745ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108745ae push edx */
  push32((uint32_t)(EDX));
  /* 108745af mov eax, dword ptr [0x108a0820] */
  EAX = (r32((uint32_t)(0x108a0820)));
  /* 108745b4 push eax */
  push32((uint32_t)(EAX));
  /* 108745b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108745b8 push ecx */
  push32((uint32_t)(ECX));
  /* 108745b9 call 0x108745f0 */
  push32(0x108745beu); f_108745f0();
  /* 108745be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108745c1 pop ebp */
  EBP = (pop32());
  /* 108745c2 ret  */
  ESPCHK(0x108745a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045d0 @ 0x108745d0 (27 bytes, 13 insns) */
void f_108745d0(void) {
  FTRACE(0x108745d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108745d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108745d1 mov ebp, esp */
  EBP = (ESP);
  /* 108745d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108745d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108745d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108745d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108745dc push eax */
  push32((uint32_t)(EAX));
  /* 108745dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108745e0 push ecx */
  push32((uint32_t)(ECX));
  /* 108745e1 call 0x108745f0 */
  push32(0x108745e6u); f_108745f0();
  /* 108745e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108745e9 pop ebp */
  EBP = (pop32());
  /* 108745ea ret  */
  ESPCHK(0x108745d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045f0 @ 0x108745f0 (94 bytes, 38 insns) */
void f_108745f0(void) {
  FTRACE(0x108745f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108745f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108745f1 mov ebp, esp */
  EBP = (ESP);
  /* 108745f3 push ecx */
  push32((uint32_t)(ECX));
L_108745f4:;
  /* 108745f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 108745f6 call 0x10877fa0 */
  push32(0x108745fbu); f_10877fa0();
  /* 108745fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108745fe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10874601 push eax */
  push32((uint32_t)(EAX));
  /* 10874602 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10874605 push ecx */
  push32((uint32_t)(ECX));
  /* 10874606 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874609 push edx */
  push32((uint32_t)(EDX));
  /* 1087460a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087460d push eax */
  push32((uint32_t)(EAX));
  /* 1087460e call 0x10874670 */
  push32(0x10874613u); f_10874670();
  /* 10874613 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874616 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10874619 push 9 */
  push32((uint32_t)(0x9u));
  /* 1087461b call 0x10878040 */
  push32(0x10874620u); f_10878040();
  /* 10874620 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874623 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874627 jne 0x1087462f */
  if (!C.zf) goto L_1087462f;
  /* 10874629 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087462d jne 0x10874634 */
  if (!C.zf) goto L_10874634;
L_1087462f:;
  /* 1087462f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874632 jmp 0x1087464a */
  goto L_1087464a;
L_10874634:;
  /* 10874634 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874637 push ecx */
  push32((uint32_t)(ECX));
  /* 10874638 call 0x108782e0 */
  push32(0x1087463du); f_108782e0();
  /* 1087463d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874642 jne 0x10874648 */
  if (!C.zf) goto L_10874648;
  /* 10874644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874646 jmp 0x1087464a */
  goto L_1087464a;
L_10874648:;
  /* 10874648 jmp 0x108745f4 */
  goto L_108745f4;
L_1087464a:;
  /* 1087464a mov esp, ebp */
  ESP = (EBP);
  /* 1087464c pop ebp */
  EBP = (pop32());
  /* 1087464d ret  */
  ESPCHK(0x108745f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004650 @ 0x10874650 (23 bytes, 11 insns) */
void f_10874650(void) {
  FTRACE(0x10874650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874650 push ebp */
  push32((uint32_t)(EBP));
  /* 10874651 mov ebp, esp */
  EBP = (ESP);
  /* 10874653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874655 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874657 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874659 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087465c push eax */
  push32((uint32_t)(EAX));
  /* 1087465d call 0x10874670 */
  push32(0x10874662u); f_10874670();
  /* 10874662 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874665 pop ebp */
  EBP = (pop32());
  /* 10874666 ret  */
  ESPCHK(0x10874650u, _esp0);
  ESP += 4; return;
}

/* FUN_10004670 @ 0x10874670 (787 bytes, 254 insns) */
void f_10874670(void) {
  FTRACE(0x10874670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874670 push ebp */
  push32((uint32_t)(EBP));
  /* 10874671 mov ebp, esp */
  EBP = (ESP);
  /* 10874673 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10874676 push ebx */
  push32((uint32_t)(EBX));
  /* 10874677 push esi */
  push32((uint32_t)(ESI));
  /* 10874678 push edi */
  push32((uint32_t)(EDI));
  /* 10874679 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10874680 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 10874685 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10874688 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087468a je 0x108746bc */
  if (C.zf) goto L_108746bc;
L_1087468c:;
  /* 1087468c call 0x10875740 */
  push32(0x10874691u); f_10875740();
  /* 10874691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874693 jne 0x108746b6 */
  if (!C.zf) goto L_108746b6;
  /* 10874695 push 0x1089b628 */
  push32((uint32_t)(0x1089b628u));
  /* 1087469a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087469c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 108746a1 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 108746a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108746a8 call 0x10873660 */
  push32(0x108746adu); f_10873660();
  /* 108746ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108746b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108746b3 jne 0x108746b6 */
  if (!C.zf) goto L_108746b6;
  /* 108746b5 int3  */
  x86_unimpl("int3 @ 0x108746b5");
L_108746b6:;
  /* 108746b6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108746b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108746ba jne 0x1087468c */
  if (!C.zf) goto L_1087468c;
L_108746bc:;
  /* 108746bc mov edx, dword ptr [0x1089ea88] */
  EDX = (r32((uint32_t)(0x1089ea88)));
  /* 108746c2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 108746c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108746c8 cmp eax, dword ptr [0x1089ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108746ce jne 0x108746d1 */
  if (!C.zf) goto L_108746d1;
  /* 108746d0 int3  */
  x86_unimpl("int3 @ 0x108746d0");
L_108746d1:;
  /* 108746d1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108746d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108746d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108746d8 push edx */
  push32((uint32_t)(EDX));
  /* 108746d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108746dc push eax */
  push32((uint32_t)(EAX));
  /* 108746dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108746e0 push ecx */
  push32((uint32_t)(ECX));
  /* 108746e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108746e4 push edx */
  push32((uint32_t)(EDX));
  /* 108746e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108746e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108746e9 call dword ptr [0x1089ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1089ec90))), 0x108746efu);
  /* 108746ef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108746f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108746f4 jne 0x10874754 */
  if (!C.zf) goto L_10874754;
  /* 108746f6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108746fa je 0x10874727 */
  if (C.zf) goto L_10874727;
L_108746fc:;
  /* 108746fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108746ff push eax */
  push32((uint32_t)(EAX));
  /* 10874700 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874703 push ecx */
  push32((uint32_t)(ECX));
  /* 10874704 push 0x1089b5e4 */
  push32((uint32_t)(0x1089b5e4u));
  /* 10874709 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087470b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087470d push 0 */
  push32((uint32_t)(0x0u));
  /* 1087470f push 0 */
  push32((uint32_t)(0x0u));
  /* 10874711 call 0x10873660 */
  push32(0x10874716u); f_10873660();
  /* 10874716 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874719 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087471c jne 0x1087471f */
  if (!C.zf) goto L_1087471f;
  /* 1087471e int3  */
  x86_unimpl("int3 @ 0x1087471e");
L_1087471f:;
  /* 1087471f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10874721 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10874723 jne 0x108746fc */
  if (!C.zf) goto L_108746fc;
  /* 10874725 jmp 0x1087474d */
  goto L_1087474d;
L_10874727:;
  /* 10874727 push 0x1089b5c0 */
  push32((uint32_t)(0x1089b5c0u));
  /* 1087472c push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 10874731 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874735 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874737 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874739 call 0x10873660 */
  push32(0x1087473eu); f_10873660();
  /* 1087473e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874741 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874744 jne 0x10874747 */
  if (!C.zf) goto L_10874747;
  /* 10874746 int3  */
  x86_unimpl("int3 @ 0x10874746");
L_10874747:;
  /* 10874747 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087474b jne 0x10874727 */
  if (!C.zf) goto L_10874727;
L_1087474d:;
  /* 1087474d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087474f jmp 0x1087497c */
  goto L_1087497c;
L_10874754:;
  /* 10874754 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874757 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087475d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874760 je 0x10874776 */
  if (C.zf) goto L_10874776;
  /* 10874762 mov edx, dword ptr [0x1089ea84] */
  EDX = (r32((uint32_t)(0x1089ea84)));
  /* 10874768 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1087476b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087476d jne 0x10874776 */
  if (!C.zf) goto L_10874776;
  /* 1087476f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10874776:;
  /* 10874776 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087477a ja 0x10874787 */
  if ((!C.cf&&!C.zf)) goto L_10874787;
  /* 1087477c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087477f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874782 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874785 jbe 0x108747b3 */
  if ((C.cf||C.zf)) goto L_108747b3;
L_10874787:;
  /* 10874787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087478a push ecx */
  push32((uint32_t)(ECX));
  /* 1087478b push 0x1089b598 */
  push32((uint32_t)(0x1089b598u));
  /* 10874790 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874792 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874794 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874796 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874798 call 0x10873660 */
  push32(0x1087479du); f_10873660();
  /* 1087479d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108747a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108747a3 jne 0x108747a6 */
  if (!C.zf) goto L_108747a6;
  /* 108747a5 int3  */
  x86_unimpl("int3 @ 0x108747a5");
L_108747a6:;
  /* 108747a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108747a8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108747aa jne 0x10874787 */
  if (!C.zf) goto L_10874787;
  /* 108747ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108747ae jmp 0x1087497c */
  goto L_1087497c;
L_108747b3:;
  /* 108747b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108747b6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108747bb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108747be je 0x10874800 */
  if (C.zf) goto L_10874800;
  /* 108747c0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108747c4 je 0x10874800 */
  if (C.zf) goto L_10874800;
  /* 108747c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108747c9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108747cf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108747d2 je 0x10874800 */
  if (C.zf) goto L_10874800;
  /* 108747d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108747d8 je 0x10874800 */
  if (C.zf) goto L_10874800;
L_108747da:;
  /* 108747da push 0x1089b564 */
  push32((uint32_t)(0x1089b564u));
  /* 108747df push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 108747e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108747e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108747e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108747ea push 1 */
  push32((uint32_t)(0x1u));
  /* 108747ec call 0x10873660 */
  push32(0x108747f1u); f_10873660();
  /* 108747f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108747f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108747f7 jne 0x108747fa */
  if (!C.zf) goto L_108747fa;
  /* 108747f9 int3  */
  x86_unimpl("int3 @ 0x108747f9");
L_108747fa:;
  /* 108747fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108747fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108747fe jne 0x108747da */
  if (!C.zf) goto L_108747da;
L_10874800:;
  /* 10874800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874803 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874806 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10874809 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087480c push ecx */
  push32((uint32_t)(ECX));
  /* 1087480d call 0x108783f0 */
  push32(0x10874812u); f_108783f0();
  /* 10874812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874815 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10874818 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087481c jne 0x10874825 */
  if (!C.zf) goto L_10874825;
  /* 1087481e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874820 jmp 0x1087497c */
  goto L_1087497c;
L_10874825:;
  /* 10874825 mov edx, dword ptr [0x1089ea88] */
  EDX = (r32((uint32_t)(0x1089ea88)));
  /* 1087482b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087482e mov dword ptr [0x1089ea88], edx */
  w32((uint32_t)(0x1089ea88), (EDX));
  /* 10874834 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874838 je 0x10874883 */
  if (C.zf) goto L_10874883;
  /* 1087483a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087483d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10874843 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874846 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1087484d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874850 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10874857 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087485a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10874861 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874867 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1087486a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087486d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10874874 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874877 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1087487e jmp 0x10874923 */
  goto L_10874923;
L_10874883:;
  /* 10874883 mov edx, dword ptr [0x108a0680] */
  EDX = (r32((uint32_t)(0x108a0680)));
  /* 10874889 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087488c mov dword ptr [0x108a0680], edx */
  w32((uint32_t)(0x108a0680), (EDX));
  /* 10874892 mov eax, dword ptr [0x108a0688] */
  EAX = (r32((uint32_t)(0x108a0688)));
  /* 10874897 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087489a mov dword ptr [0x108a0688], eax */
  w32((uint32_t)(0x108a0688), (EAX));
  /* 1087489f mov ecx, dword ptr [0x108a0688] */
  ECX = (r32((uint32_t)(0x108a0688)));
  /* 108748a5 cmp ecx, dword ptr [0x108a068c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108a068c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108748ab jbe 0x108748b9 */
  if ((C.cf||C.zf)) goto L_108748b9;
  /* 108748ad mov edx, dword ptr [0x108a0688] */
  EDX = (r32((uint32_t)(0x108a0688)));
  /* 108748b3 mov dword ptr [0x108a068c], edx */
  w32((uint32_t)(0x108a068c), (EDX));
L_108748b9:;
  /* 108748b9 cmp dword ptr [0x108a0684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108748c0 je 0x108748cf */
  if (C.zf) goto L_108748cf;
  /* 108748c2 mov eax, dword ptr [0x108a0684] */
  EAX = (r32((uint32_t)(0x108a0684)));
  /* 108748c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108748ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108748cd jmp 0x108748d8 */
  goto L_108748d8;
L_108748cf:;
  /* 108748cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108748d2 mov dword ptr [0x108a067c], edx */
  w32((uint32_t)(0x108a067c), (EDX));
L_108748d8:;
  /* 108748d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108748db mov ecx, dword ptr [0x108a0684] */
  ECX = (r32((uint32_t)(0x108a0684)));
  /* 108748e1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108748e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108748e6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 108748ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108748f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108748f3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 108748f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108748f9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108748fc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 108748ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874902 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874905 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10874908 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087490b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087490e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10874911 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874914 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874917 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1087491a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087491d mov dword ptr [0x108a0684], ecx */
  w32((uint32_t)(0x108a0684), (ECX));
L_10874923:;
  /* 10874923 push 4 */
  push32((uint32_t)(0x4u));
  /* 10874925 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10874927 mov dl, byte ptr [0x1089ea90] */
  DL = (r8((uint32_t)(0x1089ea90)));
  /* 1087492d push edx */
  push32((uint32_t)(EDX));
  /* 1087492e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874931 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874934 push eax */
  push32((uint32_t)(EAX));
  /* 10874935 call 0x10878310 */
  push32(0x1087493au); f_10878310();
  /* 1087493a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087493d push 4 */
  push32((uint32_t)(0x4u));
  /* 1087493f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10874941 mov cl, byte ptr [0x1089ea90] */
  CL = (r8((uint32_t)(0x1089ea90)));
  /* 10874947 push ecx */
  push32((uint32_t)(ECX));
  /* 10874948 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087494b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087494e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10874952 push ecx */
  push32((uint32_t)(ECX));
  /* 10874953 call 0x10878310 */
  push32(0x10874958u); f_10878310();
  /* 10874958 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087495b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087495e push edx */
  push32((uint32_t)(EDX));
  /* 1087495f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874961 mov al, byte ptr [0x1089ea92] */
  AL = (r8((uint32_t)(0x1089ea92)));
  /* 10874966 push eax */
  push32((uint32_t)(EAX));
  /* 10874967 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087496a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087496d push ecx */
  push32((uint32_t)(ECX));
  /* 1087496e call 0x10878310 */
  push32(0x10874973u); f_10878310();
  /* 10874973 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874976 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874979 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1087497c:;
  /* 1087497c pop edi */
  EDI = (pop32());
  /* 1087497d pop esi */
  ESI = (pop32());
  /* 1087497e pop ebx */
  EBX = (pop32());
  /* 1087497f mov esp, ebp */
  ESP = (EBP);
  /* 10874981 pop ebp */
  EBP = (pop32());
  /* 10874982 ret  */
  ESPCHK(0x10874670u, _esp0);
  ESP += 4; return;
}

/* FUN_10004990 @ 0x10874990 (27 bytes, 13 insns) */
void f_10874990(void) {
  FTRACE(0x10874990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874990 push ebp */
  push32((uint32_t)(EBP));
  /* 10874991 mov ebp, esp */
  EBP = (ESP);
  /* 10874993 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874995 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874997 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874999 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087499c push eax */
  push32((uint32_t)(EAX));
  /* 1087499d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108749a0 push ecx */
  push32((uint32_t)(ECX));
  /* 108749a1 call 0x108749b0 */
  push32(0x108749a6u); f_108749b0();
  /* 108749a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108749a9 pop ebp */
  EBP = (pop32());
  /* 108749aa ret  */
  ESPCHK(0x10874990u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x108749b0 (96 bytes, 37 insns) */
void f_108749b0(void) {
  FTRACE(0x108749b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108749b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108749b1 mov ebp, esp */
  EBP = (ESP);
  /* 108749b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108749b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108749b9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108749bd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 108749c0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108749c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108749c4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108749c7 push edx */
  push32((uint32_t)(EDX));
  /* 108749c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108749cb push eax */
  push32((uint32_t)(EAX));
  /* 108749cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108749cf push ecx */
  push32((uint32_t)(ECX));
  /* 108749d0 call 0x108745a0 */
  push32(0x108749d5u); f_108745a0();
  /* 108749d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108749d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108749db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108749df je 0x10874a09 */
  if (C.zf) goto L_10874a09;
  /* 108749e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108749e4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108749e7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108749ea add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108749ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108749f0:;
  /* 108749f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108749f3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108749f6 jae 0x10874a09 */
  if (!C.cf) goto L_10874a09;
  /* 108749f8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108749fb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108749fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874a01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874a04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10874a07 jmp 0x108749f0 */
  goto L_108749f0;
L_10874a09:;
  /* 10874a09 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874a0c mov esp, ebp */
  ESP = (EBP);
  /* 10874a0e pop ebp */
  EBP = (pop32());
  /* 10874a0f ret  */
  ESPCHK(0x108749b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a10 @ 0x10874a10 (27 bytes, 13 insns) */
void f_10874a10(void) {
  FTRACE(0x10874a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10874a11 mov ebp, esp */
  EBP = (ESP);
  /* 10874a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874a19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874a1c push eax */
  push32((uint32_t)(EAX));
  /* 10874a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874a20 push ecx */
  push32((uint32_t)(ECX));
  /* 10874a21 call 0x10874a30 */
  push32(0x10874a26u); f_10874a30();
  /* 10874a26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874a29 pop ebp */
  EBP = (pop32());
  /* 10874a2a ret  */
  ESPCHK(0x10874a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a30 @ 0x10874a30 (64 bytes, 27 insns) */
void f_10874a30(void) {
  FTRACE(0x10874a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10874a31 mov ebp, esp */
  EBP = (ESP);
  /* 10874a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10874a34 push 9 */
  push32((uint32_t)(0x9u));
  /* 10874a36 call 0x10877fa0 */
  push32(0x10874a3bu); f_10877fa0();
  /* 10874a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874a3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10874a40 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10874a43 push eax */
  push32((uint32_t)(EAX));
  /* 10874a44 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10874a47 push ecx */
  push32((uint32_t)(ECX));
  /* 10874a48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874a4b push edx */
  push32((uint32_t)(EDX));
  /* 10874a4c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874a4f push eax */
  push32((uint32_t)(EAX));
  /* 10874a50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10874a54 call 0x10874a70 */
  push32(0x10874a59u); f_10874a70();
  /* 10874a59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874a5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10874a5f push 9 */
  push32((uint32_t)(0x9u));
  /* 10874a61 call 0x10878040 */
  push32(0x10874a66u); f_10878040();
  /* 10874a66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874a69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874a6c mov esp, ebp */
  ESP = (EBP);
  /* 10874a6e pop ebp */
  EBP = (pop32());
  /* 10874a6f ret  */
  ESPCHK(0x10874a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a70 @ 0x10874a70 (1297 bytes, 431 insns) */
void f_10874a70(void) {
  FTRACE(0x10874a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10874a71 mov ebp, esp */
  EBP = (ESP);
  /* 10874a73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10874a76 push ebx */
  push32((uint32_t)(EBX));
  /* 10874a77 push esi */
  push32((uint32_t)(ESI));
  /* 10874a78 push edi */
  push32((uint32_t)(EDI));
  /* 10874a79 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10874a80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874a84 jne 0x10874aa3 */
  if (!C.zf) goto L_10874aa3;
  /* 10874a86 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10874a89 push eax */
  push32((uint32_t)(EAX));
  /* 10874a8a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10874a8d push ecx */
  push32((uint32_t)(ECX));
  /* 10874a8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874a91 push edx */
  push32((uint32_t)(EDX));
  /* 10874a92 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874a95 push eax */
  push32((uint32_t)(EAX));
  /* 10874a96 call 0x108745a0 */
  push32(0x10874a9bu); f_108745a0();
  /* 10874a9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874a9e jmp 0x10874f7a */
  goto L_10874f7a;
L_10874aa3:;
  /* 10874aa3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874aa7 je 0x10874ac6 */
  if (C.zf) goto L_10874ac6;
  /* 10874aa9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874aad jne 0x10874ac6 */
  if (!C.zf) goto L_10874ac6;
  /* 10874aaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874ab2 push ecx */
  push32((uint32_t)(ECX));
  /* 10874ab3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874ab6 push edx */
  push32((uint32_t)(EDX));
  /* 10874ab7 call 0x10875030 */
  push32(0x10874abcu); f_10875030();
  /* 10874abc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874abf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874ac1 jmp 0x10874f7a */
  goto L_10874f7a;
L_10874ac6:;
  /* 10874ac6 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 10874acb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10874ace test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874ad0 je 0x10874b02 */
  if (C.zf) goto L_10874b02;
L_10874ad2:;
  /* 10874ad2 call 0x10875740 */
  push32(0x10874ad7u); f_10875740();
  /* 10874ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874ad9 jne 0x10874afc */
  if (!C.zf) goto L_10874afc;
  /* 10874adb push 0x1089b628 */
  push32((uint32_t)(0x1089b628u));
  /* 10874ae0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874ae2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10874ae7 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10874aec push 2 */
  push32((uint32_t)(0x2u));
  /* 10874aee call 0x10873660 */
  push32(0x10874af3u); f_10873660();
  /* 10874af3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874af6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874af9 jne 0x10874afc */
  if (!C.zf) goto L_10874afc;
  /* 10874afb int3  */
  x86_unimpl("int3 @ 0x10874afb");
L_10874afc:;
  /* 10874afc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10874afe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10874b00 jne 0x10874ad2 */
  if (!C.zf) goto L_10874ad2;
L_10874b02:;
  /* 10874b02 mov edx, dword ptr [0x1089ea88] */
  EDX = (r32((uint32_t)(0x1089ea88)));
  /* 10874b08 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10874b0b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10874b0e cmp eax, dword ptr [0x1089ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874b14 jne 0x10874b17 */
  if (!C.zf) goto L_10874b17;
  /* 10874b16 int3  */
  x86_unimpl("int3 @ 0x10874b16");
L_10874b17:;
  /* 10874b17 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10874b1a push ecx */
  push32((uint32_t)(ECX));
  /* 10874b1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10874b1e push edx */
  push32((uint32_t)(EDX));
  /* 10874b1f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10874b22 push eax */
  push32((uint32_t)(EAX));
  /* 10874b23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874b26 push ecx */
  push32((uint32_t)(ECX));
  /* 10874b27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874b2a push edx */
  push32((uint32_t)(EDX));
  /* 10874b2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874b2e push eax */
  push32((uint32_t)(EAX));
  /* 10874b2f push 2 */
  push32((uint32_t)(0x2u));
  /* 10874b31 call dword ptr [0x1089ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1089ec90))), 0x10874b37u);
  /* 10874b37 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874b3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874b3c jne 0x10874b9c */
  if (!C.zf) goto L_10874b9c;
  /* 10874b3e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874b42 je 0x10874b6f */
  if (C.zf) goto L_10874b6f;
L_10874b44:;
  /* 10874b44 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10874b47 push ecx */
  push32((uint32_t)(ECX));
  /* 10874b48 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10874b4b push edx */
  push32((uint32_t)(EDX));
  /* 10874b4c push 0x1089b7a4 */
  push32((uint32_t)(0x1089b7a4u));
  /* 10874b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874b53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874b55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874b57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874b59 call 0x10873660 */
  push32(0x10874b5eu); f_10873660();
  /* 10874b5e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874b61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874b64 jne 0x10874b67 */
  if (!C.zf) goto L_10874b67;
  /* 10874b66 int3  */
  x86_unimpl("int3 @ 0x10874b66");
L_10874b67:;
  /* 10874b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874b6b jne 0x10874b44 */
  if (!C.zf) goto L_10874b44;
  /* 10874b6d jmp 0x10874b95 */
  goto L_10874b95;
L_10874b6f:;
  /* 10874b6f push 0x1089b780 */
  push32((uint32_t)(0x1089b780u));
  /* 10874b74 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 10874b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10874b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10874b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10874b81 call 0x10873660 */
  push32(0x10874b86u); f_10873660();
  /* 10874b86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874b89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874b8c jne 0x10874b8f */
  if (!C.zf) goto L_10874b8f;
  /* 10874b8e int3  */
  x86_unimpl("int3 @ 0x10874b8e");
L_10874b8f:;
  /* 10874b8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10874b91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10874b93 jne 0x10874b6f */
  if (!C.zf) goto L_10874b6f;
L_10874b95:;
  /* 10874b95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874b97 jmp 0x10874f7a */
  goto L_10874f7a;
L_10874b9c:;
  /* 10874b9c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874ba0 jbe 0x10874bce */
  if ((C.cf||C.zf)) goto L_10874bce;
L_10874ba2:;
  /* 10874ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874ba5 push edx */
  push32((uint32_t)(EDX));
  /* 10874ba6 push 0x1089b750 */
  push32((uint32_t)(0x1089b750u));
  /* 10874bab push 0 */
  push32((uint32_t)(0x0u));
  /* 10874bad push 0 */
  push32((uint32_t)(0x0u));
  /* 10874baf push 0 */
  push32((uint32_t)(0x0u));
  /* 10874bb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874bb3 call 0x10873660 */
  push32(0x10874bb8u); f_10873660();
  /* 10874bb8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874bbb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874bbe jne 0x10874bc1 */
  if (!C.zf) goto L_10874bc1;
  /* 10874bc0 int3  */
  x86_unimpl("int3 @ 0x10874bc0");
L_10874bc1:;
  /* 10874bc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874bc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874bc5 jne 0x10874ba2 */
  if (!C.zf) goto L_10874ba2;
  /* 10874bc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874bc9 jmp 0x10874f7a */
  goto L_10874f7a;
L_10874bce:;
  /* 10874bce cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874bd2 je 0x10874c16 */
  if (C.zf) goto L_10874c16;
  /* 10874bd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874bd7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10874bdd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874be0 je 0x10874c16 */
  if (C.zf) goto L_10874c16;
  /* 10874be2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874be5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10874beb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874bee je 0x10874c16 */
  if (C.zf) goto L_10874c16;
L_10874bf0:;
  /* 10874bf0 push 0x1089b564 */
  push32((uint32_t)(0x1089b564u));
  /* 10874bf5 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 10874bfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10874bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10874bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10874c00 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874c02 call 0x10873660 */
  push32(0x10874c07u); f_10873660();
  /* 10874c07 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874c0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874c0d jne 0x10874c10 */
  if (!C.zf) goto L_10874c10;
  /* 10874c0f int3  */
  x86_unimpl("int3 @ 0x10874c0f");
L_10874c10:;
  /* 10874c10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874c12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874c14 jne 0x10874bf0 */
  if (!C.zf) goto L_10874bf0;
L_10874c16:;
  /* 10874c16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874c19 push ecx */
  push32((uint32_t)(ECX));
  /* 10874c1a call 0x10875ba0 */
  push32(0x10874c1fu); f_10875ba0();
  /* 10874c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874c22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10874c24 jne 0x10874c47 */
  if (!C.zf) goto L_10874c47;
  /* 10874c26 push 0x1089b72c */
  push32((uint32_t)(0x1089b72cu));
  /* 10874c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10874c2d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10874c32 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10874c37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10874c39 call 0x10873660 */
  push32(0x10874c3eu); f_10873660();
  /* 10874c3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874c41 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874c44 jne 0x10874c47 */
  if (!C.zf) goto L_10874c47;
  /* 10874c46 int3  */
  x86_unimpl("int3 @ 0x10874c46");
L_10874c47:;
  /* 10874c47 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10874c49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10874c4b jne 0x10874c16 */
  if (!C.zf) goto L_10874c16;
  /* 10874c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874c50 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10874c53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10874c56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874c59 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874c5d jne 0x10874c66 */
  if (!C.zf) goto L_10874c66;
  /* 10874c5f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10874c66:;
  /* 10874c66 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874c6a je 0x10874caa */
  if (C.zf) goto L_10874caa;
L_10874c6c:;
  /* 10874c6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874c6f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874c76 jne 0x10874c81 */
  if (!C.zf) goto L_10874c81;
  /* 10874c78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874c7b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874c7f je 0x10874ca2 */
  if (C.zf) goto L_10874ca2;
L_10874c81:;
  /* 10874c81 push 0x1089b6e4 */
  push32((uint32_t)(0x1089b6e4u));
  /* 10874c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874c88 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10874c8d push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10874c92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10874c94 call 0x10873660 */
  push32(0x10874c99u); f_10873660();
  /* 10874c99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874c9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874c9f jne 0x10874ca2 */
  if (!C.zf) goto L_10874ca2;
  /* 10874ca1 int3  */
  x86_unimpl("int3 @ 0x10874ca1");
L_10874ca2:;
  /* 10874ca2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10874ca4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10874ca6 jne 0x10874c6c */
  if (!C.zf) goto L_10874c6c;
  /* 10874ca8 jmp 0x10874d0e */
  goto L_10874d0e;
L_10874caa:;
  /* 10874caa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874cad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10874cb0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10874cb5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874cb8 jne 0x10874ccf */
  if (!C.zf) goto L_10874ccf;
  /* 10874cba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874cbd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10874cc3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874cc6 jne 0x10874ccf */
  if (!C.zf) goto L_10874ccf;
  /* 10874cc8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10874ccf:;
  /* 10874ccf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874cd2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10874cd5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10874cda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874cdd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10874ce3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874ce5 je 0x10874d08 */
  if (C.zf) goto L_10874d08;
  /* 10874ce7 push 0x1089b6a8 */
  push32((uint32_t)(0x1089b6a8u));
  /* 10874cec push 0 */
  push32((uint32_t)(0x0u));
  /* 10874cee push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10874cf3 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10874cf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10874cfa call 0x10873660 */
  push32(0x10874cffu); f_10873660();
  /* 10874cff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874d02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874d05 jne 0x10874d08 */
  if (!C.zf) goto L_10874d08;
  /* 10874d07 int3  */
  x86_unimpl("int3 @ 0x10874d07");
L_10874d08:;
  /* 10874d08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10874d0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10874d0c jne 0x10874ccf */
  if (!C.zf) goto L_10874ccf;
L_10874d0e:;
  /* 10874d0e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874d12 je 0x10874d39 */
  if (C.zf) goto L_10874d39;
  /* 10874d14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874d17 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874d1a push eax */
  push32((uint32_t)(EAX));
  /* 10874d1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874d1e push ecx */
  push32((uint32_t)(ECX));
  /* 10874d1f call 0x10878520 */
  push32(0x10874d24u); f_10878520();
  /* 10874d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874d27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10874d2a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874d2e jne 0x10874d37 */
  if (!C.zf) goto L_10874d37;
  /* 10874d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874d32 jmp 0x10874f7a */
  goto L_10874f7a;
L_10874d37:;
  /* 10874d37 jmp 0x10874d5c */
  goto L_10874d5c;
L_10874d39:;
  /* 10874d39 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874d3c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874d3f push edx */
  push32((uint32_t)(EDX));
  /* 10874d40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10874d43 push eax */
  push32((uint32_t)(EAX));
  /* 10874d44 call 0x10878470 */
  push32(0x10874d49u); f_10878470();
  /* 10874d49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874d4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10874d4f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874d53 jne 0x10874d5c */
  if (!C.zf) goto L_10874d5c;
  /* 10874d55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874d57 jmp 0x10874f7a */
  goto L_10874f7a;
L_10874d5c:;
  /* 10874d5c mov ecx, dword ptr [0x1089ea88] */
  ECX = (r32((uint32_t)(0x1089ea88)));
  /* 10874d62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874d65 mov dword ptr [0x1089ea88], ecx */
  w32((uint32_t)(0x1089ea88), (ECX));
  /* 10874d6b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874d6f jne 0x10874dc7 */
  if (!C.zf) goto L_10874dc7;
  /* 10874d71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874d74 mov eax, dword ptr [0x108a0680] */
  EAX = (r32((uint32_t)(0x108a0680)));
  /* 10874d79 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10874d7c mov dword ptr [0x108a0680], eax */
  w32((uint32_t)(0x108a0680), (EAX));
  /* 10874d81 mov ecx, dword ptr [0x108a0680] */
  ECX = (r32((uint32_t)(0x108a0680)));
  /* 10874d87 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874d8a mov dword ptr [0x108a0680], ecx */
  w32((uint32_t)(0x108a0680), (ECX));
  /* 10874d90 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874d93 mov eax, dword ptr [0x108a0688] */
  EAX = (r32((uint32_t)(0x108a0688)));
  /* 10874d98 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10874d9b mov dword ptr [0x108a0688], eax */
  w32((uint32_t)(0x108a0688), (EAX));
  /* 10874da0 mov ecx, dword ptr [0x108a0688] */
  ECX = (r32((uint32_t)(0x108a0688)));
  /* 10874da6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874da9 mov dword ptr [0x108a0688], ecx */
  w32((uint32_t)(0x108a0688), (ECX));
  /* 10874daf mov edx, dword ptr [0x108a0688] */
  EDX = (r32((uint32_t)(0x108a0688)));
  /* 10874db5 cmp edx, dword ptr [0x108a068c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108a068c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874dbb jbe 0x10874dc7 */
  if ((C.cf||C.zf)) goto L_10874dc7;
  /* 10874dbd mov eax, dword ptr [0x108a0688] */
  EAX = (r32((uint32_t)(0x108a0688)));
  /* 10874dc2 mov dword ptr [0x108a068c], eax */
  w32((uint32_t)(0x108a068c), (EAX));
L_10874dc7:;
  /* 10874dc7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874dca add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874dcd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10874dd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874dd3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874dd6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874dd9 jbe 0x10874dff */
  if ((C.cf||C.zf)) goto L_10874dff;
  /* 10874ddb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874dde mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874de1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10874de4 push edx */
  push32((uint32_t)(EDX));
  /* 10874de5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874de7 mov al, byte ptr [0x1089ea92] */
  AL = (r8((uint32_t)(0x1089ea92)));
  /* 10874dec push eax */
  push32((uint32_t)(EAX));
  /* 10874ded mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874df0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874df3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874df6 push edx */
  push32((uint32_t)(EDX));
  /* 10874df7 call 0x10878310 */
  push32(0x10874dfcu); f_10878310();
  /* 10874dfc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10874dff:;
  /* 10874dff push 4 */
  push32((uint32_t)(0x4u));
  /* 10874e01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10874e03 mov al, byte ptr [0x1089ea90] */
  AL = (r8((uint32_t)(0x1089ea90)));
  /* 10874e08 push eax */
  push32((uint32_t)(EAX));
  /* 10874e09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874e0c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10874e0f push ecx */
  push32((uint32_t)(ECX));
  /* 10874e10 call 0x10878310 */
  push32(0x10874e15u); f_10878310();
  /* 10874e15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874e18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874e1c jne 0x10874e39 */
  if (!C.zf) goto L_10874e39;
  /* 10874e1e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874e21 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10874e24 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10874e27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874e2a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10874e2d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10874e30 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874e33 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10874e36 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10874e39:;
  /* 10874e39 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874e3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874e3f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10874e42:;
  /* 10874e42 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874e46 jne 0x10874e77 */
  if (!C.zf) goto L_10874e77;
  /* 10874e48 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874e4c jne 0x10874e56 */
  if (!C.zf) goto L_10874e56;
  /* 10874e4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874e51 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874e54 je 0x10874e77 */
  if (C.zf) goto L_10874e77;
L_10874e56:;
  /* 10874e56 push 0x1089b674 */
  push32((uint32_t)(0x1089b674u));
  /* 10874e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10874e5d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10874e62 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10874e67 push 2 */
  push32((uint32_t)(0x2u));
  /* 10874e69 call 0x10873660 */
  push32(0x10874e6eu); f_10873660();
  /* 10874e6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874e71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874e74 jne 0x10874e77 */
  if (!C.zf) goto L_10874e77;
  /* 10874e76 int3  */
  x86_unimpl("int3 @ 0x10874e76");
L_10874e77:;
  /* 10874e77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10874e79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10874e7b jne 0x10874e42 */
  if (!C.zf) goto L_10874e42;
  /* 10874e7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874e80 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874e83 je 0x10874e8b */
  if (C.zf) goto L_10874e8b;
  /* 10874e85 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874e89 je 0x10874e93 */
  if (C.zf) goto L_10874e93;
L_10874e8b:;
  /* 10874e8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874e8e jmp 0x10874f7a */
  goto L_10874f7a;
L_10874e93:;
  /* 10874e93 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874e96 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874e99 je 0x10874eab */
  if (C.zf) goto L_10874eab;
  /* 10874e9b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874e9e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10874ea0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874ea3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10874ea6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10874ea9 jmp 0x10874ee7 */
  goto L_10874ee7;
L_10874eab:;
  /* 10874eab mov eax, dword ptr [0x108a067c] */
  EAX = (r32((uint32_t)(0x108a067c)));
  /* 10874eb0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874eb3 je 0x10874ed6 */
  if (C.zf) goto L_10874ed6;
  /* 10874eb5 push 0x1089b658 */
  push32((uint32_t)(0x1089b658u));
  /* 10874eba push 0 */
  push32((uint32_t)(0x0u));
  /* 10874ebc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10874ec1 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10874ec6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10874ec8 call 0x10873660 */
  push32(0x10874ecdu); f_10873660();
  /* 10874ecd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874ed0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874ed3 jne 0x10874ed6 */
  if (!C.zf) goto L_10874ed6;
  /* 10874ed5 int3  */
  x86_unimpl("int3 @ 0x10874ed5");
L_10874ed6:;
  /* 10874ed6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10874ed8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10874eda jne 0x10874eab */
  if (!C.zf) goto L_10874eab;
  /* 10874edc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874edf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10874ee2 mov dword ptr [0x108a067c], eax */
  w32((uint32_t)(0x108a067c), (EAX));
L_10874ee7:;
  /* 10874ee7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874eea cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874eee je 0x10874eff */
  if (C.zf) goto L_10874eff;
  /* 10874ef0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874ef3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10874ef6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874ef9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10874efb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10874efd jmp 0x10874f3a */
  goto L_10874f3a;
L_10874eff:;
  /* 10874eff mov eax, dword ptr [0x108a0684] */
  EAX = (r32((uint32_t)(0x108a0684)));
  /* 10874f04 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874f07 je 0x10874f2a */
  if (C.zf) goto L_10874f2a;
  /* 10874f09 push 0x1089b63c */
  push32((uint32_t)(0x1089b63cu));
  /* 10874f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10874f10 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10874f15 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10874f1a push 2 */
  push32((uint32_t)(0x2u));
  /* 10874f1c call 0x10873660 */
  push32(0x10874f21u); f_10873660();
  /* 10874f21 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874f24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874f27 jne 0x10874f2a */
  if (!C.zf) goto L_10874f2a;
  /* 10874f29 int3  */
  x86_unimpl("int3 @ 0x10874f29");
L_10874f2a:;
  /* 10874f2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10874f2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10874f2e jne 0x10874eff */
  if (!C.zf) goto L_10874eff;
  /* 10874f30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874f33 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10874f35 mov dword ptr [0x108a0684], eax */
  w32((uint32_t)(0x108a0684), (EAX));
L_10874f3a:;
  /* 10874f3a cmp dword ptr [0x108a0684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10874f41 je 0x10874f51 */
  if (C.zf) goto L_10874f51;
  /* 10874f43 mov ecx, dword ptr [0x108a0684] */
  ECX = (r32((uint32_t)(0x108a0684)));
  /* 10874f49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874f4c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10874f4f jmp 0x10874f59 */
  goto L_10874f59;
L_10874f51:;
  /* 10874f51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874f54 mov dword ptr [0x108a067c], eax */
  w32((uint32_t)(0x108a067c), (EAX));
L_10874f59:;
  /* 10874f59 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874f5c mov edx, dword ptr [0x108a0684] */
  EDX = (r32((uint32_t)(0x108a0684)));
  /* 10874f62 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10874f64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874f67 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10874f6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10874f71 mov dword ptr [0x108a0684], ecx */
  w32((uint32_t)(0x108a0684), (ECX));
  /* 10874f77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10874f7a:;
  /* 10874f7a pop edi */
  EDI = (pop32());
  /* 10874f7b pop esi */
  ESI = (pop32());
  /* 10874f7c pop ebx */
  EBX = (pop32());
  /* 10874f7d mov esp, ebp */
  ESP = (EBP);
  /* 10874f7f pop ebp */
  EBP = (pop32());
  /* 10874f80 ret  */
  ESPCHK(0x10874a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f90 @ 0x10874f90 (27 bytes, 13 insns) */
void f_10874f90(void) {
  FTRACE(0x10874f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10874f91 mov ebp, esp */
  EBP = (ESP);
  /* 10874f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10874f97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874f99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874f9c push eax */
  push32((uint32_t)(EAX));
  /* 10874f9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10874fa1 call 0x10874fb0 */
  push32(0x10874fa6u); f_10874fb0();
  /* 10874fa6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874fa9 pop ebp */
  EBP = (pop32());
  /* 10874faa ret  */
  ESPCHK(0x10874f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fb0 @ 0x10874fb0 (64 bytes, 27 insns) */
void f_10874fb0(void) {
  FTRACE(0x10874fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10874fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10874fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10874fb4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10874fb6 call 0x10877fa0 */
  push32(0x10874fbbu); f_10877fa0();
  /* 10874fbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874fbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10874fc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10874fc3 push eax */
  push32((uint32_t)(EAX));
  /* 10874fc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10874fc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10874fc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10874fcb push edx */
  push32((uint32_t)(EDX));
  /* 10874fcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10874fcf push eax */
  push32((uint32_t)(EAX));
  /* 10874fd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10874fd4 call 0x10874a70 */
  push32(0x10874fd9u); f_10874a70();
  /* 10874fd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874fdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10874fdf push 9 */
  push32((uint32_t)(0x9u));
  /* 10874fe1 call 0x10878040 */
  push32(0x10874fe6u); f_10878040();
  /* 10874fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10874fe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10874fec mov esp, ebp */
  ESP = (EBP);
  /* 10874fee pop ebp */
  EBP = (pop32());
  /* 10874fef ret  */
  ESPCHK(0x10874fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ff0 @ 0x10874ff0 (19 bytes, 9 insns) */
void f_10874ff0(void) {
  FTRACE(0x10874ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10874ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10874ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10874ff3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10874ff5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10874ff8 push eax */
  push32((uint32_t)(EAX));
  /* 10874ff9 call 0x10875030 */
  push32(0x10874ffeu); f_10875030();
  /* 10874ffe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875001 pop ebp */
  EBP = (pop32());
  /* 10875002 ret  */
  ESPCHK(0x10874ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005010 @ 0x10875010 (19 bytes, 9 insns) */
void f_10875010(void) {
  FTRACE(0x10875010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875010 push ebp */
  push32((uint32_t)(EBP));
  /* 10875011 mov ebp, esp */
  EBP = (ESP);
  /* 10875013 push 1 */
  push32((uint32_t)(0x1u));
  /* 10875015 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875018 push eax */
  push32((uint32_t)(EAX));
  /* 10875019 call 0x10875060 */
  push32(0x1087501eu); f_10875060();
  /* 1087501e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875021 pop ebp */
  EBP = (pop32());
  /* 10875022 ret  */
  ESPCHK(0x10875010u, _esp0);
  ESP += 4; return;
}

/* FUN_10005030 @ 0x10875030 (41 bytes, 16 insns) */
void f_10875030(void) {
  FTRACE(0x10875030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875030 push ebp */
  push32((uint32_t)(EBP));
  /* 10875031 mov ebp, esp */
  EBP = (ESP);
  /* 10875033 push 9 */
  push32((uint32_t)(0x9u));
  /* 10875035 call 0x10877fa0 */
  push32(0x1087503au); f_10877fa0();
  /* 1087503a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087503d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10875040 push eax */
  push32((uint32_t)(EAX));
  /* 10875041 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875044 push ecx */
  push32((uint32_t)(ECX));
  /* 10875045 call 0x10875060 */
  push32(0x1087504au); f_10875060();
  /* 1087504a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087504d push 9 */
  push32((uint32_t)(0x9u));
  /* 1087504f call 0x10878040 */
  push32(0x10875054u); f_10878040();
  /* 10875054 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875057 pop ebp */
  EBP = (pop32());
  /* 10875058 ret  */
  ESPCHK(0x10875030u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x10875060 (1004 bytes, 342 insns) */
void f_10875060(void) {
  FTRACE(0x10875060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875060 push ebp */
  push32((uint32_t)(EBP));
  /* 10875061 mov ebp, esp */
  EBP = (ESP);
  /* 10875063 push ecx */
  push32((uint32_t)(ECX));
  /* 10875064 push ebx */
  push32((uint32_t)(EBX));
  /* 10875065 push esi */
  push32((uint32_t)(ESI));
  /* 10875066 push edi */
  push32((uint32_t)(EDI));
  /* 10875067 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 1087506c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1087506f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875071 je 0x108750a3 */
  if (C.zf) goto L_108750a3;
L_10875073:;
  /* 10875073 call 0x10875740 */
  push32(0x10875078u); f_10875740();
  /* 10875078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087507a jne 0x1087509d */
  if (!C.zf) goto L_1087509d;
  /* 1087507c push 0x1089b628 */
  push32((uint32_t)(0x1089b628u));
  /* 10875081 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875083 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10875088 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 1087508d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087508f call 0x10873660 */
  push32(0x10875094u); f_10873660();
  /* 10875094 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875097 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087509a jne 0x1087509d */
  if (!C.zf) goto L_1087509d;
  /* 1087509c int3  */
  x86_unimpl("int3 @ 0x1087509c");
L_1087509d:;
  /* 1087509d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087509f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108750a1 jne 0x10875073 */
  if (!C.zf) goto L_10875073;
L_108750a3:;
  /* 108750a3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108750a7 jne 0x108750ae */
  if (!C.zf) goto L_108750ae;
  /* 108750a9 jmp 0x10875445 */
  goto L_10875445;
L_108750ae:;
  /* 108750ae push 0 */
  push32((uint32_t)(0x0u));
  /* 108750b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108750b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108750b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108750b7 push edx */
  push32((uint32_t)(EDX));
  /* 108750b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108750ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108750bd push eax */
  push32((uint32_t)(EAX));
  /* 108750be push 3 */
  push32((uint32_t)(0x3u));
  /* 108750c0 call dword ptr [0x1089ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1089ec90))), 0x108750c6u);
  /* 108750c6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108750c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108750cb jne 0x108750f8 */
  if (!C.zf) goto L_108750f8;
L_108750cd:;
  /* 108750cd push 0x1089b8ec */
  push32((uint32_t)(0x1089b8ecu));
  /* 108750d2 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 108750d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108750d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108750db push 0 */
  push32((uint32_t)(0x0u));
  /* 108750dd push 0 */
  push32((uint32_t)(0x0u));
  /* 108750df call 0x10873660 */
  push32(0x108750e4u); f_10873660();
  /* 108750e4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108750e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108750ea jne 0x108750ed */
  if (!C.zf) goto L_108750ed;
  /* 108750ec int3  */
  x86_unimpl("int3 @ 0x108750ec");
L_108750ed:;
  /* 108750ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108750ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108750f1 jne 0x108750cd */
  if (!C.zf) goto L_108750cd;
  /* 108750f3 jmp 0x10875445 */
  goto L_10875445;
L_108750f8:;
  /* 108750f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108750fb push edx */
  push32((uint32_t)(EDX));
  /* 108750fc call 0x10875ba0 */
  push32(0x10875101u); f_10875ba0();
  /* 10875101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875106 jne 0x10875129 */
  if (!C.zf) goto L_10875129;
  /* 10875108 push 0x1089b72c */
  push32((uint32_t)(0x1089b72cu));
  /* 1087510d push 0 */
  push32((uint32_t)(0x0u));
  /* 1087510f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10875114 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10875119 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087511b call 0x10873660 */
  push32(0x10875120u); f_10873660();
  /* 10875120 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875123 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875126 jne 0x10875129 */
  if (!C.zf) goto L_10875129;
  /* 10875128 int3  */
  x86_unimpl("int3 @ 0x10875128");
L_10875129:;
  /* 10875129 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087512b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087512d jne 0x108750f8 */
  if (!C.zf) goto L_108750f8;
  /* 1087512f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875132 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875135 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10875138:;
  /* 10875138 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087513b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1087513e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10875143 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875146 je 0x1087518b */
  if (C.zf) goto L_1087518b;
  /* 10875148 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087514b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087514f je 0x1087518b */
  if (C.zf) goto L_1087518b;
  /* 10875151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875154 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10875157 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087515c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087515f je 0x1087518b */
  if (C.zf) goto L_1087518b;
  /* 10875161 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875164 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875168 je 0x1087518b */
  if (C.zf) goto L_1087518b;
  /* 1087516a push 0x1089b8c4 */
  push32((uint32_t)(0x1089b8c4u));
  /* 1087516f push 0 */
  push32((uint32_t)(0x0u));
  /* 10875171 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10875176 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 1087517b push 2 */
  push32((uint32_t)(0x2u));
  /* 1087517d call 0x10873660 */
  push32(0x10875182u); f_10873660();
  /* 10875182 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875185 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875188 jne 0x1087518b */
  if (!C.zf) goto L_1087518b;
  /* 1087518a int3  */
  x86_unimpl("int3 @ 0x1087518a");
L_1087518b:;
  /* 1087518b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087518d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087518f jne 0x10875138 */
  if (!C.zf) goto L_10875138;
  /* 10875191 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 10875196 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10875199 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087519b jne 0x10875266 */
  if (!C.zf) goto L_10875266;
  /* 108751a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 108751a3 mov cl, byte ptr [0x1089ea90] */
  CL = (r8((uint32_t)(0x1089ea90)));
  /* 108751a9 push ecx */
  push32((uint32_t)(ECX));
  /* 108751aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108751ad add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108751b0 push edx */
  push32((uint32_t)(EDX));
  /* 108751b1 call 0x108756b0 */
  push32(0x108751b6u); f_108756b0();
  /* 108751b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108751b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108751bb jne 0x10875200 */
  if (!C.zf) goto L_10875200;
L_108751bd:;
  /* 108751bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108751c0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108751c3 push eax */
  push32((uint32_t)(EAX));
  /* 108751c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108751c7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108751ca push edx */
  push32((uint32_t)(EDX));
  /* 108751cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108751ce mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108751d1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108751d7 mov edx, dword ptr [ecx*4 + 0x1089ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089ea94)));
  /* 108751de push edx */
  push32((uint32_t)(EDX));
  /* 108751df push 0x1089b898 */
  push32((uint32_t)(0x1089b898u));
  /* 108751e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108751e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108751e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108751ea push 1 */
  push32((uint32_t)(0x1u));
  /* 108751ec call 0x10873660 */
  push32(0x108751f1u); f_10873660();
  /* 108751f1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108751f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108751f7 jne 0x108751fa */
  if (!C.zf) goto L_108751fa;
  /* 108751f9 int3  */
  x86_unimpl("int3 @ 0x108751f9");
L_108751fa:;
  /* 108751fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108751fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108751fe jne 0x108751bd */
  if (!C.zf) goto L_108751bd;
L_10875200:;
  /* 10875200 push 4 */
  push32((uint32_t)(0x4u));
  /* 10875202 mov cl, byte ptr [0x1089ea90] */
  CL = (r8((uint32_t)(0x1089ea90)));
  /* 10875208 push ecx */
  push32((uint32_t)(ECX));
  /* 10875209 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087520c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1087520f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875212 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10875216 push edx */
  push32((uint32_t)(EDX));
  /* 10875217 call 0x108756b0 */
  push32(0x1087521cu); f_108756b0();
  /* 1087521c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087521f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875221 jne 0x10875266 */
  if (!C.zf) goto L_10875266;
L_10875223:;
  /* 10875223 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875226 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875229 push eax */
  push32((uint32_t)(EAX));
  /* 1087522a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087522d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10875230 push edx */
  push32((uint32_t)(EDX));
  /* 10875231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875234 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10875237 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087523d mov edx, dword ptr [ecx*4 + 0x1089ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089ea94)));
  /* 10875244 push edx */
  push32((uint32_t)(EDX));
  /* 10875245 push 0x1089b86c */
  push32((uint32_t)(0x1089b86cu));
  /* 1087524a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087524c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087524e push 0 */
  push32((uint32_t)(0x0u));
  /* 10875250 push 1 */
  push32((uint32_t)(0x1u));
  /* 10875252 call 0x10873660 */
  push32(0x10875257u); f_10873660();
  /* 10875257 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087525a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087525d jne 0x10875260 */
  if (!C.zf) goto L_10875260;
  /* 1087525f int3  */
  x86_unimpl("int3 @ 0x1087525f");
L_10875260:;
  /* 10875260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875264 jne 0x10875223 */
  if (!C.zf) goto L_10875223;
L_10875266:;
  /* 10875266 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875269 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087526d jne 0x108752db */
  if (!C.zf) goto L_108752db;
L_1087526f:;
  /* 1087526f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875272 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875279 jne 0x10875284 */
  if (!C.zf) goto L_10875284;
  /* 1087527b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087527e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875282 je 0x108752a5 */
  if (C.zf) goto L_108752a5;
L_10875284:;
  /* 10875284 push 0x1089b82c */
  push32((uint32_t)(0x1089b82cu));
  /* 10875289 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087528b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10875290 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10875295 push 2 */
  push32((uint32_t)(0x2u));
  /* 10875297 call 0x10873660 */
  push32(0x1087529cu); f_10873660();
  /* 1087529c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087529f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108752a2 jne 0x108752a5 */
  if (!C.zf) goto L_108752a5;
  /* 108752a4 int3  */
  x86_unimpl("int3 @ 0x108752a4");
L_108752a5:;
  /* 108752a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108752a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108752a9 jne 0x1087526f */
  if (!C.zf) goto L_1087526f;
  /* 108752ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108752ae mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108752b1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108752b4 push eax */
  push32((uint32_t)(EAX));
  /* 108752b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108752b7 mov cl, byte ptr [0x1089ea91] */
  CL = (r8((uint32_t)(0x1089ea91)));
  /* 108752bd push ecx */
  push32((uint32_t)(ECX));
  /* 108752be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108752c1 push edx */
  push32((uint32_t)(EDX));
  /* 108752c2 call 0x10878310 */
  push32(0x108752c7u); f_10878310();
  /* 108752c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108752ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108752cd push eax */
  push32((uint32_t)(EAX));
  /* 108752ce call 0x10878710 */
  push32(0x108752d3u); f_10878710();
  /* 108752d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108752d6 jmp 0x10875445 */
  goto L_10875445;
L_108752db:;
  /* 108752db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108752de cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108752e2 jne 0x108752f1 */
  if (!C.zf) goto L_108752f1;
  /* 108752e4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108752e8 jne 0x108752f1 */
  if (!C.zf) goto L_108752f1;
  /* 108752ea mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_108752f1:;
  /* 108752f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108752f4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108752f7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108752fa je 0x1087531d */
  if (C.zf) goto L_1087531d;
  /* 108752fc push 0x1089b80c */
  push32((uint32_t)(0x1089b80cu));
  /* 10875301 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875303 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10875308 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 1087530d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087530f call 0x10873660 */
  push32(0x10875314u); f_10873660();
  /* 10875314 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875317 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087531a jne 0x1087531d */
  if (!C.zf) goto L_1087531d;
  /* 1087531c int3  */
  x86_unimpl("int3 @ 0x1087531c");
L_1087531d:;
  /* 1087531d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087531f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10875321 jne 0x108752f1 */
  if (!C.zf) goto L_108752f1;
  /* 10875323 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875326 mov eax, dword ptr [0x108a0688] */
  EAX = (r32((uint32_t)(0x108a0688)));
  /* 1087532b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087532e mov dword ptr [0x108a0688], eax */
  w32((uint32_t)(0x108a0688), (EAX));
  /* 10875333 mov ecx, dword ptr [0x1089ea84] */
  ECX = (r32((uint32_t)(0x1089ea84)));
  /* 10875339 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1087533c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087533e jne 0x1087541c */
  if (!C.zf) goto L_1087541c;
  /* 10875344 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875347 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087534a je 0x1087535c */
  if (C.zf) goto L_1087535c;
  /* 1087534c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087534f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10875351 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875354 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10875357 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1087535a jmp 0x1087539a */
  goto L_1087539a;
L_1087535c:;
  /* 1087535c mov ecx, dword ptr [0x108a067c] */
  ECX = (r32((uint32_t)(0x108a067c)));
  /* 10875362 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875365 je 0x10875388 */
  if (C.zf) goto L_10875388;
  /* 10875367 push 0x1089b7f4 */
  push32((uint32_t)(0x1089b7f4u));
  /* 1087536c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087536e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10875373 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10875378 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087537a call 0x10873660 */
  push32(0x1087537fu); f_10873660();
  /* 1087537f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875382 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875385 jne 0x10875388 */
  if (!C.zf) goto L_10875388;
  /* 10875387 int3  */
  x86_unimpl("int3 @ 0x10875387");
L_10875388:;
  /* 10875388 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087538a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087538c jne 0x1087535c */
  if (!C.zf) goto L_1087535c;
  /* 1087538e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875391 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10875394 mov dword ptr [0x108a067c], ecx */
  w32((uint32_t)(0x108a067c), (ECX));
L_1087539a:;
  /* 1087539a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087539d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108753a1 je 0x108753b2 */
  if (C.zf) goto L_108753b2;
  /* 108753a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108753a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 108753a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108753ac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108753ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108753b0 jmp 0x108753ef */
  goto L_108753ef;
L_108753b2:;
  /* 108753b2 mov ecx, dword ptr [0x108a0684] */
  ECX = (r32((uint32_t)(0x108a0684)));
  /* 108753b8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108753bb je 0x108753de */
  if (C.zf) goto L_108753de;
  /* 108753bd push 0x1089b7dc */
  push32((uint32_t)(0x1089b7dcu));
  /* 108753c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108753c4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 108753c9 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 108753ce push 2 */
  push32((uint32_t)(0x2u));
  /* 108753d0 call 0x10873660 */
  push32(0x108753d5u); f_10873660();
  /* 108753d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108753d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108753db jne 0x108753de */
  if (!C.zf) goto L_108753de;
  /* 108753dd int3  */
  x86_unimpl("int3 @ 0x108753dd");
L_108753de:;
  /* 108753de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108753e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108753e2 jne 0x108753b2 */
  if (!C.zf) goto L_108753b2;
  /* 108753e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108753e7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108753e9 mov dword ptr [0x108a0684], ecx */
  w32((uint32_t)(0x108a0684), (ECX));
L_108753ef:;
  /* 108753ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108753f2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108753f5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108753f8 push eax */
  push32((uint32_t)(EAX));
  /* 108753f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108753fb mov cl, byte ptr [0x1089ea91] */
  CL = (r8((uint32_t)(0x1089ea91)));
  /* 10875401 push ecx */
  push32((uint32_t)(ECX));
  /* 10875402 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875405 push edx */
  push32((uint32_t)(EDX));
  /* 10875406 call 0x10878310 */
  push32(0x1087540bu); f_10878310();
  /* 1087540b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087540e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875411 push eax */
  push32((uint32_t)(EAX));
  /* 10875412 call 0x10878710 */
  push32(0x10875417u); f_10878710();
  /* 10875417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087541a jmp 0x10875445 */
  goto L_10875445;
L_1087541c:;
  /* 1087541c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087541f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10875426 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875429 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1087542c push eax */
  push32((uint32_t)(EAX));
  /* 1087542d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087542f mov cl, byte ptr [0x1089ea91] */
  CL = (r8((uint32_t)(0x1089ea91)));
  /* 10875435 push ecx */
  push32((uint32_t)(ECX));
  /* 10875436 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875439 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087543c push edx */
  push32((uint32_t)(EDX));
  /* 1087543d call 0x10878310 */
  push32(0x10875442u); f_10878310();
  /* 10875442 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10875445:;
  /* 10875445 pop edi */
  EDI = (pop32());
  /* 10875446 pop esi */
  ESI = (pop32());
  /* 10875447 pop ebx */
  EBX = (pop32());
  /* 10875448 mov esp, ebp */
  ESP = (EBP);
  /* 1087544a pop ebp */
  EBP = (pop32());
  /* 1087544b ret  */
  ESPCHK(0x10875060u, _esp0);
  ESP += 4; return;
}

/* FUN_10005450 @ 0x10875450 (19 bytes, 9 insns) */
void f_10875450(void) {
  FTRACE(0x10875450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875450 push ebp */
  push32((uint32_t)(EBP));
  /* 10875451 mov ebp, esp */
  EBP = (ESP);
  /* 10875453 push 1 */
  push32((uint32_t)(0x1u));
  /* 10875455 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875458 push eax */
  push32((uint32_t)(EAX));
  /* 10875459 call 0x10875470 */
  push32(0x1087545eu); f_10875470();
  /* 1087545e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875461 pop ebp */
  EBP = (pop32());
  /* 10875462 ret  */
  ESPCHK(0x10875450u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x10875470 (342 bytes, 119 insns) */
void f_10875470(void) {
  FTRACE(0x10875470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875470 push ebp */
  push32((uint32_t)(EBP));
  /* 10875471 mov ebp, esp */
  EBP = (ESP);
  /* 10875473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875476 push ebx */
  push32((uint32_t)(EBX));
  /* 10875477 push esi */
  push32((uint32_t)(ESI));
  /* 10875478 push edi */
  push32((uint32_t)(EDI));
  /* 10875479 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 1087547e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10875481 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875483 je 0x108754b5 */
  if (C.zf) goto L_108754b5;
L_10875485:;
  /* 10875485 call 0x10875740 */
  push32(0x1087548au); f_10875740();
  /* 1087548a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087548c jne 0x108754af */
  if (!C.zf) goto L_108754af;
  /* 1087548e push 0x1089b628 */
  push32((uint32_t)(0x1089b628u));
  /* 10875493 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875495 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1087549a push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 1087549f push 2 */
  push32((uint32_t)(0x2u));
  /* 108754a1 call 0x10873660 */
  push32(0x108754a6u); f_10873660();
  /* 108754a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108754a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108754ac jne 0x108754af */
  if (!C.zf) goto L_108754af;
  /* 108754ae int3  */
  x86_unimpl("int3 @ 0x108754ae");
L_108754af:;
  /* 108754af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108754b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108754b3 jne 0x10875485 */
  if (!C.zf) goto L_10875485;
L_108754b5:;
  /* 108754b5 push 9 */
  push32((uint32_t)(0x9u));
  /* 108754b7 call 0x10877fa0 */
  push32(0x108754bcu); f_10877fa0();
  /* 108754bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108754bf:;
  /* 108754bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108754c2 push edx */
  push32((uint32_t)(EDX));
  /* 108754c3 call 0x10875ba0 */
  push32(0x108754c8u); f_10875ba0();
  /* 108754c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108754cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108754cd jne 0x108754f0 */
  if (!C.zf) goto L_108754f0;
  /* 108754cf push 0x1089b72c */
  push32((uint32_t)(0x1089b72cu));
  /* 108754d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108754d6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 108754db push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 108754e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 108754e2 call 0x10873660 */
  push32(0x108754e7u); f_10873660();
  /* 108754e7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108754ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108754ed jne 0x108754f0 */
  if (!C.zf) goto L_108754f0;
  /* 108754ef int3  */
  x86_unimpl("int3 @ 0x108754ef");
L_108754f0:;
  /* 108754f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108754f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108754f4 jne 0x108754bf */
  if (!C.zf) goto L_108754bf;
  /* 108754f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108754f9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108754fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_108754ff:;
  /* 108754ff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875502 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10875505 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087550a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087550d je 0x10875552 */
  if (C.zf) goto L_10875552;
  /* 1087550f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875512 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875516 je 0x10875552 */
  if (C.zf) goto L_10875552;
  /* 10875518 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087551b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1087551e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10875523 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875526 je 0x10875552 */
  if (C.zf) goto L_10875552;
  /* 10875528 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087552b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087552f je 0x10875552 */
  if (C.zf) goto L_10875552;
  /* 10875531 push 0x1089b8c4 */
  push32((uint32_t)(0x1089b8c4u));
  /* 10875536 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875538 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1087553d push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10875542 push 2 */
  push32((uint32_t)(0x2u));
  /* 10875544 call 0x10873660 */
  push32(0x10875549u); f_10873660();
  /* 10875549 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087554c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087554f jne 0x10875552 */
  if (!C.zf) goto L_10875552;
  /* 10875551 int3  */
  x86_unimpl("int3 @ 0x10875551");
L_10875552:;
  /* 10875552 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10875554 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10875556 jne 0x108754ff */
  if (!C.zf) goto L_108754ff;
  /* 10875558 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087555b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087555f jne 0x1087556e */
  if (!C.zf) goto L_1087556e;
  /* 10875561 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875565 jne 0x1087556e */
  if (!C.zf) goto L_1087556e;
  /* 10875567 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1087556e:;
  /* 1087556e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875571 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875575 je 0x108755a9 */
  if (C.zf) goto L_108755a9;
L_10875577:;
  /* 10875577 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087557a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1087557d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875580 je 0x108755a3 */
  if (C.zf) goto L_108755a3;
  /* 10875582 push 0x1089b80c */
  push32((uint32_t)(0x1089b80cu));
  /* 10875587 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875589 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1087558e push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 10875593 push 2 */
  push32((uint32_t)(0x2u));
  /* 10875595 call 0x10873660 */
  push32(0x1087559au); f_10873660();
  /* 1087559a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087559d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108755a0 jne 0x108755a3 */
  if (!C.zf) goto L_108755a3;
  /* 108755a2 int3  */
  x86_unimpl("int3 @ 0x108755a2");
L_108755a3:;
  /* 108755a3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108755a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108755a7 jne 0x10875577 */
  if (!C.zf) goto L_10875577;
L_108755a9:;
  /* 108755a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108755ac mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108755af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108755b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 108755b4 call 0x10878040 */
  push32(0x108755b9u); f_10878040();
  /* 108755b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108755bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108755bf pop edi */
  EDI = (pop32());
  /* 108755c0 pop esi */
  ESI = (pop32());
  /* 108755c1 pop ebx */
  EBX = (pop32());
  /* 108755c2 mov esp, ebp */
  ESP = (EBP);
  /* 108755c4 pop ebp */
  EBP = (pop32());
  /* 108755c5 ret  */
  ESPCHK(0x10875470u, _esp0);
  ESP += 4; return;
}

/* FUN_100055d0 @ 0x108755d0 (28 bytes, 11 insns) */
void f_108755d0(void) {
  FTRACE(0x108755d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108755d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108755d1 mov ebp, esp */
  EBP = (ESP);
  /* 108755d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108755d4 mov eax, dword ptr [0x1089ea8c] */
  EAX = (r32((uint32_t)(0x1089ea8c)));
  /* 108755d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108755dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108755df mov dword ptr [0x1089ea8c], ecx */
  w32((uint32_t)(0x1089ea8c), (ECX));
  /* 108755e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108755e8 mov esp, ebp */
  ESP = (EBP);
  /* 108755ea pop ebp */
  EBP = (pop32());
  /* 108755eb ret  */
  ESPCHK(0x108755d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f0 @ 0x108755f0 (157 bytes, 59 insns) */
void f_108755f0(void) {
  FTRACE(0x108755f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108755f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108755f1 mov ebp, esp */
  EBP = (ESP);
  /* 108755f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108755f4 push ebx */
  push32((uint32_t)(EBX));
  /* 108755f5 push esi */
  push32((uint32_t)(ESI));
  /* 108755f6 push edi */
  push32((uint32_t)(EDI));
  /* 108755f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 108755f9 call 0x10877fa0 */
  push32(0x108755feu); f_10877fa0();
  /* 108755fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875604 push eax */
  push32((uint32_t)(EAX));
  /* 10875605 call 0x10875ba0 */
  push32(0x1087560au); f_10875ba0();
  /* 1087560a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087560d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087560f je 0x1087567c */
  if (C.zf) goto L_1087567c;
  /* 10875611 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875614 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875617 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1087561a:;
  /* 1087561a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087561d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10875620 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10875625 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875628 je 0x1087566d */
  if (C.zf) goto L_1087566d;
  /* 1087562a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087562d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875631 je 0x1087566d */
  if (C.zf) goto L_1087566d;
  /* 10875633 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875636 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10875639 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1087563e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875641 je 0x1087566d */
  if (C.zf) goto L_1087566d;
  /* 10875643 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875646 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087564a je 0x1087566d */
  if (C.zf) goto L_1087566d;
  /* 1087564c push 0x1089b8c4 */
  push32((uint32_t)(0x1089b8c4u));
  /* 10875651 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875653 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10875658 push 0x1089b61c */
  push32((uint32_t)(0x1089b61cu));
  /* 1087565d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087565f call 0x10873660 */
  push32(0x10875664u); f_10873660();
  /* 10875664 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875667 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087566a jne 0x1087566d */
  if (!C.zf) goto L_1087566d;
  /* 1087566c int3  */
  x86_unimpl("int3 @ 0x1087566c");
L_1087566d:;
  /* 1087566d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087566f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10875671 jne 0x1087561a */
  if (!C.zf) goto L_1087561a;
  /* 10875673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875676 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10875679 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1087567c:;
  /* 1087567c push 9 */
  push32((uint32_t)(0x9u));
  /* 1087567e call 0x10878040 */
  push32(0x10875683u); f_10878040();
  /* 10875683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875686 pop edi */
  EDI = (pop32());
  /* 10875687 pop esi */
  ESI = (pop32());
  /* 10875688 pop ebx */
  EBX = (pop32());
  /* 10875689 mov esp, ebp */
  ESP = (EBP);
  /* 1087568b pop ebp */
  EBP = (pop32());
  /* 1087568c ret  */
  ESPCHK(0x108755f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005690 @ 0x10875690 (28 bytes, 11 insns) */
void f_10875690(void) {
  FTRACE(0x10875690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875690 push ebp */
  push32((uint32_t)(EBP));
  /* 10875691 mov ebp, esp */
  EBP = (ESP);
  /* 10875693 push ecx */
  push32((uint32_t)(ECX));
  /* 10875694 mov eax, dword ptr [0x1089ec90] */
  EAX = (r32((uint32_t)(0x1089ec90)));
  /* 10875699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087569c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087569f mov dword ptr [0x1089ec90], ecx */
  w32((uint32_t)(0x1089ec90), (ECX));
  /* 108756a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108756a8 mov esp, ebp */
  ESP = (EBP);
  /* 108756aa pop ebp */
  EBP = (pop32());
  /* 108756ab ret  */
  ESPCHK(0x10875690u, _esp0);
  ESP += 4; return;
}

/* FUN_100056b0 @ 0x108756b0 (136 bytes, 55 insns) */
void f_108756b0(void) {
  FTRACE(0x108756b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108756b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108756b1 mov ebp, esp */
  EBP = (ESP);
  /* 108756b3 push ecx */
  push32((uint32_t)(ECX));
  /* 108756b4 push ebx */
  push32((uint32_t)(EBX));
  /* 108756b5 push esi */
  push32((uint32_t)(ESI));
  /* 108756b6 push edi */
  push32((uint32_t)(EDI));
  /* 108756b7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_108756be:;
  /* 108756be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108756c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108756c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108756c7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108756ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108756cc je 0x1087572e */
  if (C.zf) goto L_1087572e;
  /* 108756ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108756d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108756d3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108756d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108756d8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108756de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108756e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108756e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 108756e7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108756e9 je 0x1087572c */
  if (C.zf) goto L_1087572c;
L_108756eb:;
  /* 108756eb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108756ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108756f3 push eax */
  push32((uint32_t)(EAX));
  /* 108756f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108756f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108756f9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 108756fc push edx */
  push32((uint32_t)(EDX));
  /* 108756fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875700 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875703 push eax */
  push32((uint32_t)(EAX));
  /* 10875704 push 0x1089b908 */
  push32((uint32_t)(0x1089b908u));
  /* 10875709 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087570b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087570d push 0 */
  push32((uint32_t)(0x0u));
  /* 1087570f push 0 */
  push32((uint32_t)(0x0u));
  /* 10875711 call 0x10873660 */
  push32(0x10875716u); f_10873660();
  /* 10875716 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875719 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087571c jne 0x1087571f */
  if (!C.zf) goto L_1087571f;
  /* 1087571e int3  */
  x86_unimpl("int3 @ 0x1087571e");
L_1087571f:;
  /* 1087571f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10875721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10875723 jne 0x108756eb */
  if (!C.zf) goto L_108756eb;
  /* 10875725 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1087572c:;
  /* 1087572c jmp 0x108756be */
  goto L_108756be;
L_1087572e:;
  /* 1087572e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875731 pop edi */
  EDI = (pop32());
  /* 10875732 pop esi */
  ESI = (pop32());
  /* 10875733 pop ebx */
  EBX = (pop32());
  /* 10875734 mov esp, ebp */
  ESP = (EBP);
  /* 10875736 pop ebp */
  EBP = (pop32());
  /* 10875737 ret  */
  ESPCHK(0x108756b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005740 @ 0x10875740 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10875740(void) {
  FTRACE(0x10875740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875740 push ebp */
  push32((uint32_t)(EBP));
  /* 10875741 mov ebp, esp */
  EBP = (ESP);
  /* 10875743 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875746 push ebx */
  push32((uint32_t)(EBX));
  /* 10875747 push esi */
  push32((uint32_t)(ESI));
  /* 10875748 push edi */
  push32((uint32_t)(EDI));
  /* 10875749 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10875750 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 10875755 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10875758 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087575a jne 0x10875766 */
  if (!C.zf) goto L_10875766;
  /* 1087575c mov eax, 1 */
  EAX = (0x1u);
  /* 10875761 jmp 0x10875a98 */
  goto L_10875a98;
L_10875766:;
  /* 10875766 push 9 */
  push32((uint32_t)(0x9u));
  /* 10875768 call 0x10877fa0 */
  push32(0x1087576du); f_10877fa0();
  /* 1087576d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875770 call 0x10878780 */
  push32(0x10875775u); f_10878780();
  /* 10875775 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10875778 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087577c je 0x10875889 */
  if (C.zf) goto L_10875889;
  /* 10875782 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875786 je 0x10875889 */
  if (C.zf) goto L_10875889;
  /* 1087578c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087578f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10875792 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10875795 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875798 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1087579b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087579f ja 0x10875852 */
  if ((!C.cf&&!C.zf)) goto L_10875852;
  /* 108757a5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 108757a8 jmp dword ptr [eax*4 + 0x10875a9f] */
  switch (EAX) {
    case 0: goto L_1087582a;
    case 1: goto L_10875802;
    case 2: goto L_108757da;
    case 3: goto L_108757af;
    default: x86_unimpl("switch@0x108757a8 out of table"); return;
  }
L_108757af:;
  /* 108757af push 0x1089ba5c */
  push32((uint32_t)(0x1089ba5cu));
  /* 108757b4 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 108757b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108757bb push 0 */
  push32((uint32_t)(0x0u));
  /* 108757bd push 0 */
  push32((uint32_t)(0x0u));
  /* 108757bf push 0 */
  push32((uint32_t)(0x0u));
  /* 108757c1 call 0x10873660 */
  push32(0x108757c6u); f_10873660();
  /* 108757c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108757c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108757cc jne 0x108757cf */
  if (!C.zf) goto L_108757cf;
  /* 108757ce int3  */
  x86_unimpl("int3 @ 0x108757ce");
L_108757cf:;
  /* 108757cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108757d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108757d3 jne 0x108757af */
  if (!C.zf) goto L_108757af;
  /* 108757d5 jmp 0x10875878 */
  goto L_10875878;
L_108757da:;
  /* 108757da push 0x1089ba38 */
  push32((uint32_t)(0x1089ba38u));
  /* 108757df push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 108757e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108757e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108757e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108757ea push 0 */
  push32((uint32_t)(0x0u));
  /* 108757ec call 0x10873660 */
  push32(0x108757f1u); f_10873660();
  /* 108757f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108757f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108757f7 jne 0x108757fa */
  if (!C.zf) goto L_108757fa;
  /* 108757f9 int3  */
  x86_unimpl("int3 @ 0x108757f9");
L_108757fa:;
  /* 108757fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108757fc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108757fe jne 0x108757da */
  if (!C.zf) goto L_108757da;
  /* 10875800 jmp 0x10875878 */
  goto L_10875878;
L_10875802:;
  /* 10875802 push 0x1089ba14 */
  push32((uint32_t)(0x1089ba14u));
  /* 10875807 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 1087580c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087580e push 0 */
  push32((uint32_t)(0x0u));
  /* 10875810 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875812 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875814 call 0x10873660 */
  push32(0x10875819u); f_10873660();
  /* 10875819 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087581c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087581f jne 0x10875822 */
  if (!C.zf) goto L_10875822;
  /* 10875821 int3  */
  x86_unimpl("int3 @ 0x10875821");
L_10875822:;
  /* 10875822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875824 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875826 jne 0x10875802 */
  if (!C.zf) goto L_10875802;
  /* 10875828 jmp 0x10875878 */
  goto L_10875878;
L_1087582a:;
  /* 1087582a push 0x1089b9f0 */
  push32((uint32_t)(0x1089b9f0u));
  /* 1087582f push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 10875834 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875836 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875838 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087583a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087583c call 0x10873660 */
  push32(0x10875841u); f_10873660();
  /* 10875841 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875844 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875847 jne 0x1087584a */
  if (!C.zf) goto L_1087584a;
  /* 10875849 int3  */
  x86_unimpl("int3 @ 0x10875849");
L_1087584a:;
  /* 1087584a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087584c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087584e jne 0x1087582a */
  if (!C.zf) goto L_1087582a;
  /* 10875850 jmp 0x10875878 */
  goto L_10875878;
L_10875852:;
  /* 10875852 push 0x1089b9c4 */
  push32((uint32_t)(0x1089b9c4u));
  /* 10875857 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 1087585c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087585e push 0 */
  push32((uint32_t)(0x0u));
  /* 10875860 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875862 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875864 call 0x10873660 */
  push32(0x10875869u); f_10873660();
  /* 10875869 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087586c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087586f jne 0x10875872 */
  if (!C.zf) goto L_10875872;
  /* 10875871 int3  */
  x86_unimpl("int3 @ 0x10875871");
L_10875872:;
  /* 10875872 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10875874 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10875876 jne 0x10875852 */
  if (!C.zf) goto L_10875852;
L_10875878:;
  /* 10875878 push 9 */
  push32((uint32_t)(0x9u));
  /* 1087587a call 0x10878040 */
  push32(0x1087587fu); f_10878040();
  /* 1087587f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875884 jmp 0x10875a98 */
  goto L_10875a98;
L_10875889:;
  /* 10875889 mov eax, dword ptr [0x108a0684] */
  EAX = (r32((uint32_t)(0x108a0684)));
  /* 1087588e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10875891 jmp 0x1087589b */
  goto L_1087589b;
L_10875893:;
  /* 10875893 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875896 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10875898 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1087589b:;
  /* 1087589b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087589f je 0x10875a8b */
  if (C.zf) goto L_10875a8b;
  /* 108758a5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108758ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108758af mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108758b2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108758b8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108758bb je 0x108758e0 */
  if (C.zf) goto L_108758e0;
  /* 108758bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108758c0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108758c4 je 0x108758e0 */
  if (C.zf) goto L_108758e0;
  /* 108758c6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108758c9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108758cc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108758d2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108758d5 je 0x108758e0 */
  if (C.zf) goto L_108758e0;
  /* 108758d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108758da cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108758de jne 0x108758f8 */
  if (!C.zf) goto L_108758f8;
L_108758e0:;
  /* 108758e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108758e3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108758e6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108758ec mov edx, dword ptr [ecx*4 + 0x1089ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089ea94)));
  /* 108758f3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108758f6 jmp 0x108758ff */
  goto L_108758ff;
L_108758f8:;
  /* 108758f8 mov dword ptr [ebp - 0x14], 0x1089b9bc */
  w32((uint32_t)(EBP + -0x14), (0x1089b9bcu));
L_108758ff:;
  /* 108758ff push 4 */
  push32((uint32_t)(0x4u));
  /* 10875901 mov al, byte ptr [0x1089ea90] */
  AL = (r8((uint32_t)(0x1089ea90)));
  /* 10875906 push eax */
  push32((uint32_t)(EAX));
  /* 10875907 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087590a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087590d push ecx */
  push32((uint32_t)(ECX));
  /* 1087590e call 0x108756b0 */
  push32(0x10875913u); f_108756b0();
  /* 10875913 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875916 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875918 jne 0x10875954 */
  if (!C.zf) goto L_10875954;
L_1087591a:;
  /* 1087591a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087591d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875920 push edx */
  push32((uint32_t)(EDX));
  /* 10875921 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875924 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10875927 push ecx */
  push32((uint32_t)(ECX));
  /* 10875928 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087592b push edx */
  push32((uint32_t)(EDX));
  /* 1087592c push 0x1089b898 */
  push32((uint32_t)(0x1089b898u));
  /* 10875931 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875933 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875935 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875937 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875939 call 0x10873660 */
  push32(0x1087593eu); f_10873660();
  /* 1087593e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875941 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875944 jne 0x10875947 */
  if (!C.zf) goto L_10875947;
  /* 10875946 int3  */
  x86_unimpl("int3 @ 0x10875946");
L_10875947:;
  /* 10875947 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087594b jne 0x1087591a */
  if (!C.zf) goto L_1087591a;
  /* 1087594d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10875954:;
  /* 10875954 push 4 */
  push32((uint32_t)(0x4u));
  /* 10875956 mov cl, byte ptr [0x1089ea90] */
  CL = (r8((uint32_t)(0x1089ea90)));
  /* 1087595c push ecx */
  push32((uint32_t)(ECX));
  /* 1087595d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875960 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10875963 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875966 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1087596a push edx */
  push32((uint32_t)(EDX));
  /* 1087596b call 0x108756b0 */
  push32(0x10875970u); f_108756b0();
  /* 10875970 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875975 jne 0x108759b1 */
  if (!C.zf) goto L_108759b1;
L_10875977:;
  /* 10875977 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087597a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087597d push eax */
  push32((uint32_t)(EAX));
  /* 1087597e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875981 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10875984 push edx */
  push32((uint32_t)(EDX));
  /* 10875985 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10875988 push eax */
  push32((uint32_t)(EAX));
  /* 10875989 push 0x1089b86c */
  push32((uint32_t)(0x1089b86cu));
  /* 1087598e push 0 */
  push32((uint32_t)(0x0u));
  /* 10875990 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875992 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875994 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875996 call 0x10873660 */
  push32(0x1087599bu); f_10873660();
  /* 1087599b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087599e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108759a1 jne 0x108759a4 */
  if (!C.zf) goto L_108759a4;
  /* 108759a3 int3  */
  x86_unimpl("int3 @ 0x108759a3");
L_108759a4:;
  /* 108759a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108759a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108759a8 jne 0x10875977 */
  if (!C.zf) goto L_10875977;
  /* 108759aa mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108759b1:;
  /* 108759b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108759b4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108759b8 jne 0x10875a0a */
  if (!C.zf) goto L_10875a0a;
  /* 108759ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108759bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108759c0 push ecx */
  push32((uint32_t)(ECX));
  /* 108759c1 mov dl, byte ptr [0x1089ea91] */
  DL = (r8((uint32_t)(0x1089ea91)));
  /* 108759c7 push edx */
  push32((uint32_t)(EDX));
  /* 108759c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108759cb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108759ce push eax */
  push32((uint32_t)(EAX));
  /* 108759cf call 0x108756b0 */
  push32(0x108759d4u); f_108756b0();
  /* 108759d4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108759d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108759d9 jne 0x10875a0a */
  if (!C.zf) goto L_10875a0a;
L_108759db:;
  /* 108759db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108759de add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108759e1 push ecx */
  push32((uint32_t)(ECX));
  /* 108759e2 push 0x1089b990 */
  push32((uint32_t)(0x1089b990u));
  /* 108759e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108759e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108759eb push 0 */
  push32((uint32_t)(0x0u));
  /* 108759ed push 0 */
  push32((uint32_t)(0x0u));
  /* 108759ef call 0x10873660 */
  push32(0x108759f4u); f_10873660();
  /* 108759f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108759f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108759fa jne 0x108759fd */
  if (!C.zf) goto L_108759fd;
  /* 108759fc int3  */
  x86_unimpl("int3 @ 0x108759fc");
L_108759fd:;
  /* 108759fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108759ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10875a01 jne 0x108759db */
  if (!C.zf) goto L_108759db;
  /* 10875a03 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10875a0a:;
  /* 10875a0a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875a0e jne 0x10875a86 */
  if (!C.zf) goto L_10875a86;
  /* 10875a10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875a13 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875a17 je 0x10875a4c */
  if (C.zf) goto L_10875a4c;
L_10875a19:;
  /* 10875a19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875a1c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10875a1f push edx */
  push32((uint32_t)(EDX));
  /* 10875a20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875a23 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10875a26 push ecx */
  push32((uint32_t)(ECX));
  /* 10875a27 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10875a2a push edx */
  push32((uint32_t)(EDX));
  /* 10875a2b push 0x1089b970 */
  push32((uint32_t)(0x1089b970u));
  /* 10875a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875a36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875a38 call 0x10873660 */
  push32(0x10875a3du); f_10873660();
  /* 10875a3d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875a40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875a43 jne 0x10875a46 */
  if (!C.zf) goto L_10875a46;
  /* 10875a45 int3  */
  x86_unimpl("int3 @ 0x10875a45");
L_10875a46:;
  /* 10875a46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875a48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875a4a jne 0x10875a19 */
  if (!C.zf) goto L_10875a19;
L_10875a4c:;
  /* 10875a4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875a4f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10875a52 push edx */
  push32((uint32_t)(EDX));
  /* 10875a53 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875a56 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875a59 push eax */
  push32((uint32_t)(EAX));
  /* 10875a5a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10875a5d push ecx */
  push32((uint32_t)(ECX));
  /* 10875a5e push 0x1089b944 */
  push32((uint32_t)(0x1089b944u));
  /* 10875a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875a6b call 0x10873660 */
  push32(0x10875a70u); f_10873660();
  /* 10875a70 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875a73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875a76 jne 0x10875a79 */
  if (!C.zf) goto L_10875a79;
  /* 10875a78 int3  */
  x86_unimpl("int3 @ 0x10875a78");
L_10875a79:;
  /* 10875a79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10875a7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10875a7d jne 0x10875a4c */
  if (!C.zf) goto L_10875a4c;
  /* 10875a7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10875a86:;
  /* 10875a86 jmp 0x10875893 */
  goto L_10875893;
L_10875a8b:;
  /* 10875a8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10875a8d call 0x10878040 */
  push32(0x10875a92u); f_10878040();
  /* 10875a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875a95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10875a98:;
  /* 10875a98 pop edi */
  EDI = (pop32());
  /* 10875a99 pop esi */
  ESI = (pop32());
  /* 10875a9a pop ebx */
  EBX = (pop32());
  /* 10875a9b mov esp, ebp */
  ESP = (EBP);
  /* 10875a9d pop ebp */
  EBP = (pop32());
  /* 10875a9e ret  */
  ESPCHK(0x10875740u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x10875ab0 (34 bytes, 13 insns) */
void f_10875ab0(void) {
  FTRACE(0x10875ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10875ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10875ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10875ab4 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 10875ab9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10875abc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875ac0 je 0x10875acb */
  if (C.zf) goto L_10875acb;
  /* 10875ac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875ac5 mov dword ptr [0x1089ea84], ecx */
  w32((uint32_t)(0x1089ea84), (ECX));
L_10875acb:;
  /* 10875acb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875ace mov esp, ebp */
  ESP = (EBP);
  /* 10875ad0 pop ebp */
  EBP = (pop32());
  /* 10875ad1 ret  */
  ESPCHK(0x10875ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x10875ae0 (103 bytes, 38 insns) */
void f_10875ae0(void) {
  FTRACE(0x10875ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10875ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10875ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10875ae4 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 10875ae9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10875aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875aee jne 0x10875af2 */
  if (!C.zf) goto L_10875af2;
  /* 10875af0 jmp 0x10875b43 */
  goto L_10875b43;
L_10875af2:;
  /* 10875af2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10875af4 call 0x10877fa0 */
  push32(0x10875af9u); f_10877fa0();
  /* 10875af9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875afc mov ecx, dword ptr [0x108a0684] */
  ECX = (r32((uint32_t)(0x108a0684)));
  /* 10875b02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10875b05 jmp 0x10875b0f */
  goto L_10875b0f;
L_10875b07:;
  /* 10875b07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875b0a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10875b0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10875b0f:;
  /* 10875b0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875b13 je 0x10875b39 */
  if (C.zf) goto L_10875b39;
  /* 10875b15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875b18 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10875b1b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10875b21 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875b24 jne 0x10875b37 */
  if (!C.zf) goto L_10875b37;
  /* 10875b26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10875b29 push eax */
  push32((uint32_t)(EAX));
  /* 10875b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875b2d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875b30 push ecx */
  push32((uint32_t)(ECX));
  /* 10875b31 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10875b34u);
  /* 10875b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10875b37:;
  /* 10875b37 jmp 0x10875b07 */
  goto L_10875b07;
L_10875b39:;
  /* 10875b39 push 9 */
  push32((uint32_t)(0x9u));
  /* 10875b3b call 0x10878040 */
  push32(0x10875b40u); f_10878040();
  /* 10875b40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10875b43:;
  /* 10875b43 mov esp, ebp */
  ESP = (EBP);
  /* 10875b45 pop ebp */
  EBP = (pop32());
  /* 10875b46 ret  */
  ESPCHK(0x10875ae0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10875b50 (75 bytes, 28 insns) */
void f_10875b50(void) {
  FTRACE(0x10875b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10875b51 mov ebp, esp */
  EBP = (ESP);
  /* 10875b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10875b54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875b58 je 0x10875b8d */
  if (C.zf) goto L_10875b8d;
  /* 10875b5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10875b5d push eax */
  push32((uint32_t)(EAX));
  /* 10875b5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875b61 push ecx */
  push32((uint32_t)(ECX));
  /* 10875b62 call dword ptr [0x108a33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33cc))), 0x10875b68u);
  /* 10875b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875b6a jne 0x10875b8d */
  if (!C.zf) goto L_10875b8d;
  /* 10875b6c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875b70 je 0x10875b84 */
  if (C.zf) goto L_10875b84;
  /* 10875b72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10875b75 push edx */
  push32((uint32_t)(EDX));
  /* 10875b76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875b79 push eax */
  push32((uint32_t)(EAX));
  /* 10875b7a call dword ptr [0x108a33bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33bc))), 0x10875b80u);
  /* 10875b80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875b82 jne 0x10875b8d */
  if (!C.zf) goto L_10875b8d;
L_10875b84:;
  /* 10875b84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10875b8b jmp 0x10875b94 */
  goto L_10875b94;
L_10875b8d:;
  /* 10875b8d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10875b94:;
  /* 10875b94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875b97 mov esp, ebp */
  ESP = (EBP);
  /* 10875b99 pop ebp */
  EBP = (pop32());
  /* 10875b9a ret  */
  ESPCHK(0x10875b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x10875ba0 (134 bytes, 50 insns) */
void f_10875ba0(void) {
  FTRACE(0x10875ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10875ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10875ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10875ba4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875ba8 jne 0x10875bae */
  if (!C.zf) goto L_10875bae;
  /* 10875baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875bac jmp 0x10875c22 */
  goto L_10875c22;
L_10875bae:;
  /* 10875bae push 1 */
  push32((uint32_t)(0x1u));
  /* 10875bb0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10875bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875bb5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875bb8 push eax */
  push32((uint32_t)(EAX));
  /* 10875bb9 call 0x10875b50 */
  push32(0x10875bbeu); f_10875b50();
  /* 10875bbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875bc3 jne 0x10875bc9 */
  if (!C.zf) goto L_10875bc9;
  /* 10875bc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875bc7 jmp 0x10875c22 */
  goto L_10875c22;
L_10875bc9:;
  /* 10875bc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875bcc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875bcf push ecx */
  push32((uint32_t)(ECX));
  /* 10875bd0 call 0x108788a0 */
  push32(0x10875bd5u); f_108788a0();
  /* 10875bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875bd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10875bdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875bdf je 0x10875bf6 */
  if (C.zf) goto L_10875bf6;
  /* 10875be1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875be4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875be7 push edx */
  push32((uint32_t)(EDX));
  /* 10875be8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875beb push eax */
  push32((uint32_t)(EAX));
  /* 10875bec call 0x10878900 */
  push32(0x10875bf1u); f_10878900();
  /* 10875bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875bf4 jmp 0x10875c22 */
  goto L_10875c22;
L_10875bf6:;
  /* 10875bf6 mov ecx, dword ptr [0x108a0638] */
  ECX = (r32((uint32_t)(0x108a0638)));
  /* 10875bfc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10875c02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10875c04 je 0x10875c0d */
  if (C.zf) goto L_10875c0d;
  /* 10875c06 mov eax, 1 */
  EAX = (0x1u);
  /* 10875c0b jmp 0x10875c22 */
  goto L_10875c22;
L_10875c0d:;
  /* 10875c0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875c10 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875c13 push edx */
  push32((uint32_t)(EDX));
  /* 10875c14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875c16 mov eax, dword ptr [0x108a1fec] */
  EAX = (r32((uint32_t)(0x108a1fec)));
  /* 10875c1b push eax */
  push32((uint32_t)(EAX));
  /* 10875c1c call dword ptr [0x108a33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33d0))), 0x10875c22u);
L_10875c22:;
  /* 10875c22 mov esp, ebp */
  ESP = (EBP);
  /* 10875c24 pop ebp */
  EBP = (pop32());
  /* 10875c25 ret  */
  ESPCHK(0x10875ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x10875c30 (227 bytes, 80 insns) */
void f_10875c30(void) {
  FTRACE(0x10875c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10875c31 mov ebp, esp */
  EBP = (ESP);
  /* 10875c33 push ecx */
  push32((uint32_t)(ECX));
  /* 10875c34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875c37 push eax */
  push32((uint32_t)(EAX));
  /* 10875c38 call 0x10875ba0 */
  push32(0x10875c3du); f_10875ba0();
  /* 10875c3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875c40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875c42 jne 0x10875c4b */
  if (!C.zf) goto L_10875c4b;
  /* 10875c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875c46 jmp 0x10875d0f */
  goto L_10875d0f;
L_10875c4b:;
  /* 10875c4b push 9 */
  push32((uint32_t)(0x9u));
  /* 10875c4d call 0x10877fa0 */
  push32(0x10875c52u); f_10877fa0();
  /* 10875c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875c55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875c58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875c5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10875c5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875c61 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10875c64 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10875c69 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875c6c je 0x10875c90 */
  if (C.zf) goto L_10875c90;
  /* 10875c6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875c71 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875c75 je 0x10875c90 */
  if (C.zf) goto L_10875c90;
  /* 10875c77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875c7a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10875c7d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10875c82 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875c85 je 0x10875c90 */
  if (C.zf) goto L_10875c90;
  /* 10875c87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875c8a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875c8e jne 0x10875d03 */
  if (!C.zf) goto L_10875d03;
L_10875c90:;
  /* 10875c90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10875c92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10875c95 push edx */
  push32((uint32_t)(EDX));
  /* 10875c96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875c99 push eax */
  push32((uint32_t)(EAX));
  /* 10875c9a call 0x10875b50 */
  push32(0x10875c9fu); f_10875b50();
  /* 10875c9f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875ca4 je 0x10875d03 */
  if (C.zf) goto L_10875d03;
  /* 10875ca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875ca9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10875cac cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875caf jne 0x10875d03 */
  if (!C.zf) goto L_10875d03;
  /* 10875cb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875cb4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10875cb7 cmp ecx, dword ptr [0x1089ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1089ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875cbd jg 0x10875d03 */
  if ((!C.zf&&C.sf==C.of)) goto L_10875d03;
  /* 10875cbf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875cc3 je 0x10875cd0 */
  if (C.zf) goto L_10875cd0;
  /* 10875cc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10875cc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875ccb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10875cce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10875cd0:;
  /* 10875cd0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875cd4 je 0x10875ce1 */
  if (C.zf) goto L_10875ce1;
  /* 10875cd6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10875cd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875cdc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10875cdf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10875ce1:;
  /* 10875ce1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875ce5 je 0x10875cf2 */
  if (C.zf) goto L_10875cf2;
  /* 10875ce7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10875cea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875ced mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10875cf0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10875cf2:;
  /* 10875cf2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10875cf4 call 0x10878040 */
  push32(0x10875cf9u); f_10878040();
  /* 10875cf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875cfc mov eax, 1 */
  EAX = (0x1u);
  /* 10875d01 jmp 0x10875d0f */
  goto L_10875d0f;
L_10875d03:;
  /* 10875d03 push 9 */
  push32((uint32_t)(0x9u));
  /* 10875d05 call 0x10878040 */
  push32(0x10875d0au); f_10878040();
  /* 10875d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875d0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10875d0f:;
  /* 10875d0f mov esp, ebp */
  ESP = (EBP);
  /* 10875d11 pop ebp */
  EBP = (pop32());
  /* 10875d12 ret  */
  ESPCHK(0x10875c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d20 @ 0x10875d20 (28 bytes, 11 insns) */
void f_10875d20(void) {
  FTRACE(0x10875d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10875d21 mov ebp, esp */
  EBP = (ESP);
  /* 10875d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10875d24 mov eax, dword ptr [0x108a1ff8] */
  EAX = (r32((uint32_t)(0x108a1ff8)));
  /* 10875d29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10875d2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875d2f mov dword ptr [0x108a1ff8], ecx */
  w32((uint32_t)(0x108a1ff8), (ECX));
  /* 10875d35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875d38 mov esp, ebp */
  ESP = (EBP);
  /* 10875d3a pop ebp */
  EBP = (pop32());
  /* 10875d3b ret  */
  ESPCHK(0x10875d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d40 @ 0x10875d40 (362 bytes, 116 insns) */
void f_10875d40(void) {
  FTRACE(0x10875d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10875d41 mov ebp, esp */
  EBP = (ESP);
  /* 10875d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875d46 push ebx */
  push32((uint32_t)(EBX));
  /* 10875d47 push esi */
  push32((uint32_t)(ESI));
  /* 10875d48 push edi */
  push32((uint32_t)(EDI));
  /* 10875d49 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875d4d jne 0x10875d7a */
  if (!C.zf) goto L_10875d7a;
L_10875d4f:;
  /* 10875d4f push 0x1089baa4 */
  push32((uint32_t)(0x1089baa4u));
  /* 10875d54 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 10875d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875d5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10875d5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10875d5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10875d61 call 0x10873660 */
  push32(0x10875d66u); f_10873660();
  /* 10875d66 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875d69 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875d6c jne 0x10875d6f */
  if (!C.zf) goto L_10875d6f;
  /* 10875d6e int3  */
  x86_unimpl("int3 @ 0x10875d6e");
L_10875d6f:;
  /* 10875d6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875d71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875d73 jne 0x10875d4f */
  if (!C.zf) goto L_10875d4f;
  /* 10875d75 jmp 0x10875ea3 */
  goto L_10875ea3;
L_10875d7a:;
  /* 10875d7a push 9 */
  push32((uint32_t)(0x9u));
  /* 10875d7c call 0x10877fa0 */
  push32(0x10875d81u); f_10877fa0();
  /* 10875d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875d84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875d87 mov edx, dword ptr [0x108a0684] */
  EDX = (r32((uint32_t)(0x108a0684)));
  /* 10875d8d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10875d8f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10875d96 jmp 0x10875da1 */
  goto L_10875da1;
L_10875d98:;
  /* 10875d98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875d9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875d9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10875da1:;
  /* 10875da1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875da5 jge 0x10875dc5 */
  if ((C.sf==C.of)) goto L_10875dc5;
  /* 10875da7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875daa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875dad mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10875db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875db8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875dbb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10875dc3 jmp 0x10875d98 */
  goto L_10875d98;
L_10875dc5:;
  /* 10875dc5 mov edx, dword ptr [0x108a0684] */
  EDX = (r32((uint32_t)(0x108a0684)));
  /* 10875dcb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10875dce jmp 0x10875dd8 */
  goto L_10875dd8;
L_10875dd0:;
  /* 10875dd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875dd3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10875dd5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10875dd8:;
  /* 10875dd8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875ddc je 0x10875e81 */
  if (C.zf) goto L_10875e81;
  /* 10875de2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875de5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10875de8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10875ded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875def jl 0x10875e57 */
  if ((C.sf!=C.of)) goto L_10875e57;
  /* 10875df1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875df4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10875df7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10875dfd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875e00 jge 0x10875e57 */
  if ((C.sf==C.of)) goto L_10875e57;
  /* 10875e02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875e05 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10875e08 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10875e0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875e11 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10875e15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875e18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875e1b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10875e1e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10875e24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875e27 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10875e2b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875e2e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10875e31 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10875e36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875e39 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10875e3d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875e40 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875e43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875e46 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10875e49 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10875e4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875e51 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10875e55 jmp 0x10875e7c */
  goto L_10875e7c;
L_10875e57:;
  /* 10875e57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875e5a push edx */
  push32((uint32_t)(EDX));
  /* 10875e5b push 0x1089ba80 */
  push32((uint32_t)(0x1089ba80u));
  /* 10875e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875e62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875e68 call 0x10873660 */
  push32(0x10875e6du); f_10873660();
  /* 10875e6d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875e70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875e73 jne 0x10875e76 */
  if (!C.zf) goto L_10875e76;
  /* 10875e75 int3  */
  x86_unimpl("int3 @ 0x10875e75");
L_10875e76:;
  /* 10875e76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875e78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875e7a jne 0x10875e57 */
  if (!C.zf) goto L_10875e57;
L_10875e7c:;
  /* 10875e7c jmp 0x10875dd0 */
  goto L_10875dd0;
L_10875e81:;
  /* 10875e81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875e84 mov edx, dword ptr [0x108a068c] */
  EDX = (r32((uint32_t)(0x108a068c)));
  /* 10875e8a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10875e8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875e90 mov ecx, dword ptr [0x108a0680] */
  ECX = (r32((uint32_t)(0x108a0680)));
  /* 10875e96 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10875e99 push 9 */
  push32((uint32_t)(0x9u));
  /* 10875e9b call 0x10878040 */
  push32(0x10875ea0u); f_10878040();
  /* 10875ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10875ea3:;
  /* 10875ea3 pop edi */
  EDI = (pop32());
  /* 10875ea4 pop esi */
  ESI = (pop32());
  /* 10875ea5 pop ebx */
  EBX = (pop32());
  /* 10875ea6 mov esp, ebp */
  ESP = (EBP);
  /* 10875ea8 pop ebp */
  EBP = (pop32());
  /* 10875ea9 ret  */
  ESPCHK(0x10875d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x10875eb0 (291 bytes, 95 insns) */
void f_10875eb0(void) {
  FTRACE(0x10875eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10875eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10875eb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10875eb7 push esi */
  push32((uint32_t)(ESI));
  /* 10875eb8 push edi */
  push32((uint32_t)(EDI));
  /* 10875eb9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10875ec0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875ec4 je 0x10875ed2 */
  if (C.zf) goto L_10875ed2;
  /* 10875ec6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875eca je 0x10875ed2 */
  if (C.zf) goto L_10875ed2;
  /* 10875ecc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875ed0 jne 0x10875f00 */
  if (!C.zf) goto L_10875f00;
L_10875ed2:;
  /* 10875ed2 push 0x1089bacc */
  push32((uint32_t)(0x1089baccu));
  /* 10875ed7 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 10875edc push 0 */
  push32((uint32_t)(0x0u));
  /* 10875ede push 0 */
  push32((uint32_t)(0x0u));
  /* 10875ee0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10875ee4 call 0x10873660 */
  push32(0x10875ee9u); f_10873660();
  /* 10875ee9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10875eec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875eef jne 0x10875ef2 */
  if (!C.zf) goto L_10875ef2;
  /* 10875ef1 int3  */
  x86_unimpl("int3 @ 0x10875ef1");
L_10875ef2:;
  /* 10875ef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10875ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875ef6 jne 0x10875ed2 */
  if (!C.zf) goto L_10875ed2;
  /* 10875ef8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10875efb jmp 0x10875fcc */
  goto L_10875fcc;
L_10875f00:;
  /* 10875f00 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10875f07 jmp 0x10875f12 */
  goto L_10875f12;
L_10875f09:;
  /* 10875f09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10875f0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10875f12:;
  /* 10875f12 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875f16 jge 0x10875f9c */
  if ((C.sf==C.of)) goto L_10875f9c;
  /* 10875f1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10875f22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f25 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10875f28 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10875f2c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875f30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875f36 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10875f3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f3d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10875f40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f43 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10875f46 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10875f4a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875f4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875f54 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10875f58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875f5e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875f63 jne 0x10875f72 */
  if (!C.zf) goto L_10875f72;
  /* 10875f65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10875f68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875f6b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875f70 je 0x10875f97 */
  if (C.zf) goto L_10875f97;
L_10875f72:;
  /* 10875f72 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875f76 je 0x10875f97 */
  if (C.zf) goto L_10875f97;
  /* 10875f78 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875f7c jne 0x10875f90 */
  if (!C.zf) goto L_10875f90;
  /* 10875f7e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10875f82 jne 0x10875f97 */
  if (!C.zf) goto L_10875f97;
  /* 10875f84 mov eax, dword ptr [0x1089ea84] */
  EAX = (r32((uint32_t)(0x1089ea84)));
  /* 10875f89 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10875f8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10875f8e je 0x10875f97 */
  if (C.zf) goto L_10875f97;
L_10875f90:;
  /* 10875f90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10875f97:;
  /* 10875f97 jmp 0x10875f09 */
  goto L_10875f09;
L_10875f9c:;
  /* 10875f9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10875f9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10875fa2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10875fa5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875fa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875fab mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10875fae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10875fb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10875fb4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10875fb7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875fba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875fbd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10875fc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10875fc3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10875fc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10875fcc:;
  /* 10875fcc pop edi */
  EDI = (pop32());
  /* 10875fcd pop esi */
  ESI = (pop32());
  /* 10875fce pop ebx */
  EBX = (pop32());
  /* 10875fcf mov esp, ebp */
  ESP = (EBP);
  /* 10875fd1 pop ebp */
  EBP = (pop32());
  /* 10875fd2 ret  */
  ESPCHK(0x10875eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x10875fe0 (697 bytes, 253 insns) */
void f_10875fe0(void) {
  FTRACE(0x10875fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10875fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10875fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10875fe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10875fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 10875fe7 push esi */
  push32((uint32_t)(ESI));
  /* 10875fe8 push edi */
  push32((uint32_t)(EDI));
  /* 10875fe9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10875ff0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10875ff2 call 0x10877fa0 */
  push32(0x10875ff7u); f_10877fa0();
  /* 10875ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10875ffa:;
  /* 10875ffa push 0x1089bbc4 */
  push32((uint32_t)(0x1089bbc4u));
  /* 10875fff push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 10876004 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876006 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087600a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087600c call 0x10873660 */
  push32(0x10876011u); f_10873660();
  /* 10876011 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876014 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876017 jne 0x1087601a */
  if (!C.zf) goto L_1087601a;
  /* 10876019 int3  */
  x86_unimpl("int3 @ 0x10876019");
L_1087601a:;
  /* 1087601a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087601c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087601e jne 0x10875ffa */
  if (!C.zf) goto L_10875ffa;
  /* 10876020 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876024 je 0x1087602e */
  if (C.zf) goto L_1087602e;
  /* 10876026 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10876029 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087602b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1087602e:;
  /* 1087602e mov eax, dword ptr [0x108a0684] */
  EAX = (r32((uint32_t)(0x108a0684)));
  /* 10876033 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10876036 jmp 0x10876040 */
  goto L_10876040;
L_10876038:;
  /* 10876038 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087603b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087603d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10876040:;
  /* 10876040 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876044 je 0x10876262 */
  if (C.zf) goto L_10876262;
  /* 1087604a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087604d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876050 je 0x10876262 */
  if (C.zf) goto L_10876262;
  /* 10876056 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876059 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1087605c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10876062 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876065 je 0x10876094 */
  if (C.zf) goto L_10876094;
  /* 10876067 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087606a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1087606d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10876073 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10876075 je 0x10876094 */
  if (C.zf) goto L_10876094;
  /* 10876077 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087607a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1087607d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10876082 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876085 jne 0x10876099 */
  if (!C.zf) goto L_10876099;
  /* 10876087 mov ecx, dword ptr [0x1089ea84] */
  ECX = (r32((uint32_t)(0x1089ea84)));
  /* 1087608d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10876090 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10876092 jne 0x10876099 */
  if (!C.zf) goto L_10876099;
L_10876094:;
  /* 10876094 jmp 0x1087625d */
  goto L_1087625d;
L_10876099:;
  /* 10876099 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087609c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108760a0 je 0x10876112 */
  if (C.zf) goto L_10876112;
  /* 108760a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108760a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108760a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108760a9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108760ac push ecx */
  push32((uint32_t)(ECX));
  /* 108760ad call 0x10875b50 */
  push32(0x108760b2u); f_10875b50();
  /* 108760b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108760b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108760b7 jne 0x108760e3 */
  if (!C.zf) goto L_108760e3;
L_108760b9:;
  /* 108760b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108760bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108760bf push eax */
  push32((uint32_t)(EAX));
  /* 108760c0 push 0x1089bbb0 */
  push32((uint32_t)(0x1089bbb0u));
  /* 108760c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108760c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108760c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108760cb push 0 */
  push32((uint32_t)(0x0u));
  /* 108760cd call 0x10873660 */
  push32(0x108760d2u); f_10873660();
  /* 108760d2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108760d5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108760d8 jne 0x108760db */
  if (!C.zf) goto L_108760db;
  /* 108760da int3  */
  x86_unimpl("int3 @ 0x108760da");
L_108760db:;
  /* 108760db xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108760dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108760df jne 0x108760b9 */
  if (!C.zf) goto L_108760b9;
  /* 108760e1 jmp 0x10876112 */
  goto L_10876112;
L_108760e3:;
  /* 108760e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108760e6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108760e9 push eax */
  push32((uint32_t)(EAX));
  /* 108760ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108760ed mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 108760f0 push edx */
  push32((uint32_t)(EDX));
  /* 108760f1 push 0x1089bba4 */
  push32((uint32_t)(0x1089bba4u));
  /* 108760f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108760f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108760fa push 0 */
  push32((uint32_t)(0x0u));
  /* 108760fc push 0 */
  push32((uint32_t)(0x0u));
  /* 108760fe call 0x10873660 */
  push32(0x10876103u); f_10873660();
  /* 10876103 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876106 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876109 jne 0x1087610c */
  if (!C.zf) goto L_1087610c;
  /* 1087610b int3  */
  x86_unimpl("int3 @ 0x1087610b");
L_1087610c:;
  /* 1087610c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087610e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10876110 jne 0x108760e3 */
  if (!C.zf) goto L_108760e3;
L_10876112:;
  /* 10876112 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876115 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10876118 push edx */
  push32((uint32_t)(EDX));
  /* 10876119 push 0x1089bb9c */
  push32((uint32_t)(0x1089bb9cu));
  /* 1087611e push 0 */
  push32((uint32_t)(0x0u));
  /* 10876120 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876122 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876124 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876126 call 0x10873660 */
  push32(0x1087612bu); f_10873660();
  /* 1087612b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087612e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876131 jne 0x10876134 */
  if (!C.zf) goto L_10876134;
  /* 10876133 int3  */
  x86_unimpl("int3 @ 0x10876133");
L_10876134:;
  /* 10876134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876136 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10876138 jne 0x10876112 */
  if (!C.zf) goto L_10876112;
  /* 1087613a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087613d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10876140 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10876146 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876149 jne 0x108761bc */
  if (!C.zf) goto L_108761bc;
L_1087614b:;
  /* 1087614b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087614e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10876151 push ecx */
  push32((uint32_t)(ECX));
  /* 10876152 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876155 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10876158 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1087615b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10876160 push eax */
  push32((uint32_t)(EAX));
  /* 10876161 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876164 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876167 push ecx */
  push32((uint32_t)(ECX));
  /* 10876168 push 0x1089bb68 */
  push32((uint32_t)(0x1089bb68u));
  /* 1087616d push 0 */
  push32((uint32_t)(0x0u));
  /* 1087616f push 0 */
  push32((uint32_t)(0x0u));
  /* 10876171 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876175 call 0x10873660 */
  push32(0x1087617au); f_10873660();
  /* 1087617a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087617d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876180 jne 0x10876183 */
  if (!C.zf) goto L_10876183;
  /* 10876182 int3  */
  x86_unimpl("int3 @ 0x10876182");
L_10876183:;
  /* 10876183 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10876185 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10876187 jne 0x1087614b */
  if (!C.zf) goto L_1087614b;
  /* 10876189 cmp dword ptr [0x108a1ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a1ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876190 je 0x108761ab */
  if (C.zf) goto L_108761ab;
  /* 10876192 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876195 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10876198 push ecx */
  push32((uint32_t)(ECX));
  /* 10876199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087619c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087619f push edx */
  push32((uint32_t)(EDX));
  /* 108761a0 call dword ptr [0x108a1ff8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a1ff8))), 0x108761a6u);
  /* 108761a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108761a9 jmp 0x108761b7 */
  goto L_108761b7;
L_108761ab:;
  /* 108761ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108761ae push eax */
  push32((uint32_t)(EAX));
  /* 108761af call 0x108762a0 */
  push32(0x108761b4u); f_108762a0();
  /* 108761b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108761b7:;
  /* 108761b7 jmp 0x1087625d */
  goto L_1087625d;
L_108761bc:;
  /* 108761bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108761bf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108761c3 jne 0x10876202 */
  if (!C.zf) goto L_10876202;
L_108761c5:;
  /* 108761c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108761c8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108761cb push eax */
  push32((uint32_t)(EAX));
  /* 108761cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108761cf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108761d2 push ecx */
  push32((uint32_t)(ECX));
  /* 108761d3 push 0x1089bb40 */
  push32((uint32_t)(0x1089bb40u));
  /* 108761d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108761da push 0 */
  push32((uint32_t)(0x0u));
  /* 108761dc push 0 */
  push32((uint32_t)(0x0u));
  /* 108761de push 0 */
  push32((uint32_t)(0x0u));
  /* 108761e0 call 0x10873660 */
  push32(0x108761e5u); f_10873660();
  /* 108761e5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108761e8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108761eb jne 0x108761ee */
  if (!C.zf) goto L_108761ee;
  /* 108761ed int3  */
  x86_unimpl("int3 @ 0x108761ed");
L_108761ee:;
  /* 108761ee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108761f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108761f2 jne 0x108761c5 */
  if (!C.zf) goto L_108761c5;
  /* 108761f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108761f7 push eax */
  push32((uint32_t)(EAX));
  /* 108761f8 call 0x108762a0 */
  push32(0x108761fdu); f_108762a0();
  /* 108761fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876200 jmp 0x1087625d */
  goto L_1087625d;
L_10876202:;
  /* 10876202 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876205 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10876208 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1087620e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876211 jne 0x1087625d */
  if (!C.zf) goto L_1087625d;
L_10876213:;
  /* 10876213 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876216 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10876219 push ecx */
  push32((uint32_t)(ECX));
  /* 1087621a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087621d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10876220 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10876223 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10876228 push eax */
  push32((uint32_t)(EAX));
  /* 10876229 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087622c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087622f push ecx */
  push32((uint32_t)(ECX));
  /* 10876230 push 0x1089bb0c */
  push32((uint32_t)(0x1089bb0cu));
  /* 10876235 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876237 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876239 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087623b push 0 */
  push32((uint32_t)(0x0u));
  /* 1087623d call 0x10873660 */
  push32(0x10876242u); f_10873660();
  /* 10876242 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876245 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876248 jne 0x1087624b */
  if (!C.zf) goto L_1087624b;
  /* 1087624a int3  */
  x86_unimpl("int3 @ 0x1087624a");
L_1087624b:;
  /* 1087624b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087624d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087624f jne 0x10876213 */
  if (!C.zf) goto L_10876213;
  /* 10876251 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876254 push eax */
  push32((uint32_t)(EAX));
  /* 10876255 call 0x108762a0 */
  push32(0x1087625au); f_108762a0();
  /* 1087625a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087625d:;
  /* 1087625d jmp 0x10876038 */
  goto L_10876038;
L_10876262:;
  /* 10876262 push 9 */
  push32((uint32_t)(0x9u));
  /* 10876264 call 0x10878040 */
  push32(0x10876269u); f_10878040();
  /* 10876269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087626c:;
  /* 1087626c push 0x1089baf4 */
  push32((uint32_t)(0x1089baf4u));
  /* 10876271 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 10876276 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1087627a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087627c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087627e call 0x10873660 */
  push32(0x10876283u); f_10873660();
  /* 10876283 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876286 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876289 jne 0x1087628c */
  if (!C.zf) goto L_1087628c;
  /* 1087628b int3  */
  x86_unimpl("int3 @ 0x1087628b");
L_1087628c:;
  /* 1087628c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1087628e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10876290 jne 0x1087626c */
  if (!C.zf) goto L_1087626c;
  /* 10876292 pop edi */
  EDI = (pop32());
  /* 10876293 pop esi */
  ESI = (pop32());
  /* 10876294 pop ebx */
  EBX = (pop32());
  /* 10876295 mov esp, ebp */
  ESP = (EBP);
  /* 10876297 pop ebp */
  EBP = (pop32());
  /* 10876298 ret  */
  ESPCHK(0x10875fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x108762a0 (276 bytes, 89 insns) */
void f_108762a0(void) {
  FTRACE(0x108762a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108762a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108762a1 mov ebp, esp */
  EBP = (ESP);
  /* 108762a3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108762a6 push ebx */
  push32((uint32_t)(EBX));
  /* 108762a7 push esi */
  push32((uint32_t)(ESI));
  /* 108762a8 push edi */
  push32((uint32_t)(EDI));
  /* 108762a9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 108762b0 jmp 0x108762bb */
  goto L_108762bb;
L_108762b2:;
  /* 108762b2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108762b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108762b8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_108762bb:;
  /* 108762bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108762be cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108762c2 jge 0x108762cf */
  if ((C.sf==C.of)) goto L_108762cf;
  /* 108762c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108762c7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108762ca mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 108762cd jmp 0x108762d6 */
  goto L_108762d6;
L_108762cf:;
  /* 108762cf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_108762d6:;
  /* 108762d6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 108762d9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108762dc jge 0x1087637c */
  if ((C.sf==C.of)) goto L_1087637c;
  /* 108762e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108762e5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108762e8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 108762eb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 108762ee cmp dword ptr [0x1089eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1089eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108762f5 jle 0x10876313 */
  if ((C.zf||C.sf!=C.of)) goto L_10876313;
  /* 108762f7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 108762fc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 108762ff and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10876305 push ecx */
  push32((uint32_t)(ECX));
  /* 10876306 call 0x1087a5b0 */
  push32(0x1087630bu); f_1087a5b0();
  /* 1087630b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087630e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10876311 jmp 0x10876330 */
  goto L_10876330;
L_10876313:;
  /* 10876313 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10876316 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1087631c mov eax, dword ptr [0x1089ec98] */
  EAX = (r32((uint32_t)(0x1089ec98)));
  /* 10876321 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10876323 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10876327 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1087632d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10876330:;
  /* 10876330 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876334 je 0x10876344 */
  if (C.zf) goto L_10876344;
  /* 10876336 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10876339 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1087633f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10876342 jmp 0x1087634b */
  goto L_1087634b;
L_10876344:;
  /* 10876344 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1087634b:;
  /* 1087634b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1087634e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10876351 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10876355 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10876358 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1087635e push edx */
  push32((uint32_t)(EDX));
  /* 1087635f push 0x1089bbe8 */
  push32((uint32_t)(0x1089bbe8u));
  /* 10876364 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10876367 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087636a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1087636e push ecx */
  push32((uint32_t)(ECX));
  /* 1087636f call 0x1087a4b0 */
  push32(0x10876374u); f_1087a4b0();
  /* 10876374 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876377 jmp 0x108762b2 */
  goto L_108762b2;
L_1087637c:;
  /* 1087637c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1087637f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10876384:;
  /* 10876384 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10876387 push eax */
  push32((uint32_t)(EAX));
  /* 10876388 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1087638b push ecx */
  push32((uint32_t)(ECX));
  /* 1087638c push 0x1089bbd8 */
  push32((uint32_t)(0x1089bbd8u));
  /* 10876391 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876393 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876395 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876397 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876399 call 0x10873660 */
  push32(0x1087639eu); f_10873660();
  /* 1087639e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108763a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108763a4 jne 0x108763a7 */
  if (!C.zf) goto L_108763a7;
  /* 108763a6 int3  */
  x86_unimpl("int3 @ 0x108763a6");
L_108763a7:;
  /* 108763a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108763a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108763ab jne 0x10876384 */
  if (!C.zf) goto L_10876384;
  /* 108763ad pop edi */
  EDI = (pop32());
  /* 108763ae pop esi */
  ESI = (pop32());
  /* 108763af pop ebx */
  EBX = (pop32());
  /* 108763b0 mov esp, ebp */
  ESP = (EBP);
  /* 108763b2 pop ebp */
  EBP = (pop32());
  /* 108763b3 ret  */
  ESPCHK(0x108762a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063c0 @ 0x108763c0 (116 bytes, 46 insns) */
void f_108763c0(void) {
  FTRACE(0x108763c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108763c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108763c1 mov ebp, esp */
  EBP = (ESP);
  /* 108763c3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108763c6 push ebx */
  push32((uint32_t)(EBX));
  /* 108763c7 push esi */
  push32((uint32_t)(ESI));
  /* 108763c8 push edi */
  push32((uint32_t)(EDI));
  /* 108763c9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 108763cc push eax */
  push32((uint32_t)(EAX));
  /* 108763cd call 0x10875d40 */
  push32(0x108763d2u); f_10875d40();
  /* 108763d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108763d5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108763d9 jne 0x108763f4 */
  if (!C.zf) goto L_108763f4;
  /* 108763db cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108763df jne 0x108763f4 */
  if (!C.zf) goto L_108763f4;
  /* 108763e1 mov ecx, dword ptr [0x1089ea84] */
  ECX = (r32((uint32_t)(0x1089ea84)));
  /* 108763e7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 108763ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108763ec je 0x1087642b */
  if (C.zf) goto L_1087642b;
  /* 108763ee cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108763f2 je 0x1087642b */
  if (C.zf) goto L_1087642b;
L_108763f4:;
  /* 108763f4 push 0x1089bbf0 */
  push32((uint32_t)(0x1089bbf0u));
  /* 108763f9 push 0x1089b5bc */
  push32((uint32_t)(0x1089b5bcu));
  /* 108763fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10876400 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876402 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876404 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876406 call 0x10873660 */
  push32(0x1087640bu); f_10873660();
  /* 1087640b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087640e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876411 jne 0x10876414 */
  if (!C.zf) goto L_10876414;
  /* 10876413 int3  */
  x86_unimpl("int3 @ 0x10876413");
L_10876414:;
  /* 10876414 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10876416 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10876418 jne 0x108763f4 */
  if (!C.zf) goto L_108763f4;
  /* 1087641a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087641c call 0x10875fe0 */
  push32(0x10876421u); f_10875fe0();
  /* 10876421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876424 mov eax, 1 */
  EAX = (0x1u);
  /* 10876429 jmp 0x1087642d */
  goto L_1087642d;
L_1087642b:;
  /* 1087642b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1087642d:;
  /* 1087642d pop edi */
  EDI = (pop32());
  /* 1087642e pop esi */
  ESI = (pop32());
  /* 1087642f pop ebx */
  EBX = (pop32());
  /* 10876430 mov esp, ebp */
  ESP = (EBP);
  /* 10876432 pop ebp */
  EBP = (pop32());
  /* 10876433 ret  */
  ESPCHK(0x108763c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006440 @ 0x10876440 (197 bytes, 79 insns) */
void f_10876440(void) {
  FTRACE(0x10876440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876440 push ebp */
  push32((uint32_t)(EBP));
  /* 10876441 mov ebp, esp */
  EBP = (ESP);
  /* 10876443 push ecx */
  push32((uint32_t)(ECX));
  /* 10876444 push ebx */
  push32((uint32_t)(EBX));
  /* 10876445 push esi */
  push32((uint32_t)(ESI));
  /* 10876446 push edi */
  push32((uint32_t)(EDI));
  /* 10876447 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087644b jne 0x10876452 */
  if (!C.zf) goto L_10876452;
  /* 1087644d jmp 0x108764fe */
  goto L_108764fe;
L_10876452:;
  /* 10876452 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10876459 jmp 0x10876464 */
  goto L_10876464;
L_1087645b:;
  /* 1087645b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087645e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876461 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10876464:;
  /* 10876464 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876468 jge 0x108764ae */
  if ((C.sf==C.of)) goto L_108764ae;
L_1087646a:;
  /* 1087646a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087646d mov edx, dword ptr [ecx*4 + 0x1089ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089ea94)));
  /* 10876474 push edx */
  push32((uint32_t)(EDX));
  /* 10876475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876478 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087647b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1087647f push edx */
  push32((uint32_t)(EDX));
  /* 10876480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876483 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10876486 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1087648a push edx */
  push32((uint32_t)(EDX));
  /* 1087648b push 0x1089bc4c */
  push32((uint32_t)(0x1089bc4cu));
  /* 10876490 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876494 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876496 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876498 call 0x10873660 */
  push32(0x1087649du); f_10873660();
  /* 1087649d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108764a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108764a3 jne 0x108764a6 */
  if (!C.zf) goto L_108764a6;
  /* 108764a5 int3  */
  x86_unimpl("int3 @ 0x108764a5");
L_108764a6:;
  /* 108764a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108764a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108764aa jne 0x1087646a */
  if (!C.zf) goto L_1087646a;
  /* 108764ac jmp 0x1087645b */
  goto L_1087645b;
L_108764ae:;
  /* 108764ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108764b1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 108764b4 push edx */
  push32((uint32_t)(EDX));
  /* 108764b5 push 0x1089bc28 */
  push32((uint32_t)(0x1089bc28u));
  /* 108764ba push 0 */
  push32((uint32_t)(0x0u));
  /* 108764bc push 0 */
  push32((uint32_t)(0x0u));
  /* 108764be push 0 */
  push32((uint32_t)(0x0u));
  /* 108764c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108764c2 call 0x10873660 */
  push32(0x108764c7u); f_10873660();
  /* 108764c7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108764ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108764cd jne 0x108764d0 */
  if (!C.zf) goto L_108764d0;
  /* 108764cf int3  */
  x86_unimpl("int3 @ 0x108764cf");
L_108764d0:;
  /* 108764d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108764d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108764d4 jne 0x108764ae */
  if (!C.zf) goto L_108764ae;
L_108764d6:;
  /* 108764d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108764d9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 108764dc push edx */
  push32((uint32_t)(EDX));
  /* 108764dd push 0x1089bc08 */
  push32((uint32_t)(0x1089bc08u));
  /* 108764e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108764e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108764e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108764e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108764ea call 0x10873660 */
  push32(0x108764efu); f_10873660();
  /* 108764ef add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108764f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108764f5 jne 0x108764f8 */
  if (!C.zf) goto L_108764f8;
  /* 108764f7 int3  */
  x86_unimpl("int3 @ 0x108764f7");
L_108764f8:;
  /* 108764f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108764fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108764fc jne 0x108764d6 */
  if (!C.zf) goto L_108764d6;
L_108764fe:;
  /* 108764fe pop edi */
  EDI = (pop32());
  /* 108764ff pop esi */
  ESI = (pop32());
  /* 10876500 pop ebx */
  EBX = (pop32());
  /* 10876501 mov esp, ebp */
  ESP = (EBP);
  /* 10876503 pop ebp */
  EBP = (pop32());
  /* 10876504 ret  */
  ESPCHK(0x10876440u, _esp0);
  ESP += 4; return;
}

/* FUN_10006510 @ 0x10876510 (329 bytes, 102 insns) */
void f_10876510(void) {
  FTRACE(0x10876510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876510 push ebp */
  push32((uint32_t)(EBP));
  /* 10876511 mov ebp, esp */
  EBP = (ESP);
  /* 10876513 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876516 cmp dword ptr [0x108a2170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a2170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087651d jne 0x10876524 */
  if (!C.zf) goto L_10876524;
  /* 1087651f call 0x1087ae50 */
  push32(0x10876524u); f_1087ae50();
L_10876524:;
  /* 10876524 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1087652b mov eax, dword ptr [0x108a0620] */
  EAX = (r32((uint32_t)(0x108a0620)));
  /* 10876530 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10876533:;
  /* 10876533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876536 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10876539 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087653b je 0x10876569 */
  if (C.zf) goto L_10876569;
  /* 1087653d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876540 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10876543 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876546 je 0x10876551 */
  if (C.zf) goto L_10876551;
  /* 10876548 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087654b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087654e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10876551:;
  /* 10876551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876554 push eax */
  push32((uint32_t)(EAX));
  /* 10876555 call 0x108773d0 */
  push32(0x1087655au); f_108773d0();
  /* 1087655a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087655d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876560 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10876564 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10876567 jmp 0x10876533 */
  goto L_10876533;
L_10876569:;
  /* 10876569 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1087656b push 0x1089bc6c */
  push32((uint32_t)(0x1089bc6cu));
  /* 10876570 push 2 */
  push32((uint32_t)(0x2u));
  /* 10876572 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876575 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1087657c push ecx */
  push32((uint32_t)(ECX));
  /* 1087657d call 0x108745a0 */
  push32(0x10876582u); f_108745a0();
  /* 10876582 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876585 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10876588 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087658b mov dword ptr [0x108a0654], edx */
  w32((uint32_t)(0x108a0654), (EDX));
  /* 10876591 cmp dword ptr [0x108a0654], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0654))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876598 jne 0x108765a4 */
  if (!C.zf) goto L_108765a4;
  /* 1087659a push 9 */
  push32((uint32_t)(0x9u));
  /* 1087659c call 0x10873510 */
  push32(0x108765a1u); f_10873510();
  /* 108765a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108765a4:;
  /* 108765a4 mov eax, dword ptr [0x108a0620] */
  EAX = (r32((uint32_t)(0x108a0620)));
  /* 108765a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108765ac jmp 0x108765b7 */
  goto L_108765b7;
L_108765ae:;
  /* 108765ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108765b1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108765b4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108765b7:;
  /* 108765b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108765ba movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108765bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108765bf je 0x10876627 */
  if (C.zf) goto L_10876627;
  /* 108765c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108765c4 push ecx */
  push32((uint32_t)(ECX));
  /* 108765c5 call 0x108773d0 */
  push32(0x108765cau); f_108773d0();
  /* 108765ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108765cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108765d0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108765d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108765d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108765d9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108765dc je 0x10876625 */
  if (C.zf) goto L_10876625;
  /* 108765de push 0x79 */
  push32((uint32_t)(0x79u));
  /* 108765e0 push 0x1089bc6c */
  push32((uint32_t)(0x1089bc6cu));
  /* 108765e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 108765e7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108765ea push ecx */
  push32((uint32_t)(ECX));
  /* 108765eb call 0x108745a0 */
  push32(0x108765f0u); f_108745a0();
  /* 108765f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108765f3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108765f6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108765f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108765fb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108765fe jne 0x1087660a */
  if (!C.zf) goto L_1087660a;
  /* 10876600 push 9 */
  push32((uint32_t)(0x9u));
  /* 10876602 call 0x10873510 */
  push32(0x10876607u); f_10873510();
  /* 10876607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087660a:;
  /* 1087660a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087660d push ecx */
  push32((uint32_t)(ECX));
  /* 1087660e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876611 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10876613 push eax */
  push32((uint32_t)(EAX));
  /* 10876614 call 0x10877550 */
  push32(0x10876619u); f_10877550();
  /* 10876619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087661c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087661f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876622 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10876625:;
  /* 10876625 jmp 0x108765ae */
  goto L_108765ae;
L_10876627:;
  /* 10876627 push 2 */
  push32((uint32_t)(0x2u));
  /* 10876629 mov edx, dword ptr [0x108a0620] */
  EDX = (r32((uint32_t)(0x108a0620)));
  /* 1087662f push edx */
  push32((uint32_t)(EDX));
  /* 10876630 call 0x10875030 */
  push32(0x10876635u); f_10875030();
  /* 10876635 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876638 mov dword ptr [0x108a0620], 0 */
  w32((uint32_t)(0x108a0620), (0x0u));
  /* 10876642 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876645 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087664b mov dword ptr [0x108a2160], 1 */
  w32((uint32_t)(0x108a2160), (0x1u));
  /* 10876655 mov esp, ebp */
  ESP = (EBP);
  /* 10876657 pop ebp */
  EBP = (pop32());
  /* 10876658 ret  */
  ESPCHK(0x10876510u, _esp0);
  ESP += 4; return;
}

/* FUN_10006660 @ 0x10876660 (216 bytes, 69 insns) */
void f_10876660(void) {
  FTRACE(0x10876660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876660 push ebp */
  push32((uint32_t)(EBP));
  /* 10876661 mov ebp, esp */
  EBP = (ESP);
  /* 10876663 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876666 cmp dword ptr [0x108a2170], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a2170))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087666d jne 0x10876674 */
  if (!C.zf) goto L_10876674;
  /* 1087666f call 0x1087ae50 */
  push32(0x10876674u); f_1087ae50();
L_10876674:;
  /* 10876674 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10876679 push 0x108a0690 */
  push32((uint32_t)(0x108a0690u));
  /* 1087667e push 0 */
  push32((uint32_t)(0x0u));
  /* 10876680 call dword ptr [0x108a338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a338c))), 0x10876686u);
  /* 10876686 mov dword ptr [0x108a0664], 0x108a0690 */
  w32((uint32_t)(0x108a0664), (0x108a0690u));
  /* 10876690 mov eax, dword ptr [0x108a218c] */
  EAX = (r32((uint32_t)(0x108a218c)));
  /* 10876695 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10876698 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1087669a jne 0x108766a7 */
  if (!C.zf) goto L_108766a7;
  /* 1087669c mov edx, dword ptr [0x108a0664] */
  EDX = (r32((uint32_t)(0x108a0664)));
  /* 108766a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 108766a5 jmp 0x108766af */
  goto L_108766af;
L_108766a7:;
  /* 108766a7 mov eax, dword ptr [0x108a218c] */
  EAX = (r32((uint32_t)(0x108a218c)));
  /* 108766ac mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_108766af:;
  /* 108766af mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 108766b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 108766b5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 108766b8 push edx */
  push32((uint32_t)(EDX));
  /* 108766b9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 108766bc push eax */
  push32((uint32_t)(EAX));
  /* 108766bd push 0 */
  push32((uint32_t)(0x0u));
  /* 108766bf push 0 */
  push32((uint32_t)(0x0u));
  /* 108766c1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108766c4 push ecx */
  push32((uint32_t)(ECX));
  /* 108766c5 call 0x10876740 */
  push32(0x108766cau); f_10876740();
  /* 108766ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108766cd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 108766d2 push 0x1089bc78 */
  push32((uint32_t)(0x1089bc78u));
  /* 108766d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108766d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108766dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108766df lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 108766e2 push ecx */
  push32((uint32_t)(ECX));
  /* 108766e3 call 0x108745a0 */
  push32(0x108766e8u); f_108745a0();
  /* 108766e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108766eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108766ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108766f2 jne 0x108766fe */
  if (!C.zf) goto L_108766fe;
  /* 108766f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 108766f6 call 0x10873510 */
  push32(0x108766fbu); f_10873510();
  /* 108766fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108766fe:;
  /* 108766fe lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10876701 push edx */
  push32((uint32_t)(EDX));
  /* 10876702 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10876705 push eax */
  push32((uint32_t)(EAX));
  /* 10876706 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876709 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087670c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1087670f push eax */
  push32((uint32_t)(EAX));
  /* 10876710 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876713 push ecx */
  push32((uint32_t)(ECX));
  /* 10876714 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10876717 push edx */
  push32((uint32_t)(EDX));
  /* 10876718 call 0x10876740 */
  push32(0x1087671du); f_10876740();
  /* 1087671d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876720 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876723 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876726 mov dword ptr [0x108a0648], eax */
  w32((uint32_t)(0x108a0648), (EAX));
  /* 1087672b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087672e mov dword ptr [0x108a064c], ecx */
  w32((uint32_t)(0x108a064c), (ECX));
  /* 10876734 mov esp, ebp */
  ESP = (EBP);
  /* 10876736 pop ebp */
  EBP = (pop32());
  /* 10876737 ret  */
  ESPCHK(0x10876660u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x10876740 (1060 bytes, 360 insns) */
void f_10876740(void) {
  FTRACE(0x10876740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876740 push ebp */
  push32((uint32_t)(EBP));
  /* 10876741 mov ebp, esp */
  EBP = (ESP);
  /* 10876743 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876746 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876749 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1087674f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10876752 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10876758 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087675b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087675e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876762 je 0x10876775 */
  if (C.zf) goto L_10876775;
  /* 10876764 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10876767 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087676a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1087676c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087676f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876772 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10876775:;
  /* 10876775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876778 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087677b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087677e jne 0x1087684d */
  if (!C.zf) goto L_1087684d;
L_10876784:;
  /* 10876784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876787 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087678a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087678d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876790 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10876793 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876796 je 0x10876812 */
  if (C.zf) goto L_10876812;
  /* 10876798 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087679b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1087679e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108767a0 je 0x10876812 */
  if (C.zf) goto L_10876812;
  /* 108767a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108767a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108767a7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108767a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108767ab mov al, byte ptr [edx + 0x108a1ec1] */
  AL = (r8((uint32_t)(EDX + 0x108a1ec1)));
  /* 108767b1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108767b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108767b6 je 0x108767e7 */
  if (C.zf) goto L_108767e7;
  /* 108767b8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108767bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108767bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108767c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108767c3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 108767c5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108767c9 je 0x108767e7 */
  if (C.zf) goto L_108767e7;
  /* 108767cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108767ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108767d1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108767d3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 108767d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108767d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108767db mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 108767de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108767e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108767e4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108767e7:;
  /* 108767e7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108767ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108767ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108767ef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108767f2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108767f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108767f8 je 0x1087680d */
  if (C.zf) goto L_1087680d;
  /* 108767fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108767fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876800 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10876802 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10876804 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876807 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087680a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1087680d:;
  /* 1087680d jmp 0x10876784 */
  goto L_10876784;
L_10876812:;
  /* 10876812 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876815 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10876817 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087681a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1087681d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1087681f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876823 je 0x10876834 */
  if (C.zf) goto L_10876834;
  /* 10876825 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876828 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1087682b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087682e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876831 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10876834:;
  /* 10876834 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876837 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087683a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087683d jne 0x10876848 */
  if (!C.zf) goto L_10876848;
  /* 1087683f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876842 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876845 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10876848:;
  /* 10876848 jmp 0x1087691c */
  goto L_1087691c;
L_1087684d:;
  /* 1087684d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876850 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10876852 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876855 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876858 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1087685a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087685e je 0x10876873 */
  if (C.zf) goto L_10876873;
  /* 10876860 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876863 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876866 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10876868 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1087686a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087686d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876870 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10876873:;
  /* 10876873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876876 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10876878 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1087687b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087687e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876881 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10876884 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876887 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1087688d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087688f mov dl, byte ptr [ecx + 0x108a1ec1] */
  DL = (r8((uint32_t)(ECX + 0x108a1ec1)));
  /* 10876895 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10876898 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087689a je 0x108768cb */
  if (C.zf) goto L_108768cb;
  /* 1087689c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1087689f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108768a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108768a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108768a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108768a9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108768ad je 0x108768c2 */
  if (C.zf) goto L_108768c2;
  /* 108768af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108768b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108768b5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108768b7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108768b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108768bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108768bf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108768c2:;
  /* 108768c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108768c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108768c8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108768cb:;
  /* 108768cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108768ce and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108768d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108768d7 je 0x108768f7 */
  if (C.zf) goto L_108768f7;
  /* 108768d9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108768dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108768e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108768e3 je 0x108768f7 */
  if (C.zf) goto L_108768f7;
  /* 108768e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108768e8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108768ee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108768f1 jne 0x1087684d */
  if (!C.zf) goto L_1087684d;
L_108768f7:;
  /* 108768f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108768fa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10876900 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10876902 jne 0x1087690f */
  if (!C.zf) goto L_1087690f;
  /* 10876904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876907 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087690a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087690d jmp 0x1087691c */
  goto L_1087691c;
L_1087690f:;
  /* 1087690f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876913 je 0x1087691c */
  if (C.zf) goto L_1087691c;
  /* 10876915 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876918 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1087691c:;
  /* 1087691c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10876923:;
  /* 10876923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876926 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10876929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1087692b je 0x1087694e */
  if (C.zf) goto L_1087694e;
L_1087692d:;
  /* 1087692d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876930 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10876933 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876936 je 0x10876943 */
  if (C.zf) goto L_10876943;
  /* 10876938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087693b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1087693e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876941 jne 0x1087694e */
  if (!C.zf) goto L_1087694e;
L_10876943:;
  /* 10876943 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876946 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876949 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087694c jmp 0x1087692d */
  goto L_1087692d;
L_1087694e:;
  /* 1087694e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876951 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10876954 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10876956 jne 0x1087695d */
  if (!C.zf) goto L_1087695d;
  /* 10876958 jmp 0x10876b3b */
  goto L_10876b3b;
L_1087695d:;
  /* 1087695d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876961 je 0x10876974 */
  if (C.zf) goto L_10876974;
  /* 10876963 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10876966 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876969 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1087696b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087696e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876971 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10876974:;
  /* 10876974 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10876977 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10876979 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087697c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087697f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10876981:;
  /* 10876981 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10876988 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1087698f:;
  /* 1087698f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876992 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10876995 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876998 jne 0x108769ae */
  if (!C.zf) goto L_108769ae;
  /* 1087699a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087699d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108769a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108769a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108769a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108769a9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108769ac jmp 0x1087698f */
  goto L_1087698f;
L_108769ae:;
  /* 108769ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108769b1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108769b4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108769b7 jne 0x10876a0a */
  if (!C.zf) goto L_10876a0a;
  /* 108769b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108769bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108769be mov ecx, 2 */
  ECX = (0x2u);
  /* 108769c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108769c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108769c7 jne 0x10876a02 */
  if (!C.zf) goto L_10876a02;
  /* 108769c9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108769cd je 0x108769ef */
  if (C.zf) goto L_108769ef;
  /* 108769cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108769d2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 108769d6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108769d9 jne 0x108769e6 */
  if (!C.zf) goto L_108769e6;
  /* 108769db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108769de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108769e1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108769e4 jmp 0x108769ed */
  goto L_108769ed;
L_108769e6:;
  /* 108769e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108769ed:;
  /* 108769ed jmp 0x108769f6 */
  goto L_108769f6;
L_108769ef:;
  /* 108769ef mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_108769f6:;
  /* 108769f6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108769f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108769fc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 108769ff mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10876a02:;
  /* 10876a02 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10876a05 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10876a07 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10876a0a:;
  /* 10876a0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10876a0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10876a10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876a13 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10876a16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10876a18 je 0x10876a3e */
  if (C.zf) goto L_10876a3e;
  /* 10876a1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876a1e je 0x10876a2f */
  if (C.zf) goto L_10876a2f;
  /* 10876a20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876a23 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10876a26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876a29 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876a2c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10876a2f:;
  /* 10876a2f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876a32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10876a34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876a37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876a3a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10876a3c jmp 0x10876a0a */
  goto L_10876a0a;
L_10876a3e:;
  /* 10876a3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876a41 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10876a44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10876a46 je 0x10876a64 */
  if (C.zf) goto L_10876a64;
  /* 10876a48 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876a4c jne 0x10876a69 */
  if (!C.zf) goto L_10876a69;
  /* 10876a4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876a51 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10876a54 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876a57 je 0x10876a64 */
  if (C.zf) goto L_10876a64;
  /* 10876a59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876a5c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10876a5f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876a62 jne 0x10876a69 */
  if (!C.zf) goto L_10876a69;
L_10876a64:;
  /* 10876a64 jmp 0x10876b14 */
  goto L_10876b14;
L_10876a69:;
  /* 10876a69 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876a6d je 0x10876b06 */
  if (C.zf) goto L_10876b06;
  /* 10876a73 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876a77 je 0x10876acd */
  if (C.zf) goto L_10876acd;
  /* 10876a79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876a7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876a7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10876a80 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10876a82 mov cl, byte ptr [eax + 0x108a1ec1] */
  CL = (r8((uint32_t)(EAX + 0x108a1ec1)));
  /* 10876a88 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10876a8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10876a8d je 0x10876ab8 */
  if (C.zf) goto L_10876ab8;
  /* 10876a8f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876a92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876a95 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10876a97 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10876a99 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876a9c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876a9f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10876aa2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876aa5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876aa8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10876aab mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876aae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10876ab0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876ab3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876ab6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10876ab8:;
  /* 10876ab8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876abb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876abe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10876ac0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10876ac2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876ac5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876ac8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10876acb jmp 0x10876af9 */
  goto L_10876af9;
L_10876acd:;
  /* 10876acd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876ad2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10876ad4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10876ad6 mov cl, byte ptr [eax + 0x108a1ec1] */
  CL = (r8((uint32_t)(EAX + 0x108a1ec1)));
  /* 10876adc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10876adf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10876ae1 je 0x10876af9 */
  if (C.zf) goto L_10876af9;
  /* 10876ae3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876ae6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876ae9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10876aec mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876aef mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10876af1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876af4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876af7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10876af9:;
  /* 10876af9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876afc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10876afe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876b01 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876b04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10876b06:;
  /* 10876b06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876b09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876b0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10876b0f jmp 0x10876981 */
  goto L_10876981;
L_10876b14:;
  /* 10876b14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876b18 je 0x10876b29 */
  if (C.zf) goto L_10876b29;
  /* 10876b1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876b1d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10876b20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10876b23 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876b26 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10876b29:;
  /* 10876b29 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876b2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10876b2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876b31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10876b34 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10876b36 jmp 0x10876923 */
  goto L_10876923;
L_10876b3b:;
  /* 10876b3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876b3f je 0x10876b53 */
  if (C.zf) goto L_10876b53;
  /* 10876b41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10876b44 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10876b4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10876b4d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876b50 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10876b53:;
  /* 10876b53 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10876b56 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10876b58 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876b5b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10876b5e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10876b60 mov esp, ebp */
  ESP = (EBP);
  /* 10876b62 pop ebp */
  EBP = (pop32());
  /* 10876b63 ret  */
  ESPCHK(0x10876740u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x10876b70 (537 bytes, 173 insns) */
void f_10876b70(void) {
  FTRACE(0x10876b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10876b71 mov ebp, esp */
  EBP = (ESP);
  /* 10876b73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876b76 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10876b7d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10876b84 cmp dword ptr [0x108a0794], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0794))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876b8b jne 0x10876bca */
  if (!C.zf) goto L_10876bca;
  /* 10876b8d call dword ptr [0x108a3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3360))), 0x10876b93u);
  /* 10876b93 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10876b96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876b9a je 0x10876ba8 */
  if (C.zf) goto L_10876ba8;
  /* 10876b9c mov dword ptr [0x108a0794], 1 */
  w32((uint32_t)(0x108a0794), (0x1u));
  /* 10876ba6 jmp 0x10876bca */
  goto L_10876bca;
L_10876ba8:;
  /* 10876ba8 call dword ptr [0x108a3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3358))), 0x10876baeu);
  /* 10876bae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10876bb1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876bb5 je 0x10876bc3 */
  if (C.zf) goto L_10876bc3;
  /* 10876bb7 mov dword ptr [0x108a0794], 2 */
  w32((uint32_t)(0x108a0794), (0x2u));
  /* 10876bc1 jmp 0x10876bca */
  goto L_10876bca;
L_10876bc3:;
  /* 10876bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876bc5 jmp 0x10876d85 */
  goto L_10876d85;
L_10876bca:;
  /* 10876bca cmp dword ptr [0x108a0794], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a0794))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876bd1 jne 0x10876cce */
  if (!C.zf) goto L_10876cce;
  /* 10876bd7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876bdb jne 0x10876bf3 */
  if (!C.zf) goto L_10876bf3;
  /* 10876bdd call dword ptr [0x108a3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3360))), 0x10876be3u);
  /* 10876be3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10876be6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876bea jne 0x10876bf3 */
  if (!C.zf) goto L_10876bf3;
  /* 10876bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876bee jmp 0x10876d85 */
  goto L_10876d85;
L_10876bf3:;
  /* 10876bf3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10876bf6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10876bf9:;
  /* 10876bf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876bfc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10876bfe mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10876c01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10876c03 je 0x10876c25 */
  if (C.zf) goto L_10876c25;
  /* 10876c05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876c08 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876c0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10876c0e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876c11 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10876c13 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10876c16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10876c18 jne 0x10876c23 */
  if (!C.zf) goto L_10876c23;
  /* 10876c1a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876c1d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876c20 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10876c23:;
  /* 10876c23 jmp 0x10876bf9 */
  goto L_10876bf9;
L_10876c25:;
  /* 10876c25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876c28 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876c2b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10876c2d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876c30 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10876c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876c3e push edx */
  push32((uint32_t)(EDX));
  /* 10876c3f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10876c42 push eax */
  push32((uint32_t)(EAX));
  /* 10876c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c47 call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10876c4du);
  /* 10876c4d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10876c50 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876c54 je 0x10876c74 */
  if (C.zf) goto L_10876c74;
  /* 10876c56 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10876c58 push 0x1089bc84 */
  push32((uint32_t)(0x1089bc84u));
  /* 10876c5d push 2 */
  push32((uint32_t)(0x2u));
  /* 10876c5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10876c62 push ecx */
  push32((uint32_t)(ECX));
  /* 10876c63 call 0x108745a0 */
  push32(0x10876c68u); f_108745a0();
  /* 10876c68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876c6b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10876c6e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876c72 jne 0x10876c85 */
  if (!C.zf) goto L_10876c85;
L_10876c74:;
  /* 10876c74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10876c77 push edx */
  push32((uint32_t)(EDX));
  /* 10876c78 call dword ptr [0x108a33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33d4))), 0x10876c7eu);
  /* 10876c7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876c80 jmp 0x10876d85 */
  goto L_10876d85;
L_10876c85:;
  /* 10876c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10876c8c push eax */
  push32((uint32_t)(EAX));
  /* 10876c8d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10876c90 push ecx */
  push32((uint32_t)(ECX));
  /* 10876c91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876c94 push edx */
  push32((uint32_t)(EDX));
  /* 10876c95 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10876c98 push eax */
  push32((uint32_t)(EAX));
  /* 10876c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10876c9d call dword ptr [0x108a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a335c))), 0x10876ca3u);
  /* 10876ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10876ca5 jne 0x10876cbc */
  if (!C.zf) goto L_10876cbc;
  /* 10876ca7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10876ca9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10876cac push ecx */
  push32((uint32_t)(ECX));
  /* 10876cad call 0x10875030 */
  push32(0x10876cb2u); f_10875030();
  /* 10876cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876cb5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10876cbc:;
  /* 10876cbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10876cbf push edx */
  push32((uint32_t)(EDX));
  /* 10876cc0 call dword ptr [0x108a33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33d4))), 0x10876cc6u);
  /* 10876cc6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10876cc9 jmp 0x10876d85 */
  goto L_10876d85;
L_10876cce:;
  /* 10876cce cmp dword ptr [0x108a0794], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108a0794))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876cd5 jne 0x10876d83 */
  if (!C.zf) goto L_10876d83;
  /* 10876cdb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876cdf jne 0x10876cf7 */
  if (!C.zf) goto L_10876cf7;
  /* 10876ce1 call dword ptr [0x108a3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3358))), 0x10876ce7u);
  /* 10876ce7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10876cea cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876cee jne 0x10876cf7 */
  if (!C.zf) goto L_10876cf7;
  /* 10876cf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876cf2 jmp 0x10876d85 */
  goto L_10876d85;
L_10876cf7:;
  /* 10876cf7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10876cfa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10876cfd:;
  /* 10876cfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876d00 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10876d03 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10876d05 je 0x10876d25 */
  if (C.zf) goto L_10876d25;
  /* 10876d07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876d0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876d0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10876d10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876d13 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10876d16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10876d18 jne 0x10876d23 */
  if (!C.zf) goto L_10876d23;
  /* 10876d1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876d1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876d20 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10876d23:;
  /* 10876d23 jmp 0x10876cfd */
  goto L_10876cfd;
L_10876d25:;
  /* 10876d25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876d28 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876d2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876d2e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10876d31 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10876d36 push 0x1089bc84 */
  push32((uint32_t)(0x1089bc84u));
  /* 10876d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10876d3d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10876d40 push edx */
  push32((uint32_t)(EDX));
  /* 10876d41 call 0x108745a0 */
  push32(0x10876d46u); f_108745a0();
  /* 10876d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876d49 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10876d4c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876d50 jne 0x10876d60 */
  if (!C.zf) goto L_10876d60;
  /* 10876d52 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10876d55 push eax */
  push32((uint32_t)(EAX));
  /* 10876d56 call dword ptr [0x108a33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c8))), 0x10876d5cu);
  /* 10876d5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876d5e jmp 0x10876d85 */
  goto L_10876d85;
L_10876d60:;
  /* 10876d60 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10876d63 push ecx */
  push32((uint32_t)(ECX));
  /* 10876d64 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10876d67 push edx */
  push32((uint32_t)(EDX));
  /* 10876d68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876d6b push eax */
  push32((uint32_t)(EAX));
  /* 10876d6c call 0x1087ae80 */
  push32(0x10876d71u); f_1087ae80();
  /* 10876d71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876d74 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10876d77 push ecx */
  push32((uint32_t)(ECX));
  /* 10876d78 call dword ptr [0x108a33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c8))), 0x10876d7eu);
  /* 10876d7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876d81 jmp 0x10876d85 */
  goto L_10876d85;
L_10876d83:;
  /* 10876d83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10876d85:;
  /* 10876d85 mov esp, ebp */
  ESP = (EBP);
  /* 10876d87 pop ebp */
  EBP = (pop32());
  /* 10876d88 ret  */
  ESPCHK(0x10876b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d90 @ 0x10876d90 (77 bytes, 25 insns) */
void f_10876d90(void) {
  FTRACE(0x10876d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10876d91 mov ebp, esp */
  EBP = (ESP);
  /* 10876d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876d95 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10876d9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876d9c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876da0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10876da3 push eax */
  push32((uint32_t)(EAX));
  /* 10876da4 call dword ptr [0x108a334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a334c))), 0x10876daau);
  /* 10876daa mov dword ptr [0x108a1fec], eax */
  w32((uint32_t)(0x108a1fec), (EAX));
  /* 10876daf cmp dword ptr [0x108a1fec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a1fec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876db6 jne 0x10876dbc */
  if (!C.zf) goto L_10876dbc;
  /* 10876db8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876dba jmp 0x10876ddb */
  goto L_10876ddb;
L_10876dbc:;
  /* 10876dbc call 0x10878840 */
  push32(0x10876dc1u); f_10878840();
  /* 10876dc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10876dc3 jne 0x10876dd6 */
  if (!C.zf) goto L_10876dd6;
  /* 10876dc5 mov ecx, dword ptr [0x108a1fec] */
  ECX = (r32((uint32_t)(0x108a1fec)));
  /* 10876dcb push ecx */
  push32((uint32_t)(ECX));
  /* 10876dcc call dword ptr [0x108a3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3350))), 0x10876dd2u);
  /* 10876dd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10876dd4 jmp 0x10876ddb */
  goto L_10876ddb;
L_10876dd6:;
  /* 10876dd6 mov eax, 1 */
  EAX = (0x1u);
L_10876ddb:;
  /* 10876ddb pop ebp */
  EBP = (pop32());
  /* 10876ddc ret  */
  ESPCHK(0x10876d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x10876de0 (156 bytes, 48 insns) */
void f_10876de0(void) {
  FTRACE(0x10876de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10876de1 mov ebp, esp */
  EBP = (ESP);
  /* 10876de3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876de6 mov eax, dword ptr [0x108a1fe8] */
  EAX = (r32((uint32_t)(0x108a1fe8)));
  /* 10876deb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10876dee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10876df5 jmp 0x10876e00 */
  goto L_10876e00;
L_10876df7:;
  /* 10876df7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876dfa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876dfd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10876e00:;
  /* 10876e00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10876e03 cmp edx, dword ptr [0x108a1fe4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108a1fe4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876e09 jge 0x10876e56 */
  if ((C.sf==C.of)) goto L_10876e56;
  /* 10876e0b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10876e10 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10876e15 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876e18 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10876e1b push ecx */
  push32((uint32_t)(ECX));
  /* 10876e1c call dword ptr [0x108a3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3344))), 0x10876e22u);
  /* 10876e22 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10876e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876e29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876e2c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10876e2f push eax */
  push32((uint32_t)(EAX));
  /* 10876e30 call dword ptr [0x108a3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3344))), 0x10876e36u);
  /* 10876e36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876e39 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10876e3c push edx */
  push32((uint32_t)(EDX));
  /* 10876e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10876e3f mov eax, dword ptr [0x108a1fec] */
  EAX = (r32((uint32_t)(0x108a1fec)));
  /* 10876e44 push eax */
  push32((uint32_t)(EAX));
  /* 10876e45 call dword ptr [0x108a3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3354))), 0x10876e4bu);
  /* 10876e4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876e4e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876e51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10876e54 jmp 0x10876df7 */
  goto L_10876df7;
L_10876e56:;
  /* 10876e56 mov edx, dword ptr [0x108a1fe8] */
  EDX = (r32((uint32_t)(0x108a1fe8)));
  /* 10876e5c push edx */
  push32((uint32_t)(EDX));
  /* 10876e5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10876e5f mov eax, dword ptr [0x108a1fec] */
  EAX = (r32((uint32_t)(0x108a1fec)));
  /* 10876e64 push eax */
  push32((uint32_t)(EAX));
  /* 10876e65 call dword ptr [0x108a3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3354))), 0x10876e6bu);
  /* 10876e6b mov ecx, dword ptr [0x108a1fec] */
  ECX = (r32((uint32_t)(0x108a1fec)));
  /* 10876e71 push ecx */
  push32((uint32_t)(ECX));
  /* 10876e72 call dword ptr [0x108a3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3350))), 0x10876e78u);
  /* 10876e78 mov esp, ebp */
  ESP = (EBP);
  /* 10876e7a pop ebp */
  EBP = (pop32());
  /* 10876e7b ret  */
  ESPCHK(0x10876de0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10876e80 (73 bytes, 19 insns) */
void f_10876e80(void) {
  FTRACE(0x10876e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10876e81 mov ebp, esp */
  EBP = (ESP);
  /* 10876e83 cmp dword ptr [0x108a0628], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a0628))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876e8a je 0x10876e9e */
  if (C.zf) goto L_10876e9e;
  /* 10876e8c cmp dword ptr [0x108a0628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876e93 jne 0x10876ec7 */
  if (!C.zf) goto L_10876ec7;
  /* 10876e95 cmp dword ptr [0x108a062c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a062c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876e9c jne 0x10876ec7 */
  if (!C.zf) goto L_10876ec7;
L_10876e9e:;
  /* 10876e9e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10876ea3 call 0x10876ed0 */
  push32(0x10876ea8u); f_10876ed0();
  /* 10876ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876eab cmp dword ptr [0x108a0798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876eb2 je 0x10876eba */
  if (C.zf) goto L_10876eba;
  /* 10876eb4 call dword ptr [0x108a0798] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a0798))), 0x10876ebau);
L_10876eba:;
  /* 10876eba push 0xff */
  push32((uint32_t)(0xffu));
  /* 10876ebf call 0x10876ed0 */
  push32(0x10876ec4u); f_10876ed0();
  /* 10876ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10876ec7:;
  /* 10876ec7 pop ebp */
  EBP = (pop32());
  /* 10876ec8 ret  */
  ESPCHK(0x10876e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ed0 @ 0x10876ed0 (447 bytes, 131 insns) */
void f_10876ed0(void) {
  FTRACE(0x10876ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10876ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10876ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10876ed3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10876ed9 push ebx */
  push32((uint32_t)(EBX));
  /* 10876eda push esi */
  push32((uint32_t)(ESI));
  /* 10876edb push edi */
  push32((uint32_t)(EDI));
  /* 10876edc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10876ee3 jmp 0x10876eee */
  goto L_10876eee;
L_10876ee5:;
  /* 10876ee5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876ee8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876eeb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10876eee:;
  /* 10876eee cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876ef2 jae 0x10876f07 */
  if (!C.cf) goto L_10876f07;
  /* 10876ef4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876ef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10876efa cmp edx, dword ptr [ecx*8 + 0x1089eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1089eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876f01 jne 0x10876f05 */
  if (!C.zf) goto L_10876f05;
  /* 10876f03 jmp 0x10876f07 */
  goto L_10876f07;
L_10876f05:;
  /* 10876f05 jmp 0x10876ee5 */
  goto L_10876ee5;
L_10876f07:;
  /* 10876f07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876f0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10876f0d cmp ecx, dword ptr [eax*8 + 0x1089eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1089eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876f14 jne 0x10877088 */
  if (!C.zf) goto L_10877088;
  /* 10876f1a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876f21 je 0x10876f44 */
  if (C.zf) goto L_10876f44;
  /* 10876f23 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876f26 mov eax, dword ptr [edx*8 + 0x1089eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1089eab4)));
  /* 10876f2d push eax */
  push32((uint32_t)(EAX));
  /* 10876f2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10876f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876f32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876f34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10876f36 call 0x10873660 */
  push32(0x10876f3bu); f_10873660();
  /* 10876f3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876f41 jne 0x10876f44 */
  if (!C.zf) goto L_10876f44;
  /* 10876f43 int3  */
  x86_unimpl("int3 @ 0x10876f43");
L_10876f44:;
  /* 10876f44 cmp dword ptr [0x108a0628], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a0628))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876f4b je 0x10876f5f */
  if (C.zf) goto L_10876f5f;
  /* 10876f4d cmp dword ptr [0x108a0628], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0628))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876f54 jne 0x10876f98 */
  if (!C.zf) goto L_10876f98;
  /* 10876f56 cmp dword ptr [0x108a062c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108a062c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876f5d jne 0x10876f98 */
  if (!C.zf) goto L_10876f98;
L_10876f5f:;
  /* 10876f5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10876f61 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10876f64 push ecx */
  push32((uint32_t)(ECX));
  /* 10876f65 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876f68 mov eax, dword ptr [edx*8 + 0x1089eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1089eab4)));
  /* 10876f6f push eax */
  push32((uint32_t)(EAX));
  /* 10876f70 call 0x108773d0 */
  push32(0x10876f75u); f_108773d0();
  /* 10876f75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876f78 push eax */
  push32((uint32_t)(EAX));
  /* 10876f79 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10876f7c mov edx, dword ptr [ecx*8 + 0x1089eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1089eab4)));
  /* 10876f83 push edx */
  push32((uint32_t)(EDX));
  /* 10876f84 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10876f86 call dword ptr [0x108a3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3370))), 0x10876f8cu);
  /* 10876f8c push eax */
  push32((uint32_t)(EAX));
  /* 10876f8d call dword ptr [0x108a3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3374))), 0x10876f93u);
  /* 10876f93 jmp 0x10877088 */
  goto L_10877088;
L_10876f98:;
  /* 10876f98 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876f9f je 0x10877088 */
  if (C.zf) goto L_10877088;
  /* 10876fa5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10876faa lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10876fb0 push eax */
  push32((uint32_t)(EAX));
  /* 10876fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10876fb3 call dword ptr [0x108a338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a338c))), 0x10876fb9u);
  /* 10876fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10876fbb jne 0x10876fd1 */
  if (!C.zf) goto L_10876fd1;
  /* 10876fbd push 0x1089b4ec */
  push32((uint32_t)(0x1089b4ecu));
  /* 10876fc2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10876fc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10876fc9 call 0x10877550 */
  push32(0x10876fceu); f_10877550();
  /* 10876fce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10876fd1:;
  /* 10876fd1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10876fd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10876fda mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10876fdd push eax */
  push32((uint32_t)(EAX));
  /* 10876fde call 0x108773d0 */
  push32(0x10876fe3u); f_108773d0();
  /* 10876fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876fe6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10876fe9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10876fec jbe 0x1087701a */
  if ((C.cf||C.zf)) goto L_1087701a;
  /* 10876fee lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10876ff4 push ecx */
  push32((uint32_t)(ECX));
  /* 10876ff5 call 0x108773d0 */
  push32(0x10876ffau); f_108773d0();
  /* 10876ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10876ffd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877000 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10877004 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10877007 push 3 */
  push32((uint32_t)(0x3u));
  /* 10877009 push 0x1089b4e8 */
  push32((uint32_t)(0x1089b4e8u));
  /* 1087700e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877011 push ecx */
  push32((uint32_t)(ECX));
  /* 10877012 call 0x10877dc0 */
  push32(0x10877017u); f_10877dc0();
  /* 10877017 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087701a:;
  /* 1087701a push 0x1089bf40 */
  push32((uint32_t)(0x1089bf40u));
  /* 1087701f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10877025 push edx */
  push32((uint32_t)(EDX));
  /* 10877026 call 0x10877550 */
  push32(0x1087702bu); f_10877550();
  /* 1087702b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087702e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877031 push eax */
  push32((uint32_t)(EAX));
  /* 10877032 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10877038 push ecx */
  push32((uint32_t)(ECX));
  /* 10877039 call 0x10877560 */
  push32(0x1087703eu); f_10877560();
  /* 1087703e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877041 push 0x1089b460 */
  push32((uint32_t)(0x1089b460u));
  /* 10877046 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1087704c push edx */
  push32((uint32_t)(EDX));
  /* 1087704d call 0x10877560 */
  push32(0x10877052u); f_10877560();
  /* 10877052 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877055 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877058 mov ecx, dword ptr [eax*8 + 0x1089eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1089eab4)));
  /* 1087705f push ecx */
  push32((uint32_t)(ECX));
  /* 10877060 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10877066 push edx */
  push32((uint32_t)(EDX));
  /* 10877067 call 0x10877560 */
  push32(0x1087706cu); f_10877560();
  /* 1087706c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087706f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10877074 push 0x1089bf18 */
  push32((uint32_t)(0x1089bf18u));
  /* 10877079 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1087707f push eax */
  push32((uint32_t)(EAX));
  /* 10877080 call 0x10877d00 */
  push32(0x10877085u); f_10877d00();
  /* 10877085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877088:;
  /* 10877088 pop edi */
  EDI = (pop32());
  /* 10877089 pop esi */
  ESI = (pop32());
  /* 1087708a pop ebx */
  EBX = (pop32());
  /* 1087708b mov esp, ebp */
  ESP = (EBP);
  /* 1087708d pop ebp */
  EBP = (pop32());
  /* 1087708e ret  */
  ESPCHK(0x10876ed0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10877090 (80 bytes, 27 insns) */
void f_10877090(void) {
  FTRACE(0x10877090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877090 push ebp */
  push32((uint32_t)(EBP));
  /* 10877091 mov ebp, esp */
  EBP = (ESP);
  /* 10877093 push ecx */
  push32((uint32_t)(ECX));
  /* 10877094 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1087709b jmp 0x108770a6 */
  goto L_108770a6;
L_1087709d:;
  /* 1087709d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108770a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108770a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108770a6:;
  /* 108770a6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108770aa jae 0x108770bf */
  if (!C.cf) goto L_108770bf;
  /* 108770ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108770af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108770b2 cmp edx, dword ptr [ecx*8 + 0x1089eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1089eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108770b9 jne 0x108770bd */
  if (!C.zf) goto L_108770bd;
  /* 108770bb jmp 0x108770bf */
  goto L_108770bf;
L_108770bd:;
  /* 108770bd jmp 0x1087709d */
  goto L_1087709d;
L_108770bf:;
  /* 108770bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108770c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108770c5 cmp ecx, dword ptr [eax*8 + 0x1089eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1089eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108770cc jne 0x108770da */
  if (!C.zf) goto L_108770da;
  /* 108770ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108770d1 mov eax, dword ptr [edx*8 + 0x1089eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1089eab4)));
  /* 108770d8 jmp 0x108770dc */
  goto L_108770dc;
L_108770da:;
  /* 108770da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108770dc:;
  /* 108770dc mov esp, ebp */
  ESP = (EBP);
  /* 108770de pop ebp */
  EBP = (pop32());
  /* 108770df ret  */
  ESPCHK(0x10877090u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x108770e0 (66 bytes, 28 insns) */
void f_108770e0(void) {
  FTRACE(0x108770e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108770e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108770e1 mov ebp, esp */
  EBP = (ESP);
  /* 108770e3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108770e7 jne 0x10877107 */
  if (!C.zf) goto L_10877107;
  /* 108770e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108770ed jge 0x10877107 */
  if ((C.sf==C.of)) goto L_10877107;
  /* 108770ef push 1 */
  push32((uint32_t)(0x1u));
  /* 108770f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108770f4 push eax */
  push32((uint32_t)(EAX));
  /* 108770f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108770f8 push ecx */
  push32((uint32_t)(ECX));
  /* 108770f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108770fc push edx */
  push32((uint32_t)(EDX));
  /* 108770fd call 0x10877130 */
  push32(0x10877102u); f_10877130();
  /* 10877102 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877105 jmp 0x1087711d */
  goto L_1087711d;
L_10877107:;
  /* 10877107 push 0 */
  push32((uint32_t)(0x0u));
  /* 10877109 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1087710c push eax */
  push32((uint32_t)(EAX));
  /* 1087710d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877110 push ecx */
  push32((uint32_t)(ECX));
  /* 10877111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877114 push edx */
  push32((uint32_t)(EDX));
  /* 10877115 call 0x10877130 */
  push32(0x1087711au); f_10877130();
  /* 1087711a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087711d:;
  /* 1087711d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877120 pop ebp */
  EBP = (pop32());
  /* 10877121 ret  */
  ESPCHK(0x108770e0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10877130 (194 bytes, 71 insns) */
void f_10877130(void) {
  FTRACE(0x10877130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877130 push ebp */
  push32((uint32_t)(EBP));
  /* 10877131 mov ebp, esp */
  EBP = (ESP);
  /* 10877133 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877136 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877139 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087713c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877140 je 0x10877159 */
  if (C.zf) goto L_10877159;
  /* 10877142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877145 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10877148 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087714b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087714e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10877151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877154 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10877156 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10877159:;
  /* 10877159 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087715c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1087715f:;
  /* 1087715f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877162 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10877164 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10877167 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1087716a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087716d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087716f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10877172 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10877175 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877179 jbe 0x10877191 */
  if ((C.cf||C.zf)) goto L_10877191;
  /* 1087717b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087717e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877181 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877184 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10877186 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877189 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087718c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1087718f jmp 0x108771a5 */
  goto L_108771a5;
L_10877191:;
  /* 10877191 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877194 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877197 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087719a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1087719c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087719f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108771a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108771a5:;
  /* 108771a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108771a9 ja 0x1087715f */
  if ((!C.cf&&!C.zf)) goto L_1087715f;
  /* 108771ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108771ae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108771b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108771b4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108771b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108771ba:;
  /* 108771ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108771bd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108771bf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 108771c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108771c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108771c8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108771ca mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108771cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108771cf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 108771d2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 108771d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108771d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108771da mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108771dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108771e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108771e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108771e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108771e9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108771ec jb 0x108771ba */
  if (C.cf) goto L_108771ba;
  /* 108771ee mov esp, ebp */
  ESP = (EBP);
  /* 108771f0 pop ebp */
  EBP = (pop32());
  /* 108771f1 ret  */
  ESPCHK(0x10877130u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10877200 (63 bytes, 24 insns) */
void f_10877200(void) {
  FTRACE(0x10877200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877200 push ebp */
  push32((uint32_t)(EBP));
  /* 10877201 mov ebp, esp */
  EBP = (ESP);
  /* 10877203 push ecx */
  push32((uint32_t)(ECX));
  /* 10877204 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877208 jne 0x10877219 */
  if (!C.zf) goto L_10877219;
  /* 1087720a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087720e jge 0x10877219 */
  if ((C.sf==C.of)) goto L_10877219;
  /* 10877210 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10877217 jmp 0x10877220 */
  goto L_10877220;
L_10877219:;
  /* 10877219 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10877220:;
  /* 10877220 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877223 push eax */
  push32((uint32_t)(EAX));
  /* 10877224 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10877227 push ecx */
  push32((uint32_t)(ECX));
  /* 10877228 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087722b push edx */
  push32((uint32_t)(EDX));
  /* 1087722c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087722f push eax */
  push32((uint32_t)(EAX));
  /* 10877230 call 0x10877130 */
  push32(0x10877235u); f_10877130();
  /* 10877235 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877238 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087723b mov esp, ebp */
  ESP = (EBP);
  /* 1087723d pop ebp */
  EBP = (pop32());
  /* 1087723e ret  */
  ESPCHK(0x10877200u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10877240 (30 bytes, 14 insns) */
void f_10877240(void) {
  FTRACE(0x10877240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877240 push ebp */
  push32((uint32_t)(EBP));
  /* 10877241 mov ebp, esp */
  EBP = (ESP);
  /* 10877243 push 0 */
  push32((uint32_t)(0x0u));
  /* 10877245 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10877248 push eax */
  push32((uint32_t)(EAX));
  /* 10877249 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087724c push ecx */
  push32((uint32_t)(ECX));
  /* 1087724d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877250 push edx */
  push32((uint32_t)(EDX));
  /* 10877251 call 0x10877130 */
  push32(0x10877256u); f_10877130();
  /* 10877256 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087725c pop ebp */
  EBP = (pop32());
  /* 1087725d ret  */
  ESPCHK(0x10877240u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10877260 (72 bytes, 28 insns) */
void f_10877260(void) {
  FTRACE(0x10877260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877260 push ebp */
  push32((uint32_t)(EBP));
  /* 10877261 mov ebp, esp */
  EBP = (ESP);
  /* 10877263 push ecx */
  push32((uint32_t)(ECX));
  /* 10877264 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877268 jne 0x10877281 */
  if (!C.zf) goto L_10877281;
  /* 1087726a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087726e jg 0x10877281 */
  if ((!C.zf&&C.sf==C.of)) goto L_10877281;
  /* 10877270 jl 0x10877278 */
  if ((C.sf!=C.of)) goto L_10877278;
  /* 10877272 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877276 jae 0x10877281 */
  if (!C.cf) goto L_10877281;
L_10877278:;
  /* 10877278 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1087727f jmp 0x10877288 */
  goto L_10877288;
L_10877281:;
  /* 10877281 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10877288:;
  /* 10877288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087728b push eax */
  push32((uint32_t)(EAX));
  /* 1087728c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1087728f push ecx */
  push32((uint32_t)(ECX));
  /* 10877290 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10877293 push edx */
  push32((uint32_t)(EDX));
  /* 10877294 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877297 push eax */
  push32((uint32_t)(EAX));
  /* 10877298 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087729b push ecx */
  push32((uint32_t)(ECX));
  /* 1087729c call 0x108772b0 */
  push32(0x108772a1u); f_108772b0();
  /* 108772a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108772a4 mov esp, ebp */
  ESP = (EBP);
  /* 108772a6 pop ebp */
  EBP = (pop32());
  /* 108772a7 ret  */
  ESPCHK(0x10877260u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x108772b0 (242 bytes, 91 insns) */
void f_108772b0(void) {
  FTRACE(0x108772b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108772b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108772b1 mov ebp, esp */
  EBP = (ESP);
  /* 108772b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108772b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108772b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108772bc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108772c0 je 0x108772e4 */
  if (C.zf) goto L_108772e4;
  /* 108772c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108772c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 108772c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108772cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108772ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108772d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108772d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 108772d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108772d9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108772dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 108772de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108772e1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108772e4:;
  /* 108772e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108772e7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108772ea:;
  /* 108772ea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108772ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108772ef push ecx */
  push32((uint32_t)(ECX));
  /* 108772f0 push eax */
  push32((uint32_t)(EAX));
  /* 108772f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108772f4 push edx */
  push32((uint32_t)(EDX));
  /* 108772f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108772f8 push eax */
  push32((uint32_t)(EAX));
  /* 108772f9 call 0x1087b230 */
  push32(0x108772feu); f_1087b230();
  /* 108772fe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10877301 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10877304 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10877306 push edx */
  push32((uint32_t)(EDX));
  /* 10877307 push ecx */
  push32((uint32_t)(ECX));
  /* 10877308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087730b push eax */
  push32((uint32_t)(EAX));
  /* 1087730c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087730f push ecx */
  push32((uint32_t)(ECX));
  /* 10877310 call 0x1087b1c0 */
  push32(0x10877315u); f_1087b1c0();
  /* 10877315 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10877318 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1087731b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087731f jbe 0x10877337 */
  if ((C.cf||C.zf)) goto L_10877337;
  /* 10877321 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877324 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877327 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087732a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1087732c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087732f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877332 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10877335 jmp 0x1087734b */
  goto L_1087734b;
L_10877337:;
  /* 10877337 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1087733a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087733d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877340 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10877342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877348 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1087734b:;
  /* 1087734b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087734f ja 0x108772ea */
  if ((!C.cf&&!C.zf)) goto L_108772ea;
  /* 10877351 jb 0x10877359 */
  if (C.cf) goto L_10877359;
  /* 10877353 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877357 ja 0x108772ea */
  if ((!C.cf&&!C.zf)) goto L_108772ea;
L_10877359:;
  /* 10877359 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087735c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1087735f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877362 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877365 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10877368:;
  /* 10877368 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087736b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1087736d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10877370 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877373 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877376 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10877378 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1087737a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087737d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10877380 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10877382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877385 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877388 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1087738b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087738e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877391 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10877394 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877397 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087739a jb 0x10877368 */
  if (C.cf) goto L_10877368;
  /* 1087739c mov esp, ebp */
  ESP = (EBP);
  /* 1087739e pop ebp */
  EBP = (pop32());
  /* 1087739f ret 0x14 */
  ESPCHK(0x108772b0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x108773b0 (31 bytes, 15 insns) */
void f_108773b0(void) {
  FTRACE(0x108773b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108773b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108773b1 mov ebp, esp */
  EBP = (ESP);
  /* 108773b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108773b5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 108773b8 push eax */
  push32((uint32_t)(EAX));
  /* 108773b9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108773bc push ecx */
  push32((uint32_t)(ECX));
  /* 108773bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108773c0 push edx */
  push32((uint32_t)(EDX));
  /* 108773c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108773c4 push eax */
  push32((uint32_t)(EAX));
  /* 108773c5 call 0x108772b0 */
  push32(0x108773cau); f_108772b0();
  /* 108773ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108773cd pop ebp */
  EBP = (pop32());
  /* 108773ce ret  */
  ESPCHK(0x108773b0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x108773d0 (123 bytes, 44 insns) */
void f_108773d0(void) {
  FTRACE(0x108773d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108773d0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 108773d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108773da je 0x108773f0 */
  if (C.zf) goto L_108773f0;
L_108773dc:;
  /* 108773dc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 108773de inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108773df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 108773e1 je 0x10877423 */
  if (C.zf) goto L_10877423;
  /* 108773e3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108773e9 jne 0x108773dc */
  if (!C.zf) goto L_108773dc;
  /* 108773eb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108773f0:;
  /* 108773f0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108773f2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108773f7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108773f9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108773fc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108773fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877401 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10877406 je 0x108773f0 */
  if (C.zf) goto L_108773f0;
  /* 10877408 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1087740b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1087740d je 0x10877441 */
  if (C.zf) goto L_10877441;
  /* 1087740f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10877411 je 0x10877437 */
  if (C.zf) goto L_10877437;
  /* 10877413 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10877418 je 0x1087742d */
  if (C.zf) goto L_1087742d;
  /* 1087741a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1087741f je 0x10877423 */
  if (C.zf) goto L_10877423;
  /* 10877421 jmp 0x108773f0 */
  goto L_108773f0;
L_10877423:;
  /* 10877423 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10877426 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1087742a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087742c ret  */
  ESPCHK(0x108773d0u, _esp0);
  ESP += 4; return;
L_1087742d:;
  /* 1087742d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10877430 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10877434 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877436 ret  */
  ESPCHK(0x108773d0u, _esp0);
  ESP += 4; return;
L_10877437:;
  /* 10877437 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1087743a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1087743e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877440 ret  */
  ESPCHK(0x108773d0u, _esp0);
  ESP += 4; return;
L_10877441:;
  /* 10877441 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10877444 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10877448 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087744a ret  */
  ESPCHK(0x108773d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007450 @ 0x10877450 (249 bytes, 93 insns) */
void f_10877450(void) {
  FTRACE(0x10877450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877450 push ebp */
  push32((uint32_t)(EBP));
  /* 10877451 mov ebp, esp */
  EBP = (ESP);
  /* 10877453 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877456 push ebx */
  push32((uint32_t)(EBX));
  /* 10877457 push esi */
  push32((uint32_t)(ESI));
  /* 10877458 push edi */
  push32((uint32_t)(EDI));
  /* 10877459 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1087745c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1087745f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10877462 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10877465:;
  /* 10877465 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877469 jne 0x10877489 */
  if (!C.zf) goto L_10877489;
  /* 1087746b push 0x1089bf78 */
  push32((uint32_t)(0x1089bf78u));
  /* 10877470 push 0 */
  push32((uint32_t)(0x0u));
  /* 10877472 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10877474 push 0x1089bf6c */
  push32((uint32_t)(0x1089bf6cu));
  /* 10877479 push 2 */
  push32((uint32_t)(0x2u));
  /* 1087747b call 0x10873660 */
  push32(0x10877480u); f_10873660();
  /* 10877480 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877483 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877486 jne 0x10877489 */
  if (!C.zf) goto L_10877489;
  /* 10877488 int3  */
  x86_unimpl("int3 @ 0x10877488");
L_10877489:;
  /* 10877489 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087748b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087748d jne 0x10877465 */
  if (!C.zf) goto L_10877465;
L_1087748f:;
  /* 1087748f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877493 jne 0x108774b3 */
  if (!C.zf) goto L_108774b3;
  /* 10877495 push 0x1089bf5c */
  push32((uint32_t)(0x1089bf5cu));
  /* 1087749a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087749c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1087749e push 0x1089bf6c */
  push32((uint32_t)(0x1089bf6cu));
  /* 108774a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 108774a5 call 0x10873660 */
  push32(0x108774aau); f_10873660();
  /* 108774aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108774ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108774b0 jne 0x108774b3 */
  if (!C.zf) goto L_108774b3;
  /* 108774b2 int3  */
  x86_unimpl("int3 @ 0x108774b2");
L_108774b3:;
  /* 108774b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108774b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108774b7 jne 0x1087748f */
  if (!C.zf) goto L_1087748f;
  /* 108774b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108774bc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 108774c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108774c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108774c9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 108774cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108774cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108774d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108774d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108774d7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108774da mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 108774dd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 108774e0 push edx */
  push32((uint32_t)(EDX));
  /* 108774e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108774e4 push eax */
  push32((uint32_t)(EAX));
  /* 108774e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108774e8 push ecx */
  push32((uint32_t)(ECX));
  /* 108774e9 call 0x1087b530 */
  push32(0x108774eeu); f_1087b530();
  /* 108774ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108774f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108774f4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108774f7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 108774fa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108774fd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10877500 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10877503 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10877506 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087750a jl 0x1087752e */
  if ((C.sf!=C.of)) goto L_1087752e;
  /* 1087750c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087750f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10877511 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10877514 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10877516 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1087751c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1087751f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10877522 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10877524 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877527 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087752a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1087752c jmp 0x1087753f */
  goto L_1087753f;
L_1087752e:;
  /* 1087752e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10877531 push eax */
  push32((uint32_t)(EAX));
  /* 10877532 push 0 */
  push32((uint32_t)(0x0u));
  /* 10877534 call 0x1087b2b0 */
  push32(0x10877539u); f_1087b2b0();
  /* 10877539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087753c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1087753f:;
  /* 1087753f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10877542 pop edi */
  EDI = (pop32());
  /* 10877543 pop esi */
  ESI = (pop32());
  /* 10877544 pop ebx */
  EBX = (pop32());
  /* 10877545 mov esp, ebp */
  ESP = (EBP);
  /* 10877547 pop ebp */
  EBP = (pop32());
  /* 10877548 ret  */
  ESPCHK(0x10877450u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x10877550 (7 bytes, 3 insns) */
void f_10877550(void) {
  FTRACE(0x10877550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877550 push edi */
  push32((uint32_t)(EDI));
  /* 10877551 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10877555 jmp 0x108775c1 */
  jmp_ind(0x108775c1u); return;
}

/* FUN_10007560 @ 0x10877560 (224 bytes, 84 insns) */
void f_10877560(void) {
  FTRACE(0x10877560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877560 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10877564 push edi */
  push32((uint32_t)(EDI));
  /* 10877565 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1087756b je 0x1087757c */
  if (C.zf) goto L_1087757c;
L_1087756d:;
  /* 1087756d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1087756f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10877570 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10877572 je 0x108775af */
  if (C.zf) goto L_108775af;
  /* 10877574 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1087757a jne 0x1087756d */
  if (!C.zf) goto L_1087756d;
L_1087757c:;
  /* 1087757c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1087757e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10877583 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877585 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10877588 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1087758a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087758d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10877592 je 0x1087757c */
  if (C.zf) goto L_1087757c;
  /* 10877594 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10877597 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10877599 je 0x108775be */
  if (C.zf) goto L_108775be;
  /* 1087759b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1087759d je 0x108775b9 */
  if (C.zf) goto L_108775b9;
  /* 1087759f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 108775a4 je 0x108775b4 */
  if (C.zf) goto L_108775b4;
  /* 108775a6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 108775ab je 0x108775af */
  if (C.zf) goto L_108775af;
  /* 108775ad jmp 0x1087757c */
  goto L_1087757c;
L_108775af:;
  /* 108775af lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 108775b2 jmp 0x108775c1 */
  goto L_108775c1;
L_108775b4:;
  /* 108775b4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 108775b7 jmp 0x108775c1 */
  goto L_108775c1;
L_108775b9:;
  /* 108775b9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 108775bc jmp 0x108775c1 */
  goto L_108775c1;
L_108775be:;
  /* 108775be lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_108775c1:;
  /* 108775c1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 108775c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108775cb je 0x108775e6 */
  if (C.zf) goto L_108775e6;
L_108775cd:;
  /* 108775cd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108775cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 108775d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108775d2 je 0x10877638 */
  if (C.zf) goto L_10877638;
  /* 108775d4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 108775d6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 108775d7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 108775dd jne 0x108775cd */
  if (!C.zf) goto L_108775cd;
  /* 108775df jmp 0x108775e6 */
  goto L_108775e6;
L_108775e1:;
  /* 108775e1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108775e3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_108775e6:;
  /* 108775e6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 108775eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 108775ed add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108775ef xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108775f2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 108775f4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108775f6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108775f9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108775fe je 0x108775e1 */
  if (C.zf) goto L_108775e1;
  /* 10877600 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10877602 je 0x10877638 */
  if (C.zf) goto L_10877638;
  /* 10877604 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10877606 je 0x1087762f */
  if (C.zf) goto L_1087762f;
  /* 10877608 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1087760e je 0x10877622 */
  if (C.zf) goto L_10877622;
  /* 10877610 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10877616 je 0x1087761a */
  if (C.zf) goto L_1087761a;
  /* 10877618 jmp 0x108775e1 */
  goto L_108775e1;
L_1087761a:;
  /* 1087761a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1087761c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10877620 pop edi */
  EDI = (pop32());
  /* 10877621 ret  */
  ESPCHK(0x10877560u, _esp0);
  ESP += 4; return;
L_10877622:;
  /* 10877622 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10877625 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10877629 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1087762d pop edi */
  EDI = (pop32());
  /* 1087762e ret  */
  ESPCHK(0x10877560u, _esp0);
  ESP += 4; return;
L_1087762f:;
  /* 1087762f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10877632 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10877636 pop edi */
  EDI = (pop32());
  /* 10877637 ret  */
  ESPCHK(0x10877560u, _esp0);
  ESP += 4; return;
L_10877638:;
  /* 10877638 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1087763a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1087763e pop edi */
  EDI = (pop32());
  /* 1087763f ret  */
  ESPCHK(0x10877560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007640 @ 0x10877640 (243 bytes, 91 insns) */
void f_10877640(void) {
  FTRACE(0x10877640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877640 push ebp */
  push32((uint32_t)(EBP));
  /* 10877641 mov ebp, esp */
  EBP = (ESP);
  /* 10877643 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877646 push ebx */
  push32((uint32_t)(EBX));
  /* 10877647 push esi */
  push32((uint32_t)(ESI));
  /* 10877648 push edi */
  push32((uint32_t)(EDI));
  /* 10877649 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1087764c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1087764f:;
  /* 1087764f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877653 jne 0x10877673 */
  if (!C.zf) goto L_10877673;
  /* 10877655 push 0x1089bf78 */
  push32((uint32_t)(0x1089bf78u));
  /* 1087765a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087765c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1087765e push 0x1089bf88 */
  push32((uint32_t)(0x1089bf88u));
  /* 10877663 push 2 */
  push32((uint32_t)(0x2u));
  /* 10877665 call 0x10873660 */
  push32(0x1087766au); f_10873660();
  /* 1087766a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087766d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877670 jne 0x10877673 */
  if (!C.zf) goto L_10877673;
  /* 10877672 int3  */
  x86_unimpl("int3 @ 0x10877672");
L_10877673:;
  /* 10877673 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10877675 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10877677 jne 0x1087764f */
  if (!C.zf) goto L_1087764f;
L_10877679:;
  /* 10877679 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087767d jne 0x1087769d */
  if (!C.zf) goto L_1087769d;
  /* 1087767f push 0x1089bf5c */
  push32((uint32_t)(0x1089bf5cu));
  /* 10877684 push 0 */
  push32((uint32_t)(0x0u));
  /* 10877686 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10877688 push 0x1089bf88 */
  push32((uint32_t)(0x1089bf88u));
  /* 1087768d push 2 */
  push32((uint32_t)(0x2u));
  /* 1087768f call 0x10873660 */
  push32(0x10877694u); f_10873660();
  /* 10877694 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877697 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087769a jne 0x1087769d */
  if (!C.zf) goto L_1087769d;
  /* 1087769c int3  */
  x86_unimpl("int3 @ 0x1087769c");
L_1087769d:;
  /* 1087769d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1087769f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108776a1 jne 0x10877679 */
  if (!C.zf) goto L_10877679;
  /* 108776a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776a6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 108776ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108776b3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 108776b6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108776bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 108776be mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108776c4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 108776c7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108776ca push ecx */
  push32((uint32_t)(ECX));
  /* 108776cb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108776ce push edx */
  push32((uint32_t)(EDX));
  /* 108776cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776d2 push eax */
  push32((uint32_t)(EAX));
  /* 108776d3 call 0x1087b530 */
  push32(0x108776d8u); f_1087b530();
  /* 108776d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108776db mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 108776de mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776e1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108776e4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108776e7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108776ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776f0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108776f4 jl 0x10877718 */
  if ((C.sf!=C.of)) goto L_10877718;
  /* 108776f6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 108776f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108776fb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 108776fe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10877700 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10877706 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10877709 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087770c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1087770e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877711 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10877714 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10877716 jmp 0x10877729 */
  goto L_10877729;
L_10877718:;
  /* 10877718 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1087771b push edx */
  push32((uint32_t)(EDX));
  /* 1087771c push 0 */
  push32((uint32_t)(0x0u));
  /* 1087771e call 0x1087b2b0 */
  push32(0x10877723u); f_1087b2b0();
  /* 10877723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877726 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10877729:;
  /* 10877729 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1087772c pop edi */
  EDI = (pop32());
  /* 1087772d pop esi */
  ESI = (pop32());
  /* 1087772e pop ebx */
  EBX = (pop32());
  /* 1087772f mov esp, ebp */
  ESP = (EBP);
  /* 10877731 pop ebp */
  EBP = (pop32());
  /* 10877732 ret  */
  ESPCHK(0x10877640u, _esp0);
  ESP += 4; return;
}

/* FUN_10007740 @ 0x10877740 (47 bytes, 17 insns) */
void f_10877740(void) {
  FTRACE(0x10877740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877740 push ecx */
  push32((uint32_t)(ECX));
  /* 10877741 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877746 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1087774a jb 0x10877760 */
  if (C.cf) goto L_10877760;
L_1087774c:;
  /* 1087774c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877752 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877757 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10877759 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087775e jae 0x1087774c */
  if (!C.cf) goto L_1087774c;
L_10877760:;
  /* 10877760 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877762 mov eax, esp */
  EAX = (ESP);
  /* 10877764 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10877766 mov esp, ecx */
  ESP = (ECX);
  /* 10877768 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1087776a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1087776d push eax */
  push32((uint32_t)(EAX));
  /* 1087776e ret  */
  ESPCHK(0x10877740u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x10877770 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10877770(void) {
  FTRACE(0x10877770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877770 push ebp */
  push32((uint32_t)(EBP));
  /* 10877771 mov ebp, esp */
  EBP = (ESP);
  /* 10877773 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877776 push esi */
  push32((uint32_t)(ESI));
  /* 10877777 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087777b je 0x10877783 */
  if (C.zf) goto L_10877783;
  /* 1087777d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877781 jne 0x10877788 */
  if (!C.zf) goto L_10877788;
L_10877783:;
  /* 10877783 jmp 0x10877958 */
  goto L_10877958;
L_10877788:;
  /* 10877788 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087778c je 0x108777a4 */
  if (C.zf) goto L_108777a4;
  /* 1087778e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877792 je 0x108777a4 */
  if (C.zf) goto L_108777a4;
  /* 10877794 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877798 je 0x108777a4 */
  if (C.zf) goto L_108777a4;
  /* 1087779a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087779e jne 0x10877881 */
  if (!C.zf) goto L_10877881;
L_108777a4:;
  /* 108777a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108777a6 call 0x10877fa0 */
  push32(0x108777abu); f_10877fa0();
  /* 108777ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108777ae cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108777b2 je 0x108777ba */
  if (C.zf) goto L_108777ba;
  /* 108777b4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108777b8 jne 0x108777ff */
  if (!C.zf) goto L_108777ff;
L_108777ba:;
  /* 108777ba cmp dword ptr [0x108a07ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a07ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108777c1 jne 0x108777ff */
  if (!C.zf) goto L_108777ff;
  /* 108777c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108777c5 push 0x108779a0 */
  push32((uint32_t)(0x108779a0u));
  /* 108777ca call dword ptr [0x108a3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3340))), 0x108777d0u);
  /* 108777d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108777d3 jne 0x108777e1 */
  if (!C.zf) goto L_108777e1;
  /* 108777d5 mov dword ptr [0x108a07ac], 1 */
  w32((uint32_t)(0x108a07ac), (0x1u));
  /* 108777df jmp 0x108777ff */
  goto L_108777ff;
L_108777e1:;
  /* 108777e1 call dword ptr [0x108a33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33b4))), 0x108777e7u);
  /* 108777e7 mov esi, eax */
  ESI = (EAX);
  /* 108777e9 call 0x1087c480 */
  push32(0x108777eeu); f_1087c480();
  /* 108777ee mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 108777f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108777f2 call 0x10878040 */
  push32(0x108777f7u); f_10878040();
  /* 108777f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108777fa jmp 0x10877958 */
  goto L_10877958;
L_108777ff:;
  /* 108777ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877802 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10877805 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10877808 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1087780b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1087780e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877812 ja 0x10877872 */
  if ((!C.cf&&!C.zf)) goto L_10877872;
  /* 10877814 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10877817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10877819 mov dl, byte ptr [eax + 0x1087797f] */
  DL = (r8((uint32_t)(EAX + 0x1087797f)));
  /* 1087781f jmp dword ptr [edx*4 + 0x1087796b] */
  switch (EDX) {
    case 0: goto L_10877826;
    case 1: goto L_10877860;
    case 2: goto L_1087783a;
    case 3: goto L_1087784d;
    case 4: goto L_10877872;
    default: x86_unimpl("switch@0x1087781f out of table"); return;
  }
L_10877826:;
  /* 10877826 mov ecx, dword ptr [0x108a079c] */
  ECX = (r32((uint32_t)(0x108a079c)));
  /* 1087782c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087782f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877832 mov dword ptr [0x108a079c], edx */
  w32((uint32_t)(0x108a079c), (EDX));
  /* 10877838 jmp 0x10877872 */
  goto L_10877872;
L_1087783a:;
  /* 1087783a mov eax, dword ptr [0x108a07a0] */
  EAX = (r32((uint32_t)(0x108a07a0)));
  /* 1087783f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10877842 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877845 mov dword ptr [0x108a07a0], ecx */
  w32((uint32_t)(0x108a07a0), (ECX));
  /* 1087784b jmp 0x10877872 */
  goto L_10877872;
L_1087784d:;
  /* 1087784d mov edx, dword ptr [0x108a07a4] */
  EDX = (r32((uint32_t)(0x108a07a4)));
  /* 10877853 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10877856 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877859 mov dword ptr [0x108a07a4], eax */
  w32((uint32_t)(0x108a07a4), (EAX));
  /* 1087785e jmp 0x10877872 */
  goto L_10877872;
L_10877860:;
  /* 10877860 mov ecx, dword ptr [0x108a07a8] */
  ECX = (r32((uint32_t)(0x108a07a8)));
  /* 10877866 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10877869 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087786c mov dword ptr [0x108a07a8], edx */
  w32((uint32_t)(0x108a07a8), (EDX));
L_10877872:;
  /* 10877872 push 1 */
  push32((uint32_t)(0x1u));
  /* 10877874 call 0x10878040 */
  push32(0x10877879u); f_10878040();
  /* 10877879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087787c jmp 0x10877953 */
  goto L_10877953;
L_10877881:;
  /* 10877881 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877885 je 0x10877898 */
  if (C.zf) goto L_10877898;
  /* 10877887 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087788b je 0x10877898 */
  if (C.zf) goto L_10877898;
  /* 1087788d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877891 je 0x10877898 */
  if (C.zf) goto L_10877898;
  /* 10877893 jmp 0x10877958 */
  goto L_10877958;
L_10877898:;
  /* 10877898 call 0x10873fe0 */
  push32(0x1087789du); f_10873fe0();
  /* 1087789d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108778a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108778a3 cmp dword ptr [eax + 0x50], 0x1089ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1089ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108778aa jne 0x108778f5 */
  if (!C.zf) goto L_108778f5;
  /* 108778ac push 0x133 */
  push32((uint32_t)(0x133u));
  /* 108778b1 push 0x1089bf94 */
  push32((uint32_t)(0x1089bf94u));
  /* 108778b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108778b8 mov ecx, dword ptr [0x1089ec80] */
  ECX = (r32((uint32_t)(0x1089ec80)));
  /* 108778be push ecx */
  push32((uint32_t)(ECX));
  /* 108778bf call 0x108745a0 */
  push32(0x108778c4u); f_108745a0();
  /* 108778c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108778c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108778ca mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 108778cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108778d0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108778d4 je 0x108778f3 */
  if (C.zf) goto L_108778f3;
  /* 108778d6 mov ecx, dword ptr [0x1089ec80] */
  ECX = (r32((uint32_t)(0x1089ec80)));
  /* 108778dc push ecx */
  push32((uint32_t)(ECX));
  /* 108778dd push 0x1089ec00 */
  push32((uint32_t)(0x1089ec00u));
  /* 108778e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108778e5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 108778e8 push eax */
  push32((uint32_t)(EAX));
  /* 108778e9 call 0x1087ae80 */
  push32(0x108778eeu); f_1087ae80();
  /* 108778ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108778f1 jmp 0x108778f5 */
  goto L_108778f5;
L_108778f3:;
  /* 108778f3 jmp 0x10877958 */
  goto L_10877958;
L_108778f5:;
  /* 108778f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108778f8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 108778fb push edx */
  push32((uint32_t)(EDX));
  /* 108778fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108778ff push eax */
  push32((uint32_t)(EAX));
  /* 10877900 call 0x10877c80 */
  push32(0x10877905u); f_10877c80();
  /* 10877905 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877908 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087790b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087790f jne 0x10877913 */
  if (!C.zf) goto L_10877913;
  /* 10877911 jmp 0x10877958 */
  goto L_10877958;
L_10877913:;
  /* 10877913 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877916 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10877919 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1087791c:;
  /* 1087791c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087791f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10877922 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877925 jne 0x10877953 */
  if (!C.zf) goto L_10877953;
  /* 10877927 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087792a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087792d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10877930 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877933 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877936 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10877939 mov edx, dword ptr [0x1089ec84] */
  EDX = (r32((uint32_t)(0x1089ec84)));
  /* 1087793f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10877942 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877945 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10877948 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087794a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087794d jb 0x10877951 */
  if (C.cf) goto L_10877951;
  /* 1087794f jmp 0x10877953 */
  goto L_10877953;
L_10877951:;
  /* 10877951 jmp 0x1087791c */
  goto L_1087791c;
L_10877953:;
  /* 10877953 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877956 jmp 0x10877966 */
  goto L_10877966;
L_10877958:;
  /* 10877958 call 0x1087c470 */
  push32(0x1087795du); f_1087c470();
  /* 1087795d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10877963 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10877966:;
  /* 10877966 pop esi */
  ESI = (pop32());
  /* 10877967 mov esp, ebp */
  ESP = (EBP);
  /* 10877969 pop ebp */
  EBP = (pop32());
  /* 1087796a ret  */
  ESPCHK(0x10877770u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x108779a0 (146 bytes, 45 insns) */
void f_108779a0(void) {
  FTRACE(0x108779a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108779a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108779a1 mov ebp, esp */
  EBP = (ESP);
  /* 108779a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108779a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108779a8 call 0x10877fa0 */
  push32(0x108779adu); f_10877fa0();
  /* 108779ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108779b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108779b4 jne 0x108779ce */
  if (!C.zf) goto L_108779ce;
  /* 108779b6 mov dword ptr [ebp - 8], 0x108a079c */
  w32((uint32_t)(EBP + -0x8), (0x108a079cu));
  /* 108779bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108779c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108779c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108779c5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 108779cc jmp 0x108779e4 */
  goto L_108779e4;
L_108779ce:;
  /* 108779ce mov dword ptr [ebp - 8], 0x108a07a0 */
  w32((uint32_t)(EBP + -0x8), (0x108a07a0u));
  /* 108779d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108779d8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108779da mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108779dd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_108779e4:;
  /* 108779e4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108779e8 jne 0x108779f8 */
  if (!C.zf) goto L_108779f8;
  /* 108779ea push 1 */
  push32((uint32_t)(0x1u));
  /* 108779ec call 0x10878040 */
  push32(0x108779f1u); f_10878040();
  /* 108779f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108779f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108779f6 jmp 0x10877a2c */
  goto L_10877a2c;
L_108779f8:;
  /* 108779f8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108779fc je 0x10877a1d */
  if (C.zf) goto L_10877a1d;
  /* 108779fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877a01 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10877a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10877a09 call 0x10878040 */
  push32(0x10877a0eu); f_10878040();
  /* 10877a0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877a11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877a14 push edx */
  push32((uint32_t)(EDX));
  /* 10877a15 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10877a18u);
  /* 10877a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877a1b jmp 0x10877a27 */
  goto L_10877a27;
L_10877a1d:;
  /* 10877a1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10877a1f call 0x10878040 */
  push32(0x10877a24u); f_10878040();
  /* 10877a24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877a27:;
  /* 10877a27 mov eax, 1 */
  EAX = (0x1u);
L_10877a2c:;
  /* 10877a2c mov esp, ebp */
  ESP = (EBP);
  /* 10877a2e pop ebp */
  EBP = (pop32());
  /* 10877a2f ret 4 */
  ESPCHK(0x108779a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007a40 @ 0x10877a40 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10877a40(void) {
  FTRACE(0x10877a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10877a41 mov ebp, esp */
  EBP = (ESP);
  /* 10877a43 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877a46 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10877a4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877a50 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10877a53 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10877a56 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877a59 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10877a5c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877a60 ja 0x10877b0e */
  if ((!C.cf&&!C.zf)) goto L_10877b0e;
  /* 10877a66 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10877a69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10877a6b mov dl, byte ptr [eax + 0x10877c62] */
  DL = (r8((uint32_t)(EAX + 0x10877c62)));
  /* 10877a71 jmp dword ptr [edx*4 + 0x10877c4a] */
  switch (EDX) {
    case 0: goto L_10877a78;
    case 1: goto L_10877ae3;
    case 2: goto L_10877ac9;
    case 3: goto L_10877a95;
    case 4: goto L_10877aaf;
    case 5: goto L_10877b0e;
    default: x86_unimpl("switch@0x10877a71 out of table"); return;
  }
L_10877a78:;
  /* 10877a78 mov dword ptr [ebp - 0x18], 0x108a079c */
  w32((uint32_t)(EBP + -0x18), (0x108a079cu));
  /* 10877a7f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10877a82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10877a84 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10877a87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877a8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877a8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10877a90 jmp 0x10877b16 */
  goto L_10877b16;
L_10877a95:;
  /* 10877a95 mov dword ptr [ebp - 0x18], 0x108a07a0 */
  w32((uint32_t)(EBP + -0x18), (0x108a07a0u));
  /* 10877a9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10877a9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10877aa1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10877aa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877aa7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877aaa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10877aad jmp 0x10877b16 */
  goto L_10877b16;
L_10877aaf:;
  /* 10877aaf mov dword ptr [ebp - 0x18], 0x108a07a4 */
  w32((uint32_t)(EBP + -0x18), (0x108a07a4u));
  /* 10877ab6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10877ab9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10877abb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10877abe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877ac1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877ac4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10877ac7 jmp 0x10877b16 */
  goto L_10877b16;
L_10877ac9:;
  /* 10877ac9 mov dword ptr [ebp - 0x18], 0x108a07a8 */
  w32((uint32_t)(EBP + -0x18), (0x108a07a8u));
  /* 10877ad0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10877ad3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10877ad5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10877ad8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10877adb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877ade mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10877ae1 jmp 0x10877b16 */
  goto L_10877b16;
L_10877ae3:;
  /* 10877ae3 call 0x10873fe0 */
  push32(0x10877ae8u); f_10873fe0();
  /* 10877ae8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10877aeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877aee mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10877af1 push edx */
  push32((uint32_t)(EDX));
  /* 10877af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877af5 push eax */
  push32((uint32_t)(EAX));
  /* 10877af6 call 0x10877c80 */
  push32(0x10877afbu); f_10877c80();
  /* 10877afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877afe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877b01 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10877b04 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10877b07 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10877b09 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10877b0c jmp 0x10877b16 */
  goto L_10877b16;
L_10877b0e:;
  /* 10877b0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10877b11 jmp 0x10877c46 */
  goto L_10877c46;
L_10877b16:;
  /* 10877b16 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b1a je 0x10877b26 */
  if (C.zf) goto L_10877b26;
  /* 10877b1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10877b1e call 0x10877fa0 */
  push32(0x10877b23u); f_10877fa0();
  /* 10877b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877b26:;
  /* 10877b26 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b2a jne 0x10877b43 */
  if (!C.zf) goto L_10877b43;
  /* 10877b2c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b30 je 0x10877b3c */
  if (C.zf) goto L_10877b3c;
  /* 10877b32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10877b34 call 0x10878040 */
  push32(0x10877b39u); f_10878040();
  /* 10877b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877b3c:;
  /* 10877b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10877b3e jmp 0x10877c46 */
  goto L_10877c46;
L_10877b43:;
  /* 10877b43 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b47 jne 0x10877b60 */
  if (!C.zf) goto L_10877b60;
  /* 10877b49 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b4d je 0x10877b59 */
  if (C.zf) goto L_10877b59;
  /* 10877b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10877b51 call 0x10878040 */
  push32(0x10877b56u); f_10878040();
  /* 10877b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877b59:;
  /* 10877b59 push 3 */
  push32((uint32_t)(0x3u));
  /* 10877b5b call 0x10873d60 */
  push32(0x10877b60u); f_10873d60();
L_10877b60:;
  /* 10877b60 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b64 je 0x10877b72 */
  if (C.zf) goto L_10877b72;
  /* 10877b66 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b6a je 0x10877b72 */
  if (C.zf) goto L_10877b72;
  /* 10877b6c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b70 jne 0x10877b9e */
  if (!C.zf) goto L_10877b9e;
L_10877b72:;
  /* 10877b72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877b75 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10877b78 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10877b7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877b7e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10877b85 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877b89 jne 0x10877b9e */
  if (!C.zf) goto L_10877b9e;
  /* 10877b8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877b8e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10877b91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10877b94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877b97 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10877b9e:;
  /* 10877b9e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877ba2 jne 0x10877be0 */
  if (!C.zf) goto L_10877be0;
  /* 10877ba4 mov eax, dword ptr [0x1089ec78] */
  EAX = (r32((uint32_t)(0x1089ec78)));
  /* 10877ba9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10877bac jmp 0x10877bb7 */
  goto L_10877bb7;
L_10877bae:;
  /* 10877bae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10877bb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877bb4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10877bb7:;
  /* 10877bb7 mov edx, dword ptr [0x1089ec78] */
  EDX = (r32((uint32_t)(0x1089ec78)));
  /* 10877bbd add edx, dword ptr [0x1089ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1089ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877bc3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877bc6 jge 0x10877bde */
  if ((C.sf==C.of)) goto L_10877bde;
  /* 10877bc8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10877bcb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10877bce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877bd1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10877bd4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10877bdc jmp 0x10877bae */
  goto L_10877bae;
L_10877bde:;
  /* 10877bde jmp 0x10877be9 */
  goto L_10877be9;
L_10877be0:;
  /* 10877be0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10877be3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10877be9:;
  /* 10877be9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877bed je 0x10877bf9 */
  if (C.zf) goto L_10877bf9;
  /* 10877bef push 1 */
  push32((uint32_t)(0x1u));
  /* 10877bf1 call 0x10878040 */
  push32(0x10877bf6u); f_10878040();
  /* 10877bf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877bf9:;
  /* 10877bf9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877bfd jne 0x10877c10 */
  if (!C.zf) goto L_10877c10;
  /* 10877bff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877c02 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10877c05 push edx */
  push32((uint32_t)(EDX));
  /* 10877c06 push 8 */
  push32((uint32_t)(0x8u));
  /* 10877c08 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10877c0bu);
  /* 10877c0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877c0e jmp 0x10877c1a */
  goto L_10877c1a;
L_10877c10:;
  /* 10877c10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877c13 push eax */
  push32((uint32_t)(EAX));
  /* 10877c14 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10877c17u);
  /* 10877c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877c1a:;
  /* 10877c1a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877c1e je 0x10877c2c */
  if (C.zf) goto L_10877c2c;
  /* 10877c20 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877c24 je 0x10877c2c */
  if (C.zf) goto L_10877c2c;
  /* 10877c26 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877c2a jne 0x10877c44 */
  if (!C.zf) goto L_10877c44;
L_10877c2c:;
  /* 10877c2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877c2f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10877c32 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10877c35 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877c39 jne 0x10877c44 */
  if (!C.zf) goto L_10877c44;
  /* 10877c3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877c3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877c41 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10877c44:;
  /* 10877c44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10877c46:;
  /* 10877c46 mov esp, ebp */
  ESP = (EBP);
  /* 10877c48 pop ebp */
  EBP = (pop32());
  /* 10877c49 ret  */
  ESPCHK(0x10877a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c80 @ 0x10877c80 (91 bytes, 35 insns) */
void f_10877c80(void) {
  FTRACE(0x10877c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10877c81 mov ebp, esp */
  EBP = (ESP);
  /* 10877c83 push ecx */
  push32((uint32_t)(ECX));
  /* 10877c84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877c87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10877c8a:;
  /* 10877c8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877c8d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10877c90 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877c93 je 0x10877cb3 */
  if (C.zf) goto L_10877cb3;
  /* 10877c95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877c98 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877c9b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10877c9e mov ecx, dword ptr [0x1089ec84] */
  ECX = (r32((uint32_t)(0x1089ec84)));
  /* 10877ca4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10877ca7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877caa add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877cac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877caf jae 0x10877cb3 */
  if (!C.cf) goto L_10877cb3;
  /* 10877cb1 jmp 0x10877c8a */
  goto L_10877c8a;
L_10877cb3:;
  /* 10877cb3 mov eax, dword ptr [0x1089ec84] */
  EAX = (r32((uint32_t)(0x1089ec84)));
  /* 10877cb8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10877cbb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877cbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877cc0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877cc3 jae 0x10877cd5 */
  if (!C.cf) goto L_10877cd5;
  /* 10877cc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877cc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10877ccb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877cce jne 0x10877cd5 */
  if (!C.zf) goto L_10877cd5;
  /* 10877cd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877cd3 jmp 0x10877cd7 */
  goto L_10877cd7;
L_10877cd5:;
  /* 10877cd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10877cd7:;
  /* 10877cd7 mov esp, ebp */
  ESP = (EBP);
  /* 10877cd9 pop ebp */
  EBP = (pop32());
  /* 10877cda ret  */
  ESPCHK(0x10877c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x10877ce0 (13 bytes, 6 insns) */
void f_10877ce0(void) {
  FTRACE(0x10877ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10877ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10877ce3 call 0x10873fe0 */
  push32(0x10877ce8u); f_10873fe0();
  /* 10877ce8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877ceb pop ebp */
  EBP = (pop32());
  /* 10877cec ret  */
  ESPCHK(0x10877ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x10877cf0 (13 bytes, 6 insns) */
void f_10877cf0(void) {
  FTRACE(0x10877cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10877cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10877cf3 call 0x10873fe0 */
  push32(0x10877cf8u); f_10873fe0();
  /* 10877cf8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877cfb pop ebp */
  EBP = (pop32());
  /* 10877cfc ret  */
  ESPCHK(0x10877cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d00 @ 0x10877d00 (187 bytes, 54 insns) */
void f_10877d00(void) {
  FTRACE(0x10877d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10877d01 mov ebp, esp */
  EBP = (ESP);
  /* 10877d03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10877d06 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10877d0d cmp dword ptr [0x108a07b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a07b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877d14 jne 0x10877d73 */
  if (!C.zf) goto L_10877d73;
  /* 10877d16 push 0x1089b3c0 */
  push32((uint32_t)(0x1089b3c0u));
  /* 10877d1b call dword ptr [0x108a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3384))), 0x10877d21u);
  /* 10877d21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10877d24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877d28 je 0x10877d47 */
  if (C.zf) goto L_10877d47;
  /* 10877d2a push 0x1089bfc4 */
  push32((uint32_t)(0x1089bfc4u));
  /* 10877d2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877d32 push eax */
  push32((uint32_t)(EAX));
  /* 10877d33 call dword ptr [0x108a3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3380))), 0x10877d39u);
  /* 10877d39 mov dword ptr [0x108a07b0], eax */
  w32((uint32_t)(0x108a07b0), (EAX));
  /* 10877d3e cmp dword ptr [0x108a07b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a07b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877d45 jne 0x10877d4b */
  if (!C.zf) goto L_10877d4b;
L_10877d47:;
  /* 10877d47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10877d49 jmp 0x10877db7 */
  goto L_10877db7;
L_10877d4b:;
  /* 10877d4b push 0x1089bfb4 */
  push32((uint32_t)(0x1089bfb4u));
  /* 10877d50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10877d54 call dword ptr [0x108a3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3380))), 0x10877d5au);
  /* 10877d5a mov dword ptr [0x108a07b4], eax */
  w32((uint32_t)(0x108a07b4), (EAX));
  /* 10877d5f push 0x1089bfa0 */
  push32((uint32_t)(0x1089bfa0u));
  /* 10877d64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10877d67 push edx */
  push32((uint32_t)(EDX));
  /* 10877d68 call dword ptr [0x108a3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3380))), 0x10877d6eu);
  /* 10877d6e mov dword ptr [0x108a07b8], eax */
  w32((uint32_t)(0x108a07b8), (EAX));
L_10877d73:;
  /* 10877d73 cmp dword ptr [0x108a07b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a07b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877d7a je 0x10877d85 */
  if (C.zf) goto L_10877d85;
  /* 10877d7c call dword ptr [0x108a07b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a07b4))), 0x10877d82u);
  /* 10877d82 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10877d85:;
  /* 10877d85 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877d89 je 0x10877da1 */
  if (C.zf) goto L_10877da1;
  /* 10877d8b cmp dword ptr [0x108a07b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a07b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877d92 je 0x10877da1 */
  if (C.zf) goto L_10877da1;
  /* 10877d94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877d97 push eax */
  push32((uint32_t)(EAX));
  /* 10877d98 call dword ptr [0x108a07b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a07b8))), 0x10877d9eu);
  /* 10877d9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10877da1:;
  /* 10877da1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10877da4 push ecx */
  push32((uint32_t)(ECX));
  /* 10877da5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10877da8 push edx */
  push32((uint32_t)(EDX));
  /* 10877da9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877dac push eax */
  push32((uint32_t)(EAX));
  /* 10877dad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10877db1 call dword ptr [0x108a07b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a07b0))), 0x10877db7u);
L_10877db7:;
  /* 10877db7 mov esp, ebp */
  ESP = (EBP);
  /* 10877db9 pop ebp */
  EBP = (pop32());
  /* 10877dba ret  */
  ESPCHK(0x10877d00u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10877dc0 (254 bytes, 109 insns) */
void f_10877dc0(void) {
  FTRACE(0x10877dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877dc0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10877dc4 push edi */
  push32((uint32_t)(EDI));
  /* 10877dc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10877dc7 je 0x10877e43 */
  if (C.zf) goto L_10877e43;
  /* 10877dc9 push esi */
  push32((uint32_t)(ESI));
  /* 10877dca push ebx */
  push32((uint32_t)(EBX));
  /* 10877dcb mov ebx, ecx */
  EBX = (ECX);
  /* 10877dcd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10877dd1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10877dd7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10877ddb jne 0x10877de4 */
  if (!C.zf) goto L_10877de4;
  /* 10877ddd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10877de0 jne 0x10877e51 */
  if (!C.zf) goto L_10877e51;
  /* 10877de2 jmp 0x10877e05 */
  goto L_10877e05;
L_10877de4:;
  /* 10877de4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10877de6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10877de7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10877de9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10877dea dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10877deb je 0x10877e12 */
  if (C.zf) goto L_10877e12;
  /* 10877ded test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10877def je 0x10877e1a */
  if (C.zf) goto L_10877e1a;
  /* 10877df1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10877df7 jne 0x10877de4 */
  if (!C.zf) goto L_10877de4;
  /* 10877df9 mov ebx, ecx */
  EBX = (ECX);
  /* 10877dfb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10877dfe jne 0x10877e51 */
  if (!C.zf) goto L_10877e51;
L_10877e00:;
  /* 10877e00 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10877e03 je 0x10877e12 */
  if (C.zf) goto L_10877e12;
L_10877e05:;
  /* 10877e05 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10877e07 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10877e08 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10877e0a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10877e0b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10877e0d je 0x10877e3e */
  if (C.zf) goto L_10877e3e;
  /* 10877e0f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10877e10 jne 0x10877e05 */
  if (!C.zf) goto L_10877e05;
L_10877e12:;
  /* 10877e12 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10877e16 pop ebx */
  EBX = (pop32());
  /* 10877e17 pop esi */
  ESI = (pop32());
  /* 10877e18 pop edi */
  EDI = (pop32());
  /* 10877e19 ret  */
  ESPCHK(0x10877dc0u, _esp0);
  ESP += 4; return;
L_10877e1a:;
  /* 10877e1a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10877e20 je 0x10877e34 */
  if (C.zf) goto L_10877e34;
L_10877e22:;
  /* 10877e22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10877e24 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10877e25 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10877e26 je 0x10877eb6 */
  if (C.zf) goto L_10877eb6;
  /* 10877e2c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10877e32 jne 0x10877e22 */
  if (!C.zf) goto L_10877e22;
L_10877e34:;
  /* 10877e34 mov ebx, ecx */
  EBX = (ECX);
  /* 10877e36 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10877e39 jne 0x10877ea7 */
  if (!C.zf) goto L_10877ea7;
L_10877e3b:;
  /* 10877e3b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10877e3d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10877e3e:;
  /* 10877e3e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10877e3f jne 0x10877e3b */
  if (!C.zf) goto L_10877e3b;
  /* 10877e41 pop ebx */
  EBX = (pop32());
  /* 10877e42 pop esi */
  ESI = (pop32());
L_10877e43:;
  /* 10877e43 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10877e47 pop edi */
  EDI = (pop32());
  /* 10877e48 ret  */
  ESPCHK(0x10877dc0u, _esp0);
  ESP += 4; return;
L_10877e49:;
  /* 10877e49 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10877e4b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10877e4e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10877e4f je 0x10877e00 */
  if (C.zf) goto L_10877e00;
L_10877e51:;
  /* 10877e51 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10877e56 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10877e58 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877e5a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10877e5d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10877e5f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10877e61 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10877e64 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10877e69 je 0x10877e49 */
  if (C.zf) goto L_10877e49;
  /* 10877e6b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10877e6d je 0x10877e9b */
  if (C.zf) goto L_10877e9b;
  /* 10877e6f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10877e71 je 0x10877e91 */
  if (C.zf) goto L_10877e91;
  /* 10877e73 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10877e79 je 0x10877e87 */
  if (C.zf) goto L_10877e87;
  /* 10877e7b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10877e81 jne 0x10877e49 */
  if (!C.zf) goto L_10877e49;
  /* 10877e83 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10877e85 jmp 0x10877e9f */
  goto L_10877e9f;
L_10877e87:;
  /* 10877e87 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10877e8d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10877e8f jmp 0x10877e9f */
  goto L_10877e9f;
L_10877e91:;
  /* 10877e91 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10877e97 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10877e99 jmp 0x10877e9f */
  goto L_10877e9f;
L_10877e9b:;
  /* 10877e9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10877e9d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10877e9f:;
  /* 10877e9f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10877ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10877ea4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10877ea5 je 0x10877eb1 */
  if (C.zf) goto L_10877eb1;
L_10877ea7:;
  /* 10877ea7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10877ea9:;
  /* 10877ea9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10877eab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10877eae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10877eaf jne 0x10877ea9 */
  if (!C.zf) goto L_10877ea9;
L_10877eb1:;
  /* 10877eb1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10877eb4 jne 0x10877e3b */
  if (!C.zf) goto L_10877e3b;
L_10877eb6:;
  /* 10877eb6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10877eba pop ebx */
  EBX = (pop32());
  /* 10877ebb pop esi */
  ESI = (pop32());
  /* 10877ebc pop edi */
  EDI = (pop32());
  /* 10877ebd ret  */
  ESPCHK(0x10877dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ec0 @ 0x10877ec0 (55 bytes, 16 insns) */
void f_10877ec0(void) {
  FTRACE(0x10877ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10877ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10877ec3 mov eax, dword ptr [0x1089eb84] */
  EAX = (r32((uint32_t)(0x1089eb84)));
  /* 10877ec8 push eax */
  push32((uint32_t)(EAX));
  /* 10877ec9 call dword ptr [0x108a3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3348))), 0x10877ecfu);
  /* 10877ecf mov ecx, dword ptr [0x1089eb74] */
  ECX = (r32((uint32_t)(0x1089eb74)));
  /* 10877ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 10877ed6 call dword ptr [0x108a3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3348))), 0x10877edcu);
  /* 10877edc mov edx, dword ptr [0x1089eb64] */
  EDX = (r32((uint32_t)(0x1089eb64)));
  /* 10877ee2 push edx */
  push32((uint32_t)(EDX));
  /* 10877ee3 call dword ptr [0x108a3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3348))), 0x10877ee9u);
  /* 10877ee9 mov eax, dword ptr [0x1089eb44] */
  EAX = (r32((uint32_t)(0x1089eb44)));
  /* 10877eee push eax */
  push32((uint32_t)(EAX));
  /* 10877eef call dword ptr [0x108a3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3348))), 0x10877ef5u);
  /* 10877ef5 pop ebp */
  EBP = (pop32());
  /* 10877ef6 ret  */
  ESPCHK(0x10877ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f00 @ 0x10877f00 (159 bytes, 47 insns) */
void f_10877f00(void) {
  FTRACE(0x10877f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10877f01 mov ebp, esp */
  EBP = (ESP);
  /* 10877f03 push ecx */
  push32((uint32_t)(ECX));
  /* 10877f04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10877f0b jmp 0x10877f16 */
  goto L_10877f16;
L_10877f0d:;
  /* 10877f0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877f10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10877f13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10877f16:;
  /* 10877f16 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877f1a jge 0x10877f69 */
  if ((C.sf==C.of)) goto L_10877f69;
  /* 10877f1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877f1f cmp dword ptr [ecx*4 + 0x1089eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1089eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877f27 je 0x10877f67 */
  if (C.zf) goto L_10877f67;
  /* 10877f29 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877f2d je 0x10877f67 */
  if (C.zf) goto L_10877f67;
  /* 10877f2f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877f33 je 0x10877f67 */
  if (C.zf) goto L_10877f67;
  /* 10877f35 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877f39 je 0x10877f67 */
  if (C.zf) goto L_10877f67;
  /* 10877f3b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877f3f je 0x10877f67 */
  if (C.zf) goto L_10877f67;
  /* 10877f41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877f44 mov eax, dword ptr [edx*4 + 0x1089eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1089eb40)));
  /* 10877f4b push eax */
  push32((uint32_t)(EAX));
  /* 10877f4c call dword ptr [0x108a33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c4))), 0x10877f52u);
  /* 10877f52 push 2 */
  push32((uint32_t)(0x2u));
  /* 10877f54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877f57 mov edx, dword ptr [ecx*4 + 0x1089eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1089eb40)));
  /* 10877f5e push edx */
  push32((uint32_t)(EDX));
  /* 10877f5f call 0x10875030 */
  push32(0x10877f64u); f_10875030();
  /* 10877f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877f67:;
  /* 10877f67 jmp 0x10877f0d */
  goto L_10877f0d;
L_10877f69:;
  /* 10877f69 mov eax, dword ptr [0x1089eb64] */
  EAX = (r32((uint32_t)(0x1089eb64)));
  /* 10877f6e push eax */
  push32((uint32_t)(EAX));
  /* 10877f6f call dword ptr [0x108a33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c4))), 0x10877f75u);
  /* 10877f75 mov ecx, dword ptr [0x1089eb74] */
  ECX = (r32((uint32_t)(0x1089eb74)));
  /* 10877f7b push ecx */
  push32((uint32_t)(ECX));
  /* 10877f7c call dword ptr [0x108a33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c4))), 0x10877f82u);
  /* 10877f82 mov edx, dword ptr [0x1089eb84] */
  EDX = (r32((uint32_t)(0x1089eb84)));
  /* 10877f88 push edx */
  push32((uint32_t)(EDX));
  /* 10877f89 call dword ptr [0x108a33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c4))), 0x10877f8fu);
  /* 10877f8f mov eax, dword ptr [0x1089eb44] */
  EAX = (r32((uint32_t)(0x1089eb44)));
  /* 10877f94 push eax */
  push32((uint32_t)(EAX));
  /* 10877f95 call dword ptr [0x108a33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a33c4))), 0x10877f9bu);
  /* 10877f9b mov esp, ebp */
  ESP = (EBP);
  /* 10877f9d pop ebp */
  EBP = (pop32());
  /* 10877f9e ret  */
  ESPCHK(0x10877f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10877fa0 (151 bytes, 46 insns) */
void f_10877fa0(void) {
  FTRACE(0x10877fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10877fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10877fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10877fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10877fa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877fa7 cmp dword ptr [eax*4 + 0x1089eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1089eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877faf jne 0x10878022 */
  if (!C.zf) goto L_10878022;
  /* 10877fb1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10877fb6 push 0x1089bfd0 */
  push32((uint32_t)(0x1089bfd0u));
  /* 10877fbb push 2 */
  push32((uint32_t)(0x2u));
  /* 10877fbd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10877fbf call 0x108745a0 */
  push32(0x10877fc4u); f_108745a0();
  /* 10877fc4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877fc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10877fca cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877fce jne 0x10877fda */
  if (!C.zf) goto L_10877fda;
  /* 10877fd0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10877fd2 call 0x10873510 */
  push32(0x10877fd7u); f_10873510();
  /* 10877fd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10877fda:;
  /* 10877fda push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10877fdc call 0x10877fa0 */
  push32(0x10877fe1u); f_10877fa0();
  /* 10877fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10877fe4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877fe7 cmp dword ptr [ecx*4 + 0x1089eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1089eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10877fef jne 0x1087800a */
  if (!C.zf) goto L_1087800a;
  /* 10877ff1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10877ff4 push edx */
  push32((uint32_t)(EDX));
  /* 10877ff5 call dword ptr [0x108a3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3348))), 0x10877ffbu);
  /* 10877ffb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10877ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878001 mov dword ptr [eax*4 + 0x1089eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1089eb40), (ECX));
  /* 10878008 jmp 0x10878018 */
  goto L_10878018;
L_1087800a:;
  /* 1087800a push 2 */
  push32((uint32_t)(0x2u));
  /* 1087800c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087800f push edx */
  push32((uint32_t)(EDX));
  /* 10878010 call 0x10875030 */
  push32(0x10878015u); f_10875030();
  /* 10878015 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10878018:;
  /* 10878018 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1087801a call 0x10878040 */
  push32(0x1087801fu); f_10878040();
  /* 1087801f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10878022:;
  /* 10878022 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878025 mov ecx, dword ptr [eax*4 + 0x1089eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1089eb40)));
  /* 1087802c push ecx */
  push32((uint32_t)(ECX));
  /* 1087802d call dword ptr [0x108a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3338))), 0x10878033u);
  /* 10878033 mov esp, ebp */
  ESP = (EBP);
  /* 10878035 pop ebp */
  EBP = (pop32());
  /* 10878036 ret  */
  ESPCHK(0x10877fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008040 @ 0x10878040 (22 bytes, 8 insns) */
void f_10878040(void) {
  FTRACE(0x10878040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878040 push ebp */
  push32((uint32_t)(EBP));
  /* 10878041 mov ebp, esp */
  EBP = (ESP);
  /* 10878043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878046 mov ecx, dword ptr [eax*4 + 0x1089eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1089eb40)));
  /* 1087804d push ecx */
  push32((uint32_t)(ECX));
  /* 1087804e call dword ptr [0x108a3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3334))), 0x10878054u);
  /* 10878054 pop ebp */
  EBP = (pop32());
  /* 10878055 ret  */
  ESPCHK(0x10878040u, _esp0);
  ESP += 4; return;
}

/* FUN_10008060 @ 0x10878060 (26 bytes, 10 insns) */
void f_10878060(void) {
  FTRACE(0x10878060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878060 push ebp */
  push32((uint32_t)(EBP));
  /* 10878061 mov ebp, esp */
  EBP = (ESP);
  /* 10878063 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878066 push eax */
  push32((uint32_t)(EAX));
  /* 10878067 push 0 */
  push32((uint32_t)(0x0u));
  /* 10878069 call dword ptr [0x108a333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a333c))), 0x1087806fu);
  /* 1087806f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10878074 call dword ptr [0x108a3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3390))), 0x1087807au);
  /* 1087807a pop ebp */
  EBP = (pop32());
  /* 1087807b ret  */
  ESPCHK(0x10878060u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10878080 (446 bytes, 130 insns) */
void f_10878080(void) {
  FTRACE(0x10878080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878080 push ebp */
  push32((uint32_t)(EBP));
  /* 10878081 mov ebp, esp */
  EBP = (ESP);
  /* 10878083 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878086 call 0x10873fe0 */
  push32(0x1087808bu); f_10873fe0();
  /* 1087808b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087808e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878091 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10878094 push ecx */
  push32((uint32_t)(ECX));
  /* 10878095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878098 push edx */
  push32((uint32_t)(EDX));
  /* 10878099 call 0x10878240 */
  push32(0x1087809eu); f_10878240();
  /* 1087809e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108780a1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108780a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108780a8 je 0x108780b3 */
  if (C.zf) goto L_108780b3;
  /* 108780aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108780ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108780b1 jne 0x108780c2 */
  if (!C.zf) goto L_108780c2;
L_108780b3:;
  /* 108780b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108780b6 push ecx */
  push32((uint32_t)(ECX));
  /* 108780b7 call dword ptr [0x108a332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a332c))), 0x108780bdu);
  /* 108780bd jmp 0x1087823a */
  goto L_1087823a;
L_108780c2:;
  /* 108780c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108780c5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108780c9 jne 0x108780df */
  if (!C.zf) goto L_108780df;
  /* 108780cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108780ce mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 108780d5 mov eax, 1 */
  EAX = (0x1u);
  /* 108780da jmp 0x1087823a */
  goto L_1087823a;
L_108780df:;
  /* 108780df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108780e2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108780e6 jne 0x108780f0 */
  if (!C.zf) goto L_108780f0;
  /* 108780e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108780eb jmp 0x1087823a */
  goto L_1087823a;
L_108780f0:;
  /* 108780f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108780f3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 108780f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108780f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108780fc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 108780ff mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10878102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878105 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878108 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1087810b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087810e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878112 jne 0x10878217 */
  if (!C.zf) goto L_10878217;
  /* 10878118 mov eax, dword ptr [0x1089ec78] */
  EAX = (r32((uint32_t)(0x1089ec78)));
  /* 1087811d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10878120 jmp 0x1087812b */
  goto L_1087812b;
L_10878122:;
  /* 10878122 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10878125 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878128 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1087812b:;
  /* 1087812b mov edx, dword ptr [0x1089ec78] */
  EDX = (r32((uint32_t)(0x1089ec78)));
  /* 10878131 add edx, dword ptr [0x1089ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1089ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878137 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087813a jge 0x10878152 */
  if ((C.sf==C.of)) goto L_10878152;
  /* 1087813c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087813f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10878142 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878145 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10878148 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10878150 jmp 0x10878122 */
  goto L_10878122;
L_10878152:;
  /* 10878152 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878155 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10878158 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1087815b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087815e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878164 jne 0x10878175 */
  if (!C.zf) goto L_10878175;
  /* 10878166 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878169 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10878170 jmp 0x108781fd */
  goto L_108781fd;
L_10878175:;
  /* 10878175 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10878178 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087817e jne 0x1087818c */
  if (!C.zf) goto L_1087818c;
  /* 10878180 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878183 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1087818a jmp 0x108781fd */
  goto L_108781fd;
L_1087818c:;
  /* 1087818c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087818f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878195 jne 0x108781a3 */
  if (!C.zf) goto L_108781a3;
  /* 10878197 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087819a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 108781a1 jmp 0x108781fd */
  goto L_108781fd;
L_108781a3:;
  /* 108781a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108781a6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108781ac jne 0x108781ba */
  if (!C.zf) goto L_108781ba;
  /* 108781ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108781b1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 108781b8 jmp 0x108781fd */
  goto L_108781fd;
L_108781ba:;
  /* 108781ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108781bd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108781c3 jne 0x108781d1 */
  if (!C.zf) goto L_108781d1;
  /* 108781c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108781c8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 108781cf jmp 0x108781fd */
  goto L_108781fd;
L_108781d1:;
  /* 108781d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108781d4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108781da jne 0x108781e8 */
  if (!C.zf) goto L_108781e8;
  /* 108781dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108781df mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 108781e6 jmp 0x108781fd */
  goto L_108781fd;
L_108781e8:;
  /* 108781e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108781eb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108781f1 jne 0x108781fd */
  if (!C.zf) goto L_108781fd;
  /* 108781f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108781f6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_108781fd:;
  /* 108781fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878200 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10878203 push edx */
  push32((uint32_t)(EDX));
  /* 10878204 push 8 */
  push32((uint32_t)(0x8u));
  /* 10878206 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10878209u);
  /* 10878209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087820c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1087820f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10878212 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10878215 jmp 0x1087822e */
  goto L_1087822e;
L_10878217:;
  /* 10878217 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1087821a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10878221 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10878224 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10878227 push ecx */
  push32((uint32_t)(ECX));
  /* 10878228 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1087822bu);
  /* 1087822b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1087822e:;
  /* 1087822e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878231 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10878234 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10878237 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1087823a:;
  /* 1087823a mov esp, ebp */
  ESP = (EBP);
  /* 1087823c pop ebp */
  EBP = (pop32());
  /* 1087823d ret  */
  ESPCHK(0x10878080u, _esp0);
  ESP += 4; return;
}

/* FUN_10008240 @ 0x10878240 (89 bytes, 35 insns) */
void f_10878240(void) {
  FTRACE(0x10878240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878240 push ebp */
  push32((uint32_t)(EBP));
  /* 10878241 mov ebp, esp */
  EBP = (ESP);
  /* 10878243 push ecx */
  push32((uint32_t)(ECX));
  /* 10878244 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878247 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1087824a:;
  /* 1087824a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087824d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1087824f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878252 je 0x10878272 */
  if (C.zf) goto L_10878272;
  /* 10878254 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878257 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087825a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1087825d mov ecx, dword ptr [0x1089ec84] */
  ECX = (r32((uint32_t)(0x1089ec84)));
  /* 10878263 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10878266 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878269 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087826b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087826e jae 0x10878272 */
  if (!C.cf) goto L_10878272;
  /* 10878270 jmp 0x1087824a */
  goto L_1087824a;
L_10878272:;
  /* 10878272 mov eax, dword ptr [0x1089ec84] */
  EAX = (r32((uint32_t)(0x1089ec84)));
  /* 10878277 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1087827a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087827d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1087827f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878282 jae 0x1087828e */
  if (!C.cf) goto L_1087828e;
  /* 10878284 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878287 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10878289 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087828c je 0x10878292 */
  if (C.zf) goto L_10878292;
L_1087828e:;
  /* 1087828e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10878290 jmp 0x10878295 */
  goto L_10878295;
L_10878292:;
  /* 10878292 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10878295:;
  /* 10878295 mov esp, ebp */
  ESP = (EBP);
  /* 10878297 pop ebp */
  EBP = (pop32());
  /* 10878298 ret  */
  ESPCHK(0x10878240u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x108782a0 (48 bytes, 17 insns) */
void f_108782a0(void) {
  FTRACE(0x108782a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108782a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108782a1 mov ebp, esp */
  EBP = (ESP);
  /* 108782a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108782a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 108782a6 call 0x10877fa0 */
  push32(0x108782abu); f_10877fa0();
  /* 108782ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108782ae mov eax, dword ptr [0x108a0824] */
  EAX = (r32((uint32_t)(0x108a0824)));
  /* 108782b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108782b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108782b9 mov dword ptr [0x108a0824], ecx */
  w32((uint32_t)(0x108a0824), (ECX));
  /* 108782bf push 9 */
  push32((uint32_t)(0x9u));
  /* 108782c1 call 0x10878040 */
  push32(0x108782c6u); f_10878040();
  /* 108782c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108782c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108782cc mov esp, ebp */
  ESP = (EBP);
  /* 108782ce pop ebp */
  EBP = (pop32());
  /* 108782cf ret  */
  ESPCHK(0x108782a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082d0 @ 0x108782d0 (10 bytes, 5 insns) */
void f_108782d0(void) {
  FTRACE(0x108782d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108782d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108782d1 mov ebp, esp */
  EBP = (ESP);
  /* 108782d3 mov eax, dword ptr [0x108a0824] */
  EAX = (r32((uint32_t)(0x108a0824)));
  /* 108782d8 pop ebp */
  EBP = (pop32());
  /* 108782d9 ret  */
  ESPCHK(0x108782d0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x108782e0 (45 bytes, 19 insns) */
void f_108782e0(void) {
  FTRACE(0x108782e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108782e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108782e1 mov ebp, esp */
  EBP = (ESP);
  /* 108782e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108782e4 mov eax, dword ptr [0x108a0824] */
  EAX = (r32((uint32_t)(0x108a0824)));
  /* 108782e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108782ec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108782f0 je 0x10878300 */
  if (C.zf) goto L_10878300;
  /* 108782f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108782f5 push ecx */
  push32((uint32_t)(ECX));
  /* 108782f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x108782f9u);
  /* 108782f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108782fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108782fe jne 0x10878304 */
  if (!C.zf) goto L_10878304;
L_10878300:;
  /* 10878300 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10878302 jmp 0x10878309 */
  goto L_10878309;
L_10878304:;
  /* 10878304 mov eax, 1 */
  EAX = (0x1u);
L_10878309:;
  /* 10878309 mov esp, ebp */
  ESP = (EBP);
  /* 1087830b pop ebp */
  EBP = (pop32());
  /* 1087830c ret  */
  ESPCHK(0x108782e0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10878310 (88 bytes, 40 insns) */
void f_10878310(void) {
  FTRACE(0x10878310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878310 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10878314 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10878318 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1087831a je 0x10878363 */
  if (C.zf) goto L_10878363;
  /* 1087831c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087831e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10878322 push edi */
  push32((uint32_t)(EDI));
  /* 10878323 mov edi, ecx */
  EDI = (ECX);
  /* 10878325 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878328 jb 0x10878357 */
  if (C.cf) goto L_10878357;
  /* 1087832a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1087832c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1087832f je 0x10878339 */
  if (C.zf) goto L_10878339;
  /* 10878331 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10878333:;
  /* 10878333 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10878335 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10878336 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10878337 jne 0x10878333 */
  if (!C.zf) goto L_10878333;
L_10878339:;
  /* 10878339 mov ecx, eax */
  ECX = (EAX);
  /* 1087833b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1087833e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878340 mov ecx, eax */
  ECX = (EAX);
  /* 10878342 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10878345 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878347 mov ecx, edx */
  ECX = (EDX);
  /* 10878349 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1087834c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1087834f je 0x10878357 */
  if (C.zf) goto L_10878357;
  /* 10878351 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10878353 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10878355 je 0x1087835d */
  if (C.zf) goto L_1087835d;
L_10878357:;
  /* 10878357 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10878359 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1087835a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1087835b jne 0x10878357 */
  if (!C.zf) goto L_10878357;
L_1087835d:;
  /* 1087835d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10878361 pop edi */
  EDI = (pop32());
  /* 10878362 ret  */
  ESPCHK(0x10878310u, _esp0);
  ESP += 4; return;
L_10878363:;
  /* 10878363 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10878367 ret  */
  ESPCHK(0x10878310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008370 @ 0x10878370 (23 bytes, 10 insns) */
void f_10878370(void) {
  FTRACE(0x10878370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878370 push ebp */
  push32((uint32_t)(EBP));
  /* 10878371 mov ebp, esp */
  EBP = (ESP);
  /* 10878373 mov eax, dword ptr [0x108a0820] */
  EAX = (r32((uint32_t)(0x108a0820)));
  /* 10878378 push eax */
  push32((uint32_t)(EAX));
  /* 10878379 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087837c push ecx */
  push32((uint32_t)(ECX));
  /* 1087837d call 0x10878390 */
  push32(0x10878382u); f_10878390();
  /* 10878382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878385 pop ebp */
  EBP = (pop32());
  /* 10878386 ret  */
  ESPCHK(0x10878370u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10878390 (87 bytes, 34 insns) */
void f_10878390(void) {
  FTRACE(0x10878390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878390 push ebp */
  push32((uint32_t)(EBP));
  /* 10878391 mov ebp, esp */
  EBP = (ESP);
  /* 10878393 push ecx */
  push32((uint32_t)(ECX));
  /* 10878394 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878398 jbe 0x1087839e */
  if ((C.cf||C.zf)) goto L_1087839e;
  /* 1087839a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087839c jmp 0x108783e3 */
  goto L_108783e3;
L_1087839e:;
  /* 1087839e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108783a2 ja 0x108783b5 */
  if ((!C.cf&&!C.zf)) goto L_108783b5;
  /* 108783a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108783a7 push eax */
  push32((uint32_t)(EAX));
  /* 108783a8 call 0x108783f0 */
  push32(0x108783adu); f_108783f0();
  /* 108783ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108783b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108783b3 jmp 0x108783bc */
  goto L_108783bc;
L_108783b5:;
  /* 108783b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108783bc:;
  /* 108783bc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108783c0 jne 0x108783c8 */
  if (!C.zf) goto L_108783c8;
  /* 108783c2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108783c6 jne 0x108783cd */
  if (!C.zf) goto L_108783cd;
L_108783c8:;
  /* 108783c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108783cb jmp 0x108783e3 */
  goto L_108783e3;
L_108783cd:;
  /* 108783cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108783d0 push ecx */
  push32((uint32_t)(ECX));
  /* 108783d1 call 0x108782e0 */
  push32(0x108783d6u); f_108782e0();
  /* 108783d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108783d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108783db jne 0x108783e1 */
  if (!C.zf) goto L_108783e1;
  /* 108783dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108783df jmp 0x108783e3 */
  goto L_108783e3;
L_108783e1:;
  /* 108783e1 jmp 0x1087839e */
  goto L_1087839e;
L_108783e3:;
  /* 108783e3 mov esp, ebp */
  ESP = (EBP);
  /* 108783e5 pop ebp */
  EBP = (pop32());
  /* 108783e6 ret  */
  ESPCHK(0x10878390u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x108783f0 (109 bytes, 37 insns) */
void f_108783f0(void) {
  FTRACE(0x108783f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108783f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108783f1 mov ebp, esp */
  EBP = (ESP);
  /* 108783f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108783f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108783f7 cmp eax, dword ptr [0x1089ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108783fd ja 0x1087842d */
  if ((!C.cf&&!C.zf)) goto L_1087842d;
  /* 108783ff push 9 */
  push32((uint32_t)(0x9u));
  /* 10878401 call 0x10877fa0 */
  push32(0x10878406u); f_10877fa0();
  /* 10878406 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878409 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087840c push ecx */
  push32((uint32_t)(ECX));
  /* 1087840d call 0x10878f30 */
  push32(0x10878412u); f_10878f30();
  /* 10878412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878415 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10878418 push 9 */
  push32((uint32_t)(0x9u));
  /* 1087841a call 0x10878040 */
  push32(0x1087841fu); f_10878040();
  /* 1087841f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878422 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878426 je 0x1087842d */
  if (C.zf) goto L_1087842d;
  /* 10878428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1087842b jmp 0x10878459 */
  goto L_10878459;
L_1087842d:;
  /* 1087842d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878431 jne 0x1087843a */
  if (!C.zf) goto L_1087843a;
  /* 10878433 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1087843a:;
  /* 1087843a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087843d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878440 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10878443 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10878446 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878449 push eax */
  push32((uint32_t)(EAX));
  /* 1087844a push 0 */
  push32((uint32_t)(0x0u));
  /* 1087844c mov ecx, dword ptr [0x108a1fec] */
  ECX = (r32((uint32_t)(0x108a1fec)));
  /* 10878452 push ecx */
  push32((uint32_t)(ECX));
  /* 10878453 call dword ptr [0x108a3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3328))), 0x10878459u);
L_10878459:;
  /* 10878459 mov esp, ebp */
  ESP = (EBP);
  /* 1087845b pop ebp */
  EBP = (pop32());
  /* 1087845c ret  */
  ESPCHK(0x108783f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008460 @ 0x10878460 (10 bytes, 5 insns) */
void f_10878460(void) {
  FTRACE(0x10878460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878460 push ebp */
  push32((uint32_t)(EBP));
  /* 10878461 mov ebp, esp */
  EBP = (ESP);
  /* 10878463 mov eax, 1 */
  EAX = (0x1u);
  /* 10878468 pop ebp */
  EBP = (pop32());
  /* 10878469 ret  */
  ESPCHK(0x10878460u, _esp0);
  ESP += 4; return;
}

/* FUN_10008470 @ 0x10878470 (173 bytes, 59 insns) */
void f_10878470(void) {
  FTRACE(0x10878470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878470 push ebp */
  push32((uint32_t)(EBP));
  /* 10878471 mov ebp, esp */
  EBP = (ESP);
  /* 10878473 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878476 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087847a jbe 0x10878483 */
  if ((C.cf||C.zf)) goto L_10878483;
  /* 1087847c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1087847e jmp 0x10878519 */
  goto L_10878519;
L_10878483:;
  /* 10878483 push 9 */
  push32((uint32_t)(0x9u));
  /* 10878485 call 0x10877fa0 */
  push32(0x1087848au); f_10877fa0();
  /* 1087848a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087848d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878490 push eax */
  push32((uint32_t)(EAX));
  /* 10878491 call 0x108788a0 */
  push32(0x10878496u); f_108788a0();
  /* 10878496 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878499 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1087849c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108784a0 je 0x108784e1 */
  if (C.zf) goto L_108784e1;
  /* 108784a2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108784a9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108784ac cmp ecx, dword ptr [0x1089ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1089ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108784b2 ja 0x108784d2 */
  if ((!C.cf&&!C.zf)) goto L_108784d2;
  /* 108784b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108784b7 push edx */
  push32((uint32_t)(EDX));
  /* 108784b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108784bb push eax */
  push32((uint32_t)(EAX));
  /* 108784bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108784bf push ecx */
  push32((uint32_t)(ECX));
  /* 108784c0 call 0x10879770 */
  push32(0x108784c5u); f_10879770();
  /* 108784c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108784c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108784ca je 0x108784d2 */
  if (C.zf) goto L_108784d2;
  /* 108784cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108784cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_108784d2:;
  /* 108784d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 108784d4 call 0x10878040 */
  push32(0x108784d9u); f_10878040();
  /* 108784d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108784dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108784df jmp 0x10878519 */
  goto L_10878519;
L_108784e1:;
  /* 108784e1 push 9 */
  push32((uint32_t)(0x9u));
  /* 108784e3 call 0x10878040 */
  push32(0x108784e8u); f_10878040();
  /* 108784e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108784eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108784ef jne 0x108784f8 */
  if (!C.zf) goto L_108784f8;
  /* 108784f1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_108784f8:;
  /* 108784f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108784fb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108784fe and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10878500 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10878503 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878506 push ecx */
  push32((uint32_t)(ECX));
  /* 10878507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087850a push edx */
  push32((uint32_t)(EDX));
  /* 1087850b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1087850d mov eax, dword ptr [0x108a1fec] */
  EAX = (r32((uint32_t)(0x108a1fec)));
  /* 10878512 push eax */
  push32((uint32_t)(EAX));
  /* 10878513 call dword ptr [0x108a3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3330))), 0x10878519u);
L_10878519:;
  /* 10878519 mov esp, ebp */
  ESP = (EBP);
  /* 1087851b pop ebp */
  EBP = (pop32());
  /* 1087851c ret  */
  ESPCHK(0x10878470u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x10878520 (490 bytes, 165 insns) */
void f_10878520(void) {
  FTRACE(0x10878520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878520 push ebp */
  push32((uint32_t)(EBP));
  /* 10878521 mov ebp, esp */
  EBP = (ESP);
  /* 10878523 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878526 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087852a jne 0x1087853d */
  if (!C.zf) goto L_1087853d;
  /* 1087852c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087852f push eax */
  push32((uint32_t)(EAX));
  /* 10878530 call 0x10878370 */
  push32(0x10878535u); f_10878370();
  /* 10878535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878538 jmp 0x10878706 */
  goto L_10878706;
L_1087853d:;
  /* 1087853d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878541 jne 0x10878556 */
  if (!C.zf) goto L_10878556;
  /* 10878543 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878546 push ecx */
  push32((uint32_t)(ECX));
  /* 10878547 call 0x10878710 */
  push32(0x1087854cu); f_10878710();
  /* 1087854c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087854f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10878551 jmp 0x10878706 */
  goto L_10878706;
L_10878556:;
  /* 10878556 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1087855d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878561 ja 0x108786d9 */
  if ((!C.cf&&!C.zf)) goto L_108786d9;
  /* 10878567 push 9 */
  push32((uint32_t)(0x9u));
  /* 10878569 call 0x10877fa0 */
  push32(0x1087856eu); f_10877fa0();
  /* 1087856e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878571 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878574 push edx */
  push32((uint32_t)(EDX));
  /* 10878575 call 0x108788a0 */
  push32(0x1087857au); f_108788a0();
  /* 1087857a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087857d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10878580 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878584 je 0x1087869c */
  if (C.zf) goto L_1087869c;
  /* 1087858a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1087858d cmp eax, dword ptr [0x1089ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1089ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878593 ja 0x10878610 */
  if ((!C.cf&&!C.zf)) goto L_10878610;
  /* 10878595 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878598 push ecx */
  push32((uint32_t)(ECX));
  /* 10878599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087859c push edx */
  push32((uint32_t)(EDX));
  /* 1087859d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108785a0 push eax */
  push32((uint32_t)(EAX));
  /* 108785a1 call 0x10879770 */
  push32(0x108785a6u); f_10879770();
  /* 108785a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108785a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108785ab je 0x108785b5 */
  if (C.zf) goto L_108785b5;
  /* 108785ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108785b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108785b3 jmp 0x10878610 */
  goto L_10878610;
L_108785b5:;
  /* 108785b5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108785b8 push edx */
  push32((uint32_t)(EDX));
  /* 108785b9 call 0x10878f30 */
  push32(0x108785beu); f_10878f30();
  /* 108785be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108785c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108785c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108785c8 je 0x10878610 */
  if (C.zf) goto L_10878610;
  /* 108785ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108785cd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 108785d0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108785d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108785d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108785d9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108785dc jae 0x108785e6 */
  if (!C.cf) goto L_108785e6;
  /* 108785de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108785e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108785e4 jmp 0x108785ec */
  goto L_108785ec;
L_108785e6:;
  /* 108785e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108785e9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108785ec:;
  /* 108785ec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108785ef push edx */
  push32((uint32_t)(EDX));
  /* 108785f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108785f3 push eax */
  push32((uint32_t)(EAX));
  /* 108785f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108785f7 push ecx */
  push32((uint32_t)(ECX));
  /* 108785f8 call 0x1087ae80 */
  push32(0x108785fdu); f_1087ae80();
  /* 108785fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878600 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878603 push edx */
  push32((uint32_t)(EDX));
  /* 10878604 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10878607 push eax */
  push32((uint32_t)(EAX));
  /* 10878608 call 0x10878960 */
  push32(0x1087860du); f_10878960();
  /* 1087860d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10878610:;
  /* 10878610 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878614 jne 0x10878690 */
  if (!C.zf) goto L_10878690;
  /* 10878616 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087861a jne 0x10878623 */
  if (!C.zf) goto L_10878623;
  /* 1087861c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10878623:;
  /* 10878623 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878626 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10878629 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1087862c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1087862f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878632 push edx */
  push32((uint32_t)(EDX));
  /* 10878633 push 0 */
  push32((uint32_t)(0x0u));
  /* 10878635 mov eax, dword ptr [0x108a1fec] */
  EAX = (r32((uint32_t)(0x108a1fec)));
  /* 1087863a push eax */
  push32((uint32_t)(EAX));
  /* 1087863b call dword ptr [0x108a3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3328))), 0x10878641u);
  /* 10878641 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10878644 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878648 je 0x10878690 */
  if (C.zf) goto L_10878690;
  /* 1087864a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087864d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10878650 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10878653 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10878656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878659 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1087865c jae 0x10878666 */
  if (!C.cf) goto L_10878666;
  /* 1087865e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878661 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10878664 jmp 0x1087866c */
  goto L_1087866c;
L_10878666:;
  /* 10878666 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10878669 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1087866c:;
  /* 1087866c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1087866f push eax */
  push32((uint32_t)(EAX));
  /* 10878670 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878673 push ecx */
  push32((uint32_t)(ECX));
  /* 10878674 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10878677 push edx */
  push32((uint32_t)(EDX));
  /* 10878678 call 0x1087ae80 */
  push32(0x1087867du); f_1087ae80();
  /* 1087867d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878680 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878683 push eax */
  push32((uint32_t)(EAX));
  /* 10878684 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10878687 push ecx */
  push32((uint32_t)(ECX));
  /* 10878688 call 0x10878960 */
  push32(0x1087868du); f_10878960();
  /* 1087868d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10878690:;
  /* 10878690 push 9 */
  push32((uint32_t)(0x9u));
  /* 10878692 call 0x10878040 */
  push32(0x10878697u); f_10878040();
  /* 10878697 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087869a jmp 0x108786d9 */
  goto L_108786d9;
L_1087869c:;
  /* 1087869c push 9 */
  push32((uint32_t)(0x9u));
  /* 1087869e call 0x10878040 */
  push32(0x108786a3u); f_10878040();
  /* 108786a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108786a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108786aa jne 0x108786b3 */
  if (!C.zf) goto L_108786b3;
  /* 108786ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_108786b3:;
  /* 108786b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108786b6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108786b9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 108786bc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 108786bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108786c2 push eax */
  push32((uint32_t)(EAX));
  /* 108786c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108786c6 push ecx */
  push32((uint32_t)(ECX));
  /* 108786c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108786c9 mov edx, dword ptr [0x108a1fec] */
  EDX = (r32((uint32_t)(0x108a1fec)));
  /* 108786cf push edx */
  push32((uint32_t)(EDX));
  /* 108786d0 call dword ptr [0x108a3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3330))), 0x108786d6u);
  /* 108786d6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_108786d9:;
  /* 108786d9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108786dd jne 0x108786e8 */
  if (!C.zf) goto L_108786e8;
  /* 108786df cmp dword ptr [0x108a0820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108a0820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108786e6 jne 0x108786ed */
  if (!C.zf) goto L_108786ed;
L_108786e8:;
  /* 108786e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108786eb jmp 0x10878706 */
  goto L_10878706;
L_108786ed:;
  /* 108786ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108786f0 push eax */
  push32((uint32_t)(EAX));
  /* 108786f1 call 0x108782e0 */
  push32(0x108786f6u); f_108782e0();
  /* 108786f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108786f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108786fb jne 0x10878701 */
  if (!C.zf) goto L_10878701;
  /* 108786fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108786ff jmp 0x10878706 */
  goto L_10878706;
L_10878701:;
  /* 10878701 jmp 0x10878556 */
  goto L_10878556;
L_10878706:;
  /* 10878706 mov esp, ebp */
  ESP = (EBP);
  /* 10878708 pop ebp */
  EBP = (pop32());
  /* 10878709 ret  */
  ESPCHK(0x10878520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x10878710 (104 bytes, 38 insns) */
void f_10878710(void) {
  FTRACE(0x10878710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10878710 push ebp */
  push32((uint32_t)(EBP));
  /* 10878711 mov ebp, esp */
  EBP = (ESP);
  /* 10878713 push ecx */
  push32((uint32_t)(ECX));
  /* 10878714 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878718 jne 0x1087871c */
  if (!C.zf) goto L_1087871c;
  /* 1087871a jmp 0x10878774 */
  goto L_10878774;
L_1087871c:;
  /* 1087871c push 9 */
  push32((uint32_t)(0x9u));
  /* 1087871e call 0x10877fa0 */
  push32(0x10878723u); f_10877fa0();
  /* 10878723 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878726 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878729 push eax */
  push32((uint32_t)(EAX));
  /* 1087872a call 0x108788a0 */
  push32(0x1087872fu); f_108788a0();
  /* 1087872f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878732 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10878735 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10878739 je 0x10878757 */
  if (C.zf) goto L_10878757;
  /* 1087873b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1087873e push ecx */
  push32((uint32_t)(ECX));
  /* 1087873f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10878742 push edx */
  push32((uint32_t)(EDX));
  /* 10878743 call 0x10878960 */
  push32(0x10878748u); f_10878960();
  /* 10878748 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1087874b push 9 */
  push32((uint32_t)(0x9u));
  /* 1087874d call 0x10878040 */
  push32(0x10878752u); f_10878040();
  /* 10878752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878755 jmp 0x10878774 */
  goto L_10878774;
L_10878757:;
  /* 10878757 push 9 */
  push32((uint32_t)(0x9u));
  /* 10878759 call 0x10878040 */
  push32(0x1087875eu); f_10878040();
  /* 1087875e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10878761 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10878764 push eax */
  push32((uint32_t)(EAX));
  /* 10878765 push 0 */
  push32((uint32_t)(0x0u));
  /* 10878767 mov ecx, dword ptr [0x108a1fec] */
  ECX = (r32((uint32_t)(0x108a1fec)));
  /* 1087876d push ecx */
  push32((uint32_t)(ECX));
  /* 1087876e call dword ptr [0x108a3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x108a3354))), 0x10878774u);
L_10878774:;
  /* 10878774 mov esp, ebp */
  ESP = (EBP);
  /* 10878776 pop ebp */
  EBP = (pop32());
  /* 10878777 ret  */
  ESPCHK(0x10878710u, _esp0);
  ESP += 4; return;
}

