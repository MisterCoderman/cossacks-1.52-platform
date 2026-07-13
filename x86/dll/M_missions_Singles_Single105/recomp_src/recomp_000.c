#include "recomp.h"

/* OnInit @ 0x11011005 (5 bytes, 1 insns) */
void f_11011005(void) {
  FTRACE(0x11011005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11011005 jmp 0x11011090 */
  f_11011090(); return;
}

/* thunk_FUN_10001030 @ 0x1101100a (5 bytes, 1 insns) */
void f_1101100a(void) {
  FTRACE(0x1101100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101100a jmp 0x11011030 */
  f_11011030(); return;
}

/* ProcessScenary @ 0x1101100f (5 bytes, 1 insns) */
void f_1101100f(void) {
  FTRACE(0x1101100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1101100f jmp 0x11011b30 */
  f_11011b30(); return;
}

/* FUN_10001030 @ 0x11011030 (67 bytes, 26 insns) */
void f_11011030(void) {
  FTRACE(0x11011030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11011030 push ebp */
  push32((uint32_t)(EBP));
  /* 11011031 mov ebp, esp */
  EBP = (ESP);
  /* 11011033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011036 push ebx */
  push32((uint32_t)(EBX));
  /* 11011037 push esi */
  push32((uint32_t)(ESI));
  /* 11011038 push edi */
  push32((uint32_t)(EDI));
  /* 11011039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1101103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11011041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11011046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11011048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011052 je 0x11011056 */
  if (C.zf) goto L_11011056;
  /* 11011054 jmp 0x1101105b */
  goto L_1101105b;
L_11011056:;
  /* 11011056 call 0x11011005 */
  push32(0x1101105bu); f_11011005();
L_1101105b:;
  /* 1101105b mov eax, 1 */
  EAX = (0x1u);
  /* 11011060 pop edi */
  EDI = (pop32());
  /* 11011061 pop esi */
  ESI = (pop32());
  /* 11011062 pop ebx */
  EBX = (pop32());
  /* 11011063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011068 call 0x11013e20 */
  push32(0x1101106du); f_11013e20();
  /* 1101106d mov esp, ebp */
  ESP = (EBP);
  /* 1101106f pop ebp */
  EBP = (pop32());
  /* 11011070 ret 0xc */
  ESPCHK(0x11011030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x11011090 (2167 bytes, 588 insns) */
void f_11011090(void) {
  FTRACE(0x11011090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11011090 push ebp */
  push32((uint32_t)(EBP));
  /* 11011091 mov ebp, esp */
  EBP = (ESP);
  /* 11011093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011096 push ebx */
  push32((uint32_t)(EBX));
  /* 11011097 push esi */
  push32((uint32_t)(ESI));
  /* 11011098 push edi */
  push32((uint32_t)(EDI));
  /* 11011099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1101109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 110110a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 110110a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 110110a8 mov esi, esp */
  ESI = (ESP);
  /* 110110aa push 0x1103b234 */
  push32((uint32_t)(0x1103b234u));
  /* 110110af push 0x110404c8 */
  push32((uint32_t)(0x110404c8u));
  /* 110110b4 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x110110bau);
  /* 110110ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110110bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110110bf call 0x11013e20 */
  push32(0x110110c4u); f_11013e20();
  /* 110110c4 mov esi, esp */
  ESI = (ESP);
  /* 110110c6 push 0x1103b230 */
  push32((uint32_t)(0x1103b230u));
  /* 110110cb push 0x110404d0 */
  push32((uint32_t)(0x110404d0u));
  /* 110110d0 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x110110d6u);
  /* 110110d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110110d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110110db call 0x11013e20 */
  push32(0x110110e0u); f_11013e20();
  /* 110110e0 mov esi, esp */
  ESI = (ESP);
  /* 110110e2 push 0x1103b22c */
  push32((uint32_t)(0x1103b22cu));
  /* 110110e7 push 0x110404d8 */
  push32((uint32_t)(0x110404d8u));
  /* 110110ec call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x110110f2u);
  /* 110110f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110110f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110110f7 call 0x11013e20 */
  push32(0x110110fcu); f_11013e20();
  /* 110110fc mov esi, esp */
  ESI = (ESP);
  /* 110110fe push 0x1103b228 */
  push32((uint32_t)(0x1103b228u));
  /* 11011103 push 0x110404e0 */
  push32((uint32_t)(0x110404e0u));
  /* 11011108 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x1101110eu);
  /* 1101110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011113 call 0x11013e20 */
  push32(0x11011118u); f_11013e20();
  /* 11011118 mov esi, esp */
  ESI = (ESP);
  /* 1101111a push 0x1103b224 */
  push32((uint32_t)(0x1103b224u));
  /* 1101111f push 0x110404f0 */
  push32((uint32_t)(0x110404f0u));
  /* 11011124 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x1101112au);
  /* 1101112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101112f call 0x11013e20 */
  push32(0x11011134u); f_11013e20();
  /* 11011134 mov esi, esp */
  ESI = (ESP);
  /* 11011136 push 0x1103b220 */
  push32((uint32_t)(0x1103b220u));
  /* 1101113b push 0x110404f8 */
  push32((uint32_t)(0x110404f8u));
  /* 11011140 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x11011146u);
  /* 11011146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101114b call 0x11013e20 */
  push32(0x11011150u); f_11013e20();
  /* 11011150 mov esi, esp */
  ESI = (ESP);
  /* 11011152 push 0x1103b21c */
  push32((uint32_t)(0x1103b21cu));
  /* 11011157 push 0x11040508 */
  push32((uint32_t)(0x11040508u));
  /* 1101115c call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x11011162u);
  /* 11011162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011167 call 0x11013e20 */
  push32(0x1101116cu); f_11013e20();
  /* 1101116c mov esi, esp */
  ESI = (ESP);
  /* 1101116e push 0x1103b218 */
  push32((uint32_t)(0x1103b218u));
  /* 11011173 push 0x11040510 */
  push32((uint32_t)(0x11040510u));
  /* 11011178 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x1101117eu);
  /* 1101117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011183 call 0x11013e20 */
  push32(0x11011188u); f_11013e20();
  /* 11011188 mov esi, esp */
  ESI = (ESP);
  /* 1101118a push 0x1103b214 */
  push32((uint32_t)(0x1103b214u));
  /* 1101118f push 0x11040518 */
  push32((uint32_t)(0x11040518u));
  /* 11011194 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x1101119au);
  /* 1101119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101119f call 0x11013e20 */
  push32(0x110111a4u); f_11013e20();
  /* 110111a4 mov esi, esp */
  ESI = (ESP);
  /* 110111a6 push 0x1103b210 */
  push32((uint32_t)(0x1103b210u));
  /* 110111ab push 0x11040540 */
  push32((uint32_t)(0x11040540u));
  /* 110111b0 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x110111b6u);
  /* 110111b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110111b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110111bb call 0x11013e20 */
  push32(0x110111c0u); f_11013e20();
  /* 110111c0 mov esi, esp */
  ESI = (ESP);
  /* 110111c2 push 0x1103b20c */
  push32((uint32_t)(0x1103b20cu));
  /* 110111c7 push 0x11040548 */
  push32((uint32_t)(0x11040548u));
  /* 110111cc call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x110111d2u);
  /* 110111d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110111d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110111d7 call 0x11013e20 */
  push32(0x110111dcu); f_11013e20();
  /* 110111dc mov esi, esp */
  ESI = (ESP);
  /* 110111de push 0x1103b208 */
  push32((uint32_t)(0x1103b208u));
  /* 110111e3 push 0x11040550 */
  push32((uint32_t)(0x11040550u));
  /* 110111e8 call dword ptr [0x110434b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b8))), 0x110111eeu);
  /* 110111ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110111f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110111f3 call 0x11013e20 */
  push32(0x110111f8u); f_11013e20();
  /* 110111f8 mov esi, esp */
  ESI = (ESP);
  /* 110111fa push 8 */
  push32((uint32_t)(0x8u));
  /* 110111fc push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 11011201 call dword ptr [0x110434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c8))), 0x11011207u);
  /* 11011207 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101120a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101120c call 0x11013e20 */
  push32(0x11011211u); f_11013e20();
  /* 11011211 mov esi, esp */
  ESI = (ESP);
  /* 11011213 push 8 */
  push32((uint32_t)(0x8u));
  /* 11011215 push 0x11040468 */
  push32((uint32_t)(0x11040468u));
  /* 1101121a call dword ptr [0x110434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c8))), 0x11011220u);
  /* 11011220 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011223 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011225 call 0x11013e20 */
  push32(0x1101122au); f_11013e20();
  /* 1101122a mov esi, esp */
  ESI = (ESP);
  /* 1101122c push 8 */
  push32((uint32_t)(0x8u));
  /* 1101122e push 0x11040470 */
  push32((uint32_t)(0x11040470u));
  /* 11011233 call dword ptr [0x110434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c8))), 0x11011239u);
  /* 11011239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101123c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101123e call 0x11013e20 */
  push32(0x11011243u); f_11013e20();
  /* 11011243 mov esi, esp */
  ESI = (ESP);
  /* 11011245 push 8 */
  push32((uint32_t)(0x8u));
  /* 11011247 push 0x11040478 */
  push32((uint32_t)(0x11040478u));
  /* 1101124c call dword ptr [0x110434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c8))), 0x11011252u);
  /* 11011252 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011255 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011257 call 0x11013e20 */
  push32(0x1101125cu); f_11013e20();
  /* 1101125c mov esi, esp */
  ESI = (ESP);
  /* 1101125e push 8 */
  push32((uint32_t)(0x8u));
  /* 11011260 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11011265 call dword ptr [0x110434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c8))), 0x1101126bu);
  /* 1101126b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101126e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011270 call 0x11013e20 */
  push32(0x11011275u); f_11013e20();
  /* 11011275 mov esi, esp */
  ESI = (ESP);
  /* 11011277 push 8 */
  push32((uint32_t)(0x8u));
  /* 11011279 push 0x11040488 */
  push32((uint32_t)(0x11040488u));
  /* 1101127e call dword ptr [0x110434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c8))), 0x11011284u);
  /* 11011284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011287 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011289 call 0x11013e20 */
  push32(0x1101128eu); f_11013e20();
  /* 1101128e mov esi, esp */
  ESI = (ESP);
  /* 11011290 push 8 */
  push32((uint32_t)(0x8u));
  /* 11011292 push 0x11040490 */
  push32((uint32_t)(0x11040490u));
  /* 11011297 call dword ptr [0x110434c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c8))), 0x1101129du);
  /* 1101129d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110112a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110112a2 call 0x11013e20 */
  push32(0x110112a7u); f_11013e20();
  /* 110112a7 mov esi, esp */
  ESI = (ESP);
  /* 110112a9 push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 110112ae call dword ptr [0x110434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434cc))), 0x110112b4u);
  /* 110112b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110112b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110112b9 call 0x11013e20 */
  push32(0x110112beu); f_11013e20();
  /* 110112be mov esi, esp */
  ESI = (ESP);
  /* 110112c0 push 0x11040468 */
  push32((uint32_t)(0x11040468u));
  /* 110112c5 call dword ptr [0x110434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434cc))), 0x110112cbu);
  /* 110112cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110112ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110112d0 call 0x11013e20 */
  push32(0x110112d5u); f_11013e20();
  /* 110112d5 mov esi, esp */
  ESI = (ESP);
  /* 110112d7 push 0x11040470 */
  push32((uint32_t)(0x11040470u));
  /* 110112dc call dword ptr [0x110434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434cc))), 0x110112e2u);
  /* 110112e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110112e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110112e7 call 0x11013e20 */
  push32(0x110112ecu); f_11013e20();
  /* 110112ec mov esi, esp */
  ESI = (ESP);
  /* 110112ee push 0x11040478 */
  push32((uint32_t)(0x11040478u));
  /* 110112f3 call dword ptr [0x110434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434cc))), 0x110112f9u);
  /* 110112f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110112fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110112fe call 0x11013e20 */
  push32(0x11011303u); f_11013e20();
  /* 11011303 mov esi, esp */
  ESI = (ESP);
  /* 11011305 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 1101130a call dword ptr [0x110434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434cc))), 0x11011310u);
  /* 11011310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011313 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011315 call 0x11013e20 */
  push32(0x1101131au); f_11013e20();
  /* 1101131a mov esi, esp */
  ESI = (ESP);
  /* 1101131c push 0x11040488 */
  push32((uint32_t)(0x11040488u));
  /* 11011321 call dword ptr [0x110434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434cc))), 0x11011327u);
  /* 11011327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101132a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101132c call 0x11013e20 */
  push32(0x11011331u); f_11013e20();
  /* 11011331 mov esi, esp */
  ESI = (ESP);
  /* 11011333 push 0x11040490 */
  push32((uint32_t)(0x11040490u));
  /* 11011338 call dword ptr [0x110434cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434cc))), 0x1101133eu);
  /* 1101133e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011343 call 0x11013e20 */
  push32(0x11011348u); f_11013e20();
  /* 11011348 mov esi, esp */
  ESI = (ESP);
  /* 1101134a push 0x1103b204 */
  push32((uint32_t)(0x1103b204u));
  /* 1101134f push 0x11040498 */
  push32((uint32_t)(0x11040498u));
  /* 11011354 call dword ptr [0x110434c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c4))), 0x1101135au);
  /* 1101135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101135f call 0x11013e20 */
  push32(0x11011364u); f_11013e20();
  /* 11011364 mov esi, esp */
  ESI = (ESP);
  /* 11011366 push 0x1103b200 */
  push32((uint32_t)(0x1103b200u));
  /* 1101136b push 0x110404a0 */
  push32((uint32_t)(0x110404a0u));
  /* 11011370 call dword ptr [0x110434c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c4))), 0x11011376u);
  /* 11011376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101137b call 0x11013e20 */
  push32(0x11011380u); f_11013e20();
  /* 11011380 mov esi, esp */
  ESI = (ESP);
  /* 11011382 push 0x1103b1fc */
  push32((uint32_t)(0x1103b1fcu));
  /* 11011387 push 0x110404a8 */
  push32((uint32_t)(0x110404a8u));
  /* 1101138c call dword ptr [0x110434c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c4))), 0x11011392u);
  /* 11011392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011397 call 0x11013e20 */
  push32(0x1101139cu); f_11013e20();
  /* 1101139c mov esi, esp */
  ESI = (ESP);
  /* 1101139e push 0x1103b1f4 */
  push32((uint32_t)(0x1103b1f4u));
  /* 110113a3 push 0x110404b8 */
  push32((uint32_t)(0x110404b8u));
  /* 110113a8 call dword ptr [0x110434d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d4))), 0x110113aeu);
  /* 110113ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110113b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110113b3 call 0x11013e20 */
  push32(0x110113b8u); f_11013e20();
  /* 110113b8 mov esi, esp */
  ESI = (ESP);
  /* 110113ba push 0x1103b1e8 */
  push32((uint32_t)(0x1103b1e8u));
  /* 110113bf push 0x110404c0 */
  push32((uint32_t)(0x110404c0u));
  /* 110113c4 call dword ptr [0x110434d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d4))), 0x110113cau);
  /* 110113ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110113cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110113cf call 0x11013e20 */
  push32(0x110113d4u); f_11013e20();
  /* 110113d4 mov esi, esp */
  ESI = (ESP);
  /* 110113d6 push 0x1103b1d4 */
  push32((uint32_t)(0x1103b1d4u));
  /* 110113db push 0x11040418 */
  push32((uint32_t)(0x11040418u));
  /* 110113e0 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110113e6u);
  /* 110113e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110113e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110113eb call 0x11013e20 */
  push32(0x110113f0u); f_11013e20();
  /* 110113f0 mov esi, esp */
  ESI = (ESP);
  /* 110113f2 push 0x1103b1c4 */
  push32((uint32_t)(0x1103b1c4u));
  /* 110113f7 push 0x11040420 */
  push32((uint32_t)(0x11040420u));
  /* 110113fc call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x11011402u);
  /* 11011402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011407 call 0x11013e20 */
  push32(0x1101140cu); f_11013e20();
  /* 1101140c mov esi, esp */
  ESI = (ESP);
  /* 1101140e push 0x1103b1b0 */
  push32((uint32_t)(0x1103b1b0u));
  /* 11011413 push 0x11040428 */
  push32((uint32_t)(0x11040428u));
  /* 11011418 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x1101141eu);
  /* 1101141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011423 call 0x11013e20 */
  push32(0x11011428u); f_11013e20();
  /* 11011428 mov esi, esp */
  ESI = (ESP);
  /* 1101142a push 0x1103b19c */
  push32((uint32_t)(0x1103b19cu));
  /* 1101142f push 0x11040430 */
  push32((uint32_t)(0x11040430u));
  /* 11011434 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x1101143au);
  /* 1101143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101143f call 0x11013e20 */
  push32(0x11011444u); f_11013e20();
  /* 11011444 mov esi, esp */
  ESI = (ESP);
  /* 11011446 push 0x1103b188 */
  push32((uint32_t)(0x1103b188u));
  /* 1101144b push 0x11040438 */
  push32((uint32_t)(0x11040438u));
  /* 11011450 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x11011456u);
  /* 11011456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101145b call 0x11013e20 */
  push32(0x11011460u); f_11013e20();
  /* 11011460 mov esi, esp */
  ESI = (ESP);
  /* 11011462 push 0x1103b178 */
  push32((uint32_t)(0x1103b178u));
  /* 11011467 push 0x11040440 */
  push32((uint32_t)(0x11040440u));
  /* 1101146c call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x11011472u);
  /* 11011472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011477 call 0x11013e20 */
  push32(0x1101147cu); f_11013e20();
  /* 1101147c mov esi, esp */
  ESI = (ESP);
  /* 1101147e push 0x1103b15c */
  push32((uint32_t)(0x1103b15cu));
  /* 11011483 push 0x11040448 */
  push32((uint32_t)(0x11040448u));
  /* 11011488 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x1101148eu);
  /* 1101148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011493 call 0x11013e20 */
  push32(0x11011498u); f_11013e20();
  /* 11011498 mov esi, esp */
  ESI = (ESP);
  /* 1101149a push 0x1103b148 */
  push32((uint32_t)(0x1103b148u));
  /* 1101149f push 0x11040450 */
  push32((uint32_t)(0x11040450u));
  /* 110114a4 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110114aau);
  /* 110114aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110114ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110114af call 0x11013e20 */
  push32(0x110114b4u); f_11013e20();
  /* 110114b4 mov esi, esp */
  ESI = (ESP);
  /* 110114b6 push 0x1103b130 */
  push32((uint32_t)(0x1103b130u));
  /* 110114bb push 0x11040460 */
  push32((uint32_t)(0x11040460u));
  /* 110114c0 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110114c6u);
  /* 110114c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110114c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110114cb call 0x11013e20 */
  push32(0x110114d0u); f_11013e20();
  /* 110114d0 mov esi, esp */
  ESI = (ESP);
  /* 110114d2 push 0x1103b118 */
  push32((uint32_t)(0x1103b118u));
  /* 110114d7 push 0x110403e0 */
  push32((uint32_t)(0x110403e0u));
  /* 110114dc call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110114e2u);
  /* 110114e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110114e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110114e7 call 0x11013e20 */
  push32(0x110114ecu); f_11013e20();
  /* 110114ec mov esi, esp */
  ESI = (ESP);
  /* 110114ee push 0x1103b104 */
  push32((uint32_t)(0x1103b104u));
  /* 110114f3 push 0x110403e8 */
  push32((uint32_t)(0x110403e8u));
  /* 110114f8 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110114feu);
  /* 110114fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011503 call 0x11013e20 */
  push32(0x11011508u); f_11013e20();
  /* 11011508 mov esi, esp */
  ESI = (ESP);
  /* 1101150a push 0x1103b0f4 */
  push32((uint32_t)(0x1103b0f4u));
  /* 1101150f push 0x110403f0 */
  push32((uint32_t)(0x110403f0u));
  /* 11011514 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x1101151au);
  /* 1101151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101151f call 0x11013e20 */
  push32(0x11011524u); f_11013e20();
  /* 11011524 mov esi, esp */
  ESI = (ESP);
  /* 11011526 push 0x1103b0e8 */
  push32((uint32_t)(0x1103b0e8u));
  /* 1101152b push 0x110403f8 */
  push32((uint32_t)(0x110403f8u));
  /* 11011530 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x11011536u);
  /* 11011536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101153b call 0x11013e20 */
  push32(0x11011540u); f_11013e20();
  /* 11011540 mov esi, esp */
  ESI = (ESP);
  /* 11011542 push 0x1103b0dc */
  push32((uint32_t)(0x1103b0dcu));
  /* 11011547 push 0x11040400 */
  push32((uint32_t)(0x11040400u));
  /* 1101154c call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x11011552u);
  /* 11011552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011557 call 0x11013e20 */
  push32(0x1101155cu); f_11013e20();
  /* 1101155c mov esi, esp */
  ESI = (ESP);
  /* 1101155e push 0x1103b0c0 */
  push32((uint32_t)(0x1103b0c0u));
  /* 11011563 push 0x11040408 */
  push32((uint32_t)(0x11040408u));
  /* 11011568 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x1101156eu);
  /* 1101156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011573 call 0x11013e20 */
  push32(0x11011578u); f_11013e20();
  /* 11011578 mov esi, esp */
  ESI = (ESP);
  /* 1101157a push 0x1103b0b0 */
  push32((uint32_t)(0x1103b0b0u));
  /* 1101157f push 0x11040410 */
  push32((uint32_t)(0x11040410u));
  /* 11011584 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x1101158au);
  /* 1101158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101158f call 0x11013e20 */
  push32(0x11011594u); f_11013e20();
  /* 11011594 mov esi, esp */
  ESI = (ESP);
  /* 11011596 push 0x1103b098 */
  push32((uint32_t)(0x1103b098u));
  /* 1101159b push 0x11040528 */
  push32((uint32_t)(0x11040528u));
  /* 110115a0 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110115a6u);
  /* 110115a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110115a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110115ab call 0x11013e20 */
  push32(0x110115b0u); f_11013e20();
  /* 110115b0 mov esi, esp */
  ESI = (ESP);
  /* 110115b2 push 0x1103b084 */
  push32((uint32_t)(0x1103b084u));
  /* 110115b7 push 0x11040530 */
  push32((uint32_t)(0x11040530u));
  /* 110115bc call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110115c2u);
  /* 110115c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110115c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110115c7 call 0x11013e20 */
  push32(0x110115ccu); f_11013e20();
  /* 110115cc mov esi, esp */
  ESI = (ESP);
  /* 110115ce push 0x1103b074 */
  push32((uint32_t)(0x1103b074u));
  /* 110115d3 push 0x11040538 */
  push32((uint32_t)(0x11040538u));
  /* 110115d8 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110115deu);
  /* 110115de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110115e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110115e3 call 0x11013e20 */
  push32(0x110115e8u); f_11013e20();
  /* 110115e8 mov esi, esp */
  ESI = (ESP);
  /* 110115ea push 0x1103b064 */
  push32((uint32_t)(0x1103b064u));
  /* 110115ef push 0x110404b0 */
  push32((uint32_t)(0x110404b0u));
  /* 110115f4 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x110115fau);
  /* 110115fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110115fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110115ff call 0x11013e20 */
  push32(0x11011604u); f_11013e20();
  /* 11011604 mov esi, esp */
  ESI = (ESP);
  /* 11011606 push 0x1103b054 */
  push32((uint32_t)(0x1103b054u));
  /* 1101160b push 0x11040558 */
  push32((uint32_t)(0x11040558u));
  /* 11011610 call dword ptr [0x110434d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d8))), 0x11011616u);
  /* 11011616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101161b call 0x11013e20 */
  push32(0x11011620u); f_11013e20();
  /* 11011620 mov esi, esp */
  ESI = (ESP);
  /* 11011622 push 0x1103b04c */
  push32((uint32_t)(0x1103b04cu));
  /* 11011627 push 0x11040500 */
  push32((uint32_t)(0x11040500u));
  /* 1101162c call dword ptr [0x110434d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d0))), 0x11011632u);
  /* 11011632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011637 call 0x11013e20 */
  push32(0x1101163cu); f_11013e20();
  /* 1101163c mov esi, esp */
  ESI = (ESP);
  /* 1101163e push 0x1103b044 */
  push32((uint32_t)(0x1103b044u));
  /* 11011643 push 0x110404e8 */
  push32((uint32_t)(0x110404e8u));
  /* 11011648 call dword ptr [0x110434d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d0))), 0x1101164eu);
  /* 1101164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011653 call 0x11013e20 */
  push32(0x11011658u); f_11013e20();
  /* 11011658 mov esi, esp */
  ESI = (ESP);
  /* 1101165a push 0x1103b038 */
  push32((uint32_t)(0x1103b038u));
  /* 1101165f push 0x11040520 */
  push32((uint32_t)(0x11040520u));
  /* 11011664 call dword ptr [0x110434d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434d0))), 0x1101166au);
  /* 1101166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101166f call 0x11013e20 */
  push32(0x11011674u); f_11013e20();
  /* 11011674 mov esi, esp */
  ESI = (ESP);
  /* 11011676 push 0x1103b030 */
  push32((uint32_t)(0x1103b030u));
  /* 1101167b push 1 */
  push32((uint32_t)(0x1u));
  /* 1101167d call dword ptr [0x110434e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e0))), 0x11011683u);
  /* 11011683 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011688 call 0x11013e20 */
  push32(0x1101168du); f_11013e20();
  /* 1101168d mov esi, esp */
  ESI = (ESP);
  /* 1101168f push 0x1103b030 */
  push32((uint32_t)(0x1103b030u));
  /* 11011694 push 2 */
  push32((uint32_t)(0x2u));
  /* 11011696 call dword ptr [0x110434e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e0))), 0x1101169cu);
  /* 1101169c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101169f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110116a1 call 0x11013e20 */
  push32(0x110116a6u); f_11013e20();
  /* 110116a6 mov esi, esp */
  ESI = (ESP);
  /* 110116a8 push 0x1103b028 */
  push32((uint32_t)(0x1103b028u));
  /* 110116ad push 3 */
  push32((uint32_t)(0x3u));
  /* 110116af call dword ptr [0x110434e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e0))), 0x110116b5u);
  /* 110116b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110116b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110116ba call 0x11013e20 */
  push32(0x110116bfu); f_11013e20();
  /* 110116bf mov esi, esp */
  ESI = (ESP);
  /* 110116c1 push 0x1103b01c */
  push32((uint32_t)(0x1103b01cu));
  /* 110116c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 110116c8 call dword ptr [0x110434e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e0))), 0x110116ceu);
  /* 110116ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110116d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110116d3 call 0x11013e20 */
  push32(0x110116d8u); f_11013e20();
  /* 110116d8 mov esi, esp */
  ESI = (ESP);
  /* 110116da push 0 */
  push32((uint32_t)(0x0u));
  /* 110116dc push 0x11040418 */
  push32((uint32_t)(0x11040418u));
  /* 110116e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110116e3 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x110116e9u);
  /* 110116e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110116ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110116ee call 0x11013e20 */
  push32(0x110116f3u); f_11013e20();
  /* 110116f3 mov esi, esp */
  ESI = (ESP);
  /* 110116f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110116f7 push 0x11040420 */
  push32((uint32_t)(0x11040420u));
  /* 110116fc push 0 */
  push32((uint32_t)(0x0u));
  /* 110116fe call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x11011704u);
  /* 11011704 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011709 call 0x11013e20 */
  push32(0x1101170eu); f_11013e20();
  /* 1101170e mov esi, esp */
  ESI = (ESP);
  /* 11011710 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011712 push 0x11040428 */
  push32((uint32_t)(0x11040428u));
  /* 11011717 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011719 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x1101171fu);
  /* 1101171f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011724 call 0x11013e20 */
  push32(0x11011729u); f_11013e20();
  /* 11011729 mov esi, esp */
  ESI = (ESP);
  /* 1101172b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101172d push 0x11040430 */
  push32((uint32_t)(0x11040430u));
  /* 11011732 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011734 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x1101173au);
  /* 1101173a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101173d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101173f call 0x11013e20 */
  push32(0x11011744u); f_11013e20();
  /* 11011744 mov esi, esp */
  ESI = (ESP);
  /* 11011746 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011748 push 0x11040438 */
  push32((uint32_t)(0x11040438u));
  /* 1101174d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101174f call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x11011755u);
  /* 11011755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101175a call 0x11013e20 */
  push32(0x1101175fu); f_11013e20();
  /* 1101175f mov esi, esp */
  ESI = (ESP);
  /* 11011761 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011763 push 0x11040440 */
  push32((uint32_t)(0x11040440u));
  /* 11011768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101176a call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x11011770u);
  /* 11011770 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011775 call 0x11013e20 */
  push32(0x1101177au); f_11013e20();
  /* 1101177a mov esi, esp */
  ESI = (ESP);
  /* 1101177c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101177e push 0x11040448 */
  push32((uint32_t)(0x11040448u));
  /* 11011783 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011785 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x1101178bu);
  /* 1101178b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101178e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011790 call 0x11013e20 */
  push32(0x11011795u); f_11013e20();
  /* 11011795 mov esi, esp */
  ESI = (ESP);
  /* 11011797 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011799 push 0x11040450 */
  push32((uint32_t)(0x11040450u));
  /* 1101179e push 0 */
  push32((uint32_t)(0x0u));
  /* 110117a0 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x110117a6u);
  /* 110117a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110117a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110117ab call 0x11013e20 */
  push32(0x110117b0u); f_11013e20();
  /* 110117b0 mov esi, esp */
  ESI = (ESP);
  /* 110117b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110117b4 push 0x11040460 */
  push32((uint32_t)(0x11040460u));
  /* 110117b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110117bb call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x110117c1u);
  /* 110117c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110117c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110117c6 call 0x11013e20 */
  push32(0x110117cbu); f_11013e20();
  /* 110117cb mov esi, esp */
  ESI = (ESP);
  /* 110117cd push 0 */
  push32((uint32_t)(0x0u));
  /* 110117cf push 0x110403e0 */
  push32((uint32_t)(0x110403e0u));
  /* 110117d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110117d6 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x110117dcu);
  /* 110117dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110117df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110117e1 call 0x11013e20 */
  push32(0x110117e6u); f_11013e20();
  /* 110117e6 mov esi, esp */
  ESI = (ESP);
  /* 110117e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110117ea push 0x110403e8 */
  push32((uint32_t)(0x110403e8u));
  /* 110117ef push 0 */
  push32((uint32_t)(0x0u));
  /* 110117f1 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x110117f7u);
  /* 110117f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110117fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110117fc call 0x11013e20 */
  push32(0x11011801u); f_11013e20();
  /* 11011801 mov esi, esp */
  ESI = (ESP);
  /* 11011803 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011805 push 0x110403f0 */
  push32((uint32_t)(0x110403f0u));
  /* 1101180a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101180c call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x11011812u);
  /* 11011812 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011815 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011817 call 0x11013e20 */
  push32(0x1101181cu); f_11013e20();
  /* 1101181c mov esi, esp */
  ESI = (ESP);
  /* 1101181e push 0 */
  push32((uint32_t)(0x0u));
  /* 11011820 push 0x110403f8 */
  push32((uint32_t)(0x110403f8u));
  /* 11011825 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011827 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x1101182du);
  /* 1101182d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011832 call 0x11013e20 */
  push32(0x11011837u); f_11013e20();
  /* 11011837 mov esi, esp */
  ESI = (ESP);
  /* 11011839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101183b push 0x11040410 */
  push32((uint32_t)(0x11040410u));
  /* 11011840 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011842 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x11011848u);
  /* 11011848 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101184b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101184d call 0x11013e20 */
  push32(0x11011852u); f_11013e20();
  /* 11011852 mov esi, esp */
  ESI = (ESP);
  /* 11011854 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011856 push 0x11040400 */
  push32((uint32_t)(0x11040400u));
  /* 1101185b push 1 */
  push32((uint32_t)(0x1u));
  /* 1101185d call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x11011863u);
  /* 11011863 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011866 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011868 call 0x11013e20 */
  push32(0x1101186du); f_11013e20();
  /* 1101186d mov esi, esp */
  ESI = (ESP);
  /* 1101186f push 0 */
  push32((uint32_t)(0x0u));
  /* 11011871 push 0x110403e8 */
  push32((uint32_t)(0x110403e8u));
  /* 11011876 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011878 call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x1101187eu);
  /* 1101187e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011881 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011883 call 0x11013e20 */
  push32(0x11011888u); f_11013e20();
  /* 11011888 mov esi, esp */
  ESI = (ESP);
  /* 1101188a push 9 */
  push32((uint32_t)(0x9u));
  /* 1101188c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101188e call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x11011894u);
  /* 11011894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011899 call 0x11013e20 */
  push32(0x1101189eu); f_11013e20();
  /* 1101189e mov esi, esp */
  ESI = (ESP);
  /* 110118a0 push 6 */
  push32((uint32_t)(0x6u));
  /* 110118a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 110118a4 call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x110118aau);
  /* 110118aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110118ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110118af call 0x11013e20 */
  push32(0x110118b4u); f_11013e20();
  /* 110118b4 mov esi, esp */
  ESI = (ESP);
  /* 110118b6 push 6 */
  push32((uint32_t)(0x6u));
  /* 110118b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 110118ba call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x110118c0u);
  /* 110118c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110118c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110118c5 call 0x11013e20 */
  push32(0x110118cau); f_11013e20();
  /* 110118ca mov esi, esp */
  ESI = (ESP);
  /* 110118cc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110118ce push 3 */
  push32((uint32_t)(0x3u));
  /* 110118d0 call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x110118d6u);
  /* 110118d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110118d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110118db call 0x11013e20 */
  push32(0x110118e0u); f_11013e20();
  /* 110118e0 mov esi, esp */
  ESI = (ESP);
  /* 110118e2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 110118e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 110118e6 call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x110118ecu);
  /* 110118ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110118ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110118f1 call 0x11013e20 */
  push32(0x110118f6u); f_11013e20();
  /* 110118f6 pop edi */
  EDI = (pop32());
  /* 110118f7 pop esi */
  ESI = (pop32());
  /* 110118f8 pop ebx */
  EBX = (pop32());
  /* 110118f9 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110118fc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110118fe call 0x11013e20 */
  push32(0x11011903u); f_11013e20();
  /* 11011903 mov esp, ebp */
  ESP = (EBP);
  /* 11011905 pop ebp */
  EBP = (pop32());
  /* 11011906 ret  */
  ESPCHK(0x11011090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b30 @ 0x11011b30 (6944 bytes, 2035 insns) */
void f_11011b30(void) {
  FTRACE(0x11011b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11011b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11011b31 mov ebp, esp */
  EBP = (ESP);
  /* 11011b33 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011b36 push ebx */
  push32((uint32_t)(EBX));
  /* 11011b37 push esi */
  push32((uint32_t)(ESI));
  /* 11011b38 push edi */
  push32((uint32_t)(EDI));
  /* 11011b39 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11011b3c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11011b41 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11011b46 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11011b48 mov esi, esp */
  ESI = (ESP);
  /* 11011b4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11011b4c call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11011b52u);
  /* 11011b52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011b57 call 0x11013e20 */
  push32(0x11011b5cu); f_11013e20();
  /* 11011b5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11011b61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11011b63 je 0x11012064 */
  if (C.zf) goto L_11012064;
  /* 11011b69 mov esi, esp */
  ESI = (ESP);
  /* 11011b6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11011b6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11011b6f call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11011b75u);
  /* 11011b75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011b78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011b7a call 0x11013e20 */
  push32(0x11011b7fu); f_11013e20();
  /* 11011b7f mov esi, esp */
  ESI = (ESP);
  /* 11011b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011b83 call dword ptr [0x11043448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043448))), 0x11011b89u);
  /* 11011b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011b8e call 0x11013e20 */
  push32(0x11011b93u); f_11013e20();
  /* 11011b93 imul eax, eax, 0x1194 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1194u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11011b99 mov ecx, 0x4e20 */
  ECX = (0x4e20u);
  /* 11011b9e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011ba0 mov esi, esp */
  ESI = (ESP);
  /* 11011ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 11011ba3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11011ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011ba7 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011badu);
  /* 11011bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011bb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011bb2 call 0x11013e20 */
  push32(0x11011bb7u); f_11013e20();
  /* 11011bb7 mov esi, esp */
  ESI = (ESP);
  /* 11011bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011bbb call dword ptr [0x11043448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043448))), 0x11011bc1u);
  /* 11011bc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011bc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011bc6 call 0x11013e20 */
  push32(0x11011bcbu); f_11013e20();
  /* 11011bcb imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11011bd1 mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 11011bd6 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011bd8 mov esi, esp */
  ESI = (ESP);
  /* 11011bda push edx */
  push32((uint32_t)(EDX));
  /* 11011bdb push 1 */
  push32((uint32_t)(0x1u));
  /* 11011bdd push 0 */
  push32((uint32_t)(0x0u));
  /* 11011bdf call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011be5u);
  /* 11011be5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011be8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011bea call 0x11013e20 */
  push32(0x11011befu); f_11013e20();
  /* 11011bef mov esi, esp */
  ESI = (ESP);
  /* 11011bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011bf3 call dword ptr [0x11043448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043448))), 0x11011bf9u);
  /* 11011bf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011bfe call 0x11013e20 */
  push32(0x11011c03u); f_11013e20();
  /* 11011c03 imul eax, eax, 0x2bc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2bcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11011c09 mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 11011c0e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011c10 mov esi, esp */
  ESI = (ESP);
  /* 11011c12 push ecx */
  push32((uint32_t)(ECX));
  /* 11011c13 push 4 */
  push32((uint32_t)(0x4u));
  /* 11011c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011c17 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011c1du);
  /* 11011c1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011c20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011c22 call 0x11013e20 */
  push32(0x11011c27u); f_11013e20();
  /* 11011c27 mov esi, esp */
  ESI = (ESP);
  /* 11011c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011c2b call dword ptr [0x11043448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043448))), 0x11011c31u);
  /* 11011c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011c36 call 0x11013e20 */
  push32(0x11011c3bu); f_11013e20();
  /* 11011c3b imul eax, eax, 0x384 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x384u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11011c41 mov edx, 0x1388 */
  EDX = (0x1388u);
  /* 11011c46 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011c48 mov esi, esp */
  ESI = (ESP);
  /* 11011c4a push edx */
  push32((uint32_t)(EDX));
  /* 11011c4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11011c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 11011c4f call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011c55u);
  /* 11011c55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011c58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011c5a call 0x11013e20 */
  push32(0x11011c5fu); f_11013e20();
  /* 11011c5f mov esi, esp */
  ESI = (ESP);
  /* 11011c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011c63 call dword ptr [0x11043448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043448))), 0x11011c69u);
  /* 11011c69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011c6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011c6e call 0x11013e20 */
  push32(0x11011c73u); f_11013e20();
  /* 11011c73 imul eax, eax, 0x384 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x384u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11011c79 mov ecx, 0x1388 */
  ECX = (0x1388u);
  /* 11011c7e sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011c80 mov esi, esp */
  ESI = (ESP);
  /* 11011c82 push ecx */
  push32((uint32_t)(ECX));
  /* 11011c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011c87 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011c8du);
  /* 11011c8d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011c90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011c92 call 0x11013e20 */
  push32(0x11011c97u); f_11013e20();
  /* 11011c97 mov esi, esp */
  ESI = (ESP);
  /* 11011c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011c9b call dword ptr [0x11043448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043448))), 0x11011ca1u);
  /* 11011ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011ca4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011ca6 call 0x11013e20 */
  push32(0x11011cabu); f_11013e20();
  /* 11011cab imul eax, eax, 0x2bc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2bcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11011cb1 mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 11011cb6 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11011cb8 mov esi, esp */
  ESI = (ESP);
  /* 11011cba push edx */
  push32((uint32_t)(EDX));
  /* 11011cbb push 5 */
  push32((uint32_t)(0x5u));
  /* 11011cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 11011cbf call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011cc5u);
  /* 11011cc5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011cc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011cca call 0x11013e20 */
  push32(0x11011ccfu); f_11013e20();
  /* 11011ccf mov esi, esp */
  ESI = (ESP);
  /* 11011cd1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11011cd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 11011cd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011cda call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011ce0u);
  /* 11011ce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011ce5 call 0x11013e20 */
  push32(0x11011ceau); f_11013e20();
  /* 11011cea mov esi, esp */
  ESI = (ESP);
  /* 11011cec push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11011cf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011cf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011cf5 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011cfbu);
  /* 11011cfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011cfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011d00 call 0x11013e20 */
  push32(0x11011d05u); f_11013e20();
  /* 11011d05 mov esi, esp */
  ESI = (ESP);
  /* 11011d07 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11011d0c push 4 */
  push32((uint32_t)(0x4u));
  /* 11011d0e push 1 */
  push32((uint32_t)(0x1u));
  /* 11011d10 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011d16u);
  /* 11011d16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011d19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011d1b call 0x11013e20 */
  push32(0x11011d20u); f_11013e20();
  /* 11011d20 mov esi, esp */
  ESI = (ESP);
  /* 11011d22 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11011d27 push 2 */
  push32((uint32_t)(0x2u));
  /* 11011d29 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011d2b call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011d31u);
  /* 11011d31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011d34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011d36 call 0x11013e20 */
  push32(0x11011d3bu); f_11013e20();
  /* 11011d3b mov esi, esp */
  ESI = (ESP);
  /* 11011d3d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11011d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011d44 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011d46 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011d4cu);
  /* 11011d4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011d51 call 0x11013e20 */
  push32(0x11011d56u); f_11013e20();
  /* 11011d56 mov esi, esp */
  ESI = (ESP);
  /* 11011d58 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 11011d5d push 5 */
  push32((uint32_t)(0x5u));
  /* 11011d5f push 1 */
  push32((uint32_t)(0x1u));
  /* 11011d61 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011d67u);
  /* 11011d67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011d6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011d6c call 0x11013e20 */
  push32(0x11011d71u); f_11013e20();
  /* 11011d71 mov esi, esp */
  ESI = (ESP);
  /* 11011d73 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011d78 push 3 */
  push32((uint32_t)(0x3u));
  /* 11011d7a push 2 */
  push32((uint32_t)(0x2u));
  /* 11011d7c call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011d82u);
  /* 11011d82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011d85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011d87 call 0x11013e20 */
  push32(0x11011d8cu); f_11013e20();
  /* 11011d8c mov esi, esp */
  ESI = (ESP);
  /* 11011d8e push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011d93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011d95 push 2 */
  push32((uint32_t)(0x2u));
  /* 11011d97 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011d9du);
  /* 11011d9d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011da2 call 0x11013e20 */
  push32(0x11011da7u); f_11013e20();
  /* 11011da7 mov esi, esp */
  ESI = (ESP);
  /* 11011da9 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011dae push 4 */
  push32((uint32_t)(0x4u));
  /* 11011db0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11011db2 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011db8u);
  /* 11011db8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011dbd call 0x11013e20 */
  push32(0x11011dc2u); f_11013e20();
  /* 11011dc2 mov esi, esp */
  ESI = (ESP);
  /* 11011dc4 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011dc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11011dcb push 2 */
  push32((uint32_t)(0x2u));
  /* 11011dcd call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011dd3u);
  /* 11011dd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011dd8 call 0x11013e20 */
  push32(0x11011dddu); f_11013e20();
  /* 11011ddd mov esi, esp */
  ESI = (ESP);
  /* 11011ddf push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011de6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11011de8 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011deeu);
  /* 11011dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011df3 call 0x11013e20 */
  push32(0x11011df8u); f_11013e20();
  /* 11011df8 mov esi, esp */
  ESI = (ESP);
  /* 11011dfa push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011dff push 5 */
  push32((uint32_t)(0x5u));
  /* 11011e01 push 2 */
  push32((uint32_t)(0x2u));
  /* 11011e03 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011e09u);
  /* 11011e09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011e0e call 0x11013e20 */
  push32(0x11011e13u); f_11013e20();
  /* 11011e13 mov esi, esp */
  ESI = (ESP);
  /* 11011e15 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011e1a push 3 */
  push32((uint32_t)(0x3u));
  /* 11011e1c push 3 */
  push32((uint32_t)(0x3u));
  /* 11011e1e call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011e24u);
  /* 11011e24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011e29 call 0x11013e20 */
  push32(0x11011e2eu); f_11013e20();
  /* 11011e2e mov esi, esp */
  ESI = (ESP);
  /* 11011e30 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011e35 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011e37 push 3 */
  push32((uint32_t)(0x3u));
  /* 11011e39 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011e3fu);
  /* 11011e3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011e42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011e44 call 0x11013e20 */
  push32(0x11011e49u); f_11013e20();
  /* 11011e49 mov esi, esp */
  ESI = (ESP);
  /* 11011e4b push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011e50 push 4 */
  push32((uint32_t)(0x4u));
  /* 11011e52 push 3 */
  push32((uint32_t)(0x3u));
  /* 11011e54 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011e5au);
  /* 11011e5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011e5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011e5f call 0x11013e20 */
  push32(0x11011e64u); f_11013e20();
  /* 11011e64 mov esi, esp */
  ESI = (ESP);
  /* 11011e66 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011e6b push 2 */
  push32((uint32_t)(0x2u));
  /* 11011e6d push 3 */
  push32((uint32_t)(0x3u));
  /* 11011e6f call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011e75u);
  /* 11011e75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011e78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011e7a call 0x11013e20 */
  push32(0x11011e7fu); f_11013e20();
  /* 11011e7f mov esi, esp */
  ESI = (ESP);
  /* 11011e81 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011e88 push 3 */
  push32((uint32_t)(0x3u));
  /* 11011e8a call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011e90u);
  /* 11011e90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011e93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011e95 call 0x11013e20 */
  push32(0x11011e9au); f_11013e20();
  /* 11011e9a mov esi, esp */
  ESI = (ESP);
  /* 11011e9c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011ea1 push 5 */
  push32((uint32_t)(0x5u));
  /* 11011ea3 push 3 */
  push32((uint32_t)(0x3u));
  /* 11011ea5 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011eabu);
  /* 11011eab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011eae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011eb0 call 0x11013e20 */
  push32(0x11011eb5u); f_11013e20();
  /* 11011eb5 mov esi, esp */
  ESI = (ESP);
  /* 11011eb7 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011ebc push 3 */
  push32((uint32_t)(0x3u));
  /* 11011ebe push 4 */
  push32((uint32_t)(0x4u));
  /* 11011ec0 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011ec6u);
  /* 11011ec6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011ec9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011ecb call 0x11013e20 */
  push32(0x11011ed0u); f_11013e20();
  /* 11011ed0 mov esi, esp */
  ESI = (ESP);
  /* 11011ed2 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11011ed9 push 4 */
  push32((uint32_t)(0x4u));
  /* 11011edb call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011ee1u);
  /* 11011ee1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011ee6 call 0x11013e20 */
  push32(0x11011eebu); f_11013e20();
  /* 11011eeb mov esi, esp */
  ESI = (ESP);
  /* 11011eed push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011ef2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11011ef4 push 4 */
  push32((uint32_t)(0x4u));
  /* 11011ef6 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011efcu);
  /* 11011efc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011eff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011f01 call 0x11013e20 */
  push32(0x11011f06u); f_11013e20();
  /* 11011f06 mov esi, esp */
  ESI = (ESP);
  /* 11011f08 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 11011f0f push 4 */
  push32((uint32_t)(0x4u));
  /* 11011f11 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011f17u);
  /* 11011f17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011f1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011f1c call 0x11013e20 */
  push32(0x11011f21u); f_11013e20();
  /* 11011f21 mov esi, esp */
  ESI = (ESP);
  /* 11011f23 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011f2a push 4 */
  push32((uint32_t)(0x4u));
  /* 11011f2c call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011f32u);
  /* 11011f32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011f35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011f37 call 0x11013e20 */
  push32(0x11011f3cu); f_11013e20();
  /* 11011f3c mov esi, esp */
  ESI = (ESP);
  /* 11011f3e push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 11011f43 push 5 */
  push32((uint32_t)(0x5u));
  /* 11011f45 push 4 */
  push32((uint32_t)(0x4u));
  /* 11011f47 call dword ptr [0x11043440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043440))), 0x11011f4du);
  /* 11011f4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011f50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011f52 call 0x11013e20 */
  push32(0x11011f57u); f_11013e20();
  /* 11011f57 mov esi, esp */
  ESI = (ESP);
  /* 11011f59 push 0x1103b31c */
  push32((uint32_t)(0x1103b31cu));
  /* 11011f5e push 0x1103b200 */
  push32((uint32_t)(0x1103b200u));
  /* 11011f63 call dword ptr [0x11043450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043450))), 0x11011f69u);
  /* 11011f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011f6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011f6e call 0x11013e20 */
  push32(0x11011f73u); f_11013e20();
  /* 11011f73 mov esi, esp */
  ESI = (ESP);
  /* 11011f75 push 0x1103b310 */
  push32((uint32_t)(0x1103b310u));
  /* 11011f7a push 0x1103b1fc */
  push32((uint32_t)(0x1103b1fcu));
  /* 11011f7f call dword ptr [0x11043450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043450))), 0x11011f85u);
  /* 11011f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011f8a call 0x11013e20 */
  push32(0x11011f8fu); f_11013e20();
  /* 11011f8f mov esi, esp */
  ESI = (ESP);
  /* 11011f91 push 0x1103b304 */
  push32((uint32_t)(0x1103b304u));
  /* 11011f96 push 0x1103b1fc */
  push32((uint32_t)(0x1103b1fcu));
  /* 11011f9b call dword ptr [0x11043450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043450))), 0x11011fa1u);
  /* 11011fa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011fa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011fa6 call 0x11013e20 */
  push32(0x11011fabu); f_11013e20();
  /* 11011fab mov esi, esp */
  ESI = (ESP);
  /* 11011fad push 0x110404b8 */
  push32((uint32_t)(0x110404b8u));
  /* 11011fb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11011fb4 call dword ptr [0x11043454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043454))), 0x11011fbau);
  /* 11011fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011fbf call 0x11013e20 */
  push32(0x11011fc4u); f_11013e20();
  /* 11011fc4 mov esi, esp */
  ESI = (ESP);
  /* 11011fc6 push 0x110404c0 */
  push32((uint32_t)(0x110404c0u));
  /* 11011fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11011fcd call dword ptr [0x11043454] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043454))), 0x11011fd3u);
  /* 11011fd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011fd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011fd8 call 0x11013e20 */
  push32(0x11011fddu); f_11013e20();
  /* 11011fdd mov esi, esp */
  ESI = (ESP);
  /* 11011fdf push 0x1103b2fc */
  push32((uint32_t)(0x1103b2fcu));
  /* 11011fe4 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11011feau);
  /* 11011fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11011fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11011fef call 0x11013e20 */
  push32(0x11011ff4u); f_11013e20();
  /* 11011ff4 mov esi, esp */
  ESI = (ESP);
  /* 11011ff6 push 0x1103b2f4 */
  push32((uint32_t)(0x1103b2f4u));
  /* 11011ffb call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11012001u);
  /* 11012001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012004 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012006 call 0x11013e20 */
  push32(0x1101200bu); f_11013e20();
  /* 1101200b mov esi, esp */
  ESI = (ESP);
  /* 1101200d push 1 */
  push32((uint32_t)(0x1u));
  /* 1101200f push 9 */
  push32((uint32_t)(0x9u));
  /* 11012011 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012017u);
  /* 11012017 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101201a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101201c call 0x11013e20 */
  push32(0x11012021u); f_11013e20();
  /* 11012021 mov esi, esp */
  ESI = (ESP);
  /* 11012023 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012025 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11012027 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101202du);
  /* 1101202d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012030 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012032 call 0x11013e20 */
  push32(0x11012037u); f_11013e20();
  /* 11012037 mov esi, esp */
  ESI = (ESP);
  /* 11012039 push 0x110404c8 */
  push32((uint32_t)(0x110404c8u));
  /* 1101203e call dword ptr [0x1104345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104345c))), 0x11012044u);
  /* 11012044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012047 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012049 call 0x11013e20 */
  push32(0x1101204eu); f_11013e20();
  /* 1101204e mov esi, esp */
  ESI = (ESP);
  /* 11012050 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012052 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11012054 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101205au);
  /* 1101205a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101205d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101205f call 0x11013e20 */
  push32(0x11012064u); f_11013e20();
L_11012064:;
  /* 11012064 mov esi, esp */
  ESI = (ESP);
  /* 11012066 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012068 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x1101206eu);
  /* 1101206e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012071 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012073 call 0x11013e20 */
  push32(0x11012078u); f_11013e20();
  /* 11012078 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101207d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101207f je 0x11012107 */
  if (C.zf) goto L_11012107;
  /* 11012085 mov esi, esp */
  ESI = (ESP);
  /* 11012087 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012089 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101208b call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012091u);
  /* 11012091 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012094 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012096 call 0x11013e20 */
  push32(0x1101209bu); f_11013e20();
  /* 1101209b mov esi, esp */
  ESI = (ESP);
  /* 1101209d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1101209f push 2 */
  push32((uint32_t)(0x2u));
  /* 110120a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110120a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110120a5 push 0x1103b2e8 */
  push32((uint32_t)(0x1103b2e8u));
  /* 110120aa push 1 */
  push32((uint32_t)(0x1u));
  /* 110120ac call dword ptr [0x11043460] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043460))), 0x110120b2u);
  /* 110120b2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110120b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110120b7 call 0x11013e20 */
  push32(0x110120bcu); f_11013e20();
  /* 110120bc mov esi, esp */
  ESI = (ESP);
  /* 110120be push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 110120c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 110120c5 call dword ptr [0x11043458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043458))), 0x110120cbu);
  /* 110120cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110120ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110120d0 call 0x11013e20 */
  push32(0x110120d5u); f_11013e20();
  /* 110120d5 mov esi, esp */
  ESI = (ESP);
  /* 110120d7 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 110120dc push 5 */
  push32((uint32_t)(0x5u));
  /* 110120de call dword ptr [0x11043458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043458))), 0x110120e4u);
  /* 110120e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110120e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110120e9 call 0x11013e20 */
  push32(0x110120eeu); f_11013e20();
  /* 110120ee mov esi, esp */
  ESI = (ESP);
  /* 110120f0 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 110120f5 push 6 */
  push32((uint32_t)(0x6u));
  /* 110120f7 call dword ptr [0x11043458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043458))), 0x110120fdu);
  /* 110120fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012102 call 0x11013e20 */
  push32(0x11012107u); f_11013e20();
L_11012107:;
  /* 11012107 mov esi, esp */
  ESI = (ESP);
  /* 11012109 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101210b call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012111u);
  /* 11012111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012114 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012116 call 0x11013e20 */
  push32(0x1101211bu); f_11013e20();
  /* 1101211b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012122 je 0x110121b5 */
  if (C.zf) goto L_110121b5;
  /* 11012128 mov esi, esp */
  ESI = (ESP);
  /* 1101212a push 1 */
  push32((uint32_t)(0x1u));
  /* 1101212c call dword ptr [0x11043468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043468))), 0x11012132u);
  /* 11012132 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012135 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012137 call 0x11013e20 */
  push32(0x1101213cu); f_11013e20();
  /* 1101213c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012141 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012143 je 0x110121b5 */
  if (C.zf) goto L_110121b5;
  /* 11012145 mov esi, esp */
  ESI = (ESP);
  /* 11012147 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012149 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101214b call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012151u);
  /* 11012151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012154 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012156 call 0x11013e20 */
  push32(0x1101215bu); f_11013e20();
  /* 1101215b mov esi, esp */
  ESI = (ESP);
  /* 1101215d push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 11012162 push 0x110404d0 */
  push32((uint32_t)(0x110404d0u));
  /* 11012167 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012169 push 0x11040528 */
  push32((uint32_t)(0x11040528u));
  /* 1101216e push 0x110404e8 */
  push32((uint32_t)(0x110404e8u));
  /* 11012173 push 0x11040468 */
  push32((uint32_t)(0x11040468u));
  /* 11012178 call dword ptr [0x1104346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104346c))), 0x1101217eu);
  /* 1101217e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012183 call 0x11013e20 */
  push32(0x11012188u); f_11013e20();
  /* 11012188 mov esi, esp */
  ESI = (ESP);
  /* 1101218a push 0xe6 */
  push32((uint32_t)(0xe6u));
  /* 1101218f push 0x110404d0 */
  push32((uint32_t)(0x110404d0u));
  /* 11012194 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012196 push 0x11040530 */
  push32((uint32_t)(0x11040530u));
  /* 1101219b push 0x11040520 */
  push32((uint32_t)(0x11040520u));
  /* 110121a0 push 0x11040470 */
  push32((uint32_t)(0x11040470u));
  /* 110121a5 call dword ptr [0x1104346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104346c))), 0x110121abu);
  /* 110121ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110121ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110121b0 call 0x11013e20 */
  push32(0x110121b5u); f_11013e20();
L_110121b5:;
  /* 110121b5 mov esi, esp */
  ESI = (ESP);
  /* 110121b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 110121b9 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x110121bfu);
  /* 110121bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110121c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110121c4 call 0x11013e20 */
  push32(0x110121c9u); f_11013e20();
  /* 110121c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110121ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110121d0 je 0x110122a5 */
  if (C.zf) goto L_110122a5;
  /* 110121d6 mov esi, esp */
  ESI = (ESP);
  /* 110121d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110121da call dword ptr [0x11043468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043468))), 0x110121e0u);
  /* 110121e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110121e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110121e5 call 0x11013e20 */
  push32(0x110121eau); f_11013e20();
  /* 110121ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110121ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110121f1 je 0x110122a5 */
  if (C.zf) goto L_110122a5;
  /* 110121f7 mov esi, esp */
  ESI = (ESP);
  /* 110121f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110121fb push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012200 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012202 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x11012208u);
  /* 11012208 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101220b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101220d call 0x11013e20 */
  push32(0x11012212u); f_11013e20();
  /* 11012212 mov esi, esp */
  ESI = (ESP);
  /* 11012214 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012216 push 3 */
  push32((uint32_t)(0x3u));
  /* 11012218 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101221eu);
  /* 1101221e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012221 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012223 call 0x11013e20 */
  push32(0x11012228u); f_11013e20();
  /* 11012228 mov esi, esp */
  ESI = (ESP);
  /* 1101222a push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1101222c push 0x110404d8 */
  push32((uint32_t)(0x110404d8u));
  /* 11012231 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012233 push 0x11040538 */
  push32((uint32_t)(0x11040538u));
  /* 11012238 push 0x11040500 */
  push32((uint32_t)(0x11040500u));
  /* 1101223d push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 11012242 call dword ptr [0x1104346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104346c))), 0x11012248u);
  /* 11012248 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101224b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101224d call 0x11013e20 */
  push32(0x11012252u); f_11013e20();
  /* 11012252 mov esi, esp */
  ESI = (ESP);
  /* 11012254 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012256 push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 1101225b push 2 */
  push32((uint32_t)(0x2u));
  /* 1101225d call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012263u);
  /* 11012263 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012266 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012268 call 0x11013e20 */
  push32(0x1101226du); f_11013e20();
  /* 1101226d mov esi, esp */
  ESI = (ESP);
  /* 1101226f push 0 */
  push32((uint32_t)(0x0u));
  /* 11012271 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 11012273 push 0x110404e0 */
  push32((uint32_t)(0x110404e0u));
  /* 11012278 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101227a call dword ptr [0x11043478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043478))), 0x11012280u);
  /* 11012280 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012285 call 0x11013e20 */
  push32(0x1101228au); f_11013e20();
  /* 1101228a mov esi, esp */
  ESI = (ESP);
  /* 1101228c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101228e push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012293 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012295 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x1101229bu);
  /* 1101229b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101229e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110122a0 call 0x11013e20 */
  push32(0x110122a5u); f_11013e20();
L_110122a5:;
  /* 110122a5 mov esi, esp */
  ESI = (ESP);
  /* 110122a7 push 5 */
  push32((uint32_t)(0x5u));
  /* 110122a9 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x110122afu);
  /* 110122af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110122b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110122b4 call 0x11013e20 */
  push32(0x110122b9u); f_11013e20();
  /* 110122b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110122be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110122c0 je 0x110123e5 */
  if (C.zf) goto L_110123e5;
  /* 110122c6 mov esi, esp */
  ESI = (ESP);
  /* 110122c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110122ca call dword ptr [0x11043468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043468))), 0x110122d0u);
  /* 110122d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110122d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110122d5 call 0x11013e20 */
  push32(0x110122dau); f_11013e20();
  /* 110122da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110122df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110122e1 je 0x110123e5 */
  if (C.zf) goto L_110123e5;
  /* 110122e7 mov esi, esp */
  ESI = (ESP);
  /* 110122e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110122eb push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 110122f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110122f2 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x110122f8u);
  /* 110122f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110122fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110122fd call 0x11013e20 */
  push32(0x11012302u); f_11013e20();
  /* 11012302 mov esi, esp */
  ESI = (ESP);
  /* 11012304 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012306 push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 1101230b push 2 */
  push32((uint32_t)(0x2u));
  /* 1101230d call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012313u);
  /* 11012313 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012316 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012318 call 0x11013e20 */
  push32(0x1101231du); f_11013e20();
  /* 1101231d mov esi, esp */
  ESI = (ESP);
  /* 1101231f push 2 */
  push32((uint32_t)(0x2u));
  /* 11012321 call dword ptr [0x11043470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043470))), 0x11012327u);
  /* 11012327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101232a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101232c call 0x11013e20 */
  push32(0x11012331u); f_11013e20();
  /* 11012331 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012338 je 0x110123e5 */
  if (C.zf) goto L_110123e5;
  /* 1101233e mov esi, esp */
  ESI = (ESP);
  /* 11012340 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012342 push 0x11040468 */
  push32((uint32_t)(0x11040468u));
  /* 11012347 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012349 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x1101234fu);
  /* 1101234f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012352 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012354 call 0x11013e20 */
  push32(0x11012359u); f_11013e20();
  /* 11012359 mov esi, esp */
  ESI = (ESP);
  /* 1101235b push 1 */
  push32((uint32_t)(0x1u));
  /* 1101235d push 0x11040470 */
  push32((uint32_t)(0x11040470u));
  /* 11012362 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012364 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x1101236au);
  /* 1101236a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101236d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101236f call 0x11013e20 */
  push32(0x11012374u); f_11013e20();
  /* 11012374 mov esi, esp */
  ESI = (ESP);
  /* 11012376 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012378 call dword ptr [0x11043480] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043480))), 0x1101237eu);
  /* 1101237e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012381 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012383 call 0x11013e20 */
  push32(0x11012388u); f_11013e20();
  /* 11012388 mov esi, esp */
  ESI = (ESP);
  /* 1101238a push 1 */
  push32((uint32_t)(0x1u));
  /* 1101238c push 6 */
  push32((uint32_t)(0x6u));
  /* 1101238e call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012394u);
  /* 11012394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012397 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012399 call 0x11013e20 */
  push32(0x1101239eu); f_11013e20();
  /* 1101239e mov esi, esp */
  ESI = (ESP);
  /* 110123a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 110123a2 push 7 */
  push32((uint32_t)(0x7u));
  /* 110123a4 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110123aau);
  /* 110123aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110123ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110123af call 0x11013e20 */
  push32(0x110123b4u); f_11013e20();
  /* 110123b4 mov esi, esp */
  ESI = (ESP);
  /* 110123b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110123b8 push 5 */
  push32((uint32_t)(0x5u));
  /* 110123ba call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110123c0u);
  /* 110123c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110123c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110123c5 call 0x11013e20 */
  push32(0x110123cau); f_11013e20();
  /* 110123ca mov esi, esp */
  ESI = (ESP);
  /* 110123cc push 0 */
  push32((uint32_t)(0x0u));
  /* 110123ce push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 110123d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110123d5 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x110123dbu);
  /* 110123db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110123de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110123e0 call 0x11013e20 */
  push32(0x110123e5u); f_11013e20();
L_110123e5:;
  /* 110123e5 mov esi, esp */
  ESI = (ESP);
  /* 110123e7 push 6 */
  push32((uint32_t)(0x6u));
  /* 110123e9 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x110123efu);
  /* 110123ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110123f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110123f4 call 0x11013e20 */
  push32(0x110123f9u); f_11013e20();
  /* 110123f9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110123fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012400 je 0x11012537 */
  if (C.zf) goto L_11012537;
  /* 11012406 mov esi, esp */
  ESI = (ESP);
  /* 11012408 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101240a push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 1101240f push 0 */
  push32((uint32_t)(0x0u));
  /* 11012411 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x11012417u);
  /* 11012417 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101241a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101241c call 0x11013e20 */
  push32(0x11012421u); f_11013e20();
  /* 11012421 mov esi, esp */
  ESI = (ESP);
  /* 11012423 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012425 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x1101242bu);
  /* 1101242b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101242e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012430 call 0x11013e20 */
  push32(0x11012435u); f_11013e20();
  /* 11012435 mov esi, esp */
  ESI = (ESP);
  /* 11012437 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012439 push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 1101243e push 2 */
  push32((uint32_t)(0x2u));
  /* 11012440 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012446u);
  /* 11012446 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012449 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101244b call 0x11013e20 */
  push32(0x11012450u); f_11013e20();
  /* 11012450 mov esi, esp */
  ESI = (ESP);
  /* 11012452 push 7 */
  push32((uint32_t)(0x7u));
  /* 11012454 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x1101245au);
  /* 1101245a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101245d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101245f call 0x11013e20 */
  push32(0x11012464u); f_11013e20();
  /* 11012464 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101246b je 0x1101251c */
  if (C.zf) goto L_1101251c;
  /* 11012471 mov esi, esp */
  ESI = (ESP);
  /* 11012473 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012475 call dword ptr [0x1104347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104347c))), 0x1101247bu);
  /* 1101247b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101247e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012480 call 0x11013e20 */
  push32(0x11012485u); f_11013e20();
  /* 11012485 cmp eax, 0x4f */
  { uint32_t _a=(EAX),_b=(0x4fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012488 jle 0x1101251c */
  if ((C.zf||C.sf!=C.of)) goto L_1101251c;
  /* 1101248e mov esi, esp */
  ESI = (ESP);
  /* 11012490 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012492 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 11012494 push 0x11040518 */
  push32((uint32_t)(0x11040518u));
  /* 11012499 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101249b call dword ptr [0x11043478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043478))), 0x110124a1u);
  /* 110124a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110124a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110124a6 call 0x11013e20 */
  push32(0x110124abu); f_11013e20();
  /* 110124ab mov esi, esp */
  ESI = (ESP);
  /* 110124ad push 0 */
  push32((uint32_t)(0x0u));
  /* 110124af push 6 */
  push32((uint32_t)(0x6u));
  /* 110124b1 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110124b7u);
  /* 110124b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110124ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110124bc call 0x11013e20 */
  push32(0x110124c1u); f_11013e20();
  /* 110124c1 mov esi, esp */
  ESI = (ESP);
  /* 110124c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110124c5 push 7 */
  push32((uint32_t)(0x7u));
  /* 110124c7 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110124cdu);
  /* 110124cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110124d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110124d2 call 0x11013e20 */
  push32(0x110124d7u); f_11013e20();
  /* 110124d7 mov esi, esp */
  ESI = (ESP);
  /* 110124d9 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 110124de push 2 */
  push32((uint32_t)(0x2u));
  /* 110124e0 call dword ptr [0x11043458] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043458))), 0x110124e6u);
  /* 110124e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110124e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110124eb call 0x11013e20 */
  push32(0x110124f0u); f_11013e20();
  /* 110124f0 mov esi, esp */
  ESI = (ESP);
  /* 110124f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 110124f4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 110124f6 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110124fcu);
  /* 110124fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110124ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012501 call 0x11013e20 */
  push32(0x11012506u); f_11013e20();
  /* 11012506 mov esi, esp */
  ESI = (ESP);
  /* 11012508 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101250a push 8 */
  push32((uint32_t)(0x8u));
  /* 1101250c call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012512u);
  /* 11012512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012515 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012517 call 0x11013e20 */
  push32(0x1101251cu); f_11013e20();
L_1101251c:;
  /* 1101251c mov esi, esp */
  ESI = (ESP);
  /* 1101251e push 0 */
  push32((uint32_t)(0x0u));
  /* 11012520 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012525 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012527 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x1101252du);
  /* 1101252d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012532 call 0x11013e20 */
  push32(0x11012537u); f_11013e20();
L_11012537:;
  /* 11012537 mov esi, esp */
  ESI = (ESP);
  /* 11012539 push 8 */
  push32((uint32_t)(0x8u));
  /* 1101253b call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012541u);
  /* 11012541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012544 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012546 call 0x11013e20 */
  push32(0x1101254bu); f_11013e20();
  /* 1101254b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012552 je 0x11012640 */
  if (C.zf) goto L_11012640;
  /* 11012558 mov esi, esp */
  ESI = (ESP);
  /* 1101255a push 2 */
  push32((uint32_t)(0x2u));
  /* 1101255c call dword ptr [0x11043468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043468))), 0x11012562u);
  /* 11012562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012567 call 0x11013e20 */
  push32(0x1101256cu); f_11013e20();
  /* 1101256c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012571 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012573 je 0x11012640 */
  if (C.zf) goto L_11012640;
  /* 11012579 mov esi, esp */
  ESI = (ESP);
  /* 1101257b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101257d push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012582 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012584 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x1101258au);
  /* 1101258a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101258d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101258f call 0x11013e20 */
  push32(0x11012594u); f_11013e20();
  /* 11012594 mov esi, esp */
  ESI = (ESP);
  /* 11012596 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012598 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x1101259eu);
  /* 1101259e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110125a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110125a3 call 0x11013e20 */
  push32(0x110125a8u); f_11013e20();
  /* 110125a8 mov esi, esp */
  ESI = (ESP);
  /* 110125aa push 0 */
  push32((uint32_t)(0x0u));
  /* 110125ac push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 110125b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 110125b3 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x110125b9u);
  /* 110125b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110125bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110125be call 0x11013e20 */
  push32(0x110125c3u); f_11013e20();
  /* 110125c3 mov esi, esp */
  ESI = (ESP);
  /* 110125c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 110125c7 call dword ptr [0x11043470] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043470))), 0x110125cdu);
  /* 110125cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110125d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110125d2 call 0x11013e20 */
  push32(0x110125d7u); f_11013e20();
  /* 110125d7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110125dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110125de je 0x11012625 */
  if (C.zf) goto L_11012625;
  /* 110125e0 mov esi, esp */
  ESI = (ESP);
  /* 110125e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110125e4 push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 110125e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 110125eb call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x110125f1u);
  /* 110125f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110125f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110125f6 call 0x11013e20 */
  push32(0x110125fbu); f_11013e20();
  /* 110125fb mov esi, esp */
  ESI = (ESP);
  /* 110125fd push 2 */
  push32((uint32_t)(0x2u));
  /* 110125ff call dword ptr [0x1104348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104348c))), 0x11012605u);
  /* 11012605 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012608 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101260a call 0x11013e20 */
  push32(0x1101260fu); f_11013e20();
  /* 1101260f mov esi, esp */
  ESI = (ESP);
  /* 11012611 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012613 push 9 */
  push32((uint32_t)(0x9u));
  /* 11012615 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101261bu);
  /* 1101261b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101261e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012620 call 0x11013e20 */
  push32(0x11012625u); f_11013e20();
L_11012625:;
  /* 11012625 mov esi, esp */
  ESI = (ESP);
  /* 11012627 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012629 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 1101262e push 0 */
  push32((uint32_t)(0x0u));
  /* 11012630 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012636u);
  /* 11012636 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012639 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101263b call 0x11013e20 */
  push32(0x11012640u); f_11013e20();
L_11012640:;
  /* 11012640 mov esi, esp */
  ESI = (ESP);
  /* 11012642 push 9 */
  push32((uint32_t)(0x9u));
  /* 11012644 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x1101264au);
  /* 1101264a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101264d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101264f call 0x11013e20 */
  push32(0x11012654u); f_11013e20();
  /* 11012654 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101265b je 0x1101275e */
  if (C.zf) goto L_1101275e;
  /* 11012661 mov esi, esp */
  ESI = (ESP);
  /* 11012663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012665 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 1101266a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101266c call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x11012672u);
  /* 11012672 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012675 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012677 call 0x11013e20 */
  push32(0x1101267cu); f_11013e20();
  /* 1101267c mov esi, esp */
  ESI = (ESP);
  /* 1101267e push 0 */
  push32((uint32_t)(0x0u));
  /* 11012680 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x11012686u);
  /* 11012686 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101268b call 0x11013e20 */
  push32(0x11012690u); f_11013e20();
  /* 11012690 mov esi, esp */
  ESI = (ESP);
  /* 11012692 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012694 push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 11012699 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101269b call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x110126a1u);
  /* 110126a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110126a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110126a6 call 0x11013e20 */
  push32(0x110126abu); f_11013e20();
  /* 110126ab mov esi, esp */
  ESI = (ESP);
  /* 110126ad push 2 */
  push32((uint32_t)(0x2u));
  /* 110126af call dword ptr [0x1104347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104347c))), 0x110126b5u);
  /* 110126b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110126b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110126ba call 0x11013e20 */
  push32(0x110126bfu); f_11013e20();
  /* 110126bf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110126c2 jge 0x11012743 */
  if ((C.sf==C.of)) goto L_11012743;
  /* 110126c4 mov esi, esp */
  ESI = (ESP);
  /* 110126c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110126c8 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 110126ca call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110126d0u);
  /* 110126d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110126d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110126d5 call 0x11013e20 */
  push32(0x110126dau); f_11013e20();
  /* 110126da mov esi, esp */
  ESI = (ESP);
  /* 110126dc push 0 */
  push32((uint32_t)(0x0u));
  /* 110126de push 0x11040468 */
  push32((uint32_t)(0x11040468u));
  /* 110126e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110126e5 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x110126ebu);
  /* 110126eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110126ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110126f0 call 0x11013e20 */
  push32(0x110126f5u); f_11013e20();
  /* 110126f5 mov esi, esp */
  ESI = (ESP);
  /* 110126f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110126f9 push 0x11040470 */
  push32((uint32_t)(0x11040470u));
  /* 110126fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11012700 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012706u);
  /* 11012706 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012709 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101270b call 0x11013e20 */
  push32(0x11012710u); f_11013e20();
  /* 11012710 mov esi, esp */
  ESI = (ESP);
  /* 11012712 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012714 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012716 push 0x110404c8 */
  push32((uint32_t)(0x110404c8u));
  /* 1101271b push 2 */
  push32((uint32_t)(0x2u));
  /* 1101271d call dword ptr [0x11043490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043490))), 0x11012723u);
  /* 11012723 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012726 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012728 call 0x11013e20 */
  push32(0x1101272du); f_11013e20();
  /* 1101272d mov esi, esp */
  ESI = (ESP);
  /* 1101272f push 0 */
  push32((uint32_t)(0x0u));
  /* 11012731 push 8 */
  push32((uint32_t)(0x8u));
  /* 11012733 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012739u);
  /* 11012739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101273c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101273e call 0x11013e20 */
  push32(0x11012743u); f_11013e20();
L_11012743:;
  /* 11012743 mov esi, esp */
  ESI = (ESP);
  /* 11012745 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012747 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 1101274c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101274e call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012754u);
  /* 11012754 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012759 call 0x11013e20 */
  push32(0x1101275eu); f_11013e20();
L_1101275e:;
  /* 1101275e mov esi, esp */
  ESI = (ESP);
  /* 11012760 push 9 */
  push32((uint32_t)(0x9u));
  /* 11012762 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012768u);
  /* 11012768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101276b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101276d call 0x11013e20 */
  push32(0x11012772u); f_11013e20();
  /* 11012772 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012779 je 0x11012797 */
  if (C.zf) goto L_11012797;
  /* 1101277b mov esi, esp */
  ESI = (ESP);
  /* 1101277d push 0x11040470 */
  push32((uint32_t)(0x11040470u));
  /* 11012782 call dword ptr [0x11043488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043488))), 0x11012788u);
  /* 11012788 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101278b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101278d call 0x11013e20 */
  push32(0x11012792u); f_11013e20();
  /* 11012792 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012795 jl 0x110127b6 */
  if ((C.sf!=C.of)) goto L_110127b6;
L_11012797:;
  /* 11012797 mov esi, esp */
  ESI = (ESP);
  /* 11012799 push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 1101279e call dword ptr [0x11043488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043488))), 0x110127a4u);
  /* 110127a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110127a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110127a9 call 0x11013e20 */
  push32(0x110127aeu); f_11013e20();
  /* 110127ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110127b0 jne 0x11012887 */
  if (!C.zf) goto L_11012887;
L_110127b6:;
  /* 110127b6 mov esi, esp */
  ESI = (ESP);
  /* 110127b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110127ba push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 110127bf push 0 */
  push32((uint32_t)(0x0u));
  /* 110127c1 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x110127c7u);
  /* 110127c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110127ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110127cc call 0x11013e20 */
  push32(0x110127d1u); f_11013e20();
  /* 110127d1 mov esi, esp */
  ESI = (ESP);
  /* 110127d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110127d5 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x110127dbu);
  /* 110127db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110127de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110127e0 call 0x11013e20 */
  push32(0x110127e5u); f_11013e20();
  /* 110127e5 mov esi, esp */
  ESI = (ESP);
  /* 110127e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110127e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 110127eb call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110127f1u);
  /* 110127f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110127f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110127f6 call 0x11013e20 */
  push32(0x110127fbu); f_11013e20();
  /* 110127fb mov esi, esp */
  ESI = (ESP);
  /* 110127fd push 1 */
  push32((uint32_t)(0x1u));
  /* 110127ff push 3 */
  push32((uint32_t)(0x3u));
  /* 11012801 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012807u);
  /* 11012807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101280a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101280c call 0x11013e20 */
  push32(0x11012811u); f_11013e20();
  /* 11012811 mov esi, esp */
  ESI = (ESP);
  /* 11012813 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012815 push 5 */
  push32((uint32_t)(0x5u));
  /* 11012817 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101281du);
  /* 1101281d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012820 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012822 call 0x11013e20 */
  push32(0x11012827u); f_11013e20();
  /* 11012827 mov esi, esp */
  ESI = (ESP);
  /* 11012829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101282b push 9 */
  push32((uint32_t)(0x9u));
  /* 1101282d call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012833u);
  /* 11012833 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012836 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012838 call 0x11013e20 */
  push32(0x1101283du); f_11013e20();
  /* 1101283d mov esi, esp */
  ESI = (ESP);
  /* 1101283f push 0 */
  push32((uint32_t)(0x0u));
  /* 11012841 push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 11012846 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012848 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x1101284eu);
  /* 1101284e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012853 call 0x11013e20 */
  push32(0x11012858u); f_11013e20();
  /* 11012858 mov esi, esp */
  ESI = (ESP);
  /* 1101285a push 2 */
  push32((uint32_t)(0x2u));
  /* 1101285c call dword ptr [0x11043498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043498))), 0x11012862u);
  /* 11012862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012867 call 0x11013e20 */
  push32(0x1101286cu); f_11013e20();
  /* 1101286c mov esi, esp */
  ESI = (ESP);
  /* 1101286e push 0 */
  push32((uint32_t)(0x0u));
  /* 11012870 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012875 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012877 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x1101287du);
  /* 1101287d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012880 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012882 call 0x11013e20 */
  push32(0x11012887u); f_11013e20();
L_11012887:;
  /* 11012887 mov esi, esp */
  ESI = (ESP);
  /* 11012889 push 0xa */
  push32((uint32_t)(0xau));
  /* 1101288b call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012891u);
  /* 11012891 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012896 call 0x11013e20 */
  push32(0x1101289bu); f_11013e20();
  /* 1101289b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110128a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110128a2 je 0x110129b7 */
  if (C.zf) goto L_110129b7;
  /* 110128a8 mov esi, esp */
  ESI = (ESP);
  /* 110128aa push 6 */
  push32((uint32_t)(0x6u));
  /* 110128ac call dword ptr [0x11043468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043468))), 0x110128b2u);
  /* 110128b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110128b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110128b7 call 0x11013e20 */
  push32(0x110128bcu); f_11013e20();
  /* 110128bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110128c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110128c3 je 0x110129b7 */
  if (C.zf) goto L_110129b7;
  /* 110128c9 mov esi, esp */
  ESI = (ESP);
  /* 110128cb push 0 */
  push32((uint32_t)(0x0u));
  /* 110128cd push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 110128d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110128d4 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x110128dau);
  /* 110128da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110128dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110128df call 0x11013e20 */
  push32(0x110128e4u); f_11013e20();
  /* 110128e4 mov esi, esp */
  ESI = (ESP);
  /* 110128e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110128e8 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x110128eeu);
  /* 110128ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110128f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110128f3 call 0x11013e20 */
  push32(0x110128f8u); f_11013e20();
  /* 110128f8 mov esi, esp */
  ESI = (ESP);
  /* 110128fa push 0 */
  push32((uint32_t)(0x0u));
  /* 110128fc push 0xa */
  push32((uint32_t)(0xau));
  /* 110128fe call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012904u);
  /* 11012904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012907 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012909 call 0x11013e20 */
  push32(0x1101290eu); f_11013e20();
  /* 1101290e mov esi, esp */
  ESI = (ESP);
  /* 11012910 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012912 push 0x110404f0 */
  push32((uint32_t)(0x110404f0u));
  /* 11012917 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012919 push 0x11040558 */
  push32((uint32_t)(0x11040558u));
  /* 1101291e push 0x11040500 */
  push32((uint32_t)(0x11040500u));
  /* 11012923 push 0x11040488 */
  push32((uint32_t)(0x11040488u));
  /* 11012928 call dword ptr [0x1104346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104346c))), 0x1101292eu);
  /* 1101292e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012931 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012933 call 0x11013e20 */
  push32(0x11012938u); f_11013e20();
  /* 11012938 mov esi, esp */
  ESI = (ESP);
  /* 1101293a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101293c push 0x11040488 */
  push32((uint32_t)(0x11040488u));
  /* 11012941 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012943 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012949u);
  /* 11012949 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101294c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101294e call 0x11013e20 */
  push32(0x11012953u); f_11013e20();
  /* 11012953 mov esi, esp */
  ESI = (ESP);
  /* 11012955 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012957 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012959 push 0x110404f8 */
  push32((uint32_t)(0x110404f8u));
  /* 1101295e push 2 */
  push32((uint32_t)(0x2u));
  /* 11012960 call dword ptr [0x11043490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043490))), 0x11012966u);
  /* 11012966 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101296b call 0x11013e20 */
  push32(0x11012970u); f_11013e20();
  /* 11012970 mov esi, esp */
  ESI = (ESP);
  /* 11012972 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012974 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11012976 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101297cu);
  /* 1101297c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101297f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012981 call 0x11013e20 */
  push32(0x11012986u); f_11013e20();
  /* 11012986 mov esi, esp */
  ESI = (ESP);
  /* 11012988 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101298a push 0xc */
  push32((uint32_t)(0xcu));
  /* 1101298c call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012992u);
  /* 11012992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012995 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012997 call 0x11013e20 */
  push32(0x1101299cu); f_11013e20();
  /* 1101299c mov esi, esp */
  ESI = (ESP);
  /* 1101299e push 0 */
  push32((uint32_t)(0x0u));
  /* 110129a0 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 110129a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110129a7 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x110129adu);
  /* 110129ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110129b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110129b2 call 0x11013e20 */
  push32(0x110129b7u); f_11013e20();
L_110129b7:;
  /* 110129b7 mov esi, esp */
  ESI = (ESP);
  /* 110129b9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 110129bb call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x110129c1u);
  /* 110129c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110129c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110129c6 call 0x11013e20 */
  push32(0x110129cbu); f_11013e20();
  /* 110129cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110129d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110129d2 je 0x11012a92 */
  if (C.zf) goto L_11012a92;
  /* 110129d8 mov esi, esp */
  ESI = (ESP);
  /* 110129da push 2 */
  push32((uint32_t)(0x2u));
  /* 110129dc push 0x110404f8 */
  push32((uint32_t)(0x110404f8u));
  /* 110129e1 call dword ptr [0x1104349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104349c))), 0x110129e7u);
  /* 110129e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110129ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110129ec call 0x11013e20 */
  push32(0x110129f1u); f_11013e20();
  /* 110129f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110129f3 je 0x11012a92 */
  if (C.zf) goto L_11012a92;
  /* 110129f9 mov esi, esp */
  ESI = (ESP);
  /* 110129fb push 0 */
  push32((uint32_t)(0x0u));
  /* 110129fd push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012a04 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x11012a0au);
  /* 11012a0a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012a0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012a0f call 0x11013e20 */
  push32(0x11012a14u); f_11013e20();
  /* 11012a14 mov esi, esp */
  ESI = (ESP);
  /* 11012a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012a18 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x11012a1eu);
  /* 11012a1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012a21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012a23 call 0x11013e20 */
  push32(0x11012a28u); f_11013e20();
  /* 11012a28 mov esi, esp */
  ESI = (ESP);
  /* 11012a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11012a2c push 0x11040488 */
  push32((uint32_t)(0x11040488u));
  /* 11012a31 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012a33 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012a39u);
  /* 11012a39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012a3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012a3e call 0x11013e20 */
  push32(0x11012a43u); f_11013e20();
  /* 11012a43 mov esi, esp */
  ESI = (ESP);
  /* 11012a45 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11012a4a push 0x11040540 */
  push32((uint32_t)(0x11040540u));
  /* 11012a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 11012a51 call dword ptr [0x11043494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043494))), 0x11012a57u);
  /* 11012a57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012a5c call 0x11013e20 */
  push32(0x11012a61u); f_11013e20();
  /* 11012a61 mov esi, esp */
  ESI = (ESP);
  /* 11012a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012a65 push 0xb */
  push32((uint32_t)(0xbu));
  /* 11012a67 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012a6du);
  /* 11012a6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012a70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012a72 call 0x11013e20 */
  push32(0x11012a77u); f_11013e20();
  /* 11012a77 mov esi, esp */
  ESI = (ESP);
  /* 11012a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012a7b push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012a82 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012a88u);
  /* 11012a88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012a8d call 0x11013e20 */
  push32(0x11012a92u); f_11013e20();
L_11012a92:;
  /* 11012a92 mov esi, esp */
  ESI = (ESP);
  /* 11012a94 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11012a96 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012a9cu);
  /* 11012a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012aa1 call 0x11013e20 */
  push32(0x11012aa6u); f_11013e20();
  /* 11012aa6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012aab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012aad je 0x11012af7 */
  if (C.zf) goto L_11012af7;
  /* 11012aaf mov esi, esp */
  ESI = (ESP);
  /* 11012ab1 push 0x11040488 */
  push32((uint32_t)(0x11040488u));
  /* 11012ab6 call dword ptr [0x11043488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043488))), 0x11012abcu);
  /* 11012abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012ac1 call 0x11013e20 */
  push32(0x11012ac6u); f_11013e20();
  /* 11012ac6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012ac9 jge 0x11012af7 */
  if ((C.sf==C.of)) goto L_11012af7;
  /* 11012acb mov esi, esp */
  ESI = (ESP);
  /* 11012acd push 0 */
  push32((uint32_t)(0x0u));
  /* 11012acf push 0xc */
  push32((uint32_t)(0xcu));
  /* 11012ad1 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012ad7u);
  /* 11012ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012adc call 0x11013e20 */
  push32(0x11012ae1u); f_11013e20();
  /* 11012ae1 mov esi, esp */
  ESI = (ESP);
  /* 11012ae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012ae5 push 0xa */
  push32((uint32_t)(0xau));
  /* 11012ae7 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012aedu);
  /* 11012aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012af0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012af2 call 0x11013e20 */
  push32(0x11012af7u); f_11013e20();
L_11012af7:;
  /* 11012af7 mov esi, esp */
  ESI = (ESP);
  /* 11012af9 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11012afb call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012b01u);
  /* 11012b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012b04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012b06 call 0x11013e20 */
  push32(0x11012b0bu); f_11013e20();
  /* 11012b0b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012b10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012b12 je 0x11012c27 */
  if (C.zf) goto L_11012c27;
  /* 11012b18 mov esi, esp */
  ESI = (ESP);
  /* 11012b1a push 5 */
  push32((uint32_t)(0x5u));
  /* 11012b1c call dword ptr [0x11043468] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043468))), 0x11012b22u);
  /* 11012b22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012b25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012b27 call 0x11013e20 */
  push32(0x11012b2cu); f_11013e20();
  /* 11012b2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012b33 je 0x11012c27 */
  if (C.zf) goto L_11012c27;
  /* 11012b39 mov esi, esp */
  ESI = (ESP);
  /* 11012b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11012b3d push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012b42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012b44 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x11012b4au);
  /* 11012b4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012b4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012b4f call 0x11013e20 */
  push32(0x11012b54u); f_11013e20();
  /* 11012b54 mov esi, esp */
  ESI = (ESP);
  /* 11012b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012b58 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x11012b5eu);
  /* 11012b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012b61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012b63 call 0x11013e20 */
  push32(0x11012b68u); f_11013e20();
  /* 11012b68 mov esi, esp */
  ESI = (ESP);
  /* 11012b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11012b6c push 0xd */
  push32((uint32_t)(0xdu));
  /* 11012b6e call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012b74u);
  /* 11012b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012b79 call 0x11013e20 */
  push32(0x11012b7eu); f_11013e20();
  /* 11012b7e mov esi, esp */
  ESI = (ESP);
  /* 11012b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012b82 push 0x110404f0 */
  push32((uint32_t)(0x110404f0u));
  /* 11012b87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012b89 push 0x11040558 */
  push32((uint32_t)(0x11040558u));
  /* 11012b8e push 0x11040500 */
  push32((uint32_t)(0x11040500u));
  /* 11012b93 push 0x11040490 */
  push32((uint32_t)(0x11040490u));
  /* 11012b98 call dword ptr [0x1104346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104346c))), 0x11012b9eu);
  /* 11012b9e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012ba3 call 0x11013e20 */
  push32(0x11012ba8u); f_11013e20();
  /* 11012ba8 mov esi, esp */
  ESI = (ESP);
  /* 11012baa push 0 */
  push32((uint32_t)(0x0u));
  /* 11012bac push 0x11040490 */
  push32((uint32_t)(0x11040490u));
  /* 11012bb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012bb3 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012bb9u);
  /* 11012bb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012bbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012bbe call 0x11013e20 */
  push32(0x11012bc3u); f_11013e20();
  /* 11012bc3 mov esi, esp */
  ESI = (ESP);
  /* 11012bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012bc9 push 0x11040548 */
  push32((uint32_t)(0x11040548u));
  /* 11012bce push 2 */
  push32((uint32_t)(0x2u));
  /* 11012bd0 call dword ptr [0x11043490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043490))), 0x11012bd6u);
  /* 11012bd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012bd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012bdb call 0x11013e20 */
  push32(0x11012be0u); f_11013e20();
  /* 11012be0 mov esi, esp */
  ESI = (ESP);
  /* 11012be2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012be4 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11012be6 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012becu);
  /* 11012bec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012bf1 call 0x11013e20 */
  push32(0x11012bf6u); f_11013e20();
  /* 11012bf6 mov esi, esp */
  ESI = (ESP);
  /* 11012bf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012bfa push 0xe */
  push32((uint32_t)(0xeu));
  /* 11012bfc call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012c02u);
  /* 11012c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012c05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012c07 call 0x11013e20 */
  push32(0x11012c0cu); f_11013e20();
  /* 11012c0c mov esi, esp */
  ESI = (ESP);
  /* 11012c0e push 0 */
  push32((uint32_t)(0x0u));
  /* 11012c10 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012c17 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012c1du);
  /* 11012c1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012c20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012c22 call 0x11013e20 */
  push32(0x11012c27u); f_11013e20();
L_11012c27:;
  /* 11012c27 mov esi, esp */
  ESI = (ESP);
  /* 11012c29 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11012c2b call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012c31u);
  /* 11012c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012c34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012c36 call 0x11013e20 */
  push32(0x11012c3bu); f_11013e20();
  /* 11012c3b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012c40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012c42 je 0x11012d02 */
  if (C.zf) goto L_11012d02;
  /* 11012c48 mov esi, esp */
  ESI = (ESP);
  /* 11012c4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11012c4c push 0x11040548 */
  push32((uint32_t)(0x11040548u));
  /* 11012c51 call dword ptr [0x1104349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104349c))), 0x11012c57u);
  /* 11012c57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012c5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012c5c call 0x11013e20 */
  push32(0x11012c61u); f_11013e20();
  /* 11012c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012c63 je 0x11012d02 */
  if (C.zf) goto L_11012d02;
  /* 11012c69 mov esi, esp */
  ESI = (ESP);
  /* 11012c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11012c6d push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012c74 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x11012c7au);
  /* 11012c7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012c7f call 0x11013e20 */
  push32(0x11012c84u); f_11013e20();
  /* 11012c84 mov esi, esp */
  ESI = (ESP);
  /* 11012c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012c88 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x11012c8eu);
  /* 11012c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012c91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012c93 call 0x11013e20 */
  push32(0x11012c98u); f_11013e20();
  /* 11012c98 mov esi, esp */
  ESI = (ESP);
  /* 11012c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11012c9c push 0x11040490 */
  push32((uint32_t)(0x11040490u));
  /* 11012ca1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012ca3 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012ca9u);
  /* 11012ca9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012cae call 0x11013e20 */
  push32(0x11012cb3u); f_11013e20();
  /* 11012cb3 mov esi, esp */
  ESI = (ESP);
  /* 11012cb5 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11012cba push 0x11040550 */
  push32((uint32_t)(0x11040550u));
  /* 11012cbf push 2 */
  push32((uint32_t)(0x2u));
  /* 11012cc1 call dword ptr [0x11043494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043494))), 0x11012cc7u);
  /* 11012cc7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012ccc call 0x11013e20 */
  push32(0x11012cd1u); f_11013e20();
  /* 11012cd1 mov esi, esp */
  ESI = (ESP);
  /* 11012cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012cd5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 11012cd7 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012cddu);
  /* 11012cdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012ce0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012ce2 call 0x11013e20 */
  push32(0x11012ce7u); f_11013e20();
  /* 11012ce7 mov esi, esp */
  ESI = (ESP);
  /* 11012ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012ceb push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012cf2 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012cf8u);
  /* 11012cf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012cfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012cfd call 0x11013e20 */
  push32(0x11012d02u); f_11013e20();
L_11012d02:;
  /* 11012d02 mov esi, esp */
  ESI = (ESP);
  /* 11012d04 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11012d06 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012d0cu);
  /* 11012d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012d11 call 0x11013e20 */
  push32(0x11012d16u); f_11013e20();
  /* 11012d16 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012d1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012d1d je 0x11012d67 */
  if (C.zf) goto L_11012d67;
  /* 11012d1f mov esi, esp */
  ESI = (ESP);
  /* 11012d21 push 0x11040490 */
  push32((uint32_t)(0x11040490u));
  /* 11012d26 call dword ptr [0x11043488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043488))), 0x11012d2cu);
  /* 11012d2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012d2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012d31 call 0x11013e20 */
  push32(0x11012d36u); f_11013e20();
  /* 11012d36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012d39 jge 0x11012d67 */
  if ((C.sf==C.of)) goto L_11012d67;
  /* 11012d3b mov esi, esp */
  ESI = (ESP);
  /* 11012d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11012d3f push 0xf */
  push32((uint32_t)(0xfu));
  /* 11012d41 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012d47u);
  /* 11012d47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012d4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012d4c call 0x11013e20 */
  push32(0x11012d51u); f_11013e20();
  /* 11012d51 mov esi, esp */
  ESI = (ESP);
  /* 11012d53 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012d55 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11012d57 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012d5du);
  /* 11012d5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012d60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012d62 call 0x11013e20 */
  push32(0x11012d67u); f_11013e20();
L_11012d67:;
  /* 11012d67 mov esi, esp */
  ESI = (ESP);
  /* 11012d69 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11012d6b call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012d71u);
  /* 11012d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012d74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012d76 call 0x11013e20 */
  push32(0x11012d7bu); f_11013e20();
  /* 11012d7b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012d82 je 0x11012e80 */
  if (C.zf) goto L_11012e80;
  /* 11012d88 mov esi, esp */
  ESI = (ESP);
  /* 11012d8a push 0xd */
  push32((uint32_t)(0xdu));
  /* 11012d8c call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012d92u);
  /* 11012d92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012d97 call 0x11013e20 */
  push32(0x11012d9cu); f_11013e20();
  /* 11012d9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012da3 je 0x11012e80 */
  if (C.zf) goto L_11012e80;
  /* 11012da9 mov esi, esp */
  ESI = (ESP);
  /* 11012dab push 0x11040458 */
  push32((uint32_t)(0x11040458u));
  /* 11012db0 call dword ptr [0x11043488] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043488))), 0x11012db6u);
  /* 11012db6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012db9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012dbb call 0x11013e20 */
  push32(0x11012dc0u); f_11013e20();
  /* 11012dc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012dc2 jne 0x11012e80 */
  if (!C.zf) goto L_11012e80;
  /* 11012dc8 mov esi, esp */
  ESI = (ESP);
  /* 11012dca push 0 */
  push32((uint32_t)(0x0u));
  /* 11012dcc push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11012dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012dd3 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x11012dd9u);
  /* 11012dd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012dde call 0x11013e20 */
  push32(0x11012de3u); f_11013e20();
  /* 11012de3 mov esi, esp */
  ESI = (ESP);
  /* 11012de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012de7 push 0x11040488 */
  push32((uint32_t)(0x11040488u));
  /* 11012dec push 2 */
  push32((uint32_t)(0x2u));
  /* 11012dee call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012df4u);
  /* 11012df4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012df9 call 0x11013e20 */
  push32(0x11012dfeu); f_11013e20();
  /* 11012dfe mov esi, esp */
  ESI = (ESP);
  /* 11012e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012e02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012e04 push 0x110404f8 */
  push32((uint32_t)(0x110404f8u));
  /* 11012e09 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012e0b call dword ptr [0x11043490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043490))), 0x11012e11u);
  /* 11012e11 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012e14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012e16 call 0x11013e20 */
  push32(0x11012e1bu); f_11013e20();
  /* 11012e1b mov esi, esp */
  ESI = (ESP);
  /* 11012e1d push 1 */
  push32((uint32_t)(0x1u));
  /* 11012e1f push 0xb */
  push32((uint32_t)(0xbu));
  /* 11012e21 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012e27u);
  /* 11012e27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012e2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012e2c call 0x11013e20 */
  push32(0x11012e31u); f_11013e20();
  /* 11012e31 mov esi, esp */
  ESI = (ESP);
  /* 11012e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012e35 push 0x11040490 */
  push32((uint32_t)(0x11040490u));
  /* 11012e3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11012e3c call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11012e42u);
  /* 11012e42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012e45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012e47 call 0x11013e20 */
  push32(0x11012e4cu); f_11013e20();
  /* 11012e4c mov esi, esp */
  ESI = (ESP);
  /* 11012e4e push 0x82 */
  push32((uint32_t)(0x82u));
  /* 11012e53 push 0x11040550 */
  push32((uint32_t)(0x11040550u));
  /* 11012e58 push 2 */
  push32((uint32_t)(0x2u));
  /* 11012e5a call dword ptr [0x11043494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043494))), 0x11012e60u);
  /* 11012e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012e63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012e65 call 0x11013e20 */
  push32(0x11012e6au); f_11013e20();
  /* 11012e6a mov esi, esp */
  ESI = (ESP);
  /* 11012e6c push 1 */
  push32((uint32_t)(0x1u));
  /* 11012e6e push 0xe */
  push32((uint32_t)(0xeu));
  /* 11012e70 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012e76u);
  /* 11012e76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012e7b call 0x11013e20 */
  push32(0x11012e80u); f_11013e20();
L_11012e80:;
  /* 11012e80 mov esi, esp */
  ESI = (ESP);
  /* 11012e82 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11012e84 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012e8au);
  /* 11012e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012e8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012e8f call 0x11013e20 */
  push32(0x11012e94u); f_11013e20();
  /* 11012e94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012e9b je 0x11012f03 */
  if (C.zf) goto L_11012f03;
  /* 11012e9d mov esi, esp */
  ESI = (ESP);
  /* 11012e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11012ea1 push 0x11040408 */
  push32((uint32_t)(0x11040408u));
  /* 11012ea6 call dword ptr [0x110434a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434a4))), 0x11012eacu);
  /* 11012eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012eaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012eb1 call 0x11013e20 */
  push32(0x11012eb6u); f_11013e20();
  /* 11012eb6 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012eb9 jle 0x11012f03 */
  if ((C.zf||C.sf!=C.of)) goto L_11012f03;
  /* 11012ebb mov esi, esp */
  ESI = (ESP);
  /* 11012ebd push 0x1103b2e0 */
  push32((uint32_t)(0x1103b2e0u));
  /* 11012ec2 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11012ec8u);
  /* 11012ec8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012ecd call 0x11013e20 */
  push32(0x11012ed2u); f_11013e20();
  /* 11012ed2 mov esi, esp */
  ESI = (ESP);
  /* 11012ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012ed6 push 0x11040408 */
  push32((uint32_t)(0x11040408u));
  /* 11012edb push 0 */
  push32((uint32_t)(0x0u));
  /* 11012edd call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x11012ee3u);
  /* 11012ee3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012ee6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012ee8 call 0x11013e20 */
  push32(0x11012eedu); f_11013e20();
  /* 11012eed mov esi, esp */
  ESI = (ESP);
  /* 11012eef push 0 */
  push32((uint32_t)(0x0u));
  /* 11012ef1 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11012ef3 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012ef9u);
  /* 11012ef9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012efc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012efe call 0x11013e20 */
  push32(0x11012f03u); f_11013e20();
L_11012f03:;
  /* 11012f03 mov esi, esp */
  ESI = (ESP);
  /* 11012f05 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11012f07 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012f0du);
  /* 11012f0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012f10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012f12 call 0x11013e20 */
  push32(0x11012f17u); f_11013e20();
  /* 11012f17 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012f1e jne 0x11012f6f */
  if (!C.zf) goto L_11012f6f;
  /* 11012f20 mov esi, esp */
  ESI = (ESP);
  /* 11012f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012f24 push 0x11040408 */
  push32((uint32_t)(0x11040408u));
  /* 11012f29 call dword ptr [0x110434a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434a4))), 0x11012f2fu);
  /* 11012f2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012f34 call 0x11013e20 */
  push32(0x11012f39u); f_11013e20();
  /* 11012f39 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012f3c jge 0x11012f6f */
  if ((C.sf==C.of)) goto L_11012f6f;
  /* 11012f3e mov esi, esp */
  ESI = (ESP);
  /* 11012f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012f42 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11012f44 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11012f4au);
  /* 11012f4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012f4d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012f4f call 0x11013e20 */
  push32(0x11012f54u); f_11013e20();
  /* 11012f54 mov esi, esp */
  ESI = (ESP);
  /* 11012f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 11012f58 push 0x11040408 */
  push32((uint32_t)(0x11040408u));
  /* 11012f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 11012f5f call dword ptr [0x110434e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434e4))), 0x11012f65u);
  /* 11012f65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012f68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012f6a call 0x11013e20 */
  push32(0x11012f6fu); f_11013e20();
L_11012f6f:;
  /* 11012f6f mov esi, esp */
  ESI = (ESP);
  /* 11012f71 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11012f73 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012f79u);
  /* 11012f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012f7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012f7e call 0x11013e20 */
  push32(0x11012f83u); f_11013e20();
  /* 11012f83 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012f88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012f8a je 0x110131d1 */
  if (C.zf) goto L_110131d1;
  /* 11012f90 mov esi, esp */
  ESI = (ESP);
  /* 11012f92 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11012f94 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x11012f9au);
  /* 11012f9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012f9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012f9f call 0x11013e20 */
  push32(0x11012fa4u); f_11013e20();
  /* 11012fa4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11012fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012fab je 0x110131d1 */
  if (C.zf) goto L_110131d1;
  /* 11012fb1 mov esi, esp */
  ESI = (ESP);
  /* 11012fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11012fb5 push 0x11040508 */
  push32((uint32_t)(0x11040508u));
  /* 11012fba call dword ptr [0x1104349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104349c))), 0x11012fc0u);
  /* 11012fc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012fc5 call 0x11013e20 */
  push32(0x11012fcau); f_11013e20();
  /* 11012fca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11012fcc jle 0x110131d1 */
  if ((C.zf||C.sf!=C.of)) goto L_110131d1;
  /* 11012fd2 mov esi, esp */
  ESI = (ESP);
  /* 11012fd4 push 0x1103b2d8 */
  push32((uint32_t)(0x1103b2d8u));
  /* 11012fd9 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11012fdfu);
  /* 11012fdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012fe4 call 0x11013e20 */
  push32(0x11012fe9u); f_11013e20();
  /* 11012fe9 mov esi, esp */
  ESI = (ESP);
  /* 11012feb push 0x1103b2d0 */
  push32((uint32_t)(0x1103b2d0u));
  /* 11012ff0 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11012ff6u);
  /* 11012ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11012ff9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11012ffb call 0x11013e20 */
  push32(0x11013000u); f_11013e20();
  /* 11013000 mov esi, esp */
  ESI = (ESP);
  /* 11013002 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013004 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11013006 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101300cu);
  /* 1101300c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101300f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013011 call 0x11013e20 */
  push32(0x11013016u); f_11013e20();
  /* 11013016 mov esi, esp */
  ESI = (ESP);
  /* 11013018 push 0x1103b2b8 */
  push32((uint32_t)(0x1103b2b8u));
  /* 1101301d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101301f push 0x1103b2b0 */
  push32((uint32_t)(0x1103b2b0u));
  /* 11013024 push 9 */
  push32((uint32_t)(0x9u));
  /* 11013026 call dword ptr [0x110434a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434a8))), 0x1101302cu);
  /* 1101302c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101302f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013031 call 0x11013e20 */
  push32(0x11013036u); f_11013e20();
  /* 11013036 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11013039 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101303d je 0x11013054 */
  if (C.zf) goto L_11013054;
  /* 1101303f cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013043 je 0x110130b2 */
  if (C.zf) goto L_110130b2;
  /* 11013045 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013049 je 0x110131ba */
  if (C.zf) goto L_110131ba;
  /* 1101304f jmp 0x110131d1 */
  goto L_110131d1;
L_11013054:;
  /* 11013054 mov esi, esp */
  ESI = (ESP);
  /* 11013056 push 0x1103b2a8 */
  push32((uint32_t)(0x1103b2a8u));
  /* 1101305b call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11013061u);
  /* 11013061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013064 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013066 call 0x11013e20 */
  push32(0x1101306bu); f_11013e20();
  /* 1101306b mov esi, esp */
  ESI = (ESP);
  /* 1101306d push 1 */
  push32((uint32_t)(0x1u));
  /* 1101306f push 0 */
  push32((uint32_t)(0x0u));
  /* 11013071 call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x11013077u);
  /* 11013077 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101307a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101307c call 0x11013e20 */
  push32(0x11013081u); f_11013e20();
  /* 11013081 mov esi, esp */
  ESI = (ESP);
  /* 11013083 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11013085 push 4 */
  push32((uint32_t)(0x4u));
  /* 11013087 call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x1101308du);
  /* 1101308d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013092 call 0x11013e20 */
  push32(0x11013097u); f_11013e20();
  /* 11013097 mov esi, esp */
  ESI = (ESP);
  /* 11013099 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101309b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1101309d call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110130a3u);
  /* 110130a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110130a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110130a8 call 0x11013e20 */
  push32(0x110130adu); f_11013e20();
  /* 110130ad jmp 0x110131d1 */
  goto L_110131d1;
L_110130b2:;
  /* 110130b2 mov esi, esp */
  ESI = (ESP);
  /* 110130b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 110130b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110130b8 call dword ptr [0x110434a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434a0))), 0x110130beu);
  /* 110130be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110130c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110130c3 call 0x11013e20 */
  push32(0x110130c8u); f_11013e20();
  /* 110130c8 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110130cd jle 0x1101318a */
  if ((C.zf||C.sf!=C.of)) goto L_1101318a;
  /* 110130d3 mov esi, esp */
  ESI = (ESP);
  /* 110130d5 push 0xffffd8f0 */
  push32((uint32_t)(0xffffd8f0u));
  /* 110130da push 1 */
  push32((uint32_t)(0x1u));
  /* 110130dc push 0 */
  push32((uint32_t)(0x0u));
  /* 110130de call dword ptr [0x110434b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b0))), 0x110130e4u);
  /* 110130e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110130e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110130e9 call 0x11013e20 */
  push32(0x110130eeu); f_11013e20();
  /* 110130ee mov esi, esp */
  ESI = (ESP);
  /* 110130f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110130f2 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 110130f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110130f9 call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x110130ffu);
  /* 110130ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013102 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013104 call 0x11013e20 */
  push32(0x11013109u); f_11013e20();
  /* 11013109 mov esi, esp */
  ESI = (ESP);
  /* 1101310b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101310d push 0x11040498 */
  push32((uint32_t)(0x11040498u));
  /* 11013112 push 4 */
  push32((uint32_t)(0x4u));
  /* 11013114 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x1101311au);
  /* 1101311a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101311d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101311f call 0x11013e20 */
  push32(0x11013124u); f_11013e20();
  /* 11013124 mov esi, esp */
  ESI = (ESP);
  /* 11013126 push 3 */
  push32((uint32_t)(0x3u));
  /* 11013128 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101312a call dword ptr [0x110434b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b4))), 0x11013130u);
  /* 11013130 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013133 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013135 call 0x11013e20 */
  push32(0x1101313au); f_11013e20();
  /* 1101313a mov esi, esp */
  ESI = (ESP);
  /* 1101313c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101313e push 0 */
  push32((uint32_t)(0x0u));
  /* 11013140 push 0x110404d0 */
  push32((uint32_t)(0x110404d0u));
  /* 11013145 push 3 */
  push32((uint32_t)(0x3u));
  /* 11013147 call dword ptr [0x11043478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043478))), 0x1101314du);
  /* 1101314d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013150 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013152 call 0x11013e20 */
  push32(0x11013157u); f_11013e20();
  /* 11013157 mov esi, esp */
  ESI = (ESP);
  /* 11013159 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101315b push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11013160 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013162 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11013168u);
  /* 11013168 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101316b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101316d call 0x11013e20 */
  push32(0x11013172u); f_11013e20();
  /* 11013172 mov esi, esp */
  ESI = (ESP);
  /* 11013174 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013176 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11013178 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101317eu);
  /* 1101317e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013183 call 0x11013e20 */
  push32(0x11013188u); f_11013e20();
  /* 11013188 jmp 0x110131b8 */
  goto L_110131b8;
L_1101318a:;
  /* 1101318a mov esi, esp */
  ESI = (ESP);
  /* 1101318c push 0x1103b29c */
  push32((uint32_t)(0x1103b29cu));
  /* 11013191 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11013197u);
  /* 11013197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101319a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101319c call 0x11013e20 */
  push32(0x110131a1u); f_11013e20();
  /* 110131a1 mov esi, esp */
  ESI = (ESP);
  /* 110131a3 push 0x1103b290 */
  push32((uint32_t)(0x1103b290u));
  /* 110131a8 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x110131aeu);
  /* 110131ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110131b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110131b3 call 0x11013e20 */
  push32(0x110131b8u); f_11013e20();
L_110131b8:;
  /* 110131b8 jmp 0x110131d1 */
  goto L_110131d1;
L_110131ba:;
  /* 110131ba mov esi, esp */
  ESI = (ESP);
  /* 110131bc push 0x1103b288 */
  push32((uint32_t)(0x1103b288u));
  /* 110131c1 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x110131c7u);
  /* 110131c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110131ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110131cc call 0x11013e20 */
  push32(0x110131d1u); f_11013e20();
L_110131d1:;
  /* 110131d1 mov esi, esp */
  ESI = (ESP);
  /* 110131d3 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 110131d5 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x110131dbu);
  /* 110131db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110131de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110131e0 call 0x11013e20 */
  push32(0x110131e5u); f_11013e20();
  /* 110131e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110131ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110131ec jne 0x11013221 */
  if (!C.zf) goto L_11013221;
  /* 110131ee mov esi, esp */
  ESI = (ESP);
  /* 110131f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110131f2 push 0x11040508 */
  push32((uint32_t)(0x11040508u));
  /* 110131f7 call dword ptr [0x1104349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104349c))), 0x110131fdu);
  /* 110131fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013202 call 0x11013e20 */
  push32(0x11013207u); f_11013e20();
  /* 11013207 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11013209 jne 0x11013221 */
  if (!C.zf) goto L_11013221;
  /* 1101320b mov esi, esp */
  ESI = (ESP);
  /* 1101320d push 1 */
  push32((uint32_t)(0x1u));
  /* 1101320f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11013211 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11013217u);
  /* 11013217 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101321a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101321c call 0x11013e20 */
  push32(0x11013221u); f_11013e20();
L_11013221:;
  /* 11013221 mov esi, esp */
  ESI = (ESP);
  /* 11013223 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11013225 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x1101322bu);
  /* 1101322b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101322e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013230 call 0x11013e20 */
  push32(0x11013235u); f_11013e20();
  /* 11013235 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101323a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101323c je 0x11013455 */
  if (C.zf) goto L_11013455;
  /* 11013242 mov esi, esp */
  ESI = (ESP);
  /* 11013244 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11013246 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x1101324cu);
  /* 1101324c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101324f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013251 call 0x11013e20 */
  push32(0x11013256u); f_11013e20();
  /* 11013256 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101325b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101325d je 0x11013455 */
  if (C.zf) goto L_11013455;
  /* 11013263 mov esi, esp */
  ESI = (ESP);
  /* 11013265 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013267 push 0x11040508 */
  push32((uint32_t)(0x11040508u));
  /* 1101326c call dword ptr [0x1104349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104349c))), 0x11013272u);
  /* 11013272 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013277 call 0x11013e20 */
  push32(0x1101327cu); f_11013e20();
  /* 1101327c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101327e jle 0x11013455 */
  if ((C.zf||C.sf!=C.of)) goto L_11013455;
  /* 11013284 mov esi, esp */
  ESI = (ESP);
  /* 11013286 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013288 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1101328a call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11013290u);
  /* 11013290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013295 call 0x11013e20 */
  push32(0x1101329au); f_11013e20();
  /* 1101329a mov esi, esp */
  ESI = (ESP);
  /* 1101329c push 0x1103b270 */
  push32((uint32_t)(0x1103b270u));
  /* 110132a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110132a3 push 0x1103b268 */
  push32((uint32_t)(0x1103b268u));
  /* 110132a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 110132aa call dword ptr [0x110434a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434a8))), 0x110132b0u);
  /* 110132b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110132b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110132b5 call 0x11013e20 */
  push32(0x110132bau); f_11013e20();
  /* 110132ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110132bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110132c1 je 0x110132d8 */
  if (C.zf) goto L_110132d8;
  /* 110132c3 cmp dword ptr [ebp - 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110132c7 je 0x11013336 */
  if (C.zf) goto L_11013336;
  /* 110132c9 cmp dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110132cd je 0x1101343e */
  if (C.zf) goto L_1101343e;
  /* 110132d3 jmp 0x11013455 */
  goto L_11013455;
L_110132d8:;
  /* 110132d8 mov esi, esp */
  ESI = (ESP);
  /* 110132da push 0x1103b25c */
  push32((uint32_t)(0x1103b25cu));
  /* 110132df call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x110132e5u);
  /* 110132e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110132e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110132ea call 0x11013e20 */
  push32(0x110132efu); f_11013e20();
  /* 110132ef mov esi, esp */
  ESI = (ESP);
  /* 110132f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 110132f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110132f5 call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x110132fbu);
  /* 110132fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110132fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013300 call 0x11013e20 */
  push32(0x11013305u); f_11013e20();
  /* 11013305 mov esi, esp */
  ESI = (ESP);
  /* 11013307 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11013309 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101330b call dword ptr [0x110434dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434dc))), 0x11013311u);
  /* 11013311 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013314 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013316 call 0x11013e20 */
  push32(0x1101331bu); f_11013e20();
  /* 1101331b mov esi, esp */
  ESI = (ESP);
  /* 1101331d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101331f push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11013321 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11013327u);
  /* 11013327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101332a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101332c call 0x11013e20 */
  push32(0x11013331u); f_11013e20();
  /* 11013331 jmp 0x11013455 */
  goto L_11013455;
L_11013336:;
  /* 11013336 mov esi, esp */
  ESI = (ESP);
  /* 11013338 push 1 */
  push32((uint32_t)(0x1u));
  /* 1101333a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101333c call dword ptr [0x110434a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434a0))), 0x11013342u);
  /* 11013342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013345 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013347 call 0x11013e20 */
  push32(0x1101334cu); f_11013e20();
  /* 1101334c cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013351 jle 0x1101340e */
  if ((C.zf||C.sf!=C.of)) goto L_1101340e;
  /* 11013357 mov esi, esp */
  ESI = (ESP);
  /* 11013359 push 0xffffd8f0 */
  push32((uint32_t)(0xffffd8f0u));
  /* 1101335e push 1 */
  push32((uint32_t)(0x1u));
  /* 11013360 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013362 call dword ptr [0x110434b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b0))), 0x11013368u);
  /* 11013368 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101336b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101336d call 0x11013e20 */
  push32(0x11013372u); f_11013e20();
  /* 11013372 mov esi, esp */
  ESI = (ESP);
  /* 11013374 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013376 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 1101337b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101337d call dword ptr [0x11043464] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043464))), 0x11013383u);
  /* 11013383 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013386 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013388 call 0x11013e20 */
  push32(0x1101338du); f_11013e20();
  /* 1101338d mov esi, esp */
  ESI = (ESP);
  /* 1101338f push 0 */
  push32((uint32_t)(0x0u));
  /* 11013391 push 0x11040498 */
  push32((uint32_t)(0x11040498u));
  /* 11013396 push 4 */
  push32((uint32_t)(0x4u));
  /* 11013398 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x1101339eu);
  /* 1101339e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110133a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110133a3 call 0x11013e20 */
  push32(0x110133a8u); f_11013e20();
  /* 110133a8 mov esi, esp */
  ESI = (ESP);
  /* 110133aa push 3 */
  push32((uint32_t)(0x3u));
  /* 110133ac push 4 */
  push32((uint32_t)(0x4u));
  /* 110133ae call dword ptr [0x110434b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434b4))), 0x110133b4u);
  /* 110133b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110133b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110133b9 call 0x11013e20 */
  push32(0x110133beu); f_11013e20();
  /* 110133be mov esi, esp */
  ESI = (ESP);
  /* 110133c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110133c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110133c4 push 0x110404d0 */
  push32((uint32_t)(0x110404d0u));
  /* 110133c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 110133cb call dword ptr [0x11043478] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043478))), 0x110133d1u);
  /* 110133d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110133d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110133d6 call 0x11013e20 */
  push32(0x110133dbu); f_11013e20();
  /* 110133db mov esi, esp */
  ESI = (ESP);
  /* 110133dd push 0 */
  push32((uint32_t)(0x0u));
  /* 110133df push 0x16 */
  push32((uint32_t)(0x16u));
  /* 110133e1 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110133e7u);
  /* 110133e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110133ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110133ec call 0x11013e20 */
  push32(0x110133f1u); f_11013e20();
  /* 110133f1 mov esi, esp */
  ESI = (ESP);
  /* 110133f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110133f5 push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 110133fa push 0 */
  push32((uint32_t)(0x0u));
  /* 110133fc call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11013402u);
  /* 11013402 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013407 call 0x11013e20 */
  push32(0x1101340cu); f_11013e20();
  /* 1101340c jmp 0x1101343c */
  goto L_1101343c;
L_1101340e:;
  /* 1101340e mov esi, esp */
  ESI = (ESP);
  /* 11013410 push 0x1103b29c */
  push32((uint32_t)(0x1103b29cu));
  /* 11013415 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x1101341bu);
  /* 1101341b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101341e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013420 call 0x11013e20 */
  push32(0x11013425u); f_11013e20();
  /* 11013425 mov esi, esp */
  ESI = (ESP);
  /* 11013427 push 0x1103b290 */
  push32((uint32_t)(0x1103b290u));
  /* 1101342c call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11013432u);
  /* 11013432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013437 call 0x11013e20 */
  push32(0x1101343cu); f_11013e20();
L_1101343c:;
  /* 1101343c jmp 0x11013455 */
  goto L_11013455;
L_1101343e:;
  /* 1101343e mov esi, esp */
  ESI = (ESP);
  /* 11013440 push 0x1103b288 */
  push32((uint32_t)(0x1103b288u));
  /* 11013445 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x1101344bu);
  /* 1101344b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101344e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013450 call 0x11013e20 */
  push32(0x11013455u); f_11013e20();
L_11013455:;
  /* 11013455 mov esi, esp */
  ESI = (ESP);
  /* 11013457 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11013459 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x1101345fu);
  /* 1101345f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013462 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013464 call 0x11013e20 */
  push32(0x11013469u); f_11013e20();
  /* 11013469 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101346e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11013470 je 0x11013553 */
  if (C.zf) goto L_11013553;
  /* 11013476 mov esi, esp */
  ESI = (ESP);
  /* 11013478 push 4 */
  push32((uint32_t)(0x4u));
  /* 1101347a push 0x11040508 */
  push32((uint32_t)(0x11040508u));
  /* 1101347f call dword ptr [0x1104349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104349c))), 0x11013485u);
  /* 11013485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101348a call 0x11013e20 */
  push32(0x1101348fu); f_11013e20();
  /* 1101348f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11013491 jne 0x11013553 */
  if (!C.zf) goto L_11013553;
  /* 11013497 mov esi, esp */
  ESI = (ESP);
  /* 11013499 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101349b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1101349d call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x110134a3u);
  /* 110134a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110134a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110134a8 call 0x11013e20 */
  push32(0x110134adu); f_11013e20();
  /* 110134ad mov esi, esp */
  ESI = (ESP);
  /* 110134af push 0x1103b250 */
  push32((uint32_t)(0x1103b250u));
  /* 110134b4 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x110134bau);
  /* 110134ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110134bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110134bf call 0x11013e20 */
  push32(0x110134c4u); f_11013e20();
  /* 110134c4 mov esi, esp */
  ESI = (ESP);
  /* 110134c6 push 0x11040510 */
  push32((uint32_t)(0x11040510u));
  /* 110134cb call dword ptr [0x1104345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104345c))), 0x110134d1u);
  /* 110134d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110134d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110134d6 call 0x11013e20 */
  push32(0x110134dbu); f_11013e20();
  /* 110134db mov esi, esp */
  ESI = (ESP);
  /* 110134dd push 0x96 */
  push32((uint32_t)(0x96u));
  /* 110134e2 push 0x11040510 */
  push32((uint32_t)(0x11040510u));
  /* 110134e7 push 3 */
  push32((uint32_t)(0x3u));
  /* 110134e9 push 0x110404b0 */
  push32((uint32_t)(0x110404b0u));
  /* 110134ee push 0x11040500 */
  push32((uint32_t)(0x11040500u));
  /* 110134f3 push 0x11040478 */
  push32((uint32_t)(0x11040478u));
  /* 110134f8 call dword ptr [0x1104346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104346c))), 0x110134feu);
  /* 110134fe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013503 call 0x11013e20 */
  push32(0x11013508u); f_11013e20();
  /* 11013508 mov esi, esp */
  ESI = (ESP);
  /* 1101350a push 0x1103b1f4 */
  push32((uint32_t)(0x1103b1f4u));
  /* 1101350f push 0x1103b1fc */
  push32((uint32_t)(0x1103b1fcu));
  /* 11013514 call dword ptr [0x11043450] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043450))), 0x1101351au);
  /* 1101351a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101351d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101351f call 0x11013e20 */
  push32(0x11013524u); f_11013e20();
  /* 11013524 mov esi, esp */
  ESI = (ESP);
  /* 11013526 push 3 */
  push32((uint32_t)(0x3u));
  /* 11013528 call dword ptr [0x11043484] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043484))), 0x1101352eu);
  /* 1101352e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013531 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013533 call 0x11013e20 */
  push32(0x11013538u); f_11013e20();
  /* 11013538 mov esi, esp */
  ESI = (ESP);
  /* 1101353a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101353c push 0x11040480 */
  push32((uint32_t)(0x11040480u));
  /* 11013541 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013543 call dword ptr [0x11043474] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043474))), 0x11013549u);
  /* 11013549 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101354c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101354e call 0x11013e20 */
  push32(0x11013553u); f_11013e20();
L_11013553:;
  /* 11013553 mov esi, esp */
  ESI = (ESP);
  /* 11013555 push 8 */
  push32((uint32_t)(0x8u));
  /* 11013557 call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x1101355du);
  /* 1101355d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013560 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013562 call 0x11013e20 */
  push32(0x11013567u); f_11013e20();
  /* 11013567 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101356c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101356e je 0x110135c9 */
  if (C.zf) goto L_110135c9;
  /* 11013570 mov esi, esp */
  ESI = (ESP);
  /* 11013572 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013574 call dword ptr [0x110434ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434ac))), 0x1101357au);
  /* 1101357a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101357d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101357f call 0x11013e20 */
  push32(0x11013584u); f_11013e20();
  /* 11013584 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11013589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101358b je 0x110135c9 */
  if (C.zf) goto L_110135c9;
  /* 1101358d mov esi, esp */
  ESI = (ESP);
  /* 1101358f push 0 */
  push32((uint32_t)(0x0u));
  /* 11013591 push 8 */
  push32((uint32_t)(0x8u));
  /* 11013593 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x11013599u);
  /* 11013599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101359c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101359e call 0x11013e20 */
  push32(0x110135a3u); f_11013e20();
  /* 110135a3 mov esi, esp */
  ESI = (ESP);
  /* 110135a5 push 0x1103b244 */
  push32((uint32_t)(0x1103b244u));
  /* 110135aa call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x110135b0u);
  /* 110135b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110135b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110135b5 call 0x11013e20 */
  push32(0x110135bau); f_11013e20();
  /* 110135ba mov esi, esp */
  ESI = (ESP);
  /* 110135bc call dword ptr [0x110434bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434bc))), 0x110135c2u);
  /* 110135c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110135c4 call 0x11013e20 */
  push32(0x110135c9u); f_11013e20();
L_110135c9:;
  /* 110135c9 mov esi, esp */
  ESI = (ESP);
  /* 110135cb push 0x63 */
  push32((uint32_t)(0x63u));
  /* 110135cd call dword ptr [0x1104343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104343c))), 0x110135d3u);
  /* 110135d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110135d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110135d8 call 0x11013e20 */
  push32(0x110135ddu); f_11013e20();
  /* 110135dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110135e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110135e4 je 0x1101363f */
  if (C.zf) goto L_1101363f;
  /* 110135e6 mov esi, esp */
  ESI = (ESP);
  /* 110135e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 110135ea call dword ptr [0x110434ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434ac))), 0x110135f0u);
  /* 110135f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110135f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110135f5 call 0x11013e20 */
  push32(0x110135fau); f_11013e20();
  /* 110135fa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 110135ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11013601 je 0x1101363f */
  if (C.zf) goto L_1101363f;
  /* 11013603 mov esi, esp */
  ESI = (ESP);
  /* 11013605 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013607 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11013609 call dword ptr [0x11043444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043444))), 0x1101360fu);
  /* 1101360f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013612 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013614 call 0x11013e20 */
  push32(0x11013619u); f_11013e20();
  /* 11013619 mov esi, esp */
  ESI = (ESP);
  /* 1101361b push 0x1103b238 */
  push32((uint32_t)(0x1103b238u));
  /* 11013620 call dword ptr [0x1104344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104344c))), 0x11013626u);
  /* 11013626 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101362b call 0x11013e20 */
  push32(0x11013630u); f_11013e20();
  /* 11013630 mov esi, esp */
  ESI = (ESP);
  /* 11013632 call dword ptr [0x110434c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110434c0))), 0x11013638u);
  /* 11013638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101363a call 0x11013e20 */
  push32(0x1101363fu); f_11013e20();
L_1101363f:;
  /* 1101363f pop edi */
  EDI = (pop32());
  /* 11013640 pop esi */
  ESI = (pop32());
  /* 11013641 pop ebx */
  EBX = (pop32());
  /* 11013642 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013645 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013647 call 0x11013e20 */
  push32(0x1101364cu); f_11013e20();
  /* 1101364c mov esp, ebp */
  ESP = (EBP);
  /* 1101364e pop ebp */
  EBP = (pop32());
  /* 1101364f ret  */
  ESPCHK(0x11011b30u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11013e20 (56 bytes, 28 insns) */
void f_11013e20(void) {
  FTRACE(0x11013e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11013e20 jne 0x11013e23 */
  if (!C.zf) goto L_11013e23;
  /* 11013e22 ret  */
  ESPCHK(0x11013e20u, _esp0);
  ESP += 4; return;
L_11013e23:;
  /* 11013e23 push ebp */
  push32((uint32_t)(EBP));
  /* 11013e24 mov ebp, esp */
  EBP = (ESP);
  /* 11013e26 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11013e29 push eax */
  push32((uint32_t)(EAX));
  /* 11013e2a push edx */
  push32((uint32_t)(EDX));
  /* 11013e2b push ebx */
  push32((uint32_t)(EBX));
  /* 11013e2c push esi */
  push32((uint32_t)(ESI));
  /* 11013e2d push edi */
  push32((uint32_t)(EDI));
  /* 11013e2e push 0x1103b33c */
  push32((uint32_t)(0x1103b33cu));
  /* 11013e33 push 0x1103b338 */
  push32((uint32_t)(0x1103b338u));
  /* 11013e38 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11013e3a push 0x1103b328 */
  push32((uint32_t)(0x1103b328u));
  /* 11013e3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11013e41 call 0x110141f0 */
  push32(0x11013e46u); f_110141f0();
  /* 11013e46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013e49 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013e4c jne 0x11013e4f */
  if (!C.zf) goto L_11013e4f;
  /* 11013e4e int3  */
  x86_unimpl("int3 @ 0x11013e4e");
L_11013e4f:;
  /* 11013e4f pop edi */
  EDI = (pop32());
  /* 11013e50 pop esi */
  ESI = (pop32());
  /* 11013e51 pop ebx */
  EBX = (pop32());
  /* 11013e52 pop edx */
  EDX = (pop32());
  /* 11013e53 pop eax */
  EAX = (pop32());
  /* 11013e54 mov esp, ebp */
  ESP = (EBP);
  /* 11013e56 pop ebp */
  EBP = (pop32());
  /* 11013e57 ret  */
  ESPCHK(0x11013e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x11013e60 (313 bytes, 78 insns) */
void f_11013e60(void) {
  FTRACE(0x11013e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11013e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11013e61 mov ebp, esp */
  EBP = (ESP);
  /* 11013e63 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013e67 jne 0x11013f27 */
  if (!C.zf) goto L_11013f27;
  /* 11013e6d call dword ptr [0x11043368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043368))), 0x11013e73u);
  /* 11013e73 mov dword ptr [0x110405d0], eax */
  w32((uint32_t)(0x110405d0), (EAX));
  /* 11013e78 push 1 */
  push32((uint32_t)(0x1u));
  /* 11013e7a call 0x11017920 */
  push32(0x11013e7fu); f_11017920();
  /* 11013e7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11013e84 jne 0x11013e8d */
  if (!C.zf) goto L_11013e8d;
  /* 11013e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11013e88 jmp 0x11013f95 */
  goto L_11013f95;
L_11013e8d:;
  /* 11013e8d mov eax, dword ptr [0x110405d0] */
  EAX = (r32((uint32_t)(0x110405d0)));
  /* 11013e92 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11013e95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11013e9a mov dword ptr [0x110405dc], eax */
  w32((uint32_t)(0x110405dc), (EAX));
  /* 11013e9f mov ecx, dword ptr [0x110405d0] */
  ECX = (r32((uint32_t)(0x110405d0)));
  /* 11013ea5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11013eab mov dword ptr [0x110405d8], ecx */
  w32((uint32_t)(0x110405d8), (ECX));
  /* 11013eb1 mov edx, dword ptr [0x110405d8] */
  EDX = (r32((uint32_t)(0x110405d8)));
  /* 11013eb7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11013eba add edx, dword ptr [0x110405dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x110405dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11013ec0 mov dword ptr [0x110405d4], edx */
  w32((uint32_t)(0x110405d4), (EDX));
  /* 11013ec6 mov eax, dword ptr [0x110405d0] */
  EAX = (r32((uint32_t)(0x110405d0)));
  /* 11013ecb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11013ece and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11013ed3 mov dword ptr [0x110405d0], eax */
  w32((uint32_t)(0x110405d0), (EAX));
  /* 11013ed8 call 0x11014a90 */
  push32(0x11013eddu); f_11014a90();
  /* 11013edd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11013edf jne 0x11013eed */
  if (!C.zf) goto L_11013eed;
  /* 11013ee1 call 0x11017970 */
  push32(0x11013ee6u); f_11017970();
  /* 11013ee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11013ee8 jmp 0x11013f95 */
  goto L_11013f95;
L_11013eed:;
  /* 11013eed call dword ptr [0x11043364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043364))), 0x11013ef3u);
  /* 11013ef3 mov dword ptr [0x1104210c], eax */
  w32((uint32_t)(0x1104210c), (EAX));
  /* 11013ef8 call 0x11017700 */
  push32(0x11013efdu); f_11017700();
  /* 11013efd mov dword ptr [0x110405b8], eax */
  w32((uint32_t)(0x110405b8), (EAX));
  /* 11013f02 call 0x11014d40 */
  push32(0x11013f07u); f_11014d40();
  /* 11013f07 call 0x110171f0 */
  push32(0x11013f0cu); f_110171f0();
  /* 11013f0c call 0x110170a0 */
  push32(0x11013f11u); f_110170a0();
  /* 11013f11 call 0x11014890 */
  push32(0x11013f16u); f_11014890();
  /* 11013f16 mov ecx, dword ptr [0x110405b4] */
  ECX = (r32((uint32_t)(0x110405b4)));
  /* 11013f1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11013f1f mov dword ptr [0x110405b4], ecx */
  w32((uint32_t)(0x110405b4), (ECX));
  /* 11013f25 jmp 0x11013f90 */
  goto L_11013f90;
L_11013f27:;
  /* 11013f27 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013f2b jne 0x11013f80 */
  if (!C.zf) goto L_11013f80;
  /* 11013f2d cmp dword ptr [0x110405b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013f34 jle 0x11013f7a */
  if ((C.zf||C.sf!=C.of)) goto L_11013f7a;
  /* 11013f36 mov edx, dword ptr [0x110405b4] */
  EDX = (r32((uint32_t)(0x110405b4)));
  /* 11013f3c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11013f3f mov dword ptr [0x110405b4], edx */
  w32((uint32_t)(0x110405b4), (EDX));
  /* 11013f45 cmp dword ptr [0x11040608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013f4c jne 0x11013f53 */
  if (!C.zf) goto L_11013f53;
  /* 11013f4e call 0x11014910 */
  push32(0x11013f53u); f_11014910();
L_11013f53:;
  /* 11013f53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11013f55 call 0x11016640 */
  push32(0x11013f5au); f_11016640();
  /* 11013f5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11013f5d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11013f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11013f62 je 0x11013f69 */
  if (C.zf) goto L_11013f69;
  /* 11013f64 call 0x11016f50 */
  push32(0x11013f69u); f_11016f50();
L_11013f69:;
  /* 11013f69 call 0x11015070 */
  push32(0x11013f6eu); f_11015070();
  /* 11013f6e call 0x11014b20 */
  push32(0x11013f73u); f_11014b20();
  /* 11013f73 call 0x11017970 */
  push32(0x11013f78u); f_11017970();
  /* 11013f78 jmp 0x11013f7e */
  goto L_11013f7e;
L_11013f7a:;
  /* 11013f7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11013f7c jmp 0x11013f95 */
  goto L_11013f95;
L_11013f7e:;
  /* 11013f7e jmp 0x11013f90 */
  goto L_11013f90;
L_11013f80:;
  /* 11013f80 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013f84 jne 0x11013f90 */
  if (!C.zf) goto L_11013f90;
  /* 11013f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11013f88 call 0x11014c10 */
  push32(0x11013f8du); f_11014c10();
  /* 11013f8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11013f90:;
  /* 11013f90 mov eax, 1 */
  EAX = (0x1u);
L_11013f95:;
  /* 11013f95 pop ebp */
  EBP = (pop32());
  /* 11013f96 ret 0xc */
  ESPCHK(0x11013e60u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x11013fa0 (243 bytes, 86 insns) */
void f_11013fa0(void) {
  FTRACE(0x11013fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11013fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11013fa1 mov ebp, esp */
  EBP = (ESP);
  /* 11013fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11013fa4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11013fab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013faf jne 0x11013fc1 */
  if (!C.zf) goto L_11013fc1;
  /* 11013fb1 cmp dword ptr [0x110405b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013fb8 jne 0x11013fc1 */
  if (!C.zf) goto L_11013fc1;
  /* 11013fba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11013fbc jmp 0x1101408d */
  goto L_1101408d;
L_11013fc1:;
  /* 11013fc1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013fc5 je 0x11013fcd */
  if (C.zf) goto L_11013fcd;
  /* 11013fc7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013fcb jne 0x1101400f */
  if (!C.zf) goto L_1101400f;
L_11013fcd:;
  /* 11013fcd cmp dword ptr [0x1104211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013fd4 je 0x11013feb */
  if (C.zf) goto L_11013feb;
  /* 11013fd6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11013fd9 push eax */
  push32((uint32_t)(EAX));
  /* 11013fda mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11013fdd push ecx */
  push32((uint32_t)(ECX));
  /* 11013fde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11013fe1 push edx */
  push32((uint32_t)(EDX));
  /* 11013fe2 call dword ptr [0x1104211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104211c))), 0x11013fe8u);
  /* 11013fe8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11013feb:;
  /* 11013feb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11013fef je 0x11014005 */
  if (C.zf) goto L_11014005;
  /* 11013ff1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11013ff4 push eax */
  push32((uint32_t)(EAX));
  /* 11013ff5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11013ff8 push ecx */
  push32((uint32_t)(ECX));
  /* 11013ff9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11013ffc push edx */
  push32((uint32_t)(EDX));
  /* 11013ffd call 0x11013e60 */
  push32(0x11014002u); f_11013e60();
  /* 11014002 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11014005:;
  /* 11014005 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014009 jne 0x1101400f */
  if (!C.zf) goto L_1101400f;
  /* 1101400b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101400d jmp 0x1101408d */
  goto L_1101408d;
L_1101400f:;
  /* 1101400f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11014012 push eax */
  push32((uint32_t)(EAX));
  /* 11014013 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11014016 push ecx */
  push32((uint32_t)(ECX));
  /* 11014017 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101401a push edx */
  push32((uint32_t)(EDX));
  /* 1101401b call 0x1101100a */
  push32(0x11014020u); f_1101100a();
  /* 11014020 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11014023 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014027 jne 0x1101403e */
  if (!C.zf) goto L_1101403e;
  /* 11014029 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101402d jne 0x1101403e */
  if (!C.zf) goto L_1101403e;
  /* 1101402f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11014032 push eax */
  push32((uint32_t)(EAX));
  /* 11014033 push 0 */
  push32((uint32_t)(0x0u));
  /* 11014035 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014038 push ecx */
  push32((uint32_t)(ECX));
  /* 11014039 call 0x11013e60 */
  push32(0x1101403eu); f_11013e60();
L_1101403e:;
  /* 1101403e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014042 je 0x1101404a */
  if (C.zf) goto L_1101404a;
  /* 11014044 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014048 jne 0x1101408a */
  if (!C.zf) goto L_1101408a;
L_1101404a:;
  /* 1101404a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101404d push edx */
  push32((uint32_t)(EDX));
  /* 1101404e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11014051 push eax */
  push32((uint32_t)(EAX));
  /* 11014052 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014055 push ecx */
  push32((uint32_t)(ECX));
  /* 11014056 call 0x11013e60 */
  push32(0x1101405bu); f_11013e60();
  /* 1101405b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101405d jne 0x11014066 */
  if (!C.zf) goto L_11014066;
  /* 1101405f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11014066:;
  /* 11014066 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101406a je 0x1101408a */
  if (C.zf) goto L_1101408a;
  /* 1101406c cmp dword ptr [0x1104211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014073 je 0x1101408a */
  if (C.zf) goto L_1101408a;
  /* 11014075 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11014078 push edx */
  push32((uint32_t)(EDX));
  /* 11014079 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101407c push eax */
  push32((uint32_t)(EAX));
  /* 1101407d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014080 push ecx */
  push32((uint32_t)(ECX));
  /* 11014081 call dword ptr [0x1104211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104211c))), 0x11014087u);
  /* 11014087 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101408a:;
  /* 1101408a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1101408d:;
  /* 1101408d mov esp, ebp */
  ESP = (EBP);
  /* 1101408f pop ebp */
  EBP = (pop32());
  /* 11014090 ret 0xc */
  ESPCHK(0x11013fa0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x110140a0 (58 bytes, 18 insns) */
void f_110140a0(void) {
  FTRACE(0x110140a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110140a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110140a1 mov ebp, esp */
  EBP = (ESP);
  /* 110140a3 cmp dword ptr [0x110405c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110405c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110140aa je 0x110140be */
  if (C.zf) goto L_110140be;
  /* 110140ac cmp dword ptr [0x110405c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110140b3 jne 0x110140c3 */
  if (!C.zf) goto L_110140c3;
  /* 110140b5 cmp dword ptr [0x110405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110140bc jne 0x110140c3 */
  if (!C.zf) goto L_110140c3;
L_110140be:;
  /* 110140be call 0x11017a10 */
  push32(0x110140c3u); f_11017a10();
L_110140c3:;
  /* 110140c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110140c6 push eax */
  push32((uint32_t)(EAX));
  /* 110140c7 call 0x11017a60 */
  push32(0x110140ccu); f_11017a60();
  /* 110140cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110140cf push 0xff */
  push32((uint32_t)(0xffu));
  /* 110140d4 call dword ptr [0x1103ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1103ea30))), 0x110140dau);
  /* 110140da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110140dd pop ebp */
  EBP = (pop32());
  /* 110140de ret  */
  ESPCHK(0x110140a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x110140e0 (11 bytes, 5 insns) */
void f_110140e0(void) {
  FTRACE(0x110140e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110140e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110140e1 mov ebp, esp */
  EBP = (ESP);
  /* 110140e3 call dword ptr [0x1104336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104336c))), 0x110140e9u);
  /* 110140e9 pop ebp */
  EBP = (pop32());
  /* 110140ea ret  */
  ESPCHK(0x110140e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040f0 @ 0x110140f0 (87 bytes, 30 insns) */
void f_110140f0(void) {
  FTRACE(0x110140f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110140f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110140f1 mov ebp, esp */
  EBP = (ESP);
  /* 110140f3 push ecx */
  push32((uint32_t)(ECX));
  /* 110140f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110140f8 jl 0x11014100 */
  if ((C.sf!=C.of)) goto L_11014100;
  /* 110140fa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110140fe jl 0x11014105 */
  if ((C.sf!=C.of)) goto L_11014105;
L_11014100:;
  /* 11014100 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11014103 jmp 0x11014143 */
  goto L_11014143;
L_11014105:;
  /* 11014105 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014109 jne 0x11014117 */
  if (!C.zf) goto L_11014117;
  /* 1101410b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101410e mov eax, dword ptr [eax*4 + 0x1103ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1103ea38)));
  /* 11014115 jmp 0x11014143 */
  goto L_11014143;
L_11014117:;
  /* 11014117 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101411a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 1101411d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101411f je 0x11014126 */
  if (C.zf) goto L_11014126;
  /* 11014121 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11014124 jmp 0x11014143 */
  goto L_11014143;
L_11014126:;
  /* 11014126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014129 mov eax, dword ptr [edx*4 + 0x1103ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1103ea38)));
  /* 11014130 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11014133 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014136 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11014139 mov dword ptr [ecx*4 + 0x1103ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1103ea38), (EDX));
  /* 11014140 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11014143:;
  /* 11014143 mov esp, ebp */
  ESP = (EBP);
  /* 11014145 pop ebp */
  EBP = (pop32());
  /* 11014146 ret  */
  ESPCHK(0x110140f0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x11014150 (126 bytes, 38 insns) */
void f_11014150(void) {
  FTRACE(0x11014150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014150 push ebp */
  push32((uint32_t)(EBP));
  /* 11014151 mov ebp, esp */
  EBP = (ESP);
  /* 11014153 push ecx */
  push32((uint32_t)(ECX));
  /* 11014154 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014158 jl 0x11014160 */
  if ((C.sf!=C.of)) goto L_11014160;
  /* 1101415a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101415e jl 0x11014167 */
  if ((C.sf!=C.of)) goto L_11014167;
L_11014160:;
  /* 11014160 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11014165 jmp 0x110141ca */
  goto L_110141ca;
L_11014167:;
  /* 11014167 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101416b jne 0x11014179 */
  if (!C.zf) goto L_11014179;
  /* 1101416d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014170 mov eax, dword ptr [eax*4 + 0x1103ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1103ea44)));
  /* 11014177 jmp 0x110141ca */
  goto L_110141ca;
L_11014179:;
  /* 11014179 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101417c mov edx, dword ptr [ecx*4 + 0x1103ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103ea44)));
  /* 11014183 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11014186 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101418a jne 0x110141a0 */
  if (!C.zf) goto L_110141a0;
  /* 1101418c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1101418e call dword ptr [0x11043370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043370))), 0x11014194u);
  /* 11014194 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014197 mov dword ptr [ecx*4 + 0x1103ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1103ea44), (EAX));
  /* 1101419e jmp 0x110141c7 */
  goto L_110141c7;
L_110141a0:;
  /* 110141a0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110141a4 jne 0x110141ba */
  if (!C.zf) goto L_110141ba;
  /* 110141a6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 110141a8 call dword ptr [0x11043370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043370))), 0x110141aeu);
  /* 110141ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110141b1 mov dword ptr [edx*4 + 0x1103ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1103ea44), (EAX));
  /* 110141b8 jmp 0x110141c7 */
  goto L_110141c7;
L_110141ba:;
  /* 110141ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110141bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110141c0 mov dword ptr [eax*4 + 0x1103ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1103ea44), (ECX));
L_110141c7:;
  /* 110141c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_110141ca:;
  /* 110141ca mov esp, ebp */
  ESP = (EBP);
  /* 110141cc pop ebp */
  EBP = (pop32());
  /* 110141cd ret  */
  ESPCHK(0x11014150u, _esp0);
  ESP += 4; return;
}

/* FUN_100041d0 @ 0x110141d0 (28 bytes, 11 insns) */
void f_110141d0(void) {
  FTRACE(0x110141d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110141d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110141d1 mov ebp, esp */
  EBP = (ESP);
  /* 110141d3 push ecx */
  push32((uint32_t)(ECX));
  /* 110141d4 mov eax, dword ptr [0x11042100] */
  EAX = (r32((uint32_t)(0x11042100)));
  /* 110141d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110141dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110141df mov dword ptr [0x11042100], ecx */
  w32((uint32_t)(0x11042100), (ECX));
  /* 110141e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110141e8 mov esp, ebp */
  ESP = (EBP);
  /* 110141ea pop ebp */
  EBP = (pop32());
  /* 110141eb ret  */
  ESPCHK(0x110141d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x110141f0 (912 bytes, 248 insns) */
void f_110141f0(void) {
  FTRACE(0x110141f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110141f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110141f1 mov ebp, esp */
  EBP = (ESP);
  /* 110141f3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 110141f8 call 0x110182d0 */
  push32(0x110141fdu); f_110182d0();
  /* 110141fd push edi */
  push32((uint32_t)(EDI));
  /* 110141fe mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 11014205 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1101420a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101420c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 11014212 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11014214 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11014216 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11014217 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 1101421e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 11014223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11014225 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1101422b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1101422d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1101422f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11014230 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 11014237 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1101423c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101423e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 11014244 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11014246 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 11014248 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 11014249 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1101424c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 11014252 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014256 jl 0x1101425e */
  if ((C.sf!=C.of)) goto L_1101425e;
  /* 11014258 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101425c jl 0x11014266 */
  if ((C.sf!=C.of)) goto L_11014266;
L_1101425e:;
  /* 1101425e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11014261 jmp 0x1101457b */
  goto L_1101457b;
L_11014266:;
  /* 11014266 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101426a jne 0x11014310 */
  if (!C.zf) goto L_11014310;
  /* 11014270 push 0x1103ea34 */
  push32((uint32_t)(0x1103ea34u));
  /* 11014275 call dword ptr [0x11043388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043388))), 0x1101427bu);
  /* 1101427b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101427d jle 0x11014310 */
  if ((C.zf||C.sf!=C.of)) goto L_11014310;
  /* 11014283 cmp dword ptr [0x110405c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101428a jne 0x110142ce */
  if (!C.zf) goto L_110142ce;
  /* 1101428c push 0x1103b4e4 */
  push32((uint32_t)(0x1103b4e4u));
  /* 11014291 call dword ptr [0x11043384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043384))), 0x11014297u);
  /* 11014297 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1101429d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110142a4 je 0x110142c6 */
  if (C.zf) goto L_110142c6;
  /* 110142a6 push 0x1103b4d8 */
  push32((uint32_t)(0x1103b4d8u));
  /* 110142ab mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 110142b1 push ecx */
  push32((uint32_t)(ECX));
  /* 110142b2 call dword ptr [0x11043380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043380))), 0x110142b8u);
  /* 110142b8 mov dword ptr [0x110405c8], eax */
  w32((uint32_t)(0x110405c8), (EAX));
  /* 110142bd cmp dword ptr [0x110405c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110142c4 jne 0x110142ce */
  if (!C.zf) goto L_110142ce;
L_110142c6:;
  /* 110142c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110142c9 jmp 0x1101457b */
  goto L_1101457b;
L_110142ce:;
  /* 110142ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110142d1 push edx */
  push32((uint32_t)(EDX));
  /* 110142d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110142d5 push eax */
  push32((uint32_t)(EAX));
  /* 110142d6 push 0x1103b4a4 */
  push32((uint32_t)(0x1103b4a4u));
  /* 110142db lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 110142e1 push ecx */
  push32((uint32_t)(ECX));
  /* 110142e2 call dword ptr [0x110405c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110405c8))), 0x110142e8u);
  /* 110142e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110142eb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 110142f1 push edx */
  push32((uint32_t)(EDX));
  /* 110142f2 call dword ptr [0x1104337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104337c))), 0x110142f8u);
  /* 110142f8 push 0x1103ea34 */
  push32((uint32_t)(0x1103ea34u));
  /* 110142fd call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x11014303u);
  /* 11014303 call 0x110140e0 */
  push32(0x11014308u); f_110140e0();
  /* 11014308 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101430b jmp 0x1101457b */
  goto L_1101457b;
L_11014310:;
  /* 11014310 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014314 je 0x1101434d */
  if (C.zf) goto L_1101434d;
  /* 11014316 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1101431c push eax */
  push32((uint32_t)(EAX));
  /* 1101431d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11014320 push ecx */
  push32((uint32_t)(ECX));
  /* 11014321 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 11014326 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1101432c push edx */
  push32((uint32_t)(EDX));
  /* 1101432d call 0x110181d0 */
  push32(0x11014332u); f_110181d0();
  /* 11014332 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014335 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11014337 jge 0x1101434d */
  if ((C.sf==C.of)) goto L_1101434d;
  /* 11014339 push 0x1103b478 */
  push32((uint32_t)(0x1103b478u));
  /* 1101433e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 11014344 push eax */
  push32((uint32_t)(EAX));
  /* 11014345 call 0x110180e0 */
  push32(0x1101434au); f_110180e0();
  /* 1101434a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101434d:;
  /* 1101434d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014351 jne 0x11014385 */
  if (!C.zf) goto L_11014385;
  /* 11014353 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014357 je 0x11014365 */
  if (C.zf) goto L_11014365;
  /* 11014359 mov dword ptr [ebp - 0x3028], 0x1103b464 */
  w32((uint32_t)(EBP + -0x3028), (0x1103b464u));
  /* 11014363 jmp 0x1101436f */
  goto L_1101436f;
L_11014365:;
  /* 11014365 mov dword ptr [ebp - 0x3028], 0x1103b450 */
  w32((uint32_t)(EBP + -0x3028), (0x1103b450u));
L_1101436f:;
  /* 1101436f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 11014375 push ecx */
  push32((uint32_t)(ECX));
  /* 11014376 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1101437c push edx */
  push32((uint32_t)(EDX));
  /* 1101437d call 0x110180e0 */
  push32(0x11014382u); f_110180e0();
  /* 11014382 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014385:;
  /* 11014385 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1101438b push eax */
  push32((uint32_t)(EAX));
  /* 1101438c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 11014392 push ecx */
  push32((uint32_t)(ECX));
  /* 11014393 call 0x110180f0 */
  push32(0x11014398u); f_110180f0();
  /* 11014398 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101439b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101439f jne 0x110143da */
  if (!C.zf) goto L_110143da;
  /* 110143a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110143a4 mov eax, dword ptr [edx*4 + 0x1103ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1103ea38)));
  /* 110143ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 110143ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110143b0 je 0x110143c6 */
  if (C.zf) goto L_110143c6;
  /* 110143b2 push 0x1103b44c */
  push32((uint32_t)(0x1103b44cu));
  /* 110143b7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 110143bd push ecx */
  push32((uint32_t)(ECX));
  /* 110143be call 0x110180f0 */
  push32(0x110143c3u); f_110180f0();
  /* 110143c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110143c6:;
  /* 110143c6 push 0x1103b448 */
  push32((uint32_t)(0x1103b448u));
  /* 110143cb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 110143d1 push edx */
  push32((uint32_t)(EDX));
  /* 110143d2 call 0x110180f0 */
  push32(0x110143d7u); f_110180f0();
  /* 110143d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110143da:;
  /* 110143da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110143de je 0x11014422 */
  if (C.zf) goto L_11014422;
  /* 110143e0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 110143e6 push eax */
  push32((uint32_t)(EAX));
  /* 110143e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110143ea push ecx */
  push32((uint32_t)(ECX));
  /* 110143eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110143ee push edx */
  push32((uint32_t)(EDX));
  /* 110143ef push 0x1103b43c */
  push32((uint32_t)(0x1103b43cu));
  /* 110143f4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 110143f9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 110143ff push eax */
  push32((uint32_t)(EAX));
  /* 11014400 call 0x11017fe0 */
  push32(0x11014405u); f_11017fe0();
  /* 11014405 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101440a jge 0x11014420 */
  if ((C.sf==C.of)) goto L_11014420;
  /* 1101440c push 0x1103b478 */
  push32((uint32_t)(0x1103b478u));
  /* 11014411 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 11014417 push ecx */
  push32((uint32_t)(ECX));
  /* 11014418 call 0x110180e0 */
  push32(0x1101441du); f_110180e0();
  /* 1101441d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014420:;
  /* 11014420 jmp 0x11014438 */
  goto L_11014438;
L_11014422:;
  /* 11014422 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 11014428 push edx */
  push32((uint32_t)(EDX));
  /* 11014429 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1101442f push eax */
  push32((uint32_t)(EAX));
  /* 11014430 call 0x110180e0 */
  push32(0x11014435u); f_110180e0();
  /* 11014435 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014438:;
  /* 11014438 cmp dword ptr [0x11042100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11042100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101443f je 0x1101447c */
  if (C.zf) goto L_1101447c;
  /* 11014441 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 11014447 push ecx */
  push32((uint32_t)(ECX));
  /* 11014448 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1101444e push edx */
  push32((uint32_t)(EDX));
  /* 1101444f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014452 push eax */
  push32((uint32_t)(EAX));
  /* 11014453 call dword ptr [0x11042100] */
  call_ind((uint32_t)(r32((uint32_t)(0x11042100))), 0x11014459u);
  /* 11014459 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101445c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101445e je 0x1101447c */
  if (C.zf) goto L_1101447c;
  /* 11014460 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014464 jne 0x11014471 */
  if (!C.zf) goto L_11014471;
  /* 11014466 push 0x1103ea34 */
  push32((uint32_t)(0x1103ea34u));
  /* 1101446b call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x11014471u);
L_11014471:;
  /* 11014471 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11014477 jmp 0x1101457b */
  goto L_1101457b;
L_1101447c:;
  /* 1101447c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101447f mov edx, dword ptr [ecx*4 + 0x1103ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103ea38)));
  /* 11014486 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11014489 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101448b je 0x110144cb */
  if (C.zf) goto L_110144cb;
  /* 1101448d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014490 cmp dword ptr [eax*4 + 0x1103ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1103ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014498 je 0x110144cb */
  if (C.zf) goto L_110144cb;
  /* 1101449a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101449c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 110144a2 push ecx */
  push32((uint32_t)(ECX));
  /* 110144a3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 110144a9 push edx */
  push32((uint32_t)(EDX));
  /* 110144aa call 0x11017f60 */
  push32(0x110144afu); f_11017f60();
  /* 110144af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110144b2 push eax */
  push32((uint32_t)(EAX));
  /* 110144b3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 110144b9 push eax */
  push32((uint32_t)(EAX));
  /* 110144ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110144bd mov edx, dword ptr [ecx*4 + 0x1103ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103ea44)));
  /* 110144c4 push edx */
  push32((uint32_t)(EDX));
  /* 110144c5 call dword ptr [0x11043374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043374))), 0x110144cbu);
L_110144cb:;
  /* 110144cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110144ce mov ecx, dword ptr [eax*4 + 0x1103ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1103ea38)));
  /* 110144d5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 110144d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110144da je 0x110144e9 */
  if (C.zf) goto L_110144e9;
  /* 110144dc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 110144e2 push edx */
  push32((uint32_t)(EDX));
  /* 110144e3 call dword ptr [0x1104337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104337c))), 0x110144e9u);
L_110144e9:;
  /* 110144e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110144ec mov ecx, dword ptr [eax*4 + 0x1103ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1103ea38)));
  /* 110144f3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 110144f6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110144f8 je 0x11014568 */
  if (C.zf) goto L_11014568;
  /* 110144fa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110144fe je 0x1101451d */
  if (C.zf) goto L_1101451d;
  /* 11014500 push 0xa */
  push32((uint32_t)(0xau));
  /* 11014502 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 11014508 push edx */
  push32((uint32_t)(EDX));
  /* 11014509 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101450c push eax */
  push32((uint32_t)(EAX));
  /* 1101450d call 0x11017c70 */
  push32(0x11014512u); f_11017c70();
  /* 11014512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014515 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1101451b jmp 0x11014527 */
  goto L_11014527;
L_1101451d:;
  /* 1101451d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_11014527:;
  /* 11014527 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1101452d push ecx */
  push32((uint32_t)(ECX));
  /* 1101452e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11014531 push edx */
  push32((uint32_t)(EDX));
  /* 11014532 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 11014538 push eax */
  push32((uint32_t)(EAX));
  /* 11014539 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101453c push ecx */
  push32((uint32_t)(ECX));
  /* 1101453d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014540 push edx */
  push32((uint32_t)(EDX));
  /* 11014541 call 0x11014580 */
  push32(0x11014546u); f_11014580();
  /* 11014546 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014549 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1101454f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014553 jne 0x11014560 */
  if (!C.zf) goto L_11014560;
  /* 11014555 push 0x1103ea34 */
  push32((uint32_t)(0x1103ea34u));
  /* 1101455a call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x11014560u);
L_11014560:;
  /* 11014560 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 11014566 jmp 0x1101457b */
  goto L_1101457b;
L_11014568:;
  /* 11014568 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101456c jne 0x11014579 */
  if (!C.zf) goto L_11014579;
  /* 1101456e push 0x1103ea34 */
  push32((uint32_t)(0x1103ea34u));
  /* 11014573 call dword ptr [0x11043378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043378))), 0x11014579u);
L_11014579:;
  /* 11014579 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101457b:;
  /* 1101457b pop edi */
  EDI = (pop32());
  /* 1101457c mov esp, ebp */
  ESP = (EBP);
  /* 1101457e pop ebp */
  EBP = (pop32());
  /* 1101457f ret  */
  ESPCHK(0x110141f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004580 @ 0x11014580 (780 bytes, 197 insns) */
void f_11014580(void) {
  FTRACE(0x11014580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014580 push ebp */
  push32((uint32_t)(EBP));
  /* 11014581 mov ebp, esp */
  EBP = (ESP);
  /* 11014583 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 11014588 call 0x110182d0 */
  push32(0x1101458du); f_110182d0();
L_1101458d:;
  /* 1101458d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014591 jne 0x110145b8 */
  if (!C.zf) goto L_110145b8;
  /* 11014593 push 0x1103b634 */
  push32((uint32_t)(0x1103b634u));
  /* 11014598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101459a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1101459f push 0x1103b628 */
  push32((uint32_t)(0x1103b628u));
  /* 110145a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 110145a6 call 0x110141f0 */
  push32(0x110145abu); f_110141f0();
  /* 110145ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110145ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110145b1 jne 0x110145b8 */
  if (!C.zf) goto L_110145b8;
  /* 110145b3 call 0x110140e0 */
  push32(0x110145b8u); f_110140e0();
L_110145b8:;
  /* 110145b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110145ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110145bc jne 0x1101458d */
  if (!C.zf) goto L_1101458d;
  /* 110145be push 0x104 */
  push32((uint32_t)(0x104u));
  /* 110145c3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 110145c9 push ecx */
  push32((uint32_t)(ECX));
  /* 110145ca push 0 */
  push32((uint32_t)(0x0u));
  /* 110145cc call dword ptr [0x1104338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104338c))), 0x110145d2u);
  /* 110145d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110145d4 jne 0x110145ea */
  if (!C.zf) goto L_110145ea;
  /* 110145d6 push 0x1103b610 */
  push32((uint32_t)(0x1103b610u));
  /* 110145db lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 110145e1 push edx */
  push32((uint32_t)(EDX));
  /* 110145e2 call 0x110180e0 */
  push32(0x110145e7u); f_110180e0();
  /* 110145e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110145ea:;
  /* 110145ea lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 110145f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110145f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110145f6 push ecx */
  push32((uint32_t)(ECX));
  /* 110145f7 call 0x11017f60 */
  push32(0x110145fcu); f_11017f60();
  /* 110145fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110145ff cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014602 jbe 0x1101462d */
  if ((C.cf||C.zf)) goto L_1101462d;
  /* 11014604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014607 push edx */
  push32((uint32_t)(EDX));
  /* 11014608 call 0x11017f60 */
  push32(0x1101460du); f_11017f60();
  /* 1101460d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014610 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014613 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 11014617 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101461a push 3 */
  push32((uint32_t)(0x3u));
  /* 1101461c push 0x1103b60c */
  push32((uint32_t)(0x1103b60cu));
  /* 11014621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014624 push eax */
  push32((uint32_t)(EAX));
  /* 11014625 call 0x11018950 */
  push32(0x1101462au); f_11018950();
  /* 1101462a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101462d:;
  /* 1101462d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11014630 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 11014636 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101463d je 0x11014688 */
  if (C.zf) goto L_11014688;
  /* 1101463f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11014645 push edx */
  push32((uint32_t)(EDX));
  /* 11014646 call 0x11017f60 */
  push32(0x1101464bu); f_11017f60();
  /* 1101464b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101464e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014651 jbe 0x11014688 */
  if ((C.cf||C.zf)) goto L_11014688;
  /* 11014653 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11014659 push eax */
  push32((uint32_t)(EAX));
  /* 1101465a call 0x11017f60 */
  push32(0x1101465fu); f_11017f60();
  /* 1101465f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014662 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11014668 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1101466c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 11014672 push 3 */
  push32((uint32_t)(0x3u));
  /* 11014674 push 0x1103b60c */
  push32((uint32_t)(0x1103b60cu));
  /* 11014679 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1101467f push eax */
  push32((uint32_t)(EAX));
  /* 11014680 call 0x11018950 */
  push32(0x11014685u); f_11018950();
  /* 11014685 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014688:;
  /* 11014688 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101468c jne 0x1101469a */
  if (!C.zf) goto L_1101469a;
  /* 1101468e mov dword ptr [ebp - 0x1114], 0x1103b598 */
  w32((uint32_t)(EBP + -0x1114), (0x1103b598u));
  /* 11014698 jmp 0x110146a4 */
  goto L_110146a4;
L_1101469a:;
  /* 1101469a mov dword ptr [ebp - 0x1114], 0x1103b338 */
  w32((uint32_t)(EBP + -0x1114), (0x1103b338u));
L_110146a4:;
  /* 110146a4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110146a7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110146aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110146ac je 0x110146b9 */
  if (C.zf) goto L_110146b9;
  /* 110146ae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110146b1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 110146b7 jmp 0x110146c3 */
  goto L_110146c3;
L_110146b9:;
  /* 110146b9 mov dword ptr [ebp - 0x1118], 0x1103b338 */
  w32((uint32_t)(EBP + -0x1118), (0x1103b338u));
L_110146c3:;
  /* 110146c3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110146c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110146c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110146cb je 0x110146df */
  if (C.zf) goto L_110146df;
  /* 110146cd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110146d1 jne 0x110146df */
  if (!C.zf) goto L_110146df;
  /* 110146d3 mov dword ptr [ebp - 0x111c], 0x1103b588 */
  w32((uint32_t)(EBP + -0x111c), (0x1103b588u));
  /* 110146dd jmp 0x110146e9 */
  goto L_110146e9;
L_110146df:;
  /* 110146df mov dword ptr [ebp - 0x111c], 0x1103b338 */
  w32((uint32_t)(EBP + -0x111c), (0x1103b338u));
L_110146e9:;
  /* 110146e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110146ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110146ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110146f1 je 0x110146ff */
  if (C.zf) goto L_110146ff;
  /* 110146f3 mov dword ptr [ebp - 0x1120], 0x1103b584 */
  w32((uint32_t)(EBP + -0x1120), (0x1103b584u));
  /* 110146fd jmp 0x11014709 */
  goto L_11014709;
L_110146ff:;
  /* 110146ff mov dword ptr [ebp - 0x1120], 0x1103b338 */
  w32((uint32_t)(EBP + -0x1120), (0x1103b338u));
L_11014709:;
  /* 11014709 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101470d je 0x1101471a */
  if (C.zf) goto L_1101471a;
  /* 1101470f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11014712 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 11014718 jmp 0x11014724 */
  goto L_11014724;
L_1101471a:;
  /* 1101471a mov dword ptr [ebp - 0x1124], 0x1103b338 */
  w32((uint32_t)(EBP + -0x1124), (0x1103b338u));
L_11014724:;
  /* 11014724 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014728 je 0x11014736 */
  if (C.zf) goto L_11014736;
  /* 1101472a mov dword ptr [ebp - 0x1128], 0x1103b57c */
  w32((uint32_t)(EBP + -0x1128), (0x1103b57cu));
  /* 11014734 jmp 0x11014740 */
  goto L_11014740;
L_11014736:;
  /* 11014736 mov dword ptr [ebp - 0x1128], 0x1103b338 */
  w32((uint32_t)(EBP + -0x1128), (0x1103b338u));
L_11014740:;
  /* 11014740 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014744 je 0x11014751 */
  if (C.zf) goto L_11014751;
  /* 11014746 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11014749 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1101474f jmp 0x1101475b */
  goto L_1101475b;
L_11014751:;
  /* 11014751 mov dword ptr [ebp - 0x112c], 0x1103b338 */
  w32((uint32_t)(EBP + -0x112c), (0x1103b338u));
L_1101475b:;
  /* 1101475b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101475f je 0x1101476d */
  if (C.zf) goto L_1101476d;
  /* 11014761 mov dword ptr [ebp - 0x1130], 0x1103b574 */
  w32((uint32_t)(EBP + -0x1130), (0x1103b574u));
  /* 1101476b jmp 0x11014777 */
  goto L_11014777;
L_1101476d:;
  /* 1101476d mov dword ptr [ebp - 0x1130], 0x1103b338 */
  w32((uint32_t)(EBP + -0x1130), (0x1103b338u));
L_11014777:;
  /* 11014777 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101477e je 0x1101478e */
  if (C.zf) goto L_1101478e;
  /* 11014780 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 11014786 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1101478c jmp 0x11014798 */
  goto L_11014798;
L_1101478e:;
  /* 1101478e mov dword ptr [ebp - 0x1134], 0x1103b338 */
  w32((uint32_t)(EBP + -0x1134), (0x1103b338u));
L_11014798:;
  /* 11014798 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101479f je 0x110147ad */
  if (C.zf) goto L_110147ad;
  /* 110147a1 mov dword ptr [ebp - 0x1138], 0x1103b568 */
  w32((uint32_t)(EBP + -0x1138), (0x1103b568u));
  /* 110147ab jmp 0x110147b7 */
  goto L_110147b7;
L_110147ad:;
  /* 110147ad mov dword ptr [ebp - 0x1138], 0x1103b338 */
  w32((uint32_t)(EBP + -0x1138), (0x1103b338u));
L_110147b7:;
  /* 110147b7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 110147bd push edx */
  push32((uint32_t)(EDX));
  /* 110147be mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 110147c4 push eax */
  push32((uint32_t)(EAX));
  /* 110147c5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 110147cb push ecx */
  push32((uint32_t)(ECX));
  /* 110147cc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 110147d2 push edx */
  push32((uint32_t)(EDX));
  /* 110147d3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 110147d9 push eax */
  push32((uint32_t)(EAX));
  /* 110147da mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 110147e0 push ecx */
  push32((uint32_t)(ECX));
  /* 110147e1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 110147e7 push edx */
  push32((uint32_t)(EDX));
  /* 110147e8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 110147ee push eax */
  push32((uint32_t)(EAX));
  /* 110147ef mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 110147f5 push ecx */
  push32((uint32_t)(ECX));
  /* 110147f6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 110147fc push edx */
  push32((uint32_t)(EDX));
  /* 110147fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014800 push eax */
  push32((uint32_t)(EAX));
  /* 11014801 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014804 mov edx, dword ptr [ecx*4 + 0x1103ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103ea50)));
  /* 1101480b push edx */
  push32((uint32_t)(EDX));
  /* 1101480c push 0x1103b514 */
  push32((uint32_t)(0x1103b514u));
  /* 11014811 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11014816 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1101481c push eax */
  push32((uint32_t)(EAX));
  /* 1101481d call 0x11017fe0 */
  push32(0x11014822u); f_11017fe0();
  /* 11014822 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11014827 jge 0x1101483d */
  if ((C.sf==C.of)) goto L_1101483d;
  /* 11014829 push 0x1103b478 */
  push32((uint32_t)(0x1103b478u));
  /* 1101482e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 11014834 push ecx */
  push32((uint32_t)(ECX));
  /* 11014835 call 0x110180e0 */
  push32(0x1101483au); f_110180e0();
  /* 1101483a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101483d:;
  /* 1101483d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 11014842 push 0x1103b4f0 */
  push32((uint32_t)(0x1103b4f0u));
  /* 11014847 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1101484d push edx */
  push32((uint32_t)(EDX));
  /* 1101484e call 0x11018890 */
  push32(0x11014853u); f_11018890();
  /* 11014853 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014856 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1101485c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014863 jne 0x11014876 */
  if (!C.zf) goto L_11014876;
  /* 11014865 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11014867 call 0x110185d0 */
  push32(0x1101486cu); f_110185d0();
  /* 1101486c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101486f push 3 */
  push32((uint32_t)(0x3u));
  /* 11014871 call 0x110148f0 */
  push32(0x11014876u); f_110148f0();
L_11014876:;
  /* 11014876 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101487d jne 0x11014886 */
  if (!C.zf) goto L_11014886;
  /* 1101487f mov eax, 1 */
  EAX = (0x1u);
  /* 11014884 jmp 0x11014888 */
  goto L_11014888;
L_11014886:;
  /* 11014886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11014888:;
  /* 11014888 mov esp, ebp */
  ESP = (EBP);
  /* 1101488a pop ebp */
  EBP = (pop32());
  /* 1101488b ret  */
  ESPCHK(0x11014580u, _esp0);
  ESP += 4; return;
}

/* FUN_10004890 @ 0x11014890 (56 bytes, 15 insns) */
void f_11014890(void) {
  FTRACE(0x11014890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014890 push ebp */
  push32((uint32_t)(EBP));
  /* 11014891 mov ebp, esp */
  EBP = (ESP);
  /* 11014893 cmp dword ptr [0x110420fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110420fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101489a je 0x110148a2 */
  if (C.zf) goto L_110148a2;
  /* 1101489c call dword ptr [0x110420fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110420fc))), 0x110148a2u);
L_110148a2:;
  /* 110148a2 push 0x1103e418 */
  push32((uint32_t)(0x1103e418u));
  /* 110148a7 push 0x1103e208 */
  push32((uint32_t)(0x1103e208u));
  /* 110148ac call 0x11014a60 */
  push32(0x110148b1u); f_11014a60();
  /* 110148b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110148b4 push 0x1103e104 */
  push32((uint32_t)(0x1103e104u));
  /* 110148b9 push 0x1103e000 */
  push32((uint32_t)(0x1103e000u));
  /* 110148be call 0x11014a60 */
  push32(0x110148c3u); f_11014a60();
  /* 110148c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110148c6 pop ebp */
  EBP = (pop32());
  /* 110148c7 ret  */
  ESPCHK(0x11014890u, _esp0);
  ESP += 4; return;
}

/* FUN_100048d0 @ 0x110148d0 (21 bytes, 10 insns) */
void f_110148d0(void) {
  FTRACE(0x110148d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110148d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110148d1 mov ebp, esp */
  EBP = (ESP);
  /* 110148d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110148d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110148d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110148da push eax */
  push32((uint32_t)(EAX));
  /* 110148db call 0x11014950 */
  push32(0x110148e0u); f_11014950();
  /* 110148e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110148e3 pop ebp */
  EBP = (pop32());
  /* 110148e4 ret  */
  ESPCHK(0x110148d0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x110148f0 (21 bytes, 10 insns) */
void f_110148f0(void) {
  FTRACE(0x110148f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110148f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110148f1 mov ebp, esp */
  EBP = (ESP);
  /* 110148f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110148f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 110148f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110148fa push eax */
  push32((uint32_t)(EAX));
  /* 110148fb call 0x11014950 */
  push32(0x11014900u); f_11014950();
  /* 11014900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014903 pop ebp */
  EBP = (pop32());
  /* 11014904 ret  */
  ESPCHK(0x110148f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004910 @ 0x11014910 (19 bytes, 9 insns) */
void f_11014910(void) {
  FTRACE(0x11014910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014910 push ebp */
  push32((uint32_t)(EBP));
  /* 11014911 mov ebp, esp */
  EBP = (ESP);
  /* 11014913 push 1 */
  push32((uint32_t)(0x1u));
  /* 11014915 push 0 */
  push32((uint32_t)(0x0u));
  /* 11014917 push 0 */
  push32((uint32_t)(0x0u));
  /* 11014919 call 0x11014950 */
  push32(0x1101491eu); f_11014950();
  /* 1101491e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014921 pop ebp */
  EBP = (pop32());
  /* 11014922 ret  */
  ESPCHK(0x11014910u, _esp0);
  ESP += 4; return;
}

/* FUN_10004930 @ 0x11014930 (19 bytes, 9 insns) */
void f_11014930(void) {
  FTRACE(0x11014930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014930 push ebp */
  push32((uint32_t)(EBP));
  /* 11014931 mov ebp, esp */
  EBP = (ESP);
  /* 11014933 push 1 */
  push32((uint32_t)(0x1u));
  /* 11014935 push 1 */
  push32((uint32_t)(0x1u));
  /* 11014937 push 0 */
  push32((uint32_t)(0x0u));
  /* 11014939 call 0x11014950 */
  push32(0x1101493eu); f_11014950();
  /* 1101493e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014941 pop ebp */
  EBP = (pop32());
  /* 11014942 ret  */
  ESPCHK(0x11014930u, _esp0);
  ESP += 4; return;
}

/* FUN_10004950 @ 0x11014950 (227 bytes, 61 insns) */
void f_11014950(void) {
  FTRACE(0x11014950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014950 push ebp */
  push32((uint32_t)(EBP));
  /* 11014951 mov ebp, esp */
  EBP = (ESP);
  /* 11014953 push ecx */
  push32((uint32_t)(ECX));
  /* 11014954 call 0x11014a40 */
  push32(0x11014959u); f_11014a40();
  /* 11014959 cmp dword ptr [0x1104060c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1104060c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014960 jne 0x11014973 */
  if (!C.zf) goto L_11014973;
  /* 11014962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014965 push eax */
  push32((uint32_t)(EAX));
  /* 11014966 call dword ptr [0x11043398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043398))), 0x1101496cu);
  /* 1101496c push eax */
  push32((uint32_t)(EAX));
  /* 1101496d call dword ptr [0x11043394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043394))), 0x11014973u);
L_11014973:;
  /* 11014973 mov dword ptr [0x11040608], 1 */
  w32((uint32_t)(0x11040608), (0x1u));
  /* 1101497d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11014980 mov byte ptr [0x11040604], cl */
  w8((uint32_t)(0x11040604), (CL));
  /* 11014986 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101498a jne 0x110149d3 */
  if (!C.zf) goto L_110149d3;
  /* 1101498c cmp dword ptr [0x110420f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110420f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014993 je 0x110149c1 */
  if (C.zf) goto L_110149c1;
  /* 11014995 mov edx, dword ptr [0x110420f4] */
  EDX = (r32((uint32_t)(0x110420f4)));
  /* 1101499b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1101499e:;
  /* 1101499e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110149a1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110149a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110149a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110149aa cmp ecx, dword ptr [0x110420f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x110420f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110149b0 jb 0x110149c1 */
  if (C.cf) goto L_110149c1;
  /* 110149b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110149b5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110149b8 je 0x110149bf */
  if (C.zf) goto L_110149bf;
  /* 110149ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110149bd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x110149bfu);
L_110149bf:;
  /* 110149bf jmp 0x1101499e */
  goto L_1101499e;
L_110149c1:;
  /* 110149c1 push 0x1103e724 */
  push32((uint32_t)(0x1103e724u));
  /* 110149c6 push 0x1103e51c */
  push32((uint32_t)(0x1103e51cu));
  /* 110149cb call 0x11014a60 */
  push32(0x110149d0u); f_11014a60();
  /* 110149d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110149d3:;
  /* 110149d3 push 0x1103e92c */
  push32((uint32_t)(0x1103e92cu));
  /* 110149d8 push 0x1103e828 */
  push32((uint32_t)(0x1103e828u));
  /* 110149dd call 0x11014a60 */
  push32(0x110149e2u); f_11014a60();
  /* 110149e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110149e5 cmp dword ptr [0x11040610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110149ec jne 0x11014a0e */
  if (!C.zf) goto L_11014a0e;
  /* 110149ee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 110149f0 call 0x11016640 */
  push32(0x110149f5u); f_11016640();
  /* 110149f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110149f8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 110149fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110149fd je 0x11014a0e */
  if (C.zf) goto L_11014a0e;
  /* 110149ff mov dword ptr [0x11040610], 1 */
  w32((uint32_t)(0x11040610), (0x1u));
  /* 11014a09 call 0x11016f50 */
  push32(0x11014a0eu); f_11016f50();
L_11014a0e:;
  /* 11014a0e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014a12 je 0x11014a1b */
  if (C.zf) goto L_11014a1b;
  /* 11014a14 call 0x11014a50 */
  push32(0x11014a19u); f_11014a50();
  /* 11014a19 jmp 0x11014a2f */
  goto L_11014a2f;
L_11014a1b:;
  /* 11014a1b mov dword ptr [0x1104060c], 1 */
  w32((uint32_t)(0x1104060c), (0x1u));
  /* 11014a25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014a28 push ecx */
  push32((uint32_t)(ECX));
  /* 11014a29 call dword ptr [0x11043390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043390))), 0x11014a2fu);
L_11014a2f:;
  /* 11014a2f mov esp, ebp */
  ESP = (EBP);
  /* 11014a31 pop ebp */
  EBP = (pop32());
  /* 11014a32 ret  */
  ESPCHK(0x11014950u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x11014a40 (15 bytes, 7 insns) */
void f_11014a40(void) {
  FTRACE(0x11014a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11014a41 mov ebp, esp */
  EBP = (ESP);
  /* 11014a43 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11014a45 call 0x11018b30 */
  push32(0x11014a4au); f_11018b30();
  /* 11014a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014a4d pop ebp */
  EBP = (pop32());
  /* 11014a4e ret  */
  ESPCHK(0x11014a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a50 @ 0x11014a50 (15 bytes, 7 insns) */
void f_11014a50(void) {
  FTRACE(0x11014a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11014a51 mov ebp, esp */
  EBP = (ESP);
  /* 11014a53 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11014a55 call 0x11018bd0 */
  push32(0x11014a5au); f_11018bd0();
  /* 11014a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014a5d pop ebp */
  EBP = (pop32());
  /* 11014a5e ret  */
  ESPCHK(0x11014a50u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11014a60 (37 bytes, 16 insns) */
void f_11014a60(void) {
  FTRACE(0x11014a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11014a61 mov ebp, esp */
  EBP = (ESP);
L_11014a63:;
  /* 11014a63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014a66 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014a69 jae 0x11014a83 */
  if (!C.cf) goto L_11014a83;
  /* 11014a6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014a6e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014a71 je 0x11014a78 */
  if (C.zf) goto L_11014a78;
  /* 11014a73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014a76 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11014a78u);
L_11014a78:;
  /* 11014a78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014a7b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014a7e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11014a81 jmp 0x11014a63 */
  goto L_11014a63;
L_11014a83:;
  /* 11014a83 pop ebp */
  EBP = (pop32());
  /* 11014a84 ret  */
  ESPCHK(0x11014a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a90 @ 0x11014a90 (130 bytes, 42 insns) */
void f_11014a90(void) {
  FTRACE(0x11014a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11014a91 mov ebp, esp */
  EBP = (ESP);
  /* 11014a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11014a94 call 0x11018a50 */
  push32(0x11014a99u); f_11018a50();
  /* 11014a99 call dword ptr [0x110433a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433a4))), 0x11014a9fu);
  /* 11014a9f mov dword ptr [0x1103ea5c], eax */
  w32((uint32_t)(0x1103ea5c), (EAX));
  /* 11014aa4 cmp dword ptr [0x1103ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1103ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014aab jne 0x11014ab1 */
  if (!C.zf) goto L_11014ab1;
  /* 11014aad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11014aaf jmp 0x11014b0e */
  goto L_11014b0e;
L_11014ab1:;
  /* 11014ab1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11014ab3 push 0x1103b64c */
  push32((uint32_t)(0x1103b64cu));
  /* 11014ab8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11014aba push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11014abc push 1 */
  push32((uint32_t)(0x1u));
  /* 11014abe call 0x11015540 */
  push32(0x11014ac3u); f_11015540();
  /* 11014ac3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014ac6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11014ac9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014acd je 0x11014ae4 */
  if (C.zf) goto L_11014ae4;
  /* 11014acf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014ad2 push eax */
  push32((uint32_t)(EAX));
  /* 11014ad3 mov ecx, dword ptr [0x1103ea5c] */
  ECX = (r32((uint32_t)(0x1103ea5c)));
  /* 11014ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 11014ada call dword ptr [0x110432bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432bc))), 0x11014ae0u);
  /* 11014ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11014ae2 jne 0x11014ae8 */
  if (!C.zf) goto L_11014ae8;
L_11014ae4:;
  /* 11014ae4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11014ae6 jmp 0x11014b0e */
  goto L_11014b0e;
L_11014ae8:;
  /* 11014ae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014aeb push edx */
  push32((uint32_t)(EDX));
  /* 11014aec call 0x11014b50 */
  push32(0x11014af1u); f_11014b50();
  /* 11014af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014af4 call dword ptr [0x110432b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432b8))), 0x11014afau);
  /* 11014afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014afd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11014aff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014b02 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11014b09 mov eax, 1 */
  EAX = (0x1u);
L_11014b0e:;
  /* 11014b0e mov esp, ebp */
  ESP = (EBP);
  /* 11014b10 pop ebp */
  EBP = (pop32());
  /* 11014b11 ret  */
  ESPCHK(0x11014a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x11014b20 (41 bytes, 11 insns) */
void f_11014b20(void) {
  FTRACE(0x11014b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11014b21 mov ebp, esp */
  EBP = (ESP);
  /* 11014b23 call 0x11018a90 */
  push32(0x11014b28u); f_11018a90();
  /* 11014b28 cmp dword ptr [0x1103ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1103ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014b2f je 0x11014b47 */
  if (C.zf) goto L_11014b47;
  /* 11014b31 mov eax, dword ptr [0x1103ea5c] */
  EAX = (r32((uint32_t)(0x1103ea5c)));
  /* 11014b36 push eax */
  push32((uint32_t)(EAX));
  /* 11014b37 call dword ptr [0x110433a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433a8))), 0x11014b3du);
  /* 11014b3d mov dword ptr [0x1103ea5c], 0xffffffff */
  w32((uint32_t)(0x1103ea5c), (0xffffffffu));
L_11014b47:;
  /* 11014b47 pop ebp */
  EBP = (pop32());
  /* 11014b48 ret  */
  ESPCHK(0x11014b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x11014b50 (25 bytes, 8 insns) */
void f_11014b50(void) {
  FTRACE(0x11014b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11014b51 mov ebp, esp */
  EBP = (ESP);
  /* 11014b53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014b56 mov dword ptr [eax + 0x50], 0x1103ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1103ec00u));
  /* 11014b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014b60 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11014b67 pop ebp */
  EBP = (pop32());
  /* 11014b68 ret  */
  ESPCHK(0x11014b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b70 @ 0x11014b70 (152 bytes, 48 insns) */
void f_11014b70(void) {
  FTRACE(0x11014b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11014b71 mov ebp, esp */
  EBP = (ESP);
  /* 11014b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11014b76 call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x11014b7cu);
  /* 11014b7c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11014b7f mov eax, dword ptr [0x1103ea5c] */
  EAX = (r32((uint32_t)(0x1103ea5c)));
  /* 11014b84 push eax */
  push32((uint32_t)(EAX));
  /* 11014b85 call dword ptr [0x110433b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b0))), 0x11014b8bu);
  /* 11014b8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11014b8e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014b92 jne 0x11014bf7 */
  if (!C.zf) goto L_11014bf7;
  /* 11014b94 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11014b99 push 0x1103b64c */
  push32((uint32_t)(0x1103b64cu));
  /* 11014b9e push 2 */
  push32((uint32_t)(0x2u));
  /* 11014ba0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11014ba2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11014ba4 call 0x11015540 */
  push32(0x11014ba9u); f_11015540();
  /* 11014ba9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014bac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11014baf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014bb3 je 0x11014bed */
  if (C.zf) goto L_11014bed;
  /* 11014bb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014bb8 push ecx */
  push32((uint32_t)(ECX));
  /* 11014bb9 mov edx, dword ptr [0x1103ea5c] */
  EDX = (r32((uint32_t)(0x1103ea5c)));
  /* 11014bbf push edx */
  push32((uint32_t)(EDX));
  /* 11014bc0 call dword ptr [0x110432bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432bc))), 0x11014bc6u);
  /* 11014bc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11014bc8 je 0x11014bed */
  if (C.zf) goto L_11014bed;
  /* 11014bca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014bcd push eax */
  push32((uint32_t)(EAX));
  /* 11014bce call 0x11014b50 */
  push32(0x11014bd3u); f_11014b50();
  /* 11014bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014bd6 call dword ptr [0x110432b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432b8))), 0x11014bdcu);
  /* 11014bdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014bdf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11014be1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014be4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11014beb jmp 0x11014bf7 */
  goto L_11014bf7;
L_11014bed:;
  /* 11014bed push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11014bef call 0x110140a0 */
  push32(0x11014bf4u); f_110140a0();
  /* 11014bf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014bf7:;
  /* 11014bf7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11014bfa push eax */
  push32((uint32_t)(EAX));
  /* 11014bfb call dword ptr [0x110433ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433ac))), 0x11014c01u);
  /* 11014c01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014c04 mov esp, ebp */
  ESP = (EBP);
  /* 11014c06 pop ebp */
  EBP = (pop32());
  /* 11014c07 ret  */
  ESPCHK(0x11014b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c10 @ 0x11014c10 (263 bytes, 86 insns) */
void f_11014c10(void) {
  FTRACE(0x11014c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11014c11 mov ebp, esp */
  EBP = (ESP);
  /* 11014c13 cmp dword ptr [0x1103ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1103ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014c1a je 0x11014d15 */
  if (C.zf) goto L_11014d15;
  /* 11014c20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014c24 jne 0x11014c35 */
  if (!C.zf) goto L_11014c35;
  /* 11014c26 mov eax, dword ptr [0x1103ea5c] */
  EAX = (r32((uint32_t)(0x1103ea5c)));
  /* 11014c2b push eax */
  push32((uint32_t)(EAX));
  /* 11014c2c call dword ptr [0x110433b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b0))), 0x11014c32u);
  /* 11014c32 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11014c35:;
  /* 11014c35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014c39 je 0x11014d06 */
  if (C.zf) goto L_11014d06;
  /* 11014c3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014c42 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014c46 je 0x11014c59 */
  if (C.zf) goto L_11014c59;
  /* 11014c48 push 2 */
  push32((uint32_t)(0x2u));
  /* 11014c4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014c4d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11014c50 push eax */
  push32((uint32_t)(EAX));
  /* 11014c51 call 0x11015bc0 */
  push32(0x11014c56u); f_11015bc0();
  /* 11014c56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014c59:;
  /* 11014c59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014c5c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014c60 je 0x11014c73 */
  if (C.zf) goto L_11014c73;
  /* 11014c62 push 2 */
  push32((uint32_t)(0x2u));
  /* 11014c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014c67 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11014c6a push eax */
  push32((uint32_t)(EAX));
  /* 11014c6b call 0x11015bc0 */
  push32(0x11014c70u); f_11015bc0();
  /* 11014c70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014c73:;
  /* 11014c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014c76 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014c7a je 0x11014c8d */
  if (C.zf) goto L_11014c8d;
  /* 11014c7c push 2 */
  push32((uint32_t)(0x2u));
  /* 11014c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014c81 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11014c84 push eax */
  push32((uint32_t)(EAX));
  /* 11014c85 call 0x11015bc0 */
  push32(0x11014c8au); f_11015bc0();
  /* 11014c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014c8d:;
  /* 11014c8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014c90 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014c94 je 0x11014ca7 */
  if (C.zf) goto L_11014ca7;
  /* 11014c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 11014c98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014c9b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11014c9e push eax */
  push32((uint32_t)(EAX));
  /* 11014c9f call 0x11015bc0 */
  push32(0x11014ca4u); f_11015bc0();
  /* 11014ca4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014ca7:;
  /* 11014ca7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014caa cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014cae je 0x11014cc1 */
  if (C.zf) goto L_11014cc1;
  /* 11014cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11014cb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014cb5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11014cb8 push eax */
  push32((uint32_t)(EAX));
  /* 11014cb9 call 0x11015bc0 */
  push32(0x11014cbeu); f_11015bc0();
  /* 11014cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014cc1:;
  /* 11014cc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014cc4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014cc8 je 0x11014cdb */
  if (C.zf) goto L_11014cdb;
  /* 11014cca push 2 */
  push32((uint32_t)(0x2u));
  /* 11014ccc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014ccf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11014cd2 push eax */
  push32((uint32_t)(EAX));
  /* 11014cd3 call 0x11015bc0 */
  push32(0x11014cd8u); f_11015bc0();
  /* 11014cd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014cdb:;
  /* 11014cdb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014cde cmp dword ptr [ecx + 0x50], 0x1103ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1103ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014ce5 je 0x11014cf8 */
  if (C.zf) goto L_11014cf8;
  /* 11014ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11014ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014cec mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11014cef push eax */
  push32((uint32_t)(EAX));
  /* 11014cf0 call 0x11015bc0 */
  push32(0x11014cf5u); f_11015bc0();
  /* 11014cf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014cf8:;
  /* 11014cf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11014cfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11014cfd push ecx */
  push32((uint32_t)(ECX));
  /* 11014cfe call 0x11015bc0 */
  push32(0x11014d03u); f_11015bc0();
  /* 11014d03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014d06:;
  /* 11014d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11014d08 mov edx, dword ptr [0x1103ea5c] */
  EDX = (r32((uint32_t)(0x1103ea5c)));
  /* 11014d0e push edx */
  push32((uint32_t)(EDX));
  /* 11014d0f call dword ptr [0x110432bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432bc))), 0x11014d15u);
L_11014d15:;
  /* 11014d15 pop ebp */
  EBP = (pop32());
  /* 11014d16 ret  */
  ESPCHK(0x11014c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d20 @ 0x11014d20 (11 bytes, 5 insns) */
void f_11014d20(void) {
  FTRACE(0x11014d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014d20 push ebp */
  push32((uint32_t)(EBP));
  /* 11014d21 mov ebp, esp */
  EBP = (ESP);
  /* 11014d23 call dword ptr [0x110432b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110432b8))), 0x11014d29u);
  /* 11014d29 pop ebp */
  EBP = (pop32());
  /* 11014d2a ret  */
  ESPCHK(0x11014d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d30 @ 0x11014d30 (11 bytes, 5 insns) */
void f_11014d30(void) {
  FTRACE(0x11014d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11014d31 mov ebp, esp */
  EBP = (ESP);
  /* 11014d33 call dword ptr [0x110433b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b8))), 0x11014d39u);
  /* 11014d39 pop ebp */
  EBP = (pop32());
  /* 11014d3a ret  */
  ESPCHK(0x11014d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d40 @ 0x11014d40 (804 bytes, 236 insns) */
void f_11014d40(void) {
  FTRACE(0x11014d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11014d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11014d41 mov ebp, esp */
  EBP = (ESP);
  /* 11014d43 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11014d46 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11014d4b push 0x1103b658 */
  push32((uint32_t)(0x1103b658u));
  /* 11014d50 push 2 */
  push32((uint32_t)(0x2u));
  /* 11014d52 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11014d57 call 0x11015130 */
  push32(0x11014d5cu); f_11015130();
  /* 11014d5c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014d5f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11014d62 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014d66 jne 0x11014d72 */
  if (!C.zf) goto L_11014d72;
  /* 11014d68 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11014d6a call 0x110140a0 */
  push32(0x11014d6fu); f_110140a0();
  /* 11014d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11014d72:;
  /* 11014d72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014d75 mov dword ptr [0x11041fa0], eax */
  w32((uint32_t)(0x11041fa0), (EAX));
  /* 11014d7a mov dword ptr [0x110420dc], 0x20 */
  w32((uint32_t)(0x110420dc), (0x20u));
  /* 11014d84 jmp 0x11014d8f */
  goto L_11014d8f;
L_11014d86:;
  /* 11014d86 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014d89 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014d8c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11014d8f:;
  /* 11014d8f mov edx, dword ptr [0x11041fa0] */
  EDX = (r32((uint32_t)(0x11041fa0)));
  /* 11014d95 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014d9b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014d9e jae 0x11014dc3 */
  if (!C.cf) goto L_11014dc3;
  /* 11014da0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014da3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11014da7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014daa mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11014db0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014db3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11014db7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014dba mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11014dc1 jmp 0x11014d86 */
  goto L_11014d86;
L_11014dc3:;
  /* 11014dc3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11014dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11014dc7 call dword ptr [0x110433c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c0))), 0x11014dcdu);
  /* 11014dcd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11014dd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11014dd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11014dd8 je 0x11014f65 */
  if (C.zf) goto L_11014f65;
  /* 11014dde cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014de2 je 0x11014f65 */
  if (C.zf) goto L_11014f65;
  /* 11014de8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11014deb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11014ded mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11014df0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11014df3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014df6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11014df9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014dfc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014dff mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11014e02 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014e09 jge 0x11014e13 */
  if ((C.sf==C.of)) goto L_11014e13;
  /* 11014e0b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11014e0e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11014e11 jmp 0x11014e1a */
  goto L_11014e1a;
L_11014e13:;
  /* 11014e13 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11014e1a:;
  /* 11014e1a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11014e1d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11014e20 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11014e27 jmp 0x11014e32 */
  goto L_11014e32;
L_11014e29:;
  /* 11014e29 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11014e2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014e2f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11014e32:;
  /* 11014e32 mov ecx, dword ptr [0x110420dc] */
  ECX = (r32((uint32_t)(0x110420dc)));
  /* 11014e38 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014e3b jge 0x11014ed2 */
  if ((C.sf==C.of)) goto L_11014ed2;
  /* 11014e41 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11014e46 push 0x1103b658 */
  push32((uint32_t)(0x1103b658u));
  /* 11014e4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11014e4d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11014e52 call 0x11015130 */
  push32(0x11014e57u); f_11015130();
  /* 11014e57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11014e5a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11014e5d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014e61 jne 0x11014e6e */
  if (!C.zf) goto L_11014e6e;
  /* 11014e63 mov edx, dword ptr [0x110420dc] */
  EDX = (r32((uint32_t)(0x110420dc)));
  /* 11014e69 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11014e6c jmp 0x11014ed2 */
  goto L_11014ed2;
L_11014e6e:;
  /* 11014e6e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11014e71 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014e74 mov dword ptr [eax*4 + 0x11041fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x11041fa0), (ECX));
  /* 11014e7b mov edx, dword ptr [0x110420dc] */
  EDX = (r32((uint32_t)(0x110420dc)));
  /* 11014e81 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014e84 mov dword ptr [0x110420dc], edx */
  w32((uint32_t)(0x110420dc), (EDX));
  /* 11014e8a jmp 0x11014e95 */
  goto L_11014e95;
L_11014e8c:;
  /* 11014e8c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014e8f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014e92 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11014e95:;
  /* 11014e95 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11014e98 mov edx, dword ptr [ecx*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11041fa0)));
  /* 11014e9f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014ea5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014ea8 jae 0x11014ecd */
  if (!C.cf) goto L_11014ecd;
  /* 11014eaa mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014ead mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11014eb1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014eb4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11014eba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014ebd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11014ec1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014ec4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11014ecb jmp 0x11014e8c */
  goto L_11014e8c;
L_11014ecd:;
  /* 11014ecd jmp 0x11014e29 */
  goto L_11014e29;
L_11014ed2:;
  /* 11014ed2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11014ed9 jmp 0x11014ef6 */
  goto L_11014ef6;
L_11014edb:;
  /* 11014edb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11014ede add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014ee1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11014ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014ee7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014eea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11014eed mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11014ef0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014ef3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11014ef6:;
  /* 11014ef6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11014ef9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014efc jge 0x11014f65 */
  if ((C.sf==C.of)) goto L_11014f65;
  /* 11014efe mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11014f01 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014f04 je 0x11014f60 */
  if (C.zf) goto L_11014f60;
  /* 11014f06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014f09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11014f0c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11014f0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11014f11 je 0x11014f60 */
  if (C.zf) goto L_11014f60;
  /* 11014f13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014f16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11014f19 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11014f1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11014f1e jne 0x11014f30 */
  if (!C.zf) goto L_11014f30;
  /* 11014f20 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11014f23 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11014f25 push edx */
  push32((uint32_t)(EDX));
  /* 11014f26 call dword ptr [0x110433a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433a0))), 0x11014f2cu);
  /* 11014f2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11014f2e je 0x11014f60 */
  if (C.zf) goto L_11014f60;
L_11014f30:;
  /* 11014f30 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11014f33 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11014f36 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11014f39 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11014f3c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11014f3f mov edx, dword ptr [eax*4 + 0x11041fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 11014f46 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014f48 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11014f4b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014f4e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11014f51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11014f53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11014f55 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014f58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11014f5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11014f5d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11014f60:;
  /* 11014f60 jmp 0x11014edb */
  goto L_11014edb;
L_11014f65:;
  /* 11014f65 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11014f6c jmp 0x11014f77 */
  goto L_11014f77;
L_11014f6e:;
  /* 11014f6e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11014f71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014f74 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11014f77:;
  /* 11014f77 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014f7b jge 0x11015054 */
  if ((C.sf==C.of)) goto L_11015054;
  /* 11014f81 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11014f84 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11014f87 mov edx, dword ptr [0x11041fa0] */
  EDX = (r32((uint32_t)(0x11041fa0)));
  /* 11014f8d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014f8f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11014f92 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014f95 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014f98 jne 0x11015040 */
  if (!C.zf) goto L_11015040;
  /* 11014f9e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014fa1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11014fa5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014fa9 jne 0x11014fb4 */
  if (!C.zf) goto L_11014fb4;
  /* 11014fab mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11014fb2 jmp 0x11014fc4 */
  goto L_11014fc4;
L_11014fb4:;
  /* 11014fb4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11014fb7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11014fba neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11014fbc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11014fbe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11014fc1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11014fc4:;
  /* 11014fc4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11014fc7 push eax */
  push32((uint32_t)(EAX));
  /* 11014fc8 call dword ptr [0x11043370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043370))), 0x11014fceu);
  /* 11014fce mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11014fd1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014fd5 je 0x1101502f */
  if (C.zf) goto L_1101502f;
  /* 11014fd7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11014fda push ecx */
  push32((uint32_t)(ECX));
  /* 11014fdb call dword ptr [0x110433a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433a0))), 0x11014fe1u);
  /* 11014fe1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11014fe4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014fe8 je 0x1101502f */
  if (C.zf) goto L_1101502f;
  /* 11014fea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11014fed mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11014ff0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11014ff2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11014ff5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11014ffb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11014ffe jne 0x11015010 */
  if (!C.zf) goto L_11015010;
  /* 11015000 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11015003 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11015006 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11015008 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1101500b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1101500e jmp 0x1101502d */
  goto L_1101502d;
L_11015010:;
  /* 11015010 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11015013 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11015019 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101501c jne 0x1101502d */
  if (!C.zf) goto L_1101502d;
  /* 1101501e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11015021 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11015024 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11015027 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1101502a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1101502d:;
  /* 1101502d jmp 0x1101503e */
  goto L_1101503e;
L_1101502f:;
  /* 1101502f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11015032 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11015035 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11015038 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1101503b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1101503e:;
  /* 1101503e jmp 0x1101504f */
  goto L_1101504f;
L_11015040:;
  /* 11015040 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11015043 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11015046 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11015049 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1101504c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1101504f:;
  /* 1101504f jmp 0x11014f6e */
  goto L_11014f6e;
L_11015054:;
  /* 11015054 mov eax, dword ptr [0x110420dc] */
  EAX = (r32((uint32_t)(0x110420dc)));
  /* 11015059 push eax */
  push32((uint32_t)(EAX));
  /* 1101505a call dword ptr [0x1104339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104339c))), 0x11015060u);
  /* 11015060 mov esp, ebp */
  ESP = (EBP);
  /* 11015062 pop ebp */
  EBP = (pop32());
  /* 11015063 ret  */
  ESPCHK(0x11014d40u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11015070 (155 bytes, 45 insns) */
void f_11015070(void) {
  FTRACE(0x11015070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015070 push ebp */
  push32((uint32_t)(EBP));
  /* 11015071 mov ebp, esp */
  EBP = (ESP);
  /* 11015073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11015076 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1101507d jmp 0x11015088 */
  goto L_11015088;
L_1101507f:;
  /* 1101507f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11015082 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015085 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11015088:;
  /* 11015088 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101508c jge 0x11015107 */
  if ((C.sf==C.of)) goto L_11015107;
  /* 1101508e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11015091 cmp dword ptr [ecx*4 + 0x11041fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11041fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015099 je 0x11015102 */
  if (C.zf) goto L_11015102;
  /* 1101509b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101509e mov eax, dword ptr [edx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 110150a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110150a8 jmp 0x110150b3 */
  goto L_110150b3;
L_110150aa:;
  /* 110150aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110150ad add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110150b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110150b3:;
  /* 110150b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110150b6 mov eax, dword ptr [edx*4 + 0x11041fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11041fa0)));
  /* 110150bd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110150c2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110150c5 jae 0x110150df */
  if (!C.cf) goto L_110150df;
  /* 110150c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110150ca cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110150ce je 0x110150dd */
  if (C.zf) goto L_110150dd;
  /* 110150d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110150d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110150d6 push edx */
  push32((uint32_t)(EDX));
  /* 110150d7 call dword ptr [0x110433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c4))), 0x110150ddu);
L_110150dd:;
  /* 110150dd jmp 0x110150aa */
  goto L_110150aa;
L_110150df:;
  /* 110150df push 2 */
  push32((uint32_t)(0x2u));
  /* 110150e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110150e4 mov ecx, dword ptr [eax*4 + 0x11041fa0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11041fa0)));
  /* 110150eb push ecx */
  push32((uint32_t)(ECX));
  /* 110150ec call 0x11015bc0 */
  push32(0x110150f1u); f_11015bc0();
  /* 110150f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110150f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110150f7 mov dword ptr [edx*4 + 0x11041fa0], 0 */
  w32((uint32_t)(EDX*4 + 0x11041fa0), (0x0u));
L_11015102:;
  /* 11015102 jmp 0x1101507f */
  goto L_1101507f;
L_11015107:;
  /* 11015107 mov esp, ebp */
  ESP = (EBP);
  /* 11015109 pop ebp */
  EBP = (pop32());
  /* 1101510a ret  */
  ESPCHK(0x11015070u, _esp0);
  ESP += 4; return;
}

/* FUN_10005110 @ 0x11015110 (29 bytes, 13 insns) */
void f_11015110(void) {
  FTRACE(0x11015110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015110 push ebp */
  push32((uint32_t)(EBP));
  /* 11015111 mov ebp, esp */
  EBP = (ESP);
  /* 11015113 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015115 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015117 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015119 mov eax, dword ptr [0x110407b8] */
  EAX = (r32((uint32_t)(0x110407b8)));
  /* 1101511e push eax */
  push32((uint32_t)(EAX));
  /* 1101511f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015122 push ecx */
  push32((uint32_t)(ECX));
  /* 11015123 call 0x11015180 */
  push32(0x11015128u); f_11015180();
  /* 11015128 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101512b pop ebp */
  EBP = (pop32());
  /* 1101512c ret  */
  ESPCHK(0x11015110u, _esp0);
  ESP += 4; return;
}

/* FUN_10005130 @ 0x11015130 (35 bytes, 16 insns) */
void f_11015130(void) {
  FTRACE(0x11015130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015130 push ebp */
  push32((uint32_t)(EBP));
  /* 11015131 mov ebp, esp */
  EBP = (ESP);
  /* 11015133 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11015136 push eax */
  push32((uint32_t)(EAX));
  /* 11015137 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101513a push ecx */
  push32((uint32_t)(ECX));
  /* 1101513b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101513e push edx */
  push32((uint32_t)(EDX));
  /* 1101513f mov eax, dword ptr [0x110407b8] */
  EAX = (r32((uint32_t)(0x110407b8)));
  /* 11015144 push eax */
  push32((uint32_t)(EAX));
  /* 11015145 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015148 push ecx */
  push32((uint32_t)(ECX));
  /* 11015149 call 0x11015180 */
  push32(0x1101514eu); f_11015180();
  /* 1101514e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015151 pop ebp */
  EBP = (pop32());
  /* 11015152 ret  */
  ESPCHK(0x11015130u, _esp0);
  ESP += 4; return;
}

/* FUN_10005160 @ 0x11015160 (27 bytes, 13 insns) */
void f_11015160(void) {
  FTRACE(0x11015160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015160 push ebp */
  push32((uint32_t)(EBP));
  /* 11015161 mov ebp, esp */
  EBP = (ESP);
  /* 11015163 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015165 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015167 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101516c push eax */
  push32((uint32_t)(EAX));
  /* 1101516d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015170 push ecx */
  push32((uint32_t)(ECX));
  /* 11015171 call 0x11015180 */
  push32(0x11015176u); f_11015180();
  /* 11015176 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015179 pop ebp */
  EBP = (pop32());
  /* 1101517a ret  */
  ESPCHK(0x11015160u, _esp0);
  ESP += 4; return;
}

/* FUN_10005180 @ 0x11015180 (94 bytes, 38 insns) */
void f_11015180(void) {
  FTRACE(0x11015180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015180 push ebp */
  push32((uint32_t)(EBP));
  /* 11015181 mov ebp, esp */
  EBP = (ESP);
  /* 11015183 push ecx */
  push32((uint32_t)(ECX));
L_11015184:;
  /* 11015184 push 9 */
  push32((uint32_t)(0x9u));
  /* 11015186 call 0x11018b30 */
  push32(0x1101518bu); f_11018b30();
  /* 1101518b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101518e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11015191 push eax */
  push32((uint32_t)(EAX));
  /* 11015192 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11015195 push ecx */
  push32((uint32_t)(ECX));
  /* 11015196 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015199 push edx */
  push32((uint32_t)(EDX));
  /* 1101519a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101519d push eax */
  push32((uint32_t)(EAX));
  /* 1101519e call 0x11015200 */
  push32(0x110151a3u); f_11015200();
  /* 110151a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110151a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110151a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 110151ab call 0x11018bd0 */
  push32(0x110151b0u); f_11018bd0();
  /* 110151b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110151b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110151b7 jne 0x110151bf */
  if (!C.zf) goto L_110151bf;
  /* 110151b9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110151bd jne 0x110151c4 */
  if (!C.zf) goto L_110151c4;
L_110151bf:;
  /* 110151bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110151c2 jmp 0x110151da */
  goto L_110151da;
L_110151c4:;
  /* 110151c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110151c7 push ecx */
  push32((uint32_t)(ECX));
  /* 110151c8 call 0x11018e70 */
  push32(0x110151cdu); f_11018e70();
  /* 110151cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110151d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110151d2 jne 0x110151d8 */
  if (!C.zf) goto L_110151d8;
  /* 110151d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110151d6 jmp 0x110151da */
  goto L_110151da;
L_110151d8:;
  /* 110151d8 jmp 0x11015184 */
  goto L_11015184;
L_110151da:;
  /* 110151da mov esp, ebp */
  ESP = (EBP);
  /* 110151dc pop ebp */
  EBP = (pop32());
  /* 110151dd ret  */
  ESPCHK(0x11015180u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e0 @ 0x110151e0 (23 bytes, 11 insns) */
void f_110151e0(void) {
  FTRACE(0x110151e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110151e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110151e1 mov ebp, esp */
  EBP = (ESP);
  /* 110151e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110151e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110151e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110151e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110151ec push eax */
  push32((uint32_t)(EAX));
  /* 110151ed call 0x11015200 */
  push32(0x110151f2u); f_11015200();
  /* 110151f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110151f5 pop ebp */
  EBP = (pop32());
  /* 110151f6 ret  */
  ESPCHK(0x110151e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x11015200 (787 bytes, 254 insns) */
void f_11015200(void) {
  FTRACE(0x11015200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015200 push ebp */
  push32((uint32_t)(EBP));
  /* 11015201 mov ebp, esp */
  EBP = (ESP);
  /* 11015203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11015206 push ebx */
  push32((uint32_t)(EBX));
  /* 11015207 push esi */
  push32((uint32_t)(ESI));
  /* 11015208 push edi */
  push32((uint32_t)(EDI));
  /* 11015209 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11015210 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 11015215 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11015218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101521a je 0x1101524c */
  if (C.zf) goto L_1101524c;
L_1101521c:;
  /* 1101521c call 0x110162d0 */
  push32(0x11015221u); f_110162d0();
  /* 11015221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015223 jne 0x11015246 */
  if (!C.zf) goto L_11015246;
  /* 11015225 push 0x1103b74c */
  push32((uint32_t)(0x1103b74cu));
  /* 1101522a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101522c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11015231 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015236 push 2 */
  push32((uint32_t)(0x2u));
  /* 11015238 call 0x110141f0 */
  push32(0x1101523du); f_110141f0();
  /* 1101523d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015240 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015243 jne 0x11015246 */
  if (!C.zf) goto L_11015246;
  /* 11015245 int3  */
  x86_unimpl("int3 @ 0x11015245");
L_11015246:;
  /* 11015246 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015248 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101524a jne 0x1101521c */
  if (!C.zf) goto L_1101521c;
L_1101524c:;
  /* 1101524c mov edx, dword ptr [0x1103ea88] */
  EDX = (r32((uint32_t)(0x1103ea88)));
  /* 11015252 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11015255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11015258 cmp eax, dword ptr [0x1103ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101525e jne 0x11015261 */
  if (!C.zf) goto L_11015261;
  /* 11015260 int3  */
  x86_unimpl("int3 @ 0x11015260");
L_11015261:;
  /* 11015261 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11015264 push ecx */
  push32((uint32_t)(ECX));
  /* 11015265 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015268 push edx */
  push32((uint32_t)(EDX));
  /* 11015269 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101526c push eax */
  push32((uint32_t)(EAX));
  /* 1101526d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015270 push ecx */
  push32((uint32_t)(ECX));
  /* 11015271 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015274 push edx */
  push32((uint32_t)(EDX));
  /* 11015275 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015277 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015279 call dword ptr [0x1103ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1103ec90))), 0x1101527fu);
  /* 1101527f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015284 jne 0x110152e4 */
  if (!C.zf) goto L_110152e4;
  /* 11015286 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101528a je 0x110152b7 */
  if (C.zf) goto L_110152b7;
L_1101528c:;
  /* 1101528c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101528f push eax */
  push32((uint32_t)(EAX));
  /* 11015290 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015293 push ecx */
  push32((uint32_t)(ECX));
  /* 11015294 push 0x1103b708 */
  push32((uint32_t)(0x1103b708u));
  /* 11015299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101529b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101529d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101529f push 0 */
  push32((uint32_t)(0x0u));
  /* 110152a1 call 0x110141f0 */
  push32(0x110152a6u); f_110141f0();
  /* 110152a6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110152a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110152ac jne 0x110152af */
  if (!C.zf) goto L_110152af;
  /* 110152ae int3  */
  x86_unimpl("int3 @ 0x110152ae");
L_110152af:;
  /* 110152af xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110152b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110152b3 jne 0x1101528c */
  if (!C.zf) goto L_1101528c;
  /* 110152b5 jmp 0x110152dd */
  goto L_110152dd;
L_110152b7:;
  /* 110152b7 push 0x1103b6e4 */
  push32((uint32_t)(0x1103b6e4u));
  /* 110152bc push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 110152c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110152c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110152c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110152c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110152c9 call 0x110141f0 */
  push32(0x110152ceu); f_110141f0();
  /* 110152ce add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110152d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110152d4 jne 0x110152d7 */
  if (!C.zf) goto L_110152d7;
  /* 110152d6 int3  */
  x86_unimpl("int3 @ 0x110152d6");
L_110152d7:;
  /* 110152d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110152d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110152db jne 0x110152b7 */
  if (!C.zf) goto L_110152b7;
L_110152dd:;
  /* 110152dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110152df jmp 0x1101550c */
  goto L_1101550c;
L_110152e4:;
  /* 110152e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110152e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 110152ed cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110152f0 je 0x11015306 */
  if (C.zf) goto L_11015306;
  /* 110152f2 mov edx, dword ptr [0x1103ea84] */
  EDX = (r32((uint32_t)(0x1103ea84)));
  /* 110152f8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 110152fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110152fd jne 0x11015306 */
  if (!C.zf) goto L_11015306;
  /* 110152ff mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11015306:;
  /* 11015306 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101530a ja 0x11015317 */
  if ((!C.cf&&!C.zf)) goto L_11015317;
  /* 1101530c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101530f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015312 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015315 jbe 0x11015343 */
  if ((C.cf||C.zf)) goto L_11015343;
L_11015317:;
  /* 11015317 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101531a push ecx */
  push32((uint32_t)(ECX));
  /* 1101531b push 0x1103b6bc */
  push32((uint32_t)(0x1103b6bcu));
  /* 11015320 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015322 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015324 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015326 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015328 call 0x110141f0 */
  push32(0x1101532du); f_110141f0();
  /* 1101532d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015330 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015333 jne 0x11015336 */
  if (!C.zf) goto L_11015336;
  /* 11015335 int3  */
  x86_unimpl("int3 @ 0x11015335");
L_11015336:;
  /* 11015336 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11015338 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101533a jne 0x11015317 */
  if (!C.zf) goto L_11015317;
  /* 1101533c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101533e jmp 0x1101550c */
  goto L_1101550c;
L_11015343:;
  /* 11015343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015346 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101534b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101534e je 0x11015390 */
  if (C.zf) goto L_11015390;
  /* 11015350 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015354 je 0x11015390 */
  if (C.zf) goto L_11015390;
  /* 11015356 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015359 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101535f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015362 je 0x11015390 */
  if (C.zf) goto L_11015390;
  /* 11015364 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015368 je 0x11015390 */
  if (C.zf) goto L_11015390;
L_1101536a:;
  /* 1101536a push 0x1103b688 */
  push32((uint32_t)(0x1103b688u));
  /* 1101536f push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11015374 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015376 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101537a push 1 */
  push32((uint32_t)(0x1u));
  /* 1101537c call 0x110141f0 */
  push32(0x11015381u); f_110141f0();
  /* 11015381 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015384 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015387 jne 0x1101538a */
  if (!C.zf) goto L_1101538a;
  /* 11015389 int3  */
  x86_unimpl("int3 @ 0x11015389");
L_1101538a:;
  /* 1101538a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101538c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101538e jne 0x1101536a */
  if (!C.zf) goto L_1101536a;
L_11015390:;
  /* 11015390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015393 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015396 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11015399 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101539c push ecx */
  push32((uint32_t)(ECX));
  /* 1101539d call 0x11018f80 */
  push32(0x110153a2u); f_11018f80();
  /* 110153a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110153a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110153a8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110153ac jne 0x110153b5 */
  if (!C.zf) goto L_110153b5;
  /* 110153ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110153b0 jmp 0x1101550c */
  goto L_1101550c;
L_110153b5:;
  /* 110153b5 mov edx, dword ptr [0x1103ea88] */
  EDX = (r32((uint32_t)(0x1103ea88)));
  /* 110153bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110153be mov dword ptr [0x1103ea88], edx */
  w32((uint32_t)(0x1103ea88), (EDX));
  /* 110153c4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110153c8 je 0x11015413 */
  if (C.zf) goto L_11015413;
  /* 110153ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110153cd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 110153d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110153d6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 110153dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110153e0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 110153e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110153ea mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 110153f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110153f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110153f7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 110153fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110153fd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11015404 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015407 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1101540e jmp 0x110154b3 */
  goto L_110154b3;
L_11015413:;
  /* 11015413 mov edx, dword ptr [0x11040618] */
  EDX = (r32((uint32_t)(0x11040618)));
  /* 11015419 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101541c mov dword ptr [0x11040618], edx */
  w32((uint32_t)(0x11040618), (EDX));
  /* 11015422 mov eax, dword ptr [0x11040620] */
  EAX = (r32((uint32_t)(0x11040620)));
  /* 11015427 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101542a mov dword ptr [0x11040620], eax */
  w32((uint32_t)(0x11040620), (EAX));
  /* 1101542f mov ecx, dword ptr [0x11040620] */
  ECX = (r32((uint32_t)(0x11040620)));
  /* 11015435 cmp ecx, dword ptr [0x11040624] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11040624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101543b jbe 0x11015449 */
  if ((C.cf||C.zf)) goto L_11015449;
  /* 1101543d mov edx, dword ptr [0x11040620] */
  EDX = (r32((uint32_t)(0x11040620)));
  /* 11015443 mov dword ptr [0x11040624], edx */
  w32((uint32_t)(0x11040624), (EDX));
L_11015449:;
  /* 11015449 cmp dword ptr [0x1104061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015450 je 0x1101545f */
  if (C.zf) goto L_1101545f;
  /* 11015452 mov eax, dword ptr [0x1104061c] */
  EAX = (r32((uint32_t)(0x1104061c)));
  /* 11015457 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101545a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1101545d jmp 0x11015468 */
  goto L_11015468;
L_1101545f:;
  /* 1101545f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015462 mov dword ptr [0x11040614], edx */
  w32((uint32_t)(0x11040614), (EDX));
L_11015468:;
  /* 11015468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101546b mov ecx, dword ptr [0x1104061c] */
  ECX = (r32((uint32_t)(0x1104061c)));
  /* 11015471 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11015473 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015476 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1101547d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015480 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015483 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11015486 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015489 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101548c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1101548f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015492 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015495 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11015498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101549b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101549e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 110154a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110154a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110154a7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 110154aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110154ad mov dword ptr [0x1104061c], ecx */
  w32((uint32_t)(0x1104061c), (ECX));
L_110154b3:;
  /* 110154b3 push 4 */
  push32((uint32_t)(0x4u));
  /* 110154b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110154b7 mov dl, byte ptr [0x1103ea90] */
  DL = (r8((uint32_t)(0x1103ea90)));
  /* 110154bd push edx */
  push32((uint32_t)(EDX));
  /* 110154be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110154c1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110154c4 push eax */
  push32((uint32_t)(EAX));
  /* 110154c5 call 0x11018ea0 */
  push32(0x110154cau); f_11018ea0();
  /* 110154ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110154cd push 4 */
  push32((uint32_t)(0x4u));
  /* 110154cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110154d1 mov cl, byte ptr [0x1103ea90] */
  CL = (r8((uint32_t)(0x1103ea90)));
  /* 110154d7 push ecx */
  push32((uint32_t)(ECX));
  /* 110154d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110154db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110154de lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 110154e2 push ecx */
  push32((uint32_t)(ECX));
  /* 110154e3 call 0x11018ea0 */
  push32(0x110154e8u); f_11018ea0();
  /* 110154e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110154eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110154ee push edx */
  push32((uint32_t)(EDX));
  /* 110154ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110154f1 mov al, byte ptr [0x1103ea92] */
  AL = (r8((uint32_t)(0x1103ea92)));
  /* 110154f6 push eax */
  push32((uint32_t)(EAX));
  /* 110154f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110154fa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110154fd push ecx */
  push32((uint32_t)(ECX));
  /* 110154fe call 0x11018ea0 */
  push32(0x11015503u); f_11018ea0();
  /* 11015503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015509 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1101550c:;
  /* 1101550c pop edi */
  EDI = (pop32());
  /* 1101550d pop esi */
  ESI = (pop32());
  /* 1101550e pop ebx */
  EBX = (pop32());
  /* 1101550f mov esp, ebp */
  ESP = (EBP);
  /* 11015511 pop ebp */
  EBP = (pop32());
  /* 11015512 ret  */
  ESPCHK(0x11015200u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x11015520 (27 bytes, 13 insns) */
void f_11015520(void) {
  FTRACE(0x11015520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015520 push ebp */
  push32((uint32_t)(EBP));
  /* 11015521 mov ebp, esp */
  EBP = (ESP);
  /* 11015523 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015525 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015527 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015529 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101552c push eax */
  push32((uint32_t)(EAX));
  /* 1101552d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015530 push ecx */
  push32((uint32_t)(ECX));
  /* 11015531 call 0x11015540 */
  push32(0x11015536u); f_11015540();
  /* 11015536 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015539 pop ebp */
  EBP = (pop32());
  /* 1101553a ret  */
  ESPCHK(0x11015520u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11015540 (96 bytes, 37 insns) */
void f_11015540(void) {
  FTRACE(0x11015540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015540 push ebp */
  push32((uint32_t)(EBP));
  /* 11015541 mov ebp, esp */
  EBP = (ESP);
  /* 11015543 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11015546 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015549 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101554d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11015550 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11015553 push ecx */
  push32((uint32_t)(ECX));
  /* 11015554 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11015557 push edx */
  push32((uint32_t)(EDX));
  /* 11015558 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101555b push eax */
  push32((uint32_t)(EAX));
  /* 1101555c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101555f push ecx */
  push32((uint32_t)(ECX));
  /* 11015560 call 0x11015130 */
  push32(0x11015565u); f_11015130();
  /* 11015565 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015568 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101556b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101556f je 0x11015599 */
  if (C.zf) goto L_11015599;
  /* 11015571 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11015574 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11015577 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101557a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101557d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11015580:;
  /* 11015580 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015583 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015586 jae 0x11015599 */
  if (!C.cf) goto L_11015599;
  /* 11015588 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101558b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1101558e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015591 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015594 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11015597 jmp 0x11015580 */
  goto L_11015580;
L_11015599:;
  /* 11015599 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101559c mov esp, ebp */
  ESP = (EBP);
  /* 1101559e pop ebp */
  EBP = (pop32());
  /* 1101559f ret  */
  ESPCHK(0x11015540u, _esp0);
  ESP += 4; return;
}

/* FUN_100055a0 @ 0x110155a0 (27 bytes, 13 insns) */
void f_110155a0(void) {
  FTRACE(0x110155a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110155a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110155a1 mov ebp, esp */
  EBP = (ESP);
  /* 110155a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110155a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110155a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 110155a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110155ac push eax */
  push32((uint32_t)(EAX));
  /* 110155ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110155b0 push ecx */
  push32((uint32_t)(ECX));
  /* 110155b1 call 0x110155c0 */
  push32(0x110155b6u); f_110155c0();
  /* 110155b6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110155b9 pop ebp */
  EBP = (pop32());
  /* 110155ba ret  */
  ESPCHK(0x110155a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055c0 @ 0x110155c0 (64 bytes, 27 insns) */
void f_110155c0(void) {
  FTRACE(0x110155c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110155c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110155c1 mov ebp, esp */
  EBP = (ESP);
  /* 110155c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110155c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 110155c6 call 0x11018b30 */
  push32(0x110155cbu); f_11018b30();
  /* 110155cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110155ce push 1 */
  push32((uint32_t)(0x1u));
  /* 110155d0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110155d3 push eax */
  push32((uint32_t)(EAX));
  /* 110155d4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110155d7 push ecx */
  push32((uint32_t)(ECX));
  /* 110155d8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110155db push edx */
  push32((uint32_t)(EDX));
  /* 110155dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110155df push eax */
  push32((uint32_t)(EAX));
  /* 110155e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110155e3 push ecx */
  push32((uint32_t)(ECX));
  /* 110155e4 call 0x11015600 */
  push32(0x110155e9u); f_11015600();
  /* 110155e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110155ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110155ef push 9 */
  push32((uint32_t)(0x9u));
  /* 110155f1 call 0x11018bd0 */
  push32(0x110155f6u); f_11018bd0();
  /* 110155f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110155f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110155fc mov esp, ebp */
  ESP = (EBP);
  /* 110155fe pop ebp */
  EBP = (pop32());
  /* 110155ff ret  */
  ESPCHK(0x110155c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005600 @ 0x11015600 (1297 bytes, 431 insns) */
void f_11015600(void) {
  FTRACE(0x11015600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015600 push ebp */
  push32((uint32_t)(EBP));
  /* 11015601 mov ebp, esp */
  EBP = (ESP);
  /* 11015603 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11015606 push ebx */
  push32((uint32_t)(EBX));
  /* 11015607 push esi */
  push32((uint32_t)(ESI));
  /* 11015608 push edi */
  push32((uint32_t)(EDI));
  /* 11015609 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11015610 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015614 jne 0x11015633 */
  if (!C.zf) goto L_11015633;
  /* 11015616 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11015619 push eax */
  push32((uint32_t)(EAX));
  /* 1101561a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101561d push ecx */
  push32((uint32_t)(ECX));
  /* 1101561e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015621 push edx */
  push32((uint32_t)(EDX));
  /* 11015622 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015625 push eax */
  push32((uint32_t)(EAX));
  /* 11015626 call 0x11015130 */
  push32(0x1101562bu); f_11015130();
  /* 1101562b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101562e jmp 0x11015b0a */
  goto L_11015b0a;
L_11015633:;
  /* 11015633 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015637 je 0x11015656 */
  if (C.zf) goto L_11015656;
  /* 11015639 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101563d jne 0x11015656 */
  if (!C.zf) goto L_11015656;
  /* 1101563f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015642 push ecx */
  push32((uint32_t)(ECX));
  /* 11015643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015646 push edx */
  push32((uint32_t)(EDX));
  /* 11015647 call 0x11015bc0 */
  push32(0x1101564cu); f_11015bc0();
  /* 1101564c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101564f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015651 jmp 0x11015b0a */
  goto L_11015b0a;
L_11015656:;
  /* 11015656 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 1101565b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1101565e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015660 je 0x11015692 */
  if (C.zf) goto L_11015692;
L_11015662:;
  /* 11015662 call 0x110162d0 */
  push32(0x11015667u); f_110162d0();
  /* 11015667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015669 jne 0x1101568c */
  if (!C.zf) goto L_1101568c;
  /* 1101566b push 0x1103b74c */
  push32((uint32_t)(0x1103b74cu));
  /* 11015670 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015672 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11015677 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 1101567c push 2 */
  push32((uint32_t)(0x2u));
  /* 1101567e call 0x110141f0 */
  push32(0x11015683u); f_110141f0();
  /* 11015683 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015686 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015689 jne 0x1101568c */
  if (!C.zf) goto L_1101568c;
  /* 1101568b int3  */
  x86_unimpl("int3 @ 0x1101568b");
L_1101568c:;
  /* 1101568c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1101568e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015690 jne 0x11015662 */
  if (!C.zf) goto L_11015662;
L_11015692:;
  /* 11015692 mov edx, dword ptr [0x1103ea88] */
  EDX = (r32((uint32_t)(0x1103ea88)));
  /* 11015698 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1101569b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101569e cmp eax, dword ptr [0x1103ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110156a4 jne 0x110156a7 */
  if (!C.zf) goto L_110156a7;
  /* 110156a6 int3  */
  x86_unimpl("int3 @ 0x110156a6");
L_110156a7:;
  /* 110156a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110156aa push ecx */
  push32((uint32_t)(ECX));
  /* 110156ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110156ae push edx */
  push32((uint32_t)(EDX));
  /* 110156af mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110156b2 push eax */
  push32((uint32_t)(EAX));
  /* 110156b3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110156b6 push ecx */
  push32((uint32_t)(ECX));
  /* 110156b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110156ba push edx */
  push32((uint32_t)(EDX));
  /* 110156bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110156be push eax */
  push32((uint32_t)(EAX));
  /* 110156bf push 2 */
  push32((uint32_t)(0x2u));
  /* 110156c1 call dword ptr [0x1103ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1103ec90))), 0x110156c7u);
  /* 110156c7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110156ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110156cc jne 0x1101572c */
  if (!C.zf) goto L_1101572c;
  /* 110156ce cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110156d2 je 0x110156ff */
  if (C.zf) goto L_110156ff;
L_110156d4:;
  /* 110156d4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110156d7 push ecx */
  push32((uint32_t)(ECX));
  /* 110156d8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110156db push edx */
  push32((uint32_t)(EDX));
  /* 110156dc push 0x1103b8c8 */
  push32((uint32_t)(0x1103b8c8u));
  /* 110156e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110156e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110156e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110156e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110156e9 call 0x110141f0 */
  push32(0x110156eeu); f_110141f0();
  /* 110156ee add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110156f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110156f4 jne 0x110156f7 */
  if (!C.zf) goto L_110156f7;
  /* 110156f6 int3  */
  x86_unimpl("int3 @ 0x110156f6");
L_110156f7:;
  /* 110156f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110156f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110156fb jne 0x110156d4 */
  if (!C.zf) goto L_110156d4;
  /* 110156fd jmp 0x11015725 */
  goto L_11015725;
L_110156ff:;
  /* 110156ff push 0x1103b8a4 */
  push32((uint32_t)(0x1103b8a4u));
  /* 11015704 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11015709 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101570b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101570d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101570f push 0 */
  push32((uint32_t)(0x0u));
  /* 11015711 call 0x110141f0 */
  push32(0x11015716u); f_110141f0();
  /* 11015716 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015719 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101571c jne 0x1101571f */
  if (!C.zf) goto L_1101571f;
  /* 1101571e int3  */
  x86_unimpl("int3 @ 0x1101571e");
L_1101571f:;
  /* 1101571f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015723 jne 0x110156ff */
  if (!C.zf) goto L_110156ff;
L_11015725:;
  /* 11015725 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015727 jmp 0x11015b0a */
  goto L_11015b0a;
L_1101572c:;
  /* 1101572c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015730 jbe 0x1101575e */
  if ((C.cf||C.zf)) goto L_1101575e;
L_11015732:;
  /* 11015732 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015735 push edx */
  push32((uint32_t)(EDX));
  /* 11015736 push 0x1103b874 */
  push32((uint32_t)(0x1103b874u));
  /* 1101573b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101573d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101573f push 0 */
  push32((uint32_t)(0x0u));
  /* 11015741 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015743 call 0x110141f0 */
  push32(0x11015748u); f_110141f0();
  /* 11015748 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101574b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101574e jne 0x11015751 */
  if (!C.zf) goto L_11015751;
  /* 11015750 int3  */
  x86_unimpl("int3 @ 0x11015750");
L_11015751:;
  /* 11015751 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015755 jne 0x11015732 */
  if (!C.zf) goto L_11015732;
  /* 11015757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015759 jmp 0x11015b0a */
  goto L_11015b0a;
L_1101575e:;
  /* 1101575e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015762 je 0x110157a6 */
  if (C.zf) goto L_110157a6;
  /* 11015764 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015767 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101576d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015770 je 0x110157a6 */
  if (C.zf) goto L_110157a6;
  /* 11015772 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015775 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1101577b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101577e je 0x110157a6 */
  if (C.zf) goto L_110157a6;
L_11015780:;
  /* 11015780 push 0x1103b688 */
  push32((uint32_t)(0x1103b688u));
  /* 11015785 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 1101578a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101578c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101578e push 0 */
  push32((uint32_t)(0x0u));
  /* 11015790 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015792 call 0x110141f0 */
  push32(0x11015797u); f_110141f0();
  /* 11015797 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101579a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101579d jne 0x110157a0 */
  if (!C.zf) goto L_110157a0;
  /* 1101579f int3  */
  x86_unimpl("int3 @ 0x1101579f");
L_110157a0:;
  /* 110157a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110157a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110157a4 jne 0x11015780 */
  if (!C.zf) goto L_11015780;
L_110157a6:;
  /* 110157a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110157a9 push ecx */
  push32((uint32_t)(ECX));
  /* 110157aa call 0x11016730 */
  push32(0x110157afu); f_11016730();
  /* 110157af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110157b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110157b4 jne 0x110157d7 */
  if (!C.zf) goto L_110157d7;
  /* 110157b6 push 0x1103b850 */
  push32((uint32_t)(0x1103b850u));
  /* 110157bb push 0 */
  push32((uint32_t)(0x0u));
  /* 110157bd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 110157c2 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 110157c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110157c9 call 0x110141f0 */
  push32(0x110157ceu); f_110141f0();
  /* 110157ce add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110157d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110157d4 jne 0x110157d7 */
  if (!C.zf) goto L_110157d7;
  /* 110157d6 int3  */
  x86_unimpl("int3 @ 0x110157d6");
L_110157d7:;
  /* 110157d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110157d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110157db jne 0x110157a6 */
  if (!C.zf) goto L_110157a6;
  /* 110157dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110157e0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110157e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110157e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110157e9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110157ed jne 0x110157f6 */
  if (!C.zf) goto L_110157f6;
  /* 110157ef mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_110157f6:;
  /* 110157f6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110157fa je 0x1101583a */
  if (C.zf) goto L_1101583a;
L_110157fc:;
  /* 110157fc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110157ff cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015806 jne 0x11015811 */
  if (!C.zf) goto L_11015811;
  /* 11015808 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101580b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101580f je 0x11015832 */
  if (C.zf) goto L_11015832;
L_11015811:;
  /* 11015811 push 0x1103b808 */
  push32((uint32_t)(0x1103b808u));
  /* 11015816 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015818 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1101581d push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015822 push 2 */
  push32((uint32_t)(0x2u));
  /* 11015824 call 0x110141f0 */
  push32(0x11015829u); f_110141f0();
  /* 11015829 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101582c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101582f jne 0x11015832 */
  if (!C.zf) goto L_11015832;
  /* 11015831 int3  */
  x86_unimpl("int3 @ 0x11015831");
L_11015832:;
  /* 11015832 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015834 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015836 jne 0x110157fc */
  if (!C.zf) goto L_110157fc;
  /* 11015838 jmp 0x1101589e */
  goto L_1101589e;
L_1101583a:;
  /* 1101583a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101583d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11015840 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11015845 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015848 jne 0x1101585f */
  if (!C.zf) goto L_1101585f;
  /* 1101584a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101584d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11015853 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015856 jne 0x1101585f */
  if (!C.zf) goto L_1101585f;
  /* 11015858 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1101585f:;
  /* 1101585f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11015862 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11015865 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101586a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101586d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11015873 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015875 je 0x11015898 */
  if (C.zf) goto L_11015898;
  /* 11015877 push 0x1103b7cc */
  push32((uint32_t)(0x1103b7ccu));
  /* 1101587c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101587e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11015883 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015888 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101588a call 0x110141f0 */
  push32(0x1101588fu); f_110141f0();
  /* 1101588f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015892 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015895 jne 0x11015898 */
  if (!C.zf) goto L_11015898;
  /* 11015897 int3  */
  x86_unimpl("int3 @ 0x11015897");
L_11015898:;
  /* 11015898 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101589a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101589c jne 0x1101585f */
  if (!C.zf) goto L_1101585f;
L_1101589e:;
  /* 1101589e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110158a2 je 0x110158c9 */
  if (C.zf) goto L_110158c9;
  /* 110158a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110158a7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110158aa push eax */
  push32((uint32_t)(EAX));
  /* 110158ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110158ae push ecx */
  push32((uint32_t)(ECX));
  /* 110158af call 0x110190b0 */
  push32(0x110158b4u); f_110190b0();
  /* 110158b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110158b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110158ba cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110158be jne 0x110158c7 */
  if (!C.zf) goto L_110158c7;
  /* 110158c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110158c2 jmp 0x11015b0a */
  goto L_11015b0a;
L_110158c7:;
  /* 110158c7 jmp 0x110158ec */
  goto L_110158ec;
L_110158c9:;
  /* 110158c9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110158cc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110158cf push edx */
  push32((uint32_t)(EDX));
  /* 110158d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110158d3 push eax */
  push32((uint32_t)(EAX));
  /* 110158d4 call 0x11019000 */
  push32(0x110158d9u); f_11019000();
  /* 110158d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110158dc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110158df cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110158e3 jne 0x110158ec */
  if (!C.zf) goto L_110158ec;
  /* 110158e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110158e7 jmp 0x11015b0a */
  goto L_11015b0a;
L_110158ec:;
  /* 110158ec mov ecx, dword ptr [0x1103ea88] */
  ECX = (r32((uint32_t)(0x1103ea88)));
  /* 110158f2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110158f5 mov dword ptr [0x1103ea88], ecx */
  w32((uint32_t)(0x1103ea88), (ECX));
  /* 110158fb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110158ff jne 0x11015957 */
  if (!C.zf) goto L_11015957;
  /* 11015901 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015904 mov eax, dword ptr [0x11040618] */
  EAX = (r32((uint32_t)(0x11040618)));
  /* 11015909 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101590c mov dword ptr [0x11040618], eax */
  w32((uint32_t)(0x11040618), (EAX));
  /* 11015911 mov ecx, dword ptr [0x11040618] */
  ECX = (r32((uint32_t)(0x11040618)));
  /* 11015917 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101591a mov dword ptr [0x11040618], ecx */
  w32((uint32_t)(0x11040618), (ECX));
  /* 11015920 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015923 mov eax, dword ptr [0x11040620] */
  EAX = (r32((uint32_t)(0x11040620)));
  /* 11015928 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101592b mov dword ptr [0x11040620], eax */
  w32((uint32_t)(0x11040620), (EAX));
  /* 11015930 mov ecx, dword ptr [0x11040620] */
  ECX = (r32((uint32_t)(0x11040620)));
  /* 11015936 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015939 mov dword ptr [0x11040620], ecx */
  w32((uint32_t)(0x11040620), (ECX));
  /* 1101593f mov edx, dword ptr [0x11040620] */
  EDX = (r32((uint32_t)(0x11040620)));
  /* 11015945 cmp edx, dword ptr [0x11040624] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11040624))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101594b jbe 0x11015957 */
  if ((C.cf||C.zf)) goto L_11015957;
  /* 1101594d mov eax, dword ptr [0x11040620] */
  EAX = (r32((uint32_t)(0x11040620)));
  /* 11015952 mov dword ptr [0x11040624], eax */
  w32((uint32_t)(0x11040624), (EAX));
L_11015957:;
  /* 11015957 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101595a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101595d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11015960 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015963 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015966 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015969 jbe 0x1101598f */
  if ((C.cf||C.zf)) goto L_1101598f;
  /* 1101596b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101596e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015971 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11015974 push edx */
  push32((uint32_t)(EDX));
  /* 11015975 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015977 mov al, byte ptr [0x1103ea92] */
  AL = (r8((uint32_t)(0x1103ea92)));
  /* 1101597c push eax */
  push32((uint32_t)(EAX));
  /* 1101597d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015980 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015983 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015986 push edx */
  push32((uint32_t)(EDX));
  /* 11015987 call 0x11018ea0 */
  push32(0x1101598cu); f_11018ea0();
  /* 1101598c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101598f:;
  /* 1101598f push 4 */
  push32((uint32_t)(0x4u));
  /* 11015991 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015993 mov al, byte ptr [0x1103ea90] */
  AL = (r8((uint32_t)(0x1103ea90)));
  /* 11015998 push eax */
  push32((uint32_t)(EAX));
  /* 11015999 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101599c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101599f push ecx */
  push32((uint32_t)(ECX));
  /* 110159a0 call 0x11018ea0 */
  push32(0x110159a5u); f_11018ea0();
  /* 110159a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110159a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110159ac jne 0x110159c9 */
  if (!C.zf) goto L_110159c9;
  /* 110159ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110159b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 110159b4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 110159b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110159ba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110159bd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 110159c0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110159c3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110159c6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_110159c9:;
  /* 110159c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110159cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110159cf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_110159d2:;
  /* 110159d2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110159d6 jne 0x11015a07 */
  if (!C.zf) goto L_11015a07;
  /* 110159d8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110159dc jne 0x110159e6 */
  if (!C.zf) goto L_110159e6;
  /* 110159de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110159e1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110159e4 je 0x11015a07 */
  if (C.zf) goto L_11015a07;
L_110159e6:;
  /* 110159e6 push 0x1103b798 */
  push32((uint32_t)(0x1103b798u));
  /* 110159eb push 0 */
  push32((uint32_t)(0x0u));
  /* 110159ed push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 110159f2 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 110159f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110159f9 call 0x110141f0 */
  push32(0x110159feu); f_110141f0();
  /* 110159fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015a01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015a04 jne 0x11015a07 */
  if (!C.zf) goto L_11015a07;
  /* 11015a06 int3  */
  x86_unimpl("int3 @ 0x11015a06");
L_11015a07:;
  /* 11015a07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11015a09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11015a0b jne 0x110159d2 */
  if (!C.zf) goto L_110159d2;
  /* 11015a0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015a10 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015a13 je 0x11015a1b */
  if (C.zf) goto L_11015a1b;
  /* 11015a15 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015a19 je 0x11015a23 */
  if (C.zf) goto L_11015a23;
L_11015a1b:;
  /* 11015a1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015a1e jmp 0x11015b0a */
  goto L_11015b0a;
L_11015a23:;
  /* 11015a23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015a26 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015a29 je 0x11015a3b */
  if (C.zf) goto L_11015a3b;
  /* 11015a2b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015a2e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11015a30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015a33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11015a36 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11015a39 jmp 0x11015a77 */
  goto L_11015a77;
L_11015a3b:;
  /* 11015a3b mov eax, dword ptr [0x11040614] */
  EAX = (r32((uint32_t)(0x11040614)));
  /* 11015a40 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015a43 je 0x11015a66 */
  if (C.zf) goto L_11015a66;
  /* 11015a45 push 0x1103b77c */
  push32((uint32_t)(0x1103b77cu));
  /* 11015a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11015a4c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11015a51 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015a56 push 2 */
  push32((uint32_t)(0x2u));
  /* 11015a58 call 0x110141f0 */
  push32(0x11015a5du); f_110141f0();
  /* 11015a5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015a60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015a63 jne 0x11015a66 */
  if (!C.zf) goto L_11015a66;
  /* 11015a65 int3  */
  x86_unimpl("int3 @ 0x11015a65");
L_11015a66:;
  /* 11015a66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015a68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015a6a jne 0x11015a3b */
  if (!C.zf) goto L_11015a3b;
  /* 11015a6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015a6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11015a72 mov dword ptr [0x11040614], eax */
  w32((uint32_t)(0x11040614), (EAX));
L_11015a77:;
  /* 11015a77 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015a7a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015a7e je 0x11015a8f */
  if (C.zf) goto L_11015a8f;
  /* 11015a80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015a83 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11015a86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015a89 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11015a8b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11015a8d jmp 0x11015aca */
  goto L_11015aca;
L_11015a8f:;
  /* 11015a8f mov eax, dword ptr [0x1104061c] */
  EAX = (r32((uint32_t)(0x1104061c)));
  /* 11015a94 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015a97 je 0x11015aba */
  if (C.zf) goto L_11015aba;
  /* 11015a99 push 0x1103b760 */
  push32((uint32_t)(0x1103b760u));
  /* 11015a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11015aa0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11015aa5 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015aaa push 2 */
  push32((uint32_t)(0x2u));
  /* 11015aac call 0x110141f0 */
  push32(0x11015ab1u); f_110141f0();
  /* 11015ab1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015ab4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015ab7 jne 0x11015aba */
  if (!C.zf) goto L_11015aba;
  /* 11015ab9 int3  */
  x86_unimpl("int3 @ 0x11015ab9");
L_11015aba:;
  /* 11015aba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015abc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015abe jne 0x11015a8f */
  if (!C.zf) goto L_11015a8f;
  /* 11015ac0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015ac3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11015ac5 mov dword ptr [0x1104061c], eax */
  w32((uint32_t)(0x1104061c), (EAX));
L_11015aca:;
  /* 11015aca cmp dword ptr [0x1104061c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104061c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015ad1 je 0x11015ae1 */
  if (C.zf) goto L_11015ae1;
  /* 11015ad3 mov ecx, dword ptr [0x1104061c] */
  ECX = (r32((uint32_t)(0x1104061c)));
  /* 11015ad9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015adc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11015adf jmp 0x11015ae9 */
  goto L_11015ae9;
L_11015ae1:;
  /* 11015ae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015ae4 mov dword ptr [0x11040614], eax */
  w32((uint32_t)(0x11040614), (EAX));
L_11015ae9:;
  /* 11015ae9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015aec mov edx, dword ptr [0x1104061c] */
  EDX = (r32((uint32_t)(0x1104061c)));
  /* 11015af2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11015af4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015af7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11015afe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11015b01 mov dword ptr [0x1104061c], ecx */
  w32((uint32_t)(0x1104061c), (ECX));
  /* 11015b07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11015b0a:;
  /* 11015b0a pop edi */
  EDI = (pop32());
  /* 11015b0b pop esi */
  ESI = (pop32());
  /* 11015b0c pop ebx */
  EBX = (pop32());
  /* 11015b0d mov esp, ebp */
  ESP = (EBP);
  /* 11015b0f pop ebp */
  EBP = (pop32());
  /* 11015b10 ret  */
  ESPCHK(0x11015600u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b20 @ 0x11015b20 (27 bytes, 13 insns) */
void f_11015b20(void) {
  FTRACE(0x11015b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11015b21 mov ebp, esp */
  EBP = (ESP);
  /* 11015b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015b29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015b2c push eax */
  push32((uint32_t)(EAX));
  /* 11015b2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015b30 push ecx */
  push32((uint32_t)(ECX));
  /* 11015b31 call 0x11015b40 */
  push32(0x11015b36u); f_11015b40();
  /* 11015b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015b39 pop ebp */
  EBP = (pop32());
  /* 11015b3a ret  */
  ESPCHK(0x11015b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b40 @ 0x11015b40 (64 bytes, 27 insns) */
void f_11015b40(void) {
  FTRACE(0x11015b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11015b41 mov ebp, esp */
  EBP = (ESP);
  /* 11015b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11015b44 push 9 */
  push32((uint32_t)(0x9u));
  /* 11015b46 call 0x11018b30 */
  push32(0x11015b4bu); f_11018b30();
  /* 11015b4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 11015b50 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11015b53 push eax */
  push32((uint32_t)(EAX));
  /* 11015b54 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11015b57 push ecx */
  push32((uint32_t)(ECX));
  /* 11015b58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11015b5b push edx */
  push32((uint32_t)(EDX));
  /* 11015b5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015b5f push eax */
  push32((uint32_t)(EAX));
  /* 11015b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11015b64 call 0x11015600 */
  push32(0x11015b69u); f_11015600();
  /* 11015b69 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015b6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11015b6f push 9 */
  push32((uint32_t)(0x9u));
  /* 11015b71 call 0x11018bd0 */
  push32(0x11015b76u); f_11018bd0();
  /* 11015b76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015b79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015b7c mov esp, ebp */
  ESP = (EBP);
  /* 11015b7e pop ebp */
  EBP = (pop32());
  /* 11015b7f ret  */
  ESPCHK(0x11015b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x11015b80 (19 bytes, 9 insns) */
void f_11015b80(void) {
  FTRACE(0x11015b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11015b81 mov ebp, esp */
  EBP = (ESP);
  /* 11015b83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015b85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015b88 push eax */
  push32((uint32_t)(EAX));
  /* 11015b89 call 0x11015bc0 */
  push32(0x11015b8eu); f_11015bc0();
  /* 11015b8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015b91 pop ebp */
  EBP = (pop32());
  /* 11015b92 ret  */
  ESPCHK(0x11015b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x11015ba0 (19 bytes, 9 insns) */
void f_11015ba0(void) {
  FTRACE(0x11015ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11015ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11015ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015ba5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015ba8 push eax */
  push32((uint32_t)(EAX));
  /* 11015ba9 call 0x11015bf0 */
  push32(0x11015baeu); f_11015bf0();
  /* 11015bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015bb1 pop ebp */
  EBP = (pop32());
  /* 11015bb2 ret  */
  ESPCHK(0x11015ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bc0 @ 0x11015bc0 (41 bytes, 16 insns) */
void f_11015bc0(void) {
  FTRACE(0x11015bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11015bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11015bc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11015bc5 call 0x11018b30 */
  push32(0x11015bcau); f_11018b30();
  /* 11015bca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015bcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11015bd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11015bd5 call 0x11015bf0 */
  push32(0x11015bdau); f_11015bf0();
  /* 11015bda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015bdd push 9 */
  push32((uint32_t)(0x9u));
  /* 11015bdf call 0x11018bd0 */
  push32(0x11015be4u); f_11018bd0();
  /* 11015be4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015be7 pop ebp */
  EBP = (pop32());
  /* 11015be8 ret  */
  ESPCHK(0x11015bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bf0 @ 0x11015bf0 (1004 bytes, 342 insns) */
void f_11015bf0(void) {
  FTRACE(0x11015bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11015bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11015bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11015bf4 push ebx */
  push32((uint32_t)(EBX));
  /* 11015bf5 push esi */
  push32((uint32_t)(ESI));
  /* 11015bf6 push edi */
  push32((uint32_t)(EDI));
  /* 11015bf7 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 11015bfc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11015bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015c01 je 0x11015c33 */
  if (C.zf) goto L_11015c33;
L_11015c03:;
  /* 11015c03 call 0x110162d0 */
  push32(0x11015c08u); f_110162d0();
  /* 11015c08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015c0a jne 0x11015c2d */
  if (!C.zf) goto L_11015c2d;
  /* 11015c0c push 0x1103b74c */
  push32((uint32_t)(0x1103b74cu));
  /* 11015c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c13 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11015c18 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015c1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11015c1f call 0x110141f0 */
  push32(0x11015c24u); f_110141f0();
  /* 11015c24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015c27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015c2a jne 0x11015c2d */
  if (!C.zf) goto L_11015c2d;
  /* 11015c2c int3  */
  x86_unimpl("int3 @ 0x11015c2c");
L_11015c2d:;
  /* 11015c2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015c2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015c31 jne 0x11015c03 */
  if (!C.zf) goto L_11015c03;
L_11015c33:;
  /* 11015c33 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015c37 jne 0x11015c3e */
  if (!C.zf) goto L_11015c3e;
  /* 11015c39 jmp 0x11015fd5 */
  goto L_11015fd5;
L_11015c3e:;
  /* 11015c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11015c47 push edx */
  push32((uint32_t)(EDX));
  /* 11015c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015c4d push eax */
  push32((uint32_t)(EAX));
  /* 11015c4e push 3 */
  push32((uint32_t)(0x3u));
  /* 11015c50 call dword ptr [0x1103ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1103ec90))), 0x11015c56u);
  /* 11015c56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015c5b jne 0x11015c88 */
  if (!C.zf) goto L_11015c88;
L_11015c5d:;
  /* 11015c5d push 0x1103ba10 */
  push32((uint32_t)(0x1103ba10u));
  /* 11015c62 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11015c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c69 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c6f call 0x110141f0 */
  push32(0x11015c74u); f_110141f0();
  /* 11015c74 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015c77 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015c7a jne 0x11015c7d */
  if (!C.zf) goto L_11015c7d;
  /* 11015c7c int3  */
  x86_unimpl("int3 @ 0x11015c7c");
L_11015c7d:;
  /* 11015c7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015c7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015c81 jne 0x11015c5d */
  if (!C.zf) goto L_11015c5d;
  /* 11015c83 jmp 0x11015fd5 */
  goto L_11015fd5;
L_11015c88:;
  /* 11015c88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015c8b push edx */
  push32((uint32_t)(EDX));
  /* 11015c8c call 0x11016730 */
  push32(0x11015c91u); f_11016730();
  /* 11015c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015c96 jne 0x11015cb9 */
  if (!C.zf) goto L_11015cb9;
  /* 11015c98 push 0x1103b850 */
  push32((uint32_t)(0x1103b850u));
  /* 11015c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11015c9f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11015ca4 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015ca9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11015cab call 0x110141f0 */
  push32(0x11015cb0u); f_110141f0();
  /* 11015cb0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015cb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015cb6 jne 0x11015cb9 */
  if (!C.zf) goto L_11015cb9;
  /* 11015cb8 int3  */
  x86_unimpl("int3 @ 0x11015cb8");
L_11015cb9:;
  /* 11015cb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015cbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015cbd jne 0x11015c88 */
  if (!C.zf) goto L_11015c88;
  /* 11015cbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015cc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11015cc5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11015cc8:;
  /* 11015cc8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015ccb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11015cce and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11015cd3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015cd6 je 0x11015d1b */
  if (C.zf) goto L_11015d1b;
  /* 11015cd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015cdb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015cdf je 0x11015d1b */
  if (C.zf) goto L_11015d1b;
  /* 11015ce1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015ce4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11015ce7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11015cec cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015cef je 0x11015d1b */
  if (C.zf) goto L_11015d1b;
  /* 11015cf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015cf4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015cf8 je 0x11015d1b */
  if (C.zf) goto L_11015d1b;
  /* 11015cfa push 0x1103b9e8 */
  push32((uint32_t)(0x1103b9e8u));
  /* 11015cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11015d01 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11015d06 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015d0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11015d0d call 0x110141f0 */
  push32(0x11015d12u); f_110141f0();
  /* 11015d12 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015d15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015d18 jne 0x11015d1b */
  if (!C.zf) goto L_11015d1b;
  /* 11015d1a int3  */
  x86_unimpl("int3 @ 0x11015d1a");
L_11015d1b:;
  /* 11015d1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11015d1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11015d1f jne 0x11015cc8 */
  if (!C.zf) goto L_11015cc8;
  /* 11015d21 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 11015d26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11015d29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015d2b jne 0x11015df6 */
  if (!C.zf) goto L_11015df6;
  /* 11015d31 push 4 */
  push32((uint32_t)(0x4u));
  /* 11015d33 mov cl, byte ptr [0x1103ea90] */
  CL = (r8((uint32_t)(0x1103ea90)));
  /* 11015d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11015d3a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015d3d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015d40 push edx */
  push32((uint32_t)(EDX));
  /* 11015d41 call 0x11016240 */
  push32(0x11015d46u); f_11016240();
  /* 11015d46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015d4b jne 0x11015d90 */
  if (!C.zf) goto L_11015d90;
L_11015d4d:;
  /* 11015d4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015d50 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015d53 push eax */
  push32((uint32_t)(EAX));
  /* 11015d54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015d57 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11015d5a push edx */
  push32((uint32_t)(EDX));
  /* 11015d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015d5e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11015d61 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11015d67 mov edx, dword ptr [ecx*4 + 0x1103ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103ea94)));
  /* 11015d6e push edx */
  push32((uint32_t)(EDX));
  /* 11015d6f push 0x1103b9bc */
  push32((uint32_t)(0x1103b9bcu));
  /* 11015d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015d78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015d7a push 1 */
  push32((uint32_t)(0x1u));
  /* 11015d7c call 0x110141f0 */
  push32(0x11015d81u); f_110141f0();
  /* 11015d81 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015d84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015d87 jne 0x11015d8a */
  if (!C.zf) goto L_11015d8a;
  /* 11015d89 int3  */
  x86_unimpl("int3 @ 0x11015d89");
L_11015d8a:;
  /* 11015d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015d8e jne 0x11015d4d */
  if (!C.zf) goto L_11015d4d;
L_11015d90:;
  /* 11015d90 push 4 */
  push32((uint32_t)(0x4u));
  /* 11015d92 mov cl, byte ptr [0x1103ea90] */
  CL = (r8((uint32_t)(0x1103ea90)));
  /* 11015d98 push ecx */
  push32((uint32_t)(ECX));
  /* 11015d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015d9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11015d9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015da2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11015da6 push edx */
  push32((uint32_t)(EDX));
  /* 11015da7 call 0x11016240 */
  push32(0x11015dacu); f_11016240();
  /* 11015dac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015daf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015db1 jne 0x11015df6 */
  if (!C.zf) goto L_11015df6;
L_11015db3:;
  /* 11015db3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015db6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015db9 push eax */
  push32((uint32_t)(EAX));
  /* 11015dba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015dbd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11015dc0 push edx */
  push32((uint32_t)(EDX));
  /* 11015dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015dc4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11015dc7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11015dcd mov edx, dword ptr [ecx*4 + 0x1103ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103ea94)));
  /* 11015dd4 push edx */
  push32((uint32_t)(EDX));
  /* 11015dd5 push 0x1103b990 */
  push32((uint32_t)(0x1103b990u));
  /* 11015dda push 0 */
  push32((uint32_t)(0x0u));
  /* 11015ddc push 0 */
  push32((uint32_t)(0x0u));
  /* 11015dde push 0 */
  push32((uint32_t)(0x0u));
  /* 11015de0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015de2 call 0x110141f0 */
  push32(0x11015de7u); f_110141f0();
  /* 11015de7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015dea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015ded jne 0x11015df0 */
  if (!C.zf) goto L_11015df0;
  /* 11015def int3  */
  x86_unimpl("int3 @ 0x11015def");
L_11015df0:;
  /* 11015df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11015df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11015df4 jne 0x11015db3 */
  if (!C.zf) goto L_11015db3;
L_11015df6:;
  /* 11015df6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015df9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015dfd jne 0x11015e6b */
  if (!C.zf) goto L_11015e6b;
L_11015dff:;
  /* 11015dff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015e02 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015e09 jne 0x11015e14 */
  if (!C.zf) goto L_11015e14;
  /* 11015e0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015e0e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015e12 je 0x11015e35 */
  if (C.zf) goto L_11015e35;
L_11015e14:;
  /* 11015e14 push 0x1103b950 */
  push32((uint32_t)(0x1103b950u));
  /* 11015e19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015e1b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11015e20 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015e25 push 2 */
  push32((uint32_t)(0x2u));
  /* 11015e27 call 0x110141f0 */
  push32(0x11015e2cu); f_110141f0();
  /* 11015e2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015e2f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015e32 jne 0x11015e35 */
  if (!C.zf) goto L_11015e35;
  /* 11015e34 int3  */
  x86_unimpl("int3 @ 0x11015e34");
L_11015e35:;
  /* 11015e35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015e37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015e39 jne 0x11015dff */
  if (!C.zf) goto L_11015dff;
  /* 11015e3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015e3e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11015e41 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015e44 push eax */
  push32((uint32_t)(EAX));
  /* 11015e45 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015e47 mov cl, byte ptr [0x1103ea91] */
  CL = (r8((uint32_t)(0x1103ea91)));
  /* 11015e4d push ecx */
  push32((uint32_t)(ECX));
  /* 11015e4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015e51 push edx */
  push32((uint32_t)(EDX));
  /* 11015e52 call 0x11018ea0 */
  push32(0x11015e57u); f_11018ea0();
  /* 11015e57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015e5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015e5d push eax */
  push32((uint32_t)(EAX));
  /* 11015e5e call 0x110192a0 */
  push32(0x11015e63u); f_110192a0();
  /* 11015e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015e66 jmp 0x11015fd5 */
  goto L_11015fd5;
L_11015e6b:;
  /* 11015e6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015e6e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015e72 jne 0x11015e81 */
  if (!C.zf) goto L_11015e81;
  /* 11015e74 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015e78 jne 0x11015e81 */
  if (!C.zf) goto L_11015e81;
  /* 11015e7a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11015e81:;
  /* 11015e81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015e84 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11015e87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015e8a je 0x11015ead */
  if (C.zf) goto L_11015ead;
  /* 11015e8c push 0x1103b930 */
  push32((uint32_t)(0x1103b930u));
  /* 11015e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015e93 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11015e98 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11015e9f call 0x110141f0 */
  push32(0x11015ea4u); f_110141f0();
  /* 11015ea4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015ea7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015eaa jne 0x11015ead */
  if (!C.zf) goto L_11015ead;
  /* 11015eac int3  */
  x86_unimpl("int3 @ 0x11015eac");
L_11015ead:;
  /* 11015ead xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015eaf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015eb1 jne 0x11015e81 */
  if (!C.zf) goto L_11015e81;
  /* 11015eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015eb6 mov eax, dword ptr [0x11040620] */
  EAX = (r32((uint32_t)(0x11040620)));
  /* 11015ebb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11015ebe mov dword ptr [0x11040620], eax */
  w32((uint32_t)(0x11040620), (EAX));
  /* 11015ec3 mov ecx, dword ptr [0x1103ea84] */
  ECX = (r32((uint32_t)(0x1103ea84)));
  /* 11015ec9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11015ecc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11015ece jne 0x11015fac */
  if (!C.zf) goto L_11015fac;
  /* 11015ed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015ed7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015eda je 0x11015eec */
  if (C.zf) goto L_11015eec;
  /* 11015edc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015edf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11015ee1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015ee4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11015ee7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11015eea jmp 0x11015f2a */
  goto L_11015f2a;
L_11015eec:;
  /* 11015eec mov ecx, dword ptr [0x11040614] */
  ECX = (r32((uint32_t)(0x11040614)));
  /* 11015ef2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015ef5 je 0x11015f18 */
  if (C.zf) goto L_11015f18;
  /* 11015ef7 push 0x1103b918 */
  push32((uint32_t)(0x1103b918u));
  /* 11015efc push 0 */
  push32((uint32_t)(0x0u));
  /* 11015efe push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11015f03 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015f08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11015f0a call 0x110141f0 */
  push32(0x11015f0fu); f_110141f0();
  /* 11015f0f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015f12 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015f15 jne 0x11015f18 */
  if (!C.zf) goto L_11015f18;
  /* 11015f17 int3  */
  x86_unimpl("int3 @ 0x11015f17");
L_11015f18:;
  /* 11015f18 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11015f1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11015f1c jne 0x11015eec */
  if (!C.zf) goto L_11015eec;
  /* 11015f1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015f21 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11015f24 mov dword ptr [0x11040614], ecx */
  w32((uint32_t)(0x11040614), (ECX));
L_11015f2a:;
  /* 11015f2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015f2d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015f31 je 0x11015f42 */
  if (C.zf) goto L_11015f42;
  /* 11015f33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015f36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11015f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015f3c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11015f3e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11015f40 jmp 0x11015f7f */
  goto L_11015f7f;
L_11015f42:;
  /* 11015f42 mov ecx, dword ptr [0x1104061c] */
  ECX = (r32((uint32_t)(0x1104061c)));
  /* 11015f48 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015f4b je 0x11015f6e */
  if (C.zf) goto L_11015f6e;
  /* 11015f4d push 0x1103b900 */
  push32((uint32_t)(0x1103b900u));
  /* 11015f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 11015f54 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11015f59 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11015f5e push 2 */
  push32((uint32_t)(0x2u));
  /* 11015f60 call 0x110141f0 */
  push32(0x11015f65u); f_110141f0();
  /* 11015f65 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015f68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11015f6b jne 0x11015f6e */
  if (!C.zf) goto L_11015f6e;
  /* 11015f6d int3  */
  x86_unimpl("int3 @ 0x11015f6d");
L_11015f6e:;
  /* 11015f6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11015f70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11015f72 jne 0x11015f42 */
  if (!C.zf) goto L_11015f42;
  /* 11015f74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015f77 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11015f79 mov dword ptr [0x1104061c], ecx */
  w32((uint32_t)(0x1104061c), (ECX));
L_11015f7f:;
  /* 11015f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015f82 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11015f85 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015f88 push eax */
  push32((uint32_t)(EAX));
  /* 11015f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015f8b mov cl, byte ptr [0x1103ea91] */
  CL = (r8((uint32_t)(0x1103ea91)));
  /* 11015f91 push ecx */
  push32((uint32_t)(ECX));
  /* 11015f92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015f95 push edx */
  push32((uint32_t)(EDX));
  /* 11015f96 call 0x11018ea0 */
  push32(0x11015f9bu); f_11018ea0();
  /* 11015f9b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015fa1 push eax */
  push32((uint32_t)(EAX));
  /* 11015fa2 call 0x110192a0 */
  push32(0x11015fa7u); f_110192a0();
  /* 11015fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015faa jmp 0x11015fd5 */
  goto L_11015fd5;
L_11015fac:;
  /* 11015fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015faf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11015fb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015fb9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11015fbc push eax */
  push32((uint32_t)(EAX));
  /* 11015fbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11015fbf mov cl, byte ptr [0x1103ea91] */
  CL = (r8((uint32_t)(0x1103ea91)));
  /* 11015fc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11015fc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11015fc9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11015fcc push edx */
  push32((uint32_t)(EDX));
  /* 11015fcd call 0x11018ea0 */
  push32(0x11015fd2u); f_11018ea0();
  /* 11015fd2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11015fd5:;
  /* 11015fd5 pop edi */
  EDI = (pop32());
  /* 11015fd6 pop esi */
  ESI = (pop32());
  /* 11015fd7 pop ebx */
  EBX = (pop32());
  /* 11015fd8 mov esp, ebp */
  ESP = (EBP);
  /* 11015fda pop ebp */
  EBP = (pop32());
  /* 11015fdb ret  */
  ESPCHK(0x11015bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fe0 @ 0x11015fe0 (19 bytes, 9 insns) */
void f_11015fe0(void) {
  FTRACE(0x11015fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11015fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11015fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11015fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11015fe5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11015fe8 push eax */
  push32((uint32_t)(EAX));
  /* 11015fe9 call 0x11016000 */
  push32(0x11015feeu); f_11016000();
  /* 11015fee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11015ff1 pop ebp */
  EBP = (pop32());
  /* 11015ff2 ret  */
  ESPCHK(0x11015fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006000 @ 0x11016000 (342 bytes, 119 insns) */
void f_11016000(void) {
  FTRACE(0x11016000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016000 push ebp */
  push32((uint32_t)(EBP));
  /* 11016001 mov ebp, esp */
  EBP = (ESP);
  /* 11016003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016006 push ebx */
  push32((uint32_t)(EBX));
  /* 11016007 push esi */
  push32((uint32_t)(ESI));
  /* 11016008 push edi */
  push32((uint32_t)(EDI));
  /* 11016009 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 1101600e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11016011 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016013 je 0x11016045 */
  if (C.zf) goto L_11016045;
L_11016015:;
  /* 11016015 call 0x110162d0 */
  push32(0x1101601au); f_110162d0();
  /* 1101601a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101601c jne 0x1101603f */
  if (!C.zf) goto L_1101603f;
  /* 1101601e push 0x1103b74c */
  push32((uint32_t)(0x1103b74cu));
  /* 11016023 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016025 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1101602a push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 1101602f push 2 */
  push32((uint32_t)(0x2u));
  /* 11016031 call 0x110141f0 */
  push32(0x11016036u); f_110141f0();
  /* 11016036 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016039 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101603c jne 0x1101603f */
  if (!C.zf) goto L_1101603f;
  /* 1101603e int3  */
  x86_unimpl("int3 @ 0x1101603e");
L_1101603f:;
  /* 1101603f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11016041 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016043 jne 0x11016015 */
  if (!C.zf) goto L_11016015;
L_11016045:;
  /* 11016045 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016047 call 0x11018b30 */
  push32(0x1101604cu); f_11018b30();
  /* 1101604c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101604f:;
  /* 1101604f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016052 push edx */
  push32((uint32_t)(EDX));
  /* 11016053 call 0x11016730 */
  push32(0x11016058u); f_11016730();
  /* 11016058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101605b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101605d jne 0x11016080 */
  if (!C.zf) goto L_11016080;
  /* 1101605f push 0x1103b850 */
  push32((uint32_t)(0x1103b850u));
  /* 11016064 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016066 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1101606b push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11016070 push 2 */
  push32((uint32_t)(0x2u));
  /* 11016072 call 0x110141f0 */
  push32(0x11016077u); f_110141f0();
  /* 11016077 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101607a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101607d jne 0x11016080 */
  if (!C.zf) goto L_11016080;
  /* 1101607f int3  */
  x86_unimpl("int3 @ 0x1101607f");
L_11016080:;
  /* 11016080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016084 jne 0x1101604f */
  if (!C.zf) goto L_1101604f;
  /* 11016086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016089 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101608c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1101608f:;
  /* 1101608f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016092 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11016095 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101609a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101609d je 0x110160e2 */
  if (C.zf) goto L_110160e2;
  /* 1101609f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110160a2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110160a6 je 0x110160e2 */
  if (C.zf) goto L_110160e2;
  /* 110160a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110160ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110160ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110160b3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110160b6 je 0x110160e2 */
  if (C.zf) goto L_110160e2;
  /* 110160b8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110160bb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110160bf je 0x110160e2 */
  if (C.zf) goto L_110160e2;
  /* 110160c1 push 0x1103b9e8 */
  push32((uint32_t)(0x1103b9e8u));
  /* 110160c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110160c8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 110160cd push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 110160d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 110160d4 call 0x110141f0 */
  push32(0x110160d9u); f_110141f0();
  /* 110160d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110160dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110160df jne 0x110160e2 */
  if (!C.zf) goto L_110160e2;
  /* 110160e1 int3  */
  x86_unimpl("int3 @ 0x110160e1");
L_110160e2:;
  /* 110160e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110160e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110160e6 jne 0x1101608f */
  if (!C.zf) goto L_1101608f;
  /* 110160e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110160eb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110160ef jne 0x110160fe */
  if (!C.zf) goto L_110160fe;
  /* 110160f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110160f5 jne 0x110160fe */
  if (!C.zf) goto L_110160fe;
  /* 110160f7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_110160fe:;
  /* 110160fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016101 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016105 je 0x11016139 */
  if (C.zf) goto L_11016139;
L_11016107:;
  /* 11016107 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101610a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1101610d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016110 je 0x11016133 */
  if (C.zf) goto L_11016133;
  /* 11016112 push 0x1103b930 */
  push32((uint32_t)(0x1103b930u));
  /* 11016117 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016119 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1101611e push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 11016123 push 2 */
  push32((uint32_t)(0x2u));
  /* 11016125 call 0x110141f0 */
  push32(0x1101612au); f_110141f0();
  /* 1101612a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101612d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016130 jne 0x11016133 */
  if (!C.zf) goto L_11016133;
  /* 11016132 int3  */
  x86_unimpl("int3 @ 0x11016132");
L_11016133:;
  /* 11016133 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11016135 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016137 jne 0x11016107 */
  if (!C.zf) goto L_11016107;
L_11016139:;
  /* 11016139 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101613c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1101613f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11016142 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016144 call 0x11018bd0 */
  push32(0x11016149u); f_11018bd0();
  /* 11016149 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101614c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101614f pop edi */
  EDI = (pop32());
  /* 11016150 pop esi */
  ESI = (pop32());
  /* 11016151 pop ebx */
  EBX = (pop32());
  /* 11016152 mov esp, ebp */
  ESP = (EBP);
  /* 11016154 pop ebp */
  EBP = (pop32());
  /* 11016155 ret  */
  ESPCHK(0x11016000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006160 @ 0x11016160 (28 bytes, 11 insns) */
void f_11016160(void) {
  FTRACE(0x11016160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016160 push ebp */
  push32((uint32_t)(EBP));
  /* 11016161 mov ebp, esp */
  EBP = (ESP);
  /* 11016163 push ecx */
  push32((uint32_t)(ECX));
  /* 11016164 mov eax, dword ptr [0x1103ea8c] */
  EAX = (r32((uint32_t)(0x1103ea8c)));
  /* 11016169 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101616c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101616f mov dword ptr [0x1103ea8c], ecx */
  w32((uint32_t)(0x1103ea8c), (ECX));
  /* 11016175 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016178 mov esp, ebp */
  ESP = (EBP);
  /* 1101617a pop ebp */
  EBP = (pop32());
  /* 1101617b ret  */
  ESPCHK(0x11016160u, _esp0);
  ESP += 4; return;
}

/* FUN_10006180 @ 0x11016180 (157 bytes, 59 insns) */
void f_11016180(void) {
  FTRACE(0x11016180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016180 push ebp */
  push32((uint32_t)(EBP));
  /* 11016181 mov ebp, esp */
  EBP = (ESP);
  /* 11016183 push ecx */
  push32((uint32_t)(ECX));
  /* 11016184 push ebx */
  push32((uint32_t)(EBX));
  /* 11016185 push esi */
  push32((uint32_t)(ESI));
  /* 11016186 push edi */
  push32((uint32_t)(EDI));
  /* 11016187 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016189 call 0x11018b30 */
  push32(0x1101618eu); f_11018b30();
  /* 1101618e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016194 push eax */
  push32((uint32_t)(EAX));
  /* 11016195 call 0x11016730 */
  push32(0x1101619au); f_11016730();
  /* 1101619a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101619d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101619f je 0x1101620c */
  if (C.zf) goto L_1101620c;
  /* 110161a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110161a4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110161a7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_110161aa:;
  /* 110161aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110161ad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110161b0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110161b5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110161b8 je 0x110161fd */
  if (C.zf) goto L_110161fd;
  /* 110161ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110161bd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110161c1 je 0x110161fd */
  if (C.zf) goto L_110161fd;
  /* 110161c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110161c6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110161c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110161ce cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110161d1 je 0x110161fd */
  if (C.zf) goto L_110161fd;
  /* 110161d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110161d6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110161da je 0x110161fd */
  if (C.zf) goto L_110161fd;
  /* 110161dc push 0x1103b9e8 */
  push32((uint32_t)(0x1103b9e8u));
  /* 110161e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110161e3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 110161e8 push 0x1103b740 */
  push32((uint32_t)(0x1103b740u));
  /* 110161ed push 2 */
  push32((uint32_t)(0x2u));
  /* 110161ef call 0x110141f0 */
  push32(0x110161f4u); f_110141f0();
  /* 110161f4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110161f7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110161fa jne 0x110161fd */
  if (!C.zf) goto L_110161fd;
  /* 110161fc int3  */
  x86_unimpl("int3 @ 0x110161fc");
L_110161fd:;
  /* 110161fd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110161ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11016201 jne 0x110161aa */
  if (!C.zf) goto L_110161aa;
  /* 11016203 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016206 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11016209 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1101620c:;
  /* 1101620c push 9 */
  push32((uint32_t)(0x9u));
  /* 1101620e call 0x11018bd0 */
  push32(0x11016213u); f_11018bd0();
  /* 11016213 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016216 pop edi */
  EDI = (pop32());
  /* 11016217 pop esi */
  ESI = (pop32());
  /* 11016218 pop ebx */
  EBX = (pop32());
  /* 11016219 mov esp, ebp */
  ESP = (EBP);
  /* 1101621b pop ebp */
  EBP = (pop32());
  /* 1101621c ret  */
  ESPCHK(0x11016180u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x11016220 (28 bytes, 11 insns) */
void f_11016220(void) {
  FTRACE(0x11016220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016220 push ebp */
  push32((uint32_t)(EBP));
  /* 11016221 mov ebp, esp */
  EBP = (ESP);
  /* 11016223 push ecx */
  push32((uint32_t)(ECX));
  /* 11016224 mov eax, dword ptr [0x1103ec90] */
  EAX = (r32((uint32_t)(0x1103ec90)));
  /* 11016229 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101622c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101622f mov dword ptr [0x1103ec90], ecx */
  w32((uint32_t)(0x1103ec90), (ECX));
  /* 11016235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016238 mov esp, ebp */
  ESP = (EBP);
  /* 1101623a pop ebp */
  EBP = (pop32());
  /* 1101623b ret  */
  ESPCHK(0x11016220u, _esp0);
  ESP += 4; return;
}

/* FUN_10006240 @ 0x11016240 (136 bytes, 55 insns) */
void f_11016240(void) {
  FTRACE(0x11016240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016240 push ebp */
  push32((uint32_t)(EBP));
  /* 11016241 mov ebp, esp */
  EBP = (ESP);
  /* 11016243 push ecx */
  push32((uint32_t)(ECX));
  /* 11016244 push ebx */
  push32((uint32_t)(EBX));
  /* 11016245 push esi */
  push32((uint32_t)(ESI));
  /* 11016246 push edi */
  push32((uint32_t)(EDI));
  /* 11016247 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1101624e:;
  /* 1101624e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11016251 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11016254 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016257 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1101625a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101625c je 0x110162be */
  if (C.zf) goto L_110162be;
  /* 1101625e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016261 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016263 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11016265 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11016268 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101626e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016271 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016274 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11016277 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016279 je 0x110162bc */
  if (C.zf) goto L_110162bc;
L_1101627b:;
  /* 1101627b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101627e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11016283 push eax */
  push32((uint32_t)(EAX));
  /* 11016284 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016287 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11016289 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1101628c push edx */
  push32((uint32_t)(EDX));
  /* 1101628d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016290 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016293 push eax */
  push32((uint32_t)(EAX));
  /* 11016294 push 0x1103ba2c */
  push32((uint32_t)(0x1103ba2cu));
  /* 11016299 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101629b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101629d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101629f push 0 */
  push32((uint32_t)(0x0u));
  /* 110162a1 call 0x110141f0 */
  push32(0x110162a6u); f_110141f0();
  /* 110162a6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110162a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110162ac jne 0x110162af */
  if (!C.zf) goto L_110162af;
  /* 110162ae int3  */
  x86_unimpl("int3 @ 0x110162ae");
L_110162af:;
  /* 110162af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110162b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110162b3 jne 0x1101627b */
  if (!C.zf) goto L_1101627b;
  /* 110162b5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_110162bc:;
  /* 110162bc jmp 0x1101624e */
  goto L_1101624e;
L_110162be:;
  /* 110162be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110162c1 pop edi */
  EDI = (pop32());
  /* 110162c2 pop esi */
  ESI = (pop32());
  /* 110162c3 pop ebx */
  EBX = (pop32());
  /* 110162c4 mov esp, ebp */
  ESP = (EBP);
  /* 110162c6 pop ebp */
  EBP = (pop32());
  /* 110162c7 ret  */
  ESPCHK(0x11016240u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x110162d0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_110162d0(void) {
  FTRACE(0x110162d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110162d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110162d1 mov ebp, esp */
  EBP = (ESP);
  /* 110162d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110162d6 push ebx */
  push32((uint32_t)(EBX));
  /* 110162d7 push esi */
  push32((uint32_t)(ESI));
  /* 110162d8 push edi */
  push32((uint32_t)(EDI));
  /* 110162d9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 110162e0 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 110162e5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 110162e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110162ea jne 0x110162f6 */
  if (!C.zf) goto L_110162f6;
  /* 110162ec mov eax, 1 */
  EAX = (0x1u);
  /* 110162f1 jmp 0x11016628 */
  goto L_11016628;
L_110162f6:;
  /* 110162f6 push 9 */
  push32((uint32_t)(0x9u));
  /* 110162f8 call 0x11018b30 */
  push32(0x110162fdu); f_11018b30();
  /* 110162fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016300 call 0x11019310 */
  push32(0x11016305u); f_11019310();
  /* 11016305 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11016308 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101630c je 0x11016419 */
  if (C.zf) goto L_11016419;
  /* 11016312 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016316 je 0x11016419 */
  if (C.zf) goto L_11016419;
  /* 1101631c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101631f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11016322 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11016325 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016328 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1101632b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101632f ja 0x110163e2 */
  if ((!C.cf&&!C.zf)) goto L_110163e2;
  /* 11016335 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11016338 jmp dword ptr [eax*4 + 0x1101662f] */
  switch (EAX) {
    case 0: goto L_110163ba;
    case 1: goto L_11016392;
    case 2: goto L_1101636a;
    case 3: goto L_1101633f;
    default: x86_unimpl("switch@0x11016338 out of table"); return;
  }
L_1101633f:;
  /* 1101633f push 0x1103bb80 */
  push32((uint32_t)(0x1103bb80u));
  /* 11016344 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11016349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101634b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101634d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101634f push 0 */
  push32((uint32_t)(0x0u));
  /* 11016351 call 0x110141f0 */
  push32(0x11016356u); f_110141f0();
  /* 11016356 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016359 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101635c jne 0x1101635f */
  if (!C.zf) goto L_1101635f;
  /* 1101635e int3  */
  x86_unimpl("int3 @ 0x1101635e");
L_1101635f:;
  /* 1101635f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11016361 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016363 jne 0x1101633f */
  if (!C.zf) goto L_1101633f;
  /* 11016365 jmp 0x11016408 */
  goto L_11016408;
L_1101636a:;
  /* 1101636a push 0x1103bb5c */
  push32((uint32_t)(0x1103bb5cu));
  /* 1101636f push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11016374 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016376 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101637a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101637c call 0x110141f0 */
  push32(0x11016381u); f_110141f0();
  /* 11016381 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016384 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016387 jne 0x1101638a */
  if (!C.zf) goto L_1101638a;
  /* 11016389 int3  */
  x86_unimpl("int3 @ 0x11016389");
L_1101638a:;
  /* 1101638a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101638c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101638e jne 0x1101636a */
  if (!C.zf) goto L_1101636a;
  /* 11016390 jmp 0x11016408 */
  goto L_11016408;
L_11016392:;
  /* 11016392 push 0x1103bb38 */
  push32((uint32_t)(0x1103bb38u));
  /* 11016397 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 1101639c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101639e push 0 */
  push32((uint32_t)(0x0u));
  /* 110163a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110163a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110163a4 call 0x110141f0 */
  push32(0x110163a9u); f_110141f0();
  /* 110163a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110163ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110163af jne 0x110163b2 */
  if (!C.zf) goto L_110163b2;
  /* 110163b1 int3  */
  x86_unimpl("int3 @ 0x110163b1");
L_110163b2:;
  /* 110163b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110163b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110163b6 jne 0x11016392 */
  if (!C.zf) goto L_11016392;
  /* 110163b8 jmp 0x11016408 */
  goto L_11016408;
L_110163ba:;
  /* 110163ba push 0x1103bb14 */
  push32((uint32_t)(0x1103bb14u));
  /* 110163bf push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 110163c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110163c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110163c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 110163ca push 0 */
  push32((uint32_t)(0x0u));
  /* 110163cc call 0x110141f0 */
  push32(0x110163d1u); f_110141f0();
  /* 110163d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110163d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110163d7 jne 0x110163da */
  if (!C.zf) goto L_110163da;
  /* 110163d9 int3  */
  x86_unimpl("int3 @ 0x110163d9");
L_110163da:;
  /* 110163da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 110163dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110163de jne 0x110163ba */
  if (!C.zf) goto L_110163ba;
  /* 110163e0 jmp 0x11016408 */
  goto L_11016408;
L_110163e2:;
  /* 110163e2 push 0x1103bae8 */
  push32((uint32_t)(0x1103bae8u));
  /* 110163e7 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 110163ec push 0 */
  push32((uint32_t)(0x0u));
  /* 110163ee push 0 */
  push32((uint32_t)(0x0u));
  /* 110163f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110163f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110163f4 call 0x110141f0 */
  push32(0x110163f9u); f_110141f0();
  /* 110163f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110163fc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110163ff jne 0x11016402 */
  if (!C.zf) goto L_11016402;
  /* 11016401 int3  */
  x86_unimpl("int3 @ 0x11016401");
L_11016402:;
  /* 11016402 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11016404 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11016406 jne 0x110163e2 */
  if (!C.zf) goto L_110163e2;
L_11016408:;
  /* 11016408 push 9 */
  push32((uint32_t)(0x9u));
  /* 1101640a call 0x11018bd0 */
  push32(0x1101640fu); f_11018bd0();
  /* 1101640f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016414 jmp 0x11016628 */
  goto L_11016628;
L_11016419:;
  /* 11016419 mov eax, dword ptr [0x1104061c] */
  EAX = (r32((uint32_t)(0x1104061c)));
  /* 1101641e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11016421 jmp 0x1101642b */
  goto L_1101642b;
L_11016423:;
  /* 11016423 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016426 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11016428 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1101642b:;
  /* 1101642b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101642f je 0x1101661b */
  if (C.zf) goto L_1101661b;
  /* 11016435 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1101643c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101643f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11016442 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11016448 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101644b je 0x11016470 */
  if (C.zf) goto L_11016470;
  /* 1101644d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016450 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016454 je 0x11016470 */
  if (C.zf) goto L_11016470;
  /* 11016456 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016459 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1101645c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11016462 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016465 je 0x11016470 */
  if (C.zf) goto L_11016470;
  /* 11016467 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101646a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101646e jne 0x11016488 */
  if (!C.zf) goto L_11016488;
L_11016470:;
  /* 11016470 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016473 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11016476 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101647c mov edx, dword ptr [ecx*4 + 0x1103ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103ea94)));
  /* 11016483 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11016486 jmp 0x1101648f */
  goto L_1101648f;
L_11016488:;
  /* 11016488 mov dword ptr [ebp - 0x14], 0x1103bae0 */
  w32((uint32_t)(EBP + -0x14), (0x1103bae0u));
L_1101648f:;
  /* 1101648f push 4 */
  push32((uint32_t)(0x4u));
  /* 11016491 mov al, byte ptr [0x1103ea90] */
  AL = (r8((uint32_t)(0x1103ea90)));
  /* 11016496 push eax */
  push32((uint32_t)(EAX));
  /* 11016497 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101649a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101649d push ecx */
  push32((uint32_t)(ECX));
  /* 1101649e call 0x11016240 */
  push32(0x110164a3u); f_11016240();
  /* 110164a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110164a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110164a8 jne 0x110164e4 */
  if (!C.zf) goto L_110164e4;
L_110164aa:;
  /* 110164aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110164ad add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110164b0 push edx */
  push32((uint32_t)(EDX));
  /* 110164b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110164b4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 110164b7 push ecx */
  push32((uint32_t)(ECX));
  /* 110164b8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110164bb push edx */
  push32((uint32_t)(EDX));
  /* 110164bc push 0x1103b9bc */
  push32((uint32_t)(0x1103b9bcu));
  /* 110164c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 110164c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110164c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110164c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110164c9 call 0x110141f0 */
  push32(0x110164ceu); f_110141f0();
  /* 110164ce add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110164d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110164d4 jne 0x110164d7 */
  if (!C.zf) goto L_110164d7;
  /* 110164d6 int3  */
  x86_unimpl("int3 @ 0x110164d6");
L_110164d7:;
  /* 110164d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110164d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110164db jne 0x110164aa */
  if (!C.zf) goto L_110164aa;
  /* 110164dd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_110164e4:;
  /* 110164e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 110164e6 mov cl, byte ptr [0x1103ea90] */
  CL = (r8((uint32_t)(0x1103ea90)));
  /* 110164ec push ecx */
  push32((uint32_t)(ECX));
  /* 110164ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110164f0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 110164f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110164f6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 110164fa push edx */
  push32((uint32_t)(EDX));
  /* 110164fb call 0x11016240 */
  push32(0x11016500u); f_11016240();
  /* 11016500 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016505 jne 0x11016541 */
  if (!C.zf) goto L_11016541;
L_11016507:;
  /* 11016507 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101650a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101650d push eax */
  push32((uint32_t)(EAX));
  /* 1101650e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016511 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11016514 push edx */
  push32((uint32_t)(EDX));
  /* 11016515 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11016518 push eax */
  push32((uint32_t)(EAX));
  /* 11016519 push 0x1103b990 */
  push32((uint32_t)(0x1103b990u));
  /* 1101651e push 0 */
  push32((uint32_t)(0x0u));
  /* 11016520 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016522 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016524 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016526 call 0x110141f0 */
  push32(0x1101652bu); f_110141f0();
  /* 1101652b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101652e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016531 jne 0x11016534 */
  if (!C.zf) goto L_11016534;
  /* 11016533 int3  */
  x86_unimpl("int3 @ 0x11016533");
L_11016534:;
  /* 11016534 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11016536 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016538 jne 0x11016507 */
  if (!C.zf) goto L_11016507;
  /* 1101653a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11016541:;
  /* 11016541 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016544 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016548 jne 0x1101659a */
  if (!C.zf) goto L_1101659a;
  /* 1101654a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101654d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11016550 push ecx */
  push32((uint32_t)(ECX));
  /* 11016551 mov dl, byte ptr [0x1103ea91] */
  DL = (r8((uint32_t)(0x1103ea91)));
  /* 11016557 push edx */
  push32((uint32_t)(EDX));
  /* 11016558 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101655b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101655e push eax */
  push32((uint32_t)(EAX));
  /* 1101655f call 0x11016240 */
  push32(0x11016564u); f_11016240();
  /* 11016564 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016569 jne 0x1101659a */
  if (!C.zf) goto L_1101659a;
L_1101656b:;
  /* 1101656b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101656e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016571 push ecx */
  push32((uint32_t)(ECX));
  /* 11016572 push 0x1103bab4 */
  push32((uint32_t)(0x1103bab4u));
  /* 11016577 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016579 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101657b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101657d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101657f call 0x110141f0 */
  push32(0x11016584u); f_110141f0();
  /* 11016584 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016587 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101658a jne 0x1101658d */
  if (!C.zf) goto L_1101658d;
  /* 1101658c int3  */
  x86_unimpl("int3 @ 0x1101658c");
L_1101658d:;
  /* 1101658d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101658f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11016591 jne 0x1101656b */
  if (!C.zf) goto L_1101656b;
  /* 11016593 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1101659a:;
  /* 1101659a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101659e jne 0x11016616 */
  if (!C.zf) goto L_11016616;
  /* 110165a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110165a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110165a7 je 0x110165dc */
  if (C.zf) goto L_110165dc;
L_110165a9:;
  /* 110165a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110165ac mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 110165af push edx */
  push32((uint32_t)(EDX));
  /* 110165b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110165b3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 110165b6 push ecx */
  push32((uint32_t)(ECX));
  /* 110165b7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110165ba push edx */
  push32((uint32_t)(EDX));
  /* 110165bb push 0x1103ba94 */
  push32((uint32_t)(0x1103ba94u));
  /* 110165c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110165c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110165c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110165c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110165c8 call 0x110141f0 */
  push32(0x110165cdu); f_110141f0();
  /* 110165cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110165d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110165d3 jne 0x110165d6 */
  if (!C.zf) goto L_110165d6;
  /* 110165d5 int3  */
  x86_unimpl("int3 @ 0x110165d5");
L_110165d6:;
  /* 110165d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110165d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110165da jne 0x110165a9 */
  if (!C.zf) goto L_110165a9;
L_110165dc:;
  /* 110165dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110165df mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 110165e2 push edx */
  push32((uint32_t)(EDX));
  /* 110165e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110165e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110165e9 push eax */
  push32((uint32_t)(EAX));
  /* 110165ea mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 110165ed push ecx */
  push32((uint32_t)(ECX));
  /* 110165ee push 0x1103ba68 */
  push32((uint32_t)(0x1103ba68u));
  /* 110165f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110165f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110165f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110165f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110165fb call 0x110141f0 */
  push32(0x11016600u); f_110141f0();
  /* 11016600 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016603 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016606 jne 0x11016609 */
  if (!C.zf) goto L_11016609;
  /* 11016608 int3  */
  x86_unimpl("int3 @ 0x11016608");
L_11016609:;
  /* 11016609 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101660b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101660d jne 0x110165dc */
  if (!C.zf) goto L_110165dc;
  /* 1101660f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11016616:;
  /* 11016616 jmp 0x11016423 */
  goto L_11016423;
L_1101661b:;
  /* 1101661b push 9 */
  push32((uint32_t)(0x9u));
  /* 1101661d call 0x11018bd0 */
  push32(0x11016622u); f_11018bd0();
  /* 11016622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11016628:;
  /* 11016628 pop edi */
  EDI = (pop32());
  /* 11016629 pop esi */
  ESI = (pop32());
  /* 1101662a pop ebx */
  EBX = (pop32());
  /* 1101662b mov esp, ebp */
  ESP = (EBP);
  /* 1101662d pop ebp */
  EBP = (pop32());
  /* 1101662e ret  */
  ESPCHK(0x110162d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006640 @ 0x11016640 (34 bytes, 13 insns) */
void f_11016640(void) {
  FTRACE(0x11016640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016640 push ebp */
  push32((uint32_t)(EBP));
  /* 11016641 mov ebp, esp */
  EBP = (ESP);
  /* 11016643 push ecx */
  push32((uint32_t)(ECX));
  /* 11016644 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 11016649 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101664c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016650 je 0x1101665b */
  if (C.zf) goto L_1101665b;
  /* 11016652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016655 mov dword ptr [0x1103ea84], ecx */
  w32((uint32_t)(0x1103ea84), (ECX));
L_1101665b:;
  /* 1101665b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101665e mov esp, ebp */
  ESP = (EBP);
  /* 11016660 pop ebp */
  EBP = (pop32());
  /* 11016661 ret  */
  ESPCHK(0x11016640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x11016670 (103 bytes, 38 insns) */
void f_11016670(void) {
  FTRACE(0x11016670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016670 push ebp */
  push32((uint32_t)(EBP));
  /* 11016671 mov ebp, esp */
  EBP = (ESP);
  /* 11016673 push ecx */
  push32((uint32_t)(ECX));
  /* 11016674 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 11016679 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1101667c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101667e jne 0x11016682 */
  if (!C.zf) goto L_11016682;
  /* 11016680 jmp 0x110166d3 */
  goto L_110166d3;
L_11016682:;
  /* 11016682 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016684 call 0x11018b30 */
  push32(0x11016689u); f_11018b30();
  /* 11016689 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101668c mov ecx, dword ptr [0x1104061c] */
  ECX = (r32((uint32_t)(0x1104061c)));
  /* 11016692 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11016695 jmp 0x1101669f */
  goto L_1101669f;
L_11016697:;
  /* 11016697 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101669a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101669c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101669f:;
  /* 1101669f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110166a3 je 0x110166c9 */
  if (C.zf) goto L_110166c9;
  /* 110166a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110166a8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 110166ab and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110166b1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110166b4 jne 0x110166c7 */
  if (!C.zf) goto L_110166c7;
  /* 110166b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110166b9 push eax */
  push32((uint32_t)(EAX));
  /* 110166ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110166bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110166c0 push ecx */
  push32((uint32_t)(ECX));
  /* 110166c1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x110166c4u);
  /* 110166c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110166c7:;
  /* 110166c7 jmp 0x11016697 */
  goto L_11016697;
L_110166c9:;
  /* 110166c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 110166cb call 0x11018bd0 */
  push32(0x110166d0u); f_11018bd0();
  /* 110166d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110166d3:;
  /* 110166d3 mov esp, ebp */
  ESP = (EBP);
  /* 110166d5 pop ebp */
  EBP = (pop32());
  /* 110166d6 ret  */
  ESPCHK(0x11016670u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x110166e0 (75 bytes, 28 insns) */
void f_110166e0(void) {
  FTRACE(0x110166e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110166e0 push ebp */
  push32((uint32_t)(EBP));
  /* 110166e1 mov ebp, esp */
  EBP = (ESP);
  /* 110166e3 push ecx */
  push32((uint32_t)(ECX));
  /* 110166e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110166e8 je 0x1101671d */
  if (C.zf) goto L_1101671d;
  /* 110166ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110166ed push eax */
  push32((uint32_t)(EAX));
  /* 110166ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110166f1 push ecx */
  push32((uint32_t)(ECX));
  /* 110166f2 call dword ptr [0x110433cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433cc))), 0x110166f8u);
  /* 110166f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110166fa jne 0x1101671d */
  if (!C.zf) goto L_1101671d;
  /* 110166fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016700 je 0x11016714 */
  if (C.zf) goto L_11016714;
  /* 11016702 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11016705 push edx */
  push32((uint32_t)(EDX));
  /* 11016706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016709 push eax */
  push32((uint32_t)(EAX));
  /* 1101670a call dword ptr [0x110433bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433bc))), 0x11016710u);
  /* 11016710 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016712 jne 0x1101671d */
  if (!C.zf) goto L_1101671d;
L_11016714:;
  /* 11016714 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1101671b jmp 0x11016724 */
  goto L_11016724;
L_1101671d:;
  /* 1101671d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11016724:;
  /* 11016724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016727 mov esp, ebp */
  ESP = (EBP);
  /* 11016729 pop ebp */
  EBP = (pop32());
  /* 1101672a ret  */
  ESPCHK(0x110166e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006730 @ 0x11016730 (134 bytes, 50 insns) */
void f_11016730(void) {
  FTRACE(0x11016730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016730 push ebp */
  push32((uint32_t)(EBP));
  /* 11016731 mov ebp, esp */
  EBP = (ESP);
  /* 11016733 push ecx */
  push32((uint32_t)(ECX));
  /* 11016734 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016738 jne 0x1101673e */
  if (!C.zf) goto L_1101673e;
  /* 1101673a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101673c jmp 0x110167b2 */
  goto L_110167b2;
L_1101673e:;
  /* 1101673e push 1 */
  push32((uint32_t)(0x1u));
  /* 11016740 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11016742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016745 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016748 push eax */
  push32((uint32_t)(EAX));
  /* 11016749 call 0x110166e0 */
  push32(0x1101674eu); f_110166e0();
  /* 1101674e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016753 jne 0x11016759 */
  if (!C.zf) goto L_11016759;
  /* 11016755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016757 jmp 0x110167b2 */
  goto L_110167b2;
L_11016759:;
  /* 11016759 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101675c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101675f push ecx */
  push32((uint32_t)(ECX));
  /* 11016760 call 0x11019430 */
  push32(0x11016765u); f_11019430();
  /* 11016765 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016768 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101676b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101676f je 0x11016786 */
  if (C.zf) goto L_11016786;
  /* 11016771 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016774 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016777 push edx */
  push32((uint32_t)(EDX));
  /* 11016778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101677b push eax */
  push32((uint32_t)(EAX));
  /* 1101677c call 0x11019490 */
  push32(0x11016781u); f_11019490();
  /* 11016781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016784 jmp 0x110167b2 */
  goto L_110167b2;
L_11016786:;
  /* 11016786 mov ecx, dword ptr [0x110405d0] */
  ECX = (r32((uint32_t)(0x110405d0)));
  /* 1101678c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11016792 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016794 je 0x1101679d */
  if (C.zf) goto L_1101679d;
  /* 11016796 mov eax, 1 */
  EAX = (0x1u);
  /* 1101679b jmp 0x110167b2 */
  goto L_110167b2;
L_1101679d:;
  /* 1101679d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110167a0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110167a3 push edx */
  push32((uint32_t)(EDX));
  /* 110167a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110167a6 mov eax, dword ptr [0x11041f6c] */
  EAX = (r32((uint32_t)(0x11041f6c)));
  /* 110167ab push eax */
  push32((uint32_t)(EAX));
  /* 110167ac call dword ptr [0x110433d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433d0))), 0x110167b2u);
L_110167b2:;
  /* 110167b2 mov esp, ebp */
  ESP = (EBP);
  /* 110167b4 pop ebp */
  EBP = (pop32());
  /* 110167b5 ret  */
  ESPCHK(0x11016730u, _esp0);
  ESP += 4; return;
}

/* FUN_100067c0 @ 0x110167c0 (227 bytes, 80 insns) */
void f_110167c0(void) {
  FTRACE(0x110167c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110167c0 push ebp */
  push32((uint32_t)(EBP));
  /* 110167c1 mov ebp, esp */
  EBP = (ESP);
  /* 110167c3 push ecx */
  push32((uint32_t)(ECX));
  /* 110167c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110167c7 push eax */
  push32((uint32_t)(EAX));
  /* 110167c8 call 0x11016730 */
  push32(0x110167cdu); f_11016730();
  /* 110167cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110167d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110167d2 jne 0x110167db */
  if (!C.zf) goto L_110167db;
  /* 110167d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110167d6 jmp 0x1101689f */
  goto L_1101689f;
L_110167db:;
  /* 110167db push 9 */
  push32((uint32_t)(0x9u));
  /* 110167dd call 0x11018b30 */
  push32(0x110167e2u); f_11018b30();
  /* 110167e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110167e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110167e8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110167eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110167ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110167f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110167f4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110167f9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110167fc je 0x11016820 */
  if (C.zf) goto L_11016820;
  /* 110167fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016801 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016805 je 0x11016820 */
  if (C.zf) goto L_11016820;
  /* 11016807 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101680a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1101680d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11016812 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016815 je 0x11016820 */
  if (C.zf) goto L_11016820;
  /* 11016817 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101681a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101681e jne 0x11016893 */
  if (!C.zf) goto L_11016893;
L_11016820:;
  /* 11016820 push 1 */
  push32((uint32_t)(0x1u));
  /* 11016822 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11016825 push edx */
  push32((uint32_t)(EDX));
  /* 11016826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016829 push eax */
  push32((uint32_t)(EAX));
  /* 1101682a call 0x110166e0 */
  push32(0x1101682fu); f_110166e0();
  /* 1101682f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016832 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016834 je 0x11016893 */
  if (C.zf) goto L_11016893;
  /* 11016836 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016839 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1101683c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101683f jne 0x11016893 */
  if (!C.zf) goto L_11016893;
  /* 11016841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016844 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11016847 cmp ecx, dword ptr [0x1103ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1103ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101684d jg 0x11016893 */
  if ((!C.zf&&C.sf==C.of)) goto L_11016893;
  /* 1101684f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016853 je 0x11016860 */
  if (C.zf) goto L_11016860;
  /* 11016855 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11016858 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101685b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1101685e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11016860:;
  /* 11016860 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016864 je 0x11016871 */
  if (C.zf) goto L_11016871;
  /* 11016866 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11016869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101686c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1101686f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11016871:;
  /* 11016871 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016875 je 0x11016882 */
  if (C.zf) goto L_11016882;
  /* 11016877 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101687a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101687d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11016880 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11016882:;
  /* 11016882 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016884 call 0x11018bd0 */
  push32(0x11016889u); f_11018bd0();
  /* 11016889 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101688c mov eax, 1 */
  EAX = (0x1u);
  /* 11016891 jmp 0x1101689f */
  goto L_1101689f;
L_11016893:;
  /* 11016893 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016895 call 0x11018bd0 */
  push32(0x1101689au); f_11018bd0();
  /* 1101689a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101689d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1101689f:;
  /* 1101689f mov esp, ebp */
  ESP = (EBP);
  /* 110168a1 pop ebp */
  EBP = (pop32());
  /* 110168a2 ret  */
  ESPCHK(0x110167c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x110168b0 (28 bytes, 11 insns) */
void f_110168b0(void) {
  FTRACE(0x110168b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110168b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110168b1 mov ebp, esp */
  EBP = (ESP);
  /* 110168b3 push ecx */
  push32((uint32_t)(ECX));
  /* 110168b4 mov eax, dword ptr [0x11041f78] */
  EAX = (r32((uint32_t)(0x11041f78)));
  /* 110168b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110168bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110168bf mov dword ptr [0x11041f78], ecx */
  w32((uint32_t)(0x11041f78), (ECX));
  /* 110168c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110168c8 mov esp, ebp */
  ESP = (EBP);
  /* 110168ca pop ebp */
  EBP = (pop32());
  /* 110168cb ret  */
  ESPCHK(0x110168b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068d0 @ 0x110168d0 (362 bytes, 116 insns) */
void f_110168d0(void) {
  FTRACE(0x110168d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110168d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110168d1 mov ebp, esp */
  EBP = (ESP);
  /* 110168d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110168d6 push ebx */
  push32((uint32_t)(EBX));
  /* 110168d7 push esi */
  push32((uint32_t)(ESI));
  /* 110168d8 push edi */
  push32((uint32_t)(EDI));
  /* 110168d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110168dd jne 0x1101690a */
  if (!C.zf) goto L_1101690a;
L_110168df:;
  /* 110168df push 0x1103bbc8 */
  push32((uint32_t)(0x1103bbc8u));
  /* 110168e4 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 110168e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110168eb push 0 */
  push32((uint32_t)(0x0u));
  /* 110168ed push 0 */
  push32((uint32_t)(0x0u));
  /* 110168ef push 0 */
  push32((uint32_t)(0x0u));
  /* 110168f1 call 0x110141f0 */
  push32(0x110168f6u); f_110141f0();
  /* 110168f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110168f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110168fc jne 0x110168ff */
  if (!C.zf) goto L_110168ff;
  /* 110168fe int3  */
  x86_unimpl("int3 @ 0x110168fe");
L_110168ff:;
  /* 110168ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016901 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016903 jne 0x110168df */
  if (!C.zf) goto L_110168df;
  /* 11016905 jmp 0x11016a33 */
  goto L_11016a33;
L_1101690a:;
  /* 1101690a push 9 */
  push32((uint32_t)(0x9u));
  /* 1101690c call 0x11018b30 */
  push32(0x11016911u); f_11018b30();
  /* 11016911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016914 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016917 mov edx, dword ptr [0x1104061c] */
  EDX = (r32((uint32_t)(0x1104061c)));
  /* 1101691d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1101691f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11016926 jmp 0x11016931 */
  goto L_11016931;
L_11016928:;
  /* 11016928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101692b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101692e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11016931:;
  /* 11016931 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016935 jge 0x11016955 */
  if ((C.sf==C.of)) goto L_11016955;
  /* 11016937 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101693a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101693d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11016945 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016948 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101694b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11016953 jmp 0x11016928 */
  goto L_11016928;
L_11016955:;
  /* 11016955 mov edx, dword ptr [0x1104061c] */
  EDX = (r32((uint32_t)(0x1104061c)));
  /* 1101695b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1101695e jmp 0x11016968 */
  goto L_11016968;
L_11016960:;
  /* 11016960 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016963 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11016965 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11016968:;
  /* 11016968 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101696c je 0x11016a11 */
  if (C.zf) goto L_11016a11;
  /* 11016972 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016975 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11016978 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1101697d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101697f jl 0x110169e7 */
  if ((C.sf!=C.of)) goto L_110169e7;
  /* 11016981 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016984 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11016987 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1101698d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016990 jge 0x110169e7 */
  if ((C.sf==C.of)) goto L_110169e7;
  /* 11016992 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016995 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11016998 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101699e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110169a1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 110169a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110169a8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110169ab mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 110169ae and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 110169b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110169b7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 110169bb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110169be mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 110169c1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110169c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110169c9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 110169cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110169d0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110169d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110169d6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 110169d9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110169de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110169e1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 110169e5 jmp 0x11016a0c */
  goto L_11016a0c;
L_110169e7:;
  /* 110169e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110169ea push edx */
  push32((uint32_t)(EDX));
  /* 110169eb push 0x1103bba4 */
  push32((uint32_t)(0x1103bba4u));
  /* 110169f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 110169f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110169f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 110169f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 110169f8 call 0x110141f0 */
  push32(0x110169fdu); f_110141f0();
  /* 110169fd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016a00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016a03 jne 0x11016a06 */
  if (!C.zf) goto L_11016a06;
  /* 11016a05 int3  */
  x86_unimpl("int3 @ 0x11016a05");
L_11016a06:;
  /* 11016a06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016a08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016a0a jne 0x110169e7 */
  if (!C.zf) goto L_110169e7;
L_11016a0c:;
  /* 11016a0c jmp 0x11016960 */
  goto L_11016960;
L_11016a11:;
  /* 11016a11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016a14 mov edx, dword ptr [0x11040624] */
  EDX = (r32((uint32_t)(0x11040624)));
  /* 11016a1a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11016a1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016a20 mov ecx, dword ptr [0x11040618] */
  ECX = (r32((uint32_t)(0x11040618)));
  /* 11016a26 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11016a29 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016a2b call 0x11018bd0 */
  push32(0x11016a30u); f_11018bd0();
  /* 11016a30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11016a33:;
  /* 11016a33 pop edi */
  EDI = (pop32());
  /* 11016a34 pop esi */
  ESI = (pop32());
  /* 11016a35 pop ebx */
  EBX = (pop32());
  /* 11016a36 mov esp, ebp */
  ESP = (EBP);
  /* 11016a38 pop ebp */
  EBP = (pop32());
  /* 11016a39 ret  */
  ESPCHK(0x110168d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x11016a40 (291 bytes, 95 insns) */
void f_11016a40(void) {
  FTRACE(0x11016a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11016a41 mov ebp, esp */
  EBP = (ESP);
  /* 11016a43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016a46 push ebx */
  push32((uint32_t)(EBX));
  /* 11016a47 push esi */
  push32((uint32_t)(ESI));
  /* 11016a48 push edi */
  push32((uint32_t)(EDI));
  /* 11016a49 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11016a50 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016a54 je 0x11016a62 */
  if (C.zf) goto L_11016a62;
  /* 11016a56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016a5a je 0x11016a62 */
  if (C.zf) goto L_11016a62;
  /* 11016a5c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016a60 jne 0x11016a90 */
  if (!C.zf) goto L_11016a90;
L_11016a62:;
  /* 11016a62 push 0x1103bbf0 */
  push32((uint32_t)(0x1103bbf0u));
  /* 11016a67 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11016a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11016a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11016a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016a74 call 0x110141f0 */
  push32(0x11016a79u); f_110141f0();
  /* 11016a79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016a7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016a7f jne 0x11016a82 */
  if (!C.zf) goto L_11016a82;
  /* 11016a81 int3  */
  x86_unimpl("int3 @ 0x11016a81");
L_11016a82:;
  /* 11016a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016a84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016a86 jne 0x11016a62 */
  if (!C.zf) goto L_11016a62;
  /* 11016a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11016a8b jmp 0x11016b5c */
  goto L_11016b5c;
L_11016a90:;
  /* 11016a90 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11016a97 jmp 0x11016aa2 */
  goto L_11016aa2;
L_11016a99:;
  /* 11016a99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016a9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016a9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11016aa2:;
  /* 11016aa2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016aa6 jge 0x11016b2c */
  if ((C.sf==C.of)) goto L_11016b2c;
  /* 11016aac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016aaf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11016ab2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016ab5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11016ab8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11016abc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016ac0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016ac3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016ac6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11016aca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016acd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11016ad0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016ad3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11016ad6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11016ada sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016ade mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016ae1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016ae4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11016ae8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016aee cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016af3 jne 0x11016b02 */
  if (!C.zf) goto L_11016b02;
  /* 11016af5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016af8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016afb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016b00 je 0x11016b27 */
  if (C.zf) goto L_11016b27;
L_11016b02:;
  /* 11016b02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016b06 je 0x11016b27 */
  if (C.zf) goto L_11016b27;
  /* 11016b08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016b0c jne 0x11016b20 */
  if (!C.zf) goto L_11016b20;
  /* 11016b0e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016b12 jne 0x11016b27 */
  if (!C.zf) goto L_11016b27;
  /* 11016b14 mov eax, dword ptr [0x1103ea84] */
  EAX = (r32((uint32_t)(0x1103ea84)));
  /* 11016b19 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11016b1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016b1e je 0x11016b27 */
  if (C.zf) goto L_11016b27;
L_11016b20:;
  /* 11016b20 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11016b27:;
  /* 11016b27 jmp 0x11016a99 */
  goto L_11016a99;
L_11016b2c:;
  /* 11016b2c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11016b2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11016b32 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11016b35 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016b38 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016b3b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11016b3e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11016b41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11016b44 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11016b47 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016b4a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016b4d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11016b50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016b53 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11016b59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11016b5c:;
  /* 11016b5c pop edi */
  EDI = (pop32());
  /* 11016b5d pop esi */
  ESI = (pop32());
  /* 11016b5e pop ebx */
  EBX = (pop32());
  /* 11016b5f mov esp, ebp */
  ESP = (EBP);
  /* 11016b61 pop ebp */
  EBP = (pop32());
  /* 11016b62 ret  */
  ESPCHK(0x11016a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x11016b70 (697 bytes, 253 insns) */
void f_11016b70(void) {
  FTRACE(0x11016b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11016b71 mov ebp, esp */
  EBP = (ESP);
  /* 11016b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016b76 push ebx */
  push32((uint32_t)(EBX));
  /* 11016b77 push esi */
  push32((uint32_t)(ESI));
  /* 11016b78 push edi */
  push32((uint32_t)(EDI));
  /* 11016b79 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11016b80 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016b82 call 0x11018b30 */
  push32(0x11016b87u); f_11018b30();
  /* 11016b87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11016b8a:;
  /* 11016b8a push 0x1103bce8 */
  push32((uint32_t)(0x1103bce8u));
  /* 11016b8f push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11016b94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016b96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016b98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016b9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11016b9c call 0x110141f0 */
  push32(0x11016ba1u); f_110141f0();
  /* 11016ba1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016ba4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016ba7 jne 0x11016baa */
  if (!C.zf) goto L_11016baa;
  /* 11016ba9 int3  */
  x86_unimpl("int3 @ 0x11016ba9");
L_11016baa:;
  /* 11016baa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016bae jne 0x11016b8a */
  if (!C.zf) goto L_11016b8a;
  /* 11016bb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016bb4 je 0x11016bbe */
  if (C.zf) goto L_11016bbe;
  /* 11016bb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016bb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11016bbb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11016bbe:;
  /* 11016bbe mov eax, dword ptr [0x1104061c] */
  EAX = (r32((uint32_t)(0x1104061c)));
  /* 11016bc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11016bc6 jmp 0x11016bd0 */
  goto L_11016bd0;
L_11016bc8:;
  /* 11016bc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016bcb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11016bcd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11016bd0:;
  /* 11016bd0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016bd4 je 0x11016df2 */
  if (C.zf) goto L_11016df2;
  /* 11016bda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016bdd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016be0 je 0x11016df2 */
  if (C.zf) goto L_11016df2;
  /* 11016be6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016be9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11016bec and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11016bf2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016bf5 je 0x11016c24 */
  if (C.zf) goto L_11016c24;
  /* 11016bf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016bfa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11016bfd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11016c03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016c05 je 0x11016c24 */
  if (C.zf) goto L_11016c24;
  /* 11016c07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016c0a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11016c0d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11016c12 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016c15 jne 0x11016c29 */
  if (!C.zf) goto L_11016c29;
  /* 11016c17 mov ecx, dword ptr [0x1103ea84] */
  ECX = (r32((uint32_t)(0x1103ea84)));
  /* 11016c1d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11016c20 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016c22 jne 0x11016c29 */
  if (!C.zf) goto L_11016c29;
L_11016c24:;
  /* 11016c24 jmp 0x11016ded */
  goto L_11016ded;
L_11016c29:;
  /* 11016c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016c2c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016c30 je 0x11016ca2 */
  if (C.zf) goto L_11016ca2;
  /* 11016c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11016c36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016c39 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11016c3c push ecx */
  push32((uint32_t)(ECX));
  /* 11016c3d call 0x110166e0 */
  push32(0x11016c42u); f_110166e0();
  /* 11016c42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016c47 jne 0x11016c73 */
  if (!C.zf) goto L_11016c73;
L_11016c49:;
  /* 11016c49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016c4c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11016c4f push eax */
  push32((uint32_t)(EAX));
  /* 11016c50 push 0x1103bcd4 */
  push32((uint32_t)(0x1103bcd4u));
  /* 11016c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c5d call 0x110141f0 */
  push32(0x11016c62u); f_110141f0();
  /* 11016c62 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016c65 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016c68 jne 0x11016c6b */
  if (!C.zf) goto L_11016c6b;
  /* 11016c6a int3  */
  x86_unimpl("int3 @ 0x11016c6a");
L_11016c6b:;
  /* 11016c6b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11016c6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016c6f jne 0x11016c49 */
  if (!C.zf) goto L_11016c49;
  /* 11016c71 jmp 0x11016ca2 */
  goto L_11016ca2;
L_11016c73:;
  /* 11016c73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016c76 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11016c79 push eax */
  push32((uint32_t)(EAX));
  /* 11016c7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016c7d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11016c80 push edx */
  push32((uint32_t)(EDX));
  /* 11016c81 push 0x1103bcc8 */
  push32((uint32_t)(0x1103bcc8u));
  /* 11016c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11016c8e call 0x110141f0 */
  push32(0x11016c93u); f_110141f0();
  /* 11016c93 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016c96 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016c99 jne 0x11016c9c */
  if (!C.zf) goto L_11016c9c;
  /* 11016c9b int3  */
  x86_unimpl("int3 @ 0x11016c9b");
L_11016c9c:;
  /* 11016c9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016c9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016ca0 jne 0x11016c73 */
  if (!C.zf) goto L_11016c73;
L_11016ca2:;
  /* 11016ca2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016ca5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11016ca8 push edx */
  push32((uint32_t)(EDX));
  /* 11016ca9 push 0x1103bcc0 */
  push32((uint32_t)(0x1103bcc0u));
  /* 11016cae push 0 */
  push32((uint32_t)(0x0u));
  /* 11016cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016cb6 call 0x110141f0 */
  push32(0x11016cbbu); f_110141f0();
  /* 11016cbb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016cbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016cc1 jne 0x11016cc4 */
  if (!C.zf) goto L_11016cc4;
  /* 11016cc3 int3  */
  x86_unimpl("int3 @ 0x11016cc3");
L_11016cc4:;
  /* 11016cc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11016cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11016cc8 jne 0x11016ca2 */
  if (!C.zf) goto L_11016ca2;
  /* 11016cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016ccd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11016cd0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11016cd6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016cd9 jne 0x11016d4c */
  if (!C.zf) goto L_11016d4c;
L_11016cdb:;
  /* 11016cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016cde mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11016ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 11016ce2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016ce5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11016ce8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11016ceb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11016cf0 push eax */
  push32((uint32_t)(EAX));
  /* 11016cf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016cf4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 11016cf8 push 0x1103bc8c */
  push32((uint32_t)(0x1103bc8cu));
  /* 11016cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 11016cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11016d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016d03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016d05 call 0x110141f0 */
  push32(0x11016d0au); f_110141f0();
  /* 11016d0a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016d0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016d10 jne 0x11016d13 */
  if (!C.zf) goto L_11016d13;
  /* 11016d12 int3  */
  x86_unimpl("int3 @ 0x11016d12");
L_11016d13:;
  /* 11016d13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11016d15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11016d17 jne 0x11016cdb */
  if (!C.zf) goto L_11016cdb;
  /* 11016d19 cmp dword ptr [0x11041f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11041f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016d20 je 0x11016d3b */
  if (C.zf) goto L_11016d3b;
  /* 11016d22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016d25 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11016d28 push ecx */
  push32((uint32_t)(ECX));
  /* 11016d29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016d2c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016d2f push edx */
  push32((uint32_t)(EDX));
  /* 11016d30 call dword ptr [0x11041f78] */
  call_ind((uint32_t)(r32((uint32_t)(0x11041f78))), 0x11016d36u);
  /* 11016d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016d39 jmp 0x11016d47 */
  goto L_11016d47;
L_11016d3b:;
  /* 11016d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016d3e push eax */
  push32((uint32_t)(EAX));
  /* 11016d3f call 0x11016e30 */
  push32(0x11016d44u); f_11016e30();
  /* 11016d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11016d47:;
  /* 11016d47 jmp 0x11016ded */
  goto L_11016ded;
L_11016d4c:;
  /* 11016d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016d4f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016d53 jne 0x11016d92 */
  if (!C.zf) goto L_11016d92;
L_11016d55:;
  /* 11016d55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016d58 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11016d5b push eax */
  push32((uint32_t)(EAX));
  /* 11016d5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016d5f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016d62 push ecx */
  push32((uint32_t)(ECX));
  /* 11016d63 push 0x1103bc64 */
  push32((uint32_t)(0x1103bc64u));
  /* 11016d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11016d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11016d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11016d70 call 0x110141f0 */
  push32(0x11016d75u); f_110141f0();
  /* 11016d75 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016d78 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016d7b jne 0x11016d7e */
  if (!C.zf) goto L_11016d7e;
  /* 11016d7d int3  */
  x86_unimpl("int3 @ 0x11016d7d");
L_11016d7e:;
  /* 11016d7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11016d80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11016d82 jne 0x11016d55 */
  if (!C.zf) goto L_11016d55;
  /* 11016d84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016d87 push eax */
  push32((uint32_t)(EAX));
  /* 11016d88 call 0x11016e30 */
  push32(0x11016d8du); f_11016e30();
  /* 11016d8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016d90 jmp 0x11016ded */
  goto L_11016ded;
L_11016d92:;
  /* 11016d92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016d95 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11016d98 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11016d9e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016da1 jne 0x11016ded */
  if (!C.zf) goto L_11016ded;
L_11016da3:;
  /* 11016da3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016da6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11016da9 push ecx */
  push32((uint32_t)(ECX));
  /* 11016daa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016dad mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11016db0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11016db3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11016db8 push eax */
  push32((uint32_t)(EAX));
  /* 11016db9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016dbc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016dbf push ecx */
  push32((uint32_t)(ECX));
  /* 11016dc0 push 0x1103bc30 */
  push32((uint32_t)(0x1103bc30u));
  /* 11016dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016dc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 11016dcd call 0x110141f0 */
  push32(0x11016dd2u); f_110141f0();
  /* 11016dd2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016dd5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016dd8 jne 0x11016ddb */
  if (!C.zf) goto L_11016ddb;
  /* 11016dda int3  */
  x86_unimpl("int3 @ 0x11016dda");
L_11016ddb:;
  /* 11016ddb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11016ddd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11016ddf jne 0x11016da3 */
  if (!C.zf) goto L_11016da3;
  /* 11016de1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016de4 push eax */
  push32((uint32_t)(EAX));
  /* 11016de5 call 0x11016e30 */
  push32(0x11016deau); f_11016e30();
  /* 11016dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11016ded:;
  /* 11016ded jmp 0x11016bc8 */
  goto L_11016bc8;
L_11016df2:;
  /* 11016df2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11016df4 call 0x11018bd0 */
  push32(0x11016df9u); f_11018bd0();
  /* 11016df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11016dfc:;
  /* 11016dfc push 0x1103bc18 */
  push32((uint32_t)(0x1103bc18u));
  /* 11016e01 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11016e06 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 11016e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 11016e0e call 0x110141f0 */
  push32(0x11016e13u); f_110141f0();
  /* 11016e13 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016e16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016e19 jne 0x11016e1c */
  if (!C.zf) goto L_11016e1c;
  /* 11016e1b int3  */
  x86_unimpl("int3 @ 0x11016e1b");
L_11016e1c:;
  /* 11016e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11016e1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016e20 jne 0x11016dfc */
  if (!C.zf) goto L_11016dfc;
  /* 11016e22 pop edi */
  EDI = (pop32());
  /* 11016e23 pop esi */
  ESI = (pop32());
  /* 11016e24 pop ebx */
  EBX = (pop32());
  /* 11016e25 mov esp, ebp */
  ESP = (EBP);
  /* 11016e27 pop ebp */
  EBP = (pop32());
  /* 11016e28 ret  */
  ESPCHK(0x11016b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x11016e30 (276 bytes, 89 insns) */
void f_11016e30(void) {
  FTRACE(0x11016e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11016e31 mov ebp, esp */
  EBP = (ESP);
  /* 11016e33 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11016e37 push esi */
  push32((uint32_t)(ESI));
  /* 11016e38 push edi */
  push32((uint32_t)(EDI));
  /* 11016e39 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11016e40 jmp 0x11016e4b */
  goto L_11016e4b;
L_11016e42:;
  /* 11016e42 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11016e45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016e48 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11016e4b:;
  /* 11016e4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016e4e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016e52 jge 0x11016e5f */
  if ((C.sf==C.of)) goto L_11016e5f;
  /* 11016e54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016e57 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11016e5a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11016e5d jmp 0x11016e66 */
  goto L_11016e66;
L_11016e5f:;
  /* 11016e5f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11016e66:;
  /* 11016e66 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11016e69 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016e6c jge 0x11016f0c */
  if ((C.sf==C.of)) goto L_11016f0c;
  /* 11016e72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11016e75 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016e78 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11016e7b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11016e7e cmp dword ptr [0x1103eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1103eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016e85 jle 0x11016ea3 */
  if ((C.zf||C.sf!=C.of)) goto L_11016ea3;
  /* 11016e87 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11016e8c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11016e8f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11016e95 push ecx */
  push32((uint32_t)(ECX));
  /* 11016e96 call 0x1101b140 */
  push32(0x11016e9bu); f_1101b140();
  /* 11016e9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016e9e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11016ea1 jmp 0x11016ec0 */
  goto L_11016ec0;
L_11016ea3:;
  /* 11016ea3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11016ea6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11016eac mov eax, dword ptr [0x1103ec98] */
  EAX = (r32((uint32_t)(0x1103ec98)));
  /* 11016eb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11016eb3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11016eb7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11016ebd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11016ec0:;
  /* 11016ec0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016ec4 je 0x11016ed4 */
  if (C.zf) goto L_11016ed4;
  /* 11016ec6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11016ec9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11016ecf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11016ed2 jmp 0x11016edb */
  goto L_11016edb;
L_11016ed4:;
  /* 11016ed4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11016edb:;
  /* 11016edb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11016ede mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11016ee1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11016ee5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11016ee8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11016eee push edx */
  push32((uint32_t)(EDX));
  /* 11016eef push 0x1103bd0c */
  push32((uint32_t)(0x1103bd0cu));
  /* 11016ef4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11016ef7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11016efa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11016efe push ecx */
  push32((uint32_t)(ECX));
  /* 11016eff call 0x1101b040 */
  push32(0x11016f04u); f_1101b040();
  /* 11016f04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016f07 jmp 0x11016e42 */
  goto L_11016e42;
L_11016f0c:;
  /* 11016f0c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11016f0f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11016f14:;
  /* 11016f14 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11016f17 push eax */
  push32((uint32_t)(EAX));
  /* 11016f18 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11016f1b push ecx */
  push32((uint32_t)(ECX));
  /* 11016f1c push 0x1103bcfc */
  push32((uint32_t)(0x1103bcfcu));
  /* 11016f21 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016f29 call 0x110141f0 */
  push32(0x11016f2eu); f_110141f0();
  /* 11016f2e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016f31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016f34 jne 0x11016f37 */
  if (!C.zf) goto L_11016f37;
  /* 11016f36 int3  */
  x86_unimpl("int3 @ 0x11016f36");
L_11016f37:;
  /* 11016f37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11016f39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11016f3b jne 0x11016f14 */
  if (!C.zf) goto L_11016f14;
  /* 11016f3d pop edi */
  EDI = (pop32());
  /* 11016f3e pop esi */
  ESI = (pop32());
  /* 11016f3f pop ebx */
  EBX = (pop32());
  /* 11016f40 mov esp, ebp */
  ESP = (EBP);
  /* 11016f42 pop ebp */
  EBP = (pop32());
  /* 11016f43 ret  */
  ESPCHK(0x11016e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f50 @ 0x11016f50 (116 bytes, 46 insns) */
void f_11016f50(void) {
  FTRACE(0x11016f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11016f51 mov ebp, esp */
  EBP = (ESP);
  /* 11016f53 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11016f56 push ebx */
  push32((uint32_t)(EBX));
  /* 11016f57 push esi */
  push32((uint32_t)(ESI));
  /* 11016f58 push edi */
  push32((uint32_t)(EDI));
  /* 11016f59 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11016f5c push eax */
  push32((uint32_t)(EAX));
  /* 11016f5d call 0x110168d0 */
  push32(0x11016f62u); f_110168d0();
  /* 11016f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016f65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016f69 jne 0x11016f84 */
  if (!C.zf) goto L_11016f84;
  /* 11016f6b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016f6f jne 0x11016f84 */
  if (!C.zf) goto L_11016f84;
  /* 11016f71 mov ecx, dword ptr [0x1103ea84] */
  ECX = (r32((uint32_t)(0x1103ea84)));
  /* 11016f77 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11016f7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11016f7c je 0x11016fbb */
  if (C.zf) goto L_11016fbb;
  /* 11016f7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016f82 je 0x11016fbb */
  if (C.zf) goto L_11016fbb;
L_11016f84:;
  /* 11016f84 push 0x1103bd14 */
  push32((uint32_t)(0x1103bd14u));
  /* 11016f89 push 0x1103b6e0 */
  push32((uint32_t)(0x1103b6e0u));
  /* 11016f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11016f90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 11016f96 call 0x110141f0 */
  push32(0x11016f9bu); f_110141f0();
  /* 11016f9b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016f9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016fa1 jne 0x11016fa4 */
  if (!C.zf) goto L_11016fa4;
  /* 11016fa3 int3  */
  x86_unimpl("int3 @ 0x11016fa3");
L_11016fa4:;
  /* 11016fa4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11016fa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11016fa8 jne 0x11016f84 */
  if (!C.zf) goto L_11016f84;
  /* 11016faa push 0 */
  push32((uint32_t)(0x0u));
  /* 11016fac call 0x11016b70 */
  push32(0x11016fb1u); f_11016b70();
  /* 11016fb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11016fb4 mov eax, 1 */
  EAX = (0x1u);
  /* 11016fb9 jmp 0x11016fbd */
  goto L_11016fbd;
L_11016fbb:;
  /* 11016fbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11016fbd:;
  /* 11016fbd pop edi */
  EDI = (pop32());
  /* 11016fbe pop esi */
  ESI = (pop32());
  /* 11016fbf pop ebx */
  EBX = (pop32());
  /* 11016fc0 mov esp, ebp */
  ESP = (EBP);
  /* 11016fc2 pop ebp */
  EBP = (pop32());
  /* 11016fc3 ret  */
  ESPCHK(0x11016f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fd0 @ 0x11016fd0 (197 bytes, 79 insns) */
void f_11016fd0(void) {
  FTRACE(0x11016fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11016fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11016fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11016fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11016fd4 push ebx */
  push32((uint32_t)(EBX));
  /* 11016fd5 push esi */
  push32((uint32_t)(ESI));
  /* 11016fd6 push edi */
  push32((uint32_t)(EDI));
  /* 11016fd7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016fdb jne 0x11016fe2 */
  if (!C.zf) goto L_11016fe2;
  /* 11016fdd jmp 0x1101708e */
  goto L_1101708e;
L_11016fe2:;
  /* 11016fe2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11016fe9 jmp 0x11016ff4 */
  goto L_11016ff4;
L_11016feb:;
  /* 11016feb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016fee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11016ff1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11016ff4:;
  /* 11016ff4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11016ff8 jge 0x1101703e */
  if ((C.sf==C.of)) goto L_1101703e;
L_11016ffa:;
  /* 11016ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11016ffd mov edx, dword ptr [ecx*4 + 0x1103ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103ea94)));
  /* 11017004 push edx */
  push32((uint32_t)(EDX));
  /* 11017005 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017008 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101700b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1101700f push edx */
  push32((uint32_t)(EDX));
  /* 11017010 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017016 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1101701a push edx */
  push32((uint32_t)(EDX));
  /* 1101701b push 0x1103bd70 */
  push32((uint32_t)(0x1103bd70u));
  /* 11017020 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017022 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017024 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017026 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017028 call 0x110141f0 */
  push32(0x1101702du); f_110141f0();
  /* 1101702d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017030 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017033 jne 0x11017036 */
  if (!C.zf) goto L_11017036;
  /* 11017035 int3  */
  x86_unimpl("int3 @ 0x11017035");
L_11017036:;
  /* 11017036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11017038 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101703a jne 0x11016ffa */
  if (!C.zf) goto L_11016ffa;
  /* 1101703c jmp 0x11016feb */
  goto L_11016feb;
L_1101703e:;
  /* 1101703e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017041 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11017044 push edx */
  push32((uint32_t)(EDX));
  /* 11017045 push 0x1103bd4c */
  push32((uint32_t)(0x1103bd4cu));
  /* 1101704a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101704c push 0 */
  push32((uint32_t)(0x0u));
  /* 1101704e push 0 */
  push32((uint32_t)(0x0u));
  /* 11017050 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017052 call 0x110141f0 */
  push32(0x11017057u); f_110141f0();
  /* 11017057 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101705a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101705d jne 0x11017060 */
  if (!C.zf) goto L_11017060;
  /* 1101705f int3  */
  x86_unimpl("int3 @ 0x1101705f");
L_11017060:;
  /* 11017060 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11017062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11017064 jne 0x1101703e */
  if (!C.zf) goto L_1101703e;
L_11017066:;
  /* 11017066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017069 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1101706c push edx */
  push32((uint32_t)(EDX));
  /* 1101706d push 0x1103bd2c */
  push32((uint32_t)(0x1103bd2cu));
  /* 11017072 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017074 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017076 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101707a call 0x110141f0 */
  push32(0x1101707fu); f_110141f0();
  /* 1101707f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017082 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017085 jne 0x11017088 */
  if (!C.zf) goto L_11017088;
  /* 11017087 int3  */
  x86_unimpl("int3 @ 0x11017087");
L_11017088:;
  /* 11017088 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101708a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101708c jne 0x11017066 */
  if (!C.zf) goto L_11017066;
L_1101708e:;
  /* 1101708e pop edi */
  EDI = (pop32());
  /* 1101708f pop esi */
  ESI = (pop32());
  /* 11017090 pop ebx */
  EBX = (pop32());
  /* 11017091 mov esp, ebp */
  ESP = (EBP);
  /* 11017093 pop ebp */
  EBP = (pop32());
  /* 11017094 ret  */
  ESPCHK(0x11016fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x110170a0 (329 bytes, 102 insns) */
void f_110170a0(void) {
  FTRACE(0x110170a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110170a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110170a1 mov ebp, esp */
  EBP = (ESP);
  /* 110170a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110170a6 cmp dword ptr [0x110420f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110420f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110170ad jne 0x110170b4 */
  if (!C.zf) goto L_110170b4;
  /* 110170af call 0x1101b9e0 */
  push32(0x110170b4u); f_1101b9e0();
L_110170b4:;
  /* 110170b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110170bb mov eax, dword ptr [0x110405b8] */
  EAX = (r32((uint32_t)(0x110405b8)));
  /* 110170c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_110170c3:;
  /* 110170c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110170c6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110170c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110170cb je 0x110170f9 */
  if (C.zf) goto L_110170f9;
  /* 110170cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110170d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110170d3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110170d6 je 0x110170e1 */
  if (C.zf) goto L_110170e1;
  /* 110170d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110170db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110170de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_110170e1:;
  /* 110170e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110170e4 push eax */
  push32((uint32_t)(EAX));
  /* 110170e5 call 0x11017f60 */
  push32(0x110170eau); f_11017f60();
  /* 110170ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110170ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110170f0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 110170f4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110170f7 jmp 0x110170c3 */
  goto L_110170c3;
L_110170f9:;
  /* 110170f9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 110170fb push 0x1103bd90 */
  push32((uint32_t)(0x1103bd90u));
  /* 11017100 push 2 */
  push32((uint32_t)(0x2u));
  /* 11017102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017105 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1101710c push ecx */
  push32((uint32_t)(ECX));
  /* 1101710d call 0x11015130 */
  push32(0x11017112u); f_11015130();
  /* 11017112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017115 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11017118 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101711b mov dword ptr [0x110405ec], edx */
  w32((uint32_t)(0x110405ec), (EDX));
  /* 11017121 cmp dword ptr [0x110405ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017128 jne 0x11017134 */
  if (!C.zf) goto L_11017134;
  /* 1101712a push 9 */
  push32((uint32_t)(0x9u));
  /* 1101712c call 0x110140a0 */
  push32(0x11017131u); f_110140a0();
  /* 11017131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11017134:;
  /* 11017134 mov eax, dword ptr [0x110405b8] */
  EAX = (r32((uint32_t)(0x110405b8)));
  /* 11017139 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101713c jmp 0x11017147 */
  goto L_11017147;
L_1101713e:;
  /* 1101713e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017141 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017144 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11017147:;
  /* 11017147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101714a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1101714d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101714f je 0x110171b7 */
  if (C.zf) goto L_110171b7;
  /* 11017151 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017154 push ecx */
  push32((uint32_t)(ECX));
  /* 11017155 call 0x11017f60 */
  push32(0x1101715au); f_11017f60();
  /* 1101715a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101715d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017160 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11017163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017166 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11017169 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101716c je 0x110171b5 */
  if (C.zf) goto L_110171b5;
  /* 1101716e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11017170 push 0x1103bd90 */
  push32((uint32_t)(0x1103bd90u));
  /* 11017175 push 2 */
  push32((uint32_t)(0x2u));
  /* 11017177 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101717a push ecx */
  push32((uint32_t)(ECX));
  /* 1101717b call 0x11015130 */
  push32(0x11017180u); f_11015130();
  /* 11017180 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017183 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017186 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11017188 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101718b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101718e jne 0x1101719a */
  if (!C.zf) goto L_1101719a;
  /* 11017190 push 9 */
  push32((uint32_t)(0x9u));
  /* 11017192 call 0x110140a0 */
  push32(0x11017197u); f_110140a0();
  /* 11017197 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101719a:;
  /* 1101719a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101719d push ecx */
  push32((uint32_t)(ECX));
  /* 1101719e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 110171a1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110171a3 push eax */
  push32((uint32_t)(EAX));
  /* 110171a4 call 0x110180e0 */
  push32(0x110171a9u); f_110180e0();
  /* 110171a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110171ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110171af add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110171b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_110171b5:;
  /* 110171b5 jmp 0x1101713e */
  goto L_1101713e;
L_110171b7:;
  /* 110171b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 110171b9 mov edx, dword ptr [0x110405b8] */
  EDX = (r32((uint32_t)(0x110405b8)));
  /* 110171bf push edx */
  push32((uint32_t)(EDX));
  /* 110171c0 call 0x11015bc0 */
  push32(0x110171c5u); f_11015bc0();
  /* 110171c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110171c8 mov dword ptr [0x110405b8], 0 */
  w32((uint32_t)(0x110405b8), (0x0u));
  /* 110171d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110171d5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 110171db mov dword ptr [0x110420e0], 1 */
  w32((uint32_t)(0x110420e0), (0x1u));
  /* 110171e5 mov esp, ebp */
  ESP = (EBP);
  /* 110171e7 pop ebp */
  EBP = (pop32());
  /* 110171e8 ret  */
  ESPCHK(0x110170a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x110171f0 (216 bytes, 69 insns) */
void f_110171f0(void) {
  FTRACE(0x110171f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110171f0 push ebp */
  push32((uint32_t)(EBP));
  /* 110171f1 mov ebp, esp */
  EBP = (ESP);
  /* 110171f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110171f6 cmp dword ptr [0x110420f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110420f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110171fd jne 0x11017204 */
  if (!C.zf) goto L_11017204;
  /* 110171ff call 0x1101b9e0 */
  push32(0x11017204u); f_1101b9e0();
L_11017204:;
  /* 11017204 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11017209 push 0x11040628 */
  push32((uint32_t)(0x11040628u));
  /* 1101720e push 0 */
  push32((uint32_t)(0x0u));
  /* 11017210 call dword ptr [0x1104338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104338c))), 0x11017216u);
  /* 11017216 mov dword ptr [0x110405fc], 0x11040628 */
  w32((uint32_t)(0x110405fc), (0x11040628u));
  /* 11017220 mov eax, dword ptr [0x1104210c] */
  EAX = (r32((uint32_t)(0x1104210c)));
  /* 11017225 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11017228 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101722a jne 0x11017237 */
  if (!C.zf) goto L_11017237;
  /* 1101722c mov edx, dword ptr [0x110405fc] */
  EDX = (r32((uint32_t)(0x110405fc)));
  /* 11017232 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11017235 jmp 0x1101723f */
  goto L_1101723f;
L_11017237:;
  /* 11017237 mov eax, dword ptr [0x1104210c] */
  EAX = (r32((uint32_t)(0x1104210c)));
  /* 1101723c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1101723f:;
  /* 1101723f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11017242 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11017245 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11017248 push edx */
  push32((uint32_t)(EDX));
  /* 11017249 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1101724c push eax */
  push32((uint32_t)(EAX));
  /* 1101724d push 0 */
  push32((uint32_t)(0x0u));
  /* 1101724f push 0 */
  push32((uint32_t)(0x0u));
  /* 11017251 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11017254 push ecx */
  push32((uint32_t)(ECX));
  /* 11017255 call 0x110172d0 */
  push32(0x1101725au); f_110172d0();
  /* 1101725a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101725d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11017262 push 0x1103bd9c */
  push32((uint32_t)(0x1103bd9cu));
  /* 11017267 push 2 */
  push32((uint32_t)(0x2u));
  /* 11017269 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101726c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101726f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11017272 push ecx */
  push32((uint32_t)(ECX));
  /* 11017273 call 0x11015130 */
  push32(0x11017278u); f_11015130();
  /* 11017278 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101727b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101727e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017282 jne 0x1101728e */
  if (!C.zf) goto L_1101728e;
  /* 11017284 push 8 */
  push32((uint32_t)(0x8u));
  /* 11017286 call 0x110140a0 */
  push32(0x1101728bu); f_110140a0();
  /* 1101728b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1101728e:;
  /* 1101728e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11017291 push edx */
  push32((uint32_t)(EDX));
  /* 11017292 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11017295 push eax */
  push32((uint32_t)(EAX));
  /* 11017296 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017299 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101729c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1101729f push eax */
  push32((uint32_t)(EAX));
  /* 110172a0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110172a3 push ecx */
  push32((uint32_t)(ECX));
  /* 110172a4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110172a7 push edx */
  push32((uint32_t)(EDX));
  /* 110172a8 call 0x110172d0 */
  push32(0x110172adu); f_110172d0();
  /* 110172ad add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110172b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110172b3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110172b6 mov dword ptr [0x110405e0], eax */
  w32((uint32_t)(0x110405e0), (EAX));
  /* 110172bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110172be mov dword ptr [0x110405e4], ecx */
  w32((uint32_t)(0x110405e4), (ECX));
  /* 110172c4 mov esp, ebp */
  ESP = (EBP);
  /* 110172c6 pop ebp */
  EBP = (pop32());
  /* 110172c7 ret  */
  ESPCHK(0x110171f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x110172d0 (1060 bytes, 360 insns) */
void f_110172d0(void) {
  FTRACE(0x110172d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110172d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110172d1 mov ebp, esp */
  EBP = (ESP);
  /* 110172d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110172d6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110172d9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 110172df mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110172e2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 110172e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 110172eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110172ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110172f2 je 0x11017305 */
  if (C.zf) goto L_11017305;
  /* 110172f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110172f7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110172fa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 110172fc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110172ff add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017302 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11017305:;
  /* 11017305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017308 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1101730b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101730e jne 0x110173dd */
  if (!C.zf) goto L_110173dd;
L_11017314:;
  /* 11017314 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017317 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101731a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101731d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017320 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11017323 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017326 je 0x110173a2 */
  if (C.zf) goto L_110173a2;
  /* 11017328 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101732b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1101732e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11017330 je 0x110173a2 */
  if (C.zf) goto L_110173a2;
  /* 11017332 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017335 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11017337 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11017339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101733b mov al, byte ptr [edx + 0x11041e41] */
  AL = (r8((uint32_t)(EDX + 0x11041e41)));
  /* 11017341 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11017344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11017346 je 0x11017377 */
  if (C.zf) goto L_11017377;
  /* 11017348 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101734b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101734d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017350 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11017353 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11017355 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017359 je 0x11017377 */
  if (C.zf) goto L_11017377;
  /* 1101735b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101735e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017361 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11017363 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11017365 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017368 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101736b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1101736e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017371 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017374 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11017377:;
  /* 11017377 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101737a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101737c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101737f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11017382 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11017384 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017388 je 0x1101739d */
  if (C.zf) goto L_1101739d;
  /* 1101738a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101738d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017390 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11017392 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11017394 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017397 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101739a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1101739d:;
  /* 1101739d jmp 0x11017314 */
  goto L_11017314;
L_110173a2:;
  /* 110173a2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110173a5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 110173a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110173aa mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110173ad mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 110173af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110173b3 je 0x110173c4 */
  if (C.zf) goto L_110173c4;
  /* 110173b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110173b8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 110173bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110173be add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110173c1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_110173c4:;
  /* 110173c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110173c7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110173ca cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110173cd jne 0x110173d8 */
  if (!C.zf) goto L_110173d8;
  /* 110173cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110173d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110173d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_110173d8:;
  /* 110173d8 jmp 0x110174ac */
  goto L_110174ac;
L_110173dd:;
  /* 110173dd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110173e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110173e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110173e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110173e8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110173ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110173ee je 0x11017403 */
  if (C.zf) goto L_11017403;
  /* 110173f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110173f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110173f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 110173f8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 110173fa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110173fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017400 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11017403:;
  /* 11017403 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017406 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11017408 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1101740b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101740e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017411 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11017414 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017417 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101741d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101741f mov dl, byte ptr [ecx + 0x11041e41] */
  DL = (r8((uint32_t)(ECX + 0x11041e41)));
  /* 11017425 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11017428 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101742a je 0x1101745b */
  if (C.zf) goto L_1101745b;
  /* 1101742c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101742f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11017431 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017434 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11017437 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11017439 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101743d je 0x11017452 */
  if (C.zf) goto L_11017452;
  /* 1101743f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017445 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11017447 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11017449 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101744c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101744f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11017452:;
  /* 11017452 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017458 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1101745b:;
  /* 1101745b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101745e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11017464 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017467 je 0x11017487 */
  if (C.zf) goto L_11017487;
  /* 11017469 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101746c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11017471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11017473 je 0x11017487 */
  if (C.zf) goto L_11017487;
  /* 11017475 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017478 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1101747e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017481 jne 0x110173dd */
  if (!C.zf) goto L_110173dd;
L_11017487:;
  /* 11017487 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101748a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11017490 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11017492 jne 0x1101749f */
  if (!C.zf) goto L_1101749f;
  /* 11017494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017497 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101749a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101749d jmp 0x110174ac */
  goto L_110174ac;
L_1101749f:;
  /* 1101749f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110174a3 je 0x110174ac */
  if (C.zf) goto L_110174ac;
  /* 110174a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110174a8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_110174ac:;
  /* 110174ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_110174b3:;
  /* 110174b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110174b6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110174b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110174bb je 0x110174de */
  if (C.zf) goto L_110174de;
L_110174bd:;
  /* 110174bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110174c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110174c3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110174c6 je 0x110174d3 */
  if (C.zf) goto L_110174d3;
  /* 110174c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110174cb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110174ce cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110174d1 jne 0x110174de */
  if (!C.zf) goto L_110174de;
L_110174d3:;
  /* 110174d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110174d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110174d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110174dc jmp 0x110174bd */
  goto L_110174bd;
L_110174de:;
  /* 110174de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110174e1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110174e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110174e6 jne 0x110174ed */
  if (!C.zf) goto L_110174ed;
  /* 110174e8 jmp 0x110176cb */
  goto L_110176cb;
L_110174ed:;
  /* 110174ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110174f1 je 0x11017504 */
  if (C.zf) goto L_11017504;
  /* 110174f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110174f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110174f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 110174fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110174fe add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017501 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11017504:;
  /* 11017504 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11017507 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11017509 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101750c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101750f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11017511:;
  /* 11017511 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11017518 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1101751f:;
  /* 1101751f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017522 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11017525 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017528 jne 0x1101753e */
  if (!C.zf) goto L_1101753e;
  /* 1101752a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101752d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017530 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11017533 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11017536 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017539 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1101753c jmp 0x1101751f */
  goto L_1101751f;
L_1101753e:;
  /* 1101753e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017541 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11017544 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017547 jne 0x1101759a */
  if (!C.zf) goto L_1101759a;
  /* 11017549 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101754c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101754e mov ecx, 2 */
  ECX = (0x2u);
  /* 11017553 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11017555 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11017557 jne 0x11017592 */
  if (!C.zf) goto L_11017592;
  /* 11017559 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101755d je 0x1101757f */
  if (C.zf) goto L_1101757f;
  /* 1101755f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017562 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11017566 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017569 jne 0x11017576 */
  if (!C.zf) goto L_11017576;
  /* 1101756b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101756e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017571 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11017574 jmp 0x1101757d */
  goto L_1101757d;
L_11017576:;
  /* 11017576 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1101757d:;
  /* 1101757d jmp 0x11017586 */
  goto L_11017586;
L_1101757f:;
  /* 1101757f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11017586:;
  /* 11017586 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11017588 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101758c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1101758f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11017592:;
  /* 11017592 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11017595 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11017597 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1101759a:;
  /* 1101759a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101759d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110175a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110175a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 110175a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 110175a8 je 0x110175ce */
  if (C.zf) goto L_110175ce;
  /* 110175aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110175ae je 0x110175bf */
  if (C.zf) goto L_110175bf;
  /* 110175b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 110175b3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 110175b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110175b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110175bc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_110175bf:;
  /* 110175bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110175c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110175c4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110175c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 110175ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110175cc jmp 0x1101759a */
  goto L_1101759a;
L_110175ce:;
  /* 110175ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110175d1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 110175d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 110175d6 je 0x110175f4 */
  if (C.zf) goto L_110175f4;
  /* 110175d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110175dc jne 0x110175f9 */
  if (!C.zf) goto L_110175f9;
  /* 110175de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110175e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110175e4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110175e7 je 0x110175f4 */
  if (C.zf) goto L_110175f4;
  /* 110175e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110175ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 110175ef cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110175f2 jne 0x110175f9 */
  if (!C.zf) goto L_110175f9;
L_110175f4:;
  /* 110175f4 jmp 0x110176a4 */
  goto L_110176a4;
L_110175f9:;
  /* 110175f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110175fd je 0x11017696 */
  if (C.zf) goto L_11017696;
  /* 11017603 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017607 je 0x1101765d */
  if (C.zf) goto L_1101765d;
  /* 11017609 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101760c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101760e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11017610 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11017612 mov cl, byte ptr [eax + 0x11041e41] */
  CL = (r8((uint32_t)(EAX + 0x11041e41)));
  /* 11017618 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1101761b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1101761d je 0x11017648 */
  if (C.zf) goto L_11017648;
  /* 1101761f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017622 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017625 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11017627 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11017629 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101762c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101762f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11017632 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017635 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017638 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101763b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101763e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11017640 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017643 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11017646 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11017648:;
  /* 11017648 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101764b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101764e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11017650 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11017652 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017655 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017658 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1101765b jmp 0x11017689 */
  goto L_11017689;
L_1101765d:;
  /* 1101765d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017660 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11017662 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11017664 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11017666 mov cl, byte ptr [eax + 0x11041e41] */
  CL = (r8((uint32_t)(EAX + 0x11041e41)));
  /* 1101766c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1101766f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11017671 je 0x11017689 */
  if (C.zf) goto L_11017689;
  /* 11017673 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017676 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017679 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1101767c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101767f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11017681 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017684 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11017687 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11017689:;
  /* 11017689 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1101768c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1101768e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017691 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11017694 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11017696:;
  /* 11017696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017699 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101769c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101769f jmp 0x11017511 */
  goto L_11017511;
L_110176a4:;
  /* 110176a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110176a8 je 0x110176b9 */
  if (C.zf) goto L_110176b9;
  /* 110176aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 110176ad mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 110176b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 110176b3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110176b6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_110176b9:;
  /* 110176b9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 110176bc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110176be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110176c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 110176c4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110176c6 jmp 0x110174b3 */
  goto L_110174b3;
L_110176cb:;
  /* 110176cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110176cf je 0x110176e3 */
  if (C.zf) goto L_110176e3;
  /* 110176d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110176d4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 110176da mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110176dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110176e0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_110176e3:;
  /* 110176e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 110176e6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 110176e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110176eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 110176ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110176f0 mov esp, ebp */
  ESP = (EBP);
  /* 110176f2 pop ebp */
  EBP = (pop32());
  /* 110176f3 ret  */
  ESPCHK(0x110172d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x11017700 (537 bytes, 173 insns) */
void f_11017700(void) {
  FTRACE(0x11017700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017700 push ebp */
  push32((uint32_t)(EBP));
  /* 11017701 mov ebp, esp */
  EBP = (ESP);
  /* 11017703 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017706 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1101770d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11017714 cmp dword ptr [0x1104072c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104072c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101771b jne 0x1101775a */
  if (!C.zf) goto L_1101775a;
  /* 1101771d call dword ptr [0x11043360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043360))), 0x11017723u);
  /* 11017723 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11017726 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101772a je 0x11017738 */
  if (C.zf) goto L_11017738;
  /* 1101772c mov dword ptr [0x1104072c], 1 */
  w32((uint32_t)(0x1104072c), (0x1u));
  /* 11017736 jmp 0x1101775a */
  goto L_1101775a;
L_11017738:;
  /* 11017738 call dword ptr [0x11043358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043358))), 0x1101773eu);
  /* 1101773e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11017741 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017745 je 0x11017753 */
  if (C.zf) goto L_11017753;
  /* 11017747 mov dword ptr [0x1104072c], 2 */
  w32((uint32_t)(0x1104072c), (0x2u));
  /* 11017751 jmp 0x1101775a */
  goto L_1101775a;
L_11017753:;
  /* 11017753 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11017755 jmp 0x11017915 */
  goto L_11017915;
L_1101775a:;
  /* 1101775a cmp dword ptr [0x1104072c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1104072c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017761 jne 0x1101785e */
  if (!C.zf) goto L_1101785e;
  /* 11017767 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101776b jne 0x11017783 */
  if (!C.zf) goto L_11017783;
  /* 1101776d call dword ptr [0x11043360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043360))), 0x11017773u);
  /* 11017773 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11017776 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101777a jne 0x11017783 */
  if (!C.zf) goto L_11017783;
  /* 1101777c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101777e jmp 0x11017915 */
  goto L_11017915;
L_11017783:;
  /* 11017783 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11017786 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11017789:;
  /* 11017789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101778c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101778e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11017791 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11017793 je 0x110177b5 */
  if (C.zf) goto L_110177b5;
  /* 11017795 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017798 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101779b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101779e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110177a1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110177a3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 110177a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110177a8 jne 0x110177b3 */
  if (!C.zf) goto L_110177b3;
  /* 110177aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110177ad add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110177b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_110177b3:;
  /* 110177b3 jmp 0x11017789 */
  goto L_11017789;
L_110177b5:;
  /* 110177b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110177b8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110177bb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 110177bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110177c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 110177c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110177c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110177c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110177c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 110177cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110177ce push edx */
  push32((uint32_t)(EDX));
  /* 110177cf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110177d2 push eax */
  push32((uint32_t)(EAX));
  /* 110177d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110177d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110177d7 call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x110177ddu);
  /* 110177dd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 110177e0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110177e4 je 0x11017804 */
  if (C.zf) goto L_11017804;
  /* 110177e6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 110177e8 push 0x1103bda8 */
  push32((uint32_t)(0x1103bda8u));
  /* 110177ed push 2 */
  push32((uint32_t)(0x2u));
  /* 110177ef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110177f2 push ecx */
  push32((uint32_t)(ECX));
  /* 110177f3 call 0x11015130 */
  push32(0x110177f8u); f_11015130();
  /* 110177f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110177fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 110177fe cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017802 jne 0x11017815 */
  if (!C.zf) goto L_11017815;
L_11017804:;
  /* 11017804 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11017807 push edx */
  push32((uint32_t)(EDX));
  /* 11017808 call dword ptr [0x110433d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433d4))), 0x1101780eu);
  /* 1101780e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11017810 jmp 0x11017915 */
  goto L_11017915;
L_11017815:;
  /* 11017815 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017817 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017819 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101781c push eax */
  push32((uint32_t)(EAX));
  /* 1101781d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11017820 push ecx */
  push32((uint32_t)(ECX));
  /* 11017821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017824 push edx */
  push32((uint32_t)(EDX));
  /* 11017825 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11017828 push eax */
  push32((uint32_t)(EAX));
  /* 11017829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1101782b push 0 */
  push32((uint32_t)(0x0u));
  /* 1101782d call dword ptr [0x1104335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104335c))), 0x11017833u);
  /* 11017833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11017835 jne 0x1101784c */
  if (!C.zf) goto L_1101784c;
  /* 11017837 push 2 */
  push32((uint32_t)(0x2u));
  /* 11017839 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101783c push ecx */
  push32((uint32_t)(ECX));
  /* 1101783d call 0x11015bc0 */
  push32(0x11017842u); f_11015bc0();
  /* 11017842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017845 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1101784c:;
  /* 1101784c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1101784f push edx */
  push32((uint32_t)(EDX));
  /* 11017850 call dword ptr [0x110433d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433d4))), 0x11017856u);
  /* 11017856 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11017859 jmp 0x11017915 */
  goto L_11017915;
L_1101785e:;
  /* 1101785e cmp dword ptr [0x1104072c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1104072c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017865 jne 0x11017913 */
  if (!C.zf) goto L_11017913;
  /* 1101786b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101786f jne 0x11017887 */
  if (!C.zf) goto L_11017887;
  /* 11017871 call dword ptr [0x11043358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043358))), 0x11017877u);
  /* 11017877 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1101787a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101787e jne 0x11017887 */
  if (!C.zf) goto L_11017887;
  /* 11017880 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11017882 jmp 0x11017915 */
  goto L_11017915;
L_11017887:;
  /* 11017887 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101788a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1101788d:;
  /* 1101788d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017890 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11017893 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11017895 je 0x110178b5 */
  if (C.zf) goto L_110178b5;
  /* 11017897 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101789a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101789d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110178a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110178a3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 110178a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 110178a8 jne 0x110178b3 */
  if (!C.zf) goto L_110178b3;
  /* 110178aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110178ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110178b0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_110178b3:;
  /* 110178b3 jmp 0x1101788d */
  goto L_1101788d;
L_110178b5:;
  /* 110178b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 110178b8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110178bb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110178be mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 110178c1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 110178c6 push 0x1103bda8 */
  push32((uint32_t)(0x1103bda8u));
  /* 110178cb push 2 */
  push32((uint32_t)(0x2u));
  /* 110178cd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 110178d0 push edx */
  push32((uint32_t)(EDX));
  /* 110178d1 call 0x11015130 */
  push32(0x110178d6u); f_11015130();
  /* 110178d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110178d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110178dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110178e0 jne 0x110178f0 */
  if (!C.zf) goto L_110178f0;
  /* 110178e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 110178e5 push eax */
  push32((uint32_t)(EAX));
  /* 110178e6 call dword ptr [0x110433c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c8))), 0x110178ecu);
  /* 110178ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110178ee jmp 0x11017915 */
  goto L_11017915;
L_110178f0:;
  /* 110178f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 110178f3 push ecx */
  push32((uint32_t)(ECX));
  /* 110178f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 110178f7 push edx */
  push32((uint32_t)(EDX));
  /* 110178f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110178fb push eax */
  push32((uint32_t)(EAX));
  /* 110178fc call 0x1101ba10 */
  push32(0x11017901u); f_1101ba10();
  /* 11017901 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017904 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11017907 push ecx */
  push32((uint32_t)(ECX));
  /* 11017908 call dword ptr [0x110433c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c8))), 0x1101790eu);
  /* 1101790e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017911 jmp 0x11017915 */
  goto L_11017915;
L_11017913:;
  /* 11017913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11017915:;
  /* 11017915 mov esp, ebp */
  ESP = (EBP);
  /* 11017917 pop ebp */
  EBP = (pop32());
  /* 11017918 ret  */
  ESPCHK(0x11017700u, _esp0);
  ESP += 4; return;
}

/* FUN_10007920 @ 0x11017920 (77 bytes, 25 insns) */
void f_11017920(void) {
  FTRACE(0x11017920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017920 push ebp */
  push32((uint32_t)(EBP));
  /* 11017921 mov ebp, esp */
  EBP = (ESP);
  /* 11017923 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017925 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1101792a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101792c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017930 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11017933 push eax */
  push32((uint32_t)(EAX));
  /* 11017934 call dword ptr [0x1104334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104334c))), 0x1101793au);
  /* 1101793a mov dword ptr [0x11041f6c], eax */
  w32((uint32_t)(0x11041f6c), (EAX));
  /* 1101793f cmp dword ptr [0x11041f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11041f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017946 jne 0x1101794c */
  if (!C.zf) goto L_1101794c;
  /* 11017948 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101794a jmp 0x1101796b */
  goto L_1101796b;
L_1101794c:;
  /* 1101794c call 0x110193d0 */
  push32(0x11017951u); f_110193d0();
  /* 11017951 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11017953 jne 0x11017966 */
  if (!C.zf) goto L_11017966;
  /* 11017955 mov ecx, dword ptr [0x11041f6c] */
  ECX = (r32((uint32_t)(0x11041f6c)));
  /* 1101795b push ecx */
  push32((uint32_t)(ECX));
  /* 1101795c call dword ptr [0x11043350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043350))), 0x11017962u);
  /* 11017962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11017964 jmp 0x1101796b */
  goto L_1101796b;
L_11017966:;
  /* 11017966 mov eax, 1 */
  EAX = (0x1u);
L_1101796b:;
  /* 1101796b pop ebp */
  EBP = (pop32());
  /* 1101796c ret  */
  ESPCHK(0x11017920u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x11017970 (156 bytes, 48 insns) */
void f_11017970(void) {
  FTRACE(0x11017970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017970 push ebp */
  push32((uint32_t)(EBP));
  /* 11017971 mov ebp, esp */
  EBP = (ESP);
  /* 11017973 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017976 mov eax, dword ptr [0x11041f68] */
  EAX = (r32((uint32_t)(0x11041f68)));
  /* 1101797b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101797e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11017985 jmp 0x11017990 */
  goto L_11017990;
L_11017987:;
  /* 11017987 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101798a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101798d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11017990:;
  /* 11017990 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017993 cmp edx, dword ptr [0x11041f64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11041f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017999 jge 0x110179e6 */
  if ((C.sf==C.of)) goto L_110179e6;
  /* 1101799b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 110179a0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 110179a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110179a8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 110179ab push ecx */
  push32((uint32_t)(ECX));
  /* 110179ac call dword ptr [0x11043344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043344))), 0x110179b2u);
  /* 110179b2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 110179b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 110179b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110179bc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 110179bf push eax */
  push32((uint32_t)(EAX));
  /* 110179c0 call dword ptr [0x11043344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043344))), 0x110179c6u);
  /* 110179c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110179c9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 110179cc push edx */
  push32((uint32_t)(EDX));
  /* 110179cd push 0 */
  push32((uint32_t)(0x0u));
  /* 110179cf mov eax, dword ptr [0x11041f6c] */
  EAX = (r32((uint32_t)(0x11041f6c)));
  /* 110179d4 push eax */
  push32((uint32_t)(EAX));
  /* 110179d5 call dword ptr [0x11043354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043354))), 0x110179dbu);
  /* 110179db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110179de add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110179e1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110179e4 jmp 0x11017987 */
  goto L_11017987;
L_110179e6:;
  /* 110179e6 mov edx, dword ptr [0x11041f68] */
  EDX = (r32((uint32_t)(0x11041f68)));
  /* 110179ec push edx */
  push32((uint32_t)(EDX));
  /* 110179ed push 0 */
  push32((uint32_t)(0x0u));
  /* 110179ef mov eax, dword ptr [0x11041f6c] */
  EAX = (r32((uint32_t)(0x11041f6c)));
  /* 110179f4 push eax */
  push32((uint32_t)(EAX));
  /* 110179f5 call dword ptr [0x11043354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043354))), 0x110179fbu);
  /* 110179fb mov ecx, dword ptr [0x11041f6c] */
  ECX = (r32((uint32_t)(0x11041f6c)));
  /* 11017a01 push ecx */
  push32((uint32_t)(ECX));
  /* 11017a02 call dword ptr [0x11043350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043350))), 0x11017a08u);
  /* 11017a08 mov esp, ebp */
  ESP = (EBP);
  /* 11017a0a pop ebp */
  EBP = (pop32());
  /* 11017a0b ret  */
  ESPCHK(0x11017970u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11017a10 (73 bytes, 19 insns) */
void f_11017a10(void) {
  FTRACE(0x11017a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017a10 push ebp */
  push32((uint32_t)(EBP));
  /* 11017a11 mov ebp, esp */
  EBP = (ESP);
  /* 11017a13 cmp dword ptr [0x110405c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110405c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017a1a je 0x11017a2e */
  if (C.zf) goto L_11017a2e;
  /* 11017a1c cmp dword ptr [0x110405c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017a23 jne 0x11017a57 */
  if (!C.zf) goto L_11017a57;
  /* 11017a25 cmp dword ptr [0x110405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017a2c jne 0x11017a57 */
  if (!C.zf) goto L_11017a57;
L_11017a2e:;
  /* 11017a2e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11017a33 call 0x11017a60 */
  push32(0x11017a38u); f_11017a60();
  /* 11017a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017a3b cmp dword ptr [0x11040730], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040730))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017a42 je 0x11017a4a */
  if (C.zf) goto L_11017a4a;
  /* 11017a44 call dword ptr [0x11040730] */
  call_ind((uint32_t)(r32((uint32_t)(0x11040730))), 0x11017a4au);
L_11017a4a:;
  /* 11017a4a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11017a4f call 0x11017a60 */
  push32(0x11017a54u); f_11017a60();
  /* 11017a54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11017a57:;
  /* 11017a57 pop ebp */
  EBP = (pop32());
  /* 11017a58 ret  */
  ESPCHK(0x11017a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x11017a60 (447 bytes, 131 insns) */
void f_11017a60(void) {
  FTRACE(0x11017a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11017a61 mov ebp, esp */
  EBP = (ESP);
  /* 11017a63 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017a69 push ebx */
  push32((uint32_t)(EBX));
  /* 11017a6a push esi */
  push32((uint32_t)(ESI));
  /* 11017a6b push edi */
  push32((uint32_t)(EDI));
  /* 11017a6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11017a73 jmp 0x11017a7e */
  goto L_11017a7e;
L_11017a75:;
  /* 11017a75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017a78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017a7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11017a7e:;
  /* 11017a7e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017a82 jae 0x11017a97 */
  if (!C.cf) goto L_11017a97;
  /* 11017a84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017a87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017a8a cmp edx, dword ptr [ecx*8 + 0x1103eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1103eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017a91 jne 0x11017a95 */
  if (!C.zf) goto L_11017a95;
  /* 11017a93 jmp 0x11017a97 */
  goto L_11017a97;
L_11017a95:;
  /* 11017a95 jmp 0x11017a75 */
  goto L_11017a75;
L_11017a97:;
  /* 11017a97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017a9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017a9d cmp ecx, dword ptr [eax*8 + 0x1103eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1103eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017aa4 jne 0x11017c18 */
  if (!C.zf) goto L_11017c18;
  /* 11017aaa cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017ab1 je 0x11017ad4 */
  if (C.zf) goto L_11017ad4;
  /* 11017ab3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017ab6 mov eax, dword ptr [edx*8 + 0x1103eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1103eab4)));
  /* 11017abd push eax */
  push32((uint32_t)(EAX));
  /* 11017abe push 0 */
  push32((uint32_t)(0x0u));
  /* 11017ac0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017ac2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017ac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11017ac6 call 0x110141f0 */
  push32(0x11017acbu); f_110141f0();
  /* 11017acb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017ace cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017ad1 jne 0x11017ad4 */
  if (!C.zf) goto L_11017ad4;
  /* 11017ad3 int3  */
  x86_unimpl("int3 @ 0x11017ad3");
L_11017ad4:;
  /* 11017ad4 cmp dword ptr [0x110405c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110405c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017adb je 0x11017aef */
  if (C.zf) goto L_11017aef;
  /* 11017add cmp dword ptr [0x110405c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110405c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017ae4 jne 0x11017b28 */
  if (!C.zf) goto L_11017b28;
  /* 11017ae6 cmp dword ptr [0x110405c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x110405c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017aed jne 0x11017b28 */
  if (!C.zf) goto L_11017b28;
L_11017aef:;
  /* 11017aef push 0 */
  push32((uint32_t)(0x0u));
  /* 11017af1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11017af4 push ecx */
  push32((uint32_t)(ECX));
  /* 11017af5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017af8 mov eax, dword ptr [edx*8 + 0x1103eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1103eab4)));
  /* 11017aff push eax */
  push32((uint32_t)(EAX));
  /* 11017b00 call 0x11017f60 */
  push32(0x11017b05u); f_11017f60();
  /* 11017b05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017b08 push eax */
  push32((uint32_t)(EAX));
  /* 11017b09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017b0c mov edx, dword ptr [ecx*8 + 0x1103eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1103eab4)));
  /* 11017b13 push edx */
  push32((uint32_t)(EDX));
  /* 11017b14 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11017b16 call dword ptr [0x11043370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043370))), 0x11017b1cu);
  /* 11017b1c push eax */
  push32((uint32_t)(EAX));
  /* 11017b1d call dword ptr [0x11043374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043374))), 0x11017b23u);
  /* 11017b23 jmp 0x11017c18 */
  goto L_11017c18;
L_11017b28:;
  /* 11017b28 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017b2f je 0x11017c18 */
  if (C.zf) goto L_11017c18;
  /* 11017b35 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11017b3a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11017b40 push eax */
  push32((uint32_t)(EAX));
  /* 11017b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017b43 call dword ptr [0x1104338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104338c))), 0x11017b49u);
  /* 11017b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11017b4b jne 0x11017b61 */
  if (!C.zf) goto L_11017b61;
  /* 11017b4d push 0x1103b610 */
  push32((uint32_t)(0x1103b610u));
  /* 11017b52 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11017b58 push ecx */
  push32((uint32_t)(ECX));
  /* 11017b59 call 0x110180e0 */
  push32(0x11017b5eu); f_110180e0();
  /* 11017b5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11017b61:;
  /* 11017b61 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11017b67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11017b6a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017b6d push eax */
  push32((uint32_t)(EAX));
  /* 11017b6e call 0x11017f60 */
  push32(0x11017b73u); f_11017f60();
  /* 11017b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017b76 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017b79 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017b7c jbe 0x11017baa */
  if ((C.cf||C.zf)) goto L_11017baa;
  /* 11017b7e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11017b84 push ecx */
  push32((uint32_t)(ECX));
  /* 11017b85 call 0x11017f60 */
  push32(0x11017b8au); f_11017f60();
  /* 11017b8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017b8d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017b90 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11017b94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11017b97 push 3 */
  push32((uint32_t)(0x3u));
  /* 11017b99 push 0x1103b60c */
  push32((uint32_t)(0x1103b60cu));
  /* 11017b9e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 11017ba2 call 0x11018950 */
  push32(0x11017ba7u); f_11018950();
  /* 11017ba7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11017baa:;
  /* 11017baa push 0x1103c064 */
  push32((uint32_t)(0x1103c064u));
  /* 11017baf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11017bb5 push edx */
  push32((uint32_t)(EDX));
  /* 11017bb6 call 0x110180e0 */
  push32(0x11017bbbu); f_110180e0();
  /* 11017bbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017bbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017bc1 push eax */
  push32((uint32_t)(EAX));
  /* 11017bc2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11017bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11017bc9 call 0x110180f0 */
  push32(0x11017bceu); f_110180f0();
  /* 11017bce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017bd1 push 0x1103b584 */
  push32((uint32_t)(0x1103b584u));
  /* 11017bd6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11017bdc push edx */
  push32((uint32_t)(EDX));
  /* 11017bdd call 0x110180f0 */
  push32(0x11017be2u); f_110180f0();
  /* 11017be2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017be5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017be8 mov ecx, dword ptr [eax*8 + 0x1103eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1103eab4)));
  /* 11017bef push ecx */
  push32((uint32_t)(ECX));
  /* 11017bf0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11017bf6 push edx */
  push32((uint32_t)(EDX));
  /* 11017bf7 call 0x110180f0 */
  push32(0x11017bfcu); f_110180f0();
  /* 11017bfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017bff push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11017c04 push 0x1103c03c */
  push32((uint32_t)(0x1103c03cu));
  /* 11017c09 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11017c0f push eax */
  push32((uint32_t)(EAX));
  /* 11017c10 call 0x11018890 */
  push32(0x11017c15u); f_11018890();
  /* 11017c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11017c18:;
  /* 11017c18 pop edi */
  EDI = (pop32());
  /* 11017c19 pop esi */
  ESI = (pop32());
  /* 11017c1a pop ebx */
  EBX = (pop32());
  /* 11017c1b mov esp, ebp */
  ESP = (EBP);
  /* 11017c1d pop ebp */
  EBP = (pop32());
  /* 11017c1e ret  */
  ESPCHK(0x11017a60u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11017c20 (80 bytes, 27 insns) */
void f_11017c20(void) {
  FTRACE(0x11017c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11017c21 mov ebp, esp */
  EBP = (ESP);
  /* 11017c23 push ecx */
  push32((uint32_t)(ECX));
  /* 11017c24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11017c2b jmp 0x11017c36 */
  goto L_11017c36;
L_11017c2d:;
  /* 11017c2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017c30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017c33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11017c36:;
  /* 11017c36 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017c3a jae 0x11017c4f */
  if (!C.cf) goto L_11017c4f;
  /* 11017c3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017c3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017c42 cmp edx, dword ptr [ecx*8 + 0x1103eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1103eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017c49 jne 0x11017c4d */
  if (!C.zf) goto L_11017c4d;
  /* 11017c4b jmp 0x11017c4f */
  goto L_11017c4f;
L_11017c4d:;
  /* 11017c4d jmp 0x11017c2d */
  goto L_11017c2d;
L_11017c4f:;
  /* 11017c4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017c55 cmp ecx, dword ptr [eax*8 + 0x1103eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1103eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017c5c jne 0x11017c6a */
  if (!C.zf) goto L_11017c6a;
  /* 11017c5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017c61 mov eax, dword ptr [edx*8 + 0x1103eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1103eab4)));
  /* 11017c68 jmp 0x11017c6c */
  goto L_11017c6c;
L_11017c6a:;
  /* 11017c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11017c6c:;
  /* 11017c6c mov esp, ebp */
  ESP = (EBP);
  /* 11017c6e pop ebp */
  EBP = (pop32());
  /* 11017c6f ret  */
  ESPCHK(0x11017c20u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11017c70 (66 bytes, 28 insns) */
void f_11017c70(void) {
  FTRACE(0x11017c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11017c71 mov ebp, esp */
  EBP = (ESP);
  /* 11017c73 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017c77 jne 0x11017c97 */
  if (!C.zf) goto L_11017c97;
  /* 11017c79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017c7d jge 0x11017c97 */
  if ((C.sf==C.of)) goto L_11017c97;
  /* 11017c7f push 1 */
  push32((uint32_t)(0x1u));
  /* 11017c81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017c84 push eax */
  push32((uint32_t)(EAX));
  /* 11017c85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017c88 push ecx */
  push32((uint32_t)(ECX));
  /* 11017c89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017c8c push edx */
  push32((uint32_t)(EDX));
  /* 11017c8d call 0x11017cc0 */
  push32(0x11017c92u); f_11017cc0();
  /* 11017c92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017c95 jmp 0x11017cad */
  goto L_11017cad;
L_11017c97:;
  /* 11017c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017c99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017c9c push eax */
  push32((uint32_t)(EAX));
  /* 11017c9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017ca0 push ecx */
  push32((uint32_t)(ECX));
  /* 11017ca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017ca4 push edx */
  push32((uint32_t)(EDX));
  /* 11017ca5 call 0x11017cc0 */
  push32(0x11017caau); f_11017cc0();
  /* 11017caa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11017cad:;
  /* 11017cad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017cb0 pop ebp */
  EBP = (pop32());
  /* 11017cb1 ret  */
  ESPCHK(0x11017c70u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11017cc0 (194 bytes, 71 insns) */
void f_11017cc0(void) {
  FTRACE(0x11017cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11017cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11017cc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017cc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017cc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11017ccc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017cd0 je 0x11017ce9 */
  if (C.zf) goto L_11017ce9;
  /* 11017cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017cd5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11017cd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017cdb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017cde mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11017ce1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017ce4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11017ce6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11017ce9:;
  /* 11017ce9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017cec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11017cef:;
  /* 11017cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017cf2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11017cf4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11017cf7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11017cfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017cfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11017cff div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11017d02 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11017d05 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017d09 jbe 0x11017d21 */
  if ((C.cf||C.zf)) goto L_11017d21;
  /* 11017d0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017d0e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017d11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d14 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11017d16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017d1c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11017d1f jmp 0x11017d35 */
  goto L_11017d35;
L_11017d21:;
  /* 11017d21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017d24 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017d27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d2a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11017d2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d2f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017d32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11017d35:;
  /* 11017d35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017d39 ja 0x11017cef */
  if ((!C.cf&&!C.zf)) goto L_11017cef;
  /* 11017d3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d3e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11017d41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d44 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017d47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11017d4a:;
  /* 11017d4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11017d4f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11017d52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017d58 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11017d5a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11017d5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017d5f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11017d62 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11017d64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017d67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017d6a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11017d6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017d70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017d73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11017d76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017d79 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017d7c jb 0x11017d4a */
  if (C.cf) goto L_11017d4a;
  /* 11017d7e mov esp, ebp */
  ESP = (EBP);
  /* 11017d80 pop ebp */
  EBP = (pop32());
  /* 11017d81 ret  */
  ESPCHK(0x11017cc0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11017d90 (63 bytes, 24 insns) */
void f_11017d90(void) {
  FTRACE(0x11017d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11017d91 mov ebp, esp */
  EBP = (ESP);
  /* 11017d93 push ecx */
  push32((uint32_t)(ECX));
  /* 11017d94 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017d98 jne 0x11017da9 */
  if (!C.zf) goto L_11017da9;
  /* 11017d9a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017d9e jge 0x11017da9 */
  if ((C.sf==C.of)) goto L_11017da9;
  /* 11017da0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11017da7 jmp 0x11017db0 */
  goto L_11017db0;
L_11017da9:;
  /* 11017da9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11017db0:;
  /* 11017db0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017db3 push eax */
  push32((uint32_t)(EAX));
  /* 11017db4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017db7 push ecx */
  push32((uint32_t)(ECX));
  /* 11017db8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017dbb push edx */
  push32((uint32_t)(EDX));
  /* 11017dbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017dbf push eax */
  push32((uint32_t)(EAX));
  /* 11017dc0 call 0x11017cc0 */
  push32(0x11017dc5u); f_11017cc0();
  /* 11017dc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017dc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017dcb mov esp, ebp */
  ESP = (EBP);
  /* 11017dcd pop ebp */
  EBP = (pop32());
  /* 11017dce ret  */
  ESPCHK(0x11017d90u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11017dd0 (30 bytes, 14 insns) */
void f_11017dd0(void) {
  FTRACE(0x11017dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11017dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11017dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017dd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017dd8 push eax */
  push32((uint32_t)(EAX));
  /* 11017dd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017ddc push ecx */
  push32((uint32_t)(ECX));
  /* 11017ddd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017de0 push edx */
  push32((uint32_t)(EDX));
  /* 11017de1 call 0x11017cc0 */
  push32(0x11017de6u); f_11017cc0();
  /* 11017de6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11017de9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017dec pop ebp */
  EBP = (pop32());
  /* 11017ded ret  */
  ESPCHK(0x11017dd0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11017df0 (72 bytes, 28 insns) */
void f_11017df0(void) {
  FTRACE(0x11017df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11017df1 mov ebp, esp */
  EBP = (ESP);
  /* 11017df3 push ecx */
  push32((uint32_t)(ECX));
  /* 11017df4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017df8 jne 0x11017e11 */
  if (!C.zf) goto L_11017e11;
  /* 11017dfa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017dfe jg 0x11017e11 */
  if ((!C.zf&&C.sf==C.of)) goto L_11017e11;
  /* 11017e00 jl 0x11017e08 */
  if ((C.sf!=C.of)) goto L_11017e08;
  /* 11017e02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017e06 jae 0x11017e11 */
  if (!C.cf) goto L_11017e11;
L_11017e08:;
  /* 11017e08 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11017e0f jmp 0x11017e18 */
  goto L_11017e18;
L_11017e11:;
  /* 11017e11 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11017e18:;
  /* 11017e18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017e1b push eax */
  push32((uint32_t)(EAX));
  /* 11017e1c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11017e1f push ecx */
  push32((uint32_t)(ECX));
  /* 11017e20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017e23 push edx */
  push32((uint32_t)(EDX));
  /* 11017e24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017e27 push eax */
  push32((uint32_t)(EAX));
  /* 11017e28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017e2b push ecx */
  push32((uint32_t)(ECX));
  /* 11017e2c call 0x11017e40 */
  push32(0x11017e31u); f_11017e40();
  /* 11017e31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017e34 mov esp, ebp */
  ESP = (EBP);
  /* 11017e36 pop ebp */
  EBP = (pop32());
  /* 11017e37 ret  */
  ESPCHK(0x11017df0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11017e40 (242 bytes, 91 insns) */
void f_11017e40(void) {
  FTRACE(0x11017e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017e40 push ebp */
  push32((uint32_t)(EBP));
  /* 11017e41 mov ebp, esp */
  EBP = (ESP);
  /* 11017e43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017e46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017e49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11017e4c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017e50 je 0x11017e74 */
  if (C.zf) goto L_11017e74;
  /* 11017e52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017e55 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11017e58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017e5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017e5e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11017e61 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017e64 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11017e66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017e69 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017e6c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11017e6e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11017e71 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11017e74:;
  /* 11017e74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017e77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11017e7a:;
  /* 11017e7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11017e7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11017e7f push ecx */
  push32((uint32_t)(ECX));
  /* 11017e80 push eax */
  push32((uint32_t)(EAX));
  /* 11017e81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017e84 push edx */
  push32((uint32_t)(EDX));
  /* 11017e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017e88 push eax */
  push32((uint32_t)(EAX));
  /* 11017e89 call 0x1101bdc0 */
  push32(0x11017e8eu); f_1101bdc0();
  /* 11017e8e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11017e91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11017e94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11017e96 push edx */
  push32((uint32_t)(EDX));
  /* 11017e97 push ecx */
  push32((uint32_t)(ECX));
  /* 11017e98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017e9b push eax */
  push32((uint32_t)(EAX));
  /* 11017e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017e9f push ecx */
  push32((uint32_t)(ECX));
  /* 11017ea0 call 0x1101bd50 */
  push32(0x11017ea5u); f_1101bd50();
  /* 11017ea5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11017ea8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11017eab cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017eaf jbe 0x11017ec7 */
  if ((C.cf||C.zf)) goto L_11017ec7;
  /* 11017eb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017eb4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017eba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11017ebc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017ebf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017ec2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11017ec5 jmp 0x11017edb */
  goto L_11017edb;
L_11017ec7:;
  /* 11017ec7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11017eca add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017ecd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017ed0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11017ed2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017ed8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11017edb:;
  /* 11017edb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017edf ja 0x11017e7a */
  if ((!C.cf&&!C.zf)) goto L_11017e7a;
  /* 11017ee1 jb 0x11017ee9 */
  if (C.cf) goto L_11017ee9;
  /* 11017ee3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017ee7 ja 0x11017e7a */
  if ((!C.cf&&!C.zf)) goto L_11017e7a;
L_11017ee9:;
  /* 11017ee9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017eec mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11017eef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017ef2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017ef5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11017ef8:;
  /* 11017ef8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017efb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11017efd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11017f00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017f03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017f06 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11017f08 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11017f0a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017f0d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11017f10 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11017f12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11017f15 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017f18 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11017f1b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017f1e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017f21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11017f24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11017f27 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017f2a jb 0x11017ef8 */
  if (C.cf) goto L_11017ef8;
  /* 11017f2c mov esp, ebp */
  ESP = (EBP);
  /* 11017f2e pop ebp */
  EBP = (pop32());
  /* 11017f2f ret 0x14 */
  ESPCHK(0x11017e40u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11017f40 (31 bytes, 15 insns) */
void f_11017f40(void) {
  FTRACE(0x11017f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017f40 push ebp */
  push32((uint32_t)(EBP));
  /* 11017f41 mov ebp, esp */
  EBP = (ESP);
  /* 11017f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11017f45 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11017f48 push eax */
  push32((uint32_t)(EAX));
  /* 11017f49 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017f4c push ecx */
  push32((uint32_t)(ECX));
  /* 11017f4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11017f50 push edx */
  push32((uint32_t)(EDX));
  /* 11017f51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11017f54 push eax */
  push32((uint32_t)(EAX));
  /* 11017f55 call 0x11017e40 */
  push32(0x11017f5au); f_11017e40();
  /* 11017f5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11017f5d pop ebp */
  EBP = (pop32());
  /* 11017f5e ret  */
  ESPCHK(0x11017f40u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11017f60 (123 bytes, 44 insns) */
void f_11017f60(void) {
  FTRACE(0x11017f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017f60 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11017f64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11017f6a je 0x11017f80 */
  if (C.zf) goto L_11017f80;
L_11017f6c:;
  /* 11017f6c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11017f6e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11017f6f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11017f71 je 0x11017fb3 */
  if (C.zf) goto L_11017fb3;
  /* 11017f73 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11017f79 jne 0x11017f6c */
  if (!C.zf) goto L_11017f6c;
  /* 11017f7b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11017f80:;
  /* 11017f80 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11017f82 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11017f87 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017f89 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11017f8c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11017f8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11017f91 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11017f96 je 0x11017f80 */
  if (C.zf) goto L_11017f80;
  /* 11017f98 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11017f9b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11017f9d je 0x11017fd1 */
  if (C.zf) goto L_11017fd1;
  /* 11017f9f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11017fa1 je 0x11017fc7 */
  if (C.zf) goto L_11017fc7;
  /* 11017fa3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11017fa8 je 0x11017fbd */
  if (C.zf) goto L_11017fbd;
  /* 11017faa test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11017faf je 0x11017fb3 */
  if (C.zf) goto L_11017fb3;
  /* 11017fb1 jmp 0x11017f80 */
  goto L_11017f80;
L_11017fb3:;
  /* 11017fb3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11017fb6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11017fba sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017fbc ret  */
  ESPCHK(0x11017f60u, _esp0);
  ESP += 4; return;
L_11017fbd:;
  /* 11017fbd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11017fc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11017fc4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017fc6 ret  */
  ESPCHK(0x11017f60u, _esp0);
  ESP += 4; return;
L_11017fc7:;
  /* 11017fc7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11017fca mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11017fce sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017fd0 ret  */
  ESPCHK(0x11017f60u, _esp0);
  ESP += 4; return;
L_11017fd1:;
  /* 11017fd1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11017fd4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11017fd8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017fda ret  */
  ESPCHK(0x11017f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x11017fe0 (249 bytes, 93 insns) */
void f_11017fe0(void) {
  FTRACE(0x11017fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11017fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11017fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11017fe3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11017fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 11017fe7 push esi */
  push32((uint32_t)(ESI));
  /* 11017fe8 push edi */
  push32((uint32_t)(EDI));
  /* 11017fe9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11017fec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11017fef lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11017ff2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11017ff5:;
  /* 11017ff5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11017ff9 jne 0x11018019 */
  if (!C.zf) goto L_11018019;
  /* 11017ffb push 0x1103c09c */
  push32((uint32_t)(0x1103c09cu));
  /* 11018000 push 0 */
  push32((uint32_t)(0x0u));
  /* 11018002 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11018004 push 0x1103c090 */
  push32((uint32_t)(0x1103c090u));
  /* 11018009 push 2 */
  push32((uint32_t)(0x2u));
  /* 1101800b call 0x110141f0 */
  push32(0x11018010u); f_110141f0();
  /* 11018010 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018013 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018016 jne 0x11018019 */
  if (!C.zf) goto L_11018019;
  /* 11018018 int3  */
  x86_unimpl("int3 @ 0x11018018");
L_11018019:;
  /* 11018019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101801b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1101801d jne 0x11017ff5 */
  if (!C.zf) goto L_11017ff5;
L_1101801f:;
  /* 1101801f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018023 jne 0x11018043 */
  if (!C.zf) goto L_11018043;
  /* 11018025 push 0x1103c080 */
  push32((uint32_t)(0x1103c080u));
  /* 1101802a push 0 */
  push32((uint32_t)(0x0u));
  /* 1101802c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1101802e push 0x1103c090 */
  push32((uint32_t)(0x1103c090u));
  /* 11018033 push 2 */
  push32((uint32_t)(0x2u));
  /* 11018035 call 0x110141f0 */
  push32(0x1101803au); f_110141f0();
  /* 1101803a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101803d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018040 jne 0x11018043 */
  if (!C.zf) goto L_11018043;
  /* 11018042 int3  */
  x86_unimpl("int3 @ 0x11018042");
L_11018043:;
  /* 11018043 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11018045 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11018047 jne 0x1101801f */
  if (!C.zf) goto L_1101801f;
  /* 11018049 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101804c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11018053 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018059 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1101805c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101805f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018062 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11018064 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018067 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101806a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1101806d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11018070 push edx */
  push32((uint32_t)(EDX));
  /* 11018071 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11018074 push eax */
  push32((uint32_t)(EAX));
  /* 11018075 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018078 push ecx */
  push32((uint32_t)(ECX));
  /* 11018079 call 0x1101c0c0 */
  push32(0x1101807eu); f_1101c0c0();
  /* 1101807e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018081 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11018084 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018087 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1101808a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101808d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018090 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11018093 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018096 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101809a jl 0x110180be */
  if ((C.sf!=C.of)) goto L_110180be;
  /* 1101809c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101809f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110180a1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 110180a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110180a6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 110180ac mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 110180af mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110180b2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110180b4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110180b7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110180ba mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 110180bc jmp 0x110180cf */
  goto L_110180cf;
L_110180be:;
  /* 110180be mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 110180c1 push eax */
  push32((uint32_t)(EAX));
  /* 110180c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 110180c4 call 0x1101be40 */
  push32(0x110180c9u); f_1101be40();
  /* 110180c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110180cc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_110180cf:;
  /* 110180cf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110180d2 pop edi */
  EDI = (pop32());
  /* 110180d3 pop esi */
  ESI = (pop32());
  /* 110180d4 pop ebx */
  EBX = (pop32());
  /* 110180d5 mov esp, ebp */
  ESP = (EBP);
  /* 110180d7 pop ebp */
  EBP = (pop32());
  /* 110180d8 ret  */
  ESPCHK(0x11017fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x110180e0 (7 bytes, 3 insns) */
void f_110180e0(void) {
  FTRACE(0x110180e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110180e0 push edi */
  push32((uint32_t)(EDI));
  /* 110180e1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 110180e5 jmp 0x11018151 */
  jmp_ind(0x11018151u); return;
}

/* FUN_100080f0 @ 0x110180f0 (224 bytes, 84 insns) */
void f_110180f0(void) {
  FTRACE(0x110180f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110180f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 110180f4 push edi */
  push32((uint32_t)(EDI));
  /* 110180f5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 110180fb je 0x1101810c */
  if (C.zf) goto L_1101810c;
L_110180fd:;
  /* 110180fd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 110180ff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11018100 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11018102 je 0x1101813f */
  if (C.zf) goto L_1101813f;
  /* 11018104 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1101810a jne 0x110180fd */
  if (!C.zf) goto L_110180fd;
L_1101810c:;
  /* 1101810c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1101810e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11018113 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018115 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11018118 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1101811a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101811d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11018122 je 0x1101810c */
  if (C.zf) goto L_1101810c;
  /* 11018124 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11018127 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11018129 je 0x1101814e */
  if (C.zf) goto L_1101814e;
  /* 1101812b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1101812d je 0x11018149 */
  if (C.zf) goto L_11018149;
  /* 1101812f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11018134 je 0x11018144 */
  if (C.zf) goto L_11018144;
  /* 11018136 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1101813b je 0x1101813f */
  if (C.zf) goto L_1101813f;
  /* 1101813d jmp 0x1101810c */
  goto L_1101810c;
L_1101813f:;
  /* 1101813f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11018142 jmp 0x11018151 */
  goto L_11018151;
L_11018144:;
  /* 11018144 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11018147 jmp 0x11018151 */
  goto L_11018151;
L_11018149:;
  /* 11018149 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1101814c jmp 0x11018151 */
  goto L_11018151;
L_1101814e:;
  /* 1101814e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11018151:;
  /* 11018151 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11018155 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1101815b je 0x11018176 */
  if (C.zf) goto L_11018176;
L_1101815d:;
  /* 1101815d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1101815f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11018160 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11018162 je 0x110181c8 */
  if (C.zf) goto L_110181c8;
  /* 11018164 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11018166 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11018167 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1101816d jne 0x1101815d */
  if (!C.zf) goto L_1101815d;
  /* 1101816f jmp 0x11018176 */
  goto L_11018176;
L_11018171:;
  /* 11018171 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11018173 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11018176:;
  /* 11018176 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1101817b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1101817d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101817f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11018182 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11018184 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11018186 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018189 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1101818e je 0x11018171 */
  if (C.zf) goto L_11018171;
  /* 11018190 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11018192 je 0x110181c8 */
  if (C.zf) goto L_110181c8;
  /* 11018194 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11018196 je 0x110181bf */
  if (C.zf) goto L_110181bf;
  /* 11018198 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1101819e je 0x110181b2 */
  if (C.zf) goto L_110181b2;
  /* 110181a0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 110181a6 je 0x110181aa */
  if (C.zf) goto L_110181aa;
  /* 110181a8 jmp 0x11018171 */
  goto L_11018171;
L_110181aa:;
  /* 110181aa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110181ac mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110181b0 pop edi */
  EDI = (pop32());
  /* 110181b1 ret  */
  ESPCHK(0x110180f0u, _esp0);
  ESP += 4; return;
L_110181b2:;
  /* 110181b2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 110181b5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110181b9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 110181bd pop edi */
  EDI = (pop32());
  /* 110181be ret  */
  ESPCHK(0x110180f0u, _esp0);
  ESP += 4; return;
L_110181bf:;
  /* 110181bf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 110181c2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110181c6 pop edi */
  EDI = (pop32());
  /* 110181c7 ret  */
  ESPCHK(0x110180f0u, _esp0);
  ESP += 4; return;
L_110181c8:;
  /* 110181c8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 110181ca mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110181ce pop edi */
  EDI = (pop32());
  /* 110181cf ret  */
  ESPCHK(0x110180f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x110181d0 (243 bytes, 91 insns) */
void f_110181d0(void) {
  FTRACE(0x110181d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110181d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110181d1 mov ebp, esp */
  EBP = (ESP);
  /* 110181d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110181d6 push ebx */
  push32((uint32_t)(EBX));
  /* 110181d7 push esi */
  push32((uint32_t)(ESI));
  /* 110181d8 push edi */
  push32((uint32_t)(EDI));
  /* 110181d9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 110181dc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_110181df:;
  /* 110181df cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110181e3 jne 0x11018203 */
  if (!C.zf) goto L_11018203;
  /* 110181e5 push 0x1103c09c */
  push32((uint32_t)(0x1103c09cu));
  /* 110181ea push 0 */
  push32((uint32_t)(0x0u));
  /* 110181ec push 0x5a */
  push32((uint32_t)(0x5au));
  /* 110181ee push 0x1103c0ac */
  push32((uint32_t)(0x1103c0acu));
  /* 110181f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 110181f5 call 0x110141f0 */
  push32(0x110181fau); f_110141f0();
  /* 110181fa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110181fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018200 jne 0x11018203 */
  if (!C.zf) goto L_11018203;
  /* 11018202 int3  */
  x86_unimpl("int3 @ 0x11018202");
L_11018203:;
  /* 11018203 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11018205 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11018207 jne 0x110181df */
  if (!C.zf) goto L_110181df;
L_11018209:;
  /* 11018209 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101820d jne 0x1101822d */
  if (!C.zf) goto L_1101822d;
  /* 1101820f push 0x1103c080 */
  push32((uint32_t)(0x1103c080u));
  /* 11018214 push 0 */
  push32((uint32_t)(0x0u));
  /* 11018216 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11018218 push 0x1103c0ac */
  push32((uint32_t)(0x1103c0acu));
  /* 1101821d push 2 */
  push32((uint32_t)(0x2u));
  /* 1101821f call 0x110141f0 */
  push32(0x11018224u); f_110141f0();
  /* 11018224 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018227 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101822a jne 0x1101822d */
  if (!C.zf) goto L_1101822d;
  /* 1101822c int3  */
  x86_unimpl("int3 @ 0x1101822c");
L_1101822d:;
  /* 1101822d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1101822f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11018231 jne 0x11018209 */
  if (!C.zf) goto L_11018209;
  /* 11018233 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018236 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1101823d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018243 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11018246 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101824c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1101824e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018251 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11018254 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11018257 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1101825a push ecx */
  push32((uint32_t)(ECX));
  /* 1101825b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1101825e push edx */
  push32((uint32_t)(EDX));
  /* 1101825f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018262 push eax */
  push32((uint32_t)(EAX));
  /* 11018263 call 0x1101c0c0 */
  push32(0x11018268u); f_1101c0c0();
  /* 11018268 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101826b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1101826e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018271 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11018274 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11018277 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101827a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1101827d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018280 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018284 jl 0x110182a8 */
  if ((C.sf!=C.of)) goto L_110182a8;
  /* 11018286 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11018289 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101828b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1101828e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11018290 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11018296 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11018299 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1101829c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101829e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 110182a1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 110182a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 110182a6 jmp 0x110182b9 */
  goto L_110182b9;
L_110182a8:;
  /* 110182a8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 110182ab push edx */
  push32((uint32_t)(EDX));
  /* 110182ac push 0 */
  push32((uint32_t)(0x0u));
  /* 110182ae call 0x1101be40 */
  push32(0x110182b3u); f_1101be40();
  /* 110182b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110182b6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_110182b9:;
  /* 110182b9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 110182bc pop edi */
  EDI = (pop32());
  /* 110182bd pop esi */
  ESI = (pop32());
  /* 110182be pop ebx */
  EBX = (pop32());
  /* 110182bf mov esp, ebp */
  ESP = (EBP);
  /* 110182c1 pop ebp */
  EBP = (pop32());
  /* 110182c2 ret  */
  ESPCHK(0x110181d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082d0 @ 0x110182d0 (47 bytes, 17 insns) */
void f_110182d0(void) {
  FTRACE(0x110182d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110182d0 push ecx */
  push32((uint32_t)(ECX));
  /* 110182d1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110182d6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 110182da jb 0x110182f0 */
  if (C.cf) goto L_110182f0;
L_110182dc:;
  /* 110182dc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110182e2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110182e7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 110182e9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110182ee jae 0x110182dc */
  if (!C.cf) goto L_110182dc;
L_110182f0:;
  /* 110182f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110182f2 mov eax, esp */
  EAX = (ESP);
  /* 110182f4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 110182f6 mov esp, ecx */
  ESP = (ECX);
  /* 110182f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 110182fa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 110182fd push eax */
  push32((uint32_t)(EAX));
  /* 110182fe ret  */
  ESPCHK(0x110182d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008300 @ 0x11018300 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11018300(void) {
  FTRACE(0x11018300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018300 push ebp */
  push32((uint32_t)(EBP));
  /* 11018301 mov ebp, esp */
  EBP = (ESP);
  /* 11018303 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11018306 push esi */
  push32((uint32_t)(ESI));
  /* 11018307 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101830b je 0x11018313 */
  if (C.zf) goto L_11018313;
  /* 1101830d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018311 jne 0x11018318 */
  if (!C.zf) goto L_11018318;
L_11018313:;
  /* 11018313 jmp 0x110184e8 */
  goto L_110184e8;
L_11018318:;
  /* 11018318 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101831c je 0x11018334 */
  if (C.zf) goto L_11018334;
  /* 1101831e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018322 je 0x11018334 */
  if (C.zf) goto L_11018334;
  /* 11018324 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018328 je 0x11018334 */
  if (C.zf) goto L_11018334;
  /* 1101832a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101832e jne 0x11018411 */
  if (!C.zf) goto L_11018411;
L_11018334:;
  /* 11018334 push 1 */
  push32((uint32_t)(0x1u));
  /* 11018336 call 0x11018b30 */
  push32(0x1101833bu); f_11018b30();
  /* 1101833b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101833e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018342 je 0x1101834a */
  if (C.zf) goto L_1101834a;
  /* 11018344 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018348 jne 0x1101838f */
  if (!C.zf) goto L_1101838f;
L_1101834a:;
  /* 1101834a cmp dword ptr [0x11040744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018351 jne 0x1101838f */
  if (!C.zf) goto L_1101838f;
  /* 11018353 push 1 */
  push32((uint32_t)(0x1u));
  /* 11018355 push 0x11018530 */
  push32((uint32_t)(0x11018530u));
  /* 1101835a call dword ptr [0x11043340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043340))), 0x11018360u);
  /* 11018360 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018363 jne 0x11018371 */
  if (!C.zf) goto L_11018371;
  /* 11018365 mov dword ptr [0x11040744], 1 */
  w32((uint32_t)(0x11040744), (0x1u));
  /* 1101836f jmp 0x1101838f */
  goto L_1101838f;
L_11018371:;
  /* 11018371 call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x11018377u);
  /* 11018377 mov esi, eax */
  ESI = (EAX);
  /* 11018379 call 0x1101d010 */
  push32(0x1101837eu); f_1101d010();
  /* 1101837e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11018380 push 1 */
  push32((uint32_t)(0x1u));
  /* 11018382 call 0x11018bd0 */
  push32(0x11018387u); f_11018bd0();
  /* 11018387 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101838a jmp 0x110184e8 */
  goto L_110184e8;
L_1101838f:;
  /* 1101838f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018392 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11018395 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018398 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1101839b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1101839e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110183a2 ja 0x11018402 */
  if ((!C.cf&&!C.zf)) goto L_11018402;
  /* 110183a4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 110183a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110183a9 mov dl, byte ptr [eax + 0x1101850f] */
  DL = (r8((uint32_t)(EAX + 0x1101850f)));
  /* 110183af jmp dword ptr [edx*4 + 0x110184fb] */
  switch (EDX) {
    case 0: goto L_110183b6;
    case 1: goto L_110183f0;
    case 2: goto L_110183ca;
    case 3: goto L_110183dd;
    case 4: goto L_11018402;
    default: x86_unimpl("switch@0x110183af out of table"); return;
  }
L_110183b6:;
  /* 110183b6 mov ecx, dword ptr [0x11040734] */
  ECX = (r32((uint32_t)(0x11040734)));
  /* 110183bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110183bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110183c2 mov dword ptr [0x11040734], edx */
  w32((uint32_t)(0x11040734), (EDX));
  /* 110183c8 jmp 0x11018402 */
  goto L_11018402;
L_110183ca:;
  /* 110183ca mov eax, dword ptr [0x11040738] */
  EAX = (r32((uint32_t)(0x11040738)));
  /* 110183cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 110183d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110183d5 mov dword ptr [0x11040738], ecx */
  w32((uint32_t)(0x11040738), (ECX));
  /* 110183db jmp 0x11018402 */
  goto L_11018402;
L_110183dd:;
  /* 110183dd mov edx, dword ptr [0x1104073c] */
  EDX = (r32((uint32_t)(0x1104073c)));
  /* 110183e3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 110183e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110183e9 mov dword ptr [0x1104073c], eax */
  w32((uint32_t)(0x1104073c), (EAX));
  /* 110183ee jmp 0x11018402 */
  goto L_11018402;
L_110183f0:;
  /* 110183f0 mov ecx, dword ptr [0x11040740] */
  ECX = (r32((uint32_t)(0x11040740)));
  /* 110183f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 110183f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110183fc mov dword ptr [0x11040740], edx */
  w32((uint32_t)(0x11040740), (EDX));
L_11018402:;
  /* 11018402 push 1 */
  push32((uint32_t)(0x1u));
  /* 11018404 call 0x11018bd0 */
  push32(0x11018409u); f_11018bd0();
  /* 11018409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101840c jmp 0x110184e3 */
  goto L_110184e3;
L_11018411:;
  /* 11018411 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018415 je 0x11018428 */
  if (C.zf) goto L_11018428;
  /* 11018417 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101841b je 0x11018428 */
  if (C.zf) goto L_11018428;
  /* 1101841d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018421 je 0x11018428 */
  if (C.zf) goto L_11018428;
  /* 11018423 jmp 0x110184e8 */
  goto L_110184e8;
L_11018428:;
  /* 11018428 call 0x11014b70 */
  push32(0x1101842du); f_11014b70();
  /* 1101842d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11018430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018433 cmp dword ptr [eax + 0x50], 0x1103ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1103ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101843a jne 0x11018485 */
  if (!C.zf) goto L_11018485;
  /* 1101843c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11018441 push 0x1103c0b8 */
  push32((uint32_t)(0x1103c0b8u));
  /* 11018446 push 2 */
  push32((uint32_t)(0x2u));
  /* 11018448 mov ecx, dword ptr [0x1103ec80] */
  ECX = (r32((uint32_t)(0x1103ec80)));
  /* 1101844e push ecx */
  push32((uint32_t)(ECX));
  /* 1101844f call 0x11015130 */
  push32(0x11018454u); f_11015130();
  /* 11018454 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018457 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101845a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1101845d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018460 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018464 je 0x11018483 */
  if (C.zf) goto L_11018483;
  /* 11018466 mov ecx, dword ptr [0x1103ec80] */
  ECX = (r32((uint32_t)(0x1103ec80)));
  /* 1101846c push ecx */
  push32((uint32_t)(ECX));
  /* 1101846d push 0x1103ec00 */
  push32((uint32_t)(0x1103ec00u));
  /* 11018472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018475 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11018478 push eax */
  push32((uint32_t)(EAX));
  /* 11018479 call 0x1101ba10 */
  push32(0x1101847eu); f_1101ba10();
  /* 1101847e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018481 jmp 0x11018485 */
  goto L_11018485;
L_11018483:;
  /* 11018483 jmp 0x110184e8 */
  goto L_110184e8;
L_11018485:;
  /* 11018485 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018488 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1101848b push edx */
  push32((uint32_t)(EDX));
  /* 1101848c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101848f push eax */
  push32((uint32_t)(EAX));
  /* 11018490 call 0x11018810 */
  push32(0x11018495u); f_11018810();
  /* 11018495 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018498 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101849b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101849f jne 0x110184a3 */
  if (!C.zf) goto L_110184a3;
  /* 110184a1 jmp 0x110184e8 */
  goto L_110184e8;
L_110184a3:;
  /* 110184a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110184a6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 110184a9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_110184ac:;
  /* 110184ac mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110184af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 110184b2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110184b5 jne 0x110184e3 */
  if (!C.zf) goto L_110184e3;
  /* 110184b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110184ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110184bd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 110184c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110184c3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110184c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 110184c9 mov edx, dword ptr [0x1103ec84] */
  EDX = (r32((uint32_t)(0x1103ec84)));
  /* 110184cf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 110184d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110184d5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 110184d8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110184da cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110184dd jb 0x110184e1 */
  if (C.cf) goto L_110184e1;
  /* 110184df jmp 0x110184e3 */
  goto L_110184e3;
L_110184e1:;
  /* 110184e1 jmp 0x110184ac */
  goto L_110184ac;
L_110184e3:;
  /* 110184e3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 110184e6 jmp 0x110184f6 */
  goto L_110184f6;
L_110184e8:;
  /* 110184e8 call 0x1101d000 */
  push32(0x110184edu); f_1101d000();
  /* 110184ed mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 110184f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_110184f6:;
  /* 110184f6 pop esi */
  ESI = (pop32());
  /* 110184f7 mov esp, ebp */
  ESP = (EBP);
  /* 110184f9 pop ebp */
  EBP = (pop32());
  /* 110184fa ret  */
  ESPCHK(0x11018300u, _esp0);
  ESP += 4; return;
}

/* FUN_10008530 @ 0x11018530 (146 bytes, 45 insns) */
void f_11018530(void) {
  FTRACE(0x11018530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018530 push ebp */
  push32((uint32_t)(EBP));
  /* 11018531 mov ebp, esp */
  EBP = (ESP);
  /* 11018533 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11018536 push 1 */
  push32((uint32_t)(0x1u));
  /* 11018538 call 0x11018b30 */
  push32(0x1101853du); f_11018b30();
  /* 1101853d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018540 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018544 jne 0x1101855e */
  if (!C.zf) goto L_1101855e;
  /* 11018546 mov dword ptr [ebp - 8], 0x11040734 */
  w32((uint32_t)(EBP + -0x8), (0x11040734u));
  /* 1101854d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018550 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11018552 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11018555 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1101855c jmp 0x11018574 */
  goto L_11018574;
L_1101855e:;
  /* 1101855e mov dword ptr [ebp - 8], 0x11040738 */
  w32((uint32_t)(EBP + -0x8), (0x11040738u));
  /* 11018565 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018568 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1101856a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1101856d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11018574:;
  /* 11018574 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018578 jne 0x11018588 */
  if (!C.zf) goto L_11018588;
  /* 1101857a push 1 */
  push32((uint32_t)(0x1u));
  /* 1101857c call 0x11018bd0 */
  push32(0x11018581u); f_11018bd0();
  /* 11018581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11018586 jmp 0x110185bc */
  goto L_110185bc;
L_11018588:;
  /* 11018588 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101858c je 0x110185ad */
  if (C.zf) goto L_110185ad;
  /* 1101858e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018591 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11018597 push 1 */
  push32((uint32_t)(0x1u));
  /* 11018599 call 0x11018bd0 */
  push32(0x1101859eu); f_11018bd0();
  /* 1101859e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110185a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110185a4 push edx */
  push32((uint32_t)(EDX));
  /* 110185a5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x110185a8u);
  /* 110185a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110185ab jmp 0x110185b7 */
  goto L_110185b7;
L_110185ad:;
  /* 110185ad push 1 */
  push32((uint32_t)(0x1u));
  /* 110185af call 0x11018bd0 */
  push32(0x110185b4u); f_11018bd0();
  /* 110185b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110185b7:;
  /* 110185b7 mov eax, 1 */
  EAX = (0x1u);
L_110185bc:;
  /* 110185bc mov esp, ebp */
  ESP = (EBP);
  /* 110185be pop ebp */
  EBP = (pop32());
  /* 110185bf ret 4 */
  ESPCHK(0x11018530u, _esp0);
  ESP += 8; return;
}

/* FUN_100085d0 @ 0x110185d0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_110185d0(void) {
  FTRACE(0x110185d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110185d0 push ebp */
  push32((uint32_t)(EBP));
  /* 110185d1 mov ebp, esp */
  EBP = (ESP);
  /* 110185d3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110185d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 110185dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110185e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 110185e3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 110185e6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110185e9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 110185ec cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110185f0 ja 0x1101869e */
  if ((!C.cf&&!C.zf)) goto L_1101869e;
  /* 110185f6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 110185f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 110185fb mov dl, byte ptr [eax + 0x110187f2] */
  DL = (r8((uint32_t)(EAX + 0x110187f2)));
  /* 11018601 jmp dword ptr [edx*4 + 0x110187da] */
  switch (EDX) {
    case 0: goto L_11018608;
    case 1: goto L_11018673;
    case 2: goto L_11018659;
    case 3: goto L_11018625;
    case 4: goto L_1101863f;
    case 5: goto L_1101869e;
    default: x86_unimpl("switch@0x11018601 out of table"); return;
  }
L_11018608:;
  /* 11018608 mov dword ptr [ebp - 0x18], 0x11040734 */
  w32((uint32_t)(EBP + -0x18), (0x11040734u));
  /* 1101860f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11018612 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11018614 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11018617 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101861a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101861d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11018620 jmp 0x110186a6 */
  goto L_110186a6;
L_11018625:;
  /* 11018625 mov dword ptr [ebp - 0x18], 0x11040738 */
  w32((uint32_t)(EBP + -0x18), (0x11040738u));
  /* 1101862c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1101862f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11018631 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11018634 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11018637 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101863a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1101863d jmp 0x110186a6 */
  goto L_110186a6;
L_1101863f:;
  /* 1101863f mov dword ptr [ebp - 0x18], 0x1104073c */
  w32((uint32_t)(EBP + -0x18), (0x1104073cu));
  /* 11018646 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11018649 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1101864b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1101864e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11018651 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018654 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11018657 jmp 0x110186a6 */
  goto L_110186a6;
L_11018659:;
  /* 11018659 mov dword ptr [ebp - 0x18], 0x11040740 */
  w32((uint32_t)(EBP + -0x18), (0x11040740u));
  /* 11018660 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11018663 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11018665 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11018668 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1101866b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101866e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11018671 jmp 0x110186a6 */
  goto L_110186a6;
L_11018673:;
  /* 11018673 call 0x11014b70 */
  push32(0x11018678u); f_11014b70();
  /* 11018678 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101867b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101867e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11018681 push edx */
  push32((uint32_t)(EDX));
  /* 11018682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018685 push eax */
  push32((uint32_t)(EAX));
  /* 11018686 call 0x11018810 */
  push32(0x1101868bu); f_11018810();
  /* 1101868b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101868e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018691 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11018694 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11018697 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11018699 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1101869c jmp 0x110186a6 */
  goto L_110186a6;
L_1101869e:;
  /* 1101869e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110186a1 jmp 0x110187d6 */
  goto L_110187d6;
L_110186a6:;
  /* 110186a6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110186aa je 0x110186b6 */
  if (C.zf) goto L_110186b6;
  /* 110186ac push 1 */
  push32((uint32_t)(0x1u));
  /* 110186ae call 0x11018b30 */
  push32(0x110186b3u); f_11018b30();
  /* 110186b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110186b6:;
  /* 110186b6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110186ba jne 0x110186d3 */
  if (!C.zf) goto L_110186d3;
  /* 110186bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110186c0 je 0x110186cc */
  if (C.zf) goto L_110186cc;
  /* 110186c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 110186c4 call 0x11018bd0 */
  push32(0x110186c9u); f_11018bd0();
  /* 110186c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110186cc:;
  /* 110186cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110186ce jmp 0x110187d6 */
  goto L_110187d6;
L_110186d3:;
  /* 110186d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110186d7 jne 0x110186f0 */
  if (!C.zf) goto L_110186f0;
  /* 110186d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110186dd je 0x110186e9 */
  if (C.zf) goto L_110186e9;
  /* 110186df push 1 */
  push32((uint32_t)(0x1u));
  /* 110186e1 call 0x11018bd0 */
  push32(0x110186e6u); f_11018bd0();
  /* 110186e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110186e9:;
  /* 110186e9 push 3 */
  push32((uint32_t)(0x3u));
  /* 110186eb call 0x110148f0 */
  push32(0x110186f0u); f_110148f0();
L_110186f0:;
  /* 110186f0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110186f4 je 0x11018702 */
  if (C.zf) goto L_11018702;
  /* 110186f6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110186fa je 0x11018702 */
  if (C.zf) goto L_11018702;
  /* 110186fc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018700 jne 0x1101872e */
  if (!C.zf) goto L_1101872e;
L_11018702:;
  /* 11018702 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018705 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11018708 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1101870b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101870e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11018715 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018719 jne 0x1101872e */
  if (!C.zf) goto L_1101872e;
  /* 1101871b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101871e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11018721 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11018724 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018727 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1101872e:;
  /* 1101872e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018732 jne 0x11018770 */
  if (!C.zf) goto L_11018770;
  /* 11018734 mov eax, dword ptr [0x1103ec78] */
  EAX = (r32((uint32_t)(0x1103ec78)));
  /* 11018739 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1101873c jmp 0x11018747 */
  goto L_11018747;
L_1101873e:;
  /* 1101873e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018741 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018744 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11018747:;
  /* 11018747 mov edx, dword ptr [0x1103ec78] */
  EDX = (r32((uint32_t)(0x1103ec78)));
  /* 1101874d add edx, dword ptr [0x1103ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1103ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018753 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018756 jge 0x1101876e */
  if ((C.sf==C.of)) goto L_1101876e;
  /* 11018758 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101875b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101875e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018761 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11018764 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1101876c jmp 0x1101873e */
  goto L_1101873e;
L_1101876e:;
  /* 1101876e jmp 0x11018779 */
  goto L_11018779;
L_11018770:;
  /* 11018770 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11018773 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11018779:;
  /* 11018779 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101877d je 0x11018789 */
  if (C.zf) goto L_11018789;
  /* 1101877f push 1 */
  push32((uint32_t)(0x1u));
  /* 11018781 call 0x11018bd0 */
  push32(0x11018786u); f_11018bd0();
  /* 11018786 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11018789:;
  /* 11018789 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101878d jne 0x110187a0 */
  if (!C.zf) goto L_110187a0;
  /* 1101878f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018792 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11018795 push edx */
  push32((uint32_t)(EDX));
  /* 11018796 push 8 */
  push32((uint32_t)(0x8u));
  /* 11018798 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1101879bu);
  /* 1101879b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101879e jmp 0x110187aa */
  goto L_110187aa;
L_110187a0:;
  /* 110187a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110187a3 push eax */
  push32((uint32_t)(EAX));
  /* 110187a4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x110187a7u);
  /* 110187a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110187aa:;
  /* 110187aa cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110187ae je 0x110187bc */
  if (C.zf) goto L_110187bc;
  /* 110187b0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110187b4 je 0x110187bc */
  if (C.zf) goto L_110187bc;
  /* 110187b6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110187ba jne 0x110187d4 */
  if (!C.zf) goto L_110187d4;
L_110187bc:;
  /* 110187bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110187bf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 110187c2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 110187c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110187c9 jne 0x110187d4 */
  if (!C.zf) goto L_110187d4;
  /* 110187cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110187ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110187d1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_110187d4:;
  /* 110187d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_110187d6:;
  /* 110187d6 mov esp, ebp */
  ESP = (EBP);
  /* 110187d8 pop ebp */
  EBP = (pop32());
  /* 110187d9 ret  */
  ESPCHK(0x110185d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008810 @ 0x11018810 (91 bytes, 35 insns) */
void f_11018810(void) {
  FTRACE(0x11018810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018810 push ebp */
  push32((uint32_t)(EBP));
  /* 11018811 mov ebp, esp */
  EBP = (ESP);
  /* 11018813 push ecx */
  push32((uint32_t)(ECX));
  /* 11018814 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11018817 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1101881a:;
  /* 1101881a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101881d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11018820 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018823 je 0x11018843 */
  if (C.zf) goto L_11018843;
  /* 11018825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018828 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101882b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1101882e mov ecx, dword ptr [0x1103ec84] */
  ECX = (r32((uint32_t)(0x1103ec84)));
  /* 11018834 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11018837 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101883a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101883c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101883f jae 0x11018843 */
  if (!C.cf) goto L_11018843;
  /* 11018841 jmp 0x1101881a */
  goto L_1101881a;
L_11018843:;
  /* 11018843 mov eax, dword ptr [0x1103ec84] */
  EAX = (r32((uint32_t)(0x1103ec84)));
  /* 11018848 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1101884b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101884e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018850 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018853 jae 0x11018865 */
  if (!C.cf) goto L_11018865;
  /* 11018855 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018858 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1101885b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101885e jne 0x11018865 */
  if (!C.zf) goto L_11018865;
  /* 11018860 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018863 jmp 0x11018867 */
  goto L_11018867;
L_11018865:;
  /* 11018865 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11018867:;
  /* 11018867 mov esp, ebp */
  ESP = (EBP);
  /* 11018869 pop ebp */
  EBP = (pop32());
  /* 1101886a ret  */
  ESPCHK(0x11018810u, _esp0);
  ESP += 4; return;
}

/* FUN_10008870 @ 0x11018870 (13 bytes, 6 insns) */
void f_11018870(void) {
  FTRACE(0x11018870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018870 push ebp */
  push32((uint32_t)(EBP));
  /* 11018871 mov ebp, esp */
  EBP = (ESP);
  /* 11018873 call 0x11014b70 */
  push32(0x11018878u); f_11014b70();
  /* 11018878 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101887b pop ebp */
  EBP = (pop32());
  /* 1101887c ret  */
  ESPCHK(0x11018870u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x11018880 (13 bytes, 6 insns) */
void f_11018880(void) {
  FTRACE(0x11018880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018880 push ebp */
  push32((uint32_t)(EBP));
  /* 11018881 mov ebp, esp */
  EBP = (ESP);
  /* 11018883 call 0x11014b70 */
  push32(0x11018888u); f_11014b70();
  /* 11018888 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101888b pop ebp */
  EBP = (pop32());
  /* 1101888c ret  */
  ESPCHK(0x11018880u, _esp0);
  ESP += 4; return;
}

/* FUN_10008890 @ 0x11018890 (187 bytes, 54 insns) */
void f_11018890(void) {
  FTRACE(0x11018890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018890 push ebp */
  push32((uint32_t)(EBP));
  /* 11018891 mov ebp, esp */
  EBP = (ESP);
  /* 11018893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11018896 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1101889d cmp dword ptr [0x11040748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110188a4 jne 0x11018903 */
  if (!C.zf) goto L_11018903;
  /* 110188a6 push 0x1103b4e4 */
  push32((uint32_t)(0x1103b4e4u));
  /* 110188ab call dword ptr [0x11043384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043384))), 0x110188b1u);
  /* 110188b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110188b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110188b8 je 0x110188d7 */
  if (C.zf) goto L_110188d7;
  /* 110188ba push 0x1103c0e8 */
  push32((uint32_t)(0x1103c0e8u));
  /* 110188bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 110188c2 push eax */
  push32((uint32_t)(EAX));
  /* 110188c3 call dword ptr [0x11043380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043380))), 0x110188c9u);
  /* 110188c9 mov dword ptr [0x11040748], eax */
  w32((uint32_t)(0x11040748), (EAX));
  /* 110188ce cmp dword ptr [0x11040748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110188d5 jne 0x110188db */
  if (!C.zf) goto L_110188db;
L_110188d7:;
  /* 110188d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110188d9 jmp 0x11018947 */
  goto L_11018947;
L_110188db:;
  /* 110188db push 0x1103c0d8 */
  push32((uint32_t)(0x1103c0d8u));
  /* 110188e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 110188e3 push ecx */
  push32((uint32_t)(ECX));
  /* 110188e4 call dword ptr [0x11043380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043380))), 0x110188eau);
  /* 110188ea mov dword ptr [0x1104074c], eax */
  w32((uint32_t)(0x1104074c), (EAX));
  /* 110188ef push 0x1103c0c4 */
  push32((uint32_t)(0x1103c0c4u));
  /* 110188f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 110188f7 push edx */
  push32((uint32_t)(EDX));
  /* 110188f8 call dword ptr [0x11043380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043380))), 0x110188feu);
  /* 110188fe mov dword ptr [0x11040750], eax */
  w32((uint32_t)(0x11040750), (EAX));
L_11018903:;
  /* 11018903 cmp dword ptr [0x1104074c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1104074c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101890a je 0x11018915 */
  if (C.zf) goto L_11018915;
  /* 1101890c call dword ptr [0x1104074c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104074c))), 0x11018912u);
  /* 11018912 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11018915:;
  /* 11018915 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018919 je 0x11018931 */
  if (C.zf) goto L_11018931;
  /* 1101891b cmp dword ptr [0x11040750], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11040750))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018922 je 0x11018931 */
  if (C.zf) goto L_11018931;
  /* 11018924 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018927 push eax */
  push32((uint32_t)(EAX));
  /* 11018928 call dword ptr [0x11040750] */
  call_ind((uint32_t)(r32((uint32_t)(0x11040750))), 0x1101892eu);
  /* 1101892e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11018931:;
  /* 11018931 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11018934 push ecx */
  push32((uint32_t)(ECX));
  /* 11018935 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11018938 push edx */
  push32((uint32_t)(EDX));
  /* 11018939 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101893c push eax */
  push32((uint32_t)(EAX));
  /* 1101893d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018940 push ecx */
  push32((uint32_t)(ECX));
  /* 11018941 call dword ptr [0x11040748] */
  call_ind((uint32_t)(r32((uint32_t)(0x11040748))), 0x11018947u);
L_11018947:;
  /* 11018947 mov esp, ebp */
  ESP = (EBP);
  /* 11018949 pop ebp */
  EBP = (pop32());
  /* 1101894a ret  */
  ESPCHK(0x11018890u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11018950 (254 bytes, 109 insns) */
void f_11018950(void) {
  FTRACE(0x11018950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018950 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11018954 push edi */
  push32((uint32_t)(EDI));
  /* 11018955 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11018957 je 0x110189d3 */
  if (C.zf) goto L_110189d3;
  /* 11018959 push esi */
  push32((uint32_t)(ESI));
  /* 1101895a push ebx */
  push32((uint32_t)(EBX));
  /* 1101895b mov ebx, ecx */
  EBX = (ECX);
  /* 1101895d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11018961 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11018967 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1101896b jne 0x11018974 */
  if (!C.zf) goto L_11018974;
  /* 1101896d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11018970 jne 0x110189e1 */
  if (!C.zf) goto L_110189e1;
  /* 11018972 jmp 0x11018995 */
  goto L_11018995;
L_11018974:;
  /* 11018974 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11018976 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11018977 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11018979 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1101897a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1101897b je 0x110189a2 */
  if (C.zf) goto L_110189a2;
  /* 1101897d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1101897f je 0x110189aa */
  if (C.zf) goto L_110189aa;
  /* 11018981 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11018987 jne 0x11018974 */
  if (!C.zf) goto L_11018974;
  /* 11018989 mov ebx, ecx */
  EBX = (ECX);
  /* 1101898b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1101898e jne 0x110189e1 */
  if (!C.zf) goto L_110189e1;
L_11018990:;
  /* 11018990 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11018993 je 0x110189a2 */
  if (C.zf) goto L_110189a2;
L_11018995:;
  /* 11018995 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11018997 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11018998 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1101899a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1101899b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1101899d je 0x110189ce */
  if (C.zf) goto L_110189ce;
  /* 1101899f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110189a0 jne 0x11018995 */
  if (!C.zf) goto L_11018995;
L_110189a2:;
  /* 110189a2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 110189a6 pop ebx */
  EBX = (pop32());
  /* 110189a7 pop esi */
  ESI = (pop32());
  /* 110189a8 pop edi */
  EDI = (pop32());
  /* 110189a9 ret  */
  ESPCHK(0x11018950u, _esp0);
  ESP += 4; return;
L_110189aa:;
  /* 110189aa test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110189b0 je 0x110189c4 */
  if (C.zf) goto L_110189c4;
L_110189b2:;
  /* 110189b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110189b4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 110189b5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110189b6 je 0x11018a46 */
  if (C.zf) goto L_11018a46;
  /* 110189bc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 110189c2 jne 0x110189b2 */
  if (!C.zf) goto L_110189b2;
L_110189c4:;
  /* 110189c4 mov ebx, ecx */
  EBX = (ECX);
  /* 110189c6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 110189c9 jne 0x11018a37 */
  if (!C.zf) goto L_11018a37;
L_110189cb:;
  /* 110189cb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 110189cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_110189ce:;
  /* 110189ce dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 110189cf jne 0x110189cb */
  if (!C.zf) goto L_110189cb;
  /* 110189d1 pop ebx */
  EBX = (pop32());
  /* 110189d2 pop esi */
  ESI = (pop32());
L_110189d3:;
  /* 110189d3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 110189d7 pop edi */
  EDI = (pop32());
  /* 110189d8 ret  */
  ESPCHK(0x11018950u, _esp0);
  ESP += 4; return;
L_110189d9:;
  /* 110189d9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 110189db add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 110189de dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 110189df je 0x11018990 */
  if (C.zf) goto L_11018990;
L_110189e1:;
  /* 110189e1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 110189e6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 110189e8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 110189ea xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 110189ed xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 110189ef mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 110189f1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 110189f4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 110189f9 je 0x110189d9 */
  if (C.zf) goto L_110189d9;
  /* 110189fb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 110189fd je 0x11018a2b */
  if (C.zf) goto L_11018a2b;
  /* 110189ff test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11018a01 je 0x11018a21 */
  if (C.zf) goto L_11018a21;
  /* 11018a03 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11018a09 je 0x11018a17 */
  if (C.zf) goto L_11018a17;
  /* 11018a0b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11018a11 jne 0x110189d9 */
  if (!C.zf) goto L_110189d9;
  /* 11018a13 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11018a15 jmp 0x11018a2f */
  goto L_11018a2f;
L_11018a17:;
  /* 11018a17 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11018a1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11018a1f jmp 0x11018a2f */
  goto L_11018a2f;
L_11018a21:;
  /* 11018a21 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11018a27 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11018a29 jmp 0x11018a2f */
  goto L_11018a2f;
L_11018a2b:;
  /* 11018a2b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11018a2d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11018a2f:;
  /* 11018a2f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11018a32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11018a34 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11018a35 je 0x11018a41 */
  if (C.zf) goto L_11018a41;
L_11018a37:;
  /* 11018a37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11018a39:;
  /* 11018a39 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11018a3b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11018a3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11018a3f jne 0x11018a39 */
  if (!C.zf) goto L_11018a39;
L_11018a41:;
  /* 11018a41 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11018a44 jne 0x110189cb */
  if (!C.zf) goto L_110189cb;
L_11018a46:;
  /* 11018a46 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11018a4a pop ebx */
  EBX = (pop32());
  /* 11018a4b pop esi */
  ESI = (pop32());
  /* 11018a4c pop edi */
  EDI = (pop32());
  /* 11018a4d ret  */
  ESPCHK(0x11018950u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a50 @ 0x11018a50 (55 bytes, 16 insns) */
void f_11018a50(void) {
  FTRACE(0x11018a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11018a51 mov ebp, esp */
  EBP = (ESP);
  /* 11018a53 mov eax, dword ptr [0x1103eb84] */
  EAX = (r32((uint32_t)(0x1103eb84)));
  /* 11018a58 push eax */
  push32((uint32_t)(EAX));
  /* 11018a59 call dword ptr [0x11043348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043348))), 0x11018a5fu);
  /* 11018a5f mov ecx, dword ptr [0x1103eb74] */
  ECX = (r32((uint32_t)(0x1103eb74)));
  /* 11018a65 push ecx */
  push32((uint32_t)(ECX));
  /* 11018a66 call dword ptr [0x11043348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043348))), 0x11018a6cu);
  /* 11018a6c mov edx, dword ptr [0x1103eb64] */
  EDX = (r32((uint32_t)(0x1103eb64)));
  /* 11018a72 push edx */
  push32((uint32_t)(EDX));
  /* 11018a73 call dword ptr [0x11043348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043348))), 0x11018a79u);
  /* 11018a79 mov eax, dword ptr [0x1103eb44] */
  EAX = (r32((uint32_t)(0x1103eb44)));
  /* 11018a7e push eax */
  push32((uint32_t)(EAX));
  /* 11018a7f call dword ptr [0x11043348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043348))), 0x11018a85u);
  /* 11018a85 pop ebp */
  EBP = (pop32());
  /* 11018a86 ret  */
  ESPCHK(0x11018a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a90 @ 0x11018a90 (159 bytes, 47 insns) */
void f_11018a90(void) {
  FTRACE(0x11018a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11018a91 mov ebp, esp */
  EBP = (ESP);
  /* 11018a93 push ecx */
  push32((uint32_t)(ECX));
  /* 11018a94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11018a9b jmp 0x11018aa6 */
  goto L_11018aa6;
L_11018a9d:;
  /* 11018a9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018aa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018aa3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11018aa6:;
  /* 11018aa6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018aaa jge 0x11018af9 */
  if ((C.sf==C.of)) goto L_11018af9;
  /* 11018aac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018aaf cmp dword ptr [ecx*4 + 0x1103eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1103eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018ab7 je 0x11018af7 */
  if (C.zf) goto L_11018af7;
  /* 11018ab9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018abd je 0x11018af7 */
  if (C.zf) goto L_11018af7;
  /* 11018abf cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018ac3 je 0x11018af7 */
  if (C.zf) goto L_11018af7;
  /* 11018ac5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018ac9 je 0x11018af7 */
  if (C.zf) goto L_11018af7;
  /* 11018acb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018acf je 0x11018af7 */
  if (C.zf) goto L_11018af7;
  /* 11018ad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018ad4 mov eax, dword ptr [edx*4 + 0x1103eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1103eb40)));
  /* 11018adb push eax */
  push32((uint32_t)(EAX));
  /* 11018adc call dword ptr [0x110433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c4))), 0x11018ae2u);
  /* 11018ae2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11018ae4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018ae7 mov edx, dword ptr [ecx*4 + 0x1103eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1103eb40)));
  /* 11018aee push edx */
  push32((uint32_t)(EDX));
  /* 11018aef call 0x11015bc0 */
  push32(0x11018af4u); f_11015bc0();
  /* 11018af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11018af7:;
  /* 11018af7 jmp 0x11018a9d */
  goto L_11018a9d;
L_11018af9:;
  /* 11018af9 mov eax, dword ptr [0x1103eb64] */
  EAX = (r32((uint32_t)(0x1103eb64)));
  /* 11018afe push eax */
  push32((uint32_t)(EAX));
  /* 11018aff call dword ptr [0x110433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c4))), 0x11018b05u);
  /* 11018b05 mov ecx, dword ptr [0x1103eb74] */
  ECX = (r32((uint32_t)(0x1103eb74)));
  /* 11018b0b push ecx */
  push32((uint32_t)(ECX));
  /* 11018b0c call dword ptr [0x110433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c4))), 0x11018b12u);
  /* 11018b12 mov edx, dword ptr [0x1103eb84] */
  EDX = (r32((uint32_t)(0x1103eb84)));
  /* 11018b18 push edx */
  push32((uint32_t)(EDX));
  /* 11018b19 call dword ptr [0x110433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c4))), 0x11018b1fu);
  /* 11018b1f mov eax, dword ptr [0x1103eb44] */
  EAX = (r32((uint32_t)(0x1103eb44)));
  /* 11018b24 push eax */
  push32((uint32_t)(EAX));
  /* 11018b25 call dword ptr [0x110433c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433c4))), 0x11018b2bu);
  /* 11018b2b mov esp, ebp */
  ESP = (EBP);
  /* 11018b2d pop ebp */
  EBP = (pop32());
  /* 11018b2e ret  */
  ESPCHK(0x11018a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b30 @ 0x11018b30 (151 bytes, 46 insns) */
void f_11018b30(void) {
  FTRACE(0x11018b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11018b31 mov ebp, esp */
  EBP = (ESP);
  /* 11018b33 push ecx */
  push32((uint32_t)(ECX));
  /* 11018b34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018b37 cmp dword ptr [eax*4 + 0x1103eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1103eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018b3f jne 0x11018bb2 */
  if (!C.zf) goto L_11018bb2;
  /* 11018b41 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11018b46 push 0x1103c0f4 */
  push32((uint32_t)(0x1103c0f4u));
  /* 11018b4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11018b4d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11018b4f call 0x11015130 */
  push32(0x11018b54u); f_11015130();
  /* 11018b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018b57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11018b5a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018b5e jne 0x11018b6a */
  if (!C.zf) goto L_11018b6a;
  /* 11018b60 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11018b62 call 0x110140a0 */
  push32(0x11018b67u); f_110140a0();
  /* 11018b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11018b6a:;
  /* 11018b6a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11018b6c call 0x11018b30 */
  push32(0x11018b71u); f_11018b30();
  /* 11018b71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018b77 cmp dword ptr [ecx*4 + 0x1103eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1103eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018b7f jne 0x11018b9a */
  if (!C.zf) goto L_11018b9a;
  /* 11018b81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018b84 push edx */
  push32((uint32_t)(EDX));
  /* 11018b85 call dword ptr [0x11043348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043348))), 0x11018b8bu);
  /* 11018b8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018b8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018b91 mov dword ptr [eax*4 + 0x1103eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1103eb40), (ECX));
  /* 11018b98 jmp 0x11018ba8 */
  goto L_11018ba8;
L_11018b9a:;
  /* 11018b9a push 2 */
  push32((uint32_t)(0x2u));
  /* 11018b9c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018b9f push edx */
  push32((uint32_t)(EDX));
  /* 11018ba0 call 0x11015bc0 */
  push32(0x11018ba5u); f_11015bc0();
  /* 11018ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11018ba8:;
  /* 11018ba8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11018baa call 0x11018bd0 */
  push32(0x11018bafu); f_11018bd0();
  /* 11018baf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11018bb2:;
  /* 11018bb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018bb5 mov ecx, dword ptr [eax*4 + 0x1103eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1103eb40)));
  /* 11018bbc push ecx */
  push32((uint32_t)(ECX));
  /* 11018bbd call dword ptr [0x11043338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043338))), 0x11018bc3u);
  /* 11018bc3 mov esp, ebp */
  ESP = (EBP);
  /* 11018bc5 pop ebp */
  EBP = (pop32());
  /* 11018bc6 ret  */
  ESPCHK(0x11018b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd0 @ 0x11018bd0 (22 bytes, 8 insns) */
void f_11018bd0(void) {
  FTRACE(0x11018bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11018bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11018bd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018bd6 mov ecx, dword ptr [eax*4 + 0x1103eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1103eb40)));
  /* 11018bdd push ecx */
  push32((uint32_t)(ECX));
  /* 11018bde call dword ptr [0x11043334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043334))), 0x11018be4u);
  /* 11018be4 pop ebp */
  EBP = (pop32());
  /* 11018be5 ret  */
  ESPCHK(0x11018bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bf0 @ 0x11018bf0 (26 bytes, 10 insns) */
void f_11018bf0(void) {
  FTRACE(0x11018bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11018bf1 mov ebp, esp */
  EBP = (ESP);
  /* 11018bf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018bf6 push eax */
  push32((uint32_t)(EAX));
  /* 11018bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11018bf9 call dword ptr [0x1104333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104333c))), 0x11018bffu);
  /* 11018bff push 0xff */
  push32((uint32_t)(0xffu));
  /* 11018c04 call dword ptr [0x11043390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043390))), 0x11018c0au);
  /* 11018c0a pop ebp */
  EBP = (pop32());
  /* 11018c0b ret  */
  ESPCHK(0x11018bf0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11018c10 (446 bytes, 130 insns) */
void f_11018c10(void) {
  FTRACE(0x11018c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11018c11 mov ebp, esp */
  EBP = (ESP);
  /* 11018c13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11018c16 call 0x11014b70 */
  push32(0x11018c1bu); f_11014b70();
  /* 11018c1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11018c1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018c21 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11018c24 push ecx */
  push32((uint32_t)(ECX));
  /* 11018c25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018c28 push edx */
  push32((uint32_t)(EDX));
  /* 11018c29 call 0x11018dd0 */
  push32(0x11018c2eu); f_11018dd0();
  /* 11018c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018c31 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11018c34 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018c38 je 0x11018c43 */
  if (C.zf) goto L_11018c43;
  /* 11018c3a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018c3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018c41 jne 0x11018c52 */
  if (!C.zf) goto L_11018c52;
L_11018c43:;
  /* 11018c43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11018c46 push ecx */
  push32((uint32_t)(ECX));
  /* 11018c47 call dword ptr [0x1104332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1104332c))), 0x11018c4du);
  /* 11018c4d jmp 0x11018dca */
  goto L_11018dca;
L_11018c52:;
  /* 11018c52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018c55 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018c59 jne 0x11018c6f */
  if (!C.zf) goto L_11018c6f;
  /* 11018c5b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018c5e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11018c65 mov eax, 1 */
  EAX = (0x1u);
  /* 11018c6a jmp 0x11018dca */
  goto L_11018dca;
L_11018c6f:;
  /* 11018c6f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018c72 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018c76 jne 0x11018c80 */
  if (!C.zf) goto L_11018c80;
  /* 11018c78 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11018c7b jmp 0x11018dca */
  goto L_11018dca;
L_11018c80:;
  /* 11018c80 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018c83 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11018c86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11018c89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018c8c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11018c8f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11018c92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018c95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11018c98 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11018c9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018c9e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018ca2 jne 0x11018da7 */
  if (!C.zf) goto L_11018da7;
  /* 11018ca8 mov eax, dword ptr [0x1103ec78] */
  EAX = (r32((uint32_t)(0x1103ec78)));
  /* 11018cad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11018cb0 jmp 0x11018cbb */
  goto L_11018cbb;
L_11018cb2:;
  /* 11018cb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11018cb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018cb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11018cbb:;
  /* 11018cbb mov edx, dword ptr [0x1103ec78] */
  EDX = (r32((uint32_t)(0x1103ec78)));
  /* 11018cc1 add edx, dword ptr [0x1103ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1103ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018cc7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018cca jge 0x11018ce2 */
  if ((C.sf==C.of)) goto L_11018ce2;
  /* 11018ccc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11018ccf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11018cd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018cd5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11018cd8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11018ce0 jmp 0x11018cb2 */
  goto L_11018cb2;
L_11018ce2:;
  /* 11018ce2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018ce5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11018ce8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11018ceb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018cee cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018cf4 jne 0x11018d05 */
  if (!C.zf) goto L_11018d05;
  /* 11018cf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018cf9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11018d00 jmp 0x11018d8d */
  goto L_11018d8d;
L_11018d05:;
  /* 11018d05 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018d08 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018d0e jne 0x11018d1c */
  if (!C.zf) goto L_11018d1c;
  /* 11018d10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018d13 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11018d1a jmp 0x11018d8d */
  goto L_11018d8d;
L_11018d1c:;
  /* 11018d1c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018d1f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018d25 jne 0x11018d33 */
  if (!C.zf) goto L_11018d33;
  /* 11018d27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018d2a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11018d31 jmp 0x11018d8d */
  goto L_11018d8d;
L_11018d33:;
  /* 11018d33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018d36 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018d3c jne 0x11018d4a */
  if (!C.zf) goto L_11018d4a;
  /* 11018d3e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018d41 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11018d48 jmp 0x11018d8d */
  goto L_11018d8d;
L_11018d4a:;
  /* 11018d4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018d4d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018d53 jne 0x11018d61 */
  if (!C.zf) goto L_11018d61;
  /* 11018d55 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018d58 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11018d5f jmp 0x11018d8d */
  goto L_11018d8d;
L_11018d61:;
  /* 11018d61 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018d64 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018d6a jne 0x11018d78 */
  if (!C.zf) goto L_11018d78;
  /* 11018d6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018d6f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11018d76 jmp 0x11018d8d */
  goto L_11018d8d;
L_11018d78:;
  /* 11018d78 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018d7b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018d81 jne 0x11018d8d */
  if (!C.zf) goto L_11018d8d;
  /* 11018d83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018d86 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11018d8d:;
  /* 11018d8d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018d90 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11018d93 push edx */
  push32((uint32_t)(EDX));
  /* 11018d94 push 8 */
  push32((uint32_t)(0x8u));
  /* 11018d96 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11018d99u);
  /* 11018d99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018d9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018d9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11018da2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11018da5 jmp 0x11018dbe */
  goto L_11018dbe;
L_11018da7:;
  /* 11018da7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018daa mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11018db1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11018db4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11018db7 push ecx */
  push32((uint32_t)(ECX));
  /* 11018db8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11018dbbu);
  /* 11018dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11018dbe:;
  /* 11018dbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11018dc1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11018dc4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11018dc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11018dca:;
  /* 11018dca mov esp, ebp */
  ESP = (EBP);
  /* 11018dcc pop ebp */
  EBP = (pop32());
  /* 11018dcd ret  */
  ESPCHK(0x11018c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dd0 @ 0x11018dd0 (89 bytes, 35 insns) */
void f_11018dd0(void) {
  FTRACE(0x11018dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11018dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11018dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11018dd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11018dd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11018dda:;
  /* 11018dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018ddd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11018ddf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018de2 je 0x11018e02 */
  if (C.zf) goto L_11018e02;
  /* 11018de4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018de7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018dea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11018ded mov ecx, dword ptr [0x1103ec84] */
  ECX = (r32((uint32_t)(0x1103ec84)));
  /* 11018df3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11018df6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11018df9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018dfb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018dfe jae 0x11018e02 */
  if (!C.cf) goto L_11018e02;
  /* 11018e00 jmp 0x11018dda */
  goto L_11018dda;
L_11018e02:;
  /* 11018e02 mov eax, dword ptr [0x1103ec84] */
  EAX = (r32((uint32_t)(0x1103ec84)));
  /* 11018e07 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11018e0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11018e0d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018e0f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018e12 jae 0x11018e1e */
  if (!C.cf) goto L_11018e1e;
  /* 11018e14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018e17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11018e19 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018e1c je 0x11018e22 */
  if (C.zf) goto L_11018e22;
L_11018e1e:;
  /* 11018e1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11018e20 jmp 0x11018e25 */
  goto L_11018e25;
L_11018e22:;
  /* 11018e22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11018e25:;
  /* 11018e25 mov esp, ebp */
  ESP = (EBP);
  /* 11018e27 pop ebp */
  EBP = (pop32());
  /* 11018e28 ret  */
  ESPCHK(0x11018dd0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11018e30 (48 bytes, 17 insns) */
void f_11018e30(void) {
  FTRACE(0x11018e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11018e31 mov ebp, esp */
  EBP = (ESP);
  /* 11018e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11018e34 push 9 */
  push32((uint32_t)(0x9u));
  /* 11018e36 call 0x11018b30 */
  push32(0x11018e3bu); f_11018b30();
  /* 11018e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018e3e mov eax, dword ptr [0x110407bc] */
  EAX = (r32((uint32_t)(0x110407bc)));
  /* 11018e43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11018e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018e49 mov dword ptr [0x110407bc], ecx */
  w32((uint32_t)(0x110407bc), (ECX));
  /* 11018e4f push 9 */
  push32((uint32_t)(0x9u));
  /* 11018e51 call 0x11018bd0 */
  push32(0x11018e56u); f_11018bd0();
  /* 11018e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018e59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018e5c mov esp, ebp */
  ESP = (EBP);
  /* 11018e5e pop ebp */
  EBP = (pop32());
  /* 11018e5f ret  */
  ESPCHK(0x11018e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e60 @ 0x11018e60 (10 bytes, 5 insns) */
void f_11018e60(void) {
  FTRACE(0x11018e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11018e61 mov ebp, esp */
  EBP = (ESP);
  /* 11018e63 mov eax, dword ptr [0x110407bc] */
  EAX = (r32((uint32_t)(0x110407bc)));
  /* 11018e68 pop ebp */
  EBP = (pop32());
  /* 11018e69 ret  */
  ESPCHK(0x11018e60u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11018e70 (45 bytes, 19 insns) */
void f_11018e70(void) {
  FTRACE(0x11018e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11018e71 mov ebp, esp */
  EBP = (ESP);
  /* 11018e73 push ecx */
  push32((uint32_t)(ECX));
  /* 11018e74 mov eax, dword ptr [0x110407bc] */
  EAX = (r32((uint32_t)(0x110407bc)));
  /* 11018e79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11018e7c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018e80 je 0x11018e90 */
  if (C.zf) goto L_11018e90;
  /* 11018e82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018e85 push ecx */
  push32((uint32_t)(ECX));
  /* 11018e86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11018e89u);
  /* 11018e89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11018e8e jne 0x11018e94 */
  if (!C.zf) goto L_11018e94;
L_11018e90:;
  /* 11018e90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11018e92 jmp 0x11018e99 */
  goto L_11018e99;
L_11018e94:;
  /* 11018e94 mov eax, 1 */
  EAX = (0x1u);
L_11018e99:;
  /* 11018e99 mov esp, ebp */
  ESP = (EBP);
  /* 11018e9b pop ebp */
  EBP = (pop32());
  /* 11018e9c ret  */
  ESPCHK(0x11018e70u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11018ea0 (88 bytes, 40 insns) */
void f_11018ea0(void) {
  FTRACE(0x11018ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018ea0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11018ea4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11018ea8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11018eaa je 0x11018ef3 */
  if (C.zf) goto L_11018ef3;
  /* 11018eac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11018eae mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11018eb2 push edi */
  push32((uint32_t)(EDI));
  /* 11018eb3 mov edi, ecx */
  EDI = (ECX);
  /* 11018eb5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018eb8 jb 0x11018ee7 */
  if (C.cf) goto L_11018ee7;
  /* 11018eba neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11018ebc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11018ebf je 0x11018ec9 */
  if (C.zf) goto L_11018ec9;
  /* 11018ec1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11018ec3:;
  /* 11018ec3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11018ec5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11018ec6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11018ec7 jne 0x11018ec3 */
  if (!C.zf) goto L_11018ec3;
L_11018ec9:;
  /* 11018ec9 mov ecx, eax */
  ECX = (EAX);
  /* 11018ecb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11018ece add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018ed0 mov ecx, eax */
  ECX = (EAX);
  /* 11018ed2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11018ed5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018ed7 mov ecx, edx */
  ECX = (EDX);
  /* 11018ed9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11018edc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11018edf je 0x11018ee7 */
  if (C.zf) goto L_11018ee7;
  /* 11018ee1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11018ee3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11018ee5 je 0x11018eed */
  if (C.zf) goto L_11018eed;
L_11018ee7:;
  /* 11018ee7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11018ee9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11018eea dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11018eeb jne 0x11018ee7 */
  if (!C.zf) goto L_11018ee7;
L_11018eed:;
  /* 11018eed mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11018ef1 pop edi */
  EDI = (pop32());
  /* 11018ef2 ret  */
  ESPCHK(0x11018ea0u, _esp0);
  ESP += 4; return;
L_11018ef3:;
  /* 11018ef3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11018ef7 ret  */
  ESPCHK(0x11018ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f00 @ 0x11018f00 (23 bytes, 10 insns) */
void f_11018f00(void) {
  FTRACE(0x11018f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11018f01 mov ebp, esp */
  EBP = (ESP);
  /* 11018f03 mov eax, dword ptr [0x110407b8] */
  EAX = (r32((uint32_t)(0x110407b8)));
  /* 11018f08 push eax */
  push32((uint32_t)(EAX));
  /* 11018f09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018f0c push ecx */
  push32((uint32_t)(ECX));
  /* 11018f0d call 0x11018f20 */
  push32(0x11018f12u); f_11018f20();
  /* 11018f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018f15 pop ebp */
  EBP = (pop32());
  /* 11018f16 ret  */
  ESPCHK(0x11018f00u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11018f20 (87 bytes, 34 insns) */
void f_11018f20(void) {
  FTRACE(0x11018f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11018f21 mov ebp, esp */
  EBP = (ESP);
  /* 11018f23 push ecx */
  push32((uint32_t)(ECX));
  /* 11018f24 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018f28 jbe 0x11018f2e */
  if ((C.cf||C.zf)) goto L_11018f2e;
  /* 11018f2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11018f2c jmp 0x11018f73 */
  goto L_11018f73;
L_11018f2e:;
  /* 11018f2e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018f32 ja 0x11018f45 */
  if ((!C.cf&&!C.zf)) goto L_11018f45;
  /* 11018f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018f37 push eax */
  push32((uint32_t)(EAX));
  /* 11018f38 call 0x11018f80 */
  push32(0x11018f3du); f_11018f80();
  /* 11018f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018f40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11018f43 jmp 0x11018f4c */
  goto L_11018f4c;
L_11018f45:;
  /* 11018f45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11018f4c:;
  /* 11018f4c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018f50 jne 0x11018f58 */
  if (!C.zf) goto L_11018f58;
  /* 11018f52 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018f56 jne 0x11018f5d */
  if (!C.zf) goto L_11018f5d;
L_11018f58:;
  /* 11018f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018f5b jmp 0x11018f73 */
  goto L_11018f73;
L_11018f5d:;
  /* 11018f5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018f60 push ecx */
  push32((uint32_t)(ECX));
  /* 11018f61 call 0x11018e70 */
  push32(0x11018f66u); f_11018e70();
  /* 11018f66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11018f6b jne 0x11018f71 */
  if (!C.zf) goto L_11018f71;
  /* 11018f6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11018f6f jmp 0x11018f73 */
  goto L_11018f73;
L_11018f71:;
  /* 11018f71 jmp 0x11018f2e */
  goto L_11018f2e;
L_11018f73:;
  /* 11018f73 mov esp, ebp */
  ESP = (EBP);
  /* 11018f75 pop ebp */
  EBP = (pop32());
  /* 11018f76 ret  */
  ESPCHK(0x11018f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f80 @ 0x11018f80 (109 bytes, 37 insns) */
void f_11018f80(void) {
  FTRACE(0x11018f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11018f81 mov ebp, esp */
  EBP = (ESP);
  /* 11018f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11018f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018f87 cmp eax, dword ptr [0x1103ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018f8d ja 0x11018fbd */
  if ((!C.cf&&!C.zf)) goto L_11018fbd;
  /* 11018f8f push 9 */
  push32((uint32_t)(0x9u));
  /* 11018f91 call 0x11018b30 */
  push32(0x11018f96u); f_11018b30();
  /* 11018f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018f99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018f9c push ecx */
  push32((uint32_t)(ECX));
  /* 11018f9d call 0x11019ac0 */
  push32(0x11018fa2u); f_11019ac0();
  /* 11018fa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11018fa8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11018faa call 0x11018bd0 */
  push32(0x11018fafu); f_11018bd0();
  /* 11018faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11018fb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018fb6 je 0x11018fbd */
  if (C.zf) goto L_11018fbd;
  /* 11018fb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11018fbb jmp 0x11018fe9 */
  goto L_11018fe9;
L_11018fbd:;
  /* 11018fbd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11018fc1 jne 0x11018fca */
  if (!C.zf) goto L_11018fca;
  /* 11018fc3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11018fca:;
  /* 11018fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018fcd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11018fd0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11018fd3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11018fd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11018fd9 push eax */
  push32((uint32_t)(EAX));
  /* 11018fda push 0 */
  push32((uint32_t)(0x0u));
  /* 11018fdc mov ecx, dword ptr [0x11041f6c] */
  ECX = (r32((uint32_t)(0x11041f6c)));
  /* 11018fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 11018fe3 call dword ptr [0x11043328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043328))), 0x11018fe9u);
L_11018fe9:;
  /* 11018fe9 mov esp, ebp */
  ESP = (EBP);
  /* 11018feb pop ebp */
  EBP = (pop32());
  /* 11018fec ret  */
  ESPCHK(0x11018f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ff0 @ 0x11018ff0 (10 bytes, 5 insns) */
void f_11018ff0(void) {
  FTRACE(0x11018ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11018ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11018ff1 mov ebp, esp */
  EBP = (ESP);
  /* 11018ff3 mov eax, 1 */
  EAX = (0x1u);
  /* 11018ff8 pop ebp */
  EBP = (pop32());
  /* 11018ff9 ret  */
  ESPCHK(0x11018ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x11019000 (173 bytes, 59 insns) */
void f_11019000(void) {
  FTRACE(0x11019000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11019000 push ebp */
  push32((uint32_t)(EBP));
  /* 11019001 mov ebp, esp */
  EBP = (ESP);
  /* 11019003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019006 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101900a jbe 0x11019013 */
  if ((C.cf||C.zf)) goto L_11019013;
  /* 1101900c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101900e jmp 0x110190a9 */
  goto L_110190a9;
L_11019013:;
  /* 11019013 push 9 */
  push32((uint32_t)(0x9u));
  /* 11019015 call 0x11018b30 */
  push32(0x1101901au); f_11018b30();
  /* 1101901a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101901d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019020 push eax */
  push32((uint32_t)(EAX));
  /* 11019021 call 0x11019430 */
  push32(0x11019026u); f_11019430();
  /* 11019026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019029 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1101902c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019030 je 0x11019071 */
  if (C.zf) goto L_11019071;
  /* 11019032 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11019039 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101903c cmp ecx, dword ptr [0x1103ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1103ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019042 ja 0x11019062 */
  if ((!C.cf&&!C.zf)) goto L_11019062;
  /* 11019044 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019047 push edx */
  push32((uint32_t)(EDX));
  /* 11019048 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101904b push eax */
  push32((uint32_t)(EAX));
  /* 1101904c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101904f push ecx */
  push32((uint32_t)(ECX));
  /* 11019050 call 0x1101a300 */
  push32(0x11019055u); f_1101a300();
  /* 11019055 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101905a je 0x11019062 */
  if (C.zf) goto L_11019062;
  /* 1101905c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101905f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11019062:;
  /* 11019062 push 9 */
  push32((uint32_t)(0x9u));
  /* 11019064 call 0x11018bd0 */
  push32(0x11019069u); f_11018bd0();
  /* 11019069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101906c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1101906f jmp 0x110190a9 */
  goto L_110190a9;
L_11019071:;
  /* 11019071 push 9 */
  push32((uint32_t)(0x9u));
  /* 11019073 call 0x11018bd0 */
  push32(0x11019078u); f_11018bd0();
  /* 11019078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101907b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101907f jne 0x11019088 */
  if (!C.zf) goto L_11019088;
  /* 11019081 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11019088:;
  /* 11019088 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101908b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1101908e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11019090 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11019093 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019096 push ecx */
  push32((uint32_t)(ECX));
  /* 11019097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101909a push edx */
  push32((uint32_t)(EDX));
  /* 1101909b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1101909d mov eax, dword ptr [0x11041f6c] */
  EAX = (r32((uint32_t)(0x11041f6c)));
  /* 110190a2 push eax */
  push32((uint32_t)(EAX));
  /* 110190a3 call dword ptr [0x11043330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043330))), 0x110190a9u);
L_110190a9:;
  /* 110190a9 mov esp, ebp */
  ESP = (EBP);
  /* 110190ab pop ebp */
  EBP = (pop32());
  /* 110190ac ret  */
  ESPCHK(0x11019000u, _esp0);
  ESP += 4; return;
}

/* FUN_100090b0 @ 0x110190b0 (490 bytes, 165 insns) */
void f_110190b0(void) {
  FTRACE(0x110190b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110190b0 push ebp */
  push32((uint32_t)(EBP));
  /* 110190b1 mov ebp, esp */
  EBP = (ESP);
  /* 110190b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 110190b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110190ba jne 0x110190cd */
  if (!C.zf) goto L_110190cd;
  /* 110190bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 110190bf push eax */
  push32((uint32_t)(EAX));
  /* 110190c0 call 0x11018f00 */
  push32(0x110190c5u); f_11018f00();
  /* 110190c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110190c8 jmp 0x11019296 */
  goto L_11019296;
L_110190cd:;
  /* 110190cd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110190d1 jne 0x110190e6 */
  if (!C.zf) goto L_110190e6;
  /* 110190d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110190d6 push ecx */
  push32((uint32_t)(ECX));
  /* 110190d7 call 0x110192a0 */
  push32(0x110190dcu); f_110192a0();
  /* 110190dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110190df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 110190e1 jmp 0x11019296 */
  goto L_11019296;
L_110190e6:;
  /* 110190e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 110190ed cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110190f1 ja 0x11019269 */
  if ((!C.cf&&!C.zf)) goto L_11019269;
  /* 110190f7 push 9 */
  push32((uint32_t)(0x9u));
  /* 110190f9 call 0x11018b30 */
  push32(0x110190feu); f_11018b30();
  /* 110190fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019101 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019104 push edx */
  push32((uint32_t)(EDX));
  /* 11019105 call 0x11019430 */
  push32(0x1101910au); f_11019430();
  /* 1101910a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101910d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11019110 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019114 je 0x1101922c */
  if (C.zf) goto L_1101922c;
  /* 1101911a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1101911d cmp eax, dword ptr [0x1103ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1103ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019123 ja 0x110191a0 */
  if ((!C.cf&&!C.zf)) goto L_110191a0;
  /* 11019125 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019128 push ecx */
  push32((uint32_t)(ECX));
  /* 11019129 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101912c push edx */
  push32((uint32_t)(EDX));
  /* 1101912d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11019130 push eax */
  push32((uint32_t)(EAX));
  /* 11019131 call 0x1101a300 */
  push32(0x11019136u); f_1101a300();
  /* 11019136 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101913b je 0x11019145 */
  if (C.zf) goto L_11019145;
  /* 1101913d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019140 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11019143 jmp 0x110191a0 */
  goto L_110191a0;
L_11019145:;
  /* 11019145 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019148 push edx */
  push32((uint32_t)(EDX));
  /* 11019149 call 0x11019ac0 */
  push32(0x1101914eu); f_11019ac0();
  /* 1101914e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019151 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11019154 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019158 je 0x110191a0 */
  if (C.zf) goto L_110191a0;
  /* 1101915a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1101915d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11019160 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11019163 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11019166 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019169 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101916c jae 0x11019176 */
  if (!C.cf) goto L_11019176;
  /* 1101916e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019171 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11019174 jmp 0x1101917c */
  goto L_1101917c;
L_11019176:;
  /* 11019176 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019179 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1101917c:;
  /* 1101917c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1101917f push edx */
  push32((uint32_t)(EDX));
  /* 11019180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019183 push eax */
  push32((uint32_t)(EAX));
  /* 11019184 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019187 push ecx */
  push32((uint32_t)(ECX));
  /* 11019188 call 0x1101ba10 */
  push32(0x1101918du); f_1101ba10();
  /* 1101918d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019190 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019193 push edx */
  push32((uint32_t)(EDX));
  /* 11019194 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11019197 push eax */
  push32((uint32_t)(EAX));
  /* 11019198 call 0x110194f0 */
  push32(0x1101919du); f_110194f0();
  /* 1101919d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_110191a0:;
  /* 110191a0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110191a4 jne 0x11019220 */
  if (!C.zf) goto L_11019220;
  /* 110191a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110191aa jne 0x110191b3 */
  if (!C.zf) goto L_110191b3;
  /* 110191ac mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_110191b3:;
  /* 110191b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 110191b6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 110191b9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 110191bc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 110191bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110191c2 push edx */
  push32((uint32_t)(EDX));
  /* 110191c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 110191c5 mov eax, dword ptr [0x11041f6c] */
  EAX = (r32((uint32_t)(0x11041f6c)));
  /* 110191ca push eax */
  push32((uint32_t)(EAX));
  /* 110191cb call dword ptr [0x11043328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043328))), 0x110191d1u);
  /* 110191d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 110191d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110191d8 je 0x11019220 */
  if (C.zf) goto L_11019220;
  /* 110191da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110191dd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 110191e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 110191e3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 110191e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 110191e9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110191ec jae 0x110191f6 */
  if (!C.cf) goto L_110191f6;
  /* 110191ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 110191f1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 110191f4 jmp 0x110191fc */
  goto L_110191fc;
L_110191f6:;
  /* 110191f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 110191f9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_110191fc:;
  /* 110191fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 110191ff push eax */
  push32((uint32_t)(EAX));
  /* 11019200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019203 push ecx */
  push32((uint32_t)(ECX));
  /* 11019204 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11019207 push edx */
  push32((uint32_t)(EDX));
  /* 11019208 call 0x1101ba10 */
  push32(0x1101920du); f_1101ba10();
  /* 1101920d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019210 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019213 push eax */
  push32((uint32_t)(EAX));
  /* 11019214 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11019217 push ecx */
  push32((uint32_t)(ECX));
  /* 11019218 call 0x110194f0 */
  push32(0x1101921du); f_110194f0();
  /* 1101921d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11019220:;
  /* 11019220 push 9 */
  push32((uint32_t)(0x9u));
  /* 11019222 call 0x11018bd0 */
  push32(0x11019227u); f_11018bd0();
  /* 11019227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101922a jmp 0x11019269 */
  goto L_11019269;
L_1101922c:;
  /* 1101922c push 9 */
  push32((uint32_t)(0x9u));
  /* 1101922e call 0x11018bd0 */
  push32(0x11019233u); f_11018bd0();
  /* 11019233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019236 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101923a jne 0x11019243 */
  if (!C.zf) goto L_11019243;
  /* 1101923c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11019243:;
  /* 11019243 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019246 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11019249 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1101924c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1101924f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019252 push eax */
  push32((uint32_t)(EAX));
  /* 11019253 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11019256 push ecx */
  push32((uint32_t)(ECX));
  /* 11019257 push 0 */
  push32((uint32_t)(0x0u));
  /* 11019259 mov edx, dword ptr [0x11041f6c] */
  EDX = (r32((uint32_t)(0x11041f6c)));
  /* 1101925f push edx */
  push32((uint32_t)(EDX));
  /* 11019260 call dword ptr [0x11043330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043330))), 0x11019266u);
  /* 11019266 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11019269:;
  /* 11019269 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101926d jne 0x11019278 */
  if (!C.zf) goto L_11019278;
  /* 1101926f cmp dword ptr [0x110407b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x110407b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11019276 jne 0x1101927d */
  if (!C.zf) goto L_1101927d;
L_11019278:;
  /* 11019278 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1101927b jmp 0x11019296 */
  goto L_11019296;
L_1101927d:;
  /* 1101927d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11019280 push eax */
  push32((uint32_t)(EAX));
  /* 11019281 call 0x11018e70 */
  push32(0x11019286u); f_11018e70();
  /* 11019286 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019289 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101928b jne 0x11019291 */
  if (!C.zf) goto L_11019291;
  /* 1101928d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1101928f jmp 0x11019296 */
  goto L_11019296;
L_11019291:;
  /* 11019291 jmp 0x110190e6 */
  goto L_110190e6;
L_11019296:;
  /* 11019296 mov esp, ebp */
  ESP = (EBP);
  /* 11019298 pop ebp */
  EBP = (pop32());
  /* 11019299 ret  */
  ESPCHK(0x110190b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100092a0 @ 0x110192a0 (104 bytes, 38 insns) */
void f_110192a0(void) {
  FTRACE(0x110192a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 110192a0 push ebp */
  push32((uint32_t)(EBP));
  /* 110192a1 mov ebp, esp */
  EBP = (ESP);
  /* 110192a3 push ecx */
  push32((uint32_t)(ECX));
  /* 110192a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110192a8 jne 0x110192ac */
  if (!C.zf) goto L_110192ac;
  /* 110192aa jmp 0x11019304 */
  goto L_11019304;
L_110192ac:;
  /* 110192ac push 9 */
  push32((uint32_t)(0x9u));
  /* 110192ae call 0x11018b30 */
  push32(0x110192b3u); f_11018b30();
  /* 110192b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110192b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110192b9 push eax */
  push32((uint32_t)(EAX));
  /* 110192ba call 0x11019430 */
  push32(0x110192bfu); f_11019430();
  /* 110192bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110192c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 110192c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 110192c9 je 0x110192e7 */
  if (C.zf) goto L_110192e7;
  /* 110192cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 110192ce push ecx */
  push32((uint32_t)(ECX));
  /* 110192cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 110192d2 push edx */
  push32((uint32_t)(EDX));
  /* 110192d3 call 0x110194f0 */
  push32(0x110192d8u); f_110194f0();
  /* 110192d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110192db push 9 */
  push32((uint32_t)(0x9u));
  /* 110192dd call 0x11018bd0 */
  push32(0x110192e2u); f_11018bd0();
  /* 110192e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110192e5 jmp 0x11019304 */
  goto L_11019304;
L_110192e7:;
  /* 110192e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 110192e9 call 0x11018bd0 */
  push32(0x110192eeu); f_11018bd0();
  /* 110192ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 110192f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 110192f4 push eax */
  push32((uint32_t)(EAX));
  /* 110192f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 110192f7 mov ecx, dword ptr [0x11041f6c] */
  ECX = (r32((uint32_t)(0x11041f6c)));
  /* 110192fd push ecx */
  push32((uint32_t)(ECX));
  /* 110192fe call dword ptr [0x11043354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11043354))), 0x11019304u);
L_11019304:;
  /* 11019304 mov esp, ebp */
  ESP = (EBP);
  /* 11019306 pop ebp */
  EBP = (pop32());
  /* 11019307 ret  */
  ESPCHK(0x110192a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009310 @ 0x11019310 (116 bytes, 34 insns) */
void f_11019310(void) {
  FTRACE(0x11019310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11019310 push ebp */
  push32((uint32_t)(EBP));
  /* 11019311 mov ebp, esp */
  EBP = (ESP);
  /* 11019313 push ecx */
  push32((uint32_t)(ECX));
  /* 11019314 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1101931b push 9 */
  push32((uint32_t)(0x9u));
  /* 1101931d call 0x11018b30 */
  push32(0x11019322u); f_11018b30();
  /* 11019322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11019325 call 0x1101aa20 */
  push32(0x1101932au); f_1101aa20();
  /* 1101932a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1101932c jge 0x11019335 */
  if ((C.sf==C.of)) goto L_11019335;
  /* 1101932e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11019335:;
  /* 11019335 push 9 */
  push32((uint32_t)(0x9u));
  /* 11019337 call 0x11018bd0 */
  push32(0x1101933cu); f_11018bd0();
  /* 1101933c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1101933f push 0 */
  push32((uint32_t)(0x0u));
  /* 11019341 push 0 */
  push32((uint32_t)(0x0u));
  /* 11019343 mov eax, dword ptr [0x11041f6c] */
  EAX = (r32((uint32_t)(0x11041f6c)));
  /* 11019348 push eax */
  push32((uint32_t)(EAX));
  /* 11019349 call dword ptr [0x110433d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433d0))), 0x1101934fu);
  /* 1101934f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11019351 jne 0x1101937d */
  if (!C.zf) goto L_1101937d;
  /* 11019353 call dword ptr [0x110433b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x110433b4))), 0x11019359u);
  /* 11019359 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1101935c jne 0x11019376 */
  if (!C.zf) goto L_11019376;
  /* 1101935e call 0x1101d010 */
  push32(0x11019363u); f_1101d010();
  /* 11019363 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11019369 call 0x1101d000 */
  push32(0x1101936eu); f_1101d000();
  /* 1101936e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11019374 jmp 0x1101937d */
  goto L_1101937d;
L_11019376:;
  /* 11019376 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1101937d:;
  /* 1101937d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11019380 mov esp, ebp */
  ESP = (EBP);
  /* 11019382 pop ebp */
  EBP = (pop32());
  /* 11019383 ret  */
  ESPCHK(0x11019310u, _esp0);
  ESP += 4; return;
}

/* FUN_10009390 @ 0x11019390 (10 bytes, 5 insns) */
void f_11019390(void) {
  FTRACE(0x11019390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11019390 push ebp */
  push32((uint32_t)(EBP));
  /* 11019391 mov ebp, esp */
  EBP = (ESP);
  /* 11019393 call 0x11019310 */
  push32(0x11019398u); f_11019310();
  /* 11019398 pop ebp */
  EBP = (pop32());
  /* 11019399 ret  */
  ESPCHK(0x11019390u, _esp0);
  ESP += 4; return;
}

