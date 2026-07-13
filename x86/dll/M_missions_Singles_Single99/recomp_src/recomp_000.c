#include "recomp.h"

/* OnInit @ 0x12111005 (5 bytes, 1 insns) */
void f_12111005(void) {
  FTRACE(0x12111005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12111005 jmp 0x12111090 */
  f_12111090(); return;
}

/* thunk_FUN_10001030 @ 0x1211100a (5 bytes, 1 insns) */
void f_1211100a(void) {
  FTRACE(0x1211100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211100a jmp 0x12111030 */
  f_12111030(); return;
}

/* ProcessScenary @ 0x1211100f (5 bytes, 1 insns) */
void f_1211100f(void) {
  FTRACE(0x1211100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211100f jmp 0x12112310 */
  f_12112310(); return;
}

/* FUN_10001030 @ 0x12111030 (67 bytes, 26 insns) */
void f_12111030(void) {
  FTRACE(0x12111030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12111030 push ebp */
  push32((uint32_t)(EBP));
  /* 12111031 mov ebp, esp */
  EBP = (ESP);
  /* 12111033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12111036 push ebx */
  push32((uint32_t)(EBX));
  /* 12111037 push esi */
  push32((uint32_t)(ESI));
  /* 12111038 push edi */
  push32((uint32_t)(EDI));
  /* 12111039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1211103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12111041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12111046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12111048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111052 je 0x12111056 */
  if (C.zf) goto L_12111056;
  /* 12111054 jmp 0x1211105b */
  goto L_1211105b;
L_12111056:;
  /* 12111056 call 0x12111005 */
  push32(0x1211105bu); f_12111005();
L_1211105b:;
  /* 1211105b mov eax, 1 */
  EAX = (0x1u);
  /* 12111060 pop edi */
  EDI = (pop32());
  /* 12111061 pop esi */
  ESI = (pop32());
  /* 12111062 pop ebx */
  EBX = (pop32());
  /* 12111063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111068 call 0x12116a60 */
  push32(0x1211106du); f_12116a60();
  /* 1211106d mov esp, ebp */
  ESP = (EBP);
  /* 1211106f pop ebp */
  EBP = (pop32());
  /* 12111070 ret 0xc */
  ESPCHK(0x12111030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12111090 (3779 bytes, 1002 insns) */
void f_12111090(void) {
  FTRACE(0x12111090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12111090 push ebp */
  push32((uint32_t)(EBP));
  /* 12111091 mov ebp, esp */
  EBP = (ESP);
  /* 12111093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12111096 push ebx */
  push32((uint32_t)(EBX));
  /* 12111097 push esi */
  push32((uint32_t)(ESI));
  /* 12111098 push edi */
  push32((uint32_t)(EDI));
  /* 12111099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1211109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 121110a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 121110a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 121110a8 mov esi, esp */
  ESI = (ESP);
  /* 121110aa push 0x1213e39c */
  push32((uint32_t)(0x1213e39cu));
  /* 121110af push 0x12143490 */
  push32((uint32_t)(0x12143490u));
  /* 121110b4 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121110bau);
  /* 121110ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121110bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121110bf call 0x12116a60 */
  push32(0x121110c4u); f_12116a60();
  /* 121110c4 mov esi, esp */
  ESI = (ESP);
  /* 121110c6 push 0x1213e394 */
  push32((uint32_t)(0x1213e394u));
  /* 121110cb push 0x121434d8 */
  push32((uint32_t)(0x121434d8u));
  /* 121110d0 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121110d6u);
  /* 121110d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121110d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121110db call 0x12116a60 */
  push32(0x121110e0u); f_12116a60();
  /* 121110e0 mov esi, esp */
  ESI = (ESP);
  /* 121110e2 push 0x1213e38c */
  push32((uint32_t)(0x1213e38cu));
  /* 121110e7 push 0x121434d0 */
  push32((uint32_t)(0x121434d0u));
  /* 121110ec call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121110f2u);
  /* 121110f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121110f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121110f7 call 0x12116a60 */
  push32(0x121110fcu); f_12116a60();
  /* 121110fc mov esi, esp */
  ESI = (ESP);
  /* 121110fe push 0x1213e384 */
  push32((uint32_t)(0x1213e384u));
  /* 12111103 push 0x121434e0 */
  push32((uint32_t)(0x121434e0u));
  /* 12111108 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211110eu);
  /* 1211110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111113 call 0x12116a60 */
  push32(0x12111118u); f_12116a60();
  /* 12111118 mov esi, esp */
  ESI = (ESP);
  /* 1211111a push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 1211111f push 0x12143510 */
  push32((uint32_t)(0x12143510u));
  /* 12111124 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211112au);
  /* 1211112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211112f call 0x12116a60 */
  push32(0x12111134u); f_12116a60();
  /* 12111134 mov esi, esp */
  ESI = (ESP);
  /* 12111136 push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 1211113b push 0x12143508 */
  push32((uint32_t)(0x12143508u));
  /* 12111140 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x12111146u);
  /* 12111146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211114b call 0x12116a60 */
  push32(0x12111150u); f_12116a60();
  /* 12111150 mov esi, esp */
  ESI = (ESP);
  /* 12111152 push 0x1213e360 */
  push32((uint32_t)(0x1213e360u));
  /* 12111157 push 0x12143500 */
  push32((uint32_t)(0x12143500u));
  /* 1211115c call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x12111162u);
  /* 12111162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111167 call 0x12116a60 */
  push32(0x1211116cu); f_12116a60();
  /* 1211116c mov esi, esp */
  ESI = (ESP);
  /* 1211116e push 0x1213e354 */
  push32((uint32_t)(0x1213e354u));
  /* 12111173 push 0x121434f8 */
  push32((uint32_t)(0x121434f8u));
  /* 12111178 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211117eu);
  /* 1211117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111183 call 0x12116a60 */
  push32(0x12111188u); f_12116a60();
  /* 12111188 mov esi, esp */
  ESI = (ESP);
  /* 1211118a push 0x1213e348 */
  push32((uint32_t)(0x1213e348u));
  /* 1211118f push 0x121434f0 */
  push32((uint32_t)(0x121434f0u));
  /* 12111194 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211119au);
  /* 1211119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211119f call 0x12116a60 */
  push32(0x121111a4u); f_12116a60();
  /* 121111a4 mov esi, esp */
  ESI = (ESP);
  /* 121111a6 push 0x1213e340 */
  push32((uint32_t)(0x1213e340u));
  /* 121111ab push 0x12143630 */
  push32((uint32_t)(0x12143630u));
  /* 121111b0 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121111b6u);
  /* 121111b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121111b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121111bb call 0x12116a60 */
  push32(0x121111c0u); f_12116a60();
  /* 121111c0 mov esi, esp */
  ESI = (ESP);
  /* 121111c2 push 0x1213e338 */
  push32((uint32_t)(0x1213e338u));
  /* 121111c7 push 0x12143638 */
  push32((uint32_t)(0x12143638u));
  /* 121111cc call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121111d2u);
  /* 121111d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121111d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121111d7 call 0x12116a60 */
  push32(0x121111dcu); f_12116a60();
  /* 121111dc mov esi, esp */
  ESI = (ESP);
  /* 121111de push 0x1213e330 */
  push32((uint32_t)(0x1213e330u));
  /* 121111e3 push 0x12143640 */
  push32((uint32_t)(0x12143640u));
  /* 121111e8 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121111eeu);
  /* 121111ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121111f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121111f3 call 0x12116a60 */
  push32(0x121111f8u); f_12116a60();
  /* 121111f8 mov esi, esp */
  ESI = (ESP);
  /* 121111fa push 0x1213e328 */
  push32((uint32_t)(0x1213e328u));
  /* 121111ff push 0x12143648 */
  push32((uint32_t)(0x12143648u));
  /* 12111204 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211120au);
  /* 1211120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211120f call 0x12116a60 */
  push32(0x12111214u); f_12116a60();
  /* 12111214 mov esi, esp */
  ESI = (ESP);
  /* 12111216 push 0x1213e320 */
  push32((uint32_t)(0x1213e320u));
  /* 1211121b push 0x12143650 */
  push32((uint32_t)(0x12143650u));
  /* 12111220 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x12111226u);
  /* 12111226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211122b call 0x12116a60 */
  push32(0x12111230u); f_12116a60();
  /* 12111230 mov esi, esp */
  ESI = (ESP);
  /* 12111232 push 0x1213e318 */
  push32((uint32_t)(0x1213e318u));
  /* 12111237 push 0x12143658 */
  push32((uint32_t)(0x12143658u));
  /* 1211123c call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x12111242u);
  /* 12111242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111247 call 0x12116a60 */
  push32(0x1211124cu); f_12116a60();
  /* 1211124c mov esi, esp */
  ESI = (ESP);
  /* 1211124e push 0x1213e310 */
  push32((uint32_t)(0x1213e310u));
  /* 12111253 push 0x121434a0 */
  push32((uint32_t)(0x121434a0u));
  /* 12111258 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211125eu);
  /* 1211125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111263 call 0x12116a60 */
  push32(0x12111268u); f_12116a60();
  /* 12111268 mov esi, esp */
  ESI = (ESP);
  /* 1211126a push 0x1213e308 */
  push32((uint32_t)(0x1213e308u));
  /* 1211126f push 0x12143718 */
  push32((uint32_t)(0x12143718u));
  /* 12111274 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211127au);
  /* 1211127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211127f call 0x12116a60 */
  push32(0x12111284u); f_12116a60();
  /* 12111284 mov esi, esp */
  ESI = (ESP);
  /* 12111286 push 0x1213e300 */
  push32((uint32_t)(0x1213e300u));
  /* 1211128b push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 12111290 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x12111296u);
  /* 12111296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211129b call 0x12116a60 */
  push32(0x121112a0u); f_12116a60();
  /* 121112a0 mov esi, esp */
  ESI = (ESP);
  /* 121112a2 push 0x1213e2f8 */
  push32((uint32_t)(0x1213e2f8u));
  /* 121112a7 push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 121112ac call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121112b2u);
  /* 121112b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121112b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121112b7 call 0x12116a60 */
  push32(0x121112bcu); f_12116a60();
  /* 121112bc mov esi, esp */
  ESI = (ESP);
  /* 121112be push 0x1213e2f0 */
  push32((uint32_t)(0x1213e2f0u));
  /* 121112c3 push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 121112c8 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121112ceu);
  /* 121112ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121112d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121112d3 call 0x12116a60 */
  push32(0x121112d8u); f_12116a60();
  /* 121112d8 mov esi, esp */
  ESI = (ESP);
  /* 121112da push 0x1213e2e8 */
  push32((uint32_t)(0x1213e2e8u));
  /* 121112df push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 121112e4 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x121112eau);
  /* 121112ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121112ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121112ef call 0x12116a60 */
  push32(0x121112f4u); f_12116a60();
  /* 121112f4 mov esi, esp */
  ESI = (ESP);
  /* 121112f6 push 0x1213e2e0 */
  push32((uint32_t)(0x1213e2e0u));
  /* 121112fb push 0x12143530 */
  push32((uint32_t)(0x12143530u));
  /* 12111300 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x12111306u);
  /* 12111306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211130b call 0x12116a60 */
  push32(0x12111310u); f_12116a60();
  /* 12111310 mov esi, esp */
  ESI = (ESP);
  /* 12111312 push 0x1213e2d8 */
  push32((uint32_t)(0x1213e2d8u));
  /* 12111317 push 0x12143528 */
  push32((uint32_t)(0x12143528u));
  /* 1211131c call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x12111322u);
  /* 12111322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111327 call 0x12116a60 */
  push32(0x1211132cu); f_12116a60();
  /* 1211132c mov esi, esp */
  ESI = (ESP);
  /* 1211132e push 0x1213e2d0 */
  push32((uint32_t)(0x1213e2d0u));
  /* 12111333 push 0x12143488 */
  push32((uint32_t)(0x12143488u));
  /* 12111338 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211133eu);
  /* 1211133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111343 call 0x12116a60 */
  push32(0x12111348u); f_12116a60();
  /* 12111348 mov esi, esp */
  ESI = (ESP);
  /* 1211134a push 0x1213e2c8 */
  push32((uint32_t)(0x1213e2c8u));
  /* 1211134f push 0x12143498 */
  push32((uint32_t)(0x12143498u));
  /* 12111354 call dword ptr [0x12146510] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146510))), 0x1211135au);
  /* 1211135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211135f call 0x12116a60 */
  push32(0x12111364u); f_12116a60();
  /* 12111364 mov esi, esp */
  ESI = (ESP);
  /* 12111366 push 0x1213e2c0 */
  push32((uint32_t)(0x1213e2c0u));
  /* 1211136b push 0x12143678 */
  push32((uint32_t)(0x12143678u));
  /* 12111370 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x12111376u);
  /* 12111376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211137b call 0x12116a60 */
  push32(0x12111380u); f_12116a60();
  /* 12111380 mov esi, esp */
  ESI = (ESP);
  /* 12111382 push 0x1213e2b4 */
  push32((uint32_t)(0x1213e2b4u));
  /* 12111387 push 0x121436e8 */
  push32((uint32_t)(0x121436e8u));
  /* 1211138c call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x12111392u);
  /* 12111392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111397 call 0x12116a60 */
  push32(0x1211139cu); f_12116a60();
  /* 1211139c mov esi, esp */
  ESI = (ESP);
  /* 1211139e push 0x1213e2ac */
  push32((uint32_t)(0x1213e2acu));
  /* 121113a3 push 0x12143668 */
  push32((uint32_t)(0x12143668u));
  /* 121113a8 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121113aeu);
  /* 121113ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121113b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121113b3 call 0x12116a60 */
  push32(0x121113b8u); f_12116a60();
  /* 121113b8 mov esi, esp */
  ESI = (ESP);
  /* 121113ba push 0x1213e2a0 */
  push32((uint32_t)(0x1213e2a0u));
  /* 121113bf push 0x121436f8 */
  push32((uint32_t)(0x121436f8u));
  /* 121113c4 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121113cau);
  /* 121113ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121113cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121113cf call 0x12116a60 */
  push32(0x121113d4u); f_12116a60();
  /* 121113d4 mov esi, esp */
  ESI = (ESP);
  /* 121113d6 push 0x1213e294 */
  push32((uint32_t)(0x1213e294u));
  /* 121113db push 0x12143700 */
  push32((uint32_t)(0x12143700u));
  /* 121113e0 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121113e6u);
  /* 121113e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121113e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121113eb call 0x12116a60 */
  push32(0x121113f0u); f_12116a60();
  /* 121113f0 mov esi, esp */
  ESI = (ESP);
  /* 121113f2 push 0x1213e28c */
  push32((uint32_t)(0x1213e28cu));
  /* 121113f7 push 0x12143670 */
  push32((uint32_t)(0x12143670u));
  /* 121113fc call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x12111402u);
  /* 12111402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111407 call 0x12116a60 */
  push32(0x1211140cu); f_12116a60();
  /* 1211140c mov esi, esp */
  ESI = (ESP);
  /* 1211140e push 0x1213e280 */
  push32((uint32_t)(0x1213e280u));
  /* 12111413 push 0x12143708 */
  push32((uint32_t)(0x12143708u));
  /* 12111418 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x1211141eu);
  /* 1211141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111423 call 0x12116a60 */
  push32(0x12111428u); f_12116a60();
  /* 12111428 mov esi, esp */
  ESI = (ESP);
  /* 1211142a push 0x1213e274 */
  push32((uint32_t)(0x1213e274u));
  /* 1211142f push 0x12143710 */
  push32((uint32_t)(0x12143710u));
  /* 12111434 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x1211143au);
  /* 1211143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211143f call 0x12116a60 */
  push32(0x12111444u); f_12116a60();
  /* 12111444 mov esi, esp */
  ESI = (ESP);
  /* 12111446 push 0x1213e26c */
  push32((uint32_t)(0x1213e26cu));
  /* 1211144b push 0x121436a8 */
  push32((uint32_t)(0x121436a8u));
  /* 12111450 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x12111456u);
  /* 12111456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211145b call 0x12116a60 */
  push32(0x12111460u); f_12116a60();
  /* 12111460 mov esi, esp */
  ESI = (ESP);
  /* 12111462 push 0x1213e264 */
  push32((uint32_t)(0x1213e264u));
  /* 12111467 push 0x121436b0 */
  push32((uint32_t)(0x121436b0u));
  /* 1211146c call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x12111472u);
  /* 12111472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111477 call 0x12116a60 */
  push32(0x1211147cu); f_12116a60();
  /* 1211147c mov esi, esp */
  ESI = (ESP);
  /* 1211147e push 0x1213e25c */
  push32((uint32_t)(0x1213e25cu));
  /* 12111483 push 0x121436c0 */
  push32((uint32_t)(0x121436c0u));
  /* 12111488 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x1211148eu);
  /* 1211148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111493 call 0x12116a60 */
  push32(0x12111498u); f_12116a60();
  /* 12111498 mov esi, esp */
  ESI = (ESP);
  /* 1211149a push 0x1213e254 */
  push32((uint32_t)(0x1213e254u));
  /* 1211149f push 0x121436c8 */
  push32((uint32_t)(0x121436c8u));
  /* 121114a4 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121114aau);
  /* 121114aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121114ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121114af call 0x12116a60 */
  push32(0x121114b4u); f_12116a60();
  /* 121114b4 mov esi, esp */
  ESI = (ESP);
  /* 121114b6 push 0x1213e248 */
  push32((uint32_t)(0x1213e248u));
  /* 121114bb push 0x12143698 */
  push32((uint32_t)(0x12143698u));
  /* 121114c0 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121114c6u);
  /* 121114c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121114c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121114cb call 0x12116a60 */
  push32(0x121114d0u); f_12116a60();
  /* 121114d0 mov esi, esp */
  ESI = (ESP);
  /* 121114d2 push 0x1213e23c */
  push32((uint32_t)(0x1213e23cu));
  /* 121114d7 push 0x121436a0 */
  push32((uint32_t)(0x121436a0u));
  /* 121114dc call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121114e2u);
  /* 121114e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121114e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121114e7 call 0x12116a60 */
  push32(0x121114ecu); f_12116a60();
  /* 121114ec mov esi, esp */
  ESI = (ESP);
  /* 121114ee push 0x1213e230 */
  push32((uint32_t)(0x1213e230u));
  /* 121114f3 push 0x12143688 */
  push32((uint32_t)(0x12143688u));
  /* 121114f8 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121114feu);
  /* 121114fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111503 call 0x12116a60 */
  push32(0x12111508u); f_12116a60();
  /* 12111508 mov esi, esp */
  ESI = (ESP);
  /* 1211150a push 0x1213e224 */
  push32((uint32_t)(0x1213e224u));
  /* 1211150f push 0x12143690 */
  push32((uint32_t)(0x12143690u));
  /* 12111514 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x1211151au);
  /* 1211151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211151f call 0x12116a60 */
  push32(0x12111524u); f_12116a60();
  /* 12111524 mov esi, esp */
  ESI = (ESP);
  /* 12111526 push 0x1213e218 */
  push32((uint32_t)(0x1213e218u));
  /* 1211152b push 0x121435e0 */
  push32((uint32_t)(0x121435e0u));
  /* 12111530 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x12111536u);
  /* 12111536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211153b call 0x12116a60 */
  push32(0x12111540u); f_12116a60();
  /* 12111540 mov esi, esp */
  ESI = (ESP);
  /* 12111542 push 0x1213e20c */
  push32((uint32_t)(0x1213e20cu));
  /* 12111547 push 0x121435e8 */
  push32((uint32_t)(0x121435e8u));
  /* 1211154c call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x12111552u);
  /* 12111552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111557 call 0x12116a60 */
  push32(0x1211155cu); f_12116a60();
  /* 1211155c mov esi, esp */
  ESI = (ESP);
  /* 1211155e push 0x1213e204 */
  push32((uint32_t)(0x1213e204u));
  /* 12111563 push 0x12143608 */
  push32((uint32_t)(0x12143608u));
  /* 12111568 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x1211156eu);
  /* 1211156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111573 call 0x12116a60 */
  push32(0x12111578u); f_12116a60();
  /* 12111578 mov esi, esp */
  ESI = (ESP);
  /* 1211157a push 0x1213e1fc */
  push32((uint32_t)(0x1213e1fcu));
  /* 1211157f push 0x12143610 */
  push32((uint32_t)(0x12143610u));
  /* 12111584 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x1211158au);
  /* 1211158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211158f call 0x12116a60 */
  push32(0x12111594u); f_12116a60();
  /* 12111594 mov esi, esp */
  ESI = (ESP);
  /* 12111596 push 0x1213e1f4 */
  push32((uint32_t)(0x1213e1f4u));
  /* 1211159b push 0x12143618 */
  push32((uint32_t)(0x12143618u));
  /* 121115a0 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121115a6u);
  /* 121115a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121115a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121115ab call 0x12116a60 */
  push32(0x121115b0u); f_12116a60();
  /* 121115b0 mov esi, esp */
  ESI = (ESP);
  /* 121115b2 push 0x1213e1ec */
  push32((uint32_t)(0x1213e1ecu));
  /* 121115b7 push 0x12143620 */
  push32((uint32_t)(0x12143620u));
  /* 121115bc call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121115c2u);
  /* 121115c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121115c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121115c7 call 0x12116a60 */
  push32(0x121115ccu); f_12116a60();
  /* 121115cc mov esi, esp */
  ESI = (ESP);
  /* 121115ce push 0x1213e1e0 */
  push32((uint32_t)(0x1213e1e0u));
  /* 121115d3 push 0x12143448 */
  push32((uint32_t)(0x12143448u));
  /* 121115d8 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121115deu);
  /* 121115de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121115e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121115e3 call 0x12116a60 */
  push32(0x121115e8u); f_12116a60();
  /* 121115e8 mov esi, esp */
  ESI = (ESP);
  /* 121115ea push 0x1213e1d4 */
  push32((uint32_t)(0x1213e1d4u));
  /* 121115ef push 0x12143450 */
  push32((uint32_t)(0x12143450u));
  /* 121115f4 call dword ptr [0x12146514] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146514))), 0x121115fau);
  /* 121115fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121115fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121115ff call 0x12116a60 */
  push32(0x12111604u); f_12116a60();
  /* 12111604 mov esi, esp */
  ESI = (ESP);
  /* 12111606 push 0x1213e1c4 */
  push32((uint32_t)(0x1213e1c4u));
  /* 1211160b push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 12111610 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x12111616u);
  /* 12111616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211161b call 0x12116a60 */
  push32(0x12111620u); f_12116a60();
  /* 12111620 mov esi, esp */
  ESI = (ESP);
  /* 12111622 push 0x1213e1b4 */
  push32((uint32_t)(0x1213e1b4u));
  /* 12111627 push 0x121435a0 */
  push32((uint32_t)(0x121435a0u));
  /* 1211162c call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x12111632u);
  /* 12111632 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111635 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111637 call 0x12116a60 */
  push32(0x1211163cu); f_12116a60();
  /* 1211163c mov esi, esp */
  ESI = (ESP);
  /* 1211163e push 0x1213e1a4 */
  push32((uint32_t)(0x1213e1a4u));
  /* 12111643 push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12111648 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x1211164eu);
  /* 1211164e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111651 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111653 call 0x12116a60 */
  push32(0x12111658u); f_12116a60();
  /* 12111658 mov esi, esp */
  ESI = (ESP);
  /* 1211165a push 0x1213e188 */
  push32((uint32_t)(0x1213e188u));
  /* 1211165f push 0x121436b8 */
  push32((uint32_t)(0x121436b8u));
  /* 12111664 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x1211166au);
  /* 1211166a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211166f call 0x12116a60 */
  push32(0x12111674u); f_12116a60();
  /* 12111674 mov esi, esp */
  ESI = (ESP);
  /* 12111676 push 0x1213e170 */
  push32((uint32_t)(0x1213e170u));
  /* 1211167b push 0x12143440 */
  push32((uint32_t)(0x12143440u));
  /* 12111680 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x12111686u);
  /* 12111686 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111689 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211168b call 0x12116a60 */
  push32(0x12111690u); f_12116a60();
  /* 12111690 mov esi, esp */
  ESI = (ESP);
  /* 12111692 push 0x1213e158 */
  push32((uint32_t)(0x1213e158u));
  /* 12111697 push 0x12143470 */
  push32((uint32_t)(0x12143470u));
  /* 1211169c call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x121116a2u);
  /* 121116a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121116a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121116a7 call 0x12116a60 */
  push32(0x121116acu); f_12116a60();
  /* 121116ac mov esi, esp */
  ESI = (ESP);
  /* 121116ae push 0x1213e140 */
  push32((uint32_t)(0x1213e140u));
  /* 121116b3 push 0x12143480 */
  push32((uint32_t)(0x12143480u));
  /* 121116b8 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x121116beu);
  /* 121116be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121116c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121116c3 call 0x12116a60 */
  push32(0x121116c8u); f_12116a60();
  /* 121116c8 mov esi, esp */
  ESI = (ESP);
  /* 121116ca push 0x1213e130 */
  push32((uint32_t)(0x1213e130u));
  /* 121116cf push 0x121434b8 */
  push32((uint32_t)(0x121434b8u));
  /* 121116d4 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x121116dau);
  /* 121116da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121116dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121116df call 0x12116a60 */
  push32(0x121116e4u); f_12116a60();
  /* 121116e4 mov esi, esp */
  ESI = (ESP);
  /* 121116e6 push 0x1213e120 */
  push32((uint32_t)(0x1213e120u));
  /* 121116eb push 0x121435f0 */
  push32((uint32_t)(0x121435f0u));
  /* 121116f0 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x121116f6u);
  /* 121116f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121116f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121116fb call 0x12116a60 */
  push32(0x12111700u); f_12116a60();
  /* 12111700 mov esi, esp */
  ESI = (ESP);
  /* 12111702 push 0x1213e110 */
  push32((uint32_t)(0x1213e110u));
  /* 12111707 push 0x121434c0 */
  push32((uint32_t)(0x121434c0u));
  /* 1211170c call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x12111712u);
  /* 12111712 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111715 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111717 call 0x12116a60 */
  push32(0x1211171cu); f_12116a60();
  /* 1211171c mov esi, esp */
  ESI = (ESP);
  /* 1211171e push 0x1213e100 */
  push32((uint32_t)(0x1213e100u));
  /* 12111723 push 0x121435f8 */
  push32((uint32_t)(0x121435f8u));
  /* 12111728 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x1211172eu);
  /* 1211172e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111733 call 0x12116a60 */
  push32(0x12111738u); f_12116a60();
  /* 12111738 mov esi, esp */
  ESI = (ESP);
  /* 1211173a push 0x1213e0f0 */
  push32((uint32_t)(0x1213e0f0u));
  /* 1211173f push 0x121434c8 */
  push32((uint32_t)(0x121434c8u));
  /* 12111744 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x1211174au);
  /* 1211174a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211174d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211174f call 0x12116a60 */
  push32(0x12111754u); f_12116a60();
  /* 12111754 mov esi, esp */
  ESI = (ESP);
  /* 12111756 push 0x1213e0e0 */
  push32((uint32_t)(0x1213e0e0u));
  /* 1211175b push 0x12143600 */
  push32((uint32_t)(0x12143600u));
  /* 12111760 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x12111766u);
  /* 12111766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211176b call 0x12116a60 */
  push32(0x12111770u); f_12116a60();
  /* 12111770 mov esi, esp */
  ESI = (ESP);
  /* 12111772 push 0x1213e0c8 */
  push32((uint32_t)(0x1213e0c8u));
  /* 12111777 push 0x12143518 */
  push32((uint32_t)(0x12143518u));
  /* 1211177c call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x12111782u);
  /* 12111782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111785 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111787 call 0x12116a60 */
  push32(0x1211178cu); f_12116a60();
  /* 1211178c mov esi, esp */
  ESI = (ESP);
  /* 1211178e push 0x1213e0b0 */
  push32((uint32_t)(0x1213e0b0u));
  /* 12111793 push 0x12143520 */
  push32((uint32_t)(0x12143520u));
  /* 12111798 call dword ptr [0x1214650c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214650c))), 0x1211179eu);
  /* 1211179e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121117a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121117a3 call 0x12116a60 */
  push32(0x121117a8u); f_12116a60();
  /* 121117a8 mov esi, esp */
  ESI = (ESP);
  /* 121117aa push 8 */
  push32((uint32_t)(0x8u));
  /* 121117ac push 0x12143460 */
  push32((uint32_t)(0x12143460u));
  /* 121117b1 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121117b7u);
  /* 121117b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121117ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121117bc call 0x12116a60 */
  push32(0x121117c1u); f_12116a60();
  /* 121117c1 mov esi, esp */
  ESI = (ESP);
  /* 121117c3 push 8 */
  push32((uint32_t)(0x8u));
  /* 121117c5 push 0x12143458 */
  push32((uint32_t)(0x12143458u));
  /* 121117ca call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121117d0u);
  /* 121117d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121117d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121117d5 call 0x12116a60 */
  push32(0x121117dau); f_12116a60();
  /* 121117da mov esi, esp */
  ESI = (ESP);
  /* 121117dc push 8 */
  push32((uint32_t)(0x8u));
  /* 121117de push 0x12143478 */
  push32((uint32_t)(0x12143478u));
  /* 121117e3 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121117e9u);
  /* 121117e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121117ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121117ee call 0x12116a60 */
  push32(0x121117f3u); f_12116a60();
  /* 121117f3 mov esi, esp */
  ESI = (ESP);
  /* 121117f5 push 8 */
  push32((uint32_t)(0x8u));
  /* 121117f7 push 0x12143468 */
  push32((uint32_t)(0x12143468u));
  /* 121117fc call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111802u);
  /* 12111802 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111805 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111807 call 0x12116a60 */
  push32(0x1211180cu); f_12116a60();
  /* 1211180c mov esi, esp */
  ESI = (ESP);
  /* 1211180e push 8 */
  push32((uint32_t)(0x8u));
  /* 12111810 push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12111815 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x1211181bu);
  /* 1211181b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211181e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111820 call 0x12116a60 */
  push32(0x12111825u); f_12116a60();
  /* 12111825 mov esi, esp */
  ESI = (ESP);
  /* 12111827 push 8 */
  push32((uint32_t)(0x8u));
  /* 12111829 push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 1211182e call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111834u);
  /* 12111834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111839 call 0x12116a60 */
  push32(0x1211183eu); f_12116a60();
  /* 1211183e mov esi, esp */
  ESI = (ESP);
  /* 12111840 push 8 */
  push32((uint32_t)(0x8u));
  /* 12111842 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12111847 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x1211184du);
  /* 1211184d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111850 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111852 call 0x12116a60 */
  push32(0x12111857u); f_12116a60();
  /* 12111857 mov esi, esp */
  ESI = (ESP);
  /* 12111859 push 8 */
  push32((uint32_t)(0x8u));
  /* 1211185b push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12111860 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111866u);
  /* 12111866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211186b call 0x12116a60 */
  push32(0x12111870u); f_12116a60();
  /* 12111870 mov esi, esp */
  ESI = (ESP);
  /* 12111872 push 8 */
  push32((uint32_t)(0x8u));
  /* 12111874 push 0x12143438 */
  push32((uint32_t)(0x12143438u));
  /* 12111879 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x1211187fu);
  /* 1211187f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111882 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111884 call 0x12116a60 */
  push32(0x12111889u); f_12116a60();
  /* 12111889 mov esi, esp */
  ESI = (ESP);
  /* 1211188b push 8 */
  push32((uint32_t)(0x8u));
  /* 1211188d push 0x12143540 */
  push32((uint32_t)(0x12143540u));
  /* 12111892 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111898u);
  /* 12111898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211189b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211189d call 0x12116a60 */
  push32(0x121118a2u); f_12116a60();
  /* 121118a2 mov esi, esp */
  ESI = (ESP);
  /* 121118a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 121118a6 push 0x12143538 */
  push32((uint32_t)(0x12143538u));
  /* 121118ab call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121118b1u);
  /* 121118b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121118b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121118b6 call 0x12116a60 */
  push32(0x121118bbu); f_12116a60();
  /* 121118bb mov esi, esp */
  ESI = (ESP);
  /* 121118bd push 8 */
  push32((uint32_t)(0x8u));
  /* 121118bf push 0x12143578 */
  push32((uint32_t)(0x12143578u));
  /* 121118c4 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121118cau);
  /* 121118ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121118cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121118cf call 0x12116a60 */
  push32(0x121118d4u); f_12116a60();
  /* 121118d4 mov esi, esp */
  ESI = (ESP);
  /* 121118d6 push 8 */
  push32((uint32_t)(0x8u));
  /* 121118d8 push 0x12143570 */
  push32((uint32_t)(0x12143570u));
  /* 121118dd call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121118e3u);
  /* 121118e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121118e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121118e8 call 0x12116a60 */
  push32(0x121118edu); f_12116a60();
  /* 121118ed mov esi, esp */
  ESI = (ESP);
  /* 121118ef push 8 */
  push32((uint32_t)(0x8u));
  /* 121118f1 push 0x12143590 */
  push32((uint32_t)(0x12143590u));
  /* 121118f6 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121118fcu);
  /* 121118fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121118ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111901 call 0x12116a60 */
  push32(0x12111906u); f_12116a60();
  /* 12111906 mov esi, esp */
  ESI = (ESP);
  /* 12111908 push 8 */
  push32((uint32_t)(0x8u));
  /* 1211190a push 0x12143580 */
  push32((uint32_t)(0x12143580u));
  /* 1211190f call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111915u);
  /* 12111915 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111918 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211191a call 0x12116a60 */
  push32(0x1211191fu); f_12116a60();
  /* 1211191f mov esi, esp */
  ESI = (ESP);
  /* 12111921 push 8 */
  push32((uint32_t)(0x8u));
  /* 12111923 push 0x12143558 */
  push32((uint32_t)(0x12143558u));
  /* 12111928 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x1211192eu);
  /* 1211192e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111931 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111933 call 0x12116a60 */
  push32(0x12111938u); f_12116a60();
  /* 12111938 mov esi, esp */
  ESI = (ESP);
  /* 1211193a push 8 */
  push32((uint32_t)(0x8u));
  /* 1211193c push 0x12143550 */
  push32((uint32_t)(0x12143550u));
  /* 12111941 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111947u);
  /* 12111947 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211194a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211194c call 0x12116a60 */
  push32(0x12111951u); f_12116a60();
  /* 12111951 mov esi, esp */
  ESI = (ESP);
  /* 12111953 push 8 */
  push32((uint32_t)(0x8u));
  /* 12111955 push 0x12143568 */
  push32((uint32_t)(0x12143568u));
  /* 1211195a call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111960u);
  /* 12111960 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111963 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111965 call 0x12116a60 */
  push32(0x1211196au); f_12116a60();
  /* 1211196a mov esi, esp */
  ESI = (ESP);
  /* 1211196c push 8 */
  push32((uint32_t)(0x8u));
  /* 1211196e push 0x12143560 */
  push32((uint32_t)(0x12143560u));
  /* 12111973 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111979u);
  /* 12111979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211197c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211197e call 0x12116a60 */
  push32(0x12111983u); f_12116a60();
  /* 12111983 mov esi, esp */
  ESI = (ESP);
  /* 12111985 push 8 */
  push32((uint32_t)(0x8u));
  /* 12111987 push 0x12143588 */
  push32((uint32_t)(0x12143588u));
  /* 1211198c call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111992u);
  /* 12111992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111995 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111997 call 0x12116a60 */
  push32(0x1211199cu); f_12116a60();
  /* 1211199c mov esi, esp */
  ESI = (ESP);
  /* 1211199e push 4 */
  push32((uint32_t)(0x4u));
  /* 121119a0 push 0x12143548 */
  push32((uint32_t)(0x12143548u));
  /* 121119a5 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121119abu);
  /* 121119ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121119ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121119b0 call 0x12116a60 */
  push32(0x121119b5u); f_12116a60();
  /* 121119b5 mov esi, esp */
  ESI = (ESP);
  /* 121119b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 121119b9 push 0x12143598 */
  push32((uint32_t)(0x12143598u));
  /* 121119be call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121119c4u);
  /* 121119c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121119c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121119c9 call 0x12116a60 */
  push32(0x121119ceu); f_12116a60();
  /* 121119ce mov esi, esp */
  ESI = (ESP);
  /* 121119d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 121119d2 push 0x121435d8 */
  push32((uint32_t)(0x121435d8u));
  /* 121119d7 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121119ddu);
  /* 121119dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121119e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121119e2 call 0x12116a60 */
  push32(0x121119e7u); f_12116a60();
  /* 121119e7 mov esi, esp */
  ESI = (ESP);
  /* 121119e9 push 4 */
  push32((uint32_t)(0x4u));
  /* 121119eb push 0x12143628 */
  push32((uint32_t)(0x12143628u));
  /* 121119f0 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x121119f6u);
  /* 121119f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121119f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121119fb call 0x12116a60 */
  push32(0x12111a00u); f_12116a60();
  /* 12111a00 mov esi, esp */
  ESI = (ESP);
  /* 12111a02 push 4 */
  push32((uint32_t)(0x4u));
  /* 12111a04 push 0x12143660 */
  push32((uint32_t)(0x12143660u));
  /* 12111a09 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111a0fu);
  /* 12111a0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111a12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111a14 call 0x12116a60 */
  push32(0x12111a19u); f_12116a60();
  /* 12111a19 mov esi, esp */
  ESI = (ESP);
  /* 12111a1b push 4 */
  push32((uint32_t)(0x4u));
  /* 12111a1d push 0x12143680 */
  push32((uint32_t)(0x12143680u));
  /* 12111a22 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111a28u);
  /* 12111a28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111a2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111a2d call 0x12116a60 */
  push32(0x12111a32u); f_12116a60();
  /* 12111a32 mov esi, esp */
  ESI = (ESP);
  /* 12111a34 push 4 */
  push32((uint32_t)(0x4u));
  /* 12111a36 push 0x121435a8 */
  push32((uint32_t)(0x121435a8u));
  /* 12111a3b call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111a41u);
  /* 12111a41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111a44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111a46 call 0x12116a60 */
  push32(0x12111a4bu); f_12116a60();
  /* 12111a4b mov esi, esp */
  ESI = (ESP);
  /* 12111a4d push 4 */
  push32((uint32_t)(0x4u));
  /* 12111a4f push 0x121436f0 */
  push32((uint32_t)(0x121436f0u));
  /* 12111a54 call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111a5au);
  /* 12111a5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111a5f call 0x12116a60 */
  push32(0x12111a64u); f_12116a60();
  /* 12111a64 mov esi, esp */
  ESI = (ESP);
  /* 12111a66 push 4 */
  push32((uint32_t)(0x4u));
  /* 12111a68 push 0x121434e8 */
  push32((uint32_t)(0x121434e8u));
  /* 12111a6d call dword ptr [0x1214651c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214651c))), 0x12111a73u);
  /* 12111a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111a76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111a78 call 0x12116a60 */
  push32(0x12111a7du); f_12116a60();
  /* 12111a7d mov esi, esp */
  ESI = (ESP);
  /* 12111a7f push 0x1213e0a8 */
  push32((uint32_t)(0x1213e0a8u));
  /* 12111a84 push 0x121436e0 */
  push32((uint32_t)(0x121436e0u));
  /* 12111a89 call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111a8fu);
  /* 12111a8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111a92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111a94 call 0x12116a60 */
  push32(0x12111a99u); f_12116a60();
  /* 12111a99 mov esi, esp */
  ESI = (ESP);
  /* 12111a9b push 0x1213e098 */
  push32((uint32_t)(0x1213e098u));
  /* 12111aa0 push 0x121435b8 */
  push32((uint32_t)(0x121435b8u));
  /* 12111aa5 call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111aabu);
  /* 12111aab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111aae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111ab0 call 0x12116a60 */
  push32(0x12111ab5u); f_12116a60();
  /* 12111ab5 mov esi, esp */
  ESI = (ESP);
  /* 12111ab7 push 0x1213e088 */
  push32((uint32_t)(0x1213e088u));
  /* 12111abc push 0x121435c8 */
  push32((uint32_t)(0x121435c8u));
  /* 12111ac1 call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111ac7u);
  /* 12111ac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111aca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111acc call 0x12116a60 */
  push32(0x12111ad1u); f_12116a60();
  /* 12111ad1 mov esi, esp */
  ESI = (ESP);
  /* 12111ad3 push 0x1213e078 */
  push32((uint32_t)(0x1213e078u));
  /* 12111ad8 push 0x121435d0 */
  push32((uint32_t)(0x121435d0u));
  /* 12111add call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111ae3u);
  /* 12111ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111ae8 call 0x12116a60 */
  push32(0x12111aedu); f_12116a60();
  /* 12111aed mov esi, esp */
  ESI = (ESP);
  /* 12111aef push 0x1213e068 */
  push32((uint32_t)(0x1213e068u));
  /* 12111af4 push 0x121435c0 */
  push32((uint32_t)(0x121435c0u));
  /* 12111af9 call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111affu);
  /* 12111aff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111b04 call 0x12116a60 */
  push32(0x12111b09u); f_12116a60();
  /* 12111b09 mov esi, esp */
  ESI = (ESP);
  /* 12111b0b push 0x1213e058 */
  push32((uint32_t)(0x1213e058u));
  /* 12111b10 push 0x121435b0 */
  push32((uint32_t)(0x121435b0u));
  /* 12111b15 call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111b1bu);
  /* 12111b1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111b1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111b20 call 0x12116a60 */
  push32(0x12111b25u); f_12116a60();
  /* 12111b25 mov esi, esp */
  ESI = (ESP);
  /* 12111b27 push 0x1213e050 */
  push32((uint32_t)(0x1213e050u));
  /* 12111b2c push 0x121436d8 */
  push32((uint32_t)(0x121436d8u));
  /* 12111b31 call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111b37u);
  /* 12111b37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111b3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111b3c call 0x12116a60 */
  push32(0x12111b41u); f_12116a60();
  /* 12111b41 mov esi, esp */
  ESI = (ESP);
  /* 12111b43 push 0x1213e044 */
  push32((uint32_t)(0x1213e044u));
  /* 12111b48 push 0x12143400 */
  push32((uint32_t)(0x12143400u));
  /* 12111b4d call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111b53u);
  /* 12111b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111b56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111b58 call 0x12116a60 */
  push32(0x12111b5du); f_12116a60();
  /* 12111b5d mov esi, esp */
  ESI = (ESP);
  /* 12111b5f push 0x1213e038 */
  push32((uint32_t)(0x1213e038u));
  /* 12111b64 push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 12111b69 call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111b6fu);
  /* 12111b6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111b72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111b74 call 0x12116a60 */
  push32(0x12111b79u); f_12116a60();
  /* 12111b79 mov esi, esp */
  ESI = (ESP);
  /* 12111b7b push 0x1213e030 */
  push32((uint32_t)(0x1213e030u));
  /* 12111b80 push 0x121434b0 */
  push32((uint32_t)(0x121434b0u));
  /* 12111b85 call dword ptr [0x12146520] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146520))), 0x12111b8bu);
  /* 12111b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111b8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111b90 call 0x12116a60 */
  push32(0x12111b95u); f_12116a60();
  /* 12111b95 mov esi, esp */
  ESI = (ESP);
  /* 12111b97 push 0x12143460 */
  push32((uint32_t)(0x12143460u));
  /* 12111b9c call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111ba2u);
  /* 12111ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111ba5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111ba7 call 0x12116a60 */
  push32(0x12111bacu); f_12116a60();
  /* 12111bac mov esi, esp */
  ESI = (ESP);
  /* 12111bae push 0x12143458 */
  push32((uint32_t)(0x12143458u));
  /* 12111bb3 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111bb9u);
  /* 12111bb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111bbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111bbe call 0x12116a60 */
  push32(0x12111bc3u); f_12116a60();
  /* 12111bc3 mov esi, esp */
  ESI = (ESP);
  /* 12111bc5 push 0x12143478 */
  push32((uint32_t)(0x12143478u));
  /* 12111bca call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111bd0u);
  /* 12111bd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111bd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111bd5 call 0x12116a60 */
  push32(0x12111bdau); f_12116a60();
  /* 12111bda mov esi, esp */
  ESI = (ESP);
  /* 12111bdc push 0x12143468 */
  push32((uint32_t)(0x12143468u));
  /* 12111be1 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111be7u);
  /* 12111be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111bea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111bec call 0x12116a60 */
  push32(0x12111bf1u); f_12116a60();
  /* 12111bf1 mov esi, esp */
  ESI = (ESP);
  /* 12111bf3 push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12111bf8 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111bfeu);
  /* 12111bfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111c03 call 0x12116a60 */
  push32(0x12111c08u); f_12116a60();
  /* 12111c08 mov esi, esp */
  ESI = (ESP);
  /* 12111c0a push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 12111c0f call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111c15u);
  /* 12111c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111c18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111c1a call 0x12116a60 */
  push32(0x12111c1fu); f_12116a60();
  /* 12111c1f mov esi, esp */
  ESI = (ESP);
  /* 12111c21 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12111c26 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111c2cu);
  /* 12111c2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111c2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111c31 call 0x12116a60 */
  push32(0x12111c36u); f_12116a60();
  /* 12111c36 mov esi, esp */
  ESI = (ESP);
  /* 12111c38 push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12111c3d call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111c43u);
  /* 12111c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111c46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111c48 call 0x12116a60 */
  push32(0x12111c4du); f_12116a60();
  /* 12111c4d mov esi, esp */
  ESI = (ESP);
  /* 12111c4f push 0x12143438 */
  push32((uint32_t)(0x12143438u));
  /* 12111c54 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111c5au);
  /* 12111c5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111c5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111c5f call 0x12116a60 */
  push32(0x12111c64u); f_12116a60();
  /* 12111c64 mov esi, esp */
  ESI = (ESP);
  /* 12111c66 push 0x12143540 */
  push32((uint32_t)(0x12143540u));
  /* 12111c6b call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111c71u);
  /* 12111c71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111c74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111c76 call 0x12116a60 */
  push32(0x12111c7bu); f_12116a60();
  /* 12111c7b mov esi, esp */
  ESI = (ESP);
  /* 12111c7d push 0x12143538 */
  push32((uint32_t)(0x12143538u));
  /* 12111c82 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111c88u);
  /* 12111c88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111c8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111c8d call 0x12116a60 */
  push32(0x12111c92u); f_12116a60();
  /* 12111c92 mov esi, esp */
  ESI = (ESP);
  /* 12111c94 push 0x12143578 */
  push32((uint32_t)(0x12143578u));
  /* 12111c99 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111c9fu);
  /* 12111c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111ca4 call 0x12116a60 */
  push32(0x12111ca9u); f_12116a60();
  /* 12111ca9 mov esi, esp */
  ESI = (ESP);
  /* 12111cab push 0x12143570 */
  push32((uint32_t)(0x12143570u));
  /* 12111cb0 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111cb6u);
  /* 12111cb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111cb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111cbb call 0x12116a60 */
  push32(0x12111cc0u); f_12116a60();
  /* 12111cc0 mov esi, esp */
  ESI = (ESP);
  /* 12111cc2 push 0x12143590 */
  push32((uint32_t)(0x12143590u));
  /* 12111cc7 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111ccdu);
  /* 12111ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111cd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111cd2 call 0x12116a60 */
  push32(0x12111cd7u); f_12116a60();
  /* 12111cd7 mov esi, esp */
  ESI = (ESP);
  /* 12111cd9 push 0x12143580 */
  push32((uint32_t)(0x12143580u));
  /* 12111cde call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111ce4u);
  /* 12111ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111ce9 call 0x12116a60 */
  push32(0x12111ceeu); f_12116a60();
  /* 12111cee mov esi, esp */
  ESI = (ESP);
  /* 12111cf0 push 0x12143558 */
  push32((uint32_t)(0x12143558u));
  /* 12111cf5 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111cfbu);
  /* 12111cfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111cfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111d00 call 0x12116a60 */
  push32(0x12111d05u); f_12116a60();
  /* 12111d05 mov esi, esp */
  ESI = (ESP);
  /* 12111d07 push 0x12143550 */
  push32((uint32_t)(0x12143550u));
  /* 12111d0c call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111d12u);
  /* 12111d12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111d15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111d17 call 0x12116a60 */
  push32(0x12111d1cu); f_12116a60();
  /* 12111d1c mov esi, esp */
  ESI = (ESP);
  /* 12111d1e push 0x12143568 */
  push32((uint32_t)(0x12143568u));
  /* 12111d23 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111d29u);
  /* 12111d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111d2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111d2e call 0x12116a60 */
  push32(0x12111d33u); f_12116a60();
  /* 12111d33 mov esi, esp */
  ESI = (ESP);
  /* 12111d35 push 0x12143560 */
  push32((uint32_t)(0x12143560u));
  /* 12111d3a call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111d40u);
  /* 12111d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111d43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111d45 call 0x12116a60 */
  push32(0x12111d4au); f_12116a60();
  /* 12111d4a mov esi, esp */
  ESI = (ESP);
  /* 12111d4c push 0x12143588 */
  push32((uint32_t)(0x12143588u));
  /* 12111d51 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111d57u);
  /* 12111d57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111d5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111d5c call 0x12116a60 */
  push32(0x12111d61u); f_12116a60();
  /* 12111d61 mov esi, esp */
  ESI = (ESP);
  /* 12111d63 push 0x121436d0 */
  push32((uint32_t)(0x121436d0u));
  /* 12111d68 call dword ptr [0x12146518] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146518))), 0x12111d6eu);
  /* 12111d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111d71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111d73 call 0x12116a60 */
  push32(0x12111d78u); f_12116a60();
  /* 12111d78 mov esi, esp */
  ESI = (ESP);
  /* 12111d7a push 0x1213e028 */
  push32((uint32_t)(0x1213e028u));
  /* 12111d7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12111d81 call dword ptr [0x12146528] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146528))), 0x12111d87u);
  /* 12111d87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111d8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111d8c call 0x12116a60 */
  push32(0x12111d91u); f_12116a60();
  /* 12111d91 mov esi, esp */
  ESI = (ESP);
  /* 12111d93 push 0x1213e01c */
  push32((uint32_t)(0x1213e01cu));
  /* 12111d98 push 2 */
  push32((uint32_t)(0x2u));
  /* 12111d9a call dword ptr [0x12146528] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146528))), 0x12111da0u);
  /* 12111da0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111da3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111da5 call 0x12116a60 */
  push32(0x12111daau); f_12116a60();
  /* 12111daa mov esi, esp */
  ESI = (ESP);
  /* 12111dac push 0x1213e01c */
  push32((uint32_t)(0x1213e01cu));
  /* 12111db1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12111db3 call dword ptr [0x12146528] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146528))), 0x12111db9u);
  /* 12111db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111dbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111dbe call 0x12116a60 */
  push32(0x12111dc3u); f_12116a60();
  /* 12111dc3 mov esi, esp */
  ESI = (ESP);
  /* 12111dc5 push 0x1213e028 */
  push32((uint32_t)(0x1213e028u));
  /* 12111dca push 4 */
  push32((uint32_t)(0x4u));
  /* 12111dcc call dword ptr [0x12146528] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146528))), 0x12111dd2u);
  /* 12111dd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111dd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111dd7 call 0x12116a60 */
  push32(0x12111ddcu); f_12116a60();
  /* 12111ddc mov esi, esp */
  ESI = (ESP);
  /* 12111dde push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12111de0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12111de2 call dword ptr [0x1214652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214652c))), 0x12111de8u);
  /* 12111de8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111deb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111ded call 0x12116a60 */
  push32(0x12111df2u); f_12116a60();
  /* 12111df2 mov esi, esp */
  ESI = (ESP);
  /* 12111df4 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12111df6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12111df8 call dword ptr [0x1214652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214652c))), 0x12111dfeu);
  /* 12111dfe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111e01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111e03 call 0x12116a60 */
  push32(0x12111e08u); f_12116a60();
  /* 12111e08 mov esi, esp */
  ESI = (ESP);
  /* 12111e0a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12111e0c push 3 */
  push32((uint32_t)(0x3u));
  /* 12111e0e call dword ptr [0x1214652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214652c))), 0x12111e14u);
  /* 12111e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111e19 call 0x12116a60 */
  push32(0x12111e1eu); f_12116a60();
  /* 12111e1e mov esi, esp */
  ESI = (ESP);
  /* 12111e20 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12111e22 push 4 */
  push32((uint32_t)(0x4u));
  /* 12111e24 call dword ptr [0x1214652c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214652c))), 0x12111e2au);
  /* 12111e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111e2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111e2f call 0x12116a60 */
  push32(0x12111e34u); f_12116a60();
  /* 12111e34 mov esi, esp */
  ESI = (ESP);
  /* 12111e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111e38 push 0x121434b8 */
  push32((uint32_t)(0x121434b8u));
  /* 12111e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12111e3f call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111e45u);
  /* 12111e45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111e48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111e4a call 0x12116a60 */
  push32(0x12111e4fu); f_12116a60();
  /* 12111e4f mov esi, esp */
  ESI = (ESP);
  /* 12111e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111e53 push 0x121435f0 */
  push32((uint32_t)(0x121435f0u));
  /* 12111e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111e5a call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111e60u);
  /* 12111e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111e63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111e65 call 0x12116a60 */
  push32(0x12111e6au); f_12116a60();
  /* 12111e6a mov esi, esp */
  ESI = (ESP);
  /* 12111e6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12111e6e push 0x121434c0 */
  push32((uint32_t)(0x121434c0u));
  /* 12111e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111e75 call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111e7bu);
  /* 12111e7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111e7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111e80 call 0x12116a60 */
  push32(0x12111e85u); f_12116a60();
  /* 12111e85 mov esi, esp */
  ESI = (ESP);
  /* 12111e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111e89 push 0x121435f8 */
  push32((uint32_t)(0x121435f8u));
  /* 12111e8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12111e90 call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111e96u);
  /* 12111e96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111e99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111e9b call 0x12116a60 */
  push32(0x12111ea0u); f_12116a60();
  /* 12111ea0 mov esi, esp */
  ESI = (ESP);
  /* 12111ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111ea4 push 0x121434c8 */
  push32((uint32_t)(0x121434c8u));
  /* 12111ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111eab call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111eb1u);
  /* 12111eb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111eb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111eb6 call 0x12116a60 */
  push32(0x12111ebbu); f_12116a60();
  /* 12111ebb mov esi, esp */
  ESI = (ESP);
  /* 12111ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 12111ebf push 0x12143600 */
  push32((uint32_t)(0x12143600u));
  /* 12111ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111ec6 call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111eccu);
  /* 12111ecc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111ecf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111ed1 call 0x12116a60 */
  push32(0x12111ed6u); f_12116a60();
  /* 12111ed6 mov esi, esp */
  ESI = (ESP);
  /* 12111ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111eda push 0x12143470 */
  push32((uint32_t)(0x12143470u));
  /* 12111edf push 0 */
  push32((uint32_t)(0x0u));
  /* 12111ee1 call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111ee7u);
  /* 12111ee7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111eea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111eec call 0x12116a60 */
  push32(0x12111ef1u); f_12116a60();
  /* 12111ef1 mov esi, esp */
  ESI = (ESP);
  /* 12111ef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111ef5 push 0x12143480 */
  push32((uint32_t)(0x12143480u));
  /* 12111efa push 0 */
  push32((uint32_t)(0x0u));
  /* 12111efc call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111f02u);
  /* 12111f02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111f05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111f07 call 0x12116a60 */
  push32(0x12111f0cu); f_12116a60();
  /* 12111f0c mov esi, esp */
  ESI = (ESP);
  /* 12111f0e push 0 */
  push32((uint32_t)(0x0u));
  /* 12111f10 push 0x12143518 */
  push32((uint32_t)(0x12143518u));
  /* 12111f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111f17 call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111f1du);
  /* 12111f1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111f20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111f22 call 0x12116a60 */
  push32(0x12111f27u); f_12116a60();
  /* 12111f27 mov esi, esp */
  ESI = (ESP);
  /* 12111f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111f2b push 0x12143520 */
  push32((uint32_t)(0x12143520u));
  /* 12111f30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12111f32 call dword ptr [0x12146524] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146524))), 0x12111f38u);
  /* 12111f38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111f3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111f3d call 0x12116a60 */
  push32(0x12111f42u); f_12116a60();
  /* 12111f42 pop edi */
  EDI = (pop32());
  /* 12111f43 pop esi */
  ESI = (pop32());
  /* 12111f44 pop ebx */
  EBX = (pop32());
  /* 12111f45 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12111f48 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12111f4a call 0x12116a60 */
  push32(0x12111f4fu); f_12116a60();
  /* 12111f4f mov esp, ebp */
  ESP = (EBP);
  /* 12111f51 pop ebp */
  EBP = (pop32());
  /* 12111f52 ret  */
  ESPCHK(0x12111090u, _esp0);
  ESP += 4; return;
}

/* FUN_10002310 @ 0x12112310 (14300 bytes, 4024 insns) [3 switch table(s)] */
void f_12112310(void) {
  FTRACE(0x12112310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12112310 push ebp */
  push32((uint32_t)(EBP));
  /* 12112311 mov ebp, esp */
  EBP = (ESP);
  /* 12112313 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12112316 push ebx */
  push32((uint32_t)(EBX));
  /* 12112317 push esi */
  push32((uint32_t)(ESI));
  /* 12112318 push edi */
  push32((uint32_t)(EDI));
  /* 12112319 lea edi, [ebp - 0x5c] */
  EDI = ((uint32_t)(EBP + -0x5c));
  /* 1211231c mov ecx, 0x17 */
  ECX = (0x17u);
  /* 12112321 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12112326 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12112328 mov esi, esp */
  ESI = (ESP);
  /* 1211232a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1211232c call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12112332u);
  /* 12112332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112335 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112337 call 0x12116a60 */
  push32(0x1211233cu); f_12116a60();
  /* 1211233c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12112341 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12112343 je 0x121130fe */
  if (C.zf) goto L_121130fe;
  /* 12112349 mov esi, esp */
  ESI = (ESP);
  /* 1211234b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211234d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1211234f call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12112355u);
  /* 12112355 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112358 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211235a call 0x12116a60 */
  push32(0x1211235fu); f_12116a60();
  /* 1211235f mov esi, esp */
  ESI = (ESP);
  /* 12112361 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12112363 call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x12112369u);
  /* 12112369 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211236c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211236e call 0x12116a60 */
  push32(0x12112373u); f_12116a60();
  /* 12112373 mov esi, esp */
  ESI = (ESP);
  /* 12112375 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12112377 call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x1211237du);
  /* 1211237d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112380 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112382 call 0x12116a60 */
  push32(0x12112387u); f_12116a60();
  /* 12112387 mov esi, esp */
  ESI = (ESP);
  /* 12112389 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1211238b call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x12112391u);
  /* 12112391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112394 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112396 call 0x12116a60 */
  push32(0x1211239bu); f_12116a60();
  /* 1211239b mov esi, esp */
  ESI = (ESP);
  /* 1211239d push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1211239f call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x121123a5u);
  /* 121123a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121123a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121123aa call 0x12116a60 */
  push32(0x121123afu); f_12116a60();
  /* 121123af mov esi, esp */
  ESI = (ESP);
  /* 121123b1 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 121123b3 call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x121123b9u);
  /* 121123b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121123bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121123be call 0x12116a60 */
  push32(0x121123c3u); f_12116a60();
  /* 121123c3 mov esi, esp */
  ESI = (ESP);
  /* 121123c5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 121123c7 call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x121123cdu);
  /* 121123cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121123d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121123d2 call 0x12116a60 */
  push32(0x121123d7u); f_12116a60();
  /* 121123d7 mov esi, esp */
  ESI = (ESP);
  /* 121123d9 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 121123db call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x121123e1u);
  /* 121123e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121123e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121123e6 call 0x12116a60 */
  push32(0x121123ebu); f_12116a60();
  /* 121123eb mov esi, esp */
  ESI = (ESP);
  /* 121123ed push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 121123ef call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x121123f5u);
  /* 121123f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121123f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121123fa call 0x12116a60 */
  push32(0x121123ffu); f_12116a60();
  /* 121123ff mov esi, esp */
  ESI = (ESP);
  /* 12112401 push 0x121434f8 */
  push32((uint32_t)(0x121434f8u));
  /* 12112406 call dword ptr [0x12146478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146478))), 0x1211240cu);
  /* 1211240c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211240f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112411 call 0x12116a60 */
  push32(0x12112416u); f_12116a60();
  /* 12112416 mov esi, esp */
  ESI = (ESP);
  /* 12112418 push 0x121434f0 */
  push32((uint32_t)(0x121434f0u));
  /* 1211241d call dword ptr [0x12146470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146470))), 0x12112423u);
  /* 12112423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112426 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112428 call 0x12116a60 */
  push32(0x1211242du); f_12116a60();
  /* 1211242d mov esi, esp */
  ESI = (ESP);
  /* 1211242f push 0x12143500 */
  push32((uint32_t)(0x12143500u));
  /* 12112434 call dword ptr [0x12146470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146470))), 0x1211243au);
  /* 1211243a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211243d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211243f call 0x12116a60 */
  push32(0x12112444u); f_12116a60();
  /* 12112444 mov esi, esp */
  ESI = (ESP);
  /* 12112446 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112448 push 0x12143490 */
  push32((uint32_t)(0x12143490u));
  /* 1211244d call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12112453u);
  /* 12112453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112456 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112458 call 0x12116a60 */
  push32(0x1211245du); f_12116a60();
  /* 1211245d mov esi, esp */
  ESI = (ESP);
  /* 1211245f push 0 */
  push32((uint32_t)(0x0u));
  /* 12112461 push 0x121435e0 */
  push32((uint32_t)(0x121435e0u));
  /* 12112466 push 3 */
  push32((uint32_t)(0x3u));
  /* 12112468 call dword ptr [0x12146484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146484))), 0x1211246eu);
  /* 1211246e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112471 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112473 call 0x12116a60 */
  push32(0x12112478u); f_12116a60();
  /* 12112478 mov esi, esp */
  ESI = (ESP);
  /* 1211247a push 0x12143448 */
  push32((uint32_t)(0x12143448u));
  /* 1211247f push 0x12143488 */
  push32((uint32_t)(0x12143488u));
  /* 12112484 call dword ptr [0x1214647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214647c))), 0x1211248au);
  /* 1211248a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211248d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211248f call 0x12116a60 */
  push32(0x12112494u); f_12116a60();
  /* 12112494 mov esi, esp */
  ESI = (ESP);
  /* 12112496 push 0x12143450 */
  push32((uint32_t)(0x12143450u));
  /* 1211249b push 0x12143498 */
  push32((uint32_t)(0x12143498u));
  /* 121124a0 call dword ptr [0x1214647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214647c))), 0x121124a6u);
  /* 121124a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121124a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121124ab call 0x12116a60 */
  push32(0x121124b0u); f_12116a60();
  /* 121124b0 mov esi, esp */
  ESI = (ESP);
  /* 121124b2 push 0x121436a8 */
  push32((uint32_t)(0x121436a8u));
  /* 121124b7 push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 121124bc call dword ptr [0x1214647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214647c))), 0x121124c2u);
  /* 121124c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121124c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121124c7 call 0x12116a60 */
  push32(0x121124ccu); f_12116a60();
  /* 121124cc mov esi, esp */
  ESI = (ESP);
  /* 121124ce push 0x121436b0 */
  push32((uint32_t)(0x121436b0u));
  /* 121124d3 push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 121124d8 call dword ptr [0x1214647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214647c))), 0x121124deu);
  /* 121124de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121124e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121124e3 call 0x12116a60 */
  push32(0x121124e8u); f_12116a60();
  /* 121124e8 mov esi, esp */
  ESI = (ESP);
  /* 121124ea push 0x121436c0 */
  push32((uint32_t)(0x121436c0u));
  /* 121124ef push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 121124f4 call dword ptr [0x1214647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214647c))), 0x121124fau);
  /* 121124fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121124fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121124ff call 0x12116a60 */
  push32(0x12112504u); f_12116a60();
  /* 12112504 mov esi, esp */
  ESI = (ESP);
  /* 12112506 push 0x121436c8 */
  push32((uint32_t)(0x121436c8u));
  /* 1211250b push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 12112510 call dword ptr [0x1214647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214647c))), 0x12112516u);
  /* 12112516 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112519 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211251b call 0x12116a60 */
  push32(0x12112520u); f_12116a60();
  /* 12112520 mov esi, esp */
  ESI = (ESP);
  /* 12112522 push 3 */
  push32((uint32_t)(0x3u));
  /* 12112524 call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x1211252au);
  /* 1211252a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211252d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211252f call 0x12116a60 */
  push32(0x12112534u); f_12116a60();
  /* 12112534 mov esi, esp */
  ESI = (ESP);
  /* 12112536 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112538 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x1211253eu);
  /* 1211253e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112541 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112543 call 0x12116a60 */
  push32(0x12112548u); f_12116a60();
  /* 12112548 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211254b cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211254f ja 0x12112b07 */
  if ((!C.cf&&!C.zf)) goto L_12112b07;
  /* 12112555 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12112558 jmp dword ptr [eax*4 + 0x12115aec] */
  switch (EAX) {
    case 0: goto L_1211255f;
    case 1: goto L_12112732;
    case 2: goto L_121128d3;
    case 3: goto L_12112a29;
    case 4: goto L_12113f93;
    case 5: goto L_12114046;
    case 6: goto L_121140f9;
    case 7: goto L_121141ac;
    case 8: goto L_1211551b;
    case 9: goto L_12115570;
    case 10: goto L_121155cb;
    case 11: goto L_12115623;
    default: x86_unimpl("switch@0x12112558 out of table"); return;
  }
L_1211255f:;
  /* 1211255f mov esi, esp */
  ESI = (ESP);
  /* 12112561 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 12112566 push 3 */
  push32((uint32_t)(0x3u));
  /* 12112568 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211256a call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112570u);
  /* 12112570 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112573 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112575 call 0x12116a60 */
  push32(0x1211257au); f_12116a60();
  /* 1211257a mov esi, esp */
  ESI = (ESP);
  /* 1211257c push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 12112581 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112583 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112585 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x1211258bu);
  /* 1211258b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211258e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112590 call 0x12116a60 */
  push32(0x12112595u); f_12116a60();
  /* 12112595 mov esi, esp */
  ESI = (ESP);
  /* 12112597 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 1211259c push 2 */
  push32((uint32_t)(0x2u));
  /* 1211259e push 0 */
  push32((uint32_t)(0x0u));
  /* 121125a0 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121125a6u);
  /* 121125a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121125a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121125ab call 0x12116a60 */
  push32(0x121125b0u); f_12116a60();
  /* 121125b0 mov esi, esp */
  ESI = (ESP);
  /* 121125b2 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 121125b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121125b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121125bb call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121125c1u);
  /* 121125c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121125c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121125c6 call 0x12116a60 */
  push32(0x121125cbu); f_12116a60();
  /* 121125cb mov esi, esp */
  ESI = (ESP);
  /* 121125cd push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 121125d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 121125d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121125d6 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121125dcu);
  /* 121125dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121125df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121125e1 call 0x12116a60 */
  push32(0x121125e6u); f_12116a60();
  /* 121125e6 mov esi, esp */
  ESI = (ESP);
  /* 121125e8 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 121125ed push 4 */
  push32((uint32_t)(0x4u));
  /* 121125ef push 0 */
  push32((uint32_t)(0x0u));
  /* 121125f1 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121125f7u);
  /* 121125f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121125fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121125fc call 0x12116a60 */
  push32(0x12112601u); f_12116a60();
  /* 12112601 mov esi, esp */
  ESI = (ESP);
  /* 12112603 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112605 push 0x12143530 */
  push32((uint32_t)(0x12143530u));
  /* 1211260a call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12112610u);
  /* 12112610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112615 call 0x12116a60 */
  push32(0x1211261au); f_12116a60();
  /* 1211261a mov esi, esp */
  ESI = (ESP);
  /* 1211261c push 1 */
  push32((uint32_t)(0x1u));
  /* 1211261e push 0x12143630 */
  push32((uint32_t)(0x12143630u));
  /* 12112623 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12112629u);
  /* 12112629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211262c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211262e call 0x12116a60 */
  push32(0x12112633u); f_12116a60();
  /* 12112633 mov esi, esp */
  ESI = (ESP);
  /* 12112635 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112637 push 0x12143638 */
  push32((uint32_t)(0x12143638u));
  /* 1211263c call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12112642u);
  /* 12112642 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112647 call 0x12116a60 */
  push32(0x1211264cu); f_12116a60();
  /* 1211264c mov esi, esp */
  ESI = (ESP);
  /* 1211264e push 1 */
  push32((uint32_t)(0x1u));
  /* 12112650 push 0x12143640 */
  push32((uint32_t)(0x12143640u));
  /* 12112655 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x1211265bu);
  /* 1211265b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211265e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112660 call 0x12116a60 */
  push32(0x12112665u); f_12116a60();
  /* 12112665 mov esi, esp */
  ESI = (ESP);
  /* 12112667 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112669 push 0x12143648 */
  push32((uint32_t)(0x12143648u));
  /* 1211266e call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12112674u);
  /* 12112674 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112679 call 0x12116a60 */
  push32(0x1211267eu); f_12116a60();
  /* 1211267e mov esi, esp */
  ESI = (ESP);
  /* 12112680 push 4 */
  push32((uint32_t)(0x4u));
  /* 12112682 call dword ptr [0x12146498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146498))), 0x12112688u);
  /* 12112688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211268b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211268d call 0x12116a60 */
  push32(0x12112692u); f_12116a60();
  /* 12112692 mov esi, esp */
  ESI = (ESP);
  /* 12112694 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112696 push 0x12143528 */
  push32((uint32_t)(0x12143528u));
  /* 1211269b call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x121126a1u);
  /* 121126a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121126a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121126a6 call 0x12116a60 */
  push32(0x121126abu); f_12116a60();
  /* 121126ab mov esi, esp */
  ESI = (ESP);
  /* 121126ad push 1 */
  push32((uint32_t)(0x1u));
  /* 121126af push 0x12143650 */
  push32((uint32_t)(0x12143650u));
  /* 121126b4 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x121126bau);
  /* 121126ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121126bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121126bf call 0x12116a60 */
  push32(0x121126c4u); f_12116a60();
  /* 121126c4 mov esi, esp */
  ESI = (ESP);
  /* 121126c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 121126c8 push 0x12143658 */
  push32((uint32_t)(0x12143658u));
  /* 121126cd call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x121126d3u);
  /* 121126d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121126d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121126d8 call 0x12116a60 */
  push32(0x121126ddu); f_12116a60();
  /* 121126dd mov esi, esp */
  ESI = (ESP);
  /* 121126df push 3 */
  push32((uint32_t)(0x3u));
  /* 121126e1 call dword ptr [0x12146498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146498))), 0x121126e7u);
  /* 121126e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121126ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121126ec call 0x12116a60 */
  push32(0x121126f1u); f_12116a60();
  /* 121126f1 mov dword ptr [0x12143548], 0 */
  w32((uint32_t)(0x12143548), (0x0u));
  /* 121126fb mov dword ptr [0x12143598], 0 */
  w32((uint32_t)(0x12143598), (0x0u));
  /* 12112705 mov dword ptr [0x121435d8], 3 */
  w32((uint32_t)(0x121435d8), (0x3u));
  /* 1211270f mov dword ptr [0x12143628], 3 */
  w32((uint32_t)(0x12143628), (0x3u));
  /* 12112719 mov dword ptr [0x12143660], 1 */
  w32((uint32_t)(0x12143660), (0x1u));
  /* 12112723 mov dword ptr [0x12143680], 1 */
  w32((uint32_t)(0x12143680), (0x1u));
  /* 1211272d jmp 0x12112b07 */
  goto L_12112b07;
L_12112732:;
  /* 12112732 mov esi, esp */
  ESI = (ESP);
  /* 12112734 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 12112739 push 3 */
  push32((uint32_t)(0x3u));
  /* 1211273b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211273d call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112743u);
  /* 12112743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112748 call 0x12116a60 */
  push32(0x1211274du); f_12116a60();
  /* 1211274d mov esi, esp */
  ESI = (ESP);
  /* 1211274f push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 12112754 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112756 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112758 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x1211275eu);
  /* 1211275e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112763 call 0x12116a60 */
  push32(0x12112768u); f_12116a60();
  /* 12112768 mov esi, esp */
  ESI = (ESP);
  /* 1211276a push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 1211276f push 2 */
  push32((uint32_t)(0x2u));
  /* 12112771 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112773 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112779u);
  /* 12112779 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211277c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211277e call 0x12116a60 */
  push32(0x12112783u); f_12116a60();
  /* 12112783 mov esi, esp */
  ESI = (ESP);
  /* 12112785 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 1211278a push 1 */
  push32((uint32_t)(0x1u));
  /* 1211278c push 0 */
  push32((uint32_t)(0x0u));
  /* 1211278e call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112794u);
  /* 12112794 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112799 call 0x12116a60 */
  push32(0x1211279eu); f_12116a60();
  /* 1211279e mov esi, esp */
  ESI = (ESP);
  /* 121127a0 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 121127a5 push 5 */
  push32((uint32_t)(0x5u));
  /* 121127a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121127a9 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121127afu);
  /* 121127af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121127b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121127b4 call 0x12116a60 */
  push32(0x121127b9u); f_12116a60();
  /* 121127b9 mov esi, esp */
  ESI = (ESP);
  /* 121127bb push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 121127c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 121127c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121127c4 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121127cau);
  /* 121127ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121127cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121127cf call 0x12116a60 */
  push32(0x121127d4u); f_12116a60();
  /* 121127d4 mov esi, esp */
  ESI = (ESP);
  /* 121127d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121127d8 push 0x12143630 */
  push32((uint32_t)(0x12143630u));
  /* 121127dd call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x121127e3u);
  /* 121127e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121127e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121127e8 call 0x12116a60 */
  push32(0x121127edu); f_12116a60();
  /* 121127ed mov esi, esp */
  ESI = (ESP);
  /* 121127ef push 1 */
  push32((uint32_t)(0x1u));
  /* 121127f1 push 0x12143638 */
  push32((uint32_t)(0x12143638u));
  /* 121127f6 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x121127fcu);
  /* 121127fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121127ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112801 call 0x12116a60 */
  push32(0x12112806u); f_12116a60();
  /* 12112806 mov esi, esp */
  ESI = (ESP);
  /* 12112808 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211280a push 0x12143640 */
  push32((uint32_t)(0x12143640u));
  /* 1211280f call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12112815u);
  /* 12112815 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112818 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211281a call 0x12116a60 */
  push32(0x1211281fu); f_12116a60();
  /* 1211281f mov esi, esp */
  ESI = (ESP);
  /* 12112821 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112823 push 0x12143648 */
  push32((uint32_t)(0x12143648u));
  /* 12112828 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x1211282eu);
  /* 1211282e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112833 call 0x12116a60 */
  push32(0x12112838u); f_12116a60();
  /* 12112838 mov esi, esp */
  ESI = (ESP);
  /* 1211283a push 4 */
  push32((uint32_t)(0x4u));
  /* 1211283c call dword ptr [0x12146498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146498))), 0x12112842u);
  /* 12112842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112847 call 0x12116a60 */
  push32(0x1211284cu); f_12116a60();
  /* 1211284c mov esi, esp */
  ESI = (ESP);
  /* 1211284e push 0 */
  push32((uint32_t)(0x0u));
  /* 12112850 push 0x12143650 */
  push32((uint32_t)(0x12143650u));
  /* 12112855 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x1211285bu);
  /* 1211285b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211285e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112860 call 0x12116a60 */
  push32(0x12112865u); f_12116a60();
  /* 12112865 mov esi, esp */
  ESI = (ESP);
  /* 12112867 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112869 push 0x12143658 */
  push32((uint32_t)(0x12143658u));
  /* 1211286e call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12112874u);
  /* 12112874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112877 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112879 call 0x12116a60 */
  push32(0x1211287eu); f_12116a60();
  /* 1211287e mov esi, esp */
  ESI = (ESP);
  /* 12112880 push 3 */
  push32((uint32_t)(0x3u));
  /* 12112882 call dword ptr [0x12146498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146498))), 0x12112888u);
  /* 12112888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211288b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211288d call 0x12116a60 */
  push32(0x12112892u); f_12116a60();
  /* 12112892 mov dword ptr [0x12143548], 1 */
  w32((uint32_t)(0x12143548), (0x1u));
  /* 1211289c mov dword ptr [0x12143598], 1 */
  w32((uint32_t)(0x12143598), (0x1u));
  /* 121128a6 mov dword ptr [0x121435d8], 7 */
  w32((uint32_t)(0x121435d8), (0x7u));
  /* 121128b0 mov dword ptr [0x12143628], 8 */
  w32((uint32_t)(0x12143628), (0x8u));
  /* 121128ba mov dword ptr [0x12143660], 1 */
  w32((uint32_t)(0x12143660), (0x1u));
  /* 121128c4 mov dword ptr [0x12143680], 1 */
  w32((uint32_t)(0x12143680), (0x1u));
  /* 121128ce jmp 0x12112b07 */
  goto L_12112b07;
L_121128d3:;
  /* 121128d3 mov esi, esp */
  ESI = (ESP);
  /* 121128d5 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 121128da push 3 */
  push32((uint32_t)(0x3u));
  /* 121128dc push 0 */
  push32((uint32_t)(0x0u));
  /* 121128de call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121128e4u);
  /* 121128e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121128e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121128e9 call 0x12116a60 */
  push32(0x121128eeu); f_12116a60();
  /* 121128ee mov esi, esp */
  ESI = (ESP);
  /* 121128f0 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 121128f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121128f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121128f9 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121128ffu);
  /* 121128ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112902 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112904 call 0x12116a60 */
  push32(0x12112909u); f_12116a60();
  /* 12112909 mov esi, esp */
  ESI = (ESP);
  /* 1211290b push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 12112910 push 2 */
  push32((uint32_t)(0x2u));
  /* 12112912 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112914 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x1211291au);
  /* 1211291a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211291d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211291f call 0x12116a60 */
  push32(0x12112924u); f_12116a60();
  /* 12112924 mov esi, esp */
  ESI = (ESP);
  /* 12112926 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 1211292b push 1 */
  push32((uint32_t)(0x1u));
  /* 1211292d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211292f call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112935u);
  /* 12112935 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112938 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211293a call 0x12116a60 */
  push32(0x1211293fu); f_12116a60();
  /* 1211293f mov esi, esp */
  ESI = (ESP);
  /* 12112941 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 12112946 push 5 */
  push32((uint32_t)(0x5u));
  /* 12112948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211294a call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112950u);
  /* 12112950 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112955 call 0x12116a60 */
  push32(0x1211295au); f_12116a60();
  /* 1211295a mov esi, esp */
  ESI = (ESP);
  /* 1211295c push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 12112961 push 4 */
  push32((uint32_t)(0x4u));
  /* 12112963 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112965 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x1211296bu);
  /* 1211296b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211296e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112970 call 0x12116a60 */
  push32(0x12112975u); f_12116a60();
  /* 12112975 mov esi, esp */
  ESI = (ESP);
  /* 12112977 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112979 push 0x12143638 */
  push32((uint32_t)(0x12143638u));
  /* 1211297e call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12112984u);
  /* 12112984 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112987 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112989 call 0x12116a60 */
  push32(0x1211298eu); f_12116a60();
  /* 1211298e mov esi, esp */
  ESI = (ESP);
  /* 12112990 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112992 push 0x12143648 */
  push32((uint32_t)(0x12143648u));
  /* 12112997 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x1211299du);
  /* 1211299d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121129a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121129a2 call 0x12116a60 */
  push32(0x121129a7u); f_12116a60();
  /* 121129a7 mov esi, esp */
  ESI = (ESP);
  /* 121129a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 121129ab call dword ptr [0x12146498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146498))), 0x121129b1u);
  /* 121129b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121129b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121129b6 call 0x12116a60 */
  push32(0x121129bbu); f_12116a60();
  /* 121129bb mov esi, esp */
  ESI = (ESP);
  /* 121129bd push 0 */
  push32((uint32_t)(0x0u));
  /* 121129bf push 0x12143658 */
  push32((uint32_t)(0x12143658u));
  /* 121129c4 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x121129cau);
  /* 121129ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121129cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121129cf call 0x12116a60 */
  push32(0x121129d4u); f_12116a60();
  /* 121129d4 mov esi, esp */
  ESI = (ESP);
  /* 121129d6 push 3 */
  push32((uint32_t)(0x3u));
  /* 121129d8 call dword ptr [0x12146498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146498))), 0x121129deu);
  /* 121129de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121129e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121129e3 call 0x12116a60 */
  push32(0x121129e8u); f_12116a60();
  /* 121129e8 mov dword ptr [0x12143548], 2 */
  w32((uint32_t)(0x12143548), (0x2u));
  /* 121129f2 mov dword ptr [0x12143598], 2 */
  w32((uint32_t)(0x12143598), (0x2u));
  /* 121129fc mov dword ptr [0x121435d8], 9 */
  w32((uint32_t)(0x121435d8), (0x9u));
  /* 12112a06 mov dword ptr [0x12143628], 0xa */
  w32((uint32_t)(0x12143628), (0xau));
  /* 12112a10 mov dword ptr [0x12143660], 2 */
  w32((uint32_t)(0x12143660), (0x2u));
  /* 12112a1a mov dword ptr [0x12143680], 1 */
  w32((uint32_t)(0x12143680), (0x1u));
  /* 12112a24 jmp 0x12112b07 */
  goto L_12112b07;
L_12112a29:;
  /* 12112a29 mov esi, esp */
  ESI = (ESP);
  /* 12112a2b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112a30 push 3 */
  push32((uint32_t)(0x3u));
  /* 12112a32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112a34 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112a3au);
  /* 12112a3a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112a3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112a3f call 0x12116a60 */
  push32(0x12112a44u); f_12116a60();
  /* 12112a44 mov esi, esp */
  ESI = (ESP);
  /* 12112a46 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12112a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12112a4f call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112a55u);
  /* 12112a55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112a58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112a5a call 0x12116a60 */
  push32(0x12112a5fu); f_12116a60();
  /* 12112a5f mov esi, esp */
  ESI = (ESP);
  /* 12112a61 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112a66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12112a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112a6a call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112a70u);
  /* 12112a70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112a75 call 0x12116a60 */
  push32(0x12112a7au); f_12116a60();
  /* 12112a7a mov esi, esp */
  ESI = (ESP);
  /* 12112a7c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112a85 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112a8bu);
  /* 12112a8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112a8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112a90 call 0x12116a60 */
  push32(0x12112a95u); f_12116a60();
  /* 12112a95 mov esi, esp */
  ESI = (ESP);
  /* 12112a97 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112a9c push 5 */
  push32((uint32_t)(0x5u));
  /* 12112a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12112aa0 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112aa6u);
  /* 12112aa6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112aa9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112aab call 0x12116a60 */
  push32(0x12112ab0u); f_12116a60();
  /* 12112ab0 mov esi, esp */
  ESI = (ESP);
  /* 12112ab2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112ab7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12112ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112abb call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112ac1u);
  /* 12112ac1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112ac4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112ac6 call 0x12116a60 */
  push32(0x12112acbu); f_12116a60();
  /* 12112acb mov dword ptr [0x12143548], 3 */
  w32((uint32_t)(0x12143548), (0x3u));
  /* 12112ad5 mov dword ptr [0x12143598], 3 */
  w32((uint32_t)(0x12143598), (0x3u));
  /* 12112adf mov dword ptr [0x121435d8], 0xe */
  w32((uint32_t)(0x121435d8), (0xeu));
  /* 12112ae9 mov dword ptr [0x12143628], 0xf */
  w32((uint32_t)(0x12143628), (0xfu));
  /* 12112af3 mov dword ptr [0x12143660], 2 */
  w32((uint32_t)(0x12143660), (0x2u));
  /* 12112afd mov dword ptr [0x12143680], 2 */
  w32((uint32_t)(0x12143680), (0x2u));
L_12112b07:;
  /* 12112b07 mov esi, esp */
  ESI = (ESP);
  /* 12112b09 push 3 */
  push32((uint32_t)(0x3u));
  /* 12112b0b call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x12112b11u);
  /* 12112b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112b14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112b16 call 0x12116a60 */
  push32(0x12112b1bu); f_12116a60();
  /* 12112b1b mov esi, esp */
  ESI = (ESP);
  /* 12112b1d push 4 */
  push32((uint32_t)(0x4u));
  /* 12112b1f call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x12112b25u);
  /* 12112b25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112b28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112b2a call 0x12116a60 */
  push32(0x12112b2fu); f_12116a60();
  /* 12112b2f mov esi, esp */
  ESI = (ESP);
  /* 12112b31 push 0x1213e5b0 */
  push32((uint32_t)(0x1213e5b0u));
  /* 12112b36 push 0x1213e2d0 */
  push32((uint32_t)(0x1213e2d0u));
  /* 12112b3b call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112b41u);
  /* 12112b41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112b44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112b46 call 0x12116a60 */
  push32(0x12112b4bu); f_12116a60();
  /* 12112b4b mov esi, esp */
  ESI = (ESP);
  /* 12112b4d push 0x1213e5a4 */
  push32((uint32_t)(0x1213e5a4u));
  /* 12112b52 push 0x1213e308 */
  push32((uint32_t)(0x1213e308u));
  /* 12112b57 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112b5du);
  /* 12112b5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112b60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112b62 call 0x12116a60 */
  push32(0x12112b67u); f_12116a60();
  /* 12112b67 mov esi, esp */
  ESI = (ESP);
  /* 12112b69 push 0x1213e598 */
  push32((uint32_t)(0x1213e598u));
  /* 12112b6e push 0x1213e308 */
  push32((uint32_t)(0x1213e308u));
  /* 12112b73 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112b79u);
  /* 12112b79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112b7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112b7e call 0x12116a60 */
  push32(0x12112b83u); f_12116a60();
  /* 12112b83 mov esi, esp */
  ESI = (ESP);
  /* 12112b85 push 0x1213e58c */
  push32((uint32_t)(0x1213e58cu));
  /* 12112b8a push 0x1213e308 */
  push32((uint32_t)(0x1213e308u));
  /* 12112b8f call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112b95u);
  /* 12112b95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112b98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112b9a call 0x12116a60 */
  push32(0x12112b9fu); f_12116a60();
  /* 12112b9f mov esi, esp */
  ESI = (ESP);
  /* 12112ba1 push 0x1213e584 */
  push32((uint32_t)(0x1213e584u));
  /* 12112ba6 push 0x1213e308 */
  push32((uint32_t)(0x1213e308u));
  /* 12112bab call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112bb1u);
  /* 12112bb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112bb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112bb6 call 0x12116a60 */
  push32(0x12112bbbu); f_12116a60();
  /* 12112bbb mov esi, esp */
  ESI = (ESP);
  /* 12112bbd push 0x1213e574 */
  push32((uint32_t)(0x1213e574u));
  /* 12112bc2 push 0x1213e308 */
  push32((uint32_t)(0x1213e308u));
  /* 12112bc7 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112bcdu);
  /* 12112bcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112bd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112bd2 call 0x12116a60 */
  push32(0x12112bd7u); f_12116a60();
  /* 12112bd7 mov esi, esp */
  ESI = (ESP);
  /* 12112bd9 push 0x1213e564 */
  push32((uint32_t)(0x1213e564u));
  /* 12112bde push 0x1213e308 */
  push32((uint32_t)(0x1213e308u));
  /* 12112be3 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112be9u);
  /* 12112be9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112bec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112bee call 0x12116a60 */
  push32(0x12112bf3u); f_12116a60();
  /* 12112bf3 mov esi, esp */
  ESI = (ESP);
  /* 12112bf5 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12112bfa push 1 */
  push32((uint32_t)(0x1u));
  /* 12112bfc call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12112c02u);
  /* 12112c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112c05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112c07 call 0x12116a60 */
  push32(0x12112c0cu); f_12116a60();
  /* 12112c0c mov esi, esp */
  ESI = (ESP);
  /* 12112c0e push 0x11f8 */
  push32((uint32_t)(0x11f8u));
  /* 12112c13 push 2 */
  push32((uint32_t)(0x2u));
  /* 12112c15 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12112c1bu);
  /* 12112c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112c1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112c20 call 0x12116a60 */
  push32(0x12112c25u); f_12116a60();
  /* 12112c25 mov esi, esp */
  ESI = (ESP);
  /* 12112c27 push 0x23f0 */
  push32((uint32_t)(0x23f0u));
  /* 12112c2c push 3 */
  push32((uint32_t)(0x3u));
  /* 12112c2e call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12112c34u);
  /* 12112c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112c37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112c39 call 0x12116a60 */
  push32(0x12112c3eu); f_12116a60();
  /* 12112c3e mov esi, esp */
  ESI = (ESP);
  /* 12112c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112c42 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12112c48u);
  /* 12112c48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112c4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112c4d call 0x12116a60 */
  push32(0x12112c52u); f_12116a60();
  /* 12112c52 mov ecx, 5 */
  ECX = (0x5u);
  /* 12112c57 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12112c59 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12112c5c imul ecx, ecx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x8fcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12112c62 mov esi, esp */
  ESI = (ESP);
  /* 12112c64 push ecx */
  push32((uint32_t)(ECX));
  /* 12112c65 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12112c67 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12112c6du);
  /* 12112c6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112c70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112c72 call 0x12116a60 */
  push32(0x12112c77u); f_12116a60();
  /* 12112c77 mov esi, esp */
  ESI = (ESP);
  /* 12112c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112c7b call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12112c81u);
  /* 12112c81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112c84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112c86 call 0x12116a60 */
  push32(0x12112c8bu); f_12116a60();
  /* 12112c8b mov edx, 6 */
  EDX = (0x6u);
  /* 12112c90 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12112c92 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12112c94 imul edx, edx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x8fcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12112c9a mov esi, esp */
  ESI = (ESP);
  /* 12112c9c push edx */
  push32((uint32_t)(EDX));
  /* 12112c9d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12112c9f call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12112ca5u);
  /* 12112ca5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112caa call 0x12116a60 */
  push32(0x12112cafu); f_12116a60();
  /* 12112caf mov esi, esp */
  ESI = (ESP);
  /* 12112cb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112cb3 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12112cb9u);
  /* 12112cb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112cbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112cbe call 0x12116a60 */
  push32(0x12112cc3u); f_12116a60();
  /* 12112cc3 mov ecx, 6 */
  ECX = (0x6u);
  /* 12112cc8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12112cca shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12112ccd imul ecx, ecx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x8fcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12112cd3 mov esi, esp */
  ESI = (ESP);
  /* 12112cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12112cd6 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12112cd8 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12112cdeu);
  /* 12112cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112ce1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112ce3 call 0x12116a60 */
  push32(0x12112ce8u); f_12116a60();
  /* 12112ce8 mov esi, esp */
  ESI = (ESP);
  /* 12112cea push 0 */
  push32((uint32_t)(0x0u));
  /* 12112cec call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12112cf2u);
  /* 12112cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112cf7 call 0x12116a60 */
  push32(0x12112cfcu); f_12116a60();
  /* 12112cfc mov edx, 6 */
  EDX = (0x6u);
  /* 12112d01 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12112d03 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12112d06 imul edx, edx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x8fcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12112d0c mov esi, esp */
  ESI = (ESP);
  /* 12112d0e push edx */
  push32((uint32_t)(EDX));
  /* 12112d0f push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12112d11 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12112d17u);
  /* 12112d17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112d1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112d1c call 0x12116a60 */
  push32(0x12112d21u); f_12116a60();
  /* 12112d21 mov esi, esp */
  ESI = (ESP);
  /* 12112d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112d25 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12112d2bu);
  /* 12112d2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112d2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112d30 call 0x12116a60 */
  push32(0x12112d35u); f_12116a60();
  /* 12112d35 mov ecx, 6 */
  ECX = (0x6u);
  /* 12112d3a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12112d3c shl ecx, 3 */
  ECX = (sh_shl((uint32_t)(ECX), (0x3u)&0x1f, 32));
  /* 12112d3f imul ecx, ecx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x8fcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12112d45 mov esi, esp */
  ESI = (ESP);
  /* 12112d47 push ecx */
  push32((uint32_t)(ECX));
  /* 12112d48 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12112d4a call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12112d50u);
  /* 12112d50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112d53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112d55 call 0x12116a60 */
  push32(0x12112d5au); f_12116a60();
  /* 12112d5a mov esi, esp */
  ESI = (ESP);
  /* 12112d5c push 0x1213e54c */
  push32((uint32_t)(0x1213e54cu));
  /* 12112d61 push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112d66 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112d6cu);
  /* 12112d6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112d6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112d71 call 0x12116a60 */
  push32(0x12112d76u); f_12116a60();
  /* 12112d76 mov esi, esp */
  ESI = (ESP);
  /* 12112d78 push 0x1213e544 */
  push32((uint32_t)(0x1213e544u));
  /* 12112d7d push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112d82 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112d88u);
  /* 12112d88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112d8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112d8d call 0x12116a60 */
  push32(0x12112d92u); f_12116a60();
  /* 12112d92 mov esi, esp */
  ESI = (ESP);
  /* 12112d94 push 0x1213e52c */
  push32((uint32_t)(0x1213e52cu));
  /* 12112d99 push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112d9e call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112da4u);
  /* 12112da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112da7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112da9 call 0x12116a60 */
  push32(0x12112daeu); f_12116a60();
  /* 12112dae mov esi, esp */
  ESI = (ESP);
  /* 12112db0 push 0x1213e520 */
  push32((uint32_t)(0x1213e520u));
  /* 12112db5 push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112dba call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112dc0u);
  /* 12112dc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112dc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112dc5 call 0x12116a60 */
  push32(0x12112dcau); f_12116a60();
  /* 12112dca mov esi, esp */
  ESI = (ESP);
  /* 12112dcc push 0x1213e514 */
  push32((uint32_t)(0x1213e514u));
  /* 12112dd1 push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112dd6 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112ddcu);
  /* 12112ddc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112ddf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112de1 call 0x12116a60 */
  push32(0x12112de6u); f_12116a60();
  /* 12112de6 mov esi, esp */
  ESI = (ESP);
  /* 12112de8 push 0x1213e508 */
  push32((uint32_t)(0x1213e508u));
  /* 12112ded push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112df2 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112df8u);
  /* 12112df8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112dfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112dfd call 0x12116a60 */
  push32(0x12112e02u); f_12116a60();
  /* 12112e02 mov esi, esp */
  ESI = (ESP);
  /* 12112e04 push 0x1213e4fc */
  push32((uint32_t)(0x1213e4fcu));
  /* 12112e09 push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112e0e call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112e14u);
  /* 12112e14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112e17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112e19 call 0x12116a60 */
  push32(0x12112e1eu); f_12116a60();
  /* 12112e1e mov esi, esp */
  ESI = (ESP);
  /* 12112e20 push 0x1213e4f0 */
  push32((uint32_t)(0x1213e4f0u));
  /* 12112e25 push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112e2a call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112e30u);
  /* 12112e30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112e33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112e35 call 0x12116a60 */
  push32(0x12112e3au); f_12116a60();
  /* 12112e3a mov esi, esp */
  ESI = (ESP);
  /* 12112e3c push 0x1213e4e4 */
  push32((uint32_t)(0x1213e4e4u));
  /* 12112e41 push 0x1213e378 */
  push32((uint32_t)(0x1213e378u));
  /* 12112e46 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112e4cu);
  /* 12112e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112e51 call 0x12116a60 */
  push32(0x12112e56u); f_12116a60();
  /* 12112e56 mov esi, esp */
  ESI = (ESP);
  /* 12112e58 push 0x1213e4cc */
  push32((uint32_t)(0x1213e4ccu));
  /* 12112e5d push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112e62 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112e68u);
  /* 12112e68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112e6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112e6d call 0x12116a60 */
  push32(0x12112e72u); f_12116a60();
  /* 12112e72 mov esi, esp */
  ESI = (ESP);
  /* 12112e74 push 0x1213e584 */
  push32((uint32_t)(0x1213e584u));
  /* 12112e79 push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112e7e call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112e84u);
  /* 12112e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112e87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112e89 call 0x12116a60 */
  push32(0x12112e8eu); f_12116a60();
  /* 12112e8e mov esi, esp */
  ESI = (ESP);
  /* 12112e90 push 0x1213e4b4 */
  push32((uint32_t)(0x1213e4b4u));
  /* 12112e95 push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112e9a call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112ea0u);
  /* 12112ea0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112ea3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112ea5 call 0x12116a60 */
  push32(0x12112eaau); f_12116a60();
  /* 12112eaa mov esi, esp */
  ESI = (ESP);
  /* 12112eac push 0x1213e4a8 */
  push32((uint32_t)(0x1213e4a8u));
  /* 12112eb1 push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112eb6 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112ebcu);
  /* 12112ebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112ebf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112ec1 call 0x12116a60 */
  push32(0x12112ec6u); f_12116a60();
  /* 12112ec6 mov esi, esp */
  ESI = (ESP);
  /* 12112ec8 push 0x1213e49c */
  push32((uint32_t)(0x1213e49cu));
  /* 12112ecd push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112ed2 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112ed8u);
  /* 12112ed8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112edb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112edd call 0x12116a60 */
  push32(0x12112ee2u); f_12116a60();
  /* 12112ee2 mov esi, esp */
  ESI = (ESP);
  /* 12112ee4 push 0x1213e490 */
  push32((uint32_t)(0x1213e490u));
  /* 12112ee9 push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112eee call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112ef4u);
  /* 12112ef4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112ef7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112ef9 call 0x12116a60 */
  push32(0x12112efeu); f_12116a60();
  /* 12112efe mov esi, esp */
  ESI = (ESP);
  /* 12112f00 push 0x1213e484 */
  push32((uint32_t)(0x1213e484u));
  /* 12112f05 push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112f0a call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112f10u);
  /* 12112f10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112f13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112f15 call 0x12116a60 */
  push32(0x12112f1au); f_12116a60();
  /* 12112f1a mov esi, esp */
  ESI = (ESP);
  /* 12112f1c push 0x1213e478 */
  push32((uint32_t)(0x1213e478u));
  /* 12112f21 push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112f26 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112f2cu);
  /* 12112f2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112f2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112f31 call 0x12116a60 */
  push32(0x12112f36u); f_12116a60();
  /* 12112f36 mov esi, esp */
  ESI = (ESP);
  /* 12112f38 push 0x1213e46c */
  push32((uint32_t)(0x1213e46cu));
  /* 12112f3d push 0x1213e36c */
  push32((uint32_t)(0x1213e36cu));
  /* 12112f42 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12112f48u);
  /* 12112f48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112f4d call 0x12116a60 */
  push32(0x12112f52u); f_12116a60();
  /* 12112f52 mov esi, esp */
  ESI = (ESP);
  /* 12112f54 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112f59 push 3 */
  push32((uint32_t)(0x3u));
  /* 12112f5b push 1 */
  push32((uint32_t)(0x1u));
  /* 12112f5d call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112f63u);
  /* 12112f63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112f66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112f68 call 0x12116a60 */
  push32(0x12112f6du); f_12116a60();
  /* 12112f6d mov esi, esp */
  ESI = (ESP);
  /* 12112f6f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112f74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112f76 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112f78 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112f7eu);
  /* 12112f7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112f81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112f83 call 0x12116a60 */
  push32(0x12112f88u); f_12116a60();
  /* 12112f88 mov esi, esp */
  ESI = (ESP);
  /* 12112f8a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112f8f push 2 */
  push32((uint32_t)(0x2u));
  /* 12112f91 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112f93 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112f99u);
  /* 12112f99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112f9e call 0x12116a60 */
  push32(0x12112fa3u); f_12116a60();
  /* 12112fa3 mov esi, esp */
  ESI = (ESP);
  /* 12112fa5 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112faa push 1 */
  push32((uint32_t)(0x1u));
  /* 12112fac push 1 */
  push32((uint32_t)(0x1u));
  /* 12112fae call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112fb4u);
  /* 12112fb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112fb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112fb9 call 0x12116a60 */
  push32(0x12112fbeu); f_12116a60();
  /* 12112fbe mov esi, esp */
  ESI = (ESP);
  /* 12112fc0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112fc5 push 5 */
  push32((uint32_t)(0x5u));
  /* 12112fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112fc9 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112fcfu);
  /* 12112fcf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112fd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112fd4 call 0x12116a60 */
  push32(0x12112fd9u); f_12116a60();
  /* 12112fd9 mov esi, esp */
  ESI = (ESP);
  /* 12112fdb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12112fe0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12112fe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12112fe4 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12112feau);
  /* 12112fea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12112fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12112fef call 0x12116a60 */
  push32(0x12112ff4u); f_12116a60();
  /* 12112ff4 mov esi, esp */
  ESI = (ESP);
  /* 12112ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12112ff8 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12112ffeu);
  /* 12112ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113003 call 0x12116a60 */
  push32(0x12113008u); f_12116a60();
  /* 12113008 mov esi, esp */
  ESI = (ESP);
  /* 1211300a push eax */
  push32((uint32_t)(EAX));
  /* 1211300b push 2 */
  push32((uint32_t)(0x2u));
  /* 1211300d push 1 */
  push32((uint32_t)(0x1u));
  /* 1211300f push 1 */
  push32((uint32_t)(0x1u));
  /* 12113011 push 0x1213e460 */
  push32((uint32_t)(0x1213e460u));
  /* 12113016 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113018 call dword ptr [0x121464a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a4))), 0x1211301eu);
  /* 1211301e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113021 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113023 call 0x12116a60 */
  push32(0x12113028u); f_12116a60();
  /* 12113028 mov esi, esp */
  ESI = (ESP);
  /* 1211302a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1211302f push 3 */
  push32((uint32_t)(0x3u));
  /* 12113031 push 2 */
  push32((uint32_t)(0x2u));
  /* 12113033 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12113039u);
  /* 12113039 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211303c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211303e call 0x12116a60 */
  push32(0x12113043u); f_12116a60();
  /* 12113043 mov esi, esp */
  ESI = (ESP);
  /* 12113045 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1211304a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211304c push 2 */
  push32((uint32_t)(0x2u));
  /* 1211304e call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x12113054u);
  /* 12113054 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113057 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113059 call 0x12116a60 */
  push32(0x1211305eu); f_12116a60();
  /* 1211305e mov esi, esp */
  ESI = (ESP);
  /* 12113060 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12113065 push 2 */
  push32((uint32_t)(0x2u));
  /* 12113067 push 2 */
  push32((uint32_t)(0x2u));
  /* 12113069 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x1211306fu);
  /* 1211306f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113072 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113074 call 0x12116a60 */
  push32(0x12113079u); f_12116a60();
  /* 12113079 mov esi, esp */
  ESI = (ESP);
  /* 1211307b push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12113080 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113082 push 2 */
  push32((uint32_t)(0x2u));
  /* 12113084 call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x1211308au);
  /* 1211308a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211308d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211308f call 0x12116a60 */
  push32(0x12113094u); f_12116a60();
  /* 12113094 mov esi, esp */
  ESI = (ESP);
  /* 12113096 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1211309b push 5 */
  push32((uint32_t)(0x5u));
  /* 1211309d push 2 */
  push32((uint32_t)(0x2u));
  /* 1211309f call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121130a5u);
  /* 121130a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121130a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121130aa call 0x12116a60 */
  push32(0x121130afu); f_12116a60();
  /* 121130af mov esi, esp */
  ESI = (ESP);
  /* 121130b1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 121130b6 push 4 */
  push32((uint32_t)(0x4u));
  /* 121130b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121130ba call dword ptr [0x12146488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146488))), 0x121130c0u);
  /* 121130c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121130c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121130c5 call 0x12116a60 */
  push32(0x121130cau); f_12116a60();
  /* 121130ca mov esi, esp */
  ESI = (ESP);
  /* 121130cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121130ce call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x121130d4u);
  /* 121130d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121130d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121130d9 call 0x12116a60 */
  push32(0x121130deu); f_12116a60();
  /* 121130de mov esi, esp */
  ESI = (ESP);
  /* 121130e0 push eax */
  push32((uint32_t)(EAX));
  /* 121130e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 121130e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121130e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 121130e7 push 0x1213e454 */
  push32((uint32_t)(0x1213e454u));
  /* 121130ec push 2 */
  push32((uint32_t)(0x2u));
  /* 121130ee call dword ptr [0x121464a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a4))), 0x121130f4u);
  /* 121130f4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121130f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121130f9 call 0x12116a60 */
  push32(0x121130feu); f_12116a60();
L_121130fe:;
  /* 121130fe mov esi, esp */
  ESI = (ESP);
  /* 12113100 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12113102 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12113108u);
  /* 12113108 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211310b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211310d call 0x12116a60 */
  push32(0x12113112u); f_12116a60();
  /* 12113112 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113117 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113119 je 0x12113137 */
  if (C.zf) goto L_12113137;
  /* 1211311b mov esi, esp */
  ESI = (ESP);
  /* 1211311d push 0x1213e448 */
  push32((uint32_t)(0x1213e448u));
  /* 12113122 push 0x1213e310 */
  push32((uint32_t)(0x1213e310u));
  /* 12113127 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x1211312du);
  /* 1211312d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113130 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113132 call 0x12116a60 */
  push32(0x12113137u); f_12116a60();
L_12113137:;
  /* 12113137 mov esi, esp */
  ESI = (ESP);
  /* 12113139 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1211313b call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12113141u);
  /* 12113141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113144 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113146 call 0x12116a60 */
  push32(0x1211314bu); f_12116a60();
  /* 1211314b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113150 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113152 je 0x12113170 */
  if (C.zf) goto L_12113170;
  /* 12113154 mov esi, esp */
  ESI = (ESP);
  /* 12113156 push 0x1213e43c */
  push32((uint32_t)(0x1213e43cu));
  /* 1211315b push 0x1213e310 */
  push32((uint32_t)(0x1213e310u));
  /* 12113160 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x12113166u);
  /* 12113166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211316b call 0x12116a60 */
  push32(0x12113170u); f_12116a60();
L_12113170:;
  /* 12113170 mov esi, esp */
  ESI = (ESP);
  /* 12113172 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12113174 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x1211317au);
  /* 1211317a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211317d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211317f call 0x12116a60 */
  push32(0x12113184u); f_12116a60();
  /* 12113184 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211318b je 0x121131a9 */
  if (C.zf) goto L_121131a9;
  /* 1211318d mov esi, esp */
  ESI = (ESP);
  /* 1211318f push 0x1213e430 */
  push32((uint32_t)(0x1213e430u));
  /* 12113194 push 0x1213e310 */
  push32((uint32_t)(0x1213e310u));
  /* 12113199 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x1211319fu);
  /* 1211319f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121131a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121131a4 call 0x12116a60 */
  push32(0x121131a9u); f_12116a60();
L_121131a9:;
  /* 121131a9 mov esi, esp */
  ESI = (ESP);
  /* 121131ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 121131ad call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x121131b3u);
  /* 121131b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121131b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121131b8 call 0x12116a60 */
  push32(0x121131bdu); f_12116a60();
  /* 121131bd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121131c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121131c4 je 0x121131e2 */
  if (C.zf) goto L_121131e2;
  /* 121131c6 mov esi, esp */
  ESI = (ESP);
  /* 121131c8 push 0x1213e424 */
  push32((uint32_t)(0x1213e424u));
  /* 121131cd push 0x1213e310 */
  push32((uint32_t)(0x1213e310u));
  /* 121131d2 call dword ptr [0x1214649c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214649c))), 0x121131d8u);
  /* 121131d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121131db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121131dd call 0x12116a60 */
  push32(0x121131e2u); f_12116a60();
L_121131e2:;
  /* 121131e2 mov esi, esp */
  ESI = (ESP);
  /* 121131e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121131e6 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x121131ecu);
  /* 121131ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121131ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121131f1 call 0x12116a60 */
  push32(0x121131f6u); f_12116a60();
  /* 121131f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121131fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121131fd je 0x12113249 */
  if (C.zf) goto L_12113249;
  /* 121131ff mov esi, esp */
  ESI = (ESP);
  /* 12113201 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12113203 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113209u);
  /* 12113209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211320c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211320e call 0x12116a60 */
  push32(0x12113213u); f_12116a60();
  /* 12113213 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211321a je 0x12113249 */
  if (C.zf) goto L_12113249;
  /* 1211321c mov esi, esp */
  ESI = (ESP);
  /* 1211321e push 0 */
  push32((uint32_t)(0x0u));
  /* 12113220 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12113222 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113228u);
  /* 12113228 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211322b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211322d call 0x12116a60 */
  push32(0x12113232u); f_12116a60();
  /* 12113232 mov esi, esp */
  ESI = (ESP);
  /* 12113234 push 0x1213e418 */
  push32((uint32_t)(0x1213e418u));
  /* 12113239 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x1211323fu);
  /* 1211323f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113242 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113244 call 0x12116a60 */
  push32(0x12113249u); f_12116a60();
L_12113249:;
  /* 12113249 mov esi, esp */
  ESI = (ESP);
  /* 1211324b push 2 */
  push32((uint32_t)(0x2u));
  /* 1211324d call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12113253u);
  /* 12113253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113256 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113258 call 0x12116a60 */
  push32(0x1211325du); f_12116a60();
  /* 1211325d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113264 je 0x121132d8 */
  if (C.zf) goto L_121132d8;
  /* 12113266 mov esi, esp */
  ESI = (ESP);
  /* 12113268 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 1211326a call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113270u);
  /* 12113270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113273 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113275 call 0x12116a60 */
  push32(0x1211327au); f_12116a60();
  /* 1211327a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211327f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113281 je 0x121132d8 */
  if (C.zf) goto L_121132d8;
  /* 12113283 mov esi, esp */
  ESI = (ESP);
  /* 12113285 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113287 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12113289 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x1211328fu);
  /* 1211328f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113294 call 0x12116a60 */
  push32(0x12113299u); f_12116a60();
  /* 12113299 mov esi, esp */
  ESI = (ESP);
  /* 1211329b push 0x1213e40c */
  push32((uint32_t)(0x1213e40cu));
  /* 121132a0 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x121132a6u);
  /* 121132a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121132a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121132ab call 0x12116a60 */
  push32(0x121132b0u); f_12116a60();
  /* 121132b0 mov esi, esp */
  ESI = (ESP);
  /* 121132b2 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 121132b4 call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x121132bau);
  /* 121132ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121132bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121132bf call 0x12116a60 */
  push32(0x121132c4u); f_12116a60();
  /* 121132c4 mov esi, esp */
  ESI = (ESP);
  /* 121132c6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 121132c8 call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x121132ceu);
  /* 121132ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121132d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121132d3 call 0x12116a60 */
  push32(0x121132d8u); f_12116a60();
L_121132d8:;
  /* 121132d8 mov esi, esp */
  ESI = (ESP);
  /* 121132da push 3 */
  push32((uint32_t)(0x3u));
  /* 121132dc call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x121132e2u);
  /* 121132e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121132e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121132e7 call 0x12116a60 */
  push32(0x121132ecu); f_12116a60();
  /* 121132ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121132f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121132f3 je 0x121133df */
  if (C.zf) goto L_121133df;
  /* 121132f9 mov esi, esp */
  ESI = (ESP);
  /* 121132fb push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 121132fd call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113303u);
  /* 12113303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113306 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113308 call 0x12116a60 */
  push32(0x1211330du); f_12116a60();
  /* 1211330d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113314 je 0x121133df */
  if (C.zf) goto L_121133df;
  /* 1211331a mov esi, esp */
  ESI = (ESP);
  /* 1211331c push 0 */
  push32((uint32_t)(0x0u));
  /* 1211331e push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12113320 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113326u);
  /* 12113326 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113329 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211332b call 0x12116a60 */
  push32(0x12113330u); f_12116a60();
  /* 12113330 mov esi, esp */
  ESI = (ESP);
  /* 12113332 push 0x1213e400 */
  push32((uint32_t)(0x1213e400u));
  /* 12113337 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x1211333du);
  /* 1211333d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113340 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113342 call 0x12116a60 */
  push32(0x12113347u); f_12116a60();
  /* 12113347 mov esi, esp */
  ESI = (ESP);
  /* 12113349 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1211334b call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x12113351u);
  /* 12113351 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113356 call 0x12116a60 */
  push32(0x1211335bu); f_12116a60();
  /* 1211335b mov esi, esp */
  ESI = (ESP);
  /* 1211335d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211335f call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12113365u);
  /* 12113365 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211336a call 0x12116a60 */
  push32(0x1211336fu); f_12116a60();
  /* 1211336f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113371 jne 0x121133df */
  if (!C.zf) goto L_121133df;
  /* 12113373 mov esi, esp */
  ESI = (ESP);
  /* 12113375 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113377 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113379 push 0x12143608 */
  push32((uint32_t)(0x12143608u));
  /* 1211337e call dword ptr [0x121464b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b0))), 0x12113384u);
  /* 12113384 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113387 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113389 call 0x12116a60 */
  push32(0x1211338eu); f_12116a60();
  /* 1211338e mov esi, esp */
  ESI = (ESP);
  /* 12113390 push 2 */
  push32((uint32_t)(0x2u));
  /* 12113392 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113394 push 0x12143610 */
  push32((uint32_t)(0x12143610u));
  /* 12113399 call dword ptr [0x121464b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b0))), 0x1211339fu);
  /* 1211339f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121133a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121133a4 call 0x12116a60 */
  push32(0x121133a9u); f_12116a60();
  /* 121133a9 mov esi, esp */
  ESI = (ESP);
  /* 121133ab push 3 */
  push32((uint32_t)(0x3u));
  /* 121133ad push 1 */
  push32((uint32_t)(0x1u));
  /* 121133af push 0x12143618 */
  push32((uint32_t)(0x12143618u));
  /* 121133b4 call dword ptr [0x121464b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b0))), 0x121133bau);
  /* 121133ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121133bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121133bf call 0x12116a60 */
  push32(0x121133c4u); f_12116a60();
  /* 121133c4 mov esi, esp */
  ESI = (ESP);
  /* 121133c6 push 4 */
  push32((uint32_t)(0x4u));
  /* 121133c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121133ca push 0x12143620 */
  push32((uint32_t)(0x12143620u));
  /* 121133cf call dword ptr [0x121464b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b0))), 0x121133d5u);
  /* 121133d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121133d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121133da call 0x12116a60 */
  push32(0x121133dfu); f_12116a60();
L_121133df:;
  /* 121133df mov esi, esp */
  ESI = (ESP);
  /* 121133e1 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 121133e3 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121133e9u);
  /* 121133e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121133ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121133ee call 0x12116a60 */
  push32(0x121133f3u); f_12116a60();
  /* 121133f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121133f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121133fa je 0x1211348f */
  if (C.zf) goto L_1211348f;
  /* 12113400 mov esi, esp */
  ESI = (ESP);
  /* 12113402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113404 push 0x12143678 */
  push32((uint32_t)(0x12143678u));
  /* 12113409 call dword ptr [0x121464b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b4))), 0x1211340fu);
  /* 1211340f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113412 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113414 call 0x12116a60 */
  push32(0x12113419u); f_12116a60();
  /* 12113419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211341b jg 0x1211343a */
  if ((!C.zf&&C.sf==C.of)) goto L_1211343a;
  /* 1211341d mov esi, esp */
  ESI = (ESP);
  /* 1211341f push 0 */
  push32((uint32_t)(0x0u));
  /* 12113421 push 0x121436e8 */
  push32((uint32_t)(0x121436e8u));
  /* 12113426 call dword ptr [0x121464b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b4))), 0x1211342cu);
  /* 1211342c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211342f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113431 call 0x12116a60 */
  push32(0x12113436u); f_12116a60();
  /* 12113436 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113438 jle 0x1211348f */
  if ((C.zf||C.sf!=C.of)) goto L_1211348f;
L_1211343a:;
  /* 1211343a mov esi, esp */
  ESI = (ESP);
  /* 1211343c push 0 */
  push32((uint32_t)(0x0u));
  /* 1211343e push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12113440 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113446u);
  /* 12113446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113449 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211344b call 0x12116a60 */
  push32(0x12113450u); f_12116a60();
  /* 12113450 mov esi, esp */
  ESI = (ESP);
  /* 12113452 push 0x1213e40c */
  push32((uint32_t)(0x1213e40cu));
  /* 12113457 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x1211345du);
  /* 1211345d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113460 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113462 call 0x12116a60 */
  push32(0x12113467u); f_12116a60();
  /* 12113467 mov esi, esp */
  ESI = (ESP);
  /* 12113469 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1211346b call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x12113471u);
  /* 12113471 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113474 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113476 call 0x12116a60 */
  push32(0x1211347bu); f_12116a60();
  /* 1211347b mov esi, esp */
  ESI = (ESP);
  /* 1211347d push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1211347f call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x12113485u);
  /* 12113485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211348a call 0x12116a60 */
  push32(0x1211348fu); f_12116a60();
L_1211348f:;
  /* 1211348f mov esi, esp */
  ESI = (ESP);
  /* 12113491 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113493 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113499u);
  /* 12113499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211349c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211349e call 0x12116a60 */
  push32(0x121134a3u); f_12116a60();
  /* 121134a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121134a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121134aa jne 0x12113535 */
  if (!C.zf) goto L_12113535;
  /* 121134b0 mov esi, esp */
  ESI = (ESP);
  /* 121134b2 push 0x121434d8 */
  push32((uint32_t)(0x121434d8u));
  /* 121134b7 push 0x12143668 */
  push32((uint32_t)(0x12143668u));
  /* 121134bc call dword ptr [0x121464ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464ac))), 0x121134c2u);
  /* 121134c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121134c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121134c7 call 0x12116a60 */
  push32(0x121134ccu); f_12116a60();
  /* 121134cc mov esi, eax */
  ESI = (EAX);
  /* 121134ce mov edi, esp */
  EDI = (ESP);
  /* 121134d0 push 0x121434d8 */
  push32((uint32_t)(0x121434d8u));
  /* 121134d5 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121134dbu);
  /* 121134db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121134de cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121134e0 call 0x12116a60 */
  push32(0x121134e5u); f_12116a60();
  /* 121134e5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121134e7 jge 0x12113535 */
  if ((C.sf==C.of)) goto L_12113535;
  /* 121134e9 mov esi, esp */
  ESI = (ESP);
  /* 121134eb push 1 */
  push32((uint32_t)(0x1u));
  /* 121134ed push 1 */
  push32((uint32_t)(0x1u));
  /* 121134ef call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121134f5u);
  /* 121134f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121134f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121134fa call 0x12116a60 */
  push32(0x121134ffu); f_12116a60();
  /* 121134ff mov esi, esp */
  ESI = (ESP);
  /* 12113501 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113503 push 0x121434d8 */
  push32((uint32_t)(0x121434d8u));
  /* 12113508 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x1211350eu);
  /* 1211350e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113513 call 0x12116a60 */
  push32(0x12113518u); f_12116a60();
  /* 12113518 mov esi, esp */
  ESI = (ESP);
  /* 1211351a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211351c push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1211351e push 0x12143700 */
  push32((uint32_t)(0x12143700u));
  /* 12113523 push 4 */
  push32((uint32_t)(0x4u));
  /* 12113525 call dword ptr [0x121464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464c0))), 0x1211352bu);
  /* 1211352b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211352e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113530 call 0x12116a60 */
  push32(0x12113535u); f_12116a60();
L_12113535:;
  /* 12113535 mov esi, esp */
  ESI = (ESP);
  /* 12113537 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113539 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x1211353fu);
  /* 1211353f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113542 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113544 call 0x12116a60 */
  push32(0x12113549u); f_12116a60();
  /* 12113549 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211354e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113550 je 0x121135d9 */
  if (C.zf) goto L_121135d9;
  /* 12113556 mov esi, esp */
  ESI = (ESP);
  /* 12113558 push 0x121434d8 */
  push32((uint32_t)(0x121434d8u));
  /* 1211355d push 0x12143668 */
  push32((uint32_t)(0x12143668u));
  /* 12113562 call dword ptr [0x121464ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464ac))), 0x12113568u);
  /* 12113568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211356b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211356d call 0x12116a60 */
  push32(0x12113572u); f_12116a60();
  /* 12113572 mov esi, eax */
  ESI = (EAX);
  /* 12113574 mov edi, esp */
  EDI = (ESP);
  /* 12113576 push 0x121434d8 */
  push32((uint32_t)(0x121434d8u));
  /* 1211357b call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12113581u);
  /* 12113581 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113584 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113586 call 0x12116a60 */
  push32(0x1211358bu); f_12116a60();
  /* 1211358b cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211358d jne 0x121135d9 */
  if (!C.zf) goto L_121135d9;
  /* 1211358f mov esi, esp */
  ESI = (ESP);
  /* 12113591 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113593 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113595 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x1211359bu);
  /* 1211359b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211359e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121135a0 call 0x12116a60 */
  push32(0x121135a5u); f_12116a60();
  /* 121135a5 mov esi, esp */
  ESI = (ESP);
  /* 121135a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121135a9 push 0x121434d8 */
  push32((uint32_t)(0x121434d8u));
  /* 121135ae call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x121135b4u);
  /* 121135b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121135b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121135b9 call 0x12116a60 */
  push32(0x121135beu); f_12116a60();
  /* 121135be mov esi, esp */
  ESI = (ESP);
  /* 121135c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121135c2 push 0x121436f8 */
  push32((uint32_t)(0x121436f8u));
  /* 121135c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 121135c9 call dword ptr [0x12146484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146484))), 0x121135cfu);
  /* 121135cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121135d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121135d4 call 0x12116a60 */
  push32(0x121135d9u); f_12116a60();
L_121135d9:;
  /* 121135d9 mov esi, esp */
  ESI = (ESP);
  /* 121135db push 2 */
  push32((uint32_t)(0x2u));
  /* 121135dd call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121135e3u);
  /* 121135e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121135e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121135e8 call 0x12116a60 */
  push32(0x121135edu); f_12116a60();
  /* 121135ed and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121135f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121135f4 je 0x121136e9 */
  if (C.zf) goto L_121136e9;
  /* 121135fa mov esi, esp */
  ESI = (ESP);
  /* 121135fc push 0x121434d8 */
  push32((uint32_t)(0x121434d8u));
  /* 12113601 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12113607u);
  /* 12113607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211360a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211360c call 0x12116a60 */
  push32(0x12113611u); f_12116a60();
  /* 12113611 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113613 jne 0x121136e9 */
  if (!C.zf) goto L_121136e9;
  /* 12113619 mov esi, esp */
  ESI = (ESP);
  /* 1211361b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211361d push 0x12143668 */
  push32((uint32_t)(0x12143668u));
  /* 12113622 call dword ptr [0x121464b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b4))), 0x12113628u);
  /* 12113628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211362b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211362d call 0x12116a60 */
  push32(0x12113632u); f_12116a60();
  /* 12113632 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113634 jle 0x121136e9 */
  if ((C.zf||C.sf!=C.of)) goto L_121136e9;
  /* 1211363a mov esi, esp */
  ESI = (ESP);
  /* 1211363c push 0 */
  push32((uint32_t)(0x0u));
  /* 1211363e push 2 */
  push32((uint32_t)(0x2u));
  /* 12113640 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113646u);
  /* 12113646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211364b call 0x12116a60 */
  push32(0x12113650u); f_12116a60();
  /* 12113650 mov esi, esp */
  ESI = (ESP);
  /* 12113652 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113654 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x1211365au);
  /* 1211365a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211365d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211365f call 0x12116a60 */
  push32(0x12113664u); f_12116a60();
  /* 12113664 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211366a mov edx, 0x4268 */
  EDX = (0x4268u);
  /* 1211366f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12113671 mov esi, esp */
  ESI = (ESP);
  /* 12113673 push edx */
  push32((uint32_t)(EDX));
  /* 12113674 push 0x1213e3f8 */
  push32((uint32_t)(0x1213e3f8u));
  /* 12113679 call dword ptr [0x121464b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b8))), 0x1211367fu);
  /* 1211367f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113682 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113684 call 0x12116a60 */
  push32(0x12113689u); f_12116a60();
  /* 12113689 mov esi, esp */
  ESI = (ESP);
  /* 1211368b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211368d call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12113693u);
  /* 12113693 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113696 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113698 call 0x12116a60 */
  push32(0x1211369du); f_12116a60();
  /* 1211369d imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121136a3 mov ecx, 0x4268 */
  ECX = (0x4268u);
  /* 121136a8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121136aa mov esi, esp */
  ESI = (ESP);
  /* 121136ac push ecx */
  push32((uint32_t)(ECX));
  /* 121136ad push 1 */
  push32((uint32_t)(0x1u));
  /* 121136af push 0 */
  push32((uint32_t)(0x0u));
  /* 121136b1 call dword ptr [0x121464c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464c8))), 0x121136b7u);
  /* 121136b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121136ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121136bc call 0x12116a60 */
  push32(0x121136c1u); f_12116a60();
  /* 121136c1 mov esi, esp */
  ESI = (ESP);
  /* 121136c3 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 121136c5 call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x121136cbu);
  /* 121136cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121136ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121136d0 call 0x12116a60 */
  push32(0x121136d5u); f_12116a60();
  /* 121136d5 mov esi, esp */
  ESI = (ESP);
  /* 121136d7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 121136d9 call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x121136dfu);
  /* 121136df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121136e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121136e4 call 0x12116a60 */
  push32(0x121136e9u); f_12116a60();
L_121136e9:;
  /* 121136e9 mov esi, esp */
  ESI = (ESP);
  /* 121136eb push 3 */
  push32((uint32_t)(0x3u));
  /* 121136ed call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121136f3u);
  /* 121136f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121136f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121136f8 call 0x12116a60 */
  push32(0x121136fdu); f_12116a60();
  /* 121136fd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113704 jne 0x12113792 */
  if (!C.zf) goto L_12113792;
  /* 1211370a mov esi, esp */
  ESI = (ESP);
  /* 1211370c push 0x121434d0 */
  push32((uint32_t)(0x121434d0u));
  /* 12113711 push 0x12143670 */
  push32((uint32_t)(0x12143670u));
  /* 12113716 call dword ptr [0x121464ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464ac))), 0x1211371cu);
  /* 1211371c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211371f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113721 call 0x12116a60 */
  push32(0x12113726u); f_12116a60();
  /* 12113726 mov esi, eax */
  ESI = (EAX);
  /* 12113728 mov edi, esp */
  EDI = (ESP);
  /* 1211372a push 0x121434d0 */
  push32((uint32_t)(0x121434d0u));
  /* 1211372f call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12113735u);
  /* 12113735 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113738 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211373a call 0x12116a60 */
  push32(0x1211373fu); f_12116a60();
  /* 1211373f cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113741 jge 0x12113792 */
  if ((C.sf==C.of)) goto L_12113792;
  /* 12113743 mov esi, esp */
  ESI = (ESP);
  /* 12113745 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113747 push 3 */
  push32((uint32_t)(0x3u));
  /* 12113749 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x1211374fu);
  /* 1211374f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113752 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113754 call 0x12116a60 */
  push32(0x12113759u); f_12116a60();
  /* 12113759 mov esi, esp */
  ESI = (ESP);
  /* 1211375b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211375d push 0x121434d0 */
  push32((uint32_t)(0x121434d0u));
  /* 12113762 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12113768u);
  /* 12113768 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211376b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211376d call 0x12116a60 */
  push32(0x12113772u); f_12116a60();
  /* 12113772 mov esi, esp */
  ESI = (ESP);
  /* 12113774 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113776 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 1211377b push 0x12143710 */
  push32((uint32_t)(0x12143710u));
  /* 12113780 push 4 */
  push32((uint32_t)(0x4u));
  /* 12113782 call dword ptr [0x121464c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464c0))), 0x12113788u);
  /* 12113788 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211378b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211378d call 0x12116a60 */
  push32(0x12113792u); f_12116a60();
L_12113792:;
  /* 12113792 mov esi, esp */
  ESI = (ESP);
  /* 12113794 push 3 */
  push32((uint32_t)(0x3u));
  /* 12113796 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x1211379cu);
  /* 1211379c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211379f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121137a1 call 0x12116a60 */
  push32(0x121137a6u); f_12116a60();
  /* 121137a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121137ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121137ad je 0x12113836 */
  if (C.zf) goto L_12113836;
  /* 121137b3 mov esi, esp */
  ESI = (ESP);
  /* 121137b5 push 0x121434d0 */
  push32((uint32_t)(0x121434d0u));
  /* 121137ba push 0x12143670 */
  push32((uint32_t)(0x12143670u));
  /* 121137bf call dword ptr [0x121464ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464ac))), 0x121137c5u);
  /* 121137c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121137c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121137ca call 0x12116a60 */
  push32(0x121137cfu); f_12116a60();
  /* 121137cf mov esi, eax */
  ESI = (EAX);
  /* 121137d1 mov edi, esp */
  EDI = (ESP);
  /* 121137d3 push 0x121434d0 */
  push32((uint32_t)(0x121434d0u));
  /* 121137d8 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121137deu);
  /* 121137de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121137e1 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121137e3 call 0x12116a60 */
  push32(0x121137e8u); f_12116a60();
  /* 121137e8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121137ea jne 0x12113836 */
  if (!C.zf) goto L_12113836;
  /* 121137ec mov esi, esp */
  ESI = (ESP);
  /* 121137ee push 0 */
  push32((uint32_t)(0x0u));
  /* 121137f0 push 3 */
  push32((uint32_t)(0x3u));
  /* 121137f2 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121137f8u);
  /* 121137f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121137fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121137fd call 0x12116a60 */
  push32(0x12113802u); f_12116a60();
  /* 12113802 mov esi, esp */
  ESI = (ESP);
  /* 12113804 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113806 push 0x121434d0 */
  push32((uint32_t)(0x121434d0u));
  /* 1211380b call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12113811u);
  /* 12113811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113816 call 0x12116a60 */
  push32(0x1211381bu); f_12116a60();
  /* 1211381b mov esi, esp */
  ESI = (ESP);
  /* 1211381d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211381f push 0x12143708 */
  push32((uint32_t)(0x12143708u));
  /* 12113824 push 4 */
  push32((uint32_t)(0x4u));
  /* 12113826 call dword ptr [0x12146484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146484))), 0x1211382cu);
  /* 1211382c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211382f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113831 call 0x12116a60 */
  push32(0x12113836u); f_12116a60();
L_12113836:;
  /* 12113836 mov esi, esp */
  ESI = (ESP);
  /* 12113838 push 4 */
  push32((uint32_t)(0x4u));
  /* 1211383a call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113840u);
  /* 12113840 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113843 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113845 call 0x12116a60 */
  push32(0x1211384au); f_12116a60();
  /* 1211384a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211384f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113851 je 0x12113946 */
  if (C.zf) goto L_12113946;
  /* 12113857 mov esi, esp */
  ESI = (ESP);
  /* 12113859 push 0x121434d0 */
  push32((uint32_t)(0x121434d0u));
  /* 1211385e call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12113864u);
  /* 12113864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113867 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113869 call 0x12116a60 */
  push32(0x1211386eu); f_12116a60();
  /* 1211386e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113870 jne 0x12113946 */
  if (!C.zf) goto L_12113946;
  /* 12113876 mov esi, esp */
  ESI = (ESP);
  /* 12113878 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211387a push 0x12143670 */
  push32((uint32_t)(0x12143670u));
  /* 1211387f call dword ptr [0x121464b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b4))), 0x12113885u);
  /* 12113885 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113888 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211388a call 0x12116a60 */
  push32(0x1211388fu); f_12116a60();
  /* 1211388f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113891 jle 0x12113946 */
  if ((C.zf||C.sf!=C.of)) goto L_12113946;
  /* 12113897 mov esi, esp */
  ESI = (ESP);
  /* 12113899 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211389b push 4 */
  push32((uint32_t)(0x4u));
  /* 1211389d call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121138a3u);
  /* 121138a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121138a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121138a8 call 0x12116a60 */
  push32(0x121138adu); f_12116a60();
  /* 121138ad mov esi, esp */
  ESI = (ESP);
  /* 121138af push 0 */
  push32((uint32_t)(0x0u));
  /* 121138b1 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x121138b7u);
  /* 121138b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121138ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121138bc call 0x12116a60 */
  push32(0x121138c1u); f_12116a60();
  /* 121138c1 imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121138c7 mov edx, 0x4e20 */
  EDX = (0x4e20u);
  /* 121138cc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121138ce mov esi, esp */
  ESI = (ESP);
  /* 121138d0 push edx */
  push32((uint32_t)(EDX));
  /* 121138d1 push 0x1213e3f8 */
  push32((uint32_t)(0x1213e3f8u));
  /* 121138d6 call dword ptr [0x121464b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464b8))), 0x121138dcu);
  /* 121138dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121138df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121138e1 call 0x12116a60 */
  push32(0x121138e6u); f_12116a60();
  /* 121138e6 mov esi, esp */
  ESI = (ESP);
  /* 121138e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121138ea call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x121138f0u);
  /* 121138f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121138f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121138f5 call 0x12116a60 */
  push32(0x121138fau); f_12116a60();
  /* 121138fa imul eax, eax, 0x7d0 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7d0u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12113900 mov ecx, 0x4e20 */
  ECX = (0x4e20u);
  /* 12113905 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12113907 mov esi, esp */
  ESI = (ESP);
  /* 12113909 push ecx */
  push32((uint32_t)(ECX));
  /* 1211390a push 1 */
  push32((uint32_t)(0x1u));
  /* 1211390c push 0 */
  push32((uint32_t)(0x0u));
  /* 1211390e call dword ptr [0x121464c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464c8))), 0x12113914u);
  /* 12113914 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113917 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113919 call 0x12116a60 */
  push32(0x1211391eu); f_12116a60();
  /* 1211391e mov esi, esp */
  ESI = (ESP);
  /* 12113920 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12113922 call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x12113928u);
  /* 12113928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211392b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211392d call 0x12116a60 */
  push32(0x12113932u); f_12116a60();
  /* 12113932 mov esi, esp */
  ESI = (ESP);
  /* 12113934 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12113936 call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x1211393cu);
  /* 1211393c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211393f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113941 call 0x12116a60 */
  push32(0x12113946u); f_12116a60();
L_12113946:;
  /* 12113946 mov esi, esp */
  ESI = (ESP);
  /* 12113948 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211394a call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113950u);
  /* 12113950 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113953 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113955 call 0x12116a60 */
  push32(0x1211395au); f_12116a60();
  /* 1211395a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211395f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113961 je 0x12113bf5 */
  if (C.zf) goto L_12113bf5;
  /* 12113967 mov esi, esp */
  ESI = (ESP);
  /* 12113969 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211396b call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113971u);
  /* 12113971 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113974 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113976 call 0x12116a60 */
  push32(0x1211397bu); f_12116a60();
  /* 1211397b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113982 je 0x121139dc */
  if (C.zf) goto L_121139dc;
  /* 12113984 mov esi, esp */
  ESI = (ESP);
  /* 12113986 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113988 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211398a call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113990u);
  /* 12113990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113993 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113995 call 0x12116a60 */
  push32(0x1211399au); f_12116a60();
  /* 1211399a mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121139a1 jmp 0x121139ac */
  goto L_121139ac;
L_121139a3:;
  /* 121139a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121139a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121139a9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121139ac:;
  /* 121139ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121139af cmp eax, dword ptr [0x12143548] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12143548))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121139b5 jge 0x121139dc */
  if ((C.sf==C.of)) goto L_121139dc;
  /* 121139b7 mov esi, esp */
  ESI = (ESP);
  /* 121139b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 121139bb push 0x12143460 */
  push32((uint32_t)(0x12143460u));
  /* 121139c0 push 0x121436b8 */
  push32((uint32_t)(0x121436b8u));
  /* 121139c5 push 0x12143488 */
  push32((uint32_t)(0x12143488u));
  /* 121139ca call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x121139d0u);
  /* 121139d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121139d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121139d5 call 0x12116a60 */
  push32(0x121139dau); f_12116a60();
  /* 121139da jmp 0x121139a3 */
  goto L_121139a3;
L_121139dc:;
  /* 121139dc mov esi, esp */
  ESI = (ESP);
  /* 121139de push 0xa */
  push32((uint32_t)(0xau));
  /* 121139e0 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121139e6u);
  /* 121139e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121139e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121139eb call 0x12116a60 */
  push32(0x121139f0u); f_12116a60();
  /* 121139f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121139f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121139f7 je 0x12113a48 */
  if (C.zf) goto L_12113a48;
  /* 121139f9 mov esi, esp */
  ESI = (ESP);
  /* 121139fb push 0x12143488 */
  push32((uint32_t)(0x12143488u));
  /* 12113a00 call dword ptr [0x121464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464c4))), 0x12113a06u);
  /* 12113a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113a0b call 0x12116a60 */
  push32(0x12113a10u); f_12116a60();
  /* 12113a10 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113a15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113a17 je 0x12113a48 */
  if (C.zf) goto L_12113a48;
  /* 12113a19 mov esi, esp */
  ESI = (ESP);
  /* 12113a1b push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12113a20 push 7 */
  push32((uint32_t)(0x7u));
  /* 12113a22 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12113a28u);
  /* 12113a28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113a2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113a2d call 0x12116a60 */
  push32(0x12113a32u); f_12116a60();
  /* 12113a32 mov esi, esp */
  ESI = (ESP);
  /* 12113a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113a36 push 0xa */
  push32((uint32_t)(0xau));
  /* 12113a38 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113a3eu);
  /* 12113a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113a41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113a43 call 0x12116a60 */
  push32(0x12113a48u); f_12116a60();
L_12113a48:;
  /* 12113a48 mov esi, esp */
  ESI = (ESP);
  /* 12113a4a push 0xb */
  push32((uint32_t)(0xbu));
  /* 12113a4c call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113a52u);
  /* 12113a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113a55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113a57 call 0x12116a60 */
  push32(0x12113a5cu); f_12116a60();
  /* 12113a5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113a63 je 0x12113b58 */
  if (C.zf) goto L_12113b58;
  /* 12113a69 mov esi, esp */
  ESI = (ESP);
  /* 12113a6b push 7 */
  push32((uint32_t)(0x7u));
  /* 12113a6d call dword ptr [0x121464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d4))), 0x12113a73u);
  /* 12113a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113a76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113a78 call 0x12116a60 */
  push32(0x12113a7du); f_12116a60();
  /* 12113a7d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113a84 je 0x12113b58 */
  if (C.zf) goto L_12113b58;
  /* 12113a8a mov esi, esp */
  ESI = (ESP);
  /* 12113a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12113a8e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12113a90 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113a96u);
  /* 12113a96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113a99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113a9b call 0x12116a60 */
  push32(0x12113aa0u); f_12116a60();
  /* 12113aa0 mov esi, esp */
  ESI = (ESP);
  /* 12113aa2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113aa4 push 0xa */
  push32((uint32_t)(0xau));
  /* 12113aa6 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113aacu);
  /* 12113aac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113aaf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113ab1 call 0x12116a60 */
  push32(0x12113ab6u); f_12116a60();
  /* 12113ab6 mov esi, esp */
  ESI = (ESP);
  /* 12113ab8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113aba push 9 */
  push32((uint32_t)(0x9u));
  /* 12113abc call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113ac2u);
  /* 12113ac2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113ac7 call 0x12116a60 */
  push32(0x12113accu); f_12116a60();
  /* 12113acc mov esi, esp */
  ESI = (ESP);
  /* 12113ace push 7 */
  push32((uint32_t)(0x7u));
  /* 12113ad0 call dword ptr [0x121464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d8))), 0x12113ad6u);
  /* 12113ad6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113ad9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113adb call 0x12116a60 */
  push32(0x12113ae0u); f_12116a60();
  /* 12113ae0 mov esi, esp */
  ESI = (ESP);
  /* 12113ae2 push 0x86c4 */
  push32((uint32_t)(0x86c4u));
  /* 12113ae7 push 8 */
  push32((uint32_t)(0x8u));
  /* 12113ae9 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12113aefu);
  /* 12113aef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113af2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113af4 call 0x12116a60 */
  push32(0x12113af9u); f_12116a60();
  /* 12113af9 mov esi, esp */
  ESI = (ESP);
  /* 12113afb push 0x12143478 */
  push32((uint32_t)(0x12143478u));
  /* 12113b00 push 0x12143460 */
  push32((uint32_t)(0x12143460u));
  /* 12113b05 call dword ptr [0x121464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d0))), 0x12113b0bu);
  /* 12113b0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113b10 call 0x12116a60 */
  push32(0x12113b15u); f_12116a60();
  /* 12113b15 mov esi, esp */
  ESI = (ESP);
  /* 12113b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113b19 push 0x12143478 */
  push32((uint32_t)(0x12143478u));
  /* 12113b1e call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12113b24u);
  /* 12113b24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113b27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113b29 call 0x12116a60 */
  push32(0x12113b2eu); f_12116a60();
  /* 12113b2e mov esi, esp */
  ESI = (ESP);
  /* 12113b30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113b32 push 5 */
  push32((uint32_t)(0x5u));
  /* 12113b34 call dword ptr [0x121464e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464e0))), 0x12113b3au);
  /* 12113b3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113b3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113b3f call 0x12116a60 */
  push32(0x12113b44u); f_12116a60();
  /* 12113b44 mov esi, esp */
  ESI = (ESP);
  /* 12113b46 push 5 */
  push32((uint32_t)(0x5u));
  /* 12113b48 call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x12113b4eu);
  /* 12113b4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113b51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113b53 call 0x12116a60 */
  push32(0x12113b58u); f_12116a60();
L_12113b58:;
  /* 12113b58 mov esi, esp */
  ESI = (ESP);
  /* 12113b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12113b5c push 0x12143698 */
  push32((uint32_t)(0x12143698u));
  /* 12113b61 push 0x12143478 */
  push32((uint32_t)(0x12143478u));
  /* 12113b66 call dword ptr [0x121464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464e4))), 0x12113b6cu);
  /* 12113b6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113b6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113b71 call 0x12116a60 */
  push32(0x12113b76u); f_12116a60();
  /* 12113b76 mov esi, esp */
  ESI = (ESP);
  /* 12113b78 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12113b7a call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113b80u);
  /* 12113b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113b83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113b85 call 0x12116a60 */
  push32(0x12113b8au); f_12116a60();
  /* 12113b8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113b8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113b91 jne 0x12113bf5 */
  if (!C.zf) goto L_12113bf5;
  /* 12113b93 mov esi, esp */
  ESI = (ESP);
  /* 12113b95 push 0x12143478 */
  push32((uint32_t)(0x12143478u));
  /* 12113b9a call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12113ba0u);
  /* 12113ba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113ba3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113ba5 call 0x12116a60 */
  push32(0x12113baau); f_12116a60();
  /* 12113baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113bac je 0x12113bcb */
  if (C.zf) goto L_12113bcb;
  /* 12113bae mov esi, esp */
  ESI = (ESP);
  /* 12113bb0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12113bb2 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12113bb8u);
  /* 12113bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113bbd call 0x12116a60 */
  push32(0x12113bc2u); f_12116a60();
  /* 12113bc2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113bc9 je 0x12113bf5 */
  if (C.zf) goto L_12113bf5;
L_12113bcb:;
  /* 12113bcb mov esi, esp */
  ESI = (ESP);
  /* 12113bcd push 8 */
  push32((uint32_t)(0x8u));
  /* 12113bcf call dword ptr [0x121464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d8))), 0x12113bd5u);
  /* 12113bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113bd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113bda call 0x12116a60 */
  push32(0x12113bdfu); f_12116a60();
  /* 12113bdf mov esi, esp */
  ESI = (ESP);
  /* 12113be1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113be3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12113be5 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113bebu);
  /* 12113beb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113bee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113bf0 call 0x12116a60 */
  push32(0x12113bf5u); f_12116a60();
L_12113bf5:;
  /* 12113bf5 mov esi, esp */
  ESI = (ESP);
  /* 12113bf7 push 4 */
  push32((uint32_t)(0x4u));
  /* 12113bf9 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113bffu);
  /* 12113bff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113c02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113c04 call 0x12116a60 */
  push32(0x12113c09u); f_12116a60();
  /* 12113c09 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113c0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113c10 je 0x12113ea4 */
  if (C.zf) goto L_12113ea4;
  /* 12113c16 mov esi, esp */
  ESI = (ESP);
  /* 12113c18 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12113c1a call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113c20u);
  /* 12113c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113c23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113c25 call 0x12116a60 */
  push32(0x12113c2au); f_12116a60();
  /* 12113c2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113c2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113c31 je 0x12113c8b */
  if (C.zf) goto L_12113c8b;
  /* 12113c33 mov esi, esp */
  ESI = (ESP);
  /* 12113c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113c37 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12113c39 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113c3fu);
  /* 12113c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113c42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113c44 call 0x12116a60 */
  push32(0x12113c49u); f_12116a60();
  /* 12113c49 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12113c50 jmp 0x12113c5b */
  goto L_12113c5b;
L_12113c52:;
  /* 12113c52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12113c55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12113c58 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12113c5b:;
  /* 12113c5b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12113c5e cmp edx, dword ptr [0x12143598] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12143598))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113c64 jge 0x12113c8b */
  if ((C.sf==C.of)) goto L_12113c8b;
  /* 12113c66 mov esi, esp */
  ESI = (ESP);
  /* 12113c68 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113c6a push 0x12143458 */
  push32((uint32_t)(0x12143458u));
  /* 12113c6f push 0x121436b8 */
  push32((uint32_t)(0x121436b8u));
  /* 12113c74 push 0x12143498 */
  push32((uint32_t)(0x12143498u));
  /* 12113c79 call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x12113c7fu);
  /* 12113c7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113c84 call 0x12116a60 */
  push32(0x12113c89u); f_12116a60();
  /* 12113c89 jmp 0x12113c52 */
  goto L_12113c52;
L_12113c8b:;
  /* 12113c8b mov esi, esp */
  ESI = (ESP);
  /* 12113c8d push 0xd */
  push32((uint32_t)(0xdu));
  /* 12113c8f call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113c95u);
  /* 12113c95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113c98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113c9a call 0x12116a60 */
  push32(0x12113c9fu); f_12116a60();
  /* 12113c9f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113ca6 je 0x12113cf7 */
  if (C.zf) goto L_12113cf7;
  /* 12113ca8 mov esi, esp */
  ESI = (ESP);
  /* 12113caa push 0x12143498 */
  push32((uint32_t)(0x12143498u));
  /* 12113caf call dword ptr [0x121464c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464c4))), 0x12113cb5u);
  /* 12113cb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113cba call 0x12116a60 */
  push32(0x12113cbfu); f_12116a60();
  /* 12113cbf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113cc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113cc6 je 0x12113cf7 */
  if (C.zf) goto L_12113cf7;
  /* 12113cc8 mov esi, esp */
  ESI = (ESP);
  /* 12113cca push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12113ccf push 4 */
  push32((uint32_t)(0x4u));
  /* 12113cd1 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12113cd7u);
  /* 12113cd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113cda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113cdc call 0x12116a60 */
  push32(0x12113ce1u); f_12116a60();
  /* 12113ce1 mov esi, esp */
  ESI = (ESP);
  /* 12113ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113ce5 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12113ce7 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113cedu);
  /* 12113ced add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113cf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113cf2 call 0x12116a60 */
  push32(0x12113cf7u); f_12116a60();
L_12113cf7:;
  /* 12113cf7 mov esi, esp */
  ESI = (ESP);
  /* 12113cf9 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12113cfb call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113d01u);
  /* 12113d01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113d04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113d06 call 0x12116a60 */
  push32(0x12113d0bu); f_12116a60();
  /* 12113d0b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113d12 je 0x12113e07 */
  if (C.zf) goto L_12113e07;
  /* 12113d18 mov esi, esp */
  ESI = (ESP);
  /* 12113d1a push 4 */
  push32((uint32_t)(0x4u));
  /* 12113d1c call dword ptr [0x121464d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d4))), 0x12113d22u);
  /* 12113d22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113d25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113d27 call 0x12116a60 */
  push32(0x12113d2cu); f_12116a60();
  /* 12113d2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113d31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113d33 je 0x12113e07 */
  if (C.zf) goto L_12113e07;
  /* 12113d39 mov esi, esp */
  ESI = (ESP);
  /* 12113d3b push 0 */
  push32((uint32_t)(0x0u));
  /* 12113d3d push 0xe */
  push32((uint32_t)(0xeu));
  /* 12113d3f call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113d45u);
  /* 12113d45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113d48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113d4a call 0x12116a60 */
  push32(0x12113d4fu); f_12116a60();
  /* 12113d4f mov esi, esp */
  ESI = (ESP);
  /* 12113d51 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113d53 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12113d55 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113d5bu);
  /* 12113d5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113d5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113d60 call 0x12116a60 */
  push32(0x12113d65u); f_12116a60();
  /* 12113d65 mov esi, esp */
  ESI = (ESP);
  /* 12113d67 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113d69 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12113d6b call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113d71u);
  /* 12113d71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113d74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113d76 call 0x12116a60 */
  push32(0x12113d7bu); f_12116a60();
  /* 12113d7b mov esi, esp */
  ESI = (ESP);
  /* 12113d7d push 4 */
  push32((uint32_t)(0x4u));
  /* 12113d7f call dword ptr [0x121464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d8))), 0x12113d85u);
  /* 12113d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113d88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113d8a call 0x12116a60 */
  push32(0x12113d8fu); f_12116a60();
  /* 12113d8f mov esi, esp */
  ESI = (ESP);
  /* 12113d91 push 0x86c4 */
  push32((uint32_t)(0x86c4u));
  /* 12113d96 push 5 */
  push32((uint32_t)(0x5u));
  /* 12113d98 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12113d9eu);
  /* 12113d9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113da1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113da3 call 0x12116a60 */
  push32(0x12113da8u); f_12116a60();
  /* 12113da8 mov esi, esp */
  ESI = (ESP);
  /* 12113daa push 0x12143468 */
  push32((uint32_t)(0x12143468u));
  /* 12113daf push 0x12143458 */
  push32((uint32_t)(0x12143458u));
  /* 12113db4 call dword ptr [0x121464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d0))), 0x12113dbau);
  /* 12113dba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113dbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113dbf call 0x12116a60 */
  push32(0x12113dc4u); f_12116a60();
  /* 12113dc4 mov esi, esp */
  ESI = (ESP);
  /* 12113dc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113dc8 push 0x12143468 */
  push32((uint32_t)(0x12143468u));
  /* 12113dcd call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12113dd3u);
  /* 12113dd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113dd8 call 0x12116a60 */
  push32(0x12113dddu); f_12116a60();
  /* 12113ddd mov esi, esp */
  ESI = (ESP);
  /* 12113ddf push 1 */
  push32((uint32_t)(0x1u));
  /* 12113de1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12113de3 call dword ptr [0x121464e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464e0))), 0x12113de9u);
  /* 12113de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113dee call 0x12116a60 */
  push32(0x12113df3u); f_12116a60();
  /* 12113df3 mov esi, esp */
  ESI = (ESP);
  /* 12113df5 push 5 */
  push32((uint32_t)(0x5u));
  /* 12113df7 call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x12113dfdu);
  /* 12113dfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113e00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113e02 call 0x12116a60 */
  push32(0x12113e07u); f_12116a60();
L_12113e07:;
  /* 12113e07 mov esi, esp */
  ESI = (ESP);
  /* 12113e09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113e0b push 0x121436a0 */
  push32((uint32_t)(0x121436a0u));
  /* 12113e10 push 0x12143468 */
  push32((uint32_t)(0x12143468u));
  /* 12113e15 call dword ptr [0x121464e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464e4))), 0x12113e1bu);
  /* 12113e1b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113e1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113e20 call 0x12116a60 */
  push32(0x12113e25u); f_12116a60();
  /* 12113e25 mov esi, esp */
  ESI = (ESP);
  /* 12113e27 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12113e29 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113e2fu);
  /* 12113e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113e32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113e34 call 0x12116a60 */
  push32(0x12113e39u); f_12116a60();
  /* 12113e39 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113e3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113e40 jne 0x12113ea4 */
  if (!C.zf) goto L_12113ea4;
  /* 12113e42 mov esi, esp */
  ESI = (ESP);
  /* 12113e44 push 0x12143468 */
  push32((uint32_t)(0x12143468u));
  /* 12113e49 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12113e4fu);
  /* 12113e4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113e52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113e54 call 0x12116a60 */
  push32(0x12113e59u); f_12116a60();
  /* 12113e59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113e5b je 0x12113e7a */
  if (C.zf) goto L_12113e7a;
  /* 12113e5d mov esi, esp */
  ESI = (ESP);
  /* 12113e5f push 5 */
  push32((uint32_t)(0x5u));
  /* 12113e61 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12113e67u);
  /* 12113e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113e6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113e6c call 0x12116a60 */
  push32(0x12113e71u); f_12116a60();
  /* 12113e71 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113e76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113e78 je 0x12113ea4 */
  if (C.zf) goto L_12113ea4;
L_12113e7a:;
  /* 12113e7a mov esi, esp */
  ESI = (ESP);
  /* 12113e7c push 5 */
  push32((uint32_t)(0x5u));
  /* 12113e7e call dword ptr [0x121464d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d8))), 0x12113e84u);
  /* 12113e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113e87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113e89 call 0x12116a60 */
  push32(0x12113e8eu); f_12116a60();
  /* 12113e8e mov esi, esp */
  ESI = (ESP);
  /* 12113e90 push 1 */
  push32((uint32_t)(0x1u));
  /* 12113e92 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12113e94 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113e9au);
  /* 12113e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113e9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113e9f call 0x12116a60 */
  push32(0x12113ea4u); f_12116a60();
L_12113ea4:;
  /* 12113ea4 mov esi, esp */
  ESI = (ESP);
  /* 12113ea6 push 5 */
  push32((uint32_t)(0x5u));
  /* 12113ea8 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113eaeu);
  /* 12113eae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113eb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113eb3 call 0x12116a60 */
  push32(0x12113eb8u); f_12116a60();
  /* 12113eb8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113ebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113ebf je 0x12113f31 */
  if (C.zf) goto L_12113f31;
  /* 12113ec1 mov esi, esp */
  ESI = (ESP);
  /* 12113ec3 push 0x12143718 */
  push32((uint32_t)(0x12143718u));
  /* 12113ec8 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12113eceu);
  /* 12113ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113ed1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113ed3 call 0x12116a60 */
  push32(0x12113ed8u); f_12116a60();
  /* 12113ed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113eda jne 0x12113f31 */
  if (!C.zf) goto L_12113f31;
  /* 12113edc mov esi, esp */
  ESI = (ESP);
  /* 12113ede push 0 */
  push32((uint32_t)(0x0u));
  /* 12113ee0 push 5 */
  push32((uint32_t)(0x5u));
  /* 12113ee2 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113ee8u);
  /* 12113ee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113eeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113eed call 0x12116a60 */
  push32(0x12113ef2u); f_12116a60();
  /* 12113ef2 mov esi, esp */
  ESI = (ESP);
  /* 12113ef4 push 0x1213e3f0 */
  push32((uint32_t)(0x1213e3f0u));
  /* 12113ef9 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x12113effu);
  /* 12113eff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113f02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113f04 call 0x12116a60 */
  push32(0x12113f09u); f_12116a60();
  /* 12113f09 mov esi, esp */
  ESI = (ESP);
  /* 12113f0b push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12113f0d call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x12113f13u);
  /* 12113f13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113f16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113f18 call 0x12116a60 */
  push32(0x12113f1du); f_12116a60();
  /* 12113f1d mov esi, esp */
  ESI = (ESP);
  /* 12113f1f push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12113f21 call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x12113f27u);
  /* 12113f27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113f2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113f2c call 0x12116a60 */
  push32(0x12113f31u); f_12116a60();
L_12113f31:;
  /* 12113f31 mov esi, esp */
  ESI = (ESP);
  /* 12113f33 push 6 */
  push32((uint32_t)(0x6u));
  /* 12113f35 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12113f3bu);
  /* 12113f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113f3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113f40 call 0x12116a60 */
  push32(0x12113f45u); f_12116a60();
  /* 12113f45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12113f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12113f4c je 0x12114348 */
  if (C.zf) goto L_12114348;
  /* 12113f52 mov esi, esp */
  ESI = (ESP);
  /* 12113f54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12113f56 push 6 */
  push32((uint32_t)(0x6u));
  /* 12113f58 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12113f5eu);
  /* 12113f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113f61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113f63 call 0x12116a60 */
  push32(0x12113f68u); f_12116a60();
  /* 12113f68 mov esi, esp */
  ESI = (ESP);
  /* 12113f6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12113f6c call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12113f72u);
  /* 12113f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113f75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113f77 call 0x12116a60 */
  push32(0x12113f7cu); f_12116a60();
  /* 12113f7c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12113f7f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113f83 ja 0x1211425a */
  if ((!C.cf&&!C.zf)) goto L_1211425a;
  /* 12113f89 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12113f8c jmp dword ptr [eax*4 + 0x12115afc] */
  switch (EAX) {
    case 0: goto L_12113f93;
    case 1: goto L_12114046;
    case 2: goto L_121140f9;
    case 3: goto L_121141ac;
    case 4: goto L_1211551b;
    case 5: goto L_12115570;
    case 6: goto L_121155cb;
    case 7: goto L_12115623;
    default: x86_unimpl("switch@0x12113f8c out of table"); return;
  }
L_12113f93:;
  /* 12113f93 mov esi, esp */
  ESI = (ESP);
  /* 12113f95 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12113f97 push 0x121436a8 */
  push32((uint32_t)(0x121436a8u));
  /* 12113f9c push 3 */
  push32((uint32_t)(0x3u));
  /* 12113f9e push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 12113fa3 push 0x121434b0 */
  push32((uint32_t)(0x121434b0u));
  /* 12113fa8 push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12113fad call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12113fb3u);
  /* 12113fb3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113fb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113fb8 call 0x12116a60 */
  push32(0x12113fbdu); f_12116a60();
  /* 12113fbd mov esi, esp */
  ESI = (ESP);
  /* 12113fbf push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12113fc4 push 0x121436b0 */
  push32((uint32_t)(0x121436b0u));
  /* 12113fc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12113fcb push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12113fd0 push 0x121434b0 */
  push32((uint32_t)(0x121434b0u));
  /* 12113fd5 push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 12113fda call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12113fe0u);
  /* 12113fe0 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12113fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12113fe5 call 0x12116a60 */
  push32(0x12113feau); f_12116a60();
  /* 12113fea mov esi, esp */
  ESI = (ESP);
  /* 12113fec push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12113fee push 0x121436c0 */
  push32((uint32_t)(0x121436c0u));
  /* 12113ff3 push 3 */
  push32((uint32_t)(0x3u));
  /* 12113ff5 push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 12113ffa push 0x121434b0 */
  push32((uint32_t)(0x121434b0u));
  /* 12113fff push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12114004 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x1211400au);
  /* 1211400a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211400d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211400f call 0x12116a60 */
  push32(0x12114014u); f_12116a60();
  /* 12114014 mov esi, esp */
  ESI = (ESP);
  /* 12114016 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1211401b push 0x121436c8 */
  push32((uint32_t)(0x121436c8u));
  /* 12114020 push 3 */
  push32((uint32_t)(0x3u));
  /* 12114022 push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12114027 push 0x121434b0 */
  push32((uint32_t)(0x121434b0u));
  /* 1211402c push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12114031 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12114037u);
  /* 12114037 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211403a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211403c call 0x12116a60 */
  push32(0x12114041u); f_12116a60();
  /* 12114041 jmp 0x1211425a */
  goto L_1211425a;
L_12114046:;
  /* 12114046 mov esi, esp */
  ESI = (ESP);
  /* 12114048 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1211404a push 0x121436a8 */
  push32((uint32_t)(0x121436a8u));
  /* 1211404f push 3 */
  push32((uint32_t)(0x3u));
  /* 12114051 push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 12114056 push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 1211405b push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12114060 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12114066u);
  /* 12114066 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114069 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211406b call 0x12116a60 */
  push32(0x12114070u); f_12116a60();
  /* 12114070 mov esi, esp */
  ESI = (ESP);
  /* 12114072 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12114077 push 0x121436b0 */
  push32((uint32_t)(0x121436b0u));
  /* 1211407c push 3 */
  push32((uint32_t)(0x3u));
  /* 1211407e push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12114083 push 0x12143400 */
  push32((uint32_t)(0x12143400u));
  /* 12114088 push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 1211408d call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12114093u);
  /* 12114093 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114098 call 0x12116a60 */
  push32(0x1211409du); f_12116a60();
  /* 1211409d mov esi, esp */
  ESI = (ESP);
  /* 1211409f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 121140a1 push 0x121436c0 */
  push32((uint32_t)(0x121436c0u));
  /* 121140a6 push 3 */
  push32((uint32_t)(0x3u));
  /* 121140a8 push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 121140ad push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 121140b2 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 121140b7 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x121140bdu);
  /* 121140bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121140c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121140c2 call 0x12116a60 */
  push32(0x121140c7u); f_12116a60();
  /* 121140c7 mov esi, esp */
  ESI = (ESP);
  /* 121140c9 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 121140ce push 0x121436c8 */
  push32((uint32_t)(0x121436c8u));
  /* 121140d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 121140d5 push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 121140da push 0x12143400 */
  push32((uint32_t)(0x12143400u));
  /* 121140df push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 121140e4 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x121140eau);
  /* 121140ea add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121140ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121140ef call 0x12116a60 */
  push32(0x121140f4u); f_12116a60();
  /* 121140f4 jmp 0x1211425a */
  goto L_1211425a;
L_121140f9:;
  /* 121140f9 mov esi, esp */
  ESI = (ESP);
  /* 121140fb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 121140fd push 0x121436a8 */
  push32((uint32_t)(0x121436a8u));
  /* 12114102 push 3 */
  push32((uint32_t)(0x3u));
  /* 12114104 push 0x121435a0 */
  push32((uint32_t)(0x121435a0u));
  /* 12114109 push 0x12143400 */
  push32((uint32_t)(0x12143400u));
  /* 1211410e push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12114113 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12114119u);
  /* 12114119 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211411c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211411e call 0x12116a60 */
  push32(0x12114123u); f_12116a60();
  /* 12114123 mov esi, esp */
  ESI = (ESP);
  /* 12114125 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1211412a push 0x121436b0 */
  push32((uint32_t)(0x121436b0u));
  /* 1211412f push 3 */
  push32((uint32_t)(0x3u));
  /* 12114131 push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12114136 push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 1211413b push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 12114140 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12114146u);
  /* 12114146 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211414b call 0x12116a60 */
  push32(0x12114150u); f_12116a60();
  /* 12114150 mov esi, esp */
  ESI = (ESP);
  /* 12114152 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12114154 push 0x121436c0 */
  push32((uint32_t)(0x121436c0u));
  /* 12114159 push 3 */
  push32((uint32_t)(0x3u));
  /* 1211415b push 0x121435a0 */
  push32((uint32_t)(0x121435a0u));
  /* 12114160 push 0x12143400 */
  push32((uint32_t)(0x12143400u));
  /* 12114165 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 1211416a call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12114170u);
  /* 12114170 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114173 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114175 call 0x12116a60 */
  push32(0x1211417au); f_12116a60();
  /* 1211417a mov esi, esp */
  ESI = (ESP);
  /* 1211417c push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12114181 push 0x121436c8 */
  push32((uint32_t)(0x121436c8u));
  /* 12114186 push 3 */
  push32((uint32_t)(0x3u));
  /* 12114188 push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 1211418d push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 12114192 push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12114197 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x1211419du);
  /* 1211419d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121141a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121141a2 call 0x12116a60 */
  push32(0x121141a7u); f_12116a60();
  /* 121141a7 jmp 0x1211425a */
  goto L_1211425a;
L_121141ac:;
  /* 121141ac mov esi, esp */
  ESI = (ESP);
  /* 121141ae push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 121141b0 push 0x121436a8 */
  push32((uint32_t)(0x121436a8u));
  /* 121141b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 121141b7 push 0x121435a0 */
  push32((uint32_t)(0x121435a0u));
  /* 121141bc push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 121141c1 push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 121141c6 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x121141ccu);
  /* 121141cc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121141cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121141d1 call 0x12116a60 */
  push32(0x121141d6u); f_12116a60();
  /* 121141d6 mov esi, esp */
  ESI = (ESP);
  /* 121141d8 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 121141dd push 0x121436b0 */
  push32((uint32_t)(0x121436b0u));
  /* 121141e2 push 3 */
  push32((uint32_t)(0x3u));
  /* 121141e4 push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 121141e9 push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 121141ee push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 121141f3 call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x121141f9u);
  /* 121141f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121141fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121141fe call 0x12116a60 */
  push32(0x12114203u); f_12116a60();
  /* 12114203 mov esi, esp */
  ESI = (ESP);
  /* 12114205 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12114207 push 0x121436c0 */
  push32((uint32_t)(0x121436c0u));
  /* 1211420c push 3 */
  push32((uint32_t)(0x3u));
  /* 1211420e push 0x121435a0 */
  push32((uint32_t)(0x121435a0u));
  /* 12114213 push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 12114218 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 1211421d call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12114223u);
  /* 12114223 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114226 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114228 call 0x12116a60 */
  push32(0x1211422du); f_12116a60();
  /* 1211422d mov esi, esp */
  ESI = (ESP);
  /* 1211422f push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12114234 push 0x121436c8 */
  push32((uint32_t)(0x121436c8u));
  /* 12114239 push 3 */
  push32((uint32_t)(0x3u));
  /* 1211423b push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12114240 push 0x12143408 */
  push32((uint32_t)(0x12143408u));
  /* 12114245 push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 1211424a call dword ptr [0x121464dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464dc))), 0x12114250u);
  /* 12114250 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114253 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114255 call 0x12116a60 */
  push32(0x1211425au); f_12116a60();
L_1211425a:;
  /* 1211425a mov esi, esp */
  ESI = (ESP);
  /* 1211425c push 0 */
  push32((uint32_t)(0x0u));
  /* 1211425e push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12114263 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12114269u);
  /* 12114269 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211426c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211426e call 0x12116a60 */
  push32(0x12114273u); f_12116a60();
  /* 12114273 mov esi, esp */
  ESI = (ESP);
  /* 12114275 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114277 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12114279 push 0x12143688 */
  push32((uint32_t)(0x12143688u));
  /* 1211427e push 3 */
  push32((uint32_t)(0x3u));
  /* 12114280 call dword ptr [0x121464ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464ec))), 0x12114286u);
  /* 12114286 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114289 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211428b call 0x12116a60 */
  push32(0x12114290u); f_12116a60();
  /* 12114290 mov esi, esp */
  ESI = (ESP);
  /* 12114292 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114294 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12114299 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x1211429fu);
  /* 1211429f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121142a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121142a4 call 0x12116a60 */
  push32(0x121142a9u); f_12116a60();
  /* 121142a9 mov esi, esp */
  ESI = (ESP);
  /* 121142ab push 0 */
  push32((uint32_t)(0x0u));
  /* 121142ad push 0x41 */
  push32((uint32_t)(0x41u));
  /* 121142af push 0x12143690 */
  push32((uint32_t)(0x12143690u));
  /* 121142b4 push 3 */
  push32((uint32_t)(0x3u));
  /* 121142b6 call dword ptr [0x121464ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464ec))), 0x121142bcu);
  /* 121142bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121142bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121142c1 call 0x12116a60 */
  push32(0x121142c6u); f_12116a60();
  /* 121142c6 mov esi, esp */
  ESI = (ESP);
  /* 121142c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121142ca push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 121142cf call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x121142d5u);
  /* 121142d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121142d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121142da call 0x12116a60 */
  push32(0x121142dfu); f_12116a60();
  /* 121142df mov esi, esp */
  ESI = (ESP);
  /* 121142e1 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 121142e6 push 0x121435e8 */
  push32((uint32_t)(0x121435e8u));
  /* 121142eb push 3 */
  push32((uint32_t)(0x3u));
  /* 121142ed call dword ptr [0x12146484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146484))), 0x121142f3u);
  /* 121142f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121142f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121142f8 call 0x12116a60 */
  push32(0x121142fdu); f_12116a60();
  /* 121142fd mov esi, esp */
  ESI = (ESP);
  /* 121142ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12114301 push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12114306 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x1211430cu);
  /* 1211430c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211430f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114311 call 0x12116a60 */
  push32(0x12114316u); f_12116a60();
  /* 12114316 mov esi, esp */
  ESI = (ESP);
  /* 12114318 push 0x82 */
  push32((uint32_t)(0x82u));
  /* 1211431d push 0x121436b0 */
  push32((uint32_t)(0x121436b0u));
  /* 12114322 push 3 */
  push32((uint32_t)(0x3u));
  /* 12114324 call dword ptr [0x12146484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146484))), 0x1211432au);
  /* 1211432a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211432d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211432f call 0x12116a60 */
  push32(0x12114334u); f_12116a60();
  /* 12114334 mov esi, esp */
  ESI = (ESP);
  /* 12114336 push 3 */
  push32((uint32_t)(0x3u));
  /* 12114338 call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x1211433eu);
  /* 1211433e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114343 call 0x12116a60 */
  push32(0x12114348u); f_12116a60();
L_12114348:;
  /* 12114348 mov esi, esp */
  ESI = (ESP);
  /* 1211434a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211434c call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114352u);
  /* 12114352 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114355 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114357 call 0x12116a60 */
  push32(0x1211435cu); f_12116a60();
  /* 1211435c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1211435f cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114363 je 0x1211437e */
  if (C.zf) goto L_1211437e;
  /* 12114365 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114369 je 0x1211460f */
  if (C.zf) goto L_1211460f;
  /* 1211436f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114373 je 0x121148a4 */
  if (C.zf) goto L_121148a4;
  /* 12114379 jmp 0x12114b39 */
  goto L_12114b39;
L_1211437e:;
  /* 1211437e mov esi, esp */
  ESI = (ESP);
  /* 12114380 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12114382 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114388u);
  /* 12114388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211438b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211438d call 0x12116a60 */
  push32(0x12114392u); f_12116a60();
  /* 12114392 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114399 je 0x12114421 */
  if (C.zf) goto L_12114421;
  /* 1211439f mov esi, esp */
  ESI = (ESP);
  /* 121143a1 push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 121143a6 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121143acu);
  /* 121143ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121143af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121143b1 call 0x12116a60 */
  push32(0x121143b6u); f_12116a60();
  /* 121143b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121143b8 jle 0x12114421 */
  if ((C.zf||C.sf!=C.of)) goto L_12114421;
  /* 121143ba mov esi, esp */
  ESI = (ESP);
  /* 121143bc push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 121143c1 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121143c7u);
  /* 121143c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121143ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121143cc call 0x12116a60 */
  push32(0x121143d1u); f_12116a60();
  /* 121143d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121143d3 jne 0x12114421 */
  if (!C.zf) goto L_12114421;
  /* 121143d5 mov esi, esp */
  ESI = (ESP);
  /* 121143d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121143d9 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 121143db call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121143e1u);
  /* 121143e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121143e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121143e6 call 0x12116a60 */
  push32(0x121143ebu); f_12116a60();
  /* 121143eb mov esi, esp */
  ESI = (ESP);
  /* 121143ed push 0 */
  push32((uint32_t)(0x0u));
  /* 121143ef call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x121143f5u);
  /* 121143f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121143f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121143fa call 0x12116a60 */
  push32(0x121143ffu); f_12116a60();
  /* 121143ff mov ecx, 5 */
  ECX = (0x5u);
  /* 12114404 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114406 imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211440c mov esi, esp */
  ESI = (ESP);
  /* 1211440e push ecx */
  push32((uint32_t)(ECX));
  /* 1211440f push 9 */
  push32((uint32_t)(0x9u));
  /* 12114411 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114417u);
  /* 12114417 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211441a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211441c call 0x12116a60 */
  push32(0x12114421u); f_12116a60();
L_12114421:;
  /* 12114421 mov esi, esp */
  ESI = (ESP);
  /* 12114423 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12114425 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x1211442bu);
  /* 1211442b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211442e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114430 call 0x12116a60 */
  push32(0x12114435u); f_12116a60();
  /* 12114435 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211443a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211443c je 0x121144c4 */
  if (C.zf) goto L_121144c4;
  /* 12114442 mov esi, esp */
  ESI = (ESP);
  /* 12114444 push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 12114449 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x1211444fu);
  /* 1211444f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114452 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114454 call 0x12116a60 */
  push32(0x12114459u); f_12116a60();
  /* 12114459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211445b jle 0x121144c4 */
  if ((C.zf||C.sf!=C.of)) goto L_121144c4;
  /* 1211445d mov esi, esp */
  ESI = (ESP);
  /* 1211445f push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 12114464 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x1211446au);
  /* 1211446a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211446d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211446f call 0x12116a60 */
  push32(0x12114474u); f_12116a60();
  /* 12114474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114476 jne 0x121144c4 */
  if (!C.zf) goto L_121144c4;
  /* 12114478 mov esi, esp */
  ESI = (ESP);
  /* 1211447a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211447c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1211447e call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114484u);
  /* 12114484 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114487 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114489 call 0x12116a60 */
  push32(0x1211448eu); f_12116a60();
  /* 1211448e mov esi, esp */
  ESI = (ESP);
  /* 12114490 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114492 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114498u);
  /* 12114498 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211449b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211449d call 0x12116a60 */
  push32(0x121144a2u); f_12116a60();
  /* 121144a2 mov edx, 5 */
  EDX = (0x5u);
  /* 121144a7 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121144a9 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121144af mov esi, esp */
  ESI = (ESP);
  /* 121144b1 push edx */
  push32((uint32_t)(EDX));
  /* 121144b2 push 0xa */
  push32((uint32_t)(0xau));
  /* 121144b4 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121144bau);
  /* 121144ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121144bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121144bf call 0x12116a60 */
  push32(0x121144c4u); f_12116a60();
L_121144c4:;
  /* 121144c4 mov esi, esp */
  ESI = (ESP);
  /* 121144c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121144c8 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121144ceu);
  /* 121144ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121144d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121144d3 call 0x12116a60 */
  push32(0x121144d8u); f_12116a60();
  /* 121144d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121144dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121144df je 0x12114567 */
  if (C.zf) goto L_12114567;
  /* 121144e5 mov esi, esp */
  ESI = (ESP);
  /* 121144e7 push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 121144ec call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121144f2u);
  /* 121144f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121144f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121144f7 call 0x12116a60 */
  push32(0x121144fcu); f_12116a60();
  /* 121144fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121144fe jle 0x12114567 */
  if ((C.zf||C.sf!=C.of)) goto L_12114567;
  /* 12114500 mov esi, esp */
  ESI = (ESP);
  /* 12114502 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12114507 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x1211450du);
  /* 1211450d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114510 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114512 call 0x12116a60 */
  push32(0x12114517u); f_12116a60();
  /* 12114517 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114519 jne 0x12114567 */
  if (!C.zf) goto L_12114567;
  /* 1211451b mov esi, esp */
  ESI = (ESP);
  /* 1211451d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211451f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12114521 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114527u);
  /* 12114527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211452a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211452c call 0x12116a60 */
  push32(0x12114531u); f_12116a60();
  /* 12114531 mov esi, esp */
  ESI = (ESP);
  /* 12114533 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114535 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x1211453bu);
  /* 1211453b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211453e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114540 call 0x12116a60 */
  push32(0x12114545u); f_12116a60();
  /* 12114545 mov ecx, 5 */
  ECX = (0x5u);
  /* 1211454a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211454c imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114552 mov esi, esp */
  ESI = (ESP);
  /* 12114554 push ecx */
  push32((uint32_t)(ECX));
  /* 12114555 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12114557 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x1211455du);
  /* 1211455d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114560 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114562 call 0x12116a60 */
  push32(0x12114567u); f_12116a60();
L_12114567:;
  /* 12114567 mov esi, esp */
  ESI = (ESP);
  /* 12114569 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1211456b call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114571u);
  /* 12114571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114574 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114576 call 0x12116a60 */
  push32(0x1211457bu); f_12116a60();
  /* 1211457b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114580 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114582 je 0x1211460a */
  if (C.zf) goto L_1211460a;
  /* 12114588 mov esi, esp */
  ESI = (ESP);
  /* 1211458a push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 1211458f call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114595u);
  /* 12114595 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114598 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211459a call 0x12116a60 */
  push32(0x1211459fu); f_12116a60();
  /* 1211459f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121145a1 jle 0x1211460a */
  if ((C.zf||C.sf!=C.of)) goto L_1211460a;
  /* 121145a3 mov esi, esp */
  ESI = (ESP);
  /* 121145a5 push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 121145aa call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121145b0u);
  /* 121145b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121145b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121145b5 call 0x12116a60 */
  push32(0x121145bau); f_12116a60();
  /* 121145ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121145bc jne 0x1211460a */
  if (!C.zf) goto L_1211460a;
  /* 121145be mov esi, esp */
  ESI = (ESP);
  /* 121145c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121145c2 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 121145c4 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121145cau);
  /* 121145ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121145cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121145cf call 0x12116a60 */
  push32(0x121145d4u); f_12116a60();
  /* 121145d4 mov esi, esp */
  ESI = (ESP);
  /* 121145d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121145d8 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x121145deu);
  /* 121145de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121145e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121145e3 call 0x12116a60 */
  push32(0x121145e8u); f_12116a60();
  /* 121145e8 mov edx, 5 */
  EDX = (0x5u);
  /* 121145ed sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121145ef imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121145f5 mov esi, esp */
  ESI = (ESP);
  /* 121145f7 push edx */
  push32((uint32_t)(EDX));
  /* 121145f8 push 0xc */
  push32((uint32_t)(0xcu));
  /* 121145fa call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114600u);
  /* 12114600 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114603 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114605 call 0x12116a60 */
  push32(0x1211460au); f_12116a60();
L_1211460a:;
  /* 1211460a jmp 0x12114dc9 */
  goto L_12114dc9;
L_1211460f:;
  /* 1211460f mov esi, esp */
  ESI = (ESP);
  /* 12114611 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12114613 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114619u);
  /* 12114619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211461c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211461e call 0x12116a60 */
  push32(0x12114623u); f_12116a60();
  /* 12114623 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211462a je 0x121146b3 */
  if (C.zf) goto L_121146b3;
  /* 12114630 mov esi, esp */
  ESI = (ESP);
  /* 12114632 push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 12114637 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x1211463du);
  /* 1211463d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114640 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114642 call 0x12116a60 */
  push32(0x12114647u); f_12116a60();
  /* 12114647 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114649 jle 0x121146b3 */
  if ((C.zf||C.sf!=C.of)) goto L_121146b3;
  /* 1211464b mov esi, esp */
  ESI = (ESP);
  /* 1211464d push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12114652 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114658u);
  /* 12114658 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211465b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211465d call 0x12116a60 */
  push32(0x12114662u); f_12116a60();
  /* 12114662 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114665 jge 0x121146b3 */
  if ((C.sf==C.of)) goto L_121146b3;
  /* 12114667 mov esi, esp */
  ESI = (ESP);
  /* 12114669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211466b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1211466d call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114673u);
  /* 12114673 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114678 call 0x12116a60 */
  push32(0x1211467du); f_12116a60();
  /* 1211467d mov esi, esp */
  ESI = (ESP);
  /* 1211467f push 0 */
  push32((uint32_t)(0x0u));
  /* 12114681 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114687u);
  /* 12114687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211468a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211468c call 0x12116a60 */
  push32(0x12114691u); f_12116a60();
  /* 12114691 mov ecx, 5 */
  ECX = (0x5u);
  /* 12114696 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114698 imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211469e mov esi, esp */
  ESI = (ESP);
  /* 121146a0 push ecx */
  push32((uint32_t)(ECX));
  /* 121146a1 push 9 */
  push32((uint32_t)(0x9u));
  /* 121146a3 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121146a9u);
  /* 121146a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121146ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121146ae call 0x12116a60 */
  push32(0x121146b3u); f_12116a60();
L_121146b3:;
  /* 121146b3 mov esi, esp */
  ESI = (ESP);
  /* 121146b5 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 121146b7 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121146bdu);
  /* 121146bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121146c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121146c2 call 0x12116a60 */
  push32(0x121146c7u); f_12116a60();
  /* 121146c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121146cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121146ce je 0x12114757 */
  if (C.zf) goto L_12114757;
  /* 121146d4 mov esi, esp */
  ESI = (ESP);
  /* 121146d6 push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 121146db call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121146e1u);
  /* 121146e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121146e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121146e6 call 0x12116a60 */
  push32(0x121146ebu); f_12116a60();
  /* 121146eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121146ed jle 0x12114757 */
  if ((C.zf||C.sf!=C.of)) goto L_12114757;
  /* 121146ef mov esi, esp */
  ESI = (ESP);
  /* 121146f1 push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 121146f6 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121146fcu);
  /* 121146fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121146ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114701 call 0x12116a60 */
  push32(0x12114706u); f_12116a60();
  /* 12114706 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114709 jge 0x12114757 */
  if ((C.sf==C.of)) goto L_12114757;
  /* 1211470b mov esi, esp */
  ESI = (ESP);
  /* 1211470d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211470f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12114711 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114717u);
  /* 12114717 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211471a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211471c call 0x12116a60 */
  push32(0x12114721u); f_12116a60();
  /* 12114721 mov esi, esp */
  ESI = (ESP);
  /* 12114723 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114725 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x1211472bu);
  /* 1211472b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211472e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114730 call 0x12116a60 */
  push32(0x12114735u); f_12116a60();
  /* 12114735 mov edx, 5 */
  EDX = (0x5u);
  /* 1211473a sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211473c imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114742 mov esi, esp */
  ESI = (ESP);
  /* 12114744 push edx */
  push32((uint32_t)(EDX));
  /* 12114745 push 0xa */
  push32((uint32_t)(0xau));
  /* 12114747 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x1211474du);
  /* 1211474d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114750 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114752 call 0x12116a60 */
  push32(0x12114757u); f_12116a60();
L_12114757:;
  /* 12114757 mov esi, esp */
  ESI = (ESP);
  /* 12114759 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1211475b call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114761u);
  /* 12114761 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114764 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114766 call 0x12116a60 */
  push32(0x1211476bu); f_12116a60();
  /* 1211476b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114770 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114772 je 0x121147fb */
  if (C.zf) goto L_121147fb;
  /* 12114778 mov esi, esp */
  ESI = (ESP);
  /* 1211477a push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 1211477f call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114785u);
  /* 12114785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114788 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211478a call 0x12116a60 */
  push32(0x1211478fu); f_12116a60();
  /* 1211478f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114791 jle 0x121147fb */
  if ((C.zf||C.sf!=C.of)) goto L_121147fb;
  /* 12114793 mov esi, esp */
  ESI = (ESP);
  /* 12114795 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 1211479a call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121147a0u);
  /* 121147a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121147a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121147a5 call 0x12116a60 */
  push32(0x121147aau); f_12116a60();
  /* 121147aa cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121147ad jge 0x121147fb */
  if ((C.sf==C.of)) goto L_121147fb;
  /* 121147af mov esi, esp */
  ESI = (ESP);
  /* 121147b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121147b3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121147b5 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121147bbu);
  /* 121147bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121147be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121147c0 call 0x12116a60 */
  push32(0x121147c5u); f_12116a60();
  /* 121147c5 mov esi, esp */
  ESI = (ESP);
  /* 121147c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121147c9 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x121147cfu);
  /* 121147cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121147d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121147d4 call 0x12116a60 */
  push32(0x121147d9u); f_12116a60();
  /* 121147d9 mov ecx, 5 */
  ECX = (0x5u);
  /* 121147de sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121147e0 imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121147e6 mov esi, esp */
  ESI = (ESP);
  /* 121147e8 push ecx */
  push32((uint32_t)(ECX));
  /* 121147e9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121147eb call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121147f1u);
  /* 121147f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121147f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121147f6 call 0x12116a60 */
  push32(0x121147fbu); f_12116a60();
L_121147fb:;
  /* 121147fb mov esi, esp */
  ESI = (ESP);
  /* 121147fd push 0x1a */
  push32((uint32_t)(0x1au));
  /* 121147ff call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114805u);
  /* 12114805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114808 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211480a call 0x12116a60 */
  push32(0x1211480fu); f_12116a60();
  /* 1211480f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114814 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114816 je 0x1211489f */
  if (C.zf) goto L_1211489f;
  /* 1211481c mov esi, esp */
  ESI = (ESP);
  /* 1211481e push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 12114823 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114829u);
  /* 12114829 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211482c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211482e call 0x12116a60 */
  push32(0x12114833u); f_12116a60();
  /* 12114833 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114835 jle 0x1211489f */
  if ((C.zf||C.sf!=C.of)) goto L_1211489f;
  /* 12114837 mov esi, esp */
  ESI = (ESP);
  /* 12114839 push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 1211483e call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114844u);
  /* 12114844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114847 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114849 call 0x12116a60 */
  push32(0x1211484eu); f_12116a60();
  /* 1211484e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114851 jge 0x1211489f */
  if ((C.sf==C.of)) goto L_1211489f;
  /* 12114853 mov esi, esp */
  ESI = (ESP);
  /* 12114855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114857 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12114859 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x1211485fu);
  /* 1211485f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114864 call 0x12116a60 */
  push32(0x12114869u); f_12116a60();
  /* 12114869 mov esi, esp */
  ESI = (ESP);
  /* 1211486b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211486d call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114873u);
  /* 12114873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114878 call 0x12116a60 */
  push32(0x1211487du); f_12116a60();
  /* 1211487d mov edx, 5 */
  EDX = (0x5u);
  /* 12114882 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114884 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211488a mov esi, esp */
  ESI = (ESP);
  /* 1211488c push edx */
  push32((uint32_t)(EDX));
  /* 1211488d push 0xc */
  push32((uint32_t)(0xcu));
  /* 1211488f call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114895u);
  /* 12114895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114898 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211489a call 0x12116a60 */
  push32(0x1211489fu); f_12116a60();
L_1211489f:;
  /* 1211489f jmp 0x12114dc9 */
  goto L_12114dc9;
L_121148a4:;
  /* 121148a4 mov esi, esp */
  ESI = (ESP);
  /* 121148a6 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 121148a8 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121148aeu);
  /* 121148ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121148b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121148b3 call 0x12116a60 */
  push32(0x121148b8u); f_12116a60();
  /* 121148b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121148bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121148bf je 0x12114948 */
  if (C.zf) goto L_12114948;
  /* 121148c5 mov esi, esp */
  ESI = (ESP);
  /* 121148c7 push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 121148cc call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121148d2u);
  /* 121148d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121148d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121148d7 call 0x12116a60 */
  push32(0x121148dcu); f_12116a60();
  /* 121148dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121148de jle 0x12114948 */
  if ((C.zf||C.sf!=C.of)) goto L_12114948;
  /* 121148e0 mov esi, esp */
  ESI = (ESP);
  /* 121148e2 push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 121148e7 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121148edu);
  /* 121148ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121148f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121148f2 call 0x12116a60 */
  push32(0x121148f7u); f_12116a60();
  /* 121148f7 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121148fa jge 0x12114948 */
  if ((C.sf==C.of)) goto L_12114948;
  /* 121148fc mov esi, esp */
  ESI = (ESP);
  /* 121148fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12114900 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12114902 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114908u);
  /* 12114908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211490b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211490d call 0x12116a60 */
  push32(0x12114912u); f_12116a60();
  /* 12114912 mov esi, esp */
  ESI = (ESP);
  /* 12114914 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114916 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x1211491cu);
  /* 1211491c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211491f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114921 call 0x12116a60 */
  push32(0x12114926u); f_12116a60();
  /* 12114926 mov ecx, 5 */
  ECX = (0x5u);
  /* 1211492b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211492d imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114933 mov esi, esp */
  ESI = (ESP);
  /* 12114935 push ecx */
  push32((uint32_t)(ECX));
  /* 12114936 push 9 */
  push32((uint32_t)(0x9u));
  /* 12114938 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x1211493eu);
  /* 1211493e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114941 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114943 call 0x12116a60 */
  push32(0x12114948u); f_12116a60();
L_12114948:;
  /* 12114948 mov esi, esp */
  ESI = (ESP);
  /* 1211494a push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1211494c call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114952u);
  /* 12114952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114955 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114957 call 0x12116a60 */
  push32(0x1211495cu); f_12116a60();
  /* 1211495c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114963 je 0x121149ec */
  if (C.zf) goto L_121149ec;
  /* 12114969 mov esi, esp */
  ESI = (ESP);
  /* 1211496b push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 12114970 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114976u);
  /* 12114976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114979 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211497b call 0x12116a60 */
  push32(0x12114980u); f_12116a60();
  /* 12114980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114982 jle 0x121149ec */
  if ((C.zf||C.sf!=C.of)) goto L_121149ec;
  /* 12114984 mov esi, esp */
  ESI = (ESP);
  /* 12114986 push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 1211498b call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114991u);
  /* 12114991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114994 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114996 call 0x12116a60 */
  push32(0x1211499bu); f_12116a60();
  /* 1211499b cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211499e jge 0x121149ec */
  if ((C.sf==C.of)) goto L_121149ec;
  /* 121149a0 mov esi, esp */
  ESI = (ESP);
  /* 121149a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121149a4 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 121149a6 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121149acu);
  /* 121149ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121149af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121149b1 call 0x12116a60 */
  push32(0x121149b6u); f_12116a60();
  /* 121149b6 mov esi, esp */
  ESI = (ESP);
  /* 121149b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121149ba call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x121149c0u);
  /* 121149c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121149c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121149c5 call 0x12116a60 */
  push32(0x121149cau); f_12116a60();
  /* 121149ca mov edx, 5 */
  EDX = (0x5u);
  /* 121149cf sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121149d1 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121149d7 mov esi, esp */
  ESI = (ESP);
  /* 121149d9 push edx */
  push32((uint32_t)(EDX));
  /* 121149da push 0xa */
  push32((uint32_t)(0xau));
  /* 121149dc call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121149e2u);
  /* 121149e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121149e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121149e7 call 0x12116a60 */
  push32(0x121149ecu); f_12116a60();
L_121149ec:;
  /* 121149ec mov esi, esp */
  ESI = (ESP);
  /* 121149ee push 0x19 */
  push32((uint32_t)(0x19u));
  /* 121149f0 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121149f6u);
  /* 121149f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121149f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121149fb call 0x12116a60 */
  push32(0x12114a00u); f_12116a60();
  /* 12114a00 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114a05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114a07 je 0x12114a90 */
  if (C.zf) goto L_12114a90;
  /* 12114a0d mov esi, esp */
  ESI = (ESP);
  /* 12114a0f push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 12114a14 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114a1au);
  /* 12114a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114a1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114a1f call 0x12116a60 */
  push32(0x12114a24u); f_12116a60();
  /* 12114a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114a26 jle 0x12114a90 */
  if ((C.zf||C.sf!=C.of)) goto L_12114a90;
  /* 12114a28 mov esi, esp */
  ESI = (ESP);
  /* 12114a2a push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12114a2f call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114a35u);
  /* 12114a35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114a38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114a3a call 0x12116a60 */
  push32(0x12114a3fu); f_12116a60();
  /* 12114a3f cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114a42 jge 0x12114a90 */
  if ((C.sf==C.of)) goto L_12114a90;
  /* 12114a44 mov esi, esp */
  ESI = (ESP);
  /* 12114a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114a48 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12114a4a call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114a50u);
  /* 12114a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114a53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114a55 call 0x12116a60 */
  push32(0x12114a5au); f_12116a60();
  /* 12114a5a mov esi, esp */
  ESI = (ESP);
  /* 12114a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12114a5e call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114a64u);
  /* 12114a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114a67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114a69 call 0x12116a60 */
  push32(0x12114a6eu); f_12116a60();
  /* 12114a6e mov ecx, 5 */
  ECX = (0x5u);
  /* 12114a73 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114a75 imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114a7b mov esi, esp */
  ESI = (ESP);
  /* 12114a7d push ecx */
  push32((uint32_t)(ECX));
  /* 12114a7e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12114a80 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114a86u);
  /* 12114a86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114a89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114a8b call 0x12116a60 */
  push32(0x12114a90u); f_12116a60();
L_12114a90:;
  /* 12114a90 mov esi, esp */
  ESI = (ESP);
  /* 12114a92 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12114a94 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114a9au);
  /* 12114a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114a9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114a9f call 0x12116a60 */
  push32(0x12114aa4u); f_12116a60();
  /* 12114aa4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114aa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114aab je 0x12114b34 */
  if (C.zf) goto L_12114b34;
  /* 12114ab1 mov esi, esp */
  ESI = (ESP);
  /* 12114ab3 push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 12114ab8 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114abeu);
  /* 12114abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ac3 call 0x12116a60 */
  push32(0x12114ac8u); f_12116a60();
  /* 12114ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114aca jle 0x12114b34 */
  if ((C.zf||C.sf!=C.of)) goto L_12114b34;
  /* 12114acc mov esi, esp */
  ESI = (ESP);
  /* 12114ace push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12114ad3 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114ad9u);
  /* 12114ad9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ade call 0x12116a60 */
  push32(0x12114ae3u); f_12116a60();
  /* 12114ae3 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ae6 jge 0x12114b34 */
  if ((C.sf==C.of)) goto L_12114b34;
  /* 12114ae8 mov esi, esp */
  ESI = (ESP);
  /* 12114aea push 0 */
  push32((uint32_t)(0x0u));
  /* 12114aec push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12114aee call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114af4u);
  /* 12114af4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114af7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114af9 call 0x12116a60 */
  push32(0x12114afeu); f_12116a60();
  /* 12114afe mov esi, esp */
  ESI = (ESP);
  /* 12114b00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114b02 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114b08u);
  /* 12114b08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114b0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114b0d call 0x12116a60 */
  push32(0x12114b12u); f_12116a60();
  /* 12114b12 mov edx, 5 */
  EDX = (0x5u);
  /* 12114b17 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114b19 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114b1f mov esi, esp */
  ESI = (ESP);
  /* 12114b21 push edx */
  push32((uint32_t)(EDX));
  /* 12114b22 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12114b24 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114b2au);
  /* 12114b2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114b2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114b2f call 0x12116a60 */
  push32(0x12114b34u); f_12116a60();
L_12114b34:;
  /* 12114b34 jmp 0x12114dc9 */
  goto L_12114dc9;
L_12114b39:;
  /* 12114b39 mov esi, esp */
  ESI = (ESP);
  /* 12114b3b push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12114b3d call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114b43u);
  /* 12114b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114b46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114b48 call 0x12116a60 */
  push32(0x12114b4du); f_12116a60();
  /* 12114b4d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114b52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114b54 je 0x12114bdd */
  if (C.zf) goto L_12114bdd;
  /* 12114b5a mov esi, esp */
  ESI = (ESP);
  /* 12114b5c push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 12114b61 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114b67u);
  /* 12114b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114b6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114b6c call 0x12116a60 */
  push32(0x12114b71u); f_12116a60();
  /* 12114b71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114b73 jle 0x12114bdd */
  if ((C.zf||C.sf!=C.of)) goto L_12114bdd;
  /* 12114b75 mov esi, esp */
  ESI = (ESP);
  /* 12114b77 push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12114b7c call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114b82u);
  /* 12114b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114b85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114b87 call 0x12116a60 */
  push32(0x12114b8cu); f_12116a60();
  /* 12114b8c cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114b8f jge 0x12114bdd */
  if ((C.sf==C.of)) goto L_12114bdd;
  /* 12114b91 mov esi, esp */
  ESI = (ESP);
  /* 12114b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114b95 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12114b97 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114b9du);
  /* 12114b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114ba0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ba2 call 0x12116a60 */
  push32(0x12114ba7u); f_12116a60();
  /* 12114ba7 mov esi, esp */
  ESI = (ESP);
  /* 12114ba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114bab call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114bb1u);
  /* 12114bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114bb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114bb6 call 0x12116a60 */
  push32(0x12114bbbu); f_12116a60();
  /* 12114bbb mov ecx, 5 */
  ECX = (0x5u);
  /* 12114bc0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114bc2 imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114bc8 mov esi, esp */
  ESI = (ESP);
  /* 12114bca push ecx */
  push32((uint32_t)(ECX));
  /* 12114bcb push 9 */
  push32((uint32_t)(0x9u));
  /* 12114bcd call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114bd3u);
  /* 12114bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114bd8 call 0x12116a60 */
  push32(0x12114bddu); f_12116a60();
L_12114bdd:;
  /* 12114bdd mov esi, esp */
  ESI = (ESP);
  /* 12114bdf push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12114be1 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114be7u);
  /* 12114be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114bea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114bec call 0x12116a60 */
  push32(0x12114bf1u); f_12116a60();
  /* 12114bf1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114bf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114bf8 je 0x12114c81 */
  if (C.zf) goto L_12114c81;
  /* 12114bfe mov esi, esp */
  ESI = (ESP);
  /* 12114c00 push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 12114c05 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114c0bu);
  /* 12114c0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114c10 call 0x12116a60 */
  push32(0x12114c15u); f_12116a60();
  /* 12114c15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114c17 jle 0x12114c81 */
  if ((C.zf||C.sf!=C.of)) goto L_12114c81;
  /* 12114c19 mov esi, esp */
  ESI = (ESP);
  /* 12114c1b push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 12114c20 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114c26u);
  /* 12114c26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114c29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114c2b call 0x12116a60 */
  push32(0x12114c30u); f_12116a60();
  /* 12114c30 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114c33 jge 0x12114c81 */
  if ((C.sf==C.of)) goto L_12114c81;
  /* 12114c35 mov esi, esp */
  ESI = (ESP);
  /* 12114c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114c39 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12114c3b call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114c41u);
  /* 12114c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114c46 call 0x12116a60 */
  push32(0x12114c4bu); f_12116a60();
  /* 12114c4b mov esi, esp */
  ESI = (ESP);
  /* 12114c4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12114c4f call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114c55u);
  /* 12114c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114c58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114c5a call 0x12116a60 */
  push32(0x12114c5fu); f_12116a60();
  /* 12114c5f mov edx, 5 */
  EDX = (0x5u);
  /* 12114c64 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114c66 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114c6c mov esi, esp */
  ESI = (ESP);
  /* 12114c6e push edx */
  push32((uint32_t)(EDX));
  /* 12114c6f push 0xa */
  push32((uint32_t)(0xau));
  /* 12114c71 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114c77u);
  /* 12114c77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114c7c call 0x12116a60 */
  push32(0x12114c81u); f_12116a60();
L_12114c81:;
  /* 12114c81 mov esi, esp */
  ESI = (ESP);
  /* 12114c83 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12114c85 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114c8bu);
  /* 12114c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114c8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114c90 call 0x12116a60 */
  push32(0x12114c95u); f_12116a60();
  /* 12114c95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114c9c je 0x12114d25 */
  if (C.zf) goto L_12114d25;
  /* 12114ca2 mov esi, esp */
  ESI = (ESP);
  /* 12114ca4 push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 12114ca9 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114cafu);
  /* 12114caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114cb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114cb4 call 0x12116a60 */
  push32(0x12114cb9u); f_12116a60();
  /* 12114cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114cbb jle 0x12114d25 */
  if ((C.zf||C.sf!=C.of)) goto L_12114d25;
  /* 12114cbd mov esi, esp */
  ESI = (ESP);
  /* 12114cbf push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12114cc4 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114ccau);
  /* 12114cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114ccd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ccf call 0x12116a60 */
  push32(0x12114cd4u); f_12116a60();
  /* 12114cd4 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114cd7 jge 0x12114d25 */
  if ((C.sf==C.of)) goto L_12114d25;
  /* 12114cd9 mov esi, esp */
  ESI = (ESP);
  /* 12114cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12114cdd push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12114cdf call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114ce5u);
  /* 12114ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114ce8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114cea call 0x12116a60 */
  push32(0x12114cefu); f_12116a60();
  /* 12114cef mov esi, esp */
  ESI = (ESP);
  /* 12114cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114cf3 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114cf9u);
  /* 12114cf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114cfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114cfe call 0x12116a60 */
  push32(0x12114d03u); f_12116a60();
  /* 12114d03 mov ecx, 5 */
  ECX = (0x5u);
  /* 12114d08 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114d0a imul ecx, ecx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x258u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114d10 mov esi, esp */
  ESI = (ESP);
  /* 12114d12 push ecx */
  push32((uint32_t)(ECX));
  /* 12114d13 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12114d15 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114d1bu);
  /* 12114d1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114d1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114d20 call 0x12116a60 */
  push32(0x12114d25u); f_12116a60();
L_12114d25:;
  /* 12114d25 mov esi, esp */
  ESI = (ESP);
  /* 12114d27 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12114d29 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12114d2fu);
  /* 12114d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114d32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114d34 call 0x12116a60 */
  push32(0x12114d39u); f_12116a60();
  /* 12114d39 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114d3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114d40 je 0x12114dc9 */
  if (C.zf) goto L_12114dc9;
  /* 12114d46 mov esi, esp */
  ESI = (ESP);
  /* 12114d48 push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 12114d4d call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114d53u);
  /* 12114d53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114d56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114d58 call 0x12116a60 */
  push32(0x12114d5du); f_12116a60();
  /* 12114d5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114d5f jle 0x12114dc9 */
  if ((C.zf||C.sf!=C.of)) goto L_12114dc9;
  /* 12114d61 mov esi, esp */
  ESI = (ESP);
  /* 12114d63 push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12114d68 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x12114d6eu);
  /* 12114d6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114d71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114d73 call 0x12116a60 */
  push32(0x12114d78u); f_12116a60();
  /* 12114d78 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114d7b jge 0x12114dc9 */
  if ((C.sf==C.of)) goto L_12114dc9;
  /* 12114d7d mov esi, esp */
  ESI = (ESP);
  /* 12114d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12114d81 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12114d83 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114d89u);
  /* 12114d89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114d8e call 0x12116a60 */
  push32(0x12114d93u); f_12116a60();
  /* 12114d93 mov esi, esp */
  ESI = (ESP);
  /* 12114d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114d97 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12114d9du);
  /* 12114d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114da2 call 0x12116a60 */
  push32(0x12114da7u); f_12116a60();
  /* 12114da7 mov edx, 5 */
  EDX = (0x5u);
  /* 12114dac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12114dae imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12114db4 mov esi, esp */
  ESI = (ESP);
  /* 12114db6 push edx */
  push32((uint32_t)(EDX));
  /* 12114db7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12114db9 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12114dbfu);
  /* 12114dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114dc4 call 0x12116a60 */
  push32(0x12114dc9u); f_12116a60();
L_12114dc9:;
  /* 12114dc9 mov esi, esp */
  ESI = (ESP);
  /* 12114dcb push 0xe */
  push32((uint32_t)(0xeu));
  /* 12114dcd call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12114dd3u);
  /* 12114dd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114dd8 call 0x12116a60 */
  push32(0x12114dddu); f_12116a60();
  /* 12114ddd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114de2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114de4 je 0x12114e62 */
  if (C.zf) goto L_12114e62;
  /* 12114de6 mov esi, esp */
  ESI = (ESP);
  /* 12114de8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12114dea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12114dec call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114df2u);
  /* 12114df2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114df5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114df7 call 0x12116a60 */
  push32(0x12114dfcu); f_12116a60();
  /* 12114dfc mov esi, esp */
  ESI = (ESP);
  /* 12114dfe push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12114e03 push 0x12143438 */
  push32((uint32_t)(0x12143438u));
  /* 12114e08 call dword ptr [0x121464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d0))), 0x12114e0eu);
  /* 12114e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114e11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114e13 call 0x12116a60 */
  push32(0x12114e18u); f_12116a60();
  /* 12114e18 mov esi, esp */
  ESI = (ESP);
  /* 12114e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12114e1c push 0x12143420 */
  push32((uint32_t)(0x12143420u));
  /* 12114e21 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12114e27u);
  /* 12114e27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114e2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114e2c call 0x12116a60 */
  push32(0x12114e31u); f_12116a60();
  /* 12114e31 mov esi, esp */
  ESI = (ESP);
  /* 12114e33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114e35 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12114e37 push 0x12143688 */
  push32((uint32_t)(0x12143688u));
  /* 12114e3c push 3 */
  push32((uint32_t)(0x3u));
  /* 12114e3e call dword ptr [0x121464ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464ec))), 0x12114e44u);
  /* 12114e44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114e47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114e49 call 0x12116a60 */
  push32(0x12114e4eu); f_12116a60();
  /* 12114e4e mov esi, esp */
  ESI = (ESP);
  /* 12114e50 push 3 */
  push32((uint32_t)(0x3u));
  /* 12114e52 call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x12114e58u);
  /* 12114e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114e5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114e5d call 0x12116a60 */
  push32(0x12114e62u); f_12116a60();
L_12114e62:;
  /* 12114e62 mov esi, esp */
  ESI = (ESP);
  /* 12114e64 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12114e66 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12114e6cu);
  /* 12114e6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114e6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114e71 call 0x12116a60 */
  push32(0x12114e76u); f_12116a60();
  /* 12114e76 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114e7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114e7d je 0x12114efc */
  if (C.zf) goto L_12114efc;
  /* 12114e7f mov esi, esp */
  ESI = (ESP);
  /* 12114e81 push 1 */
  push32((uint32_t)(0x1u));
  /* 12114e83 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12114e85 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114e8bu);
  /* 12114e8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114e8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114e90 call 0x12116a60 */
  push32(0x12114e95u); f_12116a60();
  /* 12114e95 mov esi, esp */
  ESI = (ESP);
  /* 12114e97 push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 12114e9c push 0x12143540 */
  push32((uint32_t)(0x12143540u));
  /* 12114ea1 call dword ptr [0x121464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d0))), 0x12114ea7u);
  /* 12114ea7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114eaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114eac call 0x12116a60 */
  push32(0x12114eb1u); f_12116a60();
  /* 12114eb1 mov esi, esp */
  ESI = (ESP);
  /* 12114eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114eb5 push 0x12143418 */
  push32((uint32_t)(0x12143418u));
  /* 12114eba call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12114ec0u);
  /* 12114ec0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114ec3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ec5 call 0x12116a60 */
  push32(0x12114ecau); f_12116a60();
  /* 12114eca mov esi, esp */
  ESI = (ESP);
  /* 12114ecc push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12114ed1 push 0x121435e8 */
  push32((uint32_t)(0x121435e8u));
  /* 12114ed6 push 3 */
  push32((uint32_t)(0x3u));
  /* 12114ed8 call dword ptr [0x12146484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146484))), 0x12114edeu);
  /* 12114ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114ee1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ee3 call 0x12116a60 */
  push32(0x12114ee8u); f_12116a60();
  /* 12114ee8 mov esi, esp */
  ESI = (ESP);
  /* 12114eea push 3 */
  push32((uint32_t)(0x3u));
  /* 12114eec call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x12114ef2u);
  /* 12114ef2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114ef5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ef7 call 0x12116a60 */
  push32(0x12114efcu); f_12116a60();
L_12114efc:;
  /* 12114efc mov esi, esp */
  ESI = (ESP);
  /* 12114efe push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12114f00 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12114f06u);
  /* 12114f06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114f09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114f0b call 0x12116a60 */
  push32(0x12114f10u); f_12116a60();
  /* 12114f10 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114f15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114f17 je 0x12114f95 */
  if (C.zf) goto L_12114f95;
  /* 12114f19 mov esi, esp */
  ESI = (ESP);
  /* 12114f1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12114f1d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12114f1f call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114f25u);
  /* 12114f25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114f28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114f2a call 0x12116a60 */
  push32(0x12114f2fu); f_12116a60();
  /* 12114f2f mov esi, esp */
  ESI = (ESP);
  /* 12114f31 push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12114f36 push 0x12143538 */
  push32((uint32_t)(0x12143538u));
  /* 12114f3b call dword ptr [0x121464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d0))), 0x12114f41u);
  /* 12114f41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114f44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114f46 call 0x12116a60 */
  push32(0x12114f4bu); f_12116a60();
  /* 12114f4b mov esi, esp */
  ESI = (ESP);
  /* 12114f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 12114f4f push 0x12143430 */
  push32((uint32_t)(0x12143430u));
  /* 12114f54 call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12114f5au);
  /* 12114f5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114f5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114f5f call 0x12116a60 */
  push32(0x12114f64u); f_12116a60();
  /* 12114f64 mov esi, esp */
  ESI = (ESP);
  /* 12114f66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114f68 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12114f6a push 0x12143690 */
  push32((uint32_t)(0x12143690u));
  /* 12114f6f push 3 */
  push32((uint32_t)(0x3u));
  /* 12114f71 call dword ptr [0x121464ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464ec))), 0x12114f77u);
  /* 12114f77 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114f7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114f7c call 0x12116a60 */
  push32(0x12114f81u); f_12116a60();
  /* 12114f81 mov esi, esp */
  ESI = (ESP);
  /* 12114f83 push 3 */
  push32((uint32_t)(0x3u));
  /* 12114f85 call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x12114f8bu);
  /* 12114f8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114f8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114f90 call 0x12116a60 */
  push32(0x12114f95u); f_12116a60();
L_12114f95:;
  /* 12114f95 mov esi, esp */
  ESI = (ESP);
  /* 12114f97 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12114f99 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12114f9fu);
  /* 12114f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114fa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114fa4 call 0x12116a60 */
  push32(0x12114fa9u); f_12116a60();
  /* 12114fa9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12114fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12114fb0 je 0x1211502f */
  if (C.zf) goto L_1211502f;
  /* 12114fb2 mov esi, esp */
  ESI = (ESP);
  /* 12114fb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12114fb6 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12114fb8 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12114fbeu);
  /* 12114fbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114fc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114fc3 call 0x12116a60 */
  push32(0x12114fc8u); f_12116a60();
  /* 12114fc8 mov esi, esp */
  ESI = (ESP);
  /* 12114fca push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12114fcf push 0x12143578 */
  push32((uint32_t)(0x12143578u));
  /* 12114fd4 call dword ptr [0x121464d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464d0))), 0x12114fdau);
  /* 12114fda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114fdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114fdf call 0x12116a60 */
  push32(0x12114fe4u); f_12116a60();
  /* 12114fe4 mov esi, esp */
  ESI = (ESP);
  /* 12114fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12114fe8 push 0x12143428 */
  push32((uint32_t)(0x12143428u));
  /* 12114fed call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12114ff3u);
  /* 12114ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12114ff6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12114ff8 call 0x12116a60 */
  push32(0x12114ffdu); f_12116a60();
  /* 12114ffd mov esi, esp */
  ESI = (ESP);
  /* 12114fff push 0x82 */
  push32((uint32_t)(0x82u));
  /* 12115004 push 0x121436b0 */
  push32((uint32_t)(0x121436b0u));
  /* 12115009 push 3 */
  push32((uint32_t)(0x3u));
  /* 1211500b call dword ptr [0x12146484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146484))), 0x12115011u);
  /* 12115011 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115014 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115016 call 0x12116a60 */
  push32(0x1211501bu); f_12116a60();
  /* 1211501b mov esi, esp */
  ESI = (ESP);
  /* 1211501d push 3 */
  push32((uint32_t)(0x3u));
  /* 1211501f call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x12115025u);
  /* 12115025 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115028 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211502a call 0x12116a60 */
  push32(0x1211502fu); f_12116a60();
L_1211502f:;
  /* 1211502f mov esi, esp */
  ESI = (ESP);
  /* 12115031 push 0 */
  push32((uint32_t)(0x0u));
  /* 12115033 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12115039u);
  /* 12115039 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211503c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211503e call 0x12116a60 */
  push32(0x12115043u); f_12116a60();
  /* 12115043 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12115046 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211504a je 0x1211505b */
  if (C.zf) goto L_1211505b;
  /* 1211504c cmp dword ptr [ebp - 0x18], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115050 je 0x121151c4 */
  if (C.zf) goto L_121151c4;
  /* 12115056 jmp 0x1211532d */
  goto L_1211532d;
L_1211505b:;
  /* 1211505b mov esi, esp */
  ESI = (ESP);
  /* 1211505d push 9 */
  push32((uint32_t)(0x9u));
  /* 1211505f call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12115065u);
  /* 12115065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211506a call 0x12116a60 */
  push32(0x1211506fu); f_12116a60();
  /* 1211506f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115076 je 0x121150b4 */
  if (C.zf) goto L_121150b4;
  /* 12115078 mov esi, esp */
  ESI = (ESP);
  /* 1211507a push 1 */
  push32((uint32_t)(0x1u));
  /* 1211507c push 0x12143438 */
  push32((uint32_t)(0x12143438u));
  /* 12115081 push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 12115086 push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 1211508b call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x12115091u);
  /* 12115091 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115094 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115096 call 0x12116a60 */
  push32(0x1211509bu); f_12116a60();
  /* 1211509b mov esi, esp */
  ESI = (ESP);
  /* 1211509d push 0x258 */
  push32((uint32_t)(0x258u));
  /* 121150a2 push 0xe */
  push32((uint32_t)(0xeu));
  /* 121150a4 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121150aau);
  /* 121150aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121150ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121150af call 0x12116a60 */
  push32(0x121150b4u); f_12116a60();
L_121150b4:;
  /* 121150b4 mov esi, esp */
  ESI = (ESP);
  /* 121150b6 push 0xa */
  push32((uint32_t)(0xau));
  /* 121150b8 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x121150beu);
  /* 121150be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121150c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121150c3 call 0x12116a60 */
  push32(0x121150c8u); f_12116a60();
  /* 121150c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121150cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121150cf je 0x1211510d */
  if (C.zf) goto L_1211510d;
  /* 121150d1 mov esi, esp */
  ESI = (ESP);
  /* 121150d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121150d5 push 0x12143540 */
  push32((uint32_t)(0x12143540u));
  /* 121150da push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 121150df push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 121150e4 call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x121150eau);
  /* 121150ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121150ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121150ef call 0x12116a60 */
  push32(0x121150f4u); f_12116a60();
  /* 121150f4 mov esi, esp */
  ESI = (ESP);
  /* 121150f6 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 121150fb push 0xf */
  push32((uint32_t)(0xfu));
  /* 121150fd call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12115103u);
  /* 12115103 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115106 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115108 call 0x12116a60 */
  push32(0x1211510du); f_12116a60();
L_1211510d:;
  /* 1211510d mov esi, esp */
  ESI = (ESP);
  /* 1211510f push 0xb */
  push32((uint32_t)(0xbu));
  /* 12115111 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12115117u);
  /* 12115117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211511a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211511c call 0x12116a60 */
  push32(0x12115121u); f_12116a60();
  /* 12115121 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115126 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115128 je 0x12115166 */
  if (C.zf) goto L_12115166;
  /* 1211512a mov esi, esp */
  ESI = (ESP);
  /* 1211512c push 1 */
  push32((uint32_t)(0x1u));
  /* 1211512e push 0x12143538 */
  push32((uint32_t)(0x12143538u));
  /* 12115133 push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 12115138 push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 1211513d call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x12115143u);
  /* 12115143 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115146 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115148 call 0x12116a60 */
  push32(0x1211514du); f_12116a60();
  /* 1211514d mov esi, esp */
  ESI = (ESP);
  /* 1211514f push 0x258 */
  push32((uint32_t)(0x258u));
  /* 12115154 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12115156 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x1211515cu);
  /* 1211515c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211515f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115161 call 0x12116a60 */
  push32(0x12115166u); f_12116a60();
L_12115166:;
  /* 12115166 mov esi, esp */
  ESI = (ESP);
  /* 12115168 push 0xc */
  push32((uint32_t)(0xcu));
  /* 1211516a call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12115170u);
  /* 12115170 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115173 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115175 call 0x12116a60 */
  push32(0x1211517au); f_12116a60();
  /* 1211517a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211517f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115181 je 0x121151bf */
  if (C.zf) goto L_121151bf;
  /* 12115183 mov esi, esp */
  ESI = (ESP);
  /* 12115185 push 1 */
  push32((uint32_t)(0x1u));
  /* 12115187 push 0x12143578 */
  push32((uint32_t)(0x12143578u));
  /* 1211518c push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12115191 push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 12115196 call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x1211519cu);
  /* 1211519c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211519f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121151a1 call 0x12116a60 */
  push32(0x121151a6u); f_12116a60();
  /* 121151a6 mov esi, esp */
  ESI = (ESP);
  /* 121151a8 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 121151ad push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121151af call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121151b5u);
  /* 121151b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121151b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121151ba call 0x12116a60 */
  push32(0x121151bfu); f_12116a60();
L_121151bf:;
  /* 121151bf jmp 0x12115491 */
  goto L_12115491;
L_121151c4:;
  /* 121151c4 mov esi, esp */
  ESI = (ESP);
  /* 121151c6 push 9 */
  push32((uint32_t)(0x9u));
  /* 121151c8 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x121151ceu);
  /* 121151ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121151d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121151d3 call 0x12116a60 */
  push32(0x121151d8u); f_12116a60();
  /* 121151d8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121151dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121151df je 0x1211521d */
  if (C.zf) goto L_1211521d;
  /* 121151e1 mov esi, esp */
  ESI = (ESP);
  /* 121151e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121151e5 push 0x12143438 */
  push32((uint32_t)(0x12143438u));
  /* 121151ea push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 121151ef push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 121151f4 call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x121151fau);
  /* 121151fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121151fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121151ff call 0x12116a60 */
  push32(0x12115204u); f_12116a60();
  /* 12115204 mov esi, esp */
  ESI = (ESP);
  /* 12115206 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 1211520b push 0xe */
  push32((uint32_t)(0xeu));
  /* 1211520d call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12115213u);
  /* 12115213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115216 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115218 call 0x12116a60 */
  push32(0x1211521du); f_12116a60();
L_1211521d:;
  /* 1211521d mov esi, esp */
  ESI = (ESP);
  /* 1211521f push 0xa */
  push32((uint32_t)(0xau));
  /* 12115221 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12115227u);
  /* 12115227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211522a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211522c call 0x12116a60 */
  push32(0x12115231u); f_12116a60();
  /* 12115231 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115238 je 0x12115276 */
  if (C.zf) goto L_12115276;
  /* 1211523a mov esi, esp */
  ESI = (ESP);
  /* 1211523c push 1 */
  push32((uint32_t)(0x1u));
  /* 1211523e push 0x12143540 */
  push32((uint32_t)(0x12143540u));
  /* 12115243 push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12115248 push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 1211524d call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x12115253u);
  /* 12115253 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115256 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115258 call 0x12116a60 */
  push32(0x1211525du); f_12116a60();
  /* 1211525d mov esi, esp */
  ESI = (ESP);
  /* 1211525f push 0x258 */
  push32((uint32_t)(0x258u));
  /* 12115264 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12115266 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x1211526cu);
  /* 1211526c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211526f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115271 call 0x12116a60 */
  push32(0x12115276u); f_12116a60();
L_12115276:;
  /* 12115276 mov esi, esp */
  ESI = (ESP);
  /* 12115278 push 0xb */
  push32((uint32_t)(0xbu));
  /* 1211527a call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12115280u);
  /* 12115280 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115285 call 0x12116a60 */
  push32(0x1211528au); f_12116a60();
  /* 1211528a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211528f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115291 je 0x121152cf */
  if (C.zf) goto L_121152cf;
  /* 12115293 mov esi, esp */
  ESI = (ESP);
  /* 12115295 push 1 */
  push32((uint32_t)(0x1u));
  /* 12115297 push 0x12143538 */
  push32((uint32_t)(0x12143538u));
  /* 1211529c push 0x12143410 */
  push32((uint32_t)(0x12143410u));
  /* 121152a1 push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 121152a6 call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x121152acu);
  /* 121152ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121152af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121152b1 call 0x12116a60 */
  push32(0x121152b6u); f_12116a60();
  /* 121152b6 mov esi, esp */
  ESI = (ESP);
  /* 121152b8 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 121152bd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 121152bf call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121152c5u);
  /* 121152c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121152c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121152ca call 0x12116a60 */
  push32(0x121152cfu); f_12116a60();
L_121152cf:;
  /* 121152cf mov esi, esp */
  ESI = (ESP);
  /* 121152d1 push 0xc */
  push32((uint32_t)(0xcu));
  /* 121152d3 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x121152d9u);
  /* 121152d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121152dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121152de call 0x12116a60 */
  push32(0x121152e3u); f_12116a60();
  /* 121152e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121152e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121152ea je 0x12115328 */
  if (C.zf) goto L_12115328;
  /* 121152ec mov esi, esp */
  ESI = (ESP);
  /* 121152ee push 1 */
  push32((uint32_t)(0x1u));
  /* 121152f0 push 0x12143578 */
  push32((uint32_t)(0x12143578u));
  /* 121152f5 push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 121152fa push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 121152ff call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x12115305u);
  /* 12115305 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115308 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211530a call 0x12116a60 */
  push32(0x1211530fu); f_12116a60();
  /* 1211530f mov esi, esp */
  ESI = (ESP);
  /* 12115311 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 12115316 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12115318 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x1211531eu);
  /* 1211531e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115321 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115323 call 0x12116a60 */
  push32(0x12115328u); f_12116a60();
L_12115328:;
  /* 12115328 jmp 0x12115491 */
  goto L_12115491;
L_1211532d:;
  /* 1211532d mov esi, esp */
  ESI = (ESP);
  /* 1211532f push 9 */
  push32((uint32_t)(0x9u));
  /* 12115331 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12115337u);
  /* 12115337 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211533a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211533c call 0x12116a60 */
  push32(0x12115341u); f_12116a60();
  /* 12115341 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115346 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115348 je 0x12115386 */
  if (C.zf) goto L_12115386;
  /* 1211534a mov esi, esp */
  ESI = (ESP);
  /* 1211534c push 1 */
  push32((uint32_t)(0x1u));
  /* 1211534e push 0x12143438 */
  push32((uint32_t)(0x12143438u));
  /* 12115353 push 0x121435a0 */
  push32((uint32_t)(0x121435a0u));
  /* 12115358 push 0x121433e8 */
  push32((uint32_t)(0x121433e8u));
  /* 1211535d call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x12115363u);
  /* 12115363 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115366 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115368 call 0x12116a60 */
  push32(0x1211536du); f_12116a60();
  /* 1211536d mov esi, esp */
  ESI = (ESP);
  /* 1211536f push 0x258 */
  push32((uint32_t)(0x258u));
  /* 12115374 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12115376 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x1211537cu);
  /* 1211537c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211537f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115381 call 0x12116a60 */
  push32(0x12115386u); f_12116a60();
L_12115386:;
  /* 12115386 mov esi, esp */
  ESI = (ESP);
  /* 12115388 push 0xa */
  push32((uint32_t)(0xau));
  /* 1211538a call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12115390u);
  /* 12115390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115393 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115395 call 0x12116a60 */
  push32(0x1211539au); f_12116a60();
  /* 1211539a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211539f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121153a1 je 0x121153df */
  if (C.zf) goto L_121153df;
  /* 121153a3 mov esi, esp */
  ESI = (ESP);
  /* 121153a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 121153a7 push 0x12143540 */
  push32((uint32_t)(0x12143540u));
  /* 121153ac push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 121153b1 push 0x121433e0 */
  push32((uint32_t)(0x121433e0u));
  /* 121153b6 call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x121153bcu);
  /* 121153bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121153bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121153c1 call 0x12116a60 */
  push32(0x121153c6u); f_12116a60();
  /* 121153c6 mov esi, esp */
  ESI = (ESP);
  /* 121153c8 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 121153cd push 0xf */
  push32((uint32_t)(0xfu));
  /* 121153cf call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121153d5u);
  /* 121153d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121153d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121153da call 0x12116a60 */
  push32(0x121153dfu); f_12116a60();
L_121153df:;
  /* 121153df mov esi, esp */
  ESI = (ESP);
  /* 121153e1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121153e3 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x121153e9u);
  /* 121153e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121153ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121153ee call 0x12116a60 */
  push32(0x121153f3u); f_12116a60();
  /* 121153f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121153f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121153fa je 0x12115438 */
  if (C.zf) goto L_12115438;
  /* 121153fc mov esi, esp */
  ESI = (ESP);
  /* 121153fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12115400 push 0x12143538 */
  push32((uint32_t)(0x12143538u));
  /* 12115405 push 0x121435a0 */
  push32((uint32_t)(0x121435a0u));
  /* 1211540a push 0x121433f8 */
  push32((uint32_t)(0x121433f8u));
  /* 1211540f call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x12115415u);
  /* 12115415 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211541a call 0x12116a60 */
  push32(0x1211541fu); f_12116a60();
  /* 1211541f mov esi, esp */
  ESI = (ESP);
  /* 12115421 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 12115426 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12115428 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x1211542eu);
  /* 1211542e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115431 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115433 call 0x12116a60 */
  push32(0x12115438u); f_12116a60();
L_12115438:;
  /* 12115438 mov esi, esp */
  ESI = (ESP);
  /* 1211543a push 0xc */
  push32((uint32_t)(0xcu));
  /* 1211543c call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x12115442u);
  /* 12115442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115445 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115447 call 0x12116a60 */
  push32(0x1211544cu); f_12116a60();
  /* 1211544c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115451 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115453 je 0x12115491 */
  if (C.zf) goto L_12115491;
  /* 12115455 mov esi, esp */
  ESI = (ESP);
  /* 12115457 push 1 */
  push32((uint32_t)(0x1u));
  /* 12115459 push 0x12143578 */
  push32((uint32_t)(0x12143578u));
  /* 1211545e push 0x121434a8 */
  push32((uint32_t)(0x121434a8u));
  /* 12115463 push 0x121433f0 */
  push32((uint32_t)(0x121433f0u));
  /* 12115468 call dword ptr [0x121464cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464cc))), 0x1211546eu);
  /* 1211546e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115471 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115473 call 0x12116a60 */
  push32(0x12115478u); f_12116a60();
  /* 12115478 mov esi, esp */
  ESI = (ESP);
  /* 1211547a push 0x258 */
  push32((uint32_t)(0x258u));
  /* 1211547f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12115481 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x12115487u);
  /* 12115487 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211548a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211548c call 0x12116a60 */
  push32(0x12115491u); f_12116a60();
L_12115491:;
  /* 12115491 mov esi, esp */
  ESI = (ESP);
  /* 12115493 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12115495 call dword ptr [0x121464a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a8))), 0x1211549bu);
  /* 1211549b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211549e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121154a0 call 0x12116a60 */
  push32(0x121154a5u); f_12116a60();
  /* 121154a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121154aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121154ac je 0x121156b2 */
  if (C.zf) goto L_121156b2;
  /* 121154b2 mov esi, esp */
  ESI = (ESP);
  /* 121154b4 push 4 */
  push32((uint32_t)(0x4u));
  /* 121154b6 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121154bcu);
  /* 121154bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121154bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121154c1 call 0x12116a60 */
  push32(0x121154c6u); f_12116a60();
  /* 121154c6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121154cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121154cd jne 0x121154f0 */
  if (!C.zf) goto L_121154f0;
  /* 121154cf mov esi, esp */
  ESI = (ESP);
  /* 121154d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 121154d3 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121154d9u);
  /* 121154d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121154dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121154de call 0x12116a60 */
  push32(0x121154e3u); f_12116a60();
  /* 121154e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121154e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121154ea je 0x121156b2 */
  if (C.zf) goto L_121156b2;
L_121154f0:;
  /* 121154f0 mov esi, esp */
  ESI = (ESP);
  /* 121154f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121154f4 call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x121154fau);
  /* 121154fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121154fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121154ff call 0x12116a60 */
  push32(0x12115504u); f_12116a60();
  /* 12115504 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12115507 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211550b ja 0x12115679 */
  if ((!C.cf&&!C.zf)) goto L_12115679;
  /* 12115511 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12115514 jmp dword ptr [eax*4 + 0x12115b0c] */
  switch (EAX) {
    case 0: goto L_1211551b;
    case 1: goto L_12115570;
    case 2: goto L_121155cb;
    case 3: goto L_12115623;
    default: x86_unimpl("switch@0x12115514 out of table"); return;
  }
L_1211551b:;
  /* 1211551b mov ecx, dword ptr [0x12143548] */
  ECX = (r32((uint32_t)(0x12143548)));
  /* 12115521 mov dword ptr [0x12143548], ecx */
  w32((uint32_t)(0x12143548), (ECX));
  /* 12115527 mov edx, dword ptr [0x12143598] */
  EDX = (r32((uint32_t)(0x12143598)));
  /* 1211552d mov dword ptr [0x12143598], edx */
  w32((uint32_t)(0x12143598), (EDX));
  /* 12115533 mov eax, dword ptr [0x121435d8] */
  EAX = (r32((uint32_t)(0x121435d8)));
  /* 12115538 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211553b mov dword ptr [0x121435d8], eax */
  w32((uint32_t)(0x121435d8), (EAX));
  /* 12115540 mov ecx, dword ptr [0x12143628] */
  ECX = (r32((uint32_t)(0x12143628)));
  /* 12115546 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115549 mov dword ptr [0x12143628], ecx */
  w32((uint32_t)(0x12143628), (ECX));
  /* 1211554f mov edx, dword ptr [0x12143660] */
  EDX = (r32((uint32_t)(0x12143660)));
  /* 12115555 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115558 mov dword ptr [0x12143660], edx */
  w32((uint32_t)(0x12143660), (EDX));
  /* 1211555e mov eax, dword ptr [0x12143680] */
  EAX = (r32((uint32_t)(0x12143680)));
  /* 12115563 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115566 mov dword ptr [0x12143680], eax */
  w32((uint32_t)(0x12143680), (EAX));
  /* 1211556b jmp 0x12115679 */
  goto L_12115679;
L_12115570:;
  /* 12115570 mov ecx, dword ptr [0x12143548] */
  ECX = (r32((uint32_t)(0x12143548)));
  /* 12115576 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115579 mov dword ptr [0x12143548], ecx */
  w32((uint32_t)(0x12143548), (ECX));
  /* 1211557f mov edx, dword ptr [0x12143598] */
  EDX = (r32((uint32_t)(0x12143598)));
  /* 12115585 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115588 mov dword ptr [0x12143598], edx */
  w32((uint32_t)(0x12143598), (EDX));
  /* 1211558e mov eax, dword ptr [0x121435d8] */
  EAX = (r32((uint32_t)(0x121435d8)));
  /* 12115593 add eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115596 mov dword ptr [0x121435d8], eax */
  w32((uint32_t)(0x121435d8), (EAX));
  /* 1211559b mov ecx, dword ptr [0x12143628] */
  ECX = (r32((uint32_t)(0x12143628)));
  /* 121155a1 add ecx, 5 */
  { uint32_t _a=(ECX),_b=(0x5u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121155a4 mov dword ptr [0x12143628], ecx */
  w32((uint32_t)(0x12143628), (ECX));
  /* 121155aa mov edx, dword ptr [0x12143660] */
  EDX = (r32((uint32_t)(0x12143660)));
  /* 121155b0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121155b3 mov dword ptr [0x12143660], edx */
  w32((uint32_t)(0x12143660), (EDX));
  /* 121155b9 mov eax, dword ptr [0x12143680] */
  EAX = (r32((uint32_t)(0x12143680)));
  /* 121155be add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121155c1 mov dword ptr [0x12143680], eax */
  w32((uint32_t)(0x12143680), (EAX));
  /* 121155c6 jmp 0x12115679 */
  goto L_12115679;
L_121155cb:;
  /* 121155cb mov ecx, dword ptr [0x12143548] */
  ECX = (r32((uint32_t)(0x12143548)));
  /* 121155d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121155d4 mov dword ptr [0x12143548], ecx */
  w32((uint32_t)(0x12143548), (ECX));
  /* 121155da mov edx, dword ptr [0x12143598] */
  EDX = (r32((uint32_t)(0x12143598)));
  /* 121155e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121155e3 mov dword ptr [0x12143598], edx */
  w32((uint32_t)(0x12143598), (EDX));
  /* 121155e9 mov eax, dword ptr [0x121435d8] */
  EAX = (r32((uint32_t)(0x121435d8)));
  /* 121155ee add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121155f1 mov dword ptr [0x121435d8], eax */
  w32((uint32_t)(0x121435d8), (EAX));
  /* 121155f6 mov ecx, dword ptr [0x12143628] */
  ECX = (r32((uint32_t)(0x12143628)));
  /* 121155fc add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121155ff mov dword ptr [0x12143628], ecx */
  w32((uint32_t)(0x12143628), (ECX));
  /* 12115605 mov edx, dword ptr [0x12143660] */
  EDX = (r32((uint32_t)(0x12143660)));
  /* 1211560b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211560e mov dword ptr [0x12143660], edx */
  w32((uint32_t)(0x12143660), (EDX));
  /* 12115614 mov eax, dword ptr [0x12143680] */
  EAX = (r32((uint32_t)(0x12143680)));
  /* 12115619 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211561c mov dword ptr [0x12143680], eax */
  w32((uint32_t)(0x12143680), (EAX));
  /* 12115621 jmp 0x12115679 */
  goto L_12115679;
L_12115623:;
  /* 12115623 mov ecx, dword ptr [0x12143548] */
  ECX = (r32((uint32_t)(0x12143548)));
  /* 12115629 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211562c mov dword ptr [0x12143548], ecx */
  w32((uint32_t)(0x12143548), (ECX));
  /* 12115632 mov edx, dword ptr [0x12143598] */
  EDX = (r32((uint32_t)(0x12143598)));
  /* 12115638 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211563b mov dword ptr [0x12143598], edx */
  w32((uint32_t)(0x12143598), (EDX));
  /* 12115641 mov eax, dword ptr [0x121435d8] */
  EAX = (r32((uint32_t)(0x121435d8)));
  /* 12115646 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115649 mov dword ptr [0x121435d8], eax */
  w32((uint32_t)(0x121435d8), (EAX));
  /* 1211564e mov ecx, dword ptr [0x12143628] */
  ECX = (r32((uint32_t)(0x12143628)));
  /* 12115654 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115657 mov dword ptr [0x12143628], ecx */
  w32((uint32_t)(0x12143628), (ECX));
  /* 1211565d mov edx, dword ptr [0x12143660] */
  EDX = (r32((uint32_t)(0x12143660)));
  /* 12115663 add edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115666 mov dword ptr [0x12143660], edx */
  w32((uint32_t)(0x12143660), (EDX));
  /* 1211566c mov eax, dword ptr [0x12143680] */
  EAX = (r32((uint32_t)(0x12143680)));
  /* 12115671 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12115674 mov dword ptr [0x12143680], eax */
  w32((uint32_t)(0x12143680), (EAX));
L_12115679:;
  /* 12115679 mov esi, esp */
  ESI = (ESP);
  /* 1211567b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211567d call dword ptr [0x12146490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146490))), 0x12115683u);
  /* 12115683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115688 call 0x12116a60 */
  push32(0x1211568du); f_12116a60();
  /* 1211568d mov ecx, 5 */
  ECX = (0x5u);
  /* 12115692 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12115694 shl ecx, 2 */
  ECX = (sh_shl((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12115697 imul ecx, ecx, 0x8fc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x8fcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211569d mov esi, esp */
  ESI = (ESP);
  /* 1211569f push ecx */
  push32((uint32_t)(ECX));
  /* 121156a0 push 0xd */
  push32((uint32_t)(0xdu));
  /* 121156a2 call dword ptr [0x12146494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146494))), 0x121156a8u);
  /* 121156a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121156ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121156ad call 0x12116a60 */
  push32(0x121156b2u); f_12116a60();
L_121156b2:;
  /* 121156b2 mov esi, esp */
  ESI = (ESP);
  /* 121156b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121156b6 push 0x121436d0 */
  push32((uint32_t)(0x121436d0u));
  /* 121156bb push 0 */
  push32((uint32_t)(0x0u));
  /* 121156bd call dword ptr [0x121464f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464f0))), 0x121156c3u);
  /* 121156c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121156c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121156c8 call 0x12116a60 */
  push32(0x121156cdu); f_12116a60();
  /* 121156cd mov esi, esp */
  ESI = (ESP);
  /* 121156cf push 0 */
  push32((uint32_t)(0x0u));
  /* 121156d1 call dword ptr [0x1214648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214648c))), 0x121156d7u);
  /* 121156d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121156da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121156dc call 0x12116a60 */
  push32(0x121156e1u); f_12116a60();
  /* 121156e1 mov esi, esp */
  ESI = (ESP);
  /* 121156e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121156e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121156e7 push 0x121436b8 */
  push32((uint32_t)(0x121436b8u));
  /* 121156ec call dword ptr [0x121464e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464e8))), 0x121156f2u);
  /* 121156f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121156f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121156f7 call 0x12116a60 */
  push32(0x121156fcu); f_12116a60();
  /* 121156fc mov esi, esp */
  ESI = (ESP);
  /* 121156fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12115700 push 0 */
  push32((uint32_t)(0x0u));
  /* 12115702 push 0x12143470 */
  push32((uint32_t)(0x12143470u));
  /* 12115707 call dword ptr [0x121464e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464e8))), 0x1211570du);
  /* 1211570d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115710 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115712 call 0x12116a60 */
  push32(0x12115717u); f_12116a60();
  /* 12115717 mov esi, esp */
  ESI = (ESP);
  /* 12115719 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211571b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211571d push 0x12143480 */
  push32((uint32_t)(0x12143480u));
  /* 12115722 call dword ptr [0x121464e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464e8))), 0x12115728u);
  /* 12115728 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211572b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211572d call 0x12116a60 */
  push32(0x12115732u); f_12116a60();
  /* 12115732 mov esi, esp */
  ESI = (ESP);
  /* 12115734 push 1 */
  push32((uint32_t)(0x1u));
  /* 12115736 push 0x121434e0 */
  push32((uint32_t)(0x121434e0u));
  /* 1211573b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211573d call dword ptr [0x121464f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464f8))), 0x12115743u);
  /* 12115743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115748 call 0x12116a60 */
  push32(0x1211574du); f_12116a60();
  /* 1211574d mov esi, esp */
  ESI = (ESP);
  /* 1211574f push 0 */
  push32((uint32_t)(0x0u));
  /* 12115751 call dword ptr [0x121464fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464fc))), 0x12115757u);
  /* 12115757 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211575a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211575c call 0x12116a60 */
  push32(0x12115761u); f_12116a60();
  /* 12115761 mov esi, esp */
  ESI = (ESP);
  /* 12115763 push 0 */
  push32((uint32_t)(0x0u));
  /* 12115765 push 0x121436d0 */
  push32((uint32_t)(0x121436d0u));
  /* 1211576a call dword ptr [0x12146480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146480))), 0x12115770u);
  /* 12115770 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115775 call 0x12116a60 */
  push32(0x1211577au); f_12116a60();
  /* 1211577a mov esi, esp */
  ESI = (ESP);
  /* 1211577c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1211577e call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12115784u);
  /* 12115784 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115787 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115789 call 0x12116a60 */
  push32(0x1211578eu); f_12116a60();
  /* 1211578e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115795 je 0x121157e1 */
  if (C.zf) goto L_121157e1;
  /* 12115797 mov esi, esp */
  ESI = (ESP);
  /* 12115799 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211579b call dword ptr [0x121464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464f4))), 0x121157a1u);
  /* 121157a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121157a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121157a6 call 0x12116a60 */
  push32(0x121157abu); f_12116a60();
  /* 121157ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121157b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121157b2 je 0x121157e1 */
  if (C.zf) goto L_121157e1;
  /* 121157b4 mov esi, esp */
  ESI = (ESP);
  /* 121157b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121157b8 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 121157ba call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121157c0u);
  /* 121157c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121157c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121157c5 call 0x12116a60 */
  push32(0x121157cau); f_12116a60();
  /* 121157ca mov esi, esp */
  ESI = (ESP);
  /* 121157cc push 0x1213e3e4 */
  push32((uint32_t)(0x1213e3e4u));
  /* 121157d1 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x121157d7u);
  /* 121157d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121157da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121157dc call 0x12116a60 */
  push32(0x121157e1u); f_12116a60();
L_121157e1:;
  /* 121157e1 mov esi, esp */
  ESI = (ESP);
  /* 121157e3 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121157e5 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121157ebu);
  /* 121157eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121157ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121157f0 call 0x12116a60 */
  push32(0x121157f5u); f_12116a60();
  /* 121157f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121157fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121157fc je 0x12115848 */
  if (C.zf) goto L_12115848;
  /* 121157fe mov esi, esp */
  ESI = (ESP);
  /* 12115800 push 2 */
  push32((uint32_t)(0x2u));
  /* 12115802 call dword ptr [0x121464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464f4))), 0x12115808u);
  /* 12115808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211580b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211580d call 0x12116a60 */
  push32(0x12115812u); f_12116a60();
  /* 12115812 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115817 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115819 je 0x12115848 */
  if (C.zf) goto L_12115848;
  /* 1211581b mov esi, esp */
  ESI = (ESP);
  /* 1211581d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211581f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12115821 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12115827u);
  /* 12115827 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211582a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211582c call 0x12116a60 */
  push32(0x12115831u); f_12116a60();
  /* 12115831 mov esi, esp */
  ESI = (ESP);
  /* 12115833 push 0x1213e3d8 */
  push32((uint32_t)(0x1213e3d8u));
  /* 12115838 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x1211583eu);
  /* 1211583e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115841 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115843 call 0x12116a60 */
  push32(0x12115848u); f_12116a60();
L_12115848:;
  /* 12115848 mov esi, esp */
  ESI = (ESP);
  /* 1211584a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1211584c call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12115852u);
  /* 12115852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115855 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115857 call 0x12116a60 */
  push32(0x1211585cu); f_12116a60();
  /* 1211585c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115863 je 0x121158cc */
  if (C.zf) goto L_121158cc;
  /* 12115865 mov esi, esp */
  ESI = (ESP);
  /* 12115867 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12115869 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x1211586fu);
  /* 1211586f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115872 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115874 call 0x12116a60 */
  push32(0x12115879u); f_12116a60();
  /* 12115879 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211587e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115880 jne 0x121158cc */
  if (!C.zf) goto L_121158cc;
  /* 12115882 mov esi, esp */
  ESI = (ESP);
  /* 12115884 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12115886 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x1211588cu);
  /* 1211588c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211588f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115891 call 0x12116a60 */
  push32(0x12115896u); f_12116a60();
  /* 12115896 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211589b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211589d jne 0x121158cc */
  if (!C.zf) goto L_121158cc;
  /* 1211589f mov esi, esp */
  ESI = (ESP);
  /* 121158a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121158a3 push 0xf */
  push32((uint32_t)(0xfu));
  /* 121158a5 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121158abu);
  /* 121158ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121158ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121158b0 call 0x12116a60 */
  push32(0x121158b5u); f_12116a60();
  /* 121158b5 mov esi, esp */
  ESI = (ESP);
  /* 121158b7 push 0x1213e3d0 */
  push32((uint32_t)(0x1213e3d0u));
  /* 121158bc call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x121158c2u);
  /* 121158c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121158c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121158c7 call 0x12116a60 */
  push32(0x121158ccu); f_12116a60();
L_121158cc:;
  /* 121158cc mov esi, esp */
  ESI = (ESP);
  /* 121158ce push 0x12 */
  push32((uint32_t)(0x12u));
  /* 121158d0 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121158d6u);
  /* 121158d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121158d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121158db call 0x12116a60 */
  push32(0x121158e0u); f_12116a60();
  /* 121158e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121158e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121158e7 je 0x12115959 */
  if (C.zf) goto L_12115959;
  /* 121158e9 mov esi, esp */
  ESI = (ESP);
  /* 121158eb push 0x12143490 */
  push32((uint32_t)(0x12143490u));
  /* 121158f0 call dword ptr [0x121464bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464bc))), 0x121158f6u);
  /* 121158f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121158f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121158fb call 0x12116a60 */
  push32(0x12115900u); f_12116a60();
  /* 12115900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115902 jne 0x12115959 */
  if (!C.zf) goto L_12115959;
  /* 12115904 mov esi, esp */
  ESI = (ESP);
  /* 12115906 push 0 */
  push32((uint32_t)(0x0u));
  /* 12115908 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1211590a call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12115910u);
  /* 12115910 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115913 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115915 call 0x12116a60 */
  push32(0x1211591au); f_12116a60();
  /* 1211591a mov esi, esp */
  ESI = (ESP);
  /* 1211591c push 0x1213e3c4 */
  push32((uint32_t)(0x1213e3c4u));
  /* 12115921 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x12115927u);
  /* 12115927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211592a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211592c call 0x12116a60 */
  push32(0x12115931u); f_12116a60();
  /* 12115931 mov esi, esp */
  ESI = (ESP);
  /* 12115933 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12115935 call dword ptr [0x12146474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146474))), 0x1211593bu);
  /* 1211593b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211593e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115940 call 0x12116a60 */
  push32(0x12115945u); f_12116a60();
  /* 12115945 mov esi, esp */
  ESI = (ESP);
  /* 12115947 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12115949 call dword ptr [0x12146464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146464))), 0x1211594fu);
  /* 1211594f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115954 call 0x12116a60 */
  push32(0x12115959u); f_12116a60();
L_12115959:;
  /* 12115959 mov esi, esp */
  ESI = (ESP);
  /* 1211595b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1211595d call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12115963u);
  /* 12115963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115966 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115968 call 0x12116a60 */
  push32(0x1211596du); f_12116a60();
  /* 1211596d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115974 jne 0x12115a2e */
  if (!C.zf) goto L_12115a2e;
  /* 1211597a mov esi, esp */
  ESI = (ESP);
  /* 1211597c push 2 */
  push32((uint32_t)(0x2u));
  /* 1211597e call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12115984u);
  /* 12115984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115987 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115989 call 0x12116a60 */
  push32(0x1211598eu); f_12116a60();
  /* 1211598e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115995 jne 0x12115a2e */
  if (!C.zf) goto L_12115a2e;
  /* 1211599b mov esi, esp */
  ESI = (ESP);
  /* 1211599d push 4 */
  push32((uint32_t)(0x4u));
  /* 1211599f call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121159a5u);
  /* 121159a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121159a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121159aa call 0x12116a60 */
  push32(0x121159afu); f_12116a60();
  /* 121159af and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121159b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121159b6 jne 0x12115a2e */
  if (!C.zf) goto L_12115a2e;
  /* 121159b8 mov esi, esp */
  ESI = (ESP);
  /* 121159ba push 5 */
  push32((uint32_t)(0x5u));
  /* 121159bc call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121159c2u);
  /* 121159c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121159c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121159c7 call 0x12116a60 */
  push32(0x121159ccu); f_12116a60();
  /* 121159cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121159d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121159d3 jne 0x12115a2e */
  if (!C.zf) goto L_12115a2e;
  /* 121159d5 mov esi, esp */
  ESI = (ESP);
  /* 121159d7 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 121159d9 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x121159dfu);
  /* 121159df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121159e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121159e4 call 0x12116a60 */
  push32(0x121159e9u); f_12116a60();
  /* 121159e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121159ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121159f0 je 0x12115a2e */
  if (C.zf) goto L_12115a2e;
  /* 121159f2 mov esi, esp */
  ESI = (ESP);
  /* 121159f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121159f6 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 121159f8 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x121159feu);
  /* 121159fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115a03 call 0x12116a60 */
  push32(0x12115a08u); f_12116a60();
  /* 12115a08 mov esi, esp */
  ESI = (ESP);
  /* 12115a0a push 0x1213e3bc */
  push32((uint32_t)(0x1213e3bcu));
  /* 12115a0f call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x12115a15u);
  /* 12115a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115a1a call 0x12116a60 */
  push32(0x12115a1fu); f_12116a60();
  /* 12115a1f mov esi, esp */
  ESI = (ESP);
  /* 12115a21 call dword ptr [0x12146504] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146504))), 0x12115a27u);
  /* 12115a27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115a29 call 0x12116a60 */
  push32(0x12115a2eu); f_12116a60();
L_12115a2e:;
  /* 12115a2e mov esi, esp */
  ESI = (ESP);
  /* 12115a30 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12115a32 call dword ptr [0x12146468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146468))), 0x12115a38u);
  /* 12115a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115a3d call 0x12116a60 */
  push32(0x12115a42u); f_12116a60();
  /* 12115a42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115a47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115a49 je 0x12115adb */
  if (C.zf) goto L_12115adb;
  /* 12115a4f mov esi, esp */
  ESI = (ESP);
  /* 12115a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12115a53 call dword ptr [0x121464f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464f4))), 0x12115a59u);
  /* 12115a59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115a5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115a5e call 0x12116a60 */
  push32(0x12115a63u); f_12116a60();
  /* 12115a63 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12115a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115a6a je 0x12115adb */
  if (C.zf) goto L_12115adb;
  /* 12115a6c mov esi, esp */
  ESI = (ESP);
  /* 12115a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12115a70 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12115a72 call dword ptr [0x1214646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214646c))), 0x12115a78u);
  /* 12115a78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115a7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115a7d call 0x12116a60 */
  push32(0x12115a82u); f_12116a60();
  /* 12115a82 mov esi, esp */
  ESI = (ESP);
  /* 12115a84 push 3 */
  push32((uint32_t)(0x3u));
  /* 12115a86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12115a88 call dword ptr [0x12146508] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146508))), 0x12115a8eu);
  /* 12115a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115a91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115a93 call 0x12116a60 */
  push32(0x12115a98u); f_12116a60();
  /* 12115a98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12115a9a jle 0x12115ab5 */
  if ((C.zf||C.sf!=C.of)) goto L_12115ab5;
  /* 12115a9c mov esi, esp */
  ESI = (ESP);
  /* 12115a9e push 0x1213e3b4 */
  push32((uint32_t)(0x1213e3b4u));
  /* 12115aa3 call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x12115aa9u);
  /* 12115aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115aac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115aae call 0x12116a60 */
  push32(0x12115ab3u); f_12116a60();
  /* 12115ab3 jmp 0x12115acc */
  goto L_12115acc;
L_12115ab5:;
  /* 12115ab5 mov esi, esp */
  ESI = (ESP);
  /* 12115ab7 push 0x1213e3a8 */
  push32((uint32_t)(0x1213e3a8u));
  /* 12115abc call dword ptr [0x121464a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121464a0))), 0x12115ac2u);
  /* 12115ac2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115ac5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115ac7 call 0x12116a60 */
  push32(0x12115accu); f_12116a60();
L_12115acc:;
  /* 12115acc mov esi, esp */
  ESI = (ESP);
  /* 12115ace call dword ptr [0x12146500] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146500))), 0x12115ad4u);
  /* 12115ad4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115ad6 call 0x12116a60 */
  push32(0x12115adbu); f_12116a60();
L_12115adb:;
  /* 12115adb pop edi */
  EDI = (pop32());
  /* 12115adc pop esi */
  ESI = (pop32());
  /* 12115add pop ebx */
  EBX = (pop32());
  /* 12115ade add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12115ae1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12115ae3 call 0x12116a60 */
  push32(0x12115ae8u); f_12116a60();
  /* 12115ae8 mov esp, ebp */
  ESP = (EBP);
  /* 12115aea pop ebp */
  EBP = (pop32());
  /* 12115aeb ret  */
  ESPCHK(0x12112310u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12116a60 (56 bytes, 28 insns) */
void f_12116a60(void) {
  FTRACE(0x12116a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116a60 jne 0x12116a63 */
  if (!C.zf) goto L_12116a63;
  /* 12116a62 ret  */
  ESPCHK(0x12116a60u, _esp0);
  ESP += 4; return;
L_12116a63:;
  /* 12116a63 push ebp */
  push32((uint32_t)(EBP));
  /* 12116a64 mov ebp, esp */
  EBP = (ESP);
  /* 12116a66 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12116a69 push eax */
  push32((uint32_t)(EAX));
  /* 12116a6a push edx */
  push32((uint32_t)(EDX));
  /* 12116a6b push ebx */
  push32((uint32_t)(EBX));
  /* 12116a6c push esi */
  push32((uint32_t)(ESI));
  /* 12116a6d push edi */
  push32((uint32_t)(EDI));
  /* 12116a6e push 0x1213e5d0 */
  push32((uint32_t)(0x1213e5d0u));
  /* 12116a73 push 0x1213e5cc */
  push32((uint32_t)(0x1213e5ccu));
  /* 12116a78 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12116a7a push 0x1213e5bc */
  push32((uint32_t)(0x1213e5bcu));
  /* 12116a7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12116a81 call 0x12116e30 */
  push32(0x12116a86u); f_12116e30();
  /* 12116a86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12116a89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116a8c jne 0x12116a8f */
  if (!C.zf) goto L_12116a8f;
  /* 12116a8e int3  */
  x86_unimpl("int3 @ 0x12116a8e");
L_12116a8f:;
  /* 12116a8f pop edi */
  EDI = (pop32());
  /* 12116a90 pop esi */
  ESI = (pop32());
  /* 12116a91 pop ebx */
  EBX = (pop32());
  /* 12116a92 pop edx */
  EDX = (pop32());
  /* 12116a93 pop eax */
  EAX = (pop32());
  /* 12116a94 mov esp, ebp */
  ESP = (EBP);
  /* 12116a96 pop ebp */
  EBP = (pop32());
  /* 12116a97 ret  */
  ESPCHK(0x12116a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006aa0 @ 0x12116aa0 (313 bytes, 78 insns) */
void f_12116aa0(void) {
  FTRACE(0x12116aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12116aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12116aa3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116aa7 jne 0x12116b67 */
  if (!C.zf) goto L_12116b67;
  /* 12116aad call dword ptr [0x121463b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463b0))), 0x12116ab3u);
  /* 12116ab3 mov dword ptr [0x121437e8], eax */
  w32((uint32_t)(0x121437e8), (EAX));
  /* 12116ab8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12116aba call 0x1211a560 */
  push32(0x12116abfu); f_1211a560();
  /* 12116abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12116ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12116ac4 jne 0x12116acd */
  if (!C.zf) goto L_12116acd;
  /* 12116ac6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12116ac8 jmp 0x12116bd5 */
  goto L_12116bd5;
L_12116acd:;
  /* 12116acd mov eax, dword ptr [0x121437e8] */
  EAX = (r32((uint32_t)(0x121437e8)));
  /* 12116ad2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12116ad5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12116ada mov dword ptr [0x121437f4], eax */
  w32((uint32_t)(0x121437f4), (EAX));
  /* 12116adf mov ecx, dword ptr [0x121437e8] */
  ECX = (r32((uint32_t)(0x121437e8)));
  /* 12116ae5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12116aeb mov dword ptr [0x121437f0], ecx */
  w32((uint32_t)(0x121437f0), (ECX));
  /* 12116af1 mov edx, dword ptr [0x121437f0] */
  EDX = (r32((uint32_t)(0x121437f0)));
  /* 12116af7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12116afa add edx, dword ptr [0x121437f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121437f4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12116b00 mov dword ptr [0x121437ec], edx */
  w32((uint32_t)(0x121437ec), (EDX));
  /* 12116b06 mov eax, dword ptr [0x121437e8] */
  EAX = (r32((uint32_t)(0x121437e8)));
  /* 12116b0b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12116b0e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12116b13 mov dword ptr [0x121437e8], eax */
  w32((uint32_t)(0x121437e8), (EAX));
  /* 12116b18 call 0x121176d0 */
  push32(0x12116b1du); f_121176d0();
  /* 12116b1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12116b1f jne 0x12116b2d */
  if (!C.zf) goto L_12116b2d;
  /* 12116b21 call 0x1211a5b0 */
  push32(0x12116b26u); f_1211a5b0();
  /* 12116b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12116b28 jmp 0x12116bd5 */
  goto L_12116bd5;
L_12116b2d:;
  /* 12116b2d call dword ptr [0x121463ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463ac))), 0x12116b33u);
  /* 12116b33 mov dword ptr [0x1214532c], eax */
  w32((uint32_t)(0x1214532c), (EAX));
  /* 12116b38 call 0x1211a340 */
  push32(0x12116b3du); f_1211a340();
  /* 12116b3d mov dword ptr [0x121437d0], eax */
  w32((uint32_t)(0x121437d0), (EAX));
  /* 12116b42 call 0x12117980 */
  push32(0x12116b47u); f_12117980();
  /* 12116b47 call 0x12119e30 */
  push32(0x12116b4cu); f_12119e30();
  /* 12116b4c call 0x12119ce0 */
  push32(0x12116b51u); f_12119ce0();
  /* 12116b51 call 0x121174d0 */
  push32(0x12116b56u); f_121174d0();
  /* 12116b56 mov ecx, dword ptr [0x121437cc] */
  ECX = (r32((uint32_t)(0x121437cc)));
  /* 12116b5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12116b5f mov dword ptr [0x121437cc], ecx */
  w32((uint32_t)(0x121437cc), (ECX));
  /* 12116b65 jmp 0x12116bd0 */
  goto L_12116bd0;
L_12116b67:;
  /* 12116b67 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116b6b jne 0x12116bc0 */
  if (!C.zf) goto L_12116bc0;
  /* 12116b6d cmp dword ptr [0x121437cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121437cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116b74 jle 0x12116bba */
  if ((C.zf||C.sf!=C.of)) goto L_12116bba;
  /* 12116b76 mov edx, dword ptr [0x121437cc] */
  EDX = (r32((uint32_t)(0x121437cc)));
  /* 12116b7c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12116b7f mov dword ptr [0x121437cc], edx */
  w32((uint32_t)(0x121437cc), (EDX));
  /* 12116b85 cmp dword ptr [0x12143820], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143820))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116b8c jne 0x12116b93 */
  if (!C.zf) goto L_12116b93;
  /* 12116b8e call 0x12117550 */
  push32(0x12116b93u); f_12117550();
L_12116b93:;
  /* 12116b93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12116b95 call 0x12119280 */
  push32(0x12116b9au); f_12119280();
  /* 12116b9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12116b9d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12116ba0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12116ba2 je 0x12116ba9 */
  if (C.zf) goto L_12116ba9;
  /* 12116ba4 call 0x12119b90 */
  push32(0x12116ba9u); f_12119b90();
L_12116ba9:;
  /* 12116ba9 call 0x12117cb0 */
  push32(0x12116baeu); f_12117cb0();
  /* 12116bae call 0x12117760 */
  push32(0x12116bb3u); f_12117760();
  /* 12116bb3 call 0x1211a5b0 */
  push32(0x12116bb8u); f_1211a5b0();
  /* 12116bb8 jmp 0x12116bbe */
  goto L_12116bbe;
L_12116bba:;
  /* 12116bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12116bbc jmp 0x12116bd5 */
  goto L_12116bd5;
L_12116bbe:;
  /* 12116bbe jmp 0x12116bd0 */
  goto L_12116bd0;
L_12116bc0:;
  /* 12116bc0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116bc4 jne 0x12116bd0 */
  if (!C.zf) goto L_12116bd0;
  /* 12116bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12116bc8 call 0x12117850 */
  push32(0x12116bcdu); f_12117850();
  /* 12116bcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12116bd0:;
  /* 12116bd0 mov eax, 1 */
  EAX = (0x1u);
L_12116bd5:;
  /* 12116bd5 pop ebp */
  EBP = (pop32());
  /* 12116bd6 ret 0xc */
  ESPCHK(0x12116aa0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12116be0 (243 bytes, 86 insns) */
void f_12116be0(void) {
  FTRACE(0x12116be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12116be1 mov ebp, esp */
  EBP = (ESP);
  /* 12116be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12116be4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12116beb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116bef jne 0x12116c01 */
  if (!C.zf) goto L_12116c01;
  /* 12116bf1 cmp dword ptr [0x121437cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121437cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116bf8 jne 0x12116c01 */
  if (!C.zf) goto L_12116c01;
  /* 12116bfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12116bfc jmp 0x12116ccd */
  goto L_12116ccd;
L_12116c01:;
  /* 12116c01 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c05 je 0x12116c0d */
  if (C.zf) goto L_12116c0d;
  /* 12116c07 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c0b jne 0x12116c4f */
  if (!C.zf) goto L_12116c4f;
L_12116c0d:;
  /* 12116c0d cmp dword ptr [0x1214533c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214533c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c14 je 0x12116c2b */
  if (C.zf) goto L_12116c2b;
  /* 12116c16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12116c19 push eax */
  push32((uint32_t)(EAX));
  /* 12116c1a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116c1d push ecx */
  push32((uint32_t)(ECX));
  /* 12116c1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116c21 push edx */
  push32((uint32_t)(EDX));
  /* 12116c22 call dword ptr [0x1214533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214533c))), 0x12116c28u);
  /* 12116c28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12116c2b:;
  /* 12116c2b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c2f je 0x12116c45 */
  if (C.zf) goto L_12116c45;
  /* 12116c31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12116c34 push eax */
  push32((uint32_t)(EAX));
  /* 12116c35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116c38 push ecx */
  push32((uint32_t)(ECX));
  /* 12116c39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116c3c push edx */
  push32((uint32_t)(EDX));
  /* 12116c3d call 0x12116aa0 */
  push32(0x12116c42u); f_12116aa0();
  /* 12116c42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12116c45:;
  /* 12116c45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c49 jne 0x12116c4f */
  if (!C.zf) goto L_12116c4f;
  /* 12116c4b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12116c4d jmp 0x12116ccd */
  goto L_12116ccd;
L_12116c4f:;
  /* 12116c4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12116c52 push eax */
  push32((uint32_t)(EAX));
  /* 12116c53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116c56 push ecx */
  push32((uint32_t)(ECX));
  /* 12116c57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116c5a push edx */
  push32((uint32_t)(EDX));
  /* 12116c5b call 0x1211100a */
  push32(0x12116c60u); f_1211100a();
  /* 12116c60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12116c63 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c67 jne 0x12116c7e */
  if (!C.zf) goto L_12116c7e;
  /* 12116c69 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c6d jne 0x12116c7e */
  if (!C.zf) goto L_12116c7e;
  /* 12116c6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12116c72 push eax */
  push32((uint32_t)(EAX));
  /* 12116c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12116c75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116c78 push ecx */
  push32((uint32_t)(ECX));
  /* 12116c79 call 0x12116aa0 */
  push32(0x12116c7eu); f_12116aa0();
L_12116c7e:;
  /* 12116c7e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c82 je 0x12116c8a */
  if (C.zf) goto L_12116c8a;
  /* 12116c84 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116c88 jne 0x12116cca */
  if (!C.zf) goto L_12116cca;
L_12116c8a:;
  /* 12116c8a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12116c8d push edx */
  push32((uint32_t)(EDX));
  /* 12116c8e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116c91 push eax */
  push32((uint32_t)(EAX));
  /* 12116c92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116c95 push ecx */
  push32((uint32_t)(ECX));
  /* 12116c96 call 0x12116aa0 */
  push32(0x12116c9bu); f_12116aa0();
  /* 12116c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12116c9d jne 0x12116ca6 */
  if (!C.zf) goto L_12116ca6;
  /* 12116c9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12116ca6:;
  /* 12116ca6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116caa je 0x12116cca */
  if (C.zf) goto L_12116cca;
  /* 12116cac cmp dword ptr [0x1214533c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214533c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116cb3 je 0x12116cca */
  if (C.zf) goto L_12116cca;
  /* 12116cb5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12116cb8 push edx */
  push32((uint32_t)(EDX));
  /* 12116cb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116cbc push eax */
  push32((uint32_t)(EAX));
  /* 12116cbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12116cc1 call dword ptr [0x1214533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214533c))), 0x12116cc7u);
  /* 12116cc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12116cca:;
  /* 12116cca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12116ccd:;
  /* 12116ccd mov esp, ebp */
  ESP = (EBP);
  /* 12116ccf pop ebp */
  EBP = (pop32());
  /* 12116cd0 ret 0xc */
  ESPCHK(0x12116be0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12116ce0 (58 bytes, 18 insns) */
void f_12116ce0(void) {
  FTRACE(0x12116ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12116ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12116ce3 cmp dword ptr [0x121437d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121437d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116cea je 0x12116cfe */
  if (C.zf) goto L_12116cfe;
  /* 12116cec cmp dword ptr [0x121437d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121437d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116cf3 jne 0x12116d03 */
  if (!C.zf) goto L_12116d03;
  /* 12116cf5 cmp dword ptr [0x121437dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121437dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116cfc jne 0x12116d03 */
  if (!C.zf) goto L_12116d03;
L_12116cfe:;
  /* 12116cfe call 0x1211a650 */
  push32(0x12116d03u); f_1211a650();
L_12116d03:;
  /* 12116d03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116d06 push eax */
  push32((uint32_t)(EAX));
  /* 12116d07 call 0x1211a6a0 */
  push32(0x12116d0cu); f_1211a6a0();
  /* 12116d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12116d0f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12116d14 call dword ptr [0x12141a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x12141a30))), 0x12116d1au);
  /* 12116d1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12116d1d pop ebp */
  EBP = (pop32());
  /* 12116d1e ret  */
  ESPCHK(0x12116ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d20 @ 0x12116d20 (11 bytes, 5 insns) */
void f_12116d20(void) {
  FTRACE(0x12116d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12116d21 mov ebp, esp */
  EBP = (ESP);
  /* 12116d23 call dword ptr [0x121463b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463b4))), 0x12116d29u);
  /* 12116d29 pop ebp */
  EBP = (pop32());
  /* 12116d2a ret  */
  ESPCHK(0x12116d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d30 @ 0x12116d30 (87 bytes, 30 insns) */
void f_12116d30(void) {
  FTRACE(0x12116d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12116d31 mov ebp, esp */
  EBP = (ESP);
  /* 12116d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12116d34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116d38 jl 0x12116d40 */
  if ((C.sf!=C.of)) goto L_12116d40;
  /* 12116d3a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116d3e jl 0x12116d45 */
  if ((C.sf!=C.of)) goto L_12116d45;
L_12116d40:;
  /* 12116d40 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12116d43 jmp 0x12116d83 */
  goto L_12116d83;
L_12116d45:;
  /* 12116d45 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116d49 jne 0x12116d57 */
  if (!C.zf) goto L_12116d57;
  /* 12116d4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116d4e mov eax, dword ptr [eax*4 + 0x12141a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12141a38)));
  /* 12116d55 jmp 0x12116d83 */
  goto L_12116d83;
L_12116d57:;
  /* 12116d57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116d5a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12116d5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12116d5f je 0x12116d66 */
  if (C.zf) goto L_12116d66;
  /* 12116d61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12116d64 jmp 0x12116d83 */
  goto L_12116d83;
L_12116d66:;
  /* 12116d66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116d69 mov eax, dword ptr [edx*4 + 0x12141a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12141a38)));
  /* 12116d70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12116d73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116d76 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116d79 mov dword ptr [ecx*4 + 0x12141a38], edx */
  w32((uint32_t)(ECX*4 + 0x12141a38), (EDX));
  /* 12116d80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12116d83:;
  /* 12116d83 mov esp, ebp */
  ESP = (EBP);
  /* 12116d85 pop ebp */
  EBP = (pop32());
  /* 12116d86 ret  */
  ESPCHK(0x12116d30u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12116d90 (126 bytes, 38 insns) */
void f_12116d90(void) {
  FTRACE(0x12116d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12116d91 mov ebp, esp */
  EBP = (ESP);
  /* 12116d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12116d94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116d98 jl 0x12116da0 */
  if ((C.sf!=C.of)) goto L_12116da0;
  /* 12116d9a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116d9e jl 0x12116da7 */
  if ((C.sf!=C.of)) goto L_12116da7;
L_12116da0:;
  /* 12116da0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12116da5 jmp 0x12116e0a */
  goto L_12116e0a;
L_12116da7:;
  /* 12116da7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116dab jne 0x12116db9 */
  if (!C.zf) goto L_12116db9;
  /* 12116dad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116db0 mov eax, dword ptr [eax*4 + 0x12141a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12141a44)));
  /* 12116db7 jmp 0x12116e0a */
  goto L_12116e0a;
L_12116db9:;
  /* 12116db9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116dbc mov edx, dword ptr [ecx*4 + 0x12141a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141a44)));
  /* 12116dc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12116dc6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116dca jne 0x12116de0 */
  if (!C.zf) goto L_12116de0;
  /* 12116dcc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12116dce call dword ptr [0x121463b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463b8))), 0x12116dd4u);
  /* 12116dd4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116dd7 mov dword ptr [ecx*4 + 0x12141a44], eax */
  w32((uint32_t)(ECX*4 + 0x12141a44), (EAX));
  /* 12116dde jmp 0x12116e07 */
  goto L_12116e07;
L_12116de0:;
  /* 12116de0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116de4 jne 0x12116dfa */
  if (!C.zf) goto L_12116dfa;
  /* 12116de6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12116de8 call dword ptr [0x121463b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463b8))), 0x12116deeu);
  /* 12116dee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116df1 mov dword ptr [edx*4 + 0x12141a44], eax */
  w32((uint32_t)(EDX*4 + 0x12141a44), (EAX));
  /* 12116df8 jmp 0x12116e07 */
  goto L_12116e07;
L_12116dfa:;
  /* 12116dfa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116dfd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116e00 mov dword ptr [eax*4 + 0x12141a44], ecx */
  w32((uint32_t)(EAX*4 + 0x12141a44), (ECX));
L_12116e07:;
  /* 12116e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12116e0a:;
  /* 12116e0a mov esp, ebp */
  ESP = (EBP);
  /* 12116e0c pop ebp */
  EBP = (pop32());
  /* 12116e0d ret  */
  ESPCHK(0x12116d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x12116e10 (28 bytes, 11 insns) */
void f_12116e10(void) {
  FTRACE(0x12116e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12116e11 mov ebp, esp */
  EBP = (ESP);
  /* 12116e13 push ecx */
  push32((uint32_t)(ECX));
  /* 12116e14 mov eax, dword ptr [0x12145320] */
  EAX = (r32((uint32_t)(0x12145320)));
  /* 12116e19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12116e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116e1f mov dword ptr [0x12145320], ecx */
  w32((uint32_t)(0x12145320), (ECX));
  /* 12116e25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12116e28 mov esp, ebp */
  ESP = (EBP);
  /* 12116e2a pop ebp */
  EBP = (pop32());
  /* 12116e2b ret  */
  ESPCHK(0x12116e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x12116e30 (912 bytes, 248 insns) */
void f_12116e30(void) {
  FTRACE(0x12116e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12116e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12116e31 mov ebp, esp */
  EBP = (ESP);
  /* 12116e33 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12116e38 call 0x1211af10 */
  push32(0x12116e3du); f_1211af10();
  /* 12116e3d push edi */
  push32((uint32_t)(EDI));
  /* 12116e3e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12116e45 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12116e4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12116e4c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12116e52 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12116e54 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12116e56 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12116e57 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12116e5e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12116e63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12116e65 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12116e6b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12116e6d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12116e6f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12116e70 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12116e77 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12116e7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12116e7e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12116e84 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12116e86 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12116e88 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12116e89 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12116e8c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12116e92 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116e96 jl 0x12116e9e */
  if ((C.sf!=C.of)) goto L_12116e9e;
  /* 12116e98 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116e9c jl 0x12116ea6 */
  if ((C.sf!=C.of)) goto L_12116ea6;
L_12116e9e:;
  /* 12116e9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12116ea1 jmp 0x121171bb */
  goto L_121171bb;
L_12116ea6:;
  /* 12116ea6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116eaa jne 0x12116f50 */
  if (!C.zf) goto L_12116f50;
  /* 12116eb0 push 0x12141a34 */
  push32((uint32_t)(0x12141a34u));
  /* 12116eb5 call dword ptr [0x121463d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463d0))), 0x12116ebbu);
  /* 12116ebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12116ebd jle 0x12116f50 */
  if ((C.zf||C.sf!=C.of)) goto L_12116f50;
  /* 12116ec3 cmp dword ptr [0x121437e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121437e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116eca jne 0x12116f0e */
  if (!C.zf) goto L_12116f0e;
  /* 12116ecc push 0x1213e778 */
  push32((uint32_t)(0x1213e778u));
  /* 12116ed1 call dword ptr [0x121463cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463cc))), 0x12116ed7u);
  /* 12116ed7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12116edd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116ee4 je 0x12116f06 */
  if (C.zf) goto L_12116f06;
  /* 12116ee6 push 0x1213e76c */
  push32((uint32_t)(0x1213e76cu));
  /* 12116eeb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12116ef1 push ecx */
  push32((uint32_t)(ECX));
  /* 12116ef2 call dword ptr [0x121463c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c8))), 0x12116ef8u);
  /* 12116ef8 mov dword ptr [0x121437e0], eax */
  w32((uint32_t)(0x121437e0), (EAX));
  /* 12116efd cmp dword ptr [0x121437e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121437e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116f04 jne 0x12116f0e */
  if (!C.zf) goto L_12116f0e;
L_12116f06:;
  /* 12116f06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12116f09 jmp 0x121171bb */
  goto L_121171bb;
L_12116f0e:;
  /* 12116f0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12116f11 push edx */
  push32((uint32_t)(EDX));
  /* 12116f12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12116f15 push eax */
  push32((uint32_t)(EAX));
  /* 12116f16 push 0x1213e738 */
  push32((uint32_t)(0x1213e738u));
  /* 12116f1b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12116f21 push ecx */
  push32((uint32_t)(ECX));
  /* 12116f22 call dword ptr [0x121437e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121437e0))), 0x12116f28u);
  /* 12116f28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12116f2b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12116f31 push edx */
  push32((uint32_t)(EDX));
  /* 12116f32 call dword ptr [0x121463c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c4))), 0x12116f38u);
  /* 12116f38 push 0x12141a34 */
  push32((uint32_t)(0x12141a34u));
  /* 12116f3d call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x12116f43u);
  /* 12116f43 call 0x12116d20 */
  push32(0x12116f48u); f_12116d20();
  /* 12116f48 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12116f4b jmp 0x121171bb */
  goto L_121171bb;
L_12116f50:;
  /* 12116f50 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116f54 je 0x12116f8d */
  if (C.zf) goto L_12116f8d;
  /* 12116f56 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12116f5c push eax */
  push32((uint32_t)(EAX));
  /* 12116f5d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12116f60 push ecx */
  push32((uint32_t)(ECX));
  /* 12116f61 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12116f66 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12116f6c push edx */
  push32((uint32_t)(EDX));
  /* 12116f6d call 0x1211ae10 */
  push32(0x12116f72u); f_1211ae10();
  /* 12116f72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12116f75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12116f77 jge 0x12116f8d */
  if ((C.sf==C.of)) goto L_12116f8d;
  /* 12116f79 push 0x1213e70c */
  push32((uint32_t)(0x1213e70cu));
  /* 12116f7e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12116f84 push eax */
  push32((uint32_t)(EAX));
  /* 12116f85 call 0x1211ad20 */
  push32(0x12116f8au); f_1211ad20();
  /* 12116f8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12116f8d:;
  /* 12116f8d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116f91 jne 0x12116fc5 */
  if (!C.zf) goto L_12116fc5;
  /* 12116f93 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116f97 je 0x12116fa5 */
  if (C.zf) goto L_12116fa5;
  /* 12116f99 mov dword ptr [ebp - 0x3028], 0x1213e6f8 */
  w32((uint32_t)(EBP + -0x3028), (0x1213e6f8u));
  /* 12116fa3 jmp 0x12116faf */
  goto L_12116faf;
L_12116fa5:;
  /* 12116fa5 mov dword ptr [ebp - 0x3028], 0x1213e6e4 */
  w32((uint32_t)(EBP + -0x3028), (0x1213e6e4u));
L_12116faf:;
  /* 12116faf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12116fb5 push ecx */
  push32((uint32_t)(ECX));
  /* 12116fb6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12116fbc push edx */
  push32((uint32_t)(EDX));
  /* 12116fbd call 0x1211ad20 */
  push32(0x12116fc2u); f_1211ad20();
  /* 12116fc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12116fc5:;
  /* 12116fc5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12116fcb push eax */
  push32((uint32_t)(EAX));
  /* 12116fcc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12116fd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12116fd3 call 0x1211ad30 */
  push32(0x12116fd8u); f_1211ad30();
  /* 12116fd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12116fdb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12116fdf jne 0x1211701a */
  if (!C.zf) goto L_1211701a;
  /* 12116fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12116fe4 mov eax, dword ptr [edx*4 + 0x12141a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12141a38)));
  /* 12116feb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12116fee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12116ff0 je 0x12117006 */
  if (C.zf) goto L_12117006;
  /* 12116ff2 push 0x1213e6e0 */
  push32((uint32_t)(0x1213e6e0u));
  /* 12116ff7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12116ffd push ecx */
  push32((uint32_t)(ECX));
  /* 12116ffe call 0x1211ad30 */
  push32(0x12117003u); f_1211ad30();
  /* 12117003 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117006:;
  /* 12117006 push 0x1213e6dc */
  push32((uint32_t)(0x1213e6dcu));
  /* 1211700b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12117011 push edx */
  push32((uint32_t)(EDX));
  /* 12117012 call 0x1211ad30 */
  push32(0x12117017u); f_1211ad30();
  /* 12117017 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211701a:;
  /* 1211701a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211701e je 0x12117062 */
  if (C.zf) goto L_12117062;
  /* 12117020 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12117026 push eax */
  push32((uint32_t)(EAX));
  /* 12117027 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211702a push ecx */
  push32((uint32_t)(ECX));
  /* 1211702b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211702e push edx */
  push32((uint32_t)(EDX));
  /* 1211702f push 0x1213e6d0 */
  push32((uint32_t)(0x1213e6d0u));
  /* 12117034 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12117039 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1211703f push eax */
  push32((uint32_t)(EAX));
  /* 12117040 call 0x1211ac20 */
  push32(0x12117045u); f_1211ac20();
  /* 12117045 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117048 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211704a jge 0x12117060 */
  if ((C.sf==C.of)) goto L_12117060;
  /* 1211704c push 0x1213e70c */
  push32((uint32_t)(0x1213e70cu));
  /* 12117051 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12117057 push ecx */
  push32((uint32_t)(ECX));
  /* 12117058 call 0x1211ad20 */
  push32(0x1211705du); f_1211ad20();
  /* 1211705d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117060:;
  /* 12117060 jmp 0x12117078 */
  goto L_12117078;
L_12117062:;
  /* 12117062 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12117068 push edx */
  push32((uint32_t)(EDX));
  /* 12117069 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1211706f push eax */
  push32((uint32_t)(EAX));
  /* 12117070 call 0x1211ad20 */
  push32(0x12117075u); f_1211ad20();
  /* 12117075 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117078:;
  /* 12117078 cmp dword ptr [0x12145320], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145320))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211707f je 0x121170bc */
  if (C.zf) goto L_121170bc;
  /* 12117081 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12117087 push ecx */
  push32((uint32_t)(ECX));
  /* 12117088 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1211708e push edx */
  push32((uint32_t)(EDX));
  /* 1211708f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117092 push eax */
  push32((uint32_t)(EAX));
  /* 12117093 call dword ptr [0x12145320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12145320))), 0x12117099u);
  /* 12117099 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211709c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211709e je 0x121170bc */
  if (C.zf) goto L_121170bc;
  /* 121170a0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121170a4 jne 0x121170b1 */
  if (!C.zf) goto L_121170b1;
  /* 121170a6 push 0x12141a34 */
  push32((uint32_t)(0x12141a34u));
  /* 121170ab call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x121170b1u);
L_121170b1:;
  /* 121170b1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 121170b7 jmp 0x121171bb */
  goto L_121171bb;
L_121170bc:;
  /* 121170bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121170bf mov edx, dword ptr [ecx*4 + 0x12141a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141a38)));
  /* 121170c6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 121170c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121170cb je 0x1211710b */
  if (C.zf) goto L_1211710b;
  /* 121170cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121170d0 cmp dword ptr [eax*4 + 0x12141a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12141a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121170d8 je 0x1211710b */
  if (C.zf) goto L_1211710b;
  /* 121170da push 0 */
  push32((uint32_t)(0x0u));
  /* 121170dc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 121170e2 push ecx */
  push32((uint32_t)(ECX));
  /* 121170e3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 121170e9 push edx */
  push32((uint32_t)(EDX));
  /* 121170ea call 0x1211aba0 */
  push32(0x121170efu); f_1211aba0();
  /* 121170ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121170f2 push eax */
  push32((uint32_t)(EAX));
  /* 121170f3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 121170f9 push eax */
  push32((uint32_t)(EAX));
  /* 121170fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121170fd mov edx, dword ptr [ecx*4 + 0x12141a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141a44)));
  /* 12117104 push edx */
  push32((uint32_t)(EDX));
  /* 12117105 call dword ptr [0x121463bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463bc))), 0x1211710bu);
L_1211710b:;
  /* 1211710b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211710e mov ecx, dword ptr [eax*4 + 0x12141a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12141a38)));
  /* 12117115 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12117118 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211711a je 0x12117129 */
  if (C.zf) goto L_12117129;
  /* 1211711c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12117122 push edx */
  push32((uint32_t)(EDX));
  /* 12117123 call dword ptr [0x121463c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c4))), 0x12117129u);
L_12117129:;
  /* 12117129 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211712c mov ecx, dword ptr [eax*4 + 0x12141a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12141a38)));
  /* 12117133 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12117136 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12117138 je 0x121171a8 */
  if (C.zf) goto L_121171a8;
  /* 1211713a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211713e je 0x1211715d */
  if (C.zf) goto L_1211715d;
  /* 12117140 push 0xa */
  push32((uint32_t)(0xau));
  /* 12117142 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12117148 push edx */
  push32((uint32_t)(EDX));
  /* 12117149 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211714c push eax */
  push32((uint32_t)(EAX));
  /* 1211714d call 0x1211a8b0 */
  push32(0x12117152u); f_1211a8b0();
  /* 12117152 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117155 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1211715b jmp 0x12117167 */
  goto L_12117167;
L_1211715d:;
  /* 1211715d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12117167:;
  /* 12117167 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1211716d push ecx */
  push32((uint32_t)(ECX));
  /* 1211716e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12117171 push edx */
  push32((uint32_t)(EDX));
  /* 12117172 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12117178 push eax */
  push32((uint32_t)(EAX));
  /* 12117179 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211717c push ecx */
  push32((uint32_t)(ECX));
  /* 1211717d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117180 push edx */
  push32((uint32_t)(EDX));
  /* 12117181 call 0x121171c0 */
  push32(0x12117186u); f_121171c0();
  /* 12117186 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117189 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1211718f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117193 jne 0x121171a0 */
  if (!C.zf) goto L_121171a0;
  /* 12117195 push 0x12141a34 */
  push32((uint32_t)(0x12141a34u));
  /* 1211719a call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x121171a0u);
L_121171a0:;
  /* 121171a0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 121171a6 jmp 0x121171bb */
  goto L_121171bb;
L_121171a8:;
  /* 121171a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121171ac jne 0x121171b9 */
  if (!C.zf) goto L_121171b9;
  /* 121171ae push 0x12141a34 */
  push32((uint32_t)(0x12141a34u));
  /* 121171b3 call dword ptr [0x121463c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c0))), 0x121171b9u);
L_121171b9:;
  /* 121171b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121171bb:;
  /* 121171bb pop edi */
  EDI = (pop32());
  /* 121171bc mov esp, ebp */
  ESP = (EBP);
  /* 121171be pop ebp */
  EBP = (pop32());
  /* 121171bf ret  */
  ESPCHK(0x12116e30u, _esp0);
  ESP += 4; return;
}

/* FUN_100071c0 @ 0x121171c0 (780 bytes, 197 insns) */
void f_121171c0(void) {
  FTRACE(0x121171c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121171c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121171c1 mov ebp, esp */
  EBP = (ESP);
  /* 121171c3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 121171c8 call 0x1211af10 */
  push32(0x121171cdu); f_1211af10();
L_121171cd:;
  /* 121171cd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121171d1 jne 0x121171f8 */
  if (!C.zf) goto L_121171f8;
  /* 121171d3 push 0x1213e8c8 */
  push32((uint32_t)(0x1213e8c8u));
  /* 121171d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121171da push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 121171df push 0x1213e8bc */
  push32((uint32_t)(0x1213e8bcu));
  /* 121171e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 121171e6 call 0x12116e30 */
  push32(0x121171ebu); f_12116e30();
  /* 121171eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121171ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121171f1 jne 0x121171f8 */
  if (!C.zf) goto L_121171f8;
  /* 121171f3 call 0x12116d20 */
  push32(0x121171f8u); f_12116d20();
L_121171f8:;
  /* 121171f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121171fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121171fc jne 0x121171cd */
  if (!C.zf) goto L_121171cd;
  /* 121171fe push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12117203 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12117209 push ecx */
  push32((uint32_t)(ECX));
  /* 1211720a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211720c call dword ptr [0x121462e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462e0))), 0x12117212u);
  /* 12117212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117214 jne 0x1211722a */
  if (!C.zf) goto L_1211722a;
  /* 12117216 push 0x1213e8a4 */
  push32((uint32_t)(0x1213e8a4u));
  /* 1211721b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12117221 push edx */
  push32((uint32_t)(EDX));
  /* 12117222 call 0x1211ad20 */
  push32(0x12117227u); f_1211ad20();
  /* 12117227 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211722a:;
  /* 1211722a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12117230 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12117233 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117236 push ecx */
  push32((uint32_t)(ECX));
  /* 12117237 call 0x1211aba0 */
  push32(0x1211723cu); f_1211aba0();
  /* 1211723c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211723f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117242 jbe 0x1211726d */
  if ((C.cf||C.zf)) goto L_1211726d;
  /* 12117244 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117247 push edx */
  push32((uint32_t)(EDX));
  /* 12117248 call 0x1211aba0 */
  push32(0x1211724du); f_1211aba0();
  /* 1211724d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117250 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117253 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12117257 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211725a push 3 */
  push32((uint32_t)(0x3u));
  /* 1211725c push 0x1213e8a0 */
  push32((uint32_t)(0x1213e8a0u));
  /* 12117261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117264 push eax */
  push32((uint32_t)(EAX));
  /* 12117265 call 0x1211b590 */
  push32(0x1211726au); f_1211b590();
  /* 1211726a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211726d:;
  /* 1211726d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12117270 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12117276 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211727d je 0x121172c8 */
  if (C.zf) goto L_121172c8;
  /* 1211727f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12117285 push edx */
  push32((uint32_t)(EDX));
  /* 12117286 call 0x1211aba0 */
  push32(0x1211728bu); f_1211aba0();
  /* 1211728b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211728e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117291 jbe 0x121172c8 */
  if ((C.cf||C.zf)) goto L_121172c8;
  /* 12117293 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12117299 push eax */
  push32((uint32_t)(EAX));
  /* 1211729a call 0x1211aba0 */
  push32(0x1211729fu); f_1211aba0();
  /* 1211729f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121172a2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 121172a8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 121172ac mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 121172b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 121172b4 push 0x1213e8a0 */
  push32((uint32_t)(0x1213e8a0u));
  /* 121172b9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 121172bf push eax */
  push32((uint32_t)(EAX));
  /* 121172c0 call 0x1211b590 */
  push32(0x121172c5u); f_1211b590();
  /* 121172c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121172c8:;
  /* 121172c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121172cc jne 0x121172da */
  if (!C.zf) goto L_121172da;
  /* 121172ce mov dword ptr [ebp - 0x1114], 0x1213e82c */
  w32((uint32_t)(EBP + -0x1114), (0x1213e82cu));
  /* 121172d8 jmp 0x121172e4 */
  goto L_121172e4;
L_121172da:;
  /* 121172da mov dword ptr [ebp - 0x1114], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x1114), (0x1213e5ccu));
L_121172e4:;
  /* 121172e4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121172e7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121172ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121172ec je 0x121172f9 */
  if (C.zf) goto L_121172f9;
  /* 121172ee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121172f1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 121172f7 jmp 0x12117303 */
  goto L_12117303;
L_121172f9:;
  /* 121172f9 mov dword ptr [ebp - 0x1118], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x1118), (0x1213e5ccu));
L_12117303:;
  /* 12117303 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12117306 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12117309 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211730b je 0x1211731f */
  if (C.zf) goto L_1211731f;
  /* 1211730d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117311 jne 0x1211731f */
  if (!C.zf) goto L_1211731f;
  /* 12117313 mov dword ptr [ebp - 0x111c], 0x1213e81c */
  w32((uint32_t)(EBP + -0x111c), (0x1213e81cu));
  /* 1211731d jmp 0x12117329 */
  goto L_12117329;
L_1211731f:;
  /* 1211731f mov dword ptr [ebp - 0x111c], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x111c), (0x1213e5ccu));
L_12117329:;
  /* 12117329 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211732c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1211732f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12117331 je 0x1211733f */
  if (C.zf) goto L_1211733f;
  /* 12117333 mov dword ptr [ebp - 0x1120], 0x1213e818 */
  w32((uint32_t)(EBP + -0x1120), (0x1213e818u));
  /* 1211733d jmp 0x12117349 */
  goto L_12117349;
L_1211733f:;
  /* 1211733f mov dword ptr [ebp - 0x1120], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x1120), (0x1213e5ccu));
L_12117349:;
  /* 12117349 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211734d je 0x1211735a */
  if (C.zf) goto L_1211735a;
  /* 1211734f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12117352 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12117358 jmp 0x12117364 */
  goto L_12117364;
L_1211735a:;
  /* 1211735a mov dword ptr [ebp - 0x1124], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x1124), (0x1213e5ccu));
L_12117364:;
  /* 12117364 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117368 je 0x12117376 */
  if (C.zf) goto L_12117376;
  /* 1211736a mov dword ptr [ebp - 0x1128], 0x1213e810 */
  w32((uint32_t)(EBP + -0x1128), (0x1213e810u));
  /* 12117374 jmp 0x12117380 */
  goto L_12117380;
L_12117376:;
  /* 12117376 mov dword ptr [ebp - 0x1128], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x1128), (0x1213e5ccu));
L_12117380:;
  /* 12117380 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117384 je 0x12117391 */
  if (C.zf) goto L_12117391;
  /* 12117386 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12117389 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1211738f jmp 0x1211739b */
  goto L_1211739b;
L_12117391:;
  /* 12117391 mov dword ptr [ebp - 0x112c], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x112c), (0x1213e5ccu));
L_1211739b:;
  /* 1211739b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211739f je 0x121173ad */
  if (C.zf) goto L_121173ad;
  /* 121173a1 mov dword ptr [ebp - 0x1130], 0x1213e808 */
  w32((uint32_t)(EBP + -0x1130), (0x1213e808u));
  /* 121173ab jmp 0x121173b7 */
  goto L_121173b7;
L_121173ad:;
  /* 121173ad mov dword ptr [ebp - 0x1130], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x1130), (0x1213e5ccu));
L_121173b7:;
  /* 121173b7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121173be je 0x121173ce */
  if (C.zf) goto L_121173ce;
  /* 121173c0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 121173c6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 121173cc jmp 0x121173d8 */
  goto L_121173d8;
L_121173ce:;
  /* 121173ce mov dword ptr [ebp - 0x1134], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x1134), (0x1213e5ccu));
L_121173d8:;
  /* 121173d8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121173df je 0x121173ed */
  if (C.zf) goto L_121173ed;
  /* 121173e1 mov dword ptr [ebp - 0x1138], 0x1213e7fc */
  w32((uint32_t)(EBP + -0x1138), (0x1213e7fcu));
  /* 121173eb jmp 0x121173f7 */
  goto L_121173f7;
L_121173ed:;
  /* 121173ed mov dword ptr [ebp - 0x1138], 0x1213e5cc */
  w32((uint32_t)(EBP + -0x1138), (0x1213e5ccu));
L_121173f7:;
  /* 121173f7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 121173fd push edx */
  push32((uint32_t)(EDX));
  /* 121173fe mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12117404 push eax */
  push32((uint32_t)(EAX));
  /* 12117405 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1211740b push ecx */
  push32((uint32_t)(ECX));
  /* 1211740c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12117412 push edx */
  push32((uint32_t)(EDX));
  /* 12117413 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12117419 push eax */
  push32((uint32_t)(EAX));
  /* 1211741a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12117420 push ecx */
  push32((uint32_t)(ECX));
  /* 12117421 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12117427 push edx */
  push32((uint32_t)(EDX));
  /* 12117428 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1211742e push eax */
  push32((uint32_t)(EAX));
  /* 1211742f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12117435 push ecx */
  push32((uint32_t)(ECX));
  /* 12117436 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1211743c push edx */
  push32((uint32_t)(EDX));
  /* 1211743d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117440 push eax */
  push32((uint32_t)(EAX));
  /* 12117441 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117444 mov edx, dword ptr [ecx*4 + 0x12141a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141a50)));
  /* 1211744b push edx */
  push32((uint32_t)(EDX));
  /* 1211744c push 0x1213e7a8 */
  push32((uint32_t)(0x1213e7a8u));
  /* 12117451 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12117456 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1211745c push eax */
  push32((uint32_t)(EAX));
  /* 1211745d call 0x1211ac20 */
  push32(0x12117462u); f_1211ac20();
  /* 12117462 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117465 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117467 jge 0x1211747d */
  if ((C.sf==C.of)) goto L_1211747d;
  /* 12117469 push 0x1213e70c */
  push32((uint32_t)(0x1213e70cu));
  /* 1211746e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12117474 push ecx */
  push32((uint32_t)(ECX));
  /* 12117475 call 0x1211ad20 */
  push32(0x1211747au); f_1211ad20();
  /* 1211747a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211747d:;
  /* 1211747d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12117482 push 0x1213e784 */
  push32((uint32_t)(0x1213e784u));
  /* 12117487 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1211748d push edx */
  push32((uint32_t)(EDX));
  /* 1211748e call 0x1211b4d0 */
  push32(0x12117493u); f_1211b4d0();
  /* 12117493 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117496 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1211749c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121174a3 jne 0x121174b6 */
  if (!C.zf) goto L_121174b6;
  /* 121174a5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 121174a7 call 0x1211b210 */
  push32(0x121174acu); f_1211b210();
  /* 121174ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121174af push 3 */
  push32((uint32_t)(0x3u));
  /* 121174b1 call 0x12117530 */
  push32(0x121174b6u); f_12117530();
L_121174b6:;
  /* 121174b6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121174bd jne 0x121174c6 */
  if (!C.zf) goto L_121174c6;
  /* 121174bf mov eax, 1 */
  EAX = (0x1u);
  /* 121174c4 jmp 0x121174c8 */
  goto L_121174c8;
L_121174c6:;
  /* 121174c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121174c8:;
  /* 121174c8 mov esp, ebp */
  ESP = (EBP);
  /* 121174ca pop ebp */
  EBP = (pop32());
  /* 121174cb ret  */
  ESPCHK(0x121171c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074d0 @ 0x121174d0 (56 bytes, 15 insns) */
void f_121174d0(void) {
  FTRACE(0x121174d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121174d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121174d1 mov ebp, esp */
  EBP = (ESP);
  /* 121174d3 cmp dword ptr [0x1214531c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214531c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121174da je 0x121174e2 */
  if (C.zf) goto L_121174e2;
  /* 121174dc call dword ptr [0x1214531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214531c))), 0x121174e2u);
L_121174e2:;
  /* 121174e2 push 0x12141418 */
  push32((uint32_t)(0x12141418u));
  /* 121174e7 push 0x12141208 */
  push32((uint32_t)(0x12141208u));
  /* 121174ec call 0x121176a0 */
  push32(0x121174f1u); f_121176a0();
  /* 121174f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121174f4 push 0x12141104 */
  push32((uint32_t)(0x12141104u));
  /* 121174f9 push 0x12141000 */
  push32((uint32_t)(0x12141000u));
  /* 121174fe call 0x121176a0 */
  push32(0x12117503u); f_121176a0();
  /* 12117503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117506 pop ebp */
  EBP = (pop32());
  /* 12117507 ret  */
  ESPCHK(0x121174d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007510 @ 0x12117510 (21 bytes, 10 insns) */
void f_12117510(void) {
  FTRACE(0x12117510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117510 push ebp */
  push32((uint32_t)(EBP));
  /* 12117511 mov ebp, esp */
  EBP = (ESP);
  /* 12117513 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117515 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117517 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211751a push eax */
  push32((uint32_t)(EAX));
  /* 1211751b call 0x12117590 */
  push32(0x12117520u); f_12117590();
  /* 12117520 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117523 pop ebp */
  EBP = (pop32());
  /* 12117524 ret  */
  ESPCHK(0x12117510u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12117530 (21 bytes, 10 insns) */
void f_12117530(void) {
  FTRACE(0x12117530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117530 push ebp */
  push32((uint32_t)(EBP));
  /* 12117531 mov ebp, esp */
  EBP = (ESP);
  /* 12117533 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117535 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117537 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211753a push eax */
  push32((uint32_t)(EAX));
  /* 1211753b call 0x12117590 */
  push32(0x12117540u); f_12117590();
  /* 12117540 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117543 pop ebp */
  EBP = (pop32());
  /* 12117544 ret  */
  ESPCHK(0x12117530u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x12117550 (19 bytes, 9 insns) */
void f_12117550(void) {
  FTRACE(0x12117550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117550 push ebp */
  push32((uint32_t)(EBP));
  /* 12117551 mov ebp, esp */
  EBP = (ESP);
  /* 12117553 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117555 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117557 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117559 call 0x12117590 */
  push32(0x1211755eu); f_12117590();
  /* 1211755e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117561 pop ebp */
  EBP = (pop32());
  /* 12117562 ret  */
  ESPCHK(0x12117550u, _esp0);
  ESP += 4; return;
}

/* FUN_10007570 @ 0x12117570 (19 bytes, 9 insns) */
void f_12117570(void) {
  FTRACE(0x12117570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117570 push ebp */
  push32((uint32_t)(EBP));
  /* 12117571 mov ebp, esp */
  EBP = (ESP);
  /* 12117573 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117575 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117577 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117579 call 0x12117590 */
  push32(0x1211757eu); f_12117590();
  /* 1211757e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117581 pop ebp */
  EBP = (pop32());
  /* 12117582 ret  */
  ESPCHK(0x12117570u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x12117590 (227 bytes, 61 insns) */
void f_12117590(void) {
  FTRACE(0x12117590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117590 push ebp */
  push32((uint32_t)(EBP));
  /* 12117591 mov ebp, esp */
  EBP = (ESP);
  /* 12117593 push ecx */
  push32((uint32_t)(ECX));
  /* 12117594 call 0x12117680 */
  push32(0x12117599u); f_12117680();
  /* 12117599 cmp dword ptr [0x12143824], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12143824))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121175a0 jne 0x121175b3 */
  if (!C.zf) goto L_121175b3;
  /* 121175a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121175a5 push eax */
  push32((uint32_t)(EAX));
  /* 121175a6 call dword ptr [0x121463e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463e0))), 0x121175acu);
  /* 121175ac push eax */
  push32((uint32_t)(EAX));
  /* 121175ad call dword ptr [0x121463dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463dc))), 0x121175b3u);
L_121175b3:;
  /* 121175b3 mov dword ptr [0x12143820], 1 */
  w32((uint32_t)(0x12143820), (0x1u));
  /* 121175bd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 121175c0 mov byte ptr [0x1214381c], cl */
  w8((uint32_t)(0x1214381c), (CL));
  /* 121175c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121175ca jne 0x12117613 */
  if (!C.zf) goto L_12117613;
  /* 121175cc cmp dword ptr [0x12145318], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145318))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121175d3 je 0x12117601 */
  if (C.zf) goto L_12117601;
  /* 121175d5 mov edx, dword ptr [0x12145314] */
  EDX = (r32((uint32_t)(0x12145314)));
  /* 121175db mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121175de:;
  /* 121175de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121175e1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121175e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121175e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121175ea cmp ecx, dword ptr [0x12145318] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12145318))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121175f0 jb 0x12117601 */
  if (C.cf) goto L_12117601;
  /* 121175f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121175f5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121175f8 je 0x121175ff */
  if (C.zf) goto L_121175ff;
  /* 121175fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121175fd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x121175ffu);
L_121175ff:;
  /* 121175ff jmp 0x121175de */
  goto L_121175de;
L_12117601:;
  /* 12117601 push 0x12141724 */
  push32((uint32_t)(0x12141724u));
  /* 12117606 push 0x1214151c */
  push32((uint32_t)(0x1214151cu));
  /* 1211760b call 0x121176a0 */
  push32(0x12117610u); f_121176a0();
  /* 12117610 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117613:;
  /* 12117613 push 0x1214192c */
  push32((uint32_t)(0x1214192cu));
  /* 12117618 push 0x12141828 */
  push32((uint32_t)(0x12141828u));
  /* 1211761d call 0x121176a0 */
  push32(0x12117622u); f_121176a0();
  /* 12117622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117625 cmp dword ptr [0x12143828], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143828))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211762c jne 0x1211764e */
  if (!C.zf) goto L_1211764e;
  /* 1211762e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12117630 call 0x12119280 */
  push32(0x12117635u); f_12119280();
  /* 12117635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117638 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1211763b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211763d je 0x1211764e */
  if (C.zf) goto L_1211764e;
  /* 1211763f mov dword ptr [0x12143828], 1 */
  w32((uint32_t)(0x12143828), (0x1u));
  /* 12117649 call 0x12119b90 */
  push32(0x1211764eu); f_12119b90();
L_1211764e:;
  /* 1211764e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117652 je 0x1211765b */
  if (C.zf) goto L_1211765b;
  /* 12117654 call 0x12117690 */
  push32(0x12117659u); f_12117690();
  /* 12117659 jmp 0x1211766f */
  goto L_1211766f;
L_1211765b:;
  /* 1211765b mov dword ptr [0x12143824], 1 */
  w32((uint32_t)(0x12143824), (0x1u));
  /* 12117665 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117668 push ecx */
  push32((uint32_t)(ECX));
  /* 12117669 call dword ptr [0x121462e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462e4))), 0x1211766fu);
L_1211766f:;
  /* 1211766f mov esp, ebp */
  ESP = (EBP);
  /* 12117671 pop ebp */
  EBP = (pop32());
  /* 12117672 ret  */
  ESPCHK(0x12117590u, _esp0);
  ESP += 4; return;
}

/* FUN_10007680 @ 0x12117680 (15 bytes, 7 insns) */
void f_12117680(void) {
  FTRACE(0x12117680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117680 push ebp */
  push32((uint32_t)(EBP));
  /* 12117681 mov ebp, esp */
  EBP = (ESP);
  /* 12117683 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12117685 call 0x1211b770 */
  push32(0x1211768au); f_1211b770();
  /* 1211768a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211768d pop ebp */
  EBP = (pop32());
  /* 1211768e ret  */
  ESPCHK(0x12117680u, _esp0);
  ESP += 4; return;
}

/* FUN_10007690 @ 0x12117690 (15 bytes, 7 insns) */
void f_12117690(void) {
  FTRACE(0x12117690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117690 push ebp */
  push32((uint32_t)(EBP));
  /* 12117691 mov ebp, esp */
  EBP = (ESP);
  /* 12117693 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12117695 call 0x1211b810 */
  push32(0x1211769au); f_1211b810();
  /* 1211769a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211769d pop ebp */
  EBP = (pop32());
  /* 1211769e ret  */
  ESPCHK(0x12117690u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x121176a0 (37 bytes, 16 insns) */
void f_121176a0(void) {
  FTRACE(0x121176a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121176a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121176a1 mov ebp, esp */
  EBP = (ESP);
L_121176a3:;
  /* 121176a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121176a6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121176a9 jae 0x121176c3 */
  if (!C.cf) goto L_121176c3;
  /* 121176ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121176ae cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121176b1 je 0x121176b8 */
  if (C.zf) goto L_121176b8;
  /* 121176b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121176b6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x121176b8u);
L_121176b8:;
  /* 121176b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121176bb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121176be mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121176c1 jmp 0x121176a3 */
  goto L_121176a3;
L_121176c3:;
  /* 121176c3 pop ebp */
  EBP = (pop32());
  /* 121176c4 ret  */
  ESPCHK(0x121176a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076d0 @ 0x121176d0 (130 bytes, 42 insns) */
void f_121176d0(void) {
  FTRACE(0x121176d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121176d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121176d1 mov ebp, esp */
  EBP = (ESP);
  /* 121176d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121176d4 call 0x1211b690 */
  push32(0x121176d9u); f_1211b690();
  /* 121176d9 call dword ptr [0x121463d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463d4))), 0x121176dfu);
  /* 121176df mov dword ptr [0x12141a5c], eax */
  w32((uint32_t)(0x12141a5c), (EAX));
  /* 121176e4 cmp dword ptr [0x12141a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12141a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121176eb jne 0x121176f1 */
  if (!C.zf) goto L_121176f1;
  /* 121176ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121176ef jmp 0x1211774e */
  goto L_1211774e;
L_121176f1:;
  /* 121176f1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 121176f3 push 0x1213e8e0 */
  push32((uint32_t)(0x1213e8e0u));
  /* 121176f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121176fa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 121176fc push 1 */
  push32((uint32_t)(0x1u));
  /* 121176fe call 0x12118180 */
  push32(0x12117703u); f_12118180();
  /* 12117703 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117706 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12117709 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211770d je 0x12117724 */
  if (C.zf) goto L_12117724;
  /* 1211770f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117712 push eax */
  push32((uint32_t)(EAX));
  /* 12117713 mov ecx, dword ptr [0x12141a5c] */
  ECX = (r32((uint32_t)(0x12141a5c)));
  /* 12117719 push ecx */
  push32((uint32_t)(ECX));
  /* 1211771a call dword ptr [0x121463e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463e8))), 0x12117720u);
  /* 12117720 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117722 jne 0x12117728 */
  if (!C.zf) goto L_12117728;
L_12117724:;
  /* 12117724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12117726 jmp 0x1211774e */
  goto L_1211774e;
L_12117728:;
  /* 12117728 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211772b push edx */
  push32((uint32_t)(EDX));
  /* 1211772c call 0x12117790 */
  push32(0x12117731u); f_12117790();
  /* 12117731 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117734 call dword ptr [0x121463e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463e4))), 0x1211773au);
  /* 1211773a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211773d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1211773f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117742 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12117749 mov eax, 1 */
  EAX = (0x1u);
L_1211774e:;
  /* 1211774e mov esp, ebp */
  ESP = (EBP);
  /* 12117750 pop ebp */
  EBP = (pop32());
  /* 12117751 ret  */
  ESPCHK(0x121176d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007760 @ 0x12117760 (41 bytes, 11 insns) */
void f_12117760(void) {
  FTRACE(0x12117760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117760 push ebp */
  push32((uint32_t)(EBP));
  /* 12117761 mov ebp, esp */
  EBP = (ESP);
  /* 12117763 call 0x1211b6d0 */
  push32(0x12117768u); f_1211b6d0();
  /* 12117768 cmp dword ptr [0x12141a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12141a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211776f je 0x12117787 */
  if (C.zf) goto L_12117787;
  /* 12117771 mov eax, dword ptr [0x12141a5c] */
  EAX = (r32((uint32_t)(0x12141a5c)));
  /* 12117776 push eax */
  push32((uint32_t)(EAX));
  /* 12117777 call dword ptr [0x121463ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463ec))), 0x1211777du);
  /* 1211777d mov dword ptr [0x12141a5c], 0xffffffff */
  w32((uint32_t)(0x12141a5c), (0xffffffffu));
L_12117787:;
  /* 12117787 pop ebp */
  EBP = (pop32());
  /* 12117788 ret  */
  ESPCHK(0x12117760u, _esp0);
  ESP += 4; return;
}

/* FUN_10007790 @ 0x12117790 (25 bytes, 8 insns) */
void f_12117790(void) {
  FTRACE(0x12117790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117790 push ebp */
  push32((uint32_t)(EBP));
  /* 12117791 mov ebp, esp */
  EBP = (ESP);
  /* 12117793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117796 mov dword ptr [eax + 0x50], 0x12141c00 */
  w32((uint32_t)(EAX + 0x50), (0x12141c00u));
  /* 1211779d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121177a0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 121177a7 pop ebp */
  EBP = (pop32());
  /* 121177a8 ret  */
  ESPCHK(0x12117790u, _esp0);
  ESP += 4; return;
}

/* FUN_100077b0 @ 0x121177b0 (152 bytes, 48 insns) */
void f_121177b0(void) {
  FTRACE(0x121177b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121177b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121177b1 mov ebp, esp */
  EBP = (ESP);
  /* 121177b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121177b6 call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x121177bcu);
  /* 121177bc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121177bf mov eax, dword ptr [0x12141a5c] */
  EAX = (r32((uint32_t)(0x12141a5c)));
  /* 121177c4 push eax */
  push32((uint32_t)(EAX));
  /* 121177c5 call dword ptr [0x121463f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f4))), 0x121177cbu);
  /* 121177cb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121177ce cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121177d2 jne 0x12117837 */
  if (!C.zf) goto L_12117837;
  /* 121177d4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 121177d9 push 0x1213e8e0 */
  push32((uint32_t)(0x1213e8e0u));
  /* 121177de push 2 */
  push32((uint32_t)(0x2u));
  /* 121177e0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 121177e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 121177e4 call 0x12118180 */
  push32(0x121177e9u); f_12118180();
  /* 121177e9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121177ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121177ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121177f3 je 0x1211782d */
  if (C.zf) goto L_1211782d;
  /* 121177f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121177f8 push ecx */
  push32((uint32_t)(ECX));
  /* 121177f9 mov edx, dword ptr [0x12141a5c] */
  EDX = (r32((uint32_t)(0x12141a5c)));
  /* 121177ff push edx */
  push32((uint32_t)(EDX));
  /* 12117800 call dword ptr [0x121463e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463e8))), 0x12117806u);
  /* 12117806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117808 je 0x1211782d */
  if (C.zf) goto L_1211782d;
  /* 1211780a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211780d push eax */
  push32((uint32_t)(EAX));
  /* 1211780e call 0x12117790 */
  push32(0x12117813u); f_12117790();
  /* 12117813 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117816 call dword ptr [0x121463e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463e4))), 0x1211781cu);
  /* 1211781c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211781f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12117821 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117824 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1211782b jmp 0x12117837 */
  goto L_12117837;
L_1211782d:;
  /* 1211782d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1211782f call 0x12116ce0 */
  push32(0x12117834u); f_12116ce0();
  /* 12117834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117837:;
  /* 12117837 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211783a push eax */
  push32((uint32_t)(EAX));
  /* 1211783b call dword ptr [0x121463f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f0))), 0x12117841u);
  /* 12117841 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117844 mov esp, ebp */
  ESP = (EBP);
  /* 12117846 pop ebp */
  EBP = (pop32());
  /* 12117847 ret  */
  ESPCHK(0x121177b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007850 @ 0x12117850 (263 bytes, 86 insns) */
void f_12117850(void) {
  FTRACE(0x12117850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117850 push ebp */
  push32((uint32_t)(EBP));
  /* 12117851 mov ebp, esp */
  EBP = (ESP);
  /* 12117853 cmp dword ptr [0x12141a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12141a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211785a je 0x12117955 */
  if (C.zf) goto L_12117955;
  /* 12117860 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117864 jne 0x12117875 */
  if (!C.zf) goto L_12117875;
  /* 12117866 mov eax, dword ptr [0x12141a5c] */
  EAX = (r32((uint32_t)(0x12141a5c)));
  /* 1211786b push eax */
  push32((uint32_t)(EAX));
  /* 1211786c call dword ptr [0x121463f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f4))), 0x12117872u);
  /* 12117872 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12117875:;
  /* 12117875 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117879 je 0x12117946 */
  if (C.zf) goto L_12117946;
  /* 1211787f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117882 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117886 je 0x12117899 */
  if (C.zf) goto L_12117899;
  /* 12117888 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211788a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211788d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12117890 push eax */
  push32((uint32_t)(EAX));
  /* 12117891 call 0x12118800 */
  push32(0x12117896u); f_12118800();
  /* 12117896 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117899:;
  /* 12117899 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211789c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121178a0 je 0x121178b3 */
  if (C.zf) goto L_121178b3;
  /* 121178a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121178a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121178a7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 121178aa push eax */
  push32((uint32_t)(EAX));
  /* 121178ab call 0x12118800 */
  push32(0x121178b0u); f_12118800();
  /* 121178b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121178b3:;
  /* 121178b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121178b6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121178ba je 0x121178cd */
  if (C.zf) goto L_121178cd;
  /* 121178bc push 2 */
  push32((uint32_t)(0x2u));
  /* 121178be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121178c1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 121178c4 push eax */
  push32((uint32_t)(EAX));
  /* 121178c5 call 0x12118800 */
  push32(0x121178cau); f_12118800();
  /* 121178ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121178cd:;
  /* 121178cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121178d0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121178d4 je 0x121178e7 */
  if (C.zf) goto L_121178e7;
  /* 121178d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121178d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121178db mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 121178de push eax */
  push32((uint32_t)(EAX));
  /* 121178df call 0x12118800 */
  push32(0x121178e4u); f_12118800();
  /* 121178e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121178e7:;
  /* 121178e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121178ea cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121178ee je 0x12117901 */
  if (C.zf) goto L_12117901;
  /* 121178f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121178f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121178f5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 121178f8 push eax */
  push32((uint32_t)(EAX));
  /* 121178f9 call 0x12118800 */
  push32(0x121178feu); f_12118800();
  /* 121178fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117901:;
  /* 12117901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117904 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117908 je 0x1211791b */
  if (C.zf) goto L_1211791b;
  /* 1211790a push 2 */
  push32((uint32_t)(0x2u));
  /* 1211790c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211790f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12117912 push eax */
  push32((uint32_t)(EAX));
  /* 12117913 call 0x12118800 */
  push32(0x12117918u); f_12118800();
  /* 12117918 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211791b:;
  /* 1211791b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211791e cmp dword ptr [ecx + 0x50], 0x12141c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x12141c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117925 je 0x12117938 */
  if (C.zf) goto L_12117938;
  /* 12117927 push 2 */
  push32((uint32_t)(0x2u));
  /* 12117929 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211792c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1211792f push eax */
  push32((uint32_t)(EAX));
  /* 12117930 call 0x12118800 */
  push32(0x12117935u); f_12118800();
  /* 12117935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117938:;
  /* 12117938 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211793a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211793d push ecx */
  push32((uint32_t)(ECX));
  /* 1211793e call 0x12118800 */
  push32(0x12117943u); f_12118800();
  /* 12117943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12117946:;
  /* 12117946 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117948 mov edx, dword ptr [0x12141a5c] */
  EDX = (r32((uint32_t)(0x12141a5c)));
  /* 1211794e push edx */
  push32((uint32_t)(EDX));
  /* 1211794f call dword ptr [0x121463e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463e8))), 0x12117955u);
L_12117955:;
  /* 12117955 pop ebp */
  EBP = (pop32());
  /* 12117956 ret  */
  ESPCHK(0x12117850u, _esp0);
  ESP += 4; return;
}

/* FUN_10007960 @ 0x12117960 (11 bytes, 5 insns) */
void f_12117960(void) {
  FTRACE(0x12117960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117960 push ebp */
  push32((uint32_t)(EBP));
  /* 12117961 mov ebp, esp */
  EBP = (ESP);
  /* 12117963 call dword ptr [0x121463e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463e4))), 0x12117969u);
  /* 12117969 pop ebp */
  EBP = (pop32());
  /* 1211796a ret  */
  ESPCHK(0x12117960u, _esp0);
  ESP += 4; return;
}

/* FUN_10007970 @ 0x12117970 (11 bytes, 5 insns) */
void f_12117970(void) {
  FTRACE(0x12117970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117970 push ebp */
  push32((uint32_t)(EBP));
  /* 12117971 mov ebp, esp */
  EBP = (ESP);
  /* 12117973 call dword ptr [0x121463fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463fc))), 0x12117979u);
  /* 12117979 pop ebp */
  EBP = (pop32());
  /* 1211797a ret  */
  ESPCHK(0x12117970u, _esp0);
  ESP += 4; return;
}

/* FUN_10007980 @ 0x12117980 (804 bytes, 236 insns) */
void f_12117980(void) {
  FTRACE(0x12117980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117980 push ebp */
  push32((uint32_t)(EBP));
  /* 12117981 mov ebp, esp */
  EBP = (ESP);
  /* 12117983 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12117986 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1211798b push 0x1213e8ec */
  push32((uint32_t)(0x1213e8ecu));
  /* 12117990 push 2 */
  push32((uint32_t)(0x2u));
  /* 12117992 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12117997 call 0x12117d70 */
  push32(0x1211799cu); f_12117d70();
  /* 1211799c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211799f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 121179a2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121179a6 jne 0x121179b2 */
  if (!C.zf) goto L_121179b2;
  /* 121179a8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 121179aa call 0x12116ce0 */
  push32(0x121179afu); f_12116ce0();
  /* 121179af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121179b2:;
  /* 121179b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121179b5 mov dword ptr [0x121451c0], eax */
  w32((uint32_t)(0x121451c0), (EAX));
  /* 121179ba mov dword ptr [0x121452fc], 0x20 */
  w32((uint32_t)(0x121452fc), (0x20u));
  /* 121179c4 jmp 0x121179cf */
  goto L_121179cf;
L_121179c6:;
  /* 121179c6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 121179c9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121179cc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_121179cf:;
  /* 121179cf mov edx, dword ptr [0x121451c0] */
  EDX = (r32((uint32_t)(0x121451c0)));
  /* 121179d5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121179db cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121179de jae 0x12117a03 */
  if (!C.cf) goto L_12117a03;
  /* 121179e0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121179e3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 121179e7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 121179ea mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 121179f0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 121179f3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 121179f7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121179fa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12117a01 jmp 0x121179c6 */
  goto L_121179c6;
L_12117a03:;
  /* 12117a03 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12117a06 push ecx */
  push32((uint32_t)(ECX));
  /* 12117a07 call dword ptr [0x121463d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463d8))), 0x12117a0du);
  /* 12117a0d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12117a10 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12117a16 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12117a18 je 0x12117ba5 */
  if (C.zf) goto L_12117ba5;
  /* 12117a1e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117a22 je 0x12117ba5 */
  if (C.zf) goto L_12117ba5;
  /* 12117a28 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12117a2b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12117a2d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12117a30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12117a33 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117a36 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12117a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117a3c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117a3f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12117a42 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117a49 jge 0x12117a53 */
  if ((C.sf==C.of)) goto L_12117a53;
  /* 12117a4b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 12117a4e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12117a51 jmp 0x12117a5a */
  goto L_12117a5a;
L_12117a53:;
  /* 12117a53 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_12117a5a:;
  /* 12117a5a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 12117a5d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12117a60 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12117a67 jmp 0x12117a72 */
  goto L_12117a72;
L_12117a69:;
  /* 12117a69 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12117a6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117a6f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12117a72:;
  /* 12117a72 mov ecx, dword ptr [0x121452fc] */
  ECX = (r32((uint32_t)(0x121452fc)));
  /* 12117a78 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117a7b jge 0x12117b12 */
  if ((C.sf==C.of)) goto L_12117b12;
  /* 12117a81 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12117a86 push 0x1213e8ec */
  push32((uint32_t)(0x1213e8ecu));
  /* 12117a8b push 2 */
  push32((uint32_t)(0x2u));
  /* 12117a8d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12117a92 call 0x12117d70 */
  push32(0x12117a97u); f_12117d70();
  /* 12117a97 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117a9a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12117a9d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117aa1 jne 0x12117aae */
  if (!C.zf) goto L_12117aae;
  /* 12117aa3 mov edx, dword ptr [0x121452fc] */
  EDX = (r32((uint32_t)(0x121452fc)));
  /* 12117aa9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12117aac jmp 0x12117b12 */
  goto L_12117b12;
L_12117aae:;
  /* 12117aae mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12117ab1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117ab4 mov dword ptr [eax*4 + 0x121451c0], ecx */
  w32((uint32_t)(EAX*4 + 0x121451c0), (ECX));
  /* 12117abb mov edx, dword ptr [0x121452fc] */
  EDX = (r32((uint32_t)(0x121452fc)));
  /* 12117ac1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117ac4 mov dword ptr [0x121452fc], edx */
  w32((uint32_t)(0x121452fc), (EDX));
  /* 12117aca jmp 0x12117ad5 */
  goto L_12117ad5;
L_12117acc:;
  /* 12117acc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117acf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117ad2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12117ad5:;
  /* 12117ad5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12117ad8 mov edx, dword ptr [ecx*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x121451c0)));
  /* 12117adf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117ae5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117ae8 jae 0x12117b0d */
  if (!C.cf) goto L_12117b0d;
  /* 12117aea mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117aed mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12117af1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117af4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12117afa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117afd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12117b01 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117b04 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12117b0b jmp 0x12117acc */
  goto L_12117acc;
L_12117b0d:;
  /* 12117b0d jmp 0x12117a69 */
  goto L_12117a69;
L_12117b12:;
  /* 12117b12 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12117b19 jmp 0x12117b36 */
  goto L_12117b36;
L_12117b1b:;
  /* 12117b1b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12117b1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117b21 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12117b24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117b27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117b2a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12117b2d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12117b30 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117b33 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12117b36:;
  /* 12117b36 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12117b39 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117b3c jge 0x12117ba5 */
  if ((C.sf==C.of)) goto L_12117ba5;
  /* 12117b3e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12117b41 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117b44 je 0x12117ba0 */
  if (C.zf) goto L_12117ba0;
  /* 12117b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117b49 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12117b4c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12117b4f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12117b51 je 0x12117ba0 */
  if (C.zf) goto L_12117ba0;
  /* 12117b53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117b56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12117b59 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12117b5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117b5e jne 0x12117b70 */
  if (!C.zf) goto L_12117b70;
  /* 12117b60 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12117b63 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12117b65 push edx */
  push32((uint32_t)(EDX));
  /* 12117b66 call dword ptr [0x121463a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463a4))), 0x12117b6cu);
  /* 12117b6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117b6e je 0x12117ba0 */
  if (C.zf) goto L_12117ba0;
L_12117b70:;
  /* 12117b70 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12117b73 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12117b76 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12117b79 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12117b7c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12117b7f mov edx, dword ptr [eax*4 + 0x121451c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 12117b86 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117b88 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12117b8b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117b8e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12117b91 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12117b93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12117b95 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117b98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117b9b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12117b9d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12117ba0:;
  /* 12117ba0 jmp 0x12117b1b */
  goto L_12117b1b;
L_12117ba5:;
  /* 12117ba5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12117bac jmp 0x12117bb7 */
  goto L_12117bb7;
L_12117bae:;
  /* 12117bae mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12117bb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117bb4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12117bb7:;
  /* 12117bb7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117bbb jge 0x12117c94 */
  if ((C.sf==C.of)) goto L_12117c94;
  /* 12117bc1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12117bc4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12117bc7 mov edx, dword ptr [0x121451c0] */
  EDX = (r32((uint32_t)(0x121451c0)));
  /* 12117bcd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117bcf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12117bd2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117bd5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117bd8 jne 0x12117c80 */
  if (!C.zf) goto L_12117c80;
  /* 12117bde mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117be1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12117be5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117be9 jne 0x12117bf4 */
  if (!C.zf) goto L_12117bf4;
  /* 12117beb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12117bf2 jmp 0x12117c04 */
  goto L_12117c04;
L_12117bf4:;
  /* 12117bf4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12117bf7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12117bfa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12117bfc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12117bfe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117c01 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12117c04:;
  /* 12117c04 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12117c07 push eax */
  push32((uint32_t)(EAX));
  /* 12117c08 call dword ptr [0x121463b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463b8))), 0x12117c0eu);
  /* 12117c0e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12117c11 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117c15 je 0x12117c6f */
  if (C.zf) goto L_12117c6f;
  /* 12117c17 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12117c1a push ecx */
  push32((uint32_t)(ECX));
  /* 12117c1b call dword ptr [0x121463a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463a4))), 0x12117c21u);
  /* 12117c21 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12117c24 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117c28 je 0x12117c6f */
  if (C.zf) goto L_12117c6f;
  /* 12117c2a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c2d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12117c30 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12117c32 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12117c35 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12117c3b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117c3e jne 0x12117c50 */
  if (!C.zf) goto L_12117c50;
  /* 12117c40 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c43 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12117c46 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12117c48 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c4b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 12117c4e jmp 0x12117c6d */
  goto L_12117c6d;
L_12117c50:;
  /* 12117c50 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12117c53 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12117c59 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117c5c jne 0x12117c6d */
  if (!C.zf) goto L_12117c6d;
  /* 12117c5e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c61 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12117c64 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12117c67 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c6a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12117c6d:;
  /* 12117c6d jmp 0x12117c7e */
  goto L_12117c7e;
L_12117c6f:;
  /* 12117c6f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c72 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12117c75 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12117c78 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c7b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12117c7e:;
  /* 12117c7e jmp 0x12117c8f */
  goto L_12117c8f;
L_12117c80:;
  /* 12117c80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c83 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12117c86 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 12117c89 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12117c8c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_12117c8f:;
  /* 12117c8f jmp 0x12117bae */
  goto L_12117bae;
L_12117c94:;
  /* 12117c94 mov eax, dword ptr [0x121452fc] */
  EAX = (r32((uint32_t)(0x121452fc)));
  /* 12117c99 push eax */
  push32((uint32_t)(EAX));
  /* 12117c9a call dword ptr [0x121463a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463a8))), 0x12117ca0u);
  /* 12117ca0 mov esp, ebp */
  ESP = (EBP);
  /* 12117ca2 pop ebp */
  EBP = (pop32());
  /* 12117ca3 ret  */
  ESPCHK(0x12117980u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12117cb0 (155 bytes, 45 insns) */
void f_12117cb0(void) {
  FTRACE(0x12117cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12117cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12117cb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12117cb6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12117cbd jmp 0x12117cc8 */
  goto L_12117cc8;
L_12117cbf:;
  /* 12117cbf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12117cc2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117cc5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12117cc8:;
  /* 12117cc8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117ccc jge 0x12117d47 */
  if ((C.sf==C.of)) goto L_12117d47;
  /* 12117cce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12117cd1 cmp dword ptr [ecx*4 + 0x121451c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x121451c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117cd9 je 0x12117d42 */
  if (C.zf) goto L_12117d42;
  /* 12117cdb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12117cde mov eax, dword ptr [edx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 12117ce5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12117ce8 jmp 0x12117cf3 */
  goto L_12117cf3;
L_12117cea:;
  /* 12117cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117ced add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117cf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12117cf3:;
  /* 12117cf3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12117cf6 mov eax, dword ptr [edx*4 + 0x121451c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x121451c0)));
  /* 12117cfd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117d02 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117d05 jae 0x12117d1f */
  if (!C.cf) goto L_12117d1f;
  /* 12117d07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117d0a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117d0e je 0x12117d1d */
  if (C.zf) goto L_12117d1d;
  /* 12117d10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117d13 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117d16 push edx */
  push32((uint32_t)(EDX));
  /* 12117d17 call dword ptr [0x1214639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214639c))), 0x12117d1du);
L_12117d1d:;
  /* 12117d1d jmp 0x12117cea */
  goto L_12117cea;
L_12117d1f:;
  /* 12117d1f push 2 */
  push32((uint32_t)(0x2u));
  /* 12117d21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12117d24 mov ecx, dword ptr [eax*4 + 0x121451c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x121451c0)));
  /* 12117d2b push ecx */
  push32((uint32_t)(ECX));
  /* 12117d2c call 0x12118800 */
  push32(0x12117d31u); f_12118800();
  /* 12117d31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117d34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12117d37 mov dword ptr [edx*4 + 0x121451c0], 0 */
  w32((uint32_t)(EDX*4 + 0x121451c0), (0x0u));
L_12117d42:;
  /* 12117d42 jmp 0x12117cbf */
  goto L_12117cbf;
L_12117d47:;
  /* 12117d47 mov esp, ebp */
  ESP = (EBP);
  /* 12117d49 pop ebp */
  EBP = (pop32());
  /* 12117d4a ret  */
  ESPCHK(0x12117cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d50 @ 0x12117d50 (29 bytes, 13 insns) */
void f_12117d50(void) {
  FTRACE(0x12117d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12117d51 mov ebp, esp */
  EBP = (ESP);
  /* 12117d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117d57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117d59 mov eax, dword ptr [0x121439d0] */
  EAX = (r32((uint32_t)(0x121439d0)));
  /* 12117d5e push eax */
  push32((uint32_t)(EAX));
  /* 12117d5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117d62 push ecx */
  push32((uint32_t)(ECX));
  /* 12117d63 call 0x12117dc0 */
  push32(0x12117d68u); f_12117dc0();
  /* 12117d68 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117d6b pop ebp */
  EBP = (pop32());
  /* 12117d6c ret  */
  ESPCHK(0x12117d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d70 @ 0x12117d70 (35 bytes, 16 insns) */
void f_12117d70(void) {
  FTRACE(0x12117d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117d70 push ebp */
  push32((uint32_t)(EBP));
  /* 12117d71 mov ebp, esp */
  EBP = (ESP);
  /* 12117d73 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12117d76 push eax */
  push32((uint32_t)(EAX));
  /* 12117d77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12117d7a push ecx */
  push32((uint32_t)(ECX));
  /* 12117d7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12117d7e push edx */
  push32((uint32_t)(EDX));
  /* 12117d7f mov eax, dword ptr [0x121439d0] */
  EAX = (r32((uint32_t)(0x121439d0)));
  /* 12117d84 push eax */
  push32((uint32_t)(EAX));
  /* 12117d85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117d88 push ecx */
  push32((uint32_t)(ECX));
  /* 12117d89 call 0x12117dc0 */
  push32(0x12117d8eu); f_12117dc0();
  /* 12117d8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117d91 pop ebp */
  EBP = (pop32());
  /* 12117d92 ret  */
  ESPCHK(0x12117d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007da0 @ 0x12117da0 (27 bytes, 13 insns) */
void f_12117da0(void) {
  FTRACE(0x12117da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12117da1 mov ebp, esp */
  EBP = (ESP);
  /* 12117da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117da7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117da9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12117dac push eax */
  push32((uint32_t)(EAX));
  /* 12117dad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117db0 push ecx */
  push32((uint32_t)(ECX));
  /* 12117db1 call 0x12117dc0 */
  push32(0x12117db6u); f_12117dc0();
  /* 12117db6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117db9 pop ebp */
  EBP = (pop32());
  /* 12117dba ret  */
  ESPCHK(0x12117da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dc0 @ 0x12117dc0 (94 bytes, 38 insns) */
void f_12117dc0(void) {
  FTRACE(0x12117dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12117dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12117dc3 push ecx */
  push32((uint32_t)(ECX));
L_12117dc4:;
  /* 12117dc4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12117dc6 call 0x1211b770 */
  push32(0x12117dcbu); f_1211b770();
  /* 12117dcb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117dce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12117dd1 push eax */
  push32((uint32_t)(EAX));
  /* 12117dd2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12117dd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12117dd6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12117dd9 push edx */
  push32((uint32_t)(EDX));
  /* 12117dda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117ddd push eax */
  push32((uint32_t)(EAX));
  /* 12117dde call 0x12117e40 */
  push32(0x12117de3u); f_12117e40();
  /* 12117de3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117de6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12117de9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12117deb call 0x1211b810 */
  push32(0x12117df0u); f_1211b810();
  /* 12117df0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117df3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117df7 jne 0x12117dff */
  if (!C.zf) goto L_12117dff;
  /* 12117df9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117dfd jne 0x12117e04 */
  if (!C.zf) goto L_12117e04;
L_12117dff:;
  /* 12117dff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12117e02 jmp 0x12117e1a */
  goto L_12117e1a;
L_12117e04:;
  /* 12117e04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117e07 push ecx */
  push32((uint32_t)(ECX));
  /* 12117e08 call 0x1211bab0 */
  push32(0x12117e0du); f_1211bab0();
  /* 12117e0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117e10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117e12 jne 0x12117e18 */
  if (!C.zf) goto L_12117e18;
  /* 12117e14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12117e16 jmp 0x12117e1a */
  goto L_12117e1a;
L_12117e18:;
  /* 12117e18 jmp 0x12117dc4 */
  goto L_12117dc4;
L_12117e1a:;
  /* 12117e1a mov esp, ebp */
  ESP = (EBP);
  /* 12117e1c pop ebp */
  EBP = (pop32());
  /* 12117e1d ret  */
  ESPCHK(0x12117dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e20 @ 0x12117e20 (23 bytes, 11 insns) */
void f_12117e20(void) {
  FTRACE(0x12117e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12117e21 mov ebp, esp */
  EBP = (ESP);
  /* 12117e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117e27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117e29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117e2c push eax */
  push32((uint32_t)(EAX));
  /* 12117e2d call 0x12117e40 */
  push32(0x12117e32u); f_12117e40();
  /* 12117e32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117e35 pop ebp */
  EBP = (pop32());
  /* 12117e36 ret  */
  ESPCHK(0x12117e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e40 @ 0x12117e40 (787 bytes, 254 insns) */
void f_12117e40(void) {
  FTRACE(0x12117e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12117e40 push ebp */
  push32((uint32_t)(EBP));
  /* 12117e41 mov ebp, esp */
  EBP = (ESP);
  /* 12117e43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12117e46 push ebx */
  push32((uint32_t)(EBX));
  /* 12117e47 push esi */
  push32((uint32_t)(ESI));
  /* 12117e48 push edi */
  push32((uint32_t)(EDI));
  /* 12117e49 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12117e50 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 12117e55 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12117e58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117e5a je 0x12117e8c */
  if (C.zf) goto L_12117e8c;
L_12117e5c:;
  /* 12117e5c call 0x12118f10 */
  push32(0x12117e61u); f_12118f10();
  /* 12117e61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117e63 jne 0x12117e86 */
  if (!C.zf) goto L_12117e86;
  /* 12117e65 push 0x1213e9e0 */
  push32((uint32_t)(0x1213e9e0u));
  /* 12117e6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12117e6c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12117e71 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12117e76 push 2 */
  push32((uint32_t)(0x2u));
  /* 12117e78 call 0x12116e30 */
  push32(0x12117e7du); f_12116e30();
  /* 12117e7d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117e80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117e83 jne 0x12117e86 */
  if (!C.zf) goto L_12117e86;
  /* 12117e85 int3  */
  x86_unimpl("int3 @ 0x12117e85");
L_12117e86:;
  /* 12117e86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12117e88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12117e8a jne 0x12117e5c */
  if (!C.zf) goto L_12117e5c;
L_12117e8c:;
  /* 12117e8c mov edx, dword ptr [0x12141a88] */
  EDX = (r32((uint32_t)(0x12141a88)));
  /* 12117e92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12117e95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12117e98 cmp eax, dword ptr [0x12141a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12141a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117e9e jne 0x12117ea1 */
  if (!C.zf) goto L_12117ea1;
  /* 12117ea0 int3  */
  x86_unimpl("int3 @ 0x12117ea0");
L_12117ea1:;
  /* 12117ea1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12117ea4 push ecx */
  push32((uint32_t)(ECX));
  /* 12117ea5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12117ea8 push edx */
  push32((uint32_t)(EDX));
  /* 12117ea9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12117eac push eax */
  push32((uint32_t)(EAX));
  /* 12117ead mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12117eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12117eb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117eb4 push edx */
  push32((uint32_t)(EDX));
  /* 12117eb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117eb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117eb9 call dword ptr [0x12141c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12141c90))), 0x12117ebfu);
  /* 12117ebf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117ec2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117ec4 jne 0x12117f24 */
  if (!C.zf) goto L_12117f24;
  /* 12117ec6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117eca je 0x12117ef7 */
  if (C.zf) goto L_12117ef7;
L_12117ecc:;
  /* 12117ecc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12117ecf push eax */
  push32((uint32_t)(EAX));
  /* 12117ed0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12117ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 12117ed4 push 0x1213e99c */
  push32((uint32_t)(0x1213e99cu));
  /* 12117ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117edb push 0 */
  push32((uint32_t)(0x0u));
  /* 12117edd push 0 */
  push32((uint32_t)(0x0u));
  /* 12117edf push 0 */
  push32((uint32_t)(0x0u));
  /* 12117ee1 call 0x12116e30 */
  push32(0x12117ee6u); f_12116e30();
  /* 12117ee6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117ee9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117eec jne 0x12117eef */
  if (!C.zf) goto L_12117eef;
  /* 12117eee int3  */
  x86_unimpl("int3 @ 0x12117eee");
L_12117eef:;
  /* 12117eef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12117ef1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12117ef3 jne 0x12117ecc */
  if (!C.zf) goto L_12117ecc;
  /* 12117ef5 jmp 0x12117f1d */
  goto L_12117f1d;
L_12117ef7:;
  /* 12117ef7 push 0x1213e978 */
  push32((uint32_t)(0x1213e978u));
  /* 12117efc push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12117f01 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117f09 call 0x12116e30 */
  push32(0x12117f0eu); f_12116e30();
  /* 12117f0e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117f11 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117f14 jne 0x12117f17 */
  if (!C.zf) goto L_12117f17;
  /* 12117f16 int3  */
  x86_unimpl("int3 @ 0x12117f16");
L_12117f17:;
  /* 12117f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12117f19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12117f1b jne 0x12117ef7 */
  if (!C.zf) goto L_12117ef7;
L_12117f1d:;
  /* 12117f1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12117f1f jmp 0x1211814c */
  goto L_1211814c;
L_12117f24:;
  /* 12117f24 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12117f27 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12117f2d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117f30 je 0x12117f46 */
  if (C.zf) goto L_12117f46;
  /* 12117f32 mov edx, dword ptr [0x12141a84] */
  EDX = (r32((uint32_t)(0x12141a84)));
  /* 12117f38 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12117f3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12117f3d jne 0x12117f46 */
  if (!C.zf) goto L_12117f46;
  /* 12117f3f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12117f46:;
  /* 12117f46 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117f4a ja 0x12117f57 */
  if ((!C.cf&&!C.zf)) goto L_12117f57;
  /* 12117f4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117f4f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117f52 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117f55 jbe 0x12117f83 */
  if ((C.cf||C.zf)) goto L_12117f83;
L_12117f57:;
  /* 12117f57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117f5a push ecx */
  push32((uint32_t)(ECX));
  /* 12117f5b push 0x1213e950 */
  push32((uint32_t)(0x1213e950u));
  /* 12117f60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117f62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117f66 push 1 */
  push32((uint32_t)(0x1u));
  /* 12117f68 call 0x12116e30 */
  push32(0x12117f6du); f_12116e30();
  /* 12117f6d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117f70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117f73 jne 0x12117f76 */
  if (!C.zf) goto L_12117f76;
  /* 12117f75 int3  */
  x86_unimpl("int3 @ 0x12117f75");
L_12117f76:;
  /* 12117f76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12117f78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12117f7a jne 0x12117f57 */
  if (!C.zf) goto L_12117f57;
  /* 12117f7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12117f7e jmp 0x1211814c */
  goto L_1211814c;
L_12117f83:;
  /* 12117f83 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12117f86 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12117f8b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117f8e je 0x12117fd0 */
  if (C.zf) goto L_12117fd0;
  /* 12117f90 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117f94 je 0x12117fd0 */
  if (C.zf) goto L_12117fd0;
  /* 12117f96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12117f99 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12117f9f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117fa2 je 0x12117fd0 */
  if (C.zf) goto L_12117fd0;
  /* 12117fa4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117fa8 je 0x12117fd0 */
  if (C.zf) goto L_12117fd0;
L_12117faa:;
  /* 12117faa push 0x1213e91c */
  push32((uint32_t)(0x1213e91cu));
  /* 12117faf push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12117fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12117fba push 1 */
  push32((uint32_t)(0x1u));
  /* 12117fbc call 0x12116e30 */
  push32(0x12117fc1u); f_12116e30();
  /* 12117fc1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117fc4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117fc7 jne 0x12117fca */
  if (!C.zf) goto L_12117fca;
  /* 12117fc9 int3  */
  x86_unimpl("int3 @ 0x12117fc9");
L_12117fca:;
  /* 12117fca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12117fcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12117fce jne 0x12117faa */
  if (!C.zf) goto L_12117faa;
L_12117fd0:;
  /* 12117fd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12117fd3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117fd6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12117fd9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12117fdc push ecx */
  push32((uint32_t)(ECX));
  /* 12117fdd call 0x1211bbc0 */
  push32(0x12117fe2u); f_1211bbc0();
  /* 12117fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12117fe5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12117fe8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12117fec jne 0x12117ff5 */
  if (!C.zf) goto L_12117ff5;
  /* 12117fee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12117ff0 jmp 0x1211814c */
  goto L_1211814c;
L_12117ff5:;
  /* 12117ff5 mov edx, dword ptr [0x12141a88] */
  EDX = (r32((uint32_t)(0x12141a88)));
  /* 12117ffb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12117ffe mov dword ptr [0x12141a88], edx */
  w32((uint32_t)(0x12141a88), (EDX));
  /* 12118004 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118008 je 0x12118053 */
  if (C.zf) goto L_12118053;
  /* 1211800a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211800d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12118013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118016 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1211801d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118020 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12118027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211802a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12118031 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118037 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1211803a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211803d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12118044 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118047 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1211804e jmp 0x121180f3 */
  goto L_121180f3;
L_12118053:;
  /* 12118053 mov edx, dword ptr [0x12143830] */
  EDX = (r32((uint32_t)(0x12143830)));
  /* 12118059 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211805c mov dword ptr [0x12143830], edx */
  w32((uint32_t)(0x12143830), (EDX));
  /* 12118062 mov eax, dword ptr [0x12143838] */
  EAX = (r32((uint32_t)(0x12143838)));
  /* 12118067 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211806a mov dword ptr [0x12143838], eax */
  w32((uint32_t)(0x12143838), (EAX));
  /* 1211806f mov ecx, dword ptr [0x12143838] */
  ECX = (r32((uint32_t)(0x12143838)));
  /* 12118075 cmp ecx, dword ptr [0x1214383c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1214383c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211807b jbe 0x12118089 */
  if ((C.cf||C.zf)) goto L_12118089;
  /* 1211807d mov edx, dword ptr [0x12143838] */
  EDX = (r32((uint32_t)(0x12143838)));
  /* 12118083 mov dword ptr [0x1214383c], edx */
  w32((uint32_t)(0x1214383c), (EDX));
L_12118089:;
  /* 12118089 cmp dword ptr [0x12143834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118090 je 0x1211809f */
  if (C.zf) goto L_1211809f;
  /* 12118092 mov eax, dword ptr [0x12143834] */
  EAX = (r32((uint32_t)(0x12143834)));
  /* 12118097 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211809a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1211809d jmp 0x121180a8 */
  goto L_121180a8;
L_1211809f:;
  /* 1211809f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180a2 mov dword ptr [0x1214382c], edx */
  w32((uint32_t)(0x1214382c), (EDX));
L_121180a8:;
  /* 121180a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180ab mov ecx, dword ptr [0x12143834] */
  ECX = (r32((uint32_t)(0x12143834)));
  /* 121180b1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 121180b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180b6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 121180bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121180c3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 121180c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121180cc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 121180cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121180d5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 121180d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121180de mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 121180e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121180e7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 121180ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121180ed mov dword ptr [0x12143834], ecx */
  w32((uint32_t)(0x12143834), (ECX));
L_121180f3:;
  /* 121180f3 push 4 */
  push32((uint32_t)(0x4u));
  /* 121180f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121180f7 mov dl, byte ptr [0x12141a90] */
  DL = (r8((uint32_t)(0x12141a90)));
  /* 121180fd push edx */
  push32((uint32_t)(EDX));
  /* 121180fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118101 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118104 push eax */
  push32((uint32_t)(EAX));
  /* 12118105 call 0x1211bae0 */
  push32(0x1211810au); f_1211bae0();
  /* 1211810a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211810d push 4 */
  push32((uint32_t)(0x4u));
  /* 1211810f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118111 mov cl, byte ptr [0x12141a90] */
  CL = (r8((uint32_t)(0x12141a90)));
  /* 12118117 push ecx */
  push32((uint32_t)(ECX));
  /* 12118118 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211811b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211811e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12118122 push ecx */
  push32((uint32_t)(ECX));
  /* 12118123 call 0x1211bae0 */
  push32(0x12118128u); f_1211bae0();
  /* 12118128 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211812b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211812e push edx */
  push32((uint32_t)(EDX));
  /* 1211812f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118131 mov al, byte ptr [0x12141a92] */
  AL = (r8((uint32_t)(0x12141a92)));
  /* 12118136 push eax */
  push32((uint32_t)(EAX));
  /* 12118137 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211813a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211813d push ecx */
  push32((uint32_t)(ECX));
  /* 1211813e call 0x1211bae0 */
  push32(0x12118143u); f_1211bae0();
  /* 12118143 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118149 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1211814c:;
  /* 1211814c pop edi */
  EDI = (pop32());
  /* 1211814d pop esi */
  ESI = (pop32());
  /* 1211814e pop ebx */
  EBX = (pop32());
  /* 1211814f mov esp, ebp */
  ESP = (EBP);
  /* 12118151 pop ebp */
  EBP = (pop32());
  /* 12118152 ret  */
  ESPCHK(0x12117e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008160 @ 0x12118160 (27 bytes, 13 insns) */
void f_12118160(void) {
  FTRACE(0x12118160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118160 push ebp */
  push32((uint32_t)(EBP));
  /* 12118161 mov ebp, esp */
  EBP = (ESP);
  /* 12118163 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118167 push 1 */
  push32((uint32_t)(0x1u));
  /* 12118169 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211816c push eax */
  push32((uint32_t)(EAX));
  /* 1211816d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118170 push ecx */
  push32((uint32_t)(ECX));
  /* 12118171 call 0x12118180 */
  push32(0x12118176u); f_12118180();
  /* 12118176 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118179 pop ebp */
  EBP = (pop32());
  /* 1211817a ret  */
  ESPCHK(0x12118160u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12118180 (96 bytes, 37 insns) */
void f_12118180(void) {
  FTRACE(0x12118180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118180 push ebp */
  push32((uint32_t)(EBP));
  /* 12118181 mov ebp, esp */
  EBP = (ESP);
  /* 12118183 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118186 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12118189 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211818d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12118190 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12118193 push ecx */
  push32((uint32_t)(ECX));
  /* 12118194 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12118197 push edx */
  push32((uint32_t)(EDX));
  /* 12118198 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211819b push eax */
  push32((uint32_t)(EAX));
  /* 1211819c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211819f push ecx */
  push32((uint32_t)(ECX));
  /* 121181a0 call 0x12117d70 */
  push32(0x121181a5u); f_12117d70();
  /* 121181a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121181a8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121181ab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121181af je 0x121181d9 */
  if (C.zf) goto L_121181d9;
  /* 121181b1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121181b4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121181b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121181ba add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121181bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121181c0:;
  /* 121181c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121181c3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121181c6 jae 0x121181d9 */
  if (!C.cf) goto L_121181d9;
  /* 121181c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121181cb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121181ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121181d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121181d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121181d7 jmp 0x121181c0 */
  goto L_121181c0;
L_121181d9:;
  /* 121181d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121181dc mov esp, ebp */
  ESP = (EBP);
  /* 121181de pop ebp */
  EBP = (pop32());
  /* 121181df ret  */
  ESPCHK(0x12118180u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x121181e0 (27 bytes, 13 insns) */
void f_121181e0(void) {
  FTRACE(0x121181e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121181e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121181e1 mov ebp, esp */
  EBP = (ESP);
  /* 121181e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121181e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121181e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 121181e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121181ec push eax */
  push32((uint32_t)(EAX));
  /* 121181ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121181f0 push ecx */
  push32((uint32_t)(ECX));
  /* 121181f1 call 0x12118200 */
  push32(0x121181f6u); f_12118200();
  /* 121181f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121181f9 pop ebp */
  EBP = (pop32());
  /* 121181fa ret  */
  ESPCHK(0x121181e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008200 @ 0x12118200 (64 bytes, 27 insns) */
void f_12118200(void) {
  FTRACE(0x12118200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118200 push ebp */
  push32((uint32_t)(EBP));
  /* 12118201 mov ebp, esp */
  EBP = (ESP);
  /* 12118203 push ecx */
  push32((uint32_t)(ECX));
  /* 12118204 push 9 */
  push32((uint32_t)(0x9u));
  /* 12118206 call 0x1211b770 */
  push32(0x1211820bu); f_1211b770();
  /* 1211820b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211820e push 1 */
  push32((uint32_t)(0x1u));
  /* 12118210 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12118213 push eax */
  push32((uint32_t)(EAX));
  /* 12118214 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12118217 push ecx */
  push32((uint32_t)(ECX));
  /* 12118218 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211821b push edx */
  push32((uint32_t)(EDX));
  /* 1211821c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211821f push eax */
  push32((uint32_t)(EAX));
  /* 12118220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118223 push ecx */
  push32((uint32_t)(ECX));
  /* 12118224 call 0x12118240 */
  push32(0x12118229u); f_12118240();
  /* 12118229 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211822c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211822f push 9 */
  push32((uint32_t)(0x9u));
  /* 12118231 call 0x1211b810 */
  push32(0x12118236u); f_1211b810();
  /* 12118236 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118239 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211823c mov esp, ebp */
  ESP = (EBP);
  /* 1211823e pop ebp */
  EBP = (pop32());
  /* 1211823f ret  */
  ESPCHK(0x12118200u, _esp0);
  ESP += 4; return;
}

/* FUN_10008240 @ 0x12118240 (1297 bytes, 431 insns) */
void f_12118240(void) {
  FTRACE(0x12118240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118240 push ebp */
  push32((uint32_t)(EBP));
  /* 12118241 mov ebp, esp */
  EBP = (ESP);
  /* 12118243 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118246 push ebx */
  push32((uint32_t)(EBX));
  /* 12118247 push esi */
  push32((uint32_t)(ESI));
  /* 12118248 push edi */
  push32((uint32_t)(EDI));
  /* 12118249 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12118250 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118254 jne 0x12118273 */
  if (!C.zf) goto L_12118273;
  /* 12118256 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12118259 push eax */
  push32((uint32_t)(EAX));
  /* 1211825a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211825d push ecx */
  push32((uint32_t)(ECX));
  /* 1211825e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12118261 push edx */
  push32((uint32_t)(EDX));
  /* 12118262 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12118265 push eax */
  push32((uint32_t)(EAX));
  /* 12118266 call 0x12117d70 */
  push32(0x1211826bu); f_12117d70();
  /* 1211826b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211826e jmp 0x1211874a */
  goto L_1211874a;
L_12118273:;
  /* 12118273 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118277 je 0x12118296 */
  if (C.zf) goto L_12118296;
  /* 12118279 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211827d jne 0x12118296 */
  if (!C.zf) goto L_12118296;
  /* 1211827f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12118282 push ecx */
  push32((uint32_t)(ECX));
  /* 12118283 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118286 push edx */
  push32((uint32_t)(EDX));
  /* 12118287 call 0x12118800 */
  push32(0x1211828cu); f_12118800();
  /* 1211828c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211828f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118291 jmp 0x1211874a */
  goto L_1211874a;
L_12118296:;
  /* 12118296 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 1211829b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1211829e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121182a0 je 0x121182d2 */
  if (C.zf) goto L_121182d2;
L_121182a2:;
  /* 121182a2 call 0x12118f10 */
  push32(0x121182a7u); f_12118f10();
  /* 121182a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121182a9 jne 0x121182cc */
  if (!C.zf) goto L_121182cc;
  /* 121182ab push 0x1213e9e0 */
  push32((uint32_t)(0x1213e9e0u));
  /* 121182b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121182b2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 121182b7 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 121182bc push 2 */
  push32((uint32_t)(0x2u));
  /* 121182be call 0x12116e30 */
  push32(0x121182c3u); f_12116e30();
  /* 121182c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121182c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121182c9 jne 0x121182cc */
  if (!C.zf) goto L_121182cc;
  /* 121182cb int3  */
  x86_unimpl("int3 @ 0x121182cb");
L_121182cc:;
  /* 121182cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121182ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121182d0 jne 0x121182a2 */
  if (!C.zf) goto L_121182a2;
L_121182d2:;
  /* 121182d2 mov edx, dword ptr [0x12141a88] */
  EDX = (r32((uint32_t)(0x12141a88)));
  /* 121182d8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 121182db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121182de cmp eax, dword ptr [0x12141a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12141a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121182e4 jne 0x121182e7 */
  if (!C.zf) goto L_121182e7;
  /* 121182e6 int3  */
  x86_unimpl("int3 @ 0x121182e6");
L_121182e7:;
  /* 121182e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 121182ea push ecx */
  push32((uint32_t)(ECX));
  /* 121182eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121182ee push edx */
  push32((uint32_t)(EDX));
  /* 121182ef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121182f2 push eax */
  push32((uint32_t)(EAX));
  /* 121182f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121182f6 push ecx */
  push32((uint32_t)(ECX));
  /* 121182f7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121182fa push edx */
  push32((uint32_t)(EDX));
  /* 121182fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121182fe push eax */
  push32((uint32_t)(EAX));
  /* 121182ff push 2 */
  push32((uint32_t)(0x2u));
  /* 12118301 call dword ptr [0x12141c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12141c90))), 0x12118307u);
  /* 12118307 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211830a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211830c jne 0x1211836c */
  if (!C.zf) goto L_1211836c;
  /* 1211830e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118312 je 0x1211833f */
  if (C.zf) goto L_1211833f;
L_12118314:;
  /* 12118314 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12118317 push ecx */
  push32((uint32_t)(ECX));
  /* 12118318 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211831b push edx */
  push32((uint32_t)(EDX));
  /* 1211831c push 0x1213eb5c */
  push32((uint32_t)(0x1213eb5cu));
  /* 12118321 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118323 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118325 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118327 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118329 call 0x12116e30 */
  push32(0x1211832eu); f_12116e30();
  /* 1211832e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118331 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118334 jne 0x12118337 */
  if (!C.zf) goto L_12118337;
  /* 12118336 int3  */
  x86_unimpl("int3 @ 0x12118336");
L_12118337:;
  /* 12118337 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211833b jne 0x12118314 */
  if (!C.zf) goto L_12118314;
  /* 1211833d jmp 0x12118365 */
  goto L_12118365;
L_1211833f:;
  /* 1211833f push 0x1213eb38 */
  push32((uint32_t)(0x1213eb38u));
  /* 12118344 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12118349 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211834b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211834d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211834f push 0 */
  push32((uint32_t)(0x0u));
  /* 12118351 call 0x12116e30 */
  push32(0x12118356u); f_12116e30();
  /* 12118356 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118359 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211835c jne 0x1211835f */
  if (!C.zf) goto L_1211835f;
  /* 1211835e int3  */
  x86_unimpl("int3 @ 0x1211835e");
L_1211835f:;
  /* 1211835f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118361 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118363 jne 0x1211833f */
  if (!C.zf) goto L_1211833f;
L_12118365:;
  /* 12118365 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118367 jmp 0x1211874a */
  goto L_1211874a;
L_1211836c:;
  /* 1211836c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118370 jbe 0x1211839e */
  if ((C.cf||C.zf)) goto L_1211839e;
L_12118372:;
  /* 12118372 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12118375 push edx */
  push32((uint32_t)(EDX));
  /* 12118376 push 0x1213eb08 */
  push32((uint32_t)(0x1213eb08u));
  /* 1211837b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211837d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211837f push 0 */
  push32((uint32_t)(0x0u));
  /* 12118381 push 1 */
  push32((uint32_t)(0x1u));
  /* 12118383 call 0x12116e30 */
  push32(0x12118388u); f_12116e30();
  /* 12118388 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211838b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211838e jne 0x12118391 */
  if (!C.zf) goto L_12118391;
  /* 12118390 int3  */
  x86_unimpl("int3 @ 0x12118390");
L_12118391:;
  /* 12118391 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118393 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118395 jne 0x12118372 */
  if (!C.zf) goto L_12118372;
  /* 12118397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118399 jmp 0x1211874a */
  goto L_1211874a;
L_1211839e:;
  /* 1211839e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121183a2 je 0x121183e6 */
  if (C.zf) goto L_121183e6;
  /* 121183a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121183a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121183ad cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121183b0 je 0x121183e6 */
  if (C.zf) goto L_121183e6;
  /* 121183b2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121183b5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121183bb cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121183be je 0x121183e6 */
  if (C.zf) goto L_121183e6;
L_121183c0:;
  /* 121183c0 push 0x1213e91c */
  push32((uint32_t)(0x1213e91cu));
  /* 121183c5 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 121183ca push 0 */
  push32((uint32_t)(0x0u));
  /* 121183cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121183ce push 0 */
  push32((uint32_t)(0x0u));
  /* 121183d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121183d2 call 0x12116e30 */
  push32(0x121183d7u); f_12116e30();
  /* 121183d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121183da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121183dd jne 0x121183e0 */
  if (!C.zf) goto L_121183e0;
  /* 121183df int3  */
  x86_unimpl("int3 @ 0x121183df");
L_121183e0:;
  /* 121183e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121183e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121183e4 jne 0x121183c0 */
  if (!C.zf) goto L_121183c0;
L_121183e6:;
  /* 121183e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121183e9 push ecx */
  push32((uint32_t)(ECX));
  /* 121183ea call 0x12119370 */
  push32(0x121183efu); f_12119370();
  /* 121183ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121183f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121183f4 jne 0x12118417 */
  if (!C.zf) goto L_12118417;
  /* 121183f6 push 0x1213eae4 */
  push32((uint32_t)(0x1213eae4u));
  /* 121183fb push 0 */
  push32((uint32_t)(0x0u));
  /* 121183fd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12118402 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118407 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118409 call 0x12116e30 */
  push32(0x1211840eu); f_12116e30();
  /* 1211840e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118411 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118414 jne 0x12118417 */
  if (!C.zf) goto L_12118417;
  /* 12118416 int3  */
  x86_unimpl("int3 @ 0x12118416");
L_12118417:;
  /* 12118417 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12118419 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211841b jne 0x121183e6 */
  if (!C.zf) goto L_121183e6;
  /* 1211841d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118420 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118423 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12118426 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118429 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211842d jne 0x12118436 */
  if (!C.zf) goto L_12118436;
  /* 1211842f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12118436:;
  /* 12118436 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211843a je 0x1211847a */
  if (C.zf) goto L_1211847a;
L_1211843c:;
  /* 1211843c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211843f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118446 jne 0x12118451 */
  if (!C.zf) goto L_12118451;
  /* 12118448 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211844b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211844f je 0x12118472 */
  if (C.zf) goto L_12118472;
L_12118451:;
  /* 12118451 push 0x1213ea9c */
  push32((uint32_t)(0x1213ea9cu));
  /* 12118456 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118458 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1211845d push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118462 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118464 call 0x12116e30 */
  push32(0x12118469u); f_12116e30();
  /* 12118469 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211846c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211846f jne 0x12118472 */
  if (!C.zf) goto L_12118472;
  /* 12118471 int3  */
  x86_unimpl("int3 @ 0x12118471");
L_12118472:;
  /* 12118472 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118474 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118476 jne 0x1211843c */
  if (!C.zf) goto L_1211843c;
  /* 12118478 jmp 0x121184de */
  goto L_121184de;
L_1211847a:;
  /* 1211847a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211847d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12118480 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12118485 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118488 jne 0x1211849f */
  if (!C.zf) goto L_1211849f;
  /* 1211848a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211848d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12118493 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118496 jne 0x1211849f */
  if (!C.zf) goto L_1211849f;
  /* 12118498 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1211849f:;
  /* 1211849f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121184a2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121184a5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121184aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121184ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121184b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121184b5 je 0x121184d8 */
  if (C.zf) goto L_121184d8;
  /* 121184b7 push 0x1213ea60 */
  push32((uint32_t)(0x1213ea60u));
  /* 121184bc push 0 */
  push32((uint32_t)(0x0u));
  /* 121184be push 0x272 */
  push32((uint32_t)(0x272u));
  /* 121184c3 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 121184c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121184ca call 0x12116e30 */
  push32(0x121184cfu); f_12116e30();
  /* 121184cf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121184d2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121184d5 jne 0x121184d8 */
  if (!C.zf) goto L_121184d8;
  /* 121184d7 int3  */
  x86_unimpl("int3 @ 0x121184d7");
L_121184d8:;
  /* 121184d8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121184da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121184dc jne 0x1211849f */
  if (!C.zf) goto L_1211849f;
L_121184de:;
  /* 121184de cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121184e2 je 0x12118509 */
  if (C.zf) goto L_12118509;
  /* 121184e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121184e7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121184ea push eax */
  push32((uint32_t)(EAX));
  /* 121184eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121184ee push ecx */
  push32((uint32_t)(ECX));
  /* 121184ef call 0x1211bcf0 */
  push32(0x121184f4u); f_1211bcf0();
  /* 121184f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121184f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121184fa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121184fe jne 0x12118507 */
  if (!C.zf) goto L_12118507;
  /* 12118500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118502 jmp 0x1211874a */
  goto L_1211874a;
L_12118507:;
  /* 12118507 jmp 0x1211852c */
  goto L_1211852c;
L_12118509:;
  /* 12118509 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211850c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211850f push edx */
  push32((uint32_t)(EDX));
  /* 12118510 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118513 push eax */
  push32((uint32_t)(EAX));
  /* 12118514 call 0x1211bc40 */
  push32(0x12118519u); f_1211bc40();
  /* 12118519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211851c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211851f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118523 jne 0x1211852c */
  if (!C.zf) goto L_1211852c;
  /* 12118525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118527 jmp 0x1211874a */
  goto L_1211874a;
L_1211852c:;
  /* 1211852c mov ecx, dword ptr [0x12141a88] */
  ECX = (r32((uint32_t)(0x12141a88)));
  /* 12118532 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118535 mov dword ptr [0x12141a88], ecx */
  w32((uint32_t)(0x12141a88), (ECX));
  /* 1211853b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211853f jne 0x12118597 */
  if (!C.zf) goto L_12118597;
  /* 12118541 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118544 mov eax, dword ptr [0x12143830] */
  EAX = (r32((uint32_t)(0x12143830)));
  /* 12118549 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211854c mov dword ptr [0x12143830], eax */
  w32((uint32_t)(0x12143830), (EAX));
  /* 12118551 mov ecx, dword ptr [0x12143830] */
  ECX = (r32((uint32_t)(0x12143830)));
  /* 12118557 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211855a mov dword ptr [0x12143830], ecx */
  w32((uint32_t)(0x12143830), (ECX));
  /* 12118560 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118563 mov eax, dword ptr [0x12143838] */
  EAX = (r32((uint32_t)(0x12143838)));
  /* 12118568 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211856b mov dword ptr [0x12143838], eax */
  w32((uint32_t)(0x12143838), (EAX));
  /* 12118570 mov ecx, dword ptr [0x12143838] */
  ECX = (r32((uint32_t)(0x12143838)));
  /* 12118576 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118579 mov dword ptr [0x12143838], ecx */
  w32((uint32_t)(0x12143838), (ECX));
  /* 1211857f mov edx, dword ptr [0x12143838] */
  EDX = (r32((uint32_t)(0x12143838)));
  /* 12118585 cmp edx, dword ptr [0x1214383c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1214383c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211858b jbe 0x12118597 */
  if ((C.cf||C.zf)) goto L_12118597;
  /* 1211858d mov eax, dword ptr [0x12143838] */
  EAX = (r32((uint32_t)(0x12143838)));
  /* 12118592 mov dword ptr [0x1214383c], eax */
  w32((uint32_t)(0x1214383c), (EAX));
L_12118597:;
  /* 12118597 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211859a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211859d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121185a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121185a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121185a6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121185a9 jbe 0x121185cf */
  if ((C.cf||C.zf)) goto L_121185cf;
  /* 121185ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121185ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121185b1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121185b4 push edx */
  push32((uint32_t)(EDX));
  /* 121185b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121185b7 mov al, byte ptr [0x12141a92] */
  AL = (r8((uint32_t)(0x12141a92)));
  /* 121185bc push eax */
  push32((uint32_t)(EAX));
  /* 121185bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121185c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121185c3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121185c6 push edx */
  push32((uint32_t)(EDX));
  /* 121185c7 call 0x1211bae0 */
  push32(0x121185ccu); f_1211bae0();
  /* 121185cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121185cf:;
  /* 121185cf push 4 */
  push32((uint32_t)(0x4u));
  /* 121185d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121185d3 mov al, byte ptr [0x12141a90] */
  AL = (r8((uint32_t)(0x12141a90)));
  /* 121185d8 push eax */
  push32((uint32_t)(EAX));
  /* 121185d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121185dc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121185df push ecx */
  push32((uint32_t)(ECX));
  /* 121185e0 call 0x1211bae0 */
  push32(0x121185e5u); f_1211bae0();
  /* 121185e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121185e8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121185ec jne 0x12118609 */
  if (!C.zf) goto L_12118609;
  /* 121185ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121185f1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121185f4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121185f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121185fa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121185fd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12118600 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118603 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12118606 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12118609:;
  /* 12118609 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211860c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211860f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12118612:;
  /* 12118612 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118616 jne 0x12118647 */
  if (!C.zf) goto L_12118647;
  /* 12118618 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211861c jne 0x12118626 */
  if (!C.zf) goto L_12118626;
  /* 1211861e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118621 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118624 je 0x12118647 */
  if (C.zf) goto L_12118647;
L_12118626:;
  /* 12118626 push 0x1213ea2c */
  push32((uint32_t)(0x1213ea2cu));
  /* 1211862b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211862d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12118632 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118637 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118639 call 0x12116e30 */
  push32(0x1211863eu); f_12116e30();
  /* 1211863e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118641 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118644 jne 0x12118647 */
  if (!C.zf) goto L_12118647;
  /* 12118646 int3  */
  x86_unimpl("int3 @ 0x12118646");
L_12118647:;
  /* 12118647 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12118649 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211864b jne 0x12118612 */
  if (!C.zf) goto L_12118612;
  /* 1211864d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118650 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118653 je 0x1211865b */
  if (C.zf) goto L_1211865b;
  /* 12118655 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118659 je 0x12118663 */
  if (C.zf) goto L_12118663;
L_1211865b:;
  /* 1211865b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211865e jmp 0x1211874a */
  goto L_1211874a;
L_12118663:;
  /* 12118663 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118666 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118669 je 0x1211867b */
  if (C.zf) goto L_1211867b;
  /* 1211866b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211866e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12118670 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118673 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12118676 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12118679 jmp 0x121186b7 */
  goto L_121186b7;
L_1211867b:;
  /* 1211867b mov eax, dword ptr [0x1214382c] */
  EAX = (r32((uint32_t)(0x1214382c)));
  /* 12118680 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118683 je 0x121186a6 */
  if (C.zf) goto L_121186a6;
  /* 12118685 push 0x1213ea10 */
  push32((uint32_t)(0x1213ea10u));
  /* 1211868a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211868c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12118691 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118696 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118698 call 0x12116e30 */
  push32(0x1211869du); f_12116e30();
  /* 1211869d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121186a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121186a3 jne 0x121186a6 */
  if (!C.zf) goto L_121186a6;
  /* 121186a5 int3  */
  x86_unimpl("int3 @ 0x121186a5");
L_121186a6:;
  /* 121186a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121186a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121186aa jne 0x1211867b */
  if (!C.zf) goto L_1211867b;
  /* 121186ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121186af mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121186b2 mov dword ptr [0x1214382c], eax */
  w32((uint32_t)(0x1214382c), (EAX));
L_121186b7:;
  /* 121186b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121186ba cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121186be je 0x121186cf */
  if (C.zf) goto L_121186cf;
  /* 121186c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121186c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121186c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121186c9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121186cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121186cd jmp 0x1211870a */
  goto L_1211870a;
L_121186cf:;
  /* 121186cf mov eax, dword ptr [0x12143834] */
  EAX = (r32((uint32_t)(0x12143834)));
  /* 121186d4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121186d7 je 0x121186fa */
  if (C.zf) goto L_121186fa;
  /* 121186d9 push 0x1213e9f4 */
  push32((uint32_t)(0x1213e9f4u));
  /* 121186de push 0 */
  push32((uint32_t)(0x0u));
  /* 121186e0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 121186e5 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 121186ea push 2 */
  push32((uint32_t)(0x2u));
  /* 121186ec call 0x12116e30 */
  push32(0x121186f1u); f_12116e30();
  /* 121186f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121186f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121186f7 jne 0x121186fa */
  if (!C.zf) goto L_121186fa;
  /* 121186f9 int3  */
  x86_unimpl("int3 @ 0x121186f9");
L_121186fa:;
  /* 121186fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121186fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121186fe jne 0x121186cf */
  if (!C.zf) goto L_121186cf;
  /* 12118700 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118703 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12118705 mov dword ptr [0x12143834], eax */
  w32((uint32_t)(0x12143834), (EAX));
L_1211870a:;
  /* 1211870a cmp dword ptr [0x12143834], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143834))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118711 je 0x12118721 */
  if (C.zf) goto L_12118721;
  /* 12118713 mov ecx, dword ptr [0x12143834] */
  ECX = (r32((uint32_t)(0x12143834)));
  /* 12118719 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211871c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1211871f jmp 0x12118729 */
  goto L_12118729;
L_12118721:;
  /* 12118721 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118724 mov dword ptr [0x1214382c], eax */
  w32((uint32_t)(0x1214382c), (EAX));
L_12118729:;
  /* 12118729 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211872c mov edx, dword ptr [0x12143834] */
  EDX = (r32((uint32_t)(0x12143834)));
  /* 12118732 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12118734 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118737 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1211873e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118741 mov dword ptr [0x12143834], ecx */
  w32((uint32_t)(0x12143834), (ECX));
  /* 12118747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1211874a:;
  /* 1211874a pop edi */
  EDI = (pop32());
  /* 1211874b pop esi */
  ESI = (pop32());
  /* 1211874c pop ebx */
  EBX = (pop32());
  /* 1211874d mov esp, ebp */
  ESP = (EBP);
  /* 1211874f pop ebp */
  EBP = (pop32());
  /* 12118750 ret  */
  ESPCHK(0x12118240u, _esp0);
  ESP += 4; return;
}

/* FUN_10008760 @ 0x12118760 (27 bytes, 13 insns) */
void f_12118760(void) {
  FTRACE(0x12118760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118760 push ebp */
  push32((uint32_t)(EBP));
  /* 12118761 mov ebp, esp */
  EBP = (ESP);
  /* 12118763 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118765 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118767 push 1 */
  push32((uint32_t)(0x1u));
  /* 12118769 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211876c push eax */
  push32((uint32_t)(EAX));
  /* 1211876d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118770 push ecx */
  push32((uint32_t)(ECX));
  /* 12118771 call 0x12118780 */
  push32(0x12118776u); f_12118780();
  /* 12118776 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118779 pop ebp */
  EBP = (pop32());
  /* 1211877a ret  */
  ESPCHK(0x12118760u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x12118780 (64 bytes, 27 insns) */
void f_12118780(void) {
  FTRACE(0x12118780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118780 push ebp */
  push32((uint32_t)(EBP));
  /* 12118781 mov ebp, esp */
  EBP = (ESP);
  /* 12118783 push ecx */
  push32((uint32_t)(ECX));
  /* 12118784 push 9 */
  push32((uint32_t)(0x9u));
  /* 12118786 call 0x1211b770 */
  push32(0x1211878bu); f_1211b770();
  /* 1211878b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211878e push 0 */
  push32((uint32_t)(0x0u));
  /* 12118790 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12118793 push eax */
  push32((uint32_t)(EAX));
  /* 12118794 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12118797 push ecx */
  push32((uint32_t)(ECX));
  /* 12118798 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211879b push edx */
  push32((uint32_t)(EDX));
  /* 1211879c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211879f push eax */
  push32((uint32_t)(EAX));
  /* 121187a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121187a3 push ecx */
  push32((uint32_t)(ECX));
  /* 121187a4 call 0x12118240 */
  push32(0x121187a9u); f_12118240();
  /* 121187a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121187ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121187af push 9 */
  push32((uint32_t)(0x9u));
  /* 121187b1 call 0x1211b810 */
  push32(0x121187b6u); f_1211b810();
  /* 121187b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121187b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121187bc mov esp, ebp */
  ESP = (EBP);
  /* 121187be pop ebp */
  EBP = (pop32());
  /* 121187bf ret  */
  ESPCHK(0x12118780u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x121187c0 (19 bytes, 9 insns) */
void f_121187c0(void) {
  FTRACE(0x121187c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121187c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121187c1 mov ebp, esp */
  EBP = (ESP);
  /* 121187c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121187c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121187c8 push eax */
  push32((uint32_t)(EAX));
  /* 121187c9 call 0x12118800 */
  push32(0x121187ceu); f_12118800();
  /* 121187ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121187d1 pop ebp */
  EBP = (pop32());
  /* 121187d2 ret  */
  ESPCHK(0x121187c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087e0 @ 0x121187e0 (19 bytes, 9 insns) */
void f_121187e0(void) {
  FTRACE(0x121187e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121187e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121187e1 mov ebp, esp */
  EBP = (ESP);
  /* 121187e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121187e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121187e8 push eax */
  push32((uint32_t)(EAX));
  /* 121187e9 call 0x12118830 */
  push32(0x121187eeu); f_12118830();
  /* 121187ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121187f1 pop ebp */
  EBP = (pop32());
  /* 121187f2 ret  */
  ESPCHK(0x121187e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008800 @ 0x12118800 (41 bytes, 16 insns) */
void f_12118800(void) {
  FTRACE(0x12118800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118800 push ebp */
  push32((uint32_t)(EBP));
  /* 12118801 mov ebp, esp */
  EBP = (ESP);
  /* 12118803 push 9 */
  push32((uint32_t)(0x9u));
  /* 12118805 call 0x1211b770 */
  push32(0x1211880au); f_1211b770();
  /* 1211880a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211880d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12118810 push eax */
  push32((uint32_t)(EAX));
  /* 12118811 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118814 push ecx */
  push32((uint32_t)(ECX));
  /* 12118815 call 0x12118830 */
  push32(0x1211881au); f_12118830();
  /* 1211881a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211881d push 9 */
  push32((uint32_t)(0x9u));
  /* 1211881f call 0x1211b810 */
  push32(0x12118824u); f_1211b810();
  /* 12118824 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118827 pop ebp */
  EBP = (pop32());
  /* 12118828 ret  */
  ESPCHK(0x12118800u, _esp0);
  ESP += 4; return;
}

/* FUN_10008830 @ 0x12118830 (1004 bytes, 342 insns) */
void f_12118830(void) {
  FTRACE(0x12118830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118830 push ebp */
  push32((uint32_t)(EBP));
  /* 12118831 mov ebp, esp */
  EBP = (ESP);
  /* 12118833 push ecx */
  push32((uint32_t)(ECX));
  /* 12118834 push ebx */
  push32((uint32_t)(EBX));
  /* 12118835 push esi */
  push32((uint32_t)(ESI));
  /* 12118836 push edi */
  push32((uint32_t)(EDI));
  /* 12118837 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 1211883c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1211883f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118841 je 0x12118873 */
  if (C.zf) goto L_12118873;
L_12118843:;
  /* 12118843 call 0x12118f10 */
  push32(0x12118848u); f_12118f10();
  /* 12118848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211884a jne 0x1211886d */
  if (!C.zf) goto L_1211886d;
  /* 1211884c push 0x1213e9e0 */
  push32((uint32_t)(0x1213e9e0u));
  /* 12118851 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118853 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12118858 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 1211885d push 2 */
  push32((uint32_t)(0x2u));
  /* 1211885f call 0x12116e30 */
  push32(0x12118864u); f_12116e30();
  /* 12118864 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118867 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211886a jne 0x1211886d */
  if (!C.zf) goto L_1211886d;
  /* 1211886c int3  */
  x86_unimpl("int3 @ 0x1211886c");
L_1211886d:;
  /* 1211886d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211886f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118871 jne 0x12118843 */
  if (!C.zf) goto L_12118843;
L_12118873:;
  /* 12118873 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118877 jne 0x1211887e */
  if (!C.zf) goto L_1211887e;
  /* 12118879 jmp 0x12118c15 */
  goto L_12118c15;
L_1211887e:;
  /* 1211887e push 0 */
  push32((uint32_t)(0x0u));
  /* 12118880 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118882 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118884 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12118887 push edx */
  push32((uint32_t)(EDX));
  /* 12118888 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211888a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211888d push eax */
  push32((uint32_t)(EAX));
  /* 1211888e push 3 */
  push32((uint32_t)(0x3u));
  /* 12118890 call dword ptr [0x12141c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x12141c90))), 0x12118896u);
  /* 12118896 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211889b jne 0x121188c8 */
  if (!C.zf) goto L_121188c8;
L_1211889d:;
  /* 1211889d push 0x1213eca4 */
  push32((uint32_t)(0x1213eca4u));
  /* 121188a2 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 121188a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121188a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121188ab push 0 */
  push32((uint32_t)(0x0u));
  /* 121188ad push 0 */
  push32((uint32_t)(0x0u));
  /* 121188af call 0x12116e30 */
  push32(0x121188b4u); f_12116e30();
  /* 121188b4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121188b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121188ba jne 0x121188bd */
  if (!C.zf) goto L_121188bd;
  /* 121188bc int3  */
  x86_unimpl("int3 @ 0x121188bc");
L_121188bd:;
  /* 121188bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121188bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121188c1 jne 0x1211889d */
  if (!C.zf) goto L_1211889d;
  /* 121188c3 jmp 0x12118c15 */
  goto L_12118c15;
L_121188c8:;
  /* 121188c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121188cb push edx */
  push32((uint32_t)(EDX));
  /* 121188cc call 0x12119370 */
  push32(0x121188d1u); f_12119370();
  /* 121188d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121188d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121188d6 jne 0x121188f9 */
  if (!C.zf) goto L_121188f9;
  /* 121188d8 push 0x1213eae4 */
  push32((uint32_t)(0x1213eae4u));
  /* 121188dd push 0 */
  push32((uint32_t)(0x0u));
  /* 121188df push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 121188e4 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 121188e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 121188eb call 0x12116e30 */
  push32(0x121188f0u); f_12116e30();
  /* 121188f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121188f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121188f6 jne 0x121188f9 */
  if (!C.zf) goto L_121188f9;
  /* 121188f8 int3  */
  x86_unimpl("int3 @ 0x121188f8");
L_121188f9:;
  /* 121188f9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121188fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121188fd jne 0x121188c8 */
  if (!C.zf) goto L_121188c8;
  /* 121188ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118902 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118905 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12118908:;
  /* 12118908 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211890b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1211890e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12118913 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118916 je 0x1211895b */
  if (C.zf) goto L_1211895b;
  /* 12118918 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211891b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211891f je 0x1211895b */
  if (C.zf) goto L_1211895b;
  /* 12118921 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118924 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12118927 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211892c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211892f je 0x1211895b */
  if (C.zf) goto L_1211895b;
  /* 12118931 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118934 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118938 je 0x1211895b */
  if (C.zf) goto L_1211895b;
  /* 1211893a push 0x1213ec7c */
  push32((uint32_t)(0x1213ec7cu));
  /* 1211893f push 0 */
  push32((uint32_t)(0x0u));
  /* 12118941 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12118946 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 1211894b push 2 */
  push32((uint32_t)(0x2u));
  /* 1211894d call 0x12116e30 */
  push32(0x12118952u); f_12116e30();
  /* 12118952 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118955 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118958 jne 0x1211895b */
  if (!C.zf) goto L_1211895b;
  /* 1211895a int3  */
  x86_unimpl("int3 @ 0x1211895a");
L_1211895b:;
  /* 1211895b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211895d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211895f jne 0x12118908 */
  if (!C.zf) goto L_12118908;
  /* 12118961 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 12118966 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12118969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211896b jne 0x12118a36 */
  if (!C.zf) goto L_12118a36;
  /* 12118971 push 4 */
  push32((uint32_t)(0x4u));
  /* 12118973 mov cl, byte ptr [0x12141a90] */
  CL = (r8((uint32_t)(0x12141a90)));
  /* 12118979 push ecx */
  push32((uint32_t)(ECX));
  /* 1211897a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211897d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118980 push edx */
  push32((uint32_t)(EDX));
  /* 12118981 call 0x12118e80 */
  push32(0x12118986u); f_12118e80();
  /* 12118986 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211898b jne 0x121189d0 */
  if (!C.zf) goto L_121189d0;
L_1211898d:;
  /* 1211898d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118990 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118993 push eax */
  push32((uint32_t)(EAX));
  /* 12118994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118997 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1211899a push edx */
  push32((uint32_t)(EDX));
  /* 1211899b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211899e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121189a1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121189a7 mov edx, dword ptr [ecx*4 + 0x12141a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141a94)));
  /* 121189ae push edx */
  push32((uint32_t)(EDX));
  /* 121189af push 0x1213ec50 */
  push32((uint32_t)(0x1213ec50u));
  /* 121189b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121189b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121189b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121189ba push 1 */
  push32((uint32_t)(0x1u));
  /* 121189bc call 0x12116e30 */
  push32(0x121189c1u); f_12116e30();
  /* 121189c1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121189c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121189c7 jne 0x121189ca */
  if (!C.zf) goto L_121189ca;
  /* 121189c9 int3  */
  x86_unimpl("int3 @ 0x121189c9");
L_121189ca:;
  /* 121189ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121189cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121189ce jne 0x1211898d */
  if (!C.zf) goto L_1211898d;
L_121189d0:;
  /* 121189d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 121189d2 mov cl, byte ptr [0x12141a90] */
  CL = (r8((uint32_t)(0x12141a90)));
  /* 121189d8 push ecx */
  push32((uint32_t)(ECX));
  /* 121189d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121189dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121189df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121189e2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 121189e6 push edx */
  push32((uint32_t)(EDX));
  /* 121189e7 call 0x12118e80 */
  push32(0x121189ecu); f_12118e80();
  /* 121189ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121189ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121189f1 jne 0x12118a36 */
  if (!C.zf) goto L_12118a36;
L_121189f3:;
  /* 121189f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121189f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121189f9 push eax */
  push32((uint32_t)(EAX));
  /* 121189fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121189fd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12118a00 push edx */
  push32((uint32_t)(EDX));
  /* 12118a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118a04 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12118a07 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12118a0d mov edx, dword ptr [ecx*4 + 0x12141a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141a94)));
  /* 12118a14 push edx */
  push32((uint32_t)(EDX));
  /* 12118a15 push 0x1213ec24 */
  push32((uint32_t)(0x1213ec24u));
  /* 12118a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12118a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12118a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12118a20 push 1 */
  push32((uint32_t)(0x1u));
  /* 12118a22 call 0x12116e30 */
  push32(0x12118a27u); f_12116e30();
  /* 12118a27 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118a2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118a2d jne 0x12118a30 */
  if (!C.zf) goto L_12118a30;
  /* 12118a2f int3  */
  x86_unimpl("int3 @ 0x12118a2f");
L_12118a30:;
  /* 12118a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118a34 jne 0x121189f3 */
  if (!C.zf) goto L_121189f3;
L_12118a36:;
  /* 12118a36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118a39 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118a3d jne 0x12118aab */
  if (!C.zf) goto L_12118aab;
L_12118a3f:;
  /* 12118a3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118a42 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118a49 jne 0x12118a54 */
  if (!C.zf) goto L_12118a54;
  /* 12118a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118a4e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118a52 je 0x12118a75 */
  if (C.zf) goto L_12118a75;
L_12118a54:;
  /* 12118a54 push 0x1213ebe4 */
  push32((uint32_t)(0x1213ebe4u));
  /* 12118a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118a5b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12118a60 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118a65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118a67 call 0x12116e30 */
  push32(0x12118a6cu); f_12116e30();
  /* 12118a6c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118a6f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118a72 jne 0x12118a75 */
  if (!C.zf) goto L_12118a75;
  /* 12118a74 int3  */
  x86_unimpl("int3 @ 0x12118a74");
L_12118a75:;
  /* 12118a75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118a77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118a79 jne 0x12118a3f */
  if (!C.zf) goto L_12118a3f;
  /* 12118a7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118a7e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12118a81 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118a84 push eax */
  push32((uint32_t)(EAX));
  /* 12118a85 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118a87 mov cl, byte ptr [0x12141a91] */
  CL = (r8((uint32_t)(0x12141a91)));
  /* 12118a8d push ecx */
  push32((uint32_t)(ECX));
  /* 12118a8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118a91 push edx */
  push32((uint32_t)(EDX));
  /* 12118a92 call 0x1211bae0 */
  push32(0x12118a97u); f_1211bae0();
  /* 12118a97 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118a9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118a9d push eax */
  push32((uint32_t)(EAX));
  /* 12118a9e call 0x1211bee0 */
  push32(0x12118aa3u); f_1211bee0();
  /* 12118aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118aa6 jmp 0x12118c15 */
  goto L_12118c15;
L_12118aab:;
  /* 12118aab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118aae cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118ab2 jne 0x12118ac1 */
  if (!C.zf) goto L_12118ac1;
  /* 12118ab4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118ab8 jne 0x12118ac1 */
  if (!C.zf) goto L_12118ac1;
  /* 12118aba mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12118ac1:;
  /* 12118ac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118ac4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12118ac7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118aca je 0x12118aed */
  if (C.zf) goto L_12118aed;
  /* 12118acc push 0x1213ebc4 */
  push32((uint32_t)(0x1213ebc4u));
  /* 12118ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118ad3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12118ad8 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118add push 2 */
  push32((uint32_t)(0x2u));
  /* 12118adf call 0x12116e30 */
  push32(0x12118ae4u); f_12116e30();
  /* 12118ae4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118ae7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118aea jne 0x12118aed */
  if (!C.zf) goto L_12118aed;
  /* 12118aec int3  */
  x86_unimpl("int3 @ 0x12118aec");
L_12118aed:;
  /* 12118aed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118aef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118af1 jne 0x12118ac1 */
  if (!C.zf) goto L_12118ac1;
  /* 12118af3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118af6 mov eax, dword ptr [0x12143838] */
  EAX = (r32((uint32_t)(0x12143838)));
  /* 12118afb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118afe mov dword ptr [0x12143838], eax */
  w32((uint32_t)(0x12143838), (EAX));
  /* 12118b03 mov ecx, dword ptr [0x12141a84] */
  ECX = (r32((uint32_t)(0x12141a84)));
  /* 12118b09 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12118b0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118b0e jne 0x12118bec */
  if (!C.zf) goto L_12118bec;
  /* 12118b14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118b17 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118b1a je 0x12118b2c */
  if (C.zf) goto L_12118b2c;
  /* 12118b1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118b1f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12118b21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118b24 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12118b27 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12118b2a jmp 0x12118b6a */
  goto L_12118b6a;
L_12118b2c:;
  /* 12118b2c mov ecx, dword ptr [0x1214382c] */
  ECX = (r32((uint32_t)(0x1214382c)));
  /* 12118b32 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118b35 je 0x12118b58 */
  if (C.zf) goto L_12118b58;
  /* 12118b37 push 0x1213ebac */
  push32((uint32_t)(0x1213ebacu));
  /* 12118b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12118b3e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12118b43 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118b48 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118b4a call 0x12116e30 */
  push32(0x12118b4fu); f_12116e30();
  /* 12118b4f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118b52 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118b55 jne 0x12118b58 */
  if (!C.zf) goto L_12118b58;
  /* 12118b57 int3  */
  x86_unimpl("int3 @ 0x12118b57");
L_12118b58:;
  /* 12118b58 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12118b5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12118b5c jne 0x12118b2c */
  if (!C.zf) goto L_12118b2c;
  /* 12118b5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118b61 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12118b64 mov dword ptr [0x1214382c], ecx */
  w32((uint32_t)(0x1214382c), (ECX));
L_12118b6a:;
  /* 12118b6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118b6d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118b71 je 0x12118b82 */
  if (C.zf) goto L_12118b82;
  /* 12118b73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118b76 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12118b79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118b7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12118b7e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12118b80 jmp 0x12118bbf */
  goto L_12118bbf;
L_12118b82:;
  /* 12118b82 mov ecx, dword ptr [0x12143834] */
  ECX = (r32((uint32_t)(0x12143834)));
  /* 12118b88 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118b8b je 0x12118bae */
  if (C.zf) goto L_12118bae;
  /* 12118b8d push 0x1213eb94 */
  push32((uint32_t)(0x1213eb94u));
  /* 12118b92 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118b94 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12118b99 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118b9e push 2 */
  push32((uint32_t)(0x2u));
  /* 12118ba0 call 0x12116e30 */
  push32(0x12118ba5u); f_12116e30();
  /* 12118ba5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118ba8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118bab jne 0x12118bae */
  if (!C.zf) goto L_12118bae;
  /* 12118bad int3  */
  x86_unimpl("int3 @ 0x12118bad");
L_12118bae:;
  /* 12118bae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12118bb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12118bb2 jne 0x12118b82 */
  if (!C.zf) goto L_12118b82;
  /* 12118bb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118bb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12118bb9 mov dword ptr [0x12143834], ecx */
  w32((uint32_t)(0x12143834), (ECX));
L_12118bbf:;
  /* 12118bbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118bc2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12118bc5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118bc8 push eax */
  push32((uint32_t)(EAX));
  /* 12118bc9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118bcb mov cl, byte ptr [0x12141a91] */
  CL = (r8((uint32_t)(0x12141a91)));
  /* 12118bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12118bd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118bd5 push edx */
  push32((uint32_t)(EDX));
  /* 12118bd6 call 0x1211bae0 */
  push32(0x12118bdbu); f_1211bae0();
  /* 12118bdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118bde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118be1 push eax */
  push32((uint32_t)(EAX));
  /* 12118be2 call 0x1211bee0 */
  push32(0x12118be7u); f_1211bee0();
  /* 12118be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118bea jmp 0x12118c15 */
  goto L_12118c15;
L_12118bec:;
  /* 12118bec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118bef mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12118bf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118bf9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12118bfc push eax */
  push32((uint32_t)(EAX));
  /* 12118bfd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118bff mov cl, byte ptr [0x12141a91] */
  CL = (r8((uint32_t)(0x12141a91)));
  /* 12118c05 push ecx */
  push32((uint32_t)(ECX));
  /* 12118c06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118c09 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118c0c push edx */
  push32((uint32_t)(EDX));
  /* 12118c0d call 0x1211bae0 */
  push32(0x12118c12u); f_1211bae0();
  /* 12118c12 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12118c15:;
  /* 12118c15 pop edi */
  EDI = (pop32());
  /* 12118c16 pop esi */
  ESI = (pop32());
  /* 12118c17 pop ebx */
  EBX = (pop32());
  /* 12118c18 mov esp, ebp */
  ESP = (EBP);
  /* 12118c1a pop ebp */
  EBP = (pop32());
  /* 12118c1b ret  */
  ESPCHK(0x12118830u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x12118c20 (19 bytes, 9 insns) */
void f_12118c20(void) {
  FTRACE(0x12118c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12118c21 mov ebp, esp */
  EBP = (ESP);
  /* 12118c23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12118c25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118c28 push eax */
  push32((uint32_t)(EAX));
  /* 12118c29 call 0x12118c40 */
  push32(0x12118c2eu); f_12118c40();
  /* 12118c2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118c31 pop ebp */
  EBP = (pop32());
  /* 12118c32 ret  */
  ESPCHK(0x12118c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c40 @ 0x12118c40 (342 bytes, 119 insns) */
void f_12118c40(void) {
  FTRACE(0x12118c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12118c41 mov ebp, esp */
  EBP = (ESP);
  /* 12118c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118c46 push ebx */
  push32((uint32_t)(EBX));
  /* 12118c47 push esi */
  push32((uint32_t)(ESI));
  /* 12118c48 push edi */
  push32((uint32_t)(EDI));
  /* 12118c49 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 12118c4e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12118c51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118c53 je 0x12118c85 */
  if (C.zf) goto L_12118c85;
L_12118c55:;
  /* 12118c55 call 0x12118f10 */
  push32(0x12118c5au); f_12118f10();
  /* 12118c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118c5c jne 0x12118c7f */
  if (!C.zf) goto L_12118c7f;
  /* 12118c5e push 0x1213e9e0 */
  push32((uint32_t)(0x1213e9e0u));
  /* 12118c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118c65 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 12118c6a push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118c6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12118c71 call 0x12116e30 */
  push32(0x12118c76u); f_12116e30();
  /* 12118c76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118c79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118c7c jne 0x12118c7f */
  if (!C.zf) goto L_12118c7f;
  /* 12118c7e int3  */
  x86_unimpl("int3 @ 0x12118c7e");
L_12118c7f:;
  /* 12118c7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118c81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118c83 jne 0x12118c55 */
  if (!C.zf) goto L_12118c55;
L_12118c85:;
  /* 12118c85 push 9 */
  push32((uint32_t)(0x9u));
  /* 12118c87 call 0x1211b770 */
  push32(0x12118c8cu); f_1211b770();
  /* 12118c8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12118c8f:;
  /* 12118c8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118c92 push edx */
  push32((uint32_t)(EDX));
  /* 12118c93 call 0x12119370 */
  push32(0x12118c98u); f_12119370();
  /* 12118c98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118c9d jne 0x12118cc0 */
  if (!C.zf) goto L_12118cc0;
  /* 12118c9f push 0x1213eae4 */
  push32((uint32_t)(0x1213eae4u));
  /* 12118ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118ca6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 12118cab push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118cb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118cb2 call 0x12116e30 */
  push32(0x12118cb7u); f_12116e30();
  /* 12118cb7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118cba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118cbd jne 0x12118cc0 */
  if (!C.zf) goto L_12118cc0;
  /* 12118cbf int3  */
  x86_unimpl("int3 @ 0x12118cbf");
L_12118cc0:;
  /* 12118cc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118cc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118cc4 jne 0x12118c8f */
  if (!C.zf) goto L_12118c8f;
  /* 12118cc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118cc9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118ccc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12118ccf:;
  /* 12118ccf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118cd2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12118cd5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12118cda cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118cdd je 0x12118d22 */
  if (C.zf) goto L_12118d22;
  /* 12118cdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118ce2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118ce6 je 0x12118d22 */
  if (C.zf) goto L_12118d22;
  /* 12118ce8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118ceb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12118cee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12118cf3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118cf6 je 0x12118d22 */
  if (C.zf) goto L_12118d22;
  /* 12118cf8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118cfb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118cff je 0x12118d22 */
  if (C.zf) goto L_12118d22;
  /* 12118d01 push 0x1213ec7c */
  push32((uint32_t)(0x1213ec7cu));
  /* 12118d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118d08 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12118d0d push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118d12 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118d14 call 0x12116e30 */
  push32(0x12118d19u); f_12116e30();
  /* 12118d19 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118d1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118d1f jne 0x12118d22 */
  if (!C.zf) goto L_12118d22;
  /* 12118d21 int3  */
  x86_unimpl("int3 @ 0x12118d21");
L_12118d22:;
  /* 12118d22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12118d24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12118d26 jne 0x12118ccf */
  if (!C.zf) goto L_12118ccf;
  /* 12118d28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118d2b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118d2f jne 0x12118d3e */
  if (!C.zf) goto L_12118d3e;
  /* 12118d31 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118d35 jne 0x12118d3e */
  if (!C.zf) goto L_12118d3e;
  /* 12118d37 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12118d3e:;
  /* 12118d3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118d41 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118d45 je 0x12118d79 */
  if (C.zf) goto L_12118d79;
L_12118d47:;
  /* 12118d47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118d4a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12118d4d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118d50 je 0x12118d73 */
  if (C.zf) goto L_12118d73;
  /* 12118d52 push 0x1213ebc4 */
  push32((uint32_t)(0x1213ebc4u));
  /* 12118d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118d59 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12118d5e push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118d63 push 2 */
  push32((uint32_t)(0x2u));
  /* 12118d65 call 0x12116e30 */
  push32(0x12118d6au); f_12116e30();
  /* 12118d6a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118d6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118d70 jne 0x12118d73 */
  if (!C.zf) goto L_12118d73;
  /* 12118d72 int3  */
  x86_unimpl("int3 @ 0x12118d72");
L_12118d73:;
  /* 12118d73 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118d75 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118d77 jne 0x12118d47 */
  if (!C.zf) goto L_12118d47;
L_12118d79:;
  /* 12118d79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12118d7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12118d7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12118d82 push 9 */
  push32((uint32_t)(0x9u));
  /* 12118d84 call 0x1211b810 */
  push32(0x12118d89u); f_1211b810();
  /* 12118d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118d8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118d8f pop edi */
  EDI = (pop32());
  /* 12118d90 pop esi */
  ESI = (pop32());
  /* 12118d91 pop ebx */
  EBX = (pop32());
  /* 12118d92 mov esp, ebp */
  ESP = (EBP);
  /* 12118d94 pop ebp */
  EBP = (pop32());
  /* 12118d95 ret  */
  ESPCHK(0x12118c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008da0 @ 0x12118da0 (28 bytes, 11 insns) */
void f_12118da0(void) {
  FTRACE(0x12118da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12118da1 mov ebp, esp */
  EBP = (ESP);
  /* 12118da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12118da4 mov eax, dword ptr [0x12141a8c] */
  EAX = (r32((uint32_t)(0x12141a8c)));
  /* 12118da9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12118dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118daf mov dword ptr [0x12141a8c], ecx */
  w32((uint32_t)(0x12141a8c), (ECX));
  /* 12118db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118db8 mov esp, ebp */
  ESP = (EBP);
  /* 12118dba pop ebp */
  EBP = (pop32());
  /* 12118dbb ret  */
  ESPCHK(0x12118da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dc0 @ 0x12118dc0 (157 bytes, 59 insns) */
void f_12118dc0(void) {
  FTRACE(0x12118dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12118dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12118dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12118dc4 push ebx */
  push32((uint32_t)(EBX));
  /* 12118dc5 push esi */
  push32((uint32_t)(ESI));
  /* 12118dc6 push edi */
  push32((uint32_t)(EDI));
  /* 12118dc7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12118dc9 call 0x1211b770 */
  push32(0x12118dceu); f_1211b770();
  /* 12118dce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118dd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118dd4 push eax */
  push32((uint32_t)(EAX));
  /* 12118dd5 call 0x12119370 */
  push32(0x12118ddau); f_12119370();
  /* 12118dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118ddd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118ddf je 0x12118e4c */
  if (C.zf) goto L_12118e4c;
  /* 12118de1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118de4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118de7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12118dea:;
  /* 12118dea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118ded mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12118df0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12118df5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118df8 je 0x12118e3d */
  if (C.zf) goto L_12118e3d;
  /* 12118dfa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118dfd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118e01 je 0x12118e3d */
  if (C.zf) goto L_12118e3d;
  /* 12118e03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118e06 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12118e09 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12118e0e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118e11 je 0x12118e3d */
  if (C.zf) goto L_12118e3d;
  /* 12118e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118e16 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118e1a je 0x12118e3d */
  if (C.zf) goto L_12118e3d;
  /* 12118e1c push 0x1213ec7c */
  push32((uint32_t)(0x1213ec7cu));
  /* 12118e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118e23 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12118e28 push 0x1213e9d4 */
  push32((uint32_t)(0x1213e9d4u));
  /* 12118e2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12118e2f call 0x12116e30 */
  push32(0x12118e34u); f_12116e30();
  /* 12118e34 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118e37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118e3a jne 0x12118e3d */
  if (!C.zf) goto L_12118e3d;
  /* 12118e3c int3  */
  x86_unimpl("int3 @ 0x12118e3c");
L_12118e3d:;
  /* 12118e3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12118e3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12118e41 jne 0x12118dea */
  if (!C.zf) goto L_12118dea;
  /* 12118e43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118e46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12118e49 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12118e4c:;
  /* 12118e4c push 9 */
  push32((uint32_t)(0x9u));
  /* 12118e4e call 0x1211b810 */
  push32(0x12118e53u); f_1211b810();
  /* 12118e53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118e56 pop edi */
  EDI = (pop32());
  /* 12118e57 pop esi */
  ESI = (pop32());
  /* 12118e58 pop ebx */
  EBX = (pop32());
  /* 12118e59 mov esp, ebp */
  ESP = (EBP);
  /* 12118e5b pop ebp */
  EBP = (pop32());
  /* 12118e5c ret  */
  ESPCHK(0x12118dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e60 @ 0x12118e60 (28 bytes, 11 insns) */
void f_12118e60(void) {
  FTRACE(0x12118e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12118e61 mov ebp, esp */
  EBP = (ESP);
  /* 12118e63 push ecx */
  push32((uint32_t)(ECX));
  /* 12118e64 mov eax, dword ptr [0x12141c90] */
  EAX = (r32((uint32_t)(0x12141c90)));
  /* 12118e69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12118e6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118e6f mov dword ptr [0x12141c90], ecx */
  w32((uint32_t)(0x12141c90), (ECX));
  /* 12118e75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118e78 mov esp, ebp */
  ESP = (EBP);
  /* 12118e7a pop ebp */
  EBP = (pop32());
  /* 12118e7b ret  */
  ESPCHK(0x12118e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e80 @ 0x12118e80 (136 bytes, 55 insns) */
void f_12118e80(void) {
  FTRACE(0x12118e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12118e81 mov ebp, esp */
  EBP = (ESP);
  /* 12118e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12118e84 push ebx */
  push32((uint32_t)(EBX));
  /* 12118e85 push esi */
  push32((uint32_t)(ESI));
  /* 12118e86 push edi */
  push32((uint32_t)(EDI));
  /* 12118e87 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12118e8e:;
  /* 12118e8e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12118e91 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12118e94 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118e97 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12118e9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118e9c je 0x12118efe */
  if (C.zf) goto L_12118efe;
  /* 12118e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118ea1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118ea3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12118ea5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12118ea8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12118eae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118eb1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118eb4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12118eb7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118eb9 je 0x12118efc */
  if (C.zf) goto L_12118efc;
L_12118ebb:;
  /* 12118ebb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12118ebe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12118ec3 push eax */
  push32((uint32_t)(EAX));
  /* 12118ec4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118ec7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12118ec9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12118ecc push edx */
  push32((uint32_t)(EDX));
  /* 12118ecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12118ed0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118ed3 push eax */
  push32((uint32_t)(EAX));
  /* 12118ed4 push 0x1213ecc0 */
  push32((uint32_t)(0x1213ecc0u));
  /* 12118ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118edb push 0 */
  push32((uint32_t)(0x0u));
  /* 12118edd push 0 */
  push32((uint32_t)(0x0u));
  /* 12118edf push 0 */
  push32((uint32_t)(0x0u));
  /* 12118ee1 call 0x12116e30 */
  push32(0x12118ee6u); f_12116e30();
  /* 12118ee6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118ee9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118eec jne 0x12118eef */
  if (!C.zf) goto L_12118eef;
  /* 12118eee int3  */
  x86_unimpl("int3 @ 0x12118eee");
L_12118eef:;
  /* 12118eef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118ef1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118ef3 jne 0x12118ebb */
  if (!C.zf) goto L_12118ebb;
  /* 12118ef5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12118efc:;
  /* 12118efc jmp 0x12118e8e */
  goto L_12118e8e;
L_12118efe:;
  /* 12118efe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12118f01 pop edi */
  EDI = (pop32());
  /* 12118f02 pop esi */
  ESI = (pop32());
  /* 12118f03 pop ebx */
  EBX = (pop32());
  /* 12118f04 mov esp, ebp */
  ESP = (EBP);
  /* 12118f06 pop ebp */
  EBP = (pop32());
  /* 12118f07 ret  */
  ESPCHK(0x12118e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f10 @ 0x12118f10 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12118f10(void) {
  FTRACE(0x12118f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12118f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12118f11 mov ebp, esp */
  EBP = (ESP);
  /* 12118f13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12118f16 push ebx */
  push32((uint32_t)(EBX));
  /* 12118f17 push esi */
  push32((uint32_t)(ESI));
  /* 12118f18 push edi */
  push32((uint32_t)(EDI));
  /* 12118f19 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12118f20 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 12118f25 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12118f28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118f2a jne 0x12118f36 */
  if (!C.zf) goto L_12118f36;
  /* 12118f2c mov eax, 1 */
  EAX = (0x1u);
  /* 12118f31 jmp 0x12119268 */
  goto L_12119268;
L_12118f36:;
  /* 12118f36 push 9 */
  push32((uint32_t)(0x9u));
  /* 12118f38 call 0x1211b770 */
  push32(0x12118f3du); f_1211b770();
  /* 12118f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118f40 call 0x1211bf50 */
  push32(0x12118f45u); f_1211bf50();
  /* 12118f45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12118f48 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118f4c je 0x12119059 */
  if (C.zf) goto L_12119059;
  /* 12118f52 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118f56 je 0x12119059 */
  if (C.zf) goto L_12119059;
  /* 12118f5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12118f5f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12118f62 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12118f65 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12118f68 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12118f6b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118f6f ja 0x12119022 */
  if ((!C.cf&&!C.zf)) goto L_12119022;
  /* 12118f75 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12118f78 jmp dword ptr [eax*4 + 0x1211926f] */
  switch (EAX) {
    case 0: goto L_12118ffa;
    case 1: goto L_12118fd2;
    case 2: goto L_12118faa;
    case 3: goto L_12118f7f;
    default: x86_unimpl("switch@0x12118f78 out of table"); return;
  }
L_12118f7f:;
  /* 12118f7f push 0x1213ee14 */
  push32((uint32_t)(0x1213ee14u));
  /* 12118f84 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12118f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 12118f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12118f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12118f91 call 0x12116e30 */
  push32(0x12118f96u); f_12116e30();
  /* 12118f96 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118f9c jne 0x12118f9f */
  if (!C.zf) goto L_12118f9f;
  /* 12118f9e int3  */
  x86_unimpl("int3 @ 0x12118f9e");
L_12118f9f:;
  /* 12118f9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12118fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12118fa3 jne 0x12118f7f */
  if (!C.zf) goto L_12118f7f;
  /* 12118fa5 jmp 0x12119048 */
  goto L_12119048;
L_12118faa:;
  /* 12118faa push 0x1213edf0 */
  push32((uint32_t)(0x1213edf0u));
  /* 12118faf push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12118fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118fba push 0 */
  push32((uint32_t)(0x0u));
  /* 12118fbc call 0x12116e30 */
  push32(0x12118fc1u); f_12116e30();
  /* 12118fc1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118fc4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118fc7 jne 0x12118fca */
  if (!C.zf) goto L_12118fca;
  /* 12118fc9 int3  */
  x86_unimpl("int3 @ 0x12118fc9");
L_12118fca:;
  /* 12118fca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12118fcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12118fce jne 0x12118faa */
  if (!C.zf) goto L_12118faa;
  /* 12118fd0 jmp 0x12119048 */
  goto L_12119048;
L_12118fd2:;
  /* 12118fd2 push 0x1213edcc */
  push32((uint32_t)(0x1213edccu));
  /* 12118fd7 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12118fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 12118fde push 0 */
  push32((uint32_t)(0x0u));
  /* 12118fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12118fe4 call 0x12116e30 */
  push32(0x12118fe9u); f_12116e30();
  /* 12118fe9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12118fec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12118fef jne 0x12118ff2 */
  if (!C.zf) goto L_12118ff2;
  /* 12118ff1 int3  */
  x86_unimpl("int3 @ 0x12118ff1");
L_12118ff2:;
  /* 12118ff2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12118ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12118ff6 jne 0x12118fd2 */
  if (!C.zf) goto L_12118fd2;
  /* 12118ff8 jmp 0x12119048 */
  goto L_12119048;
L_12118ffa:;
  /* 12118ffa push 0x1213eda8 */
  push32((uint32_t)(0x1213eda8u));
  /* 12118fff push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12119004 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119006 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211900a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211900c call 0x12116e30 */
  push32(0x12119011u); f_12116e30();
  /* 12119011 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119014 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119017 jne 0x1211901a */
  if (!C.zf) goto L_1211901a;
  /* 12119019 int3  */
  x86_unimpl("int3 @ 0x12119019");
L_1211901a:;
  /* 1211901a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211901c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211901e jne 0x12118ffa */
  if (!C.zf) goto L_12118ffa;
  /* 12119020 jmp 0x12119048 */
  goto L_12119048;
L_12119022:;
  /* 12119022 push 0x1213ed7c */
  push32((uint32_t)(0x1213ed7cu));
  /* 12119027 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 1211902c push 0 */
  push32((uint32_t)(0x0u));
  /* 1211902e push 0 */
  push32((uint32_t)(0x0u));
  /* 12119030 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119032 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119034 call 0x12116e30 */
  push32(0x12119039u); f_12116e30();
  /* 12119039 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211903c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211903f jne 0x12119042 */
  if (!C.zf) goto L_12119042;
  /* 12119041 int3  */
  x86_unimpl("int3 @ 0x12119041");
L_12119042:;
  /* 12119042 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12119044 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12119046 jne 0x12119022 */
  if (!C.zf) goto L_12119022;
L_12119048:;
  /* 12119048 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211904a call 0x1211b810 */
  push32(0x1211904fu); f_1211b810();
  /* 1211904f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119052 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119054 jmp 0x12119268 */
  goto L_12119268;
L_12119059:;
  /* 12119059 mov eax, dword ptr [0x12143834] */
  EAX = (r32((uint32_t)(0x12143834)));
  /* 1211905e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12119061 jmp 0x1211906b */
  goto L_1211906b;
L_12119063:;
  /* 12119063 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119066 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12119068 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1211906b:;
  /* 1211906b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211906f je 0x1211925b */
  if (C.zf) goto L_1211925b;
  /* 12119075 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1211907c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211907f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12119082 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12119088 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211908b je 0x121190b0 */
  if (C.zf) goto L_121190b0;
  /* 1211908d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119090 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119094 je 0x121190b0 */
  if (C.zf) goto L_121190b0;
  /* 12119096 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119099 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1211909c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121190a2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121190a5 je 0x121190b0 */
  if (C.zf) goto L_121190b0;
  /* 121190a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121190aa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121190ae jne 0x121190c8 */
  if (!C.zf) goto L_121190c8;
L_121190b0:;
  /* 121190b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121190b3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121190b6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121190bc mov edx, dword ptr [ecx*4 + 0x12141a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141a94)));
  /* 121190c3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 121190c6 jmp 0x121190cf */
  goto L_121190cf;
L_121190c8:;
  /* 121190c8 mov dword ptr [ebp - 0x14], 0x1213ed74 */
  w32((uint32_t)(EBP + -0x14), (0x1213ed74u));
L_121190cf:;
  /* 121190cf push 4 */
  push32((uint32_t)(0x4u));
  /* 121190d1 mov al, byte ptr [0x12141a90] */
  AL = (r8((uint32_t)(0x12141a90)));
  /* 121190d6 push eax */
  push32((uint32_t)(EAX));
  /* 121190d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121190da add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121190dd push ecx */
  push32((uint32_t)(ECX));
  /* 121190de call 0x12118e80 */
  push32(0x121190e3u); f_12118e80();
  /* 121190e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121190e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121190e8 jne 0x12119124 */
  if (!C.zf) goto L_12119124;
L_121190ea:;
  /* 121190ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121190ed add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121190f0 push edx */
  push32((uint32_t)(EDX));
  /* 121190f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121190f4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 121190f7 push ecx */
  push32((uint32_t)(ECX));
  /* 121190f8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121190fb push edx */
  push32((uint32_t)(EDX));
  /* 121190fc push 0x1213ec50 */
  push32((uint32_t)(0x1213ec50u));
  /* 12119101 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119103 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119105 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119107 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119109 call 0x12116e30 */
  push32(0x1211910eu); f_12116e30();
  /* 1211910e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119111 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119114 jne 0x12119117 */
  if (!C.zf) goto L_12119117;
  /* 12119116 int3  */
  x86_unimpl("int3 @ 0x12119116");
L_12119117:;
  /* 12119117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211911b jne 0x121190ea */
  if (!C.zf) goto L_121190ea;
  /* 1211911d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12119124:;
  /* 12119124 push 4 */
  push32((uint32_t)(0x4u));
  /* 12119126 mov cl, byte ptr [0x12141a90] */
  CL = (r8((uint32_t)(0x12141a90)));
  /* 1211912c push ecx */
  push32((uint32_t)(ECX));
  /* 1211912d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119130 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12119133 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119136 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1211913a push edx */
  push32((uint32_t)(EDX));
  /* 1211913b call 0x12118e80 */
  push32(0x12119140u); f_12118e80();
  /* 12119140 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119145 jne 0x12119181 */
  if (!C.zf) goto L_12119181;
L_12119147:;
  /* 12119147 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211914a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211914d push eax */
  push32((uint32_t)(EAX));
  /* 1211914e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119151 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12119154 push edx */
  push32((uint32_t)(EDX));
  /* 12119155 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12119158 push eax */
  push32((uint32_t)(EAX));
  /* 12119159 push 0x1213ec24 */
  push32((uint32_t)(0x1213ec24u));
  /* 1211915e push 0 */
  push32((uint32_t)(0x0u));
  /* 12119160 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119162 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119164 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119166 call 0x12116e30 */
  push32(0x1211916bu); f_12116e30();
  /* 1211916b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211916e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119171 jne 0x12119174 */
  if (!C.zf) goto L_12119174;
  /* 12119173 int3  */
  x86_unimpl("int3 @ 0x12119173");
L_12119174:;
  /* 12119174 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12119176 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12119178 jne 0x12119147 */
  if (!C.zf) goto L_12119147;
  /* 1211917a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12119181:;
  /* 12119181 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119184 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119188 jne 0x121191da */
  if (!C.zf) goto L_121191da;
  /* 1211918a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211918d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12119190 push ecx */
  push32((uint32_t)(ECX));
  /* 12119191 mov dl, byte ptr [0x12141a91] */
  DL = (r8((uint32_t)(0x12141a91)));
  /* 12119197 push edx */
  push32((uint32_t)(EDX));
  /* 12119198 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211919b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211919e push eax */
  push32((uint32_t)(EAX));
  /* 1211919f call 0x12118e80 */
  push32(0x121191a4u); f_12118e80();
  /* 121191a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121191a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121191a9 jne 0x121191da */
  if (!C.zf) goto L_121191da;
L_121191ab:;
  /* 121191ab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121191ae add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121191b1 push ecx */
  push32((uint32_t)(ECX));
  /* 121191b2 push 0x1213ed48 */
  push32((uint32_t)(0x1213ed48u));
  /* 121191b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121191b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121191bb push 0 */
  push32((uint32_t)(0x0u));
  /* 121191bd push 0 */
  push32((uint32_t)(0x0u));
  /* 121191bf call 0x12116e30 */
  push32(0x121191c4u); f_12116e30();
  /* 121191c4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121191c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121191ca jne 0x121191cd */
  if (!C.zf) goto L_121191cd;
  /* 121191cc int3  */
  x86_unimpl("int3 @ 0x121191cc");
L_121191cd:;
  /* 121191cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121191cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121191d1 jne 0x121191ab */
  if (!C.zf) goto L_121191ab;
  /* 121191d3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_121191da:;
  /* 121191da cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121191de jne 0x12119256 */
  if (!C.zf) goto L_12119256;
  /* 121191e0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121191e3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121191e7 je 0x1211921c */
  if (C.zf) goto L_1211921c;
L_121191e9:;
  /* 121191e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121191ec mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 121191ef push edx */
  push32((uint32_t)(EDX));
  /* 121191f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121191f3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121191f6 push ecx */
  push32((uint32_t)(ECX));
  /* 121191f7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121191fa push edx */
  push32((uint32_t)(EDX));
  /* 121191fb push 0x1213ed28 */
  push32((uint32_t)(0x1213ed28u));
  /* 12119200 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119202 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119204 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119206 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119208 call 0x12116e30 */
  push32(0x1211920du); f_12116e30();
  /* 1211920d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119210 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119213 jne 0x12119216 */
  if (!C.zf) goto L_12119216;
  /* 12119215 int3  */
  x86_unimpl("int3 @ 0x12119215");
L_12119216:;
  /* 12119216 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119218 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211921a jne 0x121191e9 */
  if (!C.zf) goto L_121191e9;
L_1211921c:;
  /* 1211921c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211921f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12119222 push edx */
  push32((uint32_t)(EDX));
  /* 12119223 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119226 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119229 push eax */
  push32((uint32_t)(EAX));
  /* 1211922a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211922d push ecx */
  push32((uint32_t)(ECX));
  /* 1211922e push 0x1213ecfc */
  push32((uint32_t)(0x1213ecfcu));
  /* 12119233 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119235 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119237 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119239 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211923b call 0x12116e30 */
  push32(0x12119240u); f_12116e30();
  /* 12119240 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119243 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119246 jne 0x12119249 */
  if (!C.zf) goto L_12119249;
  /* 12119248 int3  */
  x86_unimpl("int3 @ 0x12119248");
L_12119249:;
  /* 12119249 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211924b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211924d jne 0x1211921c */
  if (!C.zf) goto L_1211921c;
  /* 1211924f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12119256:;
  /* 12119256 jmp 0x12119063 */
  goto L_12119063;
L_1211925b:;
  /* 1211925b push 9 */
  push32((uint32_t)(0x9u));
  /* 1211925d call 0x1211b810 */
  push32(0x12119262u); f_1211b810();
  /* 12119262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119265 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12119268:;
  /* 12119268 pop edi */
  EDI = (pop32());
  /* 12119269 pop esi */
  ESI = (pop32());
  /* 1211926a pop ebx */
  EBX = (pop32());
  /* 1211926b mov esp, ebp */
  ESP = (EBP);
  /* 1211926d pop ebp */
  EBP = (pop32());
  /* 1211926e ret  */
  ESPCHK(0x12118f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009280 @ 0x12119280 (34 bytes, 13 insns) */
void f_12119280(void) {
  FTRACE(0x12119280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119280 push ebp */
  push32((uint32_t)(EBP));
  /* 12119281 mov ebp, esp */
  EBP = (ESP);
  /* 12119283 push ecx */
  push32((uint32_t)(ECX));
  /* 12119284 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 12119289 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211928c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119290 je 0x1211929b */
  if (C.zf) goto L_1211929b;
  /* 12119292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119295 mov dword ptr [0x12141a84], ecx */
  w32((uint32_t)(0x12141a84), (ECX));
L_1211929b:;
  /* 1211929b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211929e mov esp, ebp */
  ESP = (EBP);
  /* 121192a0 pop ebp */
  EBP = (pop32());
  /* 121192a1 ret  */
  ESPCHK(0x12119280u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x121192b0 (103 bytes, 38 insns) */
void f_121192b0(void) {
  FTRACE(0x121192b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121192b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121192b1 mov ebp, esp */
  EBP = (ESP);
  /* 121192b3 push ecx */
  push32((uint32_t)(ECX));
  /* 121192b4 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 121192b9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 121192bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121192be jne 0x121192c2 */
  if (!C.zf) goto L_121192c2;
  /* 121192c0 jmp 0x12119313 */
  goto L_12119313;
L_121192c2:;
  /* 121192c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 121192c4 call 0x1211b770 */
  push32(0x121192c9u); f_1211b770();
  /* 121192c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121192cc mov ecx, dword ptr [0x12143834] */
  ECX = (r32((uint32_t)(0x12143834)));
  /* 121192d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121192d5 jmp 0x121192df */
  goto L_121192df;
L_121192d7:;
  /* 121192d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121192da mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 121192dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121192df:;
  /* 121192df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121192e3 je 0x12119309 */
  if (C.zf) goto L_12119309;
  /* 121192e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121192e8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121192eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121192f1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121192f4 jne 0x12119307 */
  if (!C.zf) goto L_12119307;
  /* 121192f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121192f9 push eax */
  push32((uint32_t)(EAX));
  /* 121192fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121192fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119300 push ecx */
  push32((uint32_t)(ECX));
  /* 12119301 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12119304u);
  /* 12119304 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119307:;
  /* 12119307 jmp 0x121192d7 */
  goto L_121192d7;
L_12119309:;
  /* 12119309 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211930b call 0x1211b810 */
  push32(0x12119310u); f_1211b810();
  /* 12119310 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119313:;
  /* 12119313 mov esp, ebp */
  ESP = (EBP);
  /* 12119315 pop ebp */
  EBP = (pop32());
  /* 12119316 ret  */
  ESPCHK(0x121192b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12119320 (75 bytes, 28 insns) */
void f_12119320(void) {
  FTRACE(0x12119320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119320 push ebp */
  push32((uint32_t)(EBP));
  /* 12119321 mov ebp, esp */
  EBP = (ESP);
  /* 12119323 push ecx */
  push32((uint32_t)(ECX));
  /* 12119324 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119328 je 0x1211935d */
  if (C.zf) goto L_1211935d;
  /* 1211932a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211932d push eax */
  push32((uint32_t)(EAX));
  /* 1211932e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119331 push ecx */
  push32((uint32_t)(ECX));
  /* 12119332 call dword ptr [0x121463a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463a0))), 0x12119338u);
  /* 12119338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211933a jne 0x1211935d */
  if (!C.zf) goto L_1211935d;
  /* 1211933c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119340 je 0x12119354 */
  if (C.zf) goto L_12119354;
  /* 12119342 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12119345 push edx */
  push32((uint32_t)(EDX));
  /* 12119346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119349 push eax */
  push32((uint32_t)(EAX));
  /* 1211934a call dword ptr [0x12146398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146398))), 0x12119350u);
  /* 12119350 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119352 jne 0x1211935d */
  if (!C.zf) goto L_1211935d;
L_12119354:;
  /* 12119354 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1211935b jmp 0x12119364 */
  goto L_12119364;
L_1211935d:;
  /* 1211935d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12119364:;
  /* 12119364 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119367 mov esp, ebp */
  ESP = (EBP);
  /* 12119369 pop ebp */
  EBP = (pop32());
  /* 1211936a ret  */
  ESPCHK(0x12119320u, _esp0);
  ESP += 4; return;
}

/* FUN_10009370 @ 0x12119370 (134 bytes, 50 insns) */
void f_12119370(void) {
  FTRACE(0x12119370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119370 push ebp */
  push32((uint32_t)(EBP));
  /* 12119371 mov ebp, esp */
  EBP = (ESP);
  /* 12119373 push ecx */
  push32((uint32_t)(ECX));
  /* 12119374 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119378 jne 0x1211937e */
  if (!C.zf) goto L_1211937e;
  /* 1211937a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211937c jmp 0x121193f2 */
  goto L_121193f2;
L_1211937e:;
  /* 1211937e push 1 */
  push32((uint32_t)(0x1u));
  /* 12119380 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12119382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119385 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119388 push eax */
  push32((uint32_t)(EAX));
  /* 12119389 call 0x12119320 */
  push32(0x1211938eu); f_12119320();
  /* 1211938e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119393 jne 0x12119399 */
  if (!C.zf) goto L_12119399;
  /* 12119395 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119397 jmp 0x121193f2 */
  goto L_121193f2;
L_12119399:;
  /* 12119399 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211939c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211939f push ecx */
  push32((uint32_t)(ECX));
  /* 121193a0 call 0x1211c070 */
  push32(0x121193a5u); f_1211c070();
  /* 121193a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121193a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121193ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121193af je 0x121193c6 */
  if (C.zf) goto L_121193c6;
  /* 121193b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121193b4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121193b7 push edx */
  push32((uint32_t)(EDX));
  /* 121193b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121193bb push eax */
  push32((uint32_t)(EAX));
  /* 121193bc call 0x1211c0d0 */
  push32(0x121193c1u); f_1211c0d0();
  /* 121193c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121193c4 jmp 0x121193f2 */
  goto L_121193f2;
L_121193c6:;
  /* 121193c6 mov ecx, dword ptr [0x121437e8] */
  ECX = (r32((uint32_t)(0x121437e8)));
  /* 121193cc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 121193d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121193d4 je 0x121193dd */
  if (C.zf) goto L_121193dd;
  /* 121193d6 mov eax, 1 */
  EAX = (0x1u);
  /* 121193db jmp 0x121193f2 */
  goto L_121193f2;
L_121193dd:;
  /* 121193dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121193e0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121193e3 push edx */
  push32((uint32_t)(EDX));
  /* 121193e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121193e6 mov eax, dword ptr [0x1214518c] */
  EAX = (r32((uint32_t)(0x1214518c)));
  /* 121193eb push eax */
  push32((uint32_t)(EAX));
  /* 121193ec call dword ptr [0x12146390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146390))), 0x121193f2u);
L_121193f2:;
  /* 121193f2 mov esp, ebp */
  ESP = (EBP);
  /* 121193f4 pop ebp */
  EBP = (pop32());
  /* 121193f5 ret  */
  ESPCHK(0x12119370u, _esp0);
  ESP += 4; return;
}

/* FUN_10009400 @ 0x12119400 (227 bytes, 80 insns) */
void f_12119400(void) {
  FTRACE(0x12119400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119400 push ebp */
  push32((uint32_t)(EBP));
  /* 12119401 mov ebp, esp */
  EBP = (ESP);
  /* 12119403 push ecx */
  push32((uint32_t)(ECX));
  /* 12119404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119407 push eax */
  push32((uint32_t)(EAX));
  /* 12119408 call 0x12119370 */
  push32(0x1211940du); f_12119370();
  /* 1211940d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119412 jne 0x1211941b */
  if (!C.zf) goto L_1211941b;
  /* 12119414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119416 jmp 0x121194df */
  goto L_121194df;
L_1211941b:;
  /* 1211941b push 9 */
  push32((uint32_t)(0x9u));
  /* 1211941d call 0x1211b770 */
  push32(0x12119422u); f_1211b770();
  /* 12119422 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119425 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119428 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211942b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211942e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119431 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12119434 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12119439 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211943c je 0x12119460 */
  if (C.zf) goto L_12119460;
  /* 1211943e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119441 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119445 je 0x12119460 */
  if (C.zf) goto L_12119460;
  /* 12119447 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211944a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1211944d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12119452 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119455 je 0x12119460 */
  if (C.zf) goto L_12119460;
  /* 12119457 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211945a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211945e jne 0x121194d3 */
  if (!C.zf) goto L_121194d3;
L_12119460:;
  /* 12119460 push 1 */
  push32((uint32_t)(0x1u));
  /* 12119462 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12119465 push edx */
  push32((uint32_t)(EDX));
  /* 12119466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119469 push eax */
  push32((uint32_t)(EAX));
  /* 1211946a call 0x12119320 */
  push32(0x1211946fu); f_12119320();
  /* 1211946f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119474 je 0x121194d3 */
  if (C.zf) goto L_121194d3;
  /* 12119476 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119479 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1211947c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211947f jne 0x121194d3 */
  if (!C.zf) goto L_121194d3;
  /* 12119481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119484 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12119487 cmp ecx, dword ptr [0x12141a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12141a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211948d jg 0x121194d3 */
  if ((!C.zf&&C.sf==C.of)) goto L_121194d3;
  /* 1211948f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119493 je 0x121194a0 */
  if (C.zf) goto L_121194a0;
  /* 12119495 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119498 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211949b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1211949e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121194a0:;
  /* 121194a0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121194a4 je 0x121194b1 */
  if (C.zf) goto L_121194b1;
  /* 121194a6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121194a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121194ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121194af mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121194b1:;
  /* 121194b1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121194b5 je 0x121194c2 */
  if (C.zf) goto L_121194c2;
  /* 121194b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121194ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121194bd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121194c0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121194c2:;
  /* 121194c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 121194c4 call 0x1211b810 */
  push32(0x121194c9u); f_1211b810();
  /* 121194c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121194cc mov eax, 1 */
  EAX = (0x1u);
  /* 121194d1 jmp 0x121194df */
  goto L_121194df;
L_121194d3:;
  /* 121194d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 121194d5 call 0x1211b810 */
  push32(0x121194dau); f_1211b810();
  /* 121194da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121194dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121194df:;
  /* 121194df mov esp, ebp */
  ESP = (EBP);
  /* 121194e1 pop ebp */
  EBP = (pop32());
  /* 121194e2 ret  */
  ESPCHK(0x12119400u, _esp0);
  ESP += 4; return;
}

/* FUN_100094f0 @ 0x121194f0 (28 bytes, 11 insns) */
void f_121194f0(void) {
  FTRACE(0x121194f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121194f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121194f1 mov ebp, esp */
  EBP = (ESP);
  /* 121194f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121194f4 mov eax, dword ptr [0x12145198] */
  EAX = (r32((uint32_t)(0x12145198)));
  /* 121194f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121194fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121194ff mov dword ptr [0x12145198], ecx */
  w32((uint32_t)(0x12145198), (ECX));
  /* 12119505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119508 mov esp, ebp */
  ESP = (EBP);
  /* 1211950a pop ebp */
  EBP = (pop32());
  /* 1211950b ret  */
  ESPCHK(0x121194f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009510 @ 0x12119510 (362 bytes, 116 insns) */
void f_12119510(void) {
  FTRACE(0x12119510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119510 push ebp */
  push32((uint32_t)(EBP));
  /* 12119511 mov ebp, esp */
  EBP = (ESP);
  /* 12119513 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119516 push ebx */
  push32((uint32_t)(EBX));
  /* 12119517 push esi */
  push32((uint32_t)(ESI));
  /* 12119518 push edi */
  push32((uint32_t)(EDI));
  /* 12119519 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211951d jne 0x1211954a */
  if (!C.zf) goto L_1211954a;
L_1211951f:;
  /* 1211951f push 0x1213ee5c */
  push32((uint32_t)(0x1213ee5cu));
  /* 12119524 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12119529 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211952b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211952d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211952f push 0 */
  push32((uint32_t)(0x0u));
  /* 12119531 call 0x12116e30 */
  push32(0x12119536u); f_12116e30();
  /* 12119536 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119539 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211953c jne 0x1211953f */
  if (!C.zf) goto L_1211953f;
  /* 1211953e int3  */
  x86_unimpl("int3 @ 0x1211953e");
L_1211953f:;
  /* 1211953f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119543 jne 0x1211951f */
  if (!C.zf) goto L_1211951f;
  /* 12119545 jmp 0x12119673 */
  goto L_12119673;
L_1211954a:;
  /* 1211954a push 9 */
  push32((uint32_t)(0x9u));
  /* 1211954c call 0x1211b770 */
  push32(0x12119551u); f_1211b770();
  /* 12119551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119554 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119557 mov edx, dword ptr [0x12143834] */
  EDX = (r32((uint32_t)(0x12143834)));
  /* 1211955d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1211955f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12119566 jmp 0x12119571 */
  goto L_12119571;
L_12119568:;
  /* 12119568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211956b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211956e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12119571:;
  /* 12119571 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119575 jge 0x12119595 */
  if ((C.sf==C.of)) goto L_12119595;
  /* 12119577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211957a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211957d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12119585 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119588 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211958b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12119593 jmp 0x12119568 */
  goto L_12119568;
L_12119595:;
  /* 12119595 mov edx, dword ptr [0x12143834] */
  EDX = (r32((uint32_t)(0x12143834)));
  /* 1211959b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1211959e jmp 0x121195a8 */
  goto L_121195a8;
L_121195a0:;
  /* 121195a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121195a3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121195a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121195a8:;
  /* 121195a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121195ac je 0x12119651 */
  if (C.zf) goto L_12119651;
  /* 121195b2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121195b5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121195b8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121195bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121195bf jl 0x12119627 */
  if ((C.sf!=C.of)) goto L_12119627;
  /* 121195c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121195c4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121195c7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121195cd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121195d0 jge 0x12119627 */
  if ((C.sf==C.of)) goto L_12119627;
  /* 121195d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121195d5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121195d8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121195de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121195e1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 121195e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121195e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121195eb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121195ee and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121195f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121195f7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 121195fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121195fe mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12119601 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12119606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119609 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1211960d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119610 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119613 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119616 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12119619 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211961e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119621 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12119625 jmp 0x1211964c */
  goto L_1211964c;
L_12119627:;
  /* 12119627 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211962a push edx */
  push32((uint32_t)(EDX));
  /* 1211962b push 0x1213ee38 */
  push32((uint32_t)(0x1213ee38u));
  /* 12119630 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119634 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119636 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119638 call 0x12116e30 */
  push32(0x1211963du); f_12116e30();
  /* 1211963d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119640 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119643 jne 0x12119646 */
  if (!C.zf) goto L_12119646;
  /* 12119645 int3  */
  x86_unimpl("int3 @ 0x12119645");
L_12119646:;
  /* 12119646 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119648 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211964a jne 0x12119627 */
  if (!C.zf) goto L_12119627;
L_1211964c:;
  /* 1211964c jmp 0x121195a0 */
  goto L_121195a0;
L_12119651:;
  /* 12119651 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119654 mov edx, dword ptr [0x1214383c] */
  EDX = (r32((uint32_t)(0x1214383c)));
  /* 1211965a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1211965d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119660 mov ecx, dword ptr [0x12143830] */
  ECX = (r32((uint32_t)(0x12143830)));
  /* 12119666 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12119669 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211966b call 0x1211b810 */
  push32(0x12119670u); f_1211b810();
  /* 12119670 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119673:;
  /* 12119673 pop edi */
  EDI = (pop32());
  /* 12119674 pop esi */
  ESI = (pop32());
  /* 12119675 pop ebx */
  EBX = (pop32());
  /* 12119676 mov esp, ebp */
  ESP = (EBP);
  /* 12119678 pop ebp */
  EBP = (pop32());
  /* 12119679 ret  */
  ESPCHK(0x12119510u, _esp0);
  ESP += 4; return;
}

/* FUN_10009680 @ 0x12119680 (291 bytes, 95 insns) */
void f_12119680(void) {
  FTRACE(0x12119680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119680 push ebp */
  push32((uint32_t)(EBP));
  /* 12119681 mov ebp, esp */
  EBP = (ESP);
  /* 12119683 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119686 push ebx */
  push32((uint32_t)(EBX));
  /* 12119687 push esi */
  push32((uint32_t)(ESI));
  /* 12119688 push edi */
  push32((uint32_t)(EDI));
  /* 12119689 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12119690 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119694 je 0x121196a2 */
  if (C.zf) goto L_121196a2;
  /* 12119696 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211969a je 0x121196a2 */
  if (C.zf) goto L_121196a2;
  /* 1211969c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121196a0 jne 0x121196d0 */
  if (!C.zf) goto L_121196d0;
L_121196a2:;
  /* 121196a2 push 0x1213ee84 */
  push32((uint32_t)(0x1213ee84u));
  /* 121196a7 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 121196ac push 0 */
  push32((uint32_t)(0x0u));
  /* 121196ae push 0 */
  push32((uint32_t)(0x0u));
  /* 121196b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121196b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121196b4 call 0x12116e30 */
  push32(0x121196b9u); f_12116e30();
  /* 121196b9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121196bc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121196bf jne 0x121196c2 */
  if (!C.zf) goto L_121196c2;
  /* 121196c1 int3  */
  x86_unimpl("int3 @ 0x121196c1");
L_121196c2:;
  /* 121196c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121196c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121196c6 jne 0x121196a2 */
  if (!C.zf) goto L_121196a2;
  /* 121196c8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121196cb jmp 0x1211979c */
  goto L_1211979c;
L_121196d0:;
  /* 121196d0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121196d7 jmp 0x121196e2 */
  goto L_121196e2;
L_121196d9:;
  /* 121196d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121196dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121196df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121196e2:;
  /* 121196e2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121196e6 jge 0x1211976c */
  if ((C.sf==C.of)) goto L_1211976c;
  /* 121196ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121196ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121196f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121196f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 121196f8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 121196fc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119700 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119706 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1211970a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211970d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119710 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119713 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12119716 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1211971a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211971e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119721 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119724 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12119728 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211972b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211972e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119733 jne 0x12119742 */
  if (!C.zf) goto L_12119742;
  /* 12119735 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119738 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211973b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119740 je 0x12119767 */
  if (C.zf) goto L_12119767;
L_12119742:;
  /* 12119742 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119746 je 0x12119767 */
  if (C.zf) goto L_12119767;
  /* 12119748 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211974c jne 0x12119760 */
  if (!C.zf) goto L_12119760;
  /* 1211974e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119752 jne 0x12119767 */
  if (!C.zf) goto L_12119767;
  /* 12119754 mov eax, dword ptr [0x12141a84] */
  EAX = (r32((uint32_t)(0x12141a84)));
  /* 12119759 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1211975c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211975e je 0x12119767 */
  if (C.zf) goto L_12119767;
L_12119760:;
  /* 12119760 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12119767:;
  /* 12119767 jmp 0x121196d9 */
  goto L_121196d9;
L_1211976c:;
  /* 1211976c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211976f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12119772 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12119775 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119778 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211977b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1211977e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119781 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12119784 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12119787 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211978a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211978d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12119790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119793 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12119799 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1211979c:;
  /* 1211979c pop edi */
  EDI = (pop32());
  /* 1211979d pop esi */
  ESI = (pop32());
  /* 1211979e pop ebx */
  EBX = (pop32());
  /* 1211979f mov esp, ebp */
  ESP = (EBP);
  /* 121197a1 pop ebp */
  EBP = (pop32());
  /* 121197a2 ret  */
  ESPCHK(0x12119680u, _esp0);
  ESP += 4; return;
}

/* FUN_100097b0 @ 0x121197b0 (697 bytes, 253 insns) */
void f_121197b0(void) {
  FTRACE(0x121197b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121197b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121197b1 mov ebp, esp */
  EBP = (ESP);
  /* 121197b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121197b6 push ebx */
  push32((uint32_t)(EBX));
  /* 121197b7 push esi */
  push32((uint32_t)(ESI));
  /* 121197b8 push edi */
  push32((uint32_t)(EDI));
  /* 121197b9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121197c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 121197c2 call 0x1211b770 */
  push32(0x121197c7u); f_1211b770();
  /* 121197c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121197ca:;
  /* 121197ca push 0x1213ef7c */
  push32((uint32_t)(0x1213ef7cu));
  /* 121197cf push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 121197d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121197d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121197d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121197da push 0 */
  push32((uint32_t)(0x0u));
  /* 121197dc call 0x12116e30 */
  push32(0x121197e1u); f_12116e30();
  /* 121197e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121197e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121197e7 jne 0x121197ea */
  if (!C.zf) goto L_121197ea;
  /* 121197e9 int3  */
  x86_unimpl("int3 @ 0x121197e9");
L_121197ea:;
  /* 121197ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121197ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121197ee jne 0x121197ca */
  if (!C.zf) goto L_121197ca;
  /* 121197f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121197f4 je 0x121197fe */
  if (C.zf) goto L_121197fe;
  /* 121197f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121197f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121197fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121197fe:;
  /* 121197fe mov eax, dword ptr [0x12143834] */
  EAX = (r32((uint32_t)(0x12143834)));
  /* 12119803 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12119806 jmp 0x12119810 */
  goto L_12119810;
L_12119808:;
  /* 12119808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211980b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211980d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12119810:;
  /* 12119810 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119814 je 0x12119a32 */
  if (C.zf) goto L_12119a32;
  /* 1211981a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211981d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119820 je 0x12119a32 */
  if (C.zf) goto L_12119a32;
  /* 12119826 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119829 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1211982c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12119832 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119835 je 0x12119864 */
  if (C.zf) goto L_12119864;
  /* 12119837 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211983a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1211983d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12119843 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12119845 je 0x12119864 */
  if (C.zf) goto L_12119864;
  /* 12119847 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211984a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1211984d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12119852 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119855 jne 0x12119869 */
  if (!C.zf) goto L_12119869;
  /* 12119857 mov ecx, dword ptr [0x12141a84] */
  ECX = (r32((uint32_t)(0x12141a84)));
  /* 1211985d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12119860 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12119862 jne 0x12119869 */
  if (!C.zf) goto L_12119869;
L_12119864:;
  /* 12119864 jmp 0x12119a2d */
  goto L_12119a2d;
L_12119869:;
  /* 12119869 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211986c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119870 je 0x121198e2 */
  if (C.zf) goto L_121198e2;
  /* 12119872 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119874 push 1 */
  push32((uint32_t)(0x1u));
  /* 12119876 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119879 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1211987c push ecx */
  push32((uint32_t)(ECX));
  /* 1211987d call 0x12119320 */
  push32(0x12119882u); f_12119320();
  /* 12119882 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119885 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119887 jne 0x121198b3 */
  if (!C.zf) goto L_121198b3;
L_12119889:;
  /* 12119889 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211988c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1211988f push eax */
  push32((uint32_t)(EAX));
  /* 12119890 push 0x1213ef68 */
  push32((uint32_t)(0x1213ef68u));
  /* 12119895 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119897 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119899 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211989b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211989d call 0x12116e30 */
  push32(0x121198a2u); f_12116e30();
  /* 121198a2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121198a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121198a8 jne 0x121198ab */
  if (!C.zf) goto L_121198ab;
  /* 121198aa int3  */
  x86_unimpl("int3 @ 0x121198aa");
L_121198ab:;
  /* 121198ab xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121198ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121198af jne 0x12119889 */
  if (!C.zf) goto L_12119889;
  /* 121198b1 jmp 0x121198e2 */
  goto L_121198e2;
L_121198b3:;
  /* 121198b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121198b6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121198b9 push eax */
  push32((uint32_t)(EAX));
  /* 121198ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121198bd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121198c0 push edx */
  push32((uint32_t)(EDX));
  /* 121198c1 push 0x1213ef5c */
  push32((uint32_t)(0x1213ef5cu));
  /* 121198c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121198c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121198ca push 0 */
  push32((uint32_t)(0x0u));
  /* 121198cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121198ce call 0x12116e30 */
  push32(0x121198d3u); f_12116e30();
  /* 121198d3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121198d6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121198d9 jne 0x121198dc */
  if (!C.zf) goto L_121198dc;
  /* 121198db int3  */
  x86_unimpl("int3 @ 0x121198db");
L_121198dc:;
  /* 121198dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121198de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121198e0 jne 0x121198b3 */
  if (!C.zf) goto L_121198b3;
L_121198e2:;
  /* 121198e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121198e5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121198e8 push edx */
  push32((uint32_t)(EDX));
  /* 121198e9 push 0x1213ef54 */
  push32((uint32_t)(0x1213ef54u));
  /* 121198ee push 0 */
  push32((uint32_t)(0x0u));
  /* 121198f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121198f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121198f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121198f6 call 0x12116e30 */
  push32(0x121198fbu); f_12116e30();
  /* 121198fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121198fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119901 jne 0x12119904 */
  if (!C.zf) goto L_12119904;
  /* 12119903 int3  */
  x86_unimpl("int3 @ 0x12119903");
L_12119904:;
  /* 12119904 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119906 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119908 jne 0x121198e2 */
  if (!C.zf) goto L_121198e2;
  /* 1211990a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211990d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12119910 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12119916 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119919 jne 0x1211998c */
  if (!C.zf) goto L_1211998c;
L_1211991b:;
  /* 1211991b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211991e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12119921 push ecx */
  push32((uint32_t)(ECX));
  /* 12119922 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119925 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12119928 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1211992b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12119930 push eax */
  push32((uint32_t)(EAX));
  /* 12119931 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119934 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119937 push ecx */
  push32((uint32_t)(ECX));
  /* 12119938 push 0x1213ef20 */
  push32((uint32_t)(0x1213ef20u));
  /* 1211993d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211993f push 0 */
  push32((uint32_t)(0x0u));
  /* 12119941 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119943 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119945 call 0x12116e30 */
  push32(0x1211994au); f_12116e30();
  /* 1211994a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211994d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119950 jne 0x12119953 */
  if (!C.zf) goto L_12119953;
  /* 12119952 int3  */
  x86_unimpl("int3 @ 0x12119952");
L_12119953:;
  /* 12119953 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12119955 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12119957 jne 0x1211991b */
  if (!C.zf) goto L_1211991b;
  /* 12119959 cmp dword ptr [0x12145198], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145198))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119960 je 0x1211997b */
  if (C.zf) goto L_1211997b;
  /* 12119962 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119965 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12119968 push ecx */
  push32((uint32_t)(ECX));
  /* 12119969 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211996c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211996f push edx */
  push32((uint32_t)(EDX));
  /* 12119970 call dword ptr [0x12145198] */
  call_ind((uint32_t)(r32((uint32_t)(0x12145198))), 0x12119976u);
  /* 12119976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119979 jmp 0x12119987 */
  goto L_12119987;
L_1211997b:;
  /* 1211997b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211997e push eax */
  push32((uint32_t)(EAX));
  /* 1211997f call 0x12119a70 */
  push32(0x12119984u); f_12119a70();
  /* 12119984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119987:;
  /* 12119987 jmp 0x12119a2d */
  goto L_12119a2d;
L_1211998c:;
  /* 1211998c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211998f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119993 jne 0x121199d2 */
  if (!C.zf) goto L_121199d2;
L_12119995:;
  /* 12119995 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119998 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1211999b push eax */
  push32((uint32_t)(EAX));
  /* 1211999c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211999f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121199a2 push ecx */
  push32((uint32_t)(ECX));
  /* 121199a3 push 0x1213eef8 */
  push32((uint32_t)(0x1213eef8u));
  /* 121199a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121199aa push 0 */
  push32((uint32_t)(0x0u));
  /* 121199ac push 0 */
  push32((uint32_t)(0x0u));
  /* 121199ae push 0 */
  push32((uint32_t)(0x0u));
  /* 121199b0 call 0x12116e30 */
  push32(0x121199b5u); f_12116e30();
  /* 121199b5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121199b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121199bb jne 0x121199be */
  if (!C.zf) goto L_121199be;
  /* 121199bd int3  */
  x86_unimpl("int3 @ 0x121199bd");
L_121199be:;
  /* 121199be xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121199c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121199c2 jne 0x12119995 */
  if (!C.zf) goto L_12119995;
  /* 121199c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121199c7 push eax */
  push32((uint32_t)(EAX));
  /* 121199c8 call 0x12119a70 */
  push32(0x121199cdu); f_12119a70();
  /* 121199cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121199d0 jmp 0x12119a2d */
  goto L_12119a2d;
L_121199d2:;
  /* 121199d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121199d5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121199d8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121199de cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121199e1 jne 0x12119a2d */
  if (!C.zf) goto L_12119a2d;
L_121199e3:;
  /* 121199e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121199e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 121199e9 push ecx */
  push32((uint32_t)(ECX));
  /* 121199ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121199ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121199f0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 121199f3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121199f8 push eax */
  push32((uint32_t)(EAX));
  /* 121199f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121199fc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121199ff push ecx */
  push32((uint32_t)(ECX));
  /* 12119a00 push 0x1213eec4 */
  push32((uint32_t)(0x1213eec4u));
  /* 12119a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119a09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119a0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12119a0d call 0x12116e30 */
  push32(0x12119a12u); f_12116e30();
  /* 12119a12 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119a15 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119a18 jne 0x12119a1b */
  if (!C.zf) goto L_12119a1b;
  /* 12119a1a int3  */
  x86_unimpl("int3 @ 0x12119a1a");
L_12119a1b:;
  /* 12119a1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12119a1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12119a1f jne 0x121199e3 */
  if (!C.zf) goto L_121199e3;
  /* 12119a21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119a24 push eax */
  push32((uint32_t)(EAX));
  /* 12119a25 call 0x12119a70 */
  push32(0x12119a2au); f_12119a70();
  /* 12119a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119a2d:;
  /* 12119a2d jmp 0x12119808 */
  goto L_12119808;
L_12119a32:;
  /* 12119a32 push 9 */
  push32((uint32_t)(0x9u));
  /* 12119a34 call 0x1211b810 */
  push32(0x12119a39u); f_1211b810();
  /* 12119a39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119a3c:;
  /* 12119a3c push 0x1213eeac */
  push32((uint32_t)(0x1213eeacu));
  /* 12119a41 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12119a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12119a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12119a4e call 0x12116e30 */
  push32(0x12119a53u); f_12116e30();
  /* 12119a53 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119a56 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119a59 jne 0x12119a5c */
  if (!C.zf) goto L_12119a5c;
  /* 12119a5b int3  */
  x86_unimpl("int3 @ 0x12119a5b");
L_12119a5c:;
  /* 12119a5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12119a5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12119a60 jne 0x12119a3c */
  if (!C.zf) goto L_12119a3c;
  /* 12119a62 pop edi */
  EDI = (pop32());
  /* 12119a63 pop esi */
  ESI = (pop32());
  /* 12119a64 pop ebx */
  EBX = (pop32());
  /* 12119a65 mov esp, ebp */
  ESP = (EBP);
  /* 12119a67 pop ebp */
  EBP = (pop32());
  /* 12119a68 ret  */
  ESPCHK(0x121197b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a70 @ 0x12119a70 (276 bytes, 89 insns) */
void f_12119a70(void) {
  FTRACE(0x12119a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12119a71 mov ebp, esp */
  EBP = (ESP);
  /* 12119a73 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119a76 push ebx */
  push32((uint32_t)(EBX));
  /* 12119a77 push esi */
  push32((uint32_t)(ESI));
  /* 12119a78 push edi */
  push32((uint32_t)(EDI));
  /* 12119a79 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 12119a80 jmp 0x12119a8b */
  goto L_12119a8b;
L_12119a82:;
  /* 12119a82 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12119a85 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119a88 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_12119a8b:;
  /* 12119a8b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119a8e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119a92 jge 0x12119a9f */
  if ((C.sf==C.of)) goto L_12119a9f;
  /* 12119a94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119a97 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12119a9a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12119a9d jmp 0x12119aa6 */
  goto L_12119aa6;
L_12119a9f:;
  /* 12119a9f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12119aa6:;
  /* 12119aa6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12119aa9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119aac jge 0x12119b4c */
  if ((C.sf==C.of)) goto L_12119b4c;
  /* 12119ab2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119ab5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119ab8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 12119abb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 12119abe cmp dword ptr [0x12141ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12141ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119ac5 jle 0x12119ae3 */
  if ((C.zf||C.sf!=C.of)) goto L_12119ae3;
  /* 12119ac7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 12119acc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12119acf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12119ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 12119ad6 call 0x1211dd80 */
  push32(0x12119adbu); f_1211dd80();
  /* 12119adb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119ade mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12119ae1 jmp 0x12119b00 */
  goto L_12119b00;
L_12119ae3:;
  /* 12119ae3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12119ae6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12119aec mov eax, dword ptr [0x12141c98] */
  EAX = (r32((uint32_t)(0x12141c98)));
  /* 12119af1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12119af3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12119af7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 12119afd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12119b00:;
  /* 12119b00 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119b04 je 0x12119b14 */
  if (C.zf) goto L_12119b14;
  /* 12119b06 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12119b09 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12119b0f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12119b12 jmp 0x12119b1b */
  goto L_12119b1b;
L_12119b14:;
  /* 12119b14 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_12119b1b:;
  /* 12119b1b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12119b1e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12119b21 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12119b25 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12119b28 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12119b2e push edx */
  push32((uint32_t)(EDX));
  /* 12119b2f push 0x1213efa0 */
  push32((uint32_t)(0x1213efa0u));
  /* 12119b34 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12119b37 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12119b3a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 12119b3e push ecx */
  push32((uint32_t)(ECX));
  /* 12119b3f call 0x1211dc80 */
  push32(0x12119b44u); f_1211dc80();
  /* 12119b44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119b47 jmp 0x12119a82 */
  goto L_12119a82;
L_12119b4c:;
  /* 12119b4c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12119b4f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12119b54:;
  /* 12119b54 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12119b57 push eax */
  push32((uint32_t)(EAX));
  /* 12119b58 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12119b5b push ecx */
  push32((uint32_t)(ECX));
  /* 12119b5c push 0x1213ef90 */
  push32((uint32_t)(0x1213ef90u));
  /* 12119b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119b67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119b69 call 0x12116e30 */
  push32(0x12119b6eu); f_12116e30();
  /* 12119b6e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119b71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119b74 jne 0x12119b77 */
  if (!C.zf) goto L_12119b77;
  /* 12119b76 int3  */
  x86_unimpl("int3 @ 0x12119b76");
L_12119b77:;
  /* 12119b77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12119b79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12119b7b jne 0x12119b54 */
  if (!C.zf) goto L_12119b54;
  /* 12119b7d pop edi */
  EDI = (pop32());
  /* 12119b7e pop esi */
  ESI = (pop32());
  /* 12119b7f pop ebx */
  EBX = (pop32());
  /* 12119b80 mov esp, ebp */
  ESP = (EBP);
  /* 12119b82 pop ebp */
  EBP = (pop32());
  /* 12119b83 ret  */
  ESPCHK(0x12119a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b90 @ 0x12119b90 (116 bytes, 46 insns) */
void f_12119b90(void) {
  FTRACE(0x12119b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12119b91 mov ebp, esp */
  EBP = (ESP);
  /* 12119b93 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119b96 push ebx */
  push32((uint32_t)(EBX));
  /* 12119b97 push esi */
  push32((uint32_t)(ESI));
  /* 12119b98 push edi */
  push32((uint32_t)(EDI));
  /* 12119b99 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12119b9c push eax */
  push32((uint32_t)(EAX));
  /* 12119b9d call 0x12119510 */
  push32(0x12119ba2u); f_12119510();
  /* 12119ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119ba5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119ba9 jne 0x12119bc4 */
  if (!C.zf) goto L_12119bc4;
  /* 12119bab cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119baf jne 0x12119bc4 */
  if (!C.zf) goto L_12119bc4;
  /* 12119bb1 mov ecx, dword ptr [0x12141a84] */
  ECX = (r32((uint32_t)(0x12141a84)));
  /* 12119bb7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12119bba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12119bbc je 0x12119bfb */
  if (C.zf) goto L_12119bfb;
  /* 12119bbe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119bc2 je 0x12119bfb */
  if (C.zf) goto L_12119bfb;
L_12119bc4:;
  /* 12119bc4 push 0x1213efa8 */
  push32((uint32_t)(0x1213efa8u));
  /* 12119bc9 push 0x1213e974 */
  push32((uint32_t)(0x1213e974u));
  /* 12119bce push 0 */
  push32((uint32_t)(0x0u));
  /* 12119bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119bd6 call 0x12116e30 */
  push32(0x12119bdbu); f_12116e30();
  /* 12119bdb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119bde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119be1 jne 0x12119be4 */
  if (!C.zf) goto L_12119be4;
  /* 12119be3 int3  */
  x86_unimpl("int3 @ 0x12119be3");
L_12119be4:;
  /* 12119be4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12119be6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12119be8 jne 0x12119bc4 */
  if (!C.zf) goto L_12119bc4;
  /* 12119bea push 0 */
  push32((uint32_t)(0x0u));
  /* 12119bec call 0x121197b0 */
  push32(0x12119bf1u); f_121197b0();
  /* 12119bf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119bf4 mov eax, 1 */
  EAX = (0x1u);
  /* 12119bf9 jmp 0x12119bfd */
  goto L_12119bfd;
L_12119bfb:;
  /* 12119bfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12119bfd:;
  /* 12119bfd pop edi */
  EDI = (pop32());
  /* 12119bfe pop esi */
  ESI = (pop32());
  /* 12119bff pop ebx */
  EBX = (pop32());
  /* 12119c00 mov esp, ebp */
  ESP = (EBP);
  /* 12119c02 pop ebp */
  EBP = (pop32());
  /* 12119c03 ret  */
  ESPCHK(0x12119b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c10 @ 0x12119c10 (197 bytes, 79 insns) */
void f_12119c10(void) {
  FTRACE(0x12119c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12119c11 mov ebp, esp */
  EBP = (ESP);
  /* 12119c13 push ecx */
  push32((uint32_t)(ECX));
  /* 12119c14 push ebx */
  push32((uint32_t)(EBX));
  /* 12119c15 push esi */
  push32((uint32_t)(ESI));
  /* 12119c16 push edi */
  push32((uint32_t)(EDI));
  /* 12119c17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119c1b jne 0x12119c22 */
  if (!C.zf) goto L_12119c22;
  /* 12119c1d jmp 0x12119cce */
  goto L_12119cce;
L_12119c22:;
  /* 12119c22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12119c29 jmp 0x12119c34 */
  goto L_12119c34;
L_12119c2b:;
  /* 12119c2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119c2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119c31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12119c34:;
  /* 12119c34 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119c38 jge 0x12119c7e */
  if ((C.sf==C.of)) goto L_12119c7e;
L_12119c3a:;
  /* 12119c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119c3d mov edx, dword ptr [ecx*4 + 0x12141a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141a94)));
  /* 12119c44 push edx */
  push32((uint32_t)(EDX));
  /* 12119c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119c48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119c4b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 12119c4f push edx */
  push32((uint32_t)(EDX));
  /* 12119c50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119c53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119c56 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12119c5a push edx */
  push32((uint32_t)(EDX));
  /* 12119c5b push 0x1213f004 */
  push32((uint32_t)(0x1213f004u));
  /* 12119c60 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119c62 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119c64 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119c68 call 0x12116e30 */
  push32(0x12119c6du); f_12116e30();
  /* 12119c6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119c70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119c73 jne 0x12119c76 */
  if (!C.zf) goto L_12119c76;
  /* 12119c75 int3  */
  x86_unimpl("int3 @ 0x12119c75");
L_12119c76:;
  /* 12119c76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119c78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119c7a jne 0x12119c3a */
  if (!C.zf) goto L_12119c3a;
  /* 12119c7c jmp 0x12119c2b */
  goto L_12119c2b;
L_12119c7e:;
  /* 12119c7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119c81 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12119c84 push edx */
  push32((uint32_t)(EDX));
  /* 12119c85 push 0x1213efe0 */
  push32((uint32_t)(0x1213efe0u));
  /* 12119c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12119c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12119c8e push 0 */
  push32((uint32_t)(0x0u));
  /* 12119c90 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119c92 call 0x12116e30 */
  push32(0x12119c97u); f_12116e30();
  /* 12119c97 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119c9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119c9d jne 0x12119ca0 */
  if (!C.zf) goto L_12119ca0;
  /* 12119c9f int3  */
  x86_unimpl("int3 @ 0x12119c9f");
L_12119ca0:;
  /* 12119ca0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119ca4 jne 0x12119c7e */
  if (!C.zf) goto L_12119c7e;
L_12119ca6:;
  /* 12119ca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119ca9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12119cac push edx */
  push32((uint32_t)(EDX));
  /* 12119cad push 0x1213efc0 */
  push32((uint32_t)(0x1213efc0u));
  /* 12119cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119cb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119cb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12119cba call 0x12116e30 */
  push32(0x12119cbfu); f_12116e30();
  /* 12119cbf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119cc2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119cc5 jne 0x12119cc8 */
  if (!C.zf) goto L_12119cc8;
  /* 12119cc7 int3  */
  x86_unimpl("int3 @ 0x12119cc7");
L_12119cc8:;
  /* 12119cc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119ccc jne 0x12119ca6 */
  if (!C.zf) goto L_12119ca6;
L_12119cce:;
  /* 12119cce pop edi */
  EDI = (pop32());
  /* 12119ccf pop esi */
  ESI = (pop32());
  /* 12119cd0 pop ebx */
  EBX = (pop32());
  /* 12119cd1 mov esp, ebp */
  ESP = (EBP);
  /* 12119cd3 pop ebp */
  EBP = (pop32());
  /* 12119cd4 ret  */
  ESPCHK(0x12119c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ce0 @ 0x12119ce0 (329 bytes, 102 insns) */
void f_12119ce0(void) {
  FTRACE(0x12119ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12119ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12119ce3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119ce6 cmp dword ptr [0x12145310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119ced jne 0x12119cf4 */
  if (!C.zf) goto L_12119cf4;
  /* 12119cef call 0x1211e620 */
  push32(0x12119cf4u); f_1211e620();
L_12119cf4:;
  /* 12119cf4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12119cfb mov eax, dword ptr [0x121437d0] */
  EAX = (r32((uint32_t)(0x121437d0)));
  /* 12119d00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12119d03:;
  /* 12119d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119d06 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12119d09 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12119d0b je 0x12119d39 */
  if (C.zf) goto L_12119d39;
  /* 12119d0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119d10 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12119d13 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119d16 je 0x12119d21 */
  if (C.zf) goto L_12119d21;
  /* 12119d18 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119d1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119d1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12119d21:;
  /* 12119d21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119d24 push eax */
  push32((uint32_t)(EAX));
  /* 12119d25 call 0x1211aba0 */
  push32(0x12119d2au); f_1211aba0();
  /* 12119d2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119d30 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12119d34 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12119d37 jmp 0x12119d03 */
  goto L_12119d03;
L_12119d39:;
  /* 12119d39 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12119d3b push 0x1213f024 */
  push32((uint32_t)(0x1213f024u));
  /* 12119d40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12119d42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119d45 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12119d4c push ecx */
  push32((uint32_t)(ECX));
  /* 12119d4d call 0x12117d70 */
  push32(0x12119d52u); f_12117d70();
  /* 12119d52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119d55 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12119d58 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119d5b mov dword ptr [0x12143804], edx */
  w32((uint32_t)(0x12143804), (EDX));
  /* 12119d61 cmp dword ptr [0x12143804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119d68 jne 0x12119d74 */
  if (!C.zf) goto L_12119d74;
  /* 12119d6a push 9 */
  push32((uint32_t)(0x9u));
  /* 12119d6c call 0x12116ce0 */
  push32(0x12119d71u); f_12116ce0();
  /* 12119d71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119d74:;
  /* 12119d74 mov eax, dword ptr [0x121437d0] */
  EAX = (r32((uint32_t)(0x121437d0)));
  /* 12119d79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12119d7c jmp 0x12119d87 */
  goto L_12119d87;
L_12119d7e:;
  /* 12119d7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119d81 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119d84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12119d87:;
  /* 12119d87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119d8a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12119d8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119d8f je 0x12119df7 */
  if (C.zf) goto L_12119df7;
  /* 12119d91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119d94 push ecx */
  push32((uint32_t)(ECX));
  /* 12119d95 call 0x1211aba0 */
  push32(0x12119d9au); f_1211aba0();
  /* 12119d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119d9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119da0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12119da3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119da6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12119da9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119dac je 0x12119df5 */
  if (C.zf) goto L_12119df5;
  /* 12119dae push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12119db0 push 0x1213f024 */
  push32((uint32_t)(0x1213f024u));
  /* 12119db5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12119db7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12119dba push ecx */
  push32((uint32_t)(ECX));
  /* 12119dbb call 0x12117d70 */
  push32(0x12119dc0u); f_12117d70();
  /* 12119dc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119dc3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119dc6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12119dc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119dcb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119dce jne 0x12119dda */
  if (!C.zf) goto L_12119dda;
  /* 12119dd0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12119dd2 call 0x12116ce0 */
  push32(0x12119dd7u); f_12116ce0();
  /* 12119dd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119dda:;
  /* 12119dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119ddd push ecx */
  push32((uint32_t)(ECX));
  /* 12119dde mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119de1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12119de3 push eax */
  push32((uint32_t)(EAX));
  /* 12119de4 call 0x1211ad20 */
  push32(0x12119de9u); f_1211ad20();
  /* 12119de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119dec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119def add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119df2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12119df5:;
  /* 12119df5 jmp 0x12119d7e */
  goto L_12119d7e;
L_12119df7:;
  /* 12119df7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12119df9 mov edx, dword ptr [0x121437d0] */
  EDX = (r32((uint32_t)(0x121437d0)));
  /* 12119dff push edx */
  push32((uint32_t)(EDX));
  /* 12119e00 call 0x12118800 */
  push32(0x12119e05u); f_12118800();
  /* 12119e05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119e08 mov dword ptr [0x121437d0], 0 */
  w32((uint32_t)(0x121437d0), (0x0u));
  /* 12119e12 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119e15 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12119e1b mov dword ptr [0x12145300], 1 */
  w32((uint32_t)(0x12145300), (0x1u));
  /* 12119e25 mov esp, ebp */
  ESP = (EBP);
  /* 12119e27 pop ebp */
  EBP = (pop32());
  /* 12119e28 ret  */
  ESPCHK(0x12119ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e30 @ 0x12119e30 (216 bytes, 69 insns) */
void f_12119e30(void) {
  FTRACE(0x12119e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12119e31 mov ebp, esp */
  EBP = (ESP);
  /* 12119e33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119e36 cmp dword ptr [0x12145310], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12145310))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119e3d jne 0x12119e44 */
  if (!C.zf) goto L_12119e44;
  /* 12119e3f call 0x1211e620 */
  push32(0x12119e44u); f_1211e620();
L_12119e44:;
  /* 12119e44 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12119e49 push 0x12143840 */
  push32((uint32_t)(0x12143840u));
  /* 12119e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12119e50 call dword ptr [0x121462e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462e0))), 0x12119e56u);
  /* 12119e56 mov dword ptr [0x12143814], 0x12143840 */
  w32((uint32_t)(0x12143814), (0x12143840u));
  /* 12119e60 mov eax, dword ptr [0x1214532c] */
  EAX = (r32((uint32_t)(0x1214532c)));
  /* 12119e65 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12119e68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12119e6a jne 0x12119e77 */
  if (!C.zf) goto L_12119e77;
  /* 12119e6c mov edx, dword ptr [0x12143814] */
  EDX = (r32((uint32_t)(0x12143814)));
  /* 12119e72 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12119e75 jmp 0x12119e7f */
  goto L_12119e7f;
L_12119e77:;
  /* 12119e77 mov eax, dword ptr [0x1214532c] */
  EAX = (r32((uint32_t)(0x1214532c)));
  /* 12119e7c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12119e7f:;
  /* 12119e7f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12119e82 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12119e85 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12119e88 push edx */
  push32((uint32_t)(EDX));
  /* 12119e89 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12119e8c push eax */
  push32((uint32_t)(EAX));
  /* 12119e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12119e8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12119e91 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12119e94 push ecx */
  push32((uint32_t)(ECX));
  /* 12119e95 call 0x12119f10 */
  push32(0x12119e9au); f_12119f10();
  /* 12119e9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119e9d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12119ea2 push 0x1213f030 */
  push32((uint32_t)(0x1213f030u));
  /* 12119ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12119ea9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119eac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119eaf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12119eb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12119eb3 call 0x12117d70 */
  push32(0x12119eb8u); f_12117d70();
  /* 12119eb8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119ebb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12119ebe cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119ec2 jne 0x12119ece */
  if (!C.zf) goto L_12119ece;
  /* 12119ec4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12119ec6 call 0x12116ce0 */
  push32(0x12119ecbu); f_12116ce0();
  /* 12119ecb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12119ece:;
  /* 12119ece lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12119ed1 push edx */
  push32((uint32_t)(EDX));
  /* 12119ed2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12119ed5 push eax */
  push32((uint32_t)(EAX));
  /* 12119ed6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119ed9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119edc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12119edf push eax */
  push32((uint32_t)(EAX));
  /* 12119ee0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 12119ee4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12119ee7 push edx */
  push32((uint32_t)(EDX));
  /* 12119ee8 call 0x12119f10 */
  push32(0x12119eedu); f_12119f10();
  /* 12119eed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12119ef0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12119ef3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119ef6 mov dword ptr [0x121437f8], eax */
  w32((uint32_t)(0x121437f8), (EAX));
  /* 12119efb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12119efe mov dword ptr [0x121437fc], ecx */
  w32((uint32_t)(0x121437fc), (ECX));
  /* 12119f04 mov esp, ebp */
  ESP = (EBP);
  /* 12119f06 pop ebp */
  EBP = (pop32());
  /* 12119f07 ret  */
  ESPCHK(0x12119e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f10 @ 0x12119f10 (1060 bytes, 360 insns) */
void f_12119f10(void) {
  FTRACE(0x12119f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12119f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12119f11 mov ebp, esp */
  EBP = (ESP);
  /* 12119f13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12119f16 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12119f19 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12119f1f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12119f22 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12119f28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12119f2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12119f2e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119f32 je 0x12119f45 */
  if (C.zf) goto L_12119f45;
  /* 12119f34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12119f37 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119f3a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12119f3c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12119f3f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119f42 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12119f45:;
  /* 12119f45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119f48 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12119f4b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119f4e jne 0x1211a01d */
  if (!C.zf) goto L_1211a01d;
L_12119f54:;
  /* 12119f54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119f57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119f5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12119f5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119f60 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12119f63 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119f66 je 0x12119fe2 */
  if (C.zf) goto L_12119fe2;
  /* 12119f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119f6b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12119f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119f70 je 0x12119fe2 */
  if (C.zf) goto L_12119fe2;
  /* 12119f72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119f75 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12119f77 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12119f79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12119f7b mov al, byte ptr [edx + 0x12145061] */
  AL = (r8((uint32_t)(EDX + 0x12145061)));
  /* 12119f81 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12119f84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12119f86 je 0x12119fb7 */
  if (C.zf) goto L_12119fb7;
  /* 12119f88 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12119f8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12119f8d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119f90 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12119f93 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12119f95 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119f99 je 0x12119fb7 */
  if (C.zf) goto L_12119fb7;
  /* 12119f9b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119f9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119fa1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12119fa3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12119fa5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119fa8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119fab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12119fae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119fb1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119fb4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12119fb7:;
  /* 12119fb7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12119fba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12119fbc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119fbf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12119fc2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12119fc4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119fc8 je 0x12119fdd */
  if (C.zf) goto L_12119fdd;
  /* 12119fca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119fcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12119fd0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12119fd2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12119fd4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119fd7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119fda mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12119fdd:;
  /* 12119fdd jmp 0x12119f54 */
  goto L_12119f54;
L_12119fe2:;
  /* 12119fe2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12119fe5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12119fe7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12119fea mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12119fed mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12119fef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12119ff3 je 0x1211a004 */
  if (C.zf) goto L_1211a004;
  /* 12119ff5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119ff8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12119ffb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12119ffe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a001 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1211a004:;
  /* 1211a004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a007 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1211a00a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a00d jne 0x1211a018 */
  if (!C.zf) goto L_1211a018;
  /* 1211a00f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a012 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a015 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211a018:;
  /* 1211a018 jmp 0x1211a0ec */
  goto L_1211a0ec;
L_1211a01d:;
  /* 1211a01d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a020 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211a022 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a025 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a028 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1211a02a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a02e je 0x1211a043 */
  if (C.zf) goto L_1211a043;
  /* 1211a030 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a036 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211a038 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1211a03a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a03d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a040 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1211a043:;
  /* 1211a043 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a046 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211a048 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1211a04b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a04e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a051 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211a054 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a057 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211a05d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211a05f mov dl, byte ptr [ecx + 0x12145061] */
  DL = (r8((uint32_t)(ECX + 0x12145061)));
  /* 1211a065 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1211a068 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211a06a je 0x1211a09b */
  if (C.zf) goto L_1211a09b;
  /* 1211a06c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a06f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211a071 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a074 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a077 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1211a079 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a07d je 0x1211a092 */
  if (C.zf) goto L_1211a092;
  /* 1211a07f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a082 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a085 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211a087 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1211a089 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a08c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a08f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1211a092:;
  /* 1211a092 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a095 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a098 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1211a09b:;
  /* 1211a09b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a09e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1211a0a4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a0a7 je 0x1211a0c7 */
  if (C.zf) goto L_1211a0c7;
  /* 1211a0a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a0ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211a0b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211a0b3 je 0x1211a0c7 */
  if (C.zf) goto L_1211a0c7;
  /* 1211a0b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a0b8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211a0be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a0c1 jne 0x1211a01d */
  if (!C.zf) goto L_1211a01d;
L_1211a0c7:;
  /* 1211a0c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a0ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1211a0d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211a0d2 jne 0x1211a0df */
  if (!C.zf) goto L_1211a0df;
  /* 1211a0d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a0d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a0da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211a0dd jmp 0x1211a0ec */
  goto L_1211a0ec;
L_1211a0df:;
  /* 1211a0df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a0e3 je 0x1211a0ec */
  if (C.zf) goto L_1211a0ec;
  /* 1211a0e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a0e8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1211a0ec:;
  /* 1211a0ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1211a0f3:;
  /* 1211a0f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a0f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1211a0f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211a0fb je 0x1211a11e */
  if (C.zf) goto L_1211a11e;
L_1211a0fd:;
  /* 1211a0fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a100 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1211a103 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a106 je 0x1211a113 */
  if (C.zf) goto L_1211a113;
  /* 1211a108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a10b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1211a10e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a111 jne 0x1211a11e */
  if (!C.zf) goto L_1211a11e;
L_1211a113:;
  /* 1211a113 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a116 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a119 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211a11c jmp 0x1211a0fd */
  goto L_1211a0fd;
L_1211a11e:;
  /* 1211a11e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a121 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1211a124 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211a126 jne 0x1211a12d */
  if (!C.zf) goto L_1211a12d;
  /* 1211a128 jmp 0x1211a30b */
  goto L_1211a30b;
L_1211a12d:;
  /* 1211a12d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a131 je 0x1211a144 */
  if (C.zf) goto L_1211a144;
  /* 1211a133 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a136 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a139 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1211a13b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a13e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a141 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1211a144:;
  /* 1211a144 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211a147 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211a149 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a14c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211a14f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1211a151:;
  /* 1211a151 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1211a158 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1211a15f:;
  /* 1211a15f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a162 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1211a165 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a168 jne 0x1211a17e */
  if (!C.zf) goto L_1211a17e;
  /* 1211a16a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a16d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a170 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211a173 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a176 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a179 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1211a17c jmp 0x1211a15f */
  goto L_1211a15f;
L_1211a17e:;
  /* 1211a17e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a181 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1211a184 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a187 jne 0x1211a1da */
  if (!C.zf) goto L_1211a1da;
  /* 1211a189 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a18c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211a18e mov ecx, 2 */
  ECX = (0x2u);
  /* 1211a193 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211a195 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211a197 jne 0x1211a1d2 */
  if (!C.zf) goto L_1211a1d2;
  /* 1211a199 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a19d je 0x1211a1bf */
  if (C.zf) goto L_1211a1bf;
  /* 1211a19f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a1a2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1211a1a6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a1a9 jne 0x1211a1b6 */
  if (!C.zf) goto L_1211a1b6;
  /* 1211a1ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a1ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a1b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211a1b4 jmp 0x1211a1bd */
  goto L_1211a1bd;
L_1211a1b6:;
  /* 1211a1b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1211a1bd:;
  /* 1211a1bd jmp 0x1211a1c6 */
  goto L_1211a1c6;
L_1211a1bf:;
  /* 1211a1bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1211a1c6:;
  /* 1211a1c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211a1c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a1cc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1211a1cf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1211a1d2:;
  /* 1211a1d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a1d5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1211a1d7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1211a1da:;
  /* 1211a1da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a1dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a1e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a1e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1211a1e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211a1e8 je 0x1211a20e */
  if (C.zf) goto L_1211a20e;
  /* 1211a1ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a1ee je 0x1211a1ff */
  if (C.zf) goto L_1211a1ff;
  /* 1211a1f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a1f3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 1211a1f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a1f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a1fc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1211a1ff:;
  /* 1211a1ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a202 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211a204 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a207 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a20a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1211a20c jmp 0x1211a1da */
  goto L_1211a1da;
L_1211a20e:;
  /* 1211a20e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a211 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1211a214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211a216 je 0x1211a234 */
  if (C.zf) goto L_1211a234;
  /* 1211a218 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a21c jne 0x1211a239 */
  if (!C.zf) goto L_1211a239;
  /* 1211a21e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a221 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1211a224 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a227 je 0x1211a234 */
  if (C.zf) goto L_1211a234;
  /* 1211a229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a22c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1211a22f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a232 jne 0x1211a239 */
  if (!C.zf) goto L_1211a239;
L_1211a234:;
  /* 1211a234 jmp 0x1211a2e4 */
  goto L_1211a2e4;
L_1211a239:;
  /* 1211a239 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a23d je 0x1211a2d6 */
  if (C.zf) goto L_1211a2d6;
  /* 1211a243 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a247 je 0x1211a29d */
  if (C.zf) goto L_1211a29d;
  /* 1211a249 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a24c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a24e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1211a250 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211a252 mov cl, byte ptr [eax + 0x12145061] */
  CL = (r8((uint32_t)(EAX + 0x12145061)));
  /* 1211a258 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1211a25b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211a25d je 0x1211a288 */
  if (C.zf) goto L_1211a288;
  /* 1211a25f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a262 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a265 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1211a267 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1211a269 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a26c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a26f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 1211a272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a275 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a278 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211a27b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a27e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211a280 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a283 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a286 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1211a288:;
  /* 1211a288 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a28b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a28e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1211a290 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1211a292 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a295 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a298 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1211a29b jmp 0x1211a2c9 */
  goto L_1211a2c9;
L_1211a29d:;
  /* 1211a29d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a2a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a2a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1211a2a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211a2a6 mov cl, byte ptr [eax + 0x12145061] */
  CL = (r8((uint32_t)(EAX + 0x12145061)));
  /* 1211a2ac and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1211a2af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211a2b1 je 0x1211a2c9 */
  if (C.zf) goto L_1211a2c9;
  /* 1211a2b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a2b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a2b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211a2bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a2bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211a2c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a2c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a2c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1211a2c9:;
  /* 1211a2c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a2cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211a2ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a2d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a2d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1211a2d6:;
  /* 1211a2d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a2d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a2dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211a2df jmp 0x1211a151 */
  goto L_1211a151;
L_1211a2e4:;
  /* 1211a2e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a2e8 je 0x1211a2f9 */
  if (C.zf) goto L_1211a2f9;
  /* 1211a2ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a2ed mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1211a2f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a2f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a2f6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_1211a2f9:;
  /* 1211a2f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a2fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211a2fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a301 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1211a304 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1211a306 jmp 0x1211a0f3 */
  goto L_1211a0f3;
L_1211a30b:;
  /* 1211a30b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a30f je 0x1211a323 */
  if (C.zf) goto L_1211a323;
  /* 1211a311 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a314 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1211a31a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a31d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a320 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1211a323:;
  /* 1211a323 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211a326 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211a328 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a32b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211a32e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1211a330 mov esp, ebp */
  ESP = (EBP);
  /* 1211a332 pop ebp */
  EBP = (pop32());
  /* 1211a333 ret  */
  ESPCHK(0x12119f10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a340 @ 0x1211a340 (537 bytes, 173 insns) */
void f_1211a340(void) {
  FTRACE(0x1211a340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a340 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a341 mov ebp, esp */
  EBP = (ESP);
  /* 1211a343 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a346 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1211a34d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1211a354 cmp dword ptr [0x12143944], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143944))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a35b jne 0x1211a39a */
  if (!C.zf) goto L_1211a39a;
  /* 1211a35d call dword ptr [0x12146388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146388))), 0x1211a363u);
  /* 1211a363 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1211a366 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a36a je 0x1211a378 */
  if (C.zf) goto L_1211a378;
  /* 1211a36c mov dword ptr [0x12143944], 1 */
  w32((uint32_t)(0x12143944), (0x1u));
  /* 1211a376 jmp 0x1211a39a */
  goto L_1211a39a;
L_1211a378:;
  /* 1211a378 call dword ptr [0x12146380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146380))), 0x1211a37eu);
  /* 1211a37e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211a381 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a385 je 0x1211a393 */
  if (C.zf) goto L_1211a393;
  /* 1211a387 mov dword ptr [0x12143944], 2 */
  w32((uint32_t)(0x12143944), (0x2u));
  /* 1211a391 jmp 0x1211a39a */
  goto L_1211a39a;
L_1211a393:;
  /* 1211a393 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a395 jmp 0x1211a555 */
  goto L_1211a555;
L_1211a39a:;
  /* 1211a39a cmp dword ptr [0x12143944], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12143944))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a3a1 jne 0x1211a49e */
  if (!C.zf) goto L_1211a49e;
  /* 1211a3a7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a3ab jne 0x1211a3c3 */
  if (!C.zf) goto L_1211a3c3;
  /* 1211a3ad call dword ptr [0x12146388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146388))), 0x1211a3b3u);
  /* 1211a3b3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1211a3b6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a3ba jne 0x1211a3c3 */
  if (!C.zf) goto L_1211a3c3;
  /* 1211a3bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a3be jmp 0x1211a555 */
  goto L_1211a555;
L_1211a3c3:;
  /* 1211a3c3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211a3c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1211a3c9:;
  /* 1211a3c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a3cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211a3ce mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1211a3d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211a3d3 je 0x1211a3f5 */
  if (C.zf) goto L_1211a3f5;
  /* 1211a3d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a3d8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a3db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211a3de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a3e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211a3e3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1211a3e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211a3e8 jne 0x1211a3f3 */
  if (!C.zf) goto L_1211a3f3;
  /* 1211a3ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a3ed add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a3f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1211a3f3:;
  /* 1211a3f3 jmp 0x1211a3c9 */
  goto L_1211a3c9;
L_1211a3f5:;
  /* 1211a3f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a3f8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a3fb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1211a3fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a400 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211a403 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a405 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a407 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a409 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a40b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a40e push edx */
  push32((uint32_t)(EDX));
  /* 1211a40f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211a412 push eax */
  push32((uint32_t)(EAX));
  /* 1211a413 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a415 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a417 call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x1211a41du);
  /* 1211a41d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211a420 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a424 je 0x1211a444 */
  if (C.zf) goto L_1211a444;
  /* 1211a426 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1211a428 push 0x1213f03c */
  push32((uint32_t)(0x1213f03cu));
  /* 1211a42d push 2 */
  push32((uint32_t)(0x2u));
  /* 1211a42f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a432 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a433 call 0x12117d70 */
  push32(0x1211a438u); f_12117d70();
  /* 1211a438 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a43b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211a43e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a442 jne 0x1211a455 */
  if (!C.zf) goto L_1211a455;
L_1211a444:;
  /* 1211a444 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211a447 push edx */
  push32((uint32_t)(EDX));
  /* 1211a448 call dword ptr [0x12146394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146394))), 0x1211a44eu);
  /* 1211a44e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a450 jmp 0x1211a555 */
  goto L_1211a555;
L_1211a455:;
  /* 1211a455 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a457 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a459 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a45c push eax */
  push32((uint32_t)(EAX));
  /* 1211a45d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211a460 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a461 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a464 push edx */
  push32((uint32_t)(EDX));
  /* 1211a465 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211a468 push eax */
  push32((uint32_t)(EAX));
  /* 1211a469 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a46b push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a46d call dword ptr [0x12146384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146384))), 0x1211a473u);
  /* 1211a473 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211a475 jne 0x1211a48c */
  if (!C.zf) goto L_1211a48c;
  /* 1211a477 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211a479 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211a47c push ecx */
  push32((uint32_t)(ECX));
  /* 1211a47d call 0x12118800 */
  push32(0x1211a482u); f_12118800();
  /* 1211a482 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a485 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1211a48c:;
  /* 1211a48c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211a48f push edx */
  push32((uint32_t)(EDX));
  /* 1211a490 call dword ptr [0x12146394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146394))), 0x1211a496u);
  /* 1211a496 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211a499 jmp 0x1211a555 */
  goto L_1211a555;
L_1211a49e:;
  /* 1211a49e cmp dword ptr [0x12143944], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12143944))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a4a5 jne 0x1211a553 */
  if (!C.zf) goto L_1211a553;
  /* 1211a4ab cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a4af jne 0x1211a4c7 */
  if (!C.zf) goto L_1211a4c7;
  /* 1211a4b1 call dword ptr [0x12146380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146380))), 0x1211a4b7u);
  /* 1211a4b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211a4ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a4be jne 0x1211a4c7 */
  if (!C.zf) goto L_1211a4c7;
  /* 1211a4c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a4c2 jmp 0x1211a555 */
  goto L_1211a555;
L_1211a4c7:;
  /* 1211a4c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211a4ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1211a4cd:;
  /* 1211a4cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a4d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1211a4d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211a4d5 je 0x1211a4f5 */
  if (C.zf) goto L_1211a4f5;
  /* 1211a4d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a4da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a4dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211a4e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a4e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1211a4e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211a4e8 jne 0x1211a4f3 */
  if (!C.zf) goto L_1211a4f3;
  /* 1211a4ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a4ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a4f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1211a4f3:;
  /* 1211a4f3 jmp 0x1211a4cd */
  goto L_1211a4cd;
L_1211a4f5:;
  /* 1211a4f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a4f8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a4fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a4fe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1211a501 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 1211a506 push 0x1213f03c */
  push32((uint32_t)(0x1213f03cu));
  /* 1211a50b push 2 */
  push32((uint32_t)(0x2u));
  /* 1211a50d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a510 push edx */
  push32((uint32_t)(EDX));
  /* 1211a511 call 0x12117d70 */
  push32(0x1211a516u); f_12117d70();
  /* 1211a516 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a519 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211a51c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a520 jne 0x1211a530 */
  if (!C.zf) goto L_1211a530;
  /* 1211a522 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211a525 push eax */
  push32((uint32_t)(EAX));
  /* 1211a526 call dword ptr [0x1214638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214638c))), 0x1211a52cu);
  /* 1211a52c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a52e jmp 0x1211a555 */
  goto L_1211a555;
L_1211a530:;
  /* 1211a530 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211a533 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a534 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211a537 push edx */
  push32((uint32_t)(EDX));
  /* 1211a538 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a53b push eax */
  push32((uint32_t)(EAX));
  /* 1211a53c call 0x1211e650 */
  push32(0x1211a541u); f_1211e650();
  /* 1211a541 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a544 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211a547 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a548 call dword ptr [0x1214638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214638c))), 0x1211a54eu);
  /* 1211a54e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a551 jmp 0x1211a555 */
  goto L_1211a555;
L_1211a553:;
  /* 1211a553 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211a555:;
  /* 1211a555 mov esp, ebp */
  ESP = (EBP);
  /* 1211a557 pop ebp */
  EBP = (pop32());
  /* 1211a558 ret  */
  ESPCHK(0x1211a340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a560 @ 0x1211a560 (77 bytes, 25 insns) */
void f_1211a560(void) {
  FTRACE(0x1211a560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a560 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a561 mov ebp, esp */
  EBP = (ESP);
  /* 1211a563 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a565 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1211a56a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a56c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a570 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 1211a573 push eax */
  push32((uint32_t)(EAX));
  /* 1211a574 call dword ptr [0x12146374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146374))), 0x1211a57au);
  /* 1211a57a mov dword ptr [0x1214518c], eax */
  w32((uint32_t)(0x1214518c), (EAX));
  /* 1211a57f cmp dword ptr [0x1214518c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214518c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a586 jne 0x1211a58c */
  if (!C.zf) goto L_1211a58c;
  /* 1211a588 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a58a jmp 0x1211a5ab */
  goto L_1211a5ab;
L_1211a58c:;
  /* 1211a58c call 0x1211c010 */
  push32(0x1211a591u); f_1211c010();
  /* 1211a591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211a593 jne 0x1211a5a6 */
  if (!C.zf) goto L_1211a5a6;
  /* 1211a595 mov ecx, dword ptr [0x1214518c] */
  ECX = (r32((uint32_t)(0x1214518c)));
  /* 1211a59b push ecx */
  push32((uint32_t)(ECX));
  /* 1211a59c call dword ptr [0x12146378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146378))), 0x1211a5a2u);
  /* 1211a5a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211a5a4 jmp 0x1211a5ab */
  goto L_1211a5ab;
L_1211a5a6:;
  /* 1211a5a6 mov eax, 1 */
  EAX = (0x1u);
L_1211a5ab:;
  /* 1211a5ab pop ebp */
  EBP = (pop32());
  /* 1211a5ac ret  */
  ESPCHK(0x1211a560u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5b0 @ 0x1211a5b0 (156 bytes, 48 insns) */
void f_1211a5b0(void) {
  FTRACE(0x1211a5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1211a5b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a5b6 mov eax, dword ptr [0x12145188] */
  EAX = (r32((uint32_t)(0x12145188)));
  /* 1211a5bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211a5be mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211a5c5 jmp 0x1211a5d0 */
  goto L_1211a5d0;
L_1211a5c7:;
  /* 1211a5c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a5ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a5cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1211a5d0:;
  /* 1211a5d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a5d3 cmp edx, dword ptr [0x12145184] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12145184))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a5d9 jge 0x1211a626 */
  if ((C.sf==C.of)) goto L_1211a626;
  /* 1211a5db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1211a5e0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1211a5e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a5e8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1211a5eb push ecx */
  push32((uint32_t)(ECX));
  /* 1211a5ec call dword ptr [0x1214636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214636c))), 0x1211a5f2u);
  /* 1211a5f2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1211a5f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a5f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a5fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1211a5ff push eax */
  push32((uint32_t)(EAX));
  /* 1211a600 call dword ptr [0x1214636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214636c))), 0x1211a606u);
  /* 1211a606 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a609 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1211a60c push edx */
  push32((uint32_t)(EDX));
  /* 1211a60d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a60f mov eax, dword ptr [0x1214518c] */
  EAX = (r32((uint32_t)(0x1214518c)));
  /* 1211a614 push eax */
  push32((uint32_t)(EAX));
  /* 1211a615 call dword ptr [0x1214637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214637c))), 0x1211a61bu);
  /* 1211a61b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a61e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a621 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211a624 jmp 0x1211a5c7 */
  goto L_1211a5c7;
L_1211a626:;
  /* 1211a626 mov edx, dword ptr [0x12145188] */
  EDX = (r32((uint32_t)(0x12145188)));
  /* 1211a62c push edx */
  push32((uint32_t)(EDX));
  /* 1211a62d push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a62f mov eax, dword ptr [0x1214518c] */
  EAX = (r32((uint32_t)(0x1214518c)));
  /* 1211a634 push eax */
  push32((uint32_t)(EAX));
  /* 1211a635 call dword ptr [0x1214637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214637c))), 0x1211a63bu);
  /* 1211a63b mov ecx, dword ptr [0x1214518c] */
  ECX = (r32((uint32_t)(0x1214518c)));
  /* 1211a641 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a642 call dword ptr [0x12146378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146378))), 0x1211a648u);
  /* 1211a648 mov esp, ebp */
  ESP = (EBP);
  /* 1211a64a pop ebp */
  EBP = (pop32());
  /* 1211a64b ret  */
  ESPCHK(0x1211a5b0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x1211a650 (73 bytes, 19 insns) */
void f_1211a650(void) {
  FTRACE(0x1211a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a650 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a651 mov ebp, esp */
  EBP = (ESP);
  /* 1211a653 cmp dword ptr [0x121437d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121437d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a65a je 0x1211a66e */
  if (C.zf) goto L_1211a66e;
  /* 1211a65c cmp dword ptr [0x121437d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121437d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a663 jne 0x1211a697 */
  if (!C.zf) goto L_1211a697;
  /* 1211a665 cmp dword ptr [0x121437dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121437dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a66c jne 0x1211a697 */
  if (!C.zf) goto L_1211a697;
L_1211a66e:;
  /* 1211a66e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 1211a673 call 0x1211a6a0 */
  push32(0x1211a678u); f_1211a6a0();
  /* 1211a678 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a67b cmp dword ptr [0x12143948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a682 je 0x1211a68a */
  if (C.zf) goto L_1211a68a;
  /* 1211a684 call dword ptr [0x12143948] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143948))), 0x1211a68au);
L_1211a68a:;
  /* 1211a68a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1211a68f call 0x1211a6a0 */
  push32(0x1211a694u); f_1211a6a0();
  /* 1211a694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211a697:;
  /* 1211a697 pop ebp */
  EBP = (pop32());
  /* 1211a698 ret  */
  ESPCHK(0x1211a650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6a0 @ 0x1211a6a0 (447 bytes, 131 insns) */
void f_1211a6a0(void) {
  FTRACE(0x1211a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1211a6a3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a6a9 push ebx */
  push32((uint32_t)(EBX));
  /* 1211a6aa push esi */
  push32((uint32_t)(ESI));
  /* 1211a6ab push edi */
  push32((uint32_t)(EDI));
  /* 1211a6ac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1211a6b3 jmp 0x1211a6be */
  goto L_1211a6be;
L_1211a6b5:;
  /* 1211a6b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a6b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a6bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1211a6be:;
  /* 1211a6be cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a6c2 jae 0x1211a6d7 */
  if (!C.cf) goto L_1211a6d7;
  /* 1211a6c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a6c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a6ca cmp edx, dword ptr [ecx*8 + 0x12141ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12141ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a6d1 jne 0x1211a6d5 */
  if (!C.zf) goto L_1211a6d5;
  /* 1211a6d3 jmp 0x1211a6d7 */
  goto L_1211a6d7;
L_1211a6d5:;
  /* 1211a6d5 jmp 0x1211a6b5 */
  goto L_1211a6b5;
L_1211a6d7:;
  /* 1211a6d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a6da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a6dd cmp ecx, dword ptr [eax*8 + 0x12141ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12141ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a6e4 jne 0x1211a858 */
  if (!C.zf) goto L_1211a858;
  /* 1211a6ea cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a6f1 je 0x1211a714 */
  if (C.zf) goto L_1211a714;
  /* 1211a6f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a6f6 mov eax, dword ptr [edx*8 + 0x12141ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12141ab4)));
  /* 1211a6fd push eax */
  push32((uint32_t)(EAX));
  /* 1211a6fe push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a700 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a702 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a704 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211a706 call 0x12116e30 */
  push32(0x1211a70bu); f_12116e30();
  /* 1211a70b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a70e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a711 jne 0x1211a714 */
  if (!C.zf) goto L_1211a714;
  /* 1211a713 int3  */
  x86_unimpl("int3 @ 0x1211a713");
L_1211a714:;
  /* 1211a714 cmp dword ptr [0x121437d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121437d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a71b je 0x1211a72f */
  if (C.zf) goto L_1211a72f;
  /* 1211a71d cmp dword ptr [0x121437d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121437d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a724 jne 0x1211a768 */
  if (!C.zf) goto L_1211a768;
  /* 1211a726 cmp dword ptr [0x121437dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121437dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a72d jne 0x1211a768 */
  if (!C.zf) goto L_1211a768;
L_1211a72f:;
  /* 1211a72f push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a731 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1211a734 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a735 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a738 mov eax, dword ptr [edx*8 + 0x12141ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12141ab4)));
  /* 1211a73f push eax */
  push32((uint32_t)(EAX));
  /* 1211a740 call 0x1211aba0 */
  push32(0x1211a745u); f_1211aba0();
  /* 1211a745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a748 push eax */
  push32((uint32_t)(EAX));
  /* 1211a749 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a74c mov edx, dword ptr [ecx*8 + 0x12141ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x12141ab4)));
  /* 1211a753 push edx */
  push32((uint32_t)(EDX));
  /* 1211a754 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1211a756 call dword ptr [0x121463b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463b8))), 0x1211a75cu);
  /* 1211a75c push eax */
  push32((uint32_t)(EAX));
  /* 1211a75d call dword ptr [0x121463bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463bc))), 0x1211a763u);
  /* 1211a763 jmp 0x1211a858 */
  goto L_1211a858;
L_1211a768:;
  /* 1211a768 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a76f je 0x1211a858 */
  if (C.zf) goto L_1211a858;
  /* 1211a775 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1211a77a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 1211a780 push eax */
  push32((uint32_t)(EAX));
  /* 1211a781 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a783 call dword ptr [0x121462e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462e0))), 0x1211a789u);
  /* 1211a789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211a78b jne 0x1211a7a1 */
  if (!C.zf) goto L_1211a7a1;
  /* 1211a78d push 0x1213e8a4 */
  push32((uint32_t)(0x1213e8a4u));
  /* 1211a792 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1211a798 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a799 call 0x1211ad20 */
  push32(0x1211a79eu); f_1211ad20();
  /* 1211a79e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211a7a1:;
  /* 1211a7a1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 1211a7a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1211a7aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a7ad push eax */
  push32((uint32_t)(EAX));
  /* 1211a7ae call 0x1211aba0 */
  push32(0x1211a7b3u); f_1211aba0();
  /* 1211a7b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a7b6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a7b9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a7bc jbe 0x1211a7ea */
  if ((C.cf||C.zf)) goto L_1211a7ea;
  /* 1211a7be lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 1211a7c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a7c5 call 0x1211aba0 */
  push32(0x1211a7cau); f_1211aba0();
  /* 1211a7ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a7cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a7d0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 1211a7d4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211a7d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 1211a7d9 push 0x1213e8a0 */
  push32((uint32_t)(0x1213e8a0u));
  /* 1211a7de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a7e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a7e2 call 0x1211b590 */
  push32(0x1211a7e7u); f_1211b590();
  /* 1211a7e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211a7ea:;
  /* 1211a7ea push 0x1213f2f8 */
  push32((uint32_t)(0x1213f2f8u));
  /* 1211a7ef lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1211a7f5 push edx */
  push32((uint32_t)(EDX));
  /* 1211a7f6 call 0x1211ad20 */
  push32(0x1211a7fbu); f_1211ad20();
  /* 1211a7fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a7fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a801 push eax */
  push32((uint32_t)(EAX));
  /* 1211a802 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 1211a808 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a809 call 0x1211ad30 */
  push32(0x1211a80eu); f_1211ad30();
  /* 1211a80e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a811 push 0x1213e818 */
  push32((uint32_t)(0x1213e818u));
  /* 1211a816 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1211a81c push edx */
  push32((uint32_t)(EDX));
  /* 1211a81d call 0x1211ad30 */
  push32(0x1211a822u); f_1211ad30();
  /* 1211a822 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a825 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a828 mov ecx, dword ptr [eax*8 + 0x12141ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x12141ab4)));
  /* 1211a82f push ecx */
  push32((uint32_t)(ECX));
  /* 1211a830 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1211a836 push edx */
  push32((uint32_t)(EDX));
  /* 1211a837 call 0x1211ad30 */
  push32(0x1211a83cu); f_1211ad30();
  /* 1211a83c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a83f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 1211a844 push 0x1213f2d0 */
  push32((uint32_t)(0x1213f2d0u));
  /* 1211a849 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1211a84f push eax */
  push32((uint32_t)(EAX));
  /* 1211a850 call 0x1211b4d0 */
  push32(0x1211a855u); f_1211b4d0();
  /* 1211a855 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211a858:;
  /* 1211a858 pop edi */
  EDI = (pop32());
  /* 1211a859 pop esi */
  ESI = (pop32());
  /* 1211a85a pop ebx */
  EBX = (pop32());
  /* 1211a85b mov esp, ebp */
  ESP = (EBP);
  /* 1211a85d pop ebp */
  EBP = (pop32());
  /* 1211a85e ret  */
  ESPCHK(0x1211a6a0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x1211a860 (80 bytes, 27 insns) */
void f_1211a860(void) {
  FTRACE(0x1211a860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a860 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a861 mov ebp, esp */
  EBP = (ESP);
  /* 1211a863 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211a86b jmp 0x1211a876 */
  goto L_1211a876;
L_1211a86d:;
  /* 1211a86d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a870 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211a876:;
  /* 1211a876 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a87a jae 0x1211a88f */
  if (!C.cf) goto L_1211a88f;
  /* 1211a87c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a87f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a882 cmp edx, dword ptr [ecx*8 + 0x12141ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x12141ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a889 jne 0x1211a88d */
  if (!C.zf) goto L_1211a88d;
  /* 1211a88b jmp 0x1211a88f */
  goto L_1211a88f;
L_1211a88d:;
  /* 1211a88d jmp 0x1211a86d */
  goto L_1211a86d;
L_1211a88f:;
  /* 1211a88f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a892 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a895 cmp ecx, dword ptr [eax*8 + 0x12141ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12141ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a89c jne 0x1211a8aa */
  if (!C.zf) goto L_1211a8aa;
  /* 1211a89e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a8a1 mov eax, dword ptr [edx*8 + 0x12141ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x12141ab4)));
  /* 1211a8a8 jmp 0x1211a8ac */
  goto L_1211a8ac;
L_1211a8aa:;
  /* 1211a8aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211a8ac:;
  /* 1211a8ac mov esp, ebp */
  ESP = (EBP);
  /* 1211a8ae pop ebp */
  EBP = (pop32());
  /* 1211a8af ret  */
  ESPCHK(0x1211a860u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x1211a8b0 (66 bytes, 28 insns) */
void f_1211a8b0(void) {
  FTRACE(0x1211a8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1211a8b3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a8b7 jne 0x1211a8d7 */
  if (!C.zf) goto L_1211a8d7;
  /* 1211a8b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a8bd jge 0x1211a8d7 */
  if ((C.sf==C.of)) goto L_1211a8d7;
  /* 1211a8bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1211a8c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a8c4 push eax */
  push32((uint32_t)(EAX));
  /* 1211a8c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a8c8 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a8c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a8cc push edx */
  push32((uint32_t)(EDX));
  /* 1211a8cd call 0x1211a900 */
  push32(0x1211a8d2u); f_1211a900();
  /* 1211a8d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a8d5 jmp 0x1211a8ed */
  goto L_1211a8ed;
L_1211a8d7:;
  /* 1211a8d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211a8d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a8dc push eax */
  push32((uint32_t)(EAX));
  /* 1211a8dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a8e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a8e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a8e4 push edx */
  push32((uint32_t)(EDX));
  /* 1211a8e5 call 0x1211a900 */
  push32(0x1211a8eau); f_1211a900();
  /* 1211a8ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211a8ed:;
  /* 1211a8ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a8f0 pop ebp */
  EBP = (pop32());
  /* 1211a8f1 ret  */
  ESPCHK(0x1211a8b0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x1211a900 (194 bytes, 71 insns) */
void f_1211a900(void) {
  FTRACE(0x1211a900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a900 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a901 mov ebp, esp */
  EBP = (ESP);
  /* 1211a903 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a906 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211a90c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a910 je 0x1211a929 */
  if (C.zf) goto L_1211a929;
  /* 1211a912 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a915 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1211a918 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a91b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a91e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211a921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a924 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211a926 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1211a929:;
  /* 1211a929 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a92c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1211a92f:;
  /* 1211a92f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a932 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211a934 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211a937 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1211a93a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a93d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211a93f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1211a942 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1211a945 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a949 jbe 0x1211a961 */
  if ((C.cf||C.zf)) goto L_1211a961;
  /* 1211a94b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a94e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a954 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1211a956 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a959 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a95c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211a95f jmp 0x1211a975 */
  goto L_1211a975;
L_1211a961:;
  /* 1211a961 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211a964 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a96a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1211a96c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a96f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a972 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1211a975:;
  /* 1211a975 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a979 ja 0x1211a92f */
  if ((!C.cf&&!C.zf)) goto L_1211a92f;
  /* 1211a97b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a97e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1211a981 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a984 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a987 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211a98a:;
  /* 1211a98a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a98d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211a98f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1211a992 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a995 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a998 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211a99a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1211a99c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a99f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1211a9a2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1211a9a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a9a7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211a9aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211a9ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a9b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211a9b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211a9b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211a9b9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a9bc jb 0x1211a98a */
  if (C.cf) goto L_1211a98a;
  /* 1211a9be mov esp, ebp */
  ESP = (EBP);
  /* 1211a9c0 pop ebp */
  EBP = (pop32());
  /* 1211a9c1 ret  */
  ESPCHK(0x1211a900u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x1211a9d0 (63 bytes, 24 insns) */
void f_1211a9d0(void) {
  FTRACE(0x1211a9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211a9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211a9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1211a9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a9d4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a9d8 jne 0x1211a9e9 */
  if (!C.zf) goto L_1211a9e9;
  /* 1211a9da cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211a9de jge 0x1211a9e9 */
  if ((C.sf==C.of)) goto L_1211a9e9;
  /* 1211a9e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1211a9e7 jmp 0x1211a9f0 */
  goto L_1211a9f0;
L_1211a9e9:;
  /* 1211a9e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1211a9f0:;
  /* 1211a9f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211a9f3 push eax */
  push32((uint32_t)(EAX));
  /* 1211a9f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211a9f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1211a9f8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211a9fb push edx */
  push32((uint32_t)(EDX));
  /* 1211a9fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211a9ff push eax */
  push32((uint32_t)(EAX));
  /* 1211aa00 call 0x1211a900 */
  push32(0x1211aa05u); f_1211a900();
  /* 1211aa05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211aa08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211aa0b mov esp, ebp */
  ESP = (EBP);
  /* 1211aa0d pop ebp */
  EBP = (pop32());
  /* 1211aa0e ret  */
  ESPCHK(0x1211a9d0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x1211aa10 (30 bytes, 14 insns) */
void f_1211aa10(void) {
  FTRACE(0x1211aa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211aa10 push ebp */
  push32((uint32_t)(EBP));
  /* 1211aa11 mov ebp, esp */
  EBP = (ESP);
  /* 1211aa13 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211aa15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211aa18 push eax */
  push32((uint32_t)(EAX));
  /* 1211aa19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211aa1c push ecx */
  push32((uint32_t)(ECX));
  /* 1211aa1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211aa20 push edx */
  push32((uint32_t)(EDX));
  /* 1211aa21 call 0x1211a900 */
  push32(0x1211aa26u); f_1211a900();
  /* 1211aa26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211aa29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211aa2c pop ebp */
  EBP = (pop32());
  /* 1211aa2d ret  */
  ESPCHK(0x1211aa10u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x1211aa30 (72 bytes, 28 insns) */
void f_1211aa30(void) {
  FTRACE(0x1211aa30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211aa30 push ebp */
  push32((uint32_t)(EBP));
  /* 1211aa31 mov ebp, esp */
  EBP = (ESP);
  /* 1211aa33 push ecx */
  push32((uint32_t)(ECX));
  /* 1211aa34 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211aa38 jne 0x1211aa51 */
  if (!C.zf) goto L_1211aa51;
  /* 1211aa3a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211aa3e jg 0x1211aa51 */
  if ((!C.zf&&C.sf==C.of)) goto L_1211aa51;
  /* 1211aa40 jl 0x1211aa48 */
  if ((C.sf!=C.of)) goto L_1211aa48;
  /* 1211aa42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211aa46 jae 0x1211aa51 */
  if (!C.cf) goto L_1211aa51;
L_1211aa48:;
  /* 1211aa48 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1211aa4f jmp 0x1211aa58 */
  goto L_1211aa58;
L_1211aa51:;
  /* 1211aa51 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1211aa58:;
  /* 1211aa58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211aa5b push eax */
  push32((uint32_t)(EAX));
  /* 1211aa5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211aa5f push ecx */
  push32((uint32_t)(ECX));
  /* 1211aa60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211aa63 push edx */
  push32((uint32_t)(EDX));
  /* 1211aa64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211aa67 push eax */
  push32((uint32_t)(EAX));
  /* 1211aa68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211aa6b push ecx */
  push32((uint32_t)(ECX));
  /* 1211aa6c call 0x1211aa80 */
  push32(0x1211aa71u); f_1211aa80();
  /* 1211aa71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211aa74 mov esp, ebp */
  ESP = (EBP);
  /* 1211aa76 pop ebp */
  EBP = (pop32());
  /* 1211aa77 ret  */
  ESPCHK(0x1211aa30u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x1211aa80 (242 bytes, 91 insns) */
void f_1211aa80(void) {
  FTRACE(0x1211aa80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211aa80 push ebp */
  push32((uint32_t)(EBP));
  /* 1211aa81 mov ebp, esp */
  EBP = (ESP);
  /* 1211aa83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211aa86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211aa89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211aa8c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211aa90 je 0x1211aab4 */
  if (C.zf) goto L_1211aab4;
  /* 1211aa92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211aa95 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 1211aa98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211aa9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211aa9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211aaa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211aaa4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211aaa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211aaa9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211aaac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211aaae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1211aab1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1211aab4:;
  /* 1211aab4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211aab7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1211aaba:;
  /* 1211aaba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211aabd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211aabf push ecx */
  push32((uint32_t)(ECX));
  /* 1211aac0 push eax */
  push32((uint32_t)(EAX));
  /* 1211aac1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211aac4 push edx */
  push32((uint32_t)(EDX));
  /* 1211aac5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211aac8 push eax */
  push32((uint32_t)(EAX));
  /* 1211aac9 call 0x1211ea00 */
  push32(0x1211aaceu); f_1211ea00();
  /* 1211aace mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211aad1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211aad4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211aad6 push edx */
  push32((uint32_t)(EDX));
  /* 1211aad7 push ecx */
  push32((uint32_t)(ECX));
  /* 1211aad8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211aadb push eax */
  push32((uint32_t)(EAX));
  /* 1211aadc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211aadf push ecx */
  push32((uint32_t)(ECX));
  /* 1211aae0 call 0x1211e990 */
  push32(0x1211aae5u); f_1211e990();
  /* 1211aae5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1211aae8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1211aaeb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211aaef jbe 0x1211ab07 */
  if ((C.cf||C.zf)) goto L_1211ab07;
  /* 1211aaf1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211aaf4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211aaf7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211aafa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1211aafc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211aaff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ab02 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211ab05 jmp 0x1211ab1b */
  goto L_1211ab1b;
L_1211ab07:;
  /* 1211ab07 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211ab0a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ab0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ab10 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1211ab12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ab15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ab18 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1211ab1b:;
  /* 1211ab1b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ab1f ja 0x1211aaba */
  if ((!C.cf&&!C.zf)) goto L_1211aaba;
  /* 1211ab21 jb 0x1211ab29 */
  if (C.cf) goto L_1211ab29;
  /* 1211ab23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ab27 ja 0x1211aaba */
  if ((!C.cf&&!C.zf)) goto L_1211aaba;
L_1211ab29:;
  /* 1211ab29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ab2c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1211ab2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ab32 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ab35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211ab38:;
  /* 1211ab38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ab3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211ab3d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 1211ab40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ab43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ab46 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211ab48 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1211ab4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ab4d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 1211ab50 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1211ab52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ab55 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ab58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211ab5b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ab5e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ab61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211ab64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ab67 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ab6a jb 0x1211ab38 */
  if (C.cf) goto L_1211ab38;
  /* 1211ab6c mov esp, ebp */
  ESP = (EBP);
  /* 1211ab6e pop ebp */
  EBP = (pop32());
  /* 1211ab6f ret 0x14 */
  ESPCHK(0x1211aa80u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x1211ab80 (31 bytes, 15 insns) */
void f_1211ab80(void) {
  FTRACE(0x1211ab80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ab80 push ebp */
  push32((uint32_t)(EBP));
  /* 1211ab81 mov ebp, esp */
  EBP = (ESP);
  /* 1211ab83 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ab85 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211ab88 push eax */
  push32((uint32_t)(EAX));
  /* 1211ab89 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211ab8c push ecx */
  push32((uint32_t)(ECX));
  /* 1211ab8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ab90 push edx */
  push32((uint32_t)(EDX));
  /* 1211ab91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ab94 push eax */
  push32((uint32_t)(EAX));
  /* 1211ab95 call 0x1211aa80 */
  push32(0x1211ab9au); f_1211aa80();
  /* 1211ab9a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211ab9d pop ebp */
  EBP = (pop32());
  /* 1211ab9e ret  */
  ESPCHK(0x1211ab80u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x1211aba0 (123 bytes, 44 insns) */
void f_1211aba0(void) {
  FTRACE(0x1211aba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211aba0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1211aba4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1211abaa je 0x1211abc0 */
  if (C.zf) goto L_1211abc0;
L_1211abac:;
  /* 1211abac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1211abae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1211abaf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1211abb1 je 0x1211abf3 */
  if (C.zf) goto L_1211abf3;
  /* 1211abb3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1211abb9 jne 0x1211abac */
  if (!C.zf) goto L_1211abac;
  /* 1211abbb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1211abc0:;
  /* 1211abc0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1211abc2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1211abc7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211abc9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211abcc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211abce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211abd1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1211abd6 je 0x1211abc0 */
  if (C.zf) goto L_1211abc0;
  /* 1211abd8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1211abdb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1211abdd je 0x1211ac11 */
  if (C.zf) goto L_1211ac11;
  /* 1211abdf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1211abe1 je 0x1211ac07 */
  if (C.zf) goto L_1211ac07;
  /* 1211abe3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1211abe8 je 0x1211abfd */
  if (C.zf) goto L_1211abfd;
  /* 1211abea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1211abef je 0x1211abf3 */
  if (C.zf) goto L_1211abf3;
  /* 1211abf1 jmp 0x1211abc0 */
  goto L_1211abc0;
L_1211abf3:;
  /* 1211abf3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 1211abf6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1211abfa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211abfc ret  */
  ESPCHK(0x1211aba0u, _esp0);
  ESP += 4; return;
L_1211abfd:;
  /* 1211abfd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 1211ac00 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1211ac04 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ac06 ret  */
  ESPCHK(0x1211aba0u, _esp0);
  ESP += 4; return;
L_1211ac07:;
  /* 1211ac07 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1211ac0a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1211ac0e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ac10 ret  */
  ESPCHK(0x1211aba0u, _esp0);
  ESP += 4; return;
L_1211ac11:;
  /* 1211ac11 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 1211ac14 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1211ac18 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ac1a ret  */
  ESPCHK(0x1211aba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac20 @ 0x1211ac20 (249 bytes, 93 insns) */
void f_1211ac20(void) {
  FTRACE(0x1211ac20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ac20 push ebp */
  push32((uint32_t)(EBP));
  /* 1211ac21 mov ebp, esp */
  EBP = (ESP);
  /* 1211ac23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ac26 push ebx */
  push32((uint32_t)(EBX));
  /* 1211ac27 push esi */
  push32((uint32_t)(ESI));
  /* 1211ac28 push edi */
  push32((uint32_t)(EDI));
  /* 1211ac29 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1211ac2c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1211ac2f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 1211ac32 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1211ac35:;
  /* 1211ac35 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ac39 jne 0x1211ac59 */
  if (!C.zf) goto L_1211ac59;
  /* 1211ac3b push 0x1213f330 */
  push32((uint32_t)(0x1213f330u));
  /* 1211ac40 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ac42 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1211ac44 push 0x1213f324 */
  push32((uint32_t)(0x1213f324u));
  /* 1211ac49 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211ac4b call 0x12116e30 */
  push32(0x1211ac50u); f_12116e30();
  /* 1211ac50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ac53 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ac56 jne 0x1211ac59 */
  if (!C.zf) goto L_1211ac59;
  /* 1211ac58 int3  */
  x86_unimpl("int3 @ 0x1211ac58");
L_1211ac59:;
  /* 1211ac59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211ac5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211ac5d jne 0x1211ac35 */
  if (!C.zf) goto L_1211ac35;
L_1211ac5f:;
  /* 1211ac5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ac63 jne 0x1211ac83 */
  if (!C.zf) goto L_1211ac83;
  /* 1211ac65 push 0x1213f314 */
  push32((uint32_t)(0x1213f314u));
  /* 1211ac6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ac6c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1211ac6e push 0x1213f324 */
  push32((uint32_t)(0x1213f324u));
  /* 1211ac73 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211ac75 call 0x12116e30 */
  push32(0x1211ac7au); f_12116e30();
  /* 1211ac7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ac7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ac80 jne 0x1211ac83 */
  if (!C.zf) goto L_1211ac83;
  /* 1211ac82 int3  */
  x86_unimpl("int3 @ 0x1211ac82");
L_1211ac83:;
  /* 1211ac83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ac85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211ac87 jne 0x1211ac5f */
  if (!C.zf) goto L_1211ac5f;
  /* 1211ac89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ac8c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1211ac93 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ac96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ac99 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1211ac9c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ac9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211aca2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1211aca4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aca7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211acaa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1211acad mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1211acb0 push edx */
  push32((uint32_t)(EDX));
  /* 1211acb1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211acb4 push eax */
  push32((uint32_t)(EAX));
  /* 1211acb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211acb8 push ecx */
  push32((uint32_t)(ECX));
  /* 1211acb9 call 0x1211ed00 */
  push32(0x1211acbeu); f_1211ed00();
  /* 1211acbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211acc1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1211acc4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211acc7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211acca sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211accd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211acd0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1211acd3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211acd6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211acda jl 0x1211acfe */
  if ((C.sf!=C.of)) goto L_1211acfe;
  /* 1211acdc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211acdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211ace1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1211ace4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211ace6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1211acec mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1211acef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211acf2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211acf4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211acf7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211acfa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1211acfc jmp 0x1211ad0f */
  goto L_1211ad0f;
L_1211acfe:;
  /* 1211acfe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ad01 push eax */
  push32((uint32_t)(EAX));
  /* 1211ad02 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ad04 call 0x1211ea80 */
  push32(0x1211ad09u); f_1211ea80();
  /* 1211ad09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ad0c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1211ad0f:;
  /* 1211ad0f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211ad12 pop edi */
  EDI = (pop32());
  /* 1211ad13 pop esi */
  ESI = (pop32());
  /* 1211ad14 pop ebx */
  EBX = (pop32());
  /* 1211ad15 mov esp, ebp */
  ESP = (EBP);
  /* 1211ad17 pop ebp */
  EBP = (pop32());
  /* 1211ad18 ret  */
  ESPCHK(0x1211ac20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad20 @ 0x1211ad20 (7 bytes, 3 insns) */
void f_1211ad20(void) {
  FTRACE(0x1211ad20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ad20 push edi */
  push32((uint32_t)(EDI));
  /* 1211ad21 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 1211ad25 jmp 0x1211ad91 */
  jmp_ind(0x1211ad91u); return;
}

/* FUN_1000ad30 @ 0x1211ad30 (224 bytes, 84 insns) */
void f_1211ad30(void) {
  FTRACE(0x1211ad30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ad30 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1211ad34 push edi */
  push32((uint32_t)(EDI));
  /* 1211ad35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1211ad3b je 0x1211ad4c */
  if (C.zf) goto L_1211ad4c;
L_1211ad3d:;
  /* 1211ad3d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1211ad3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1211ad40 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1211ad42 je 0x1211ad7f */
  if (C.zf) goto L_1211ad7f;
  /* 1211ad44 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1211ad4a jne 0x1211ad3d */
  if (!C.zf) goto L_1211ad3d;
L_1211ad4c:;
  /* 1211ad4c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1211ad4e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1211ad53 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ad55 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211ad58 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ad5a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ad5d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1211ad62 je 0x1211ad4c */
  if (C.zf) goto L_1211ad4c;
  /* 1211ad64 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1211ad67 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1211ad69 je 0x1211ad8e */
  if (C.zf) goto L_1211ad8e;
  /* 1211ad6b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1211ad6d je 0x1211ad89 */
  if (C.zf) goto L_1211ad89;
  /* 1211ad6f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 1211ad74 je 0x1211ad84 */
  if (C.zf) goto L_1211ad84;
  /* 1211ad76 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1211ad7b je 0x1211ad7f */
  if (C.zf) goto L_1211ad7f;
  /* 1211ad7d jmp 0x1211ad4c */
  goto L_1211ad4c;
L_1211ad7f:;
  /* 1211ad7f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 1211ad82 jmp 0x1211ad91 */
  goto L_1211ad91;
L_1211ad84:;
  /* 1211ad84 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 1211ad87 jmp 0x1211ad91 */
  goto L_1211ad91;
L_1211ad89:;
  /* 1211ad89 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1211ad8c jmp 0x1211ad91 */
  goto L_1211ad91;
L_1211ad8e:;
  /* 1211ad8e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_1211ad91:;
  /* 1211ad91 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1211ad95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1211ad9b je 0x1211adb6 */
  if (C.zf) goto L_1211adb6;
L_1211ad9d:;
  /* 1211ad9d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1211ad9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1211ada0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1211ada2 je 0x1211ae08 */
  if (C.zf) goto L_1211ae08;
  /* 1211ada4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1211ada6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1211ada7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1211adad jne 0x1211ad9d */
  if (!C.zf) goto L_1211ad9d;
  /* 1211adaf jmp 0x1211adb6 */
  goto L_1211adb6;
L_1211adb1:;
  /* 1211adb1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1211adb3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1211adb6:;
  /* 1211adb6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1211adbb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1211adbd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211adbf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211adc2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211adc4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211adc6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211adc9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1211adce je 0x1211adb1 */
  if (C.zf) goto L_1211adb1;
  /* 1211add0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1211add2 je 0x1211ae08 */
  if (C.zf) goto L_1211ae08;
  /* 1211add4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1211add6 je 0x1211adff */
  if (C.zf) goto L_1211adff;
  /* 1211add8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1211adde je 0x1211adf2 */
  if (C.zf) goto L_1211adf2;
  /* 1211ade0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1211ade6 je 0x1211adea */
  if (C.zf) goto L_1211adea;
  /* 1211ade8 jmp 0x1211adb1 */
  goto L_1211adb1;
L_1211adea:;
  /* 1211adea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1211adec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1211adf0 pop edi */
  EDI = (pop32());
  /* 1211adf1 ret  */
  ESPCHK(0x1211ad30u, _esp0);
  ESP += 4; return;
L_1211adf2:;
  /* 1211adf2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1211adf5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1211adf9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1211adfd pop edi */
  EDI = (pop32());
  /* 1211adfe ret  */
  ESPCHK(0x1211ad30u, _esp0);
  ESP += 4; return;
L_1211adff:;
  /* 1211adff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 1211ae02 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1211ae06 pop edi */
  EDI = (pop32());
  /* 1211ae07 ret  */
  ESPCHK(0x1211ad30u, _esp0);
  ESP += 4; return;
L_1211ae08:;
  /* 1211ae08 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1211ae0a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1211ae0e pop edi */
  EDI = (pop32());
  /* 1211ae0f ret  */
  ESPCHK(0x1211ad30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae10 @ 0x1211ae10 (243 bytes, 91 insns) */
void f_1211ae10(void) {
  FTRACE(0x1211ae10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ae10 push ebp */
  push32((uint32_t)(EBP));
  /* 1211ae11 mov ebp, esp */
  EBP = (ESP);
  /* 1211ae13 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211ae16 push ebx */
  push32((uint32_t)(EBX));
  /* 1211ae17 push esi */
  push32((uint32_t)(ESI));
  /* 1211ae18 push edi */
  push32((uint32_t)(EDI));
  /* 1211ae19 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1211ae1c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1211ae1f:;
  /* 1211ae1f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ae23 jne 0x1211ae43 */
  if (!C.zf) goto L_1211ae43;
  /* 1211ae25 push 0x1213f330 */
  push32((uint32_t)(0x1213f330u));
  /* 1211ae2a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ae2c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1211ae2e push 0x1213f340 */
  push32((uint32_t)(0x1213f340u));
  /* 1211ae33 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211ae35 call 0x12116e30 */
  push32(0x1211ae3au); f_12116e30();
  /* 1211ae3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ae3d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ae40 jne 0x1211ae43 */
  if (!C.zf) goto L_1211ae43;
  /* 1211ae42 int3  */
  x86_unimpl("int3 @ 0x1211ae42");
L_1211ae43:;
  /* 1211ae43 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211ae45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211ae47 jne 0x1211ae1f */
  if (!C.zf) goto L_1211ae1f;
L_1211ae49:;
  /* 1211ae49 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ae4d jne 0x1211ae6d */
  if (!C.zf) goto L_1211ae6d;
  /* 1211ae4f push 0x1213f314 */
  push32((uint32_t)(0x1213f314u));
  /* 1211ae54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211ae56 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 1211ae58 push 0x1213f340 */
  push32((uint32_t)(0x1213f340u));
  /* 1211ae5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1211ae5f call 0x12116e30 */
  push32(0x1211ae64u); f_12116e30();
  /* 1211ae64 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ae67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ae6a jne 0x1211ae6d */
  if (!C.zf) goto L_1211ae6d;
  /* 1211ae6c int3  */
  x86_unimpl("int3 @ 0x1211ae6c");
L_1211ae6d:;
  /* 1211ae6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211ae6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211ae71 jne 0x1211ae49 */
  if (!C.zf) goto L_1211ae49;
  /* 1211ae73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ae76 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1211ae7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ae80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ae83 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1211ae86 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ae89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ae8c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1211ae8e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211ae91 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ae94 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1211ae97 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1211ae9a push ecx */
  push32((uint32_t)(ECX));
  /* 1211ae9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211ae9e push edx */
  push32((uint32_t)(EDX));
  /* 1211ae9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aea2 push eax */
  push32((uint32_t)(EAX));
  /* 1211aea3 call 0x1211ed00 */
  push32(0x1211aea8u); f_1211ed00();
  /* 1211aea8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211aeab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1211aeae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aeb1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211aeb4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211aeb7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aeba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1211aebd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aec0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211aec4 jl 0x1211aee8 */
  if ((C.sf!=C.of)) goto L_1211aee8;
  /* 1211aec6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aec9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211aecb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1211aece xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1211aed0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1211aed6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1211aed9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aedc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211aede add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211aee1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aee4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1211aee6 jmp 0x1211aef9 */
  goto L_1211aef9;
L_1211aee8:;
  /* 1211aee8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1211aeeb push edx */
  push32((uint32_t)(EDX));
  /* 1211aeec push 0 */
  push32((uint32_t)(0x0u));
  /* 1211aeee call 0x1211ea80 */
  push32(0x1211aef3u); f_1211ea80();
  /* 1211aef3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211aef6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_1211aef9:;
  /* 1211aef9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1211aefc pop edi */
  EDI = (pop32());
  /* 1211aefd pop esi */
  ESI = (pop32());
  /* 1211aefe pop ebx */
  EBX = (pop32());
  /* 1211aeff mov esp, ebp */
  ESP = (EBP);
  /* 1211af01 pop ebp */
  EBP = (pop32());
  /* 1211af02 ret  */
  ESPCHK(0x1211ae10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x1211af10 (47 bytes, 17 insns) */
void f_1211af10(void) {
  FTRACE(0x1211af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211af10 push ecx */
  push32((uint32_t)(ECX));
  /* 1211af11 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af16 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1211af1a jb 0x1211af30 */
  if (C.cf) goto L_1211af30;
L_1211af1c:;
  /* 1211af1c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211af22 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211af27 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1211af29 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af2e jae 0x1211af1c */
  if (!C.cf) goto L_1211af1c;
L_1211af30:;
  /* 1211af30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211af32 mov eax, esp */
  EAX = (ESP);
  /* 1211af34 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1211af36 mov esp, ecx */
  ESP = (ECX);
  /* 1211af38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211af3a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211af3d push eax */
  push32((uint32_t)(EAX));
  /* 1211af3e ret  */
  ESPCHK(0x1211af10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af40 @ 0x1211af40 (507 bytes, 151 insns) [1 switch table(s)] */
void f_1211af40(void) {
  FTRACE(0x1211af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211af40 push ebp */
  push32((uint32_t)(EBP));
  /* 1211af41 mov ebp, esp */
  EBP = (ESP);
  /* 1211af43 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211af46 push esi */
  push32((uint32_t)(ESI));
  /* 1211af47 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af4b je 0x1211af53 */
  if (C.zf) goto L_1211af53;
  /* 1211af4d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af51 jne 0x1211af58 */
  if (!C.zf) goto L_1211af58;
L_1211af53:;
  /* 1211af53 jmp 0x1211b128 */
  goto L_1211b128;
L_1211af58:;
  /* 1211af58 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af5c je 0x1211af74 */
  if (C.zf) goto L_1211af74;
  /* 1211af5e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af62 je 0x1211af74 */
  if (C.zf) goto L_1211af74;
  /* 1211af64 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af68 je 0x1211af74 */
  if (C.zf) goto L_1211af74;
  /* 1211af6a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af6e jne 0x1211b051 */
  if (!C.zf) goto L_1211b051;
L_1211af74:;
  /* 1211af74 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211af76 call 0x1211b770 */
  push32(0x1211af7bu); f_1211b770();
  /* 1211af7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211af7e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af82 je 0x1211af8a */
  if (C.zf) goto L_1211af8a;
  /* 1211af84 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af88 jne 0x1211afcf */
  if (!C.zf) goto L_1211afcf;
L_1211af8a:;
  /* 1211af8a cmp dword ptr [0x1214395c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1214395c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211af91 jne 0x1211afcf */
  if (!C.zf) goto L_1211afcf;
  /* 1211af93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211af95 push 0x1211b170 */
  push32((uint32_t)(0x1211b170u));
  /* 1211af9a call dword ptr [0x12146368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146368))), 0x1211afa0u);
  /* 1211afa0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211afa3 jne 0x1211afb1 */
  if (!C.zf) goto L_1211afb1;
  /* 1211afa5 mov dword ptr [0x1214395c], 1 */
  w32((uint32_t)(0x1214395c), (0x1u));
  /* 1211afaf jmp 0x1211afcf */
  goto L_1211afcf;
L_1211afb1:;
  /* 1211afb1 call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x1211afb7u);
  /* 1211afb7 mov esi, eax */
  ESI = (EAX);
  /* 1211afb9 call 0x1211fc50 */
  push32(0x1211afbeu); f_1211fc50();
  /* 1211afbe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1211afc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211afc2 call 0x1211b810 */
  push32(0x1211afc7u); f_1211b810();
  /* 1211afc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211afca jmp 0x1211b128 */
  goto L_1211b128;
L_1211afcf:;
  /* 1211afcf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211afd2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211afd5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211afd8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211afdb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1211afde cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211afe2 ja 0x1211b042 */
  if ((!C.cf&&!C.zf)) goto L_1211b042;
  /* 1211afe4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211afe7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211afe9 mov dl, byte ptr [eax + 0x1211b14f] */
  DL = (r8((uint32_t)(EAX + 0x1211b14f)));
  /* 1211afef jmp dword ptr [edx*4 + 0x1211b13b] */
  switch (EDX) {
    case 0: goto L_1211aff6;
    case 1: goto L_1211b030;
    case 2: goto L_1211b00a;
    case 3: goto L_1211b01d;
    case 4: goto L_1211b042;
    default: x86_unimpl("switch@0x1211afef out of table"); return;
  }
L_1211aff6:;
  /* 1211aff6 mov ecx, dword ptr [0x1214394c] */
  ECX = (r32((uint32_t)(0x1214394c)));
  /* 1211affc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1211afff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b002 mov dword ptr [0x1214394c], edx */
  w32((uint32_t)(0x1214394c), (EDX));
  /* 1211b008 jmp 0x1211b042 */
  goto L_1211b042;
L_1211b00a:;
  /* 1211b00a mov eax, dword ptr [0x12143950] */
  EAX = (r32((uint32_t)(0x12143950)));
  /* 1211b00f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211b012 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b015 mov dword ptr [0x12143950], ecx */
  w32((uint32_t)(0x12143950), (ECX));
  /* 1211b01b jmp 0x1211b042 */
  goto L_1211b042;
L_1211b01d:;
  /* 1211b01d mov edx, dword ptr [0x12143954] */
  EDX = (r32((uint32_t)(0x12143954)));
  /* 1211b023 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1211b026 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b029 mov dword ptr [0x12143954], eax */
  w32((uint32_t)(0x12143954), (EAX));
  /* 1211b02e jmp 0x1211b042 */
  goto L_1211b042;
L_1211b030:;
  /* 1211b030 mov ecx, dword ptr [0x12143958] */
  ECX = (r32((uint32_t)(0x12143958)));
  /* 1211b036 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1211b039 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b03c mov dword ptr [0x12143958], edx */
  w32((uint32_t)(0x12143958), (EDX));
L_1211b042:;
  /* 1211b042 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b044 call 0x1211b810 */
  push32(0x1211b049u); f_1211b810();
  /* 1211b049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b04c jmp 0x1211b123 */
  goto L_1211b123;
L_1211b051:;
  /* 1211b051 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b055 je 0x1211b068 */
  if (C.zf) goto L_1211b068;
  /* 1211b057 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b05b je 0x1211b068 */
  if (C.zf) goto L_1211b068;
  /* 1211b05d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b061 je 0x1211b068 */
  if (C.zf) goto L_1211b068;
  /* 1211b063 jmp 0x1211b128 */
  goto L_1211b128;
L_1211b068:;
  /* 1211b068 call 0x121177b0 */
  push32(0x1211b06du); f_121177b0();
  /* 1211b06d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211b070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b073 cmp dword ptr [eax + 0x50], 0x12141c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x12141c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b07a jne 0x1211b0c5 */
  if (!C.zf) goto L_1211b0c5;
  /* 1211b07c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 1211b081 push 0x1213f34c */
  push32((uint32_t)(0x1213f34cu));
  /* 1211b086 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211b088 mov ecx, dword ptr [0x12141c80] */
  ECX = (r32((uint32_t)(0x12141c80)));
  /* 1211b08e push ecx */
  push32((uint32_t)(ECX));
  /* 1211b08f call 0x12117d70 */
  push32(0x1211b094u); f_12117d70();
  /* 1211b094 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b097 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b09a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1211b09d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b0a0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b0a4 je 0x1211b0c3 */
  if (C.zf) goto L_1211b0c3;
  /* 1211b0a6 mov ecx, dword ptr [0x12141c80] */
  ECX = (r32((uint32_t)(0x12141c80)));
  /* 1211b0ac push ecx */
  push32((uint32_t)(ECX));
  /* 1211b0ad push 0x12141c00 */
  push32((uint32_t)(0x12141c00u));
  /* 1211b0b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b0b5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1211b0b8 push eax */
  push32((uint32_t)(EAX));
  /* 1211b0b9 call 0x1211e650 */
  push32(0x1211b0beu); f_1211e650();
  /* 1211b0be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b0c1 jmp 0x1211b0c5 */
  goto L_1211b0c5;
L_1211b0c3:;
  /* 1211b0c3 jmp 0x1211b128 */
  goto L_1211b128;
L_1211b0c5:;
  /* 1211b0c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b0c8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1211b0cb push edx */
  push32((uint32_t)(EDX));
  /* 1211b0cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b0cf push eax */
  push32((uint32_t)(EAX));
  /* 1211b0d0 call 0x1211b450 */
  push32(0x1211b0d5u); f_1211b450();
  /* 1211b0d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b0d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211b0db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b0df jne 0x1211b0e3 */
  if (!C.zf) goto L_1211b0e3;
  /* 1211b0e1 jmp 0x1211b128 */
  goto L_1211b128;
L_1211b0e3:;
  /* 1211b0e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b0e6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1211b0e9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1211b0ec:;
  /* 1211b0ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b0ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211b0f2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b0f5 jne 0x1211b123 */
  if (!C.zf) goto L_1211b123;
  /* 1211b0f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b0fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b0fd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1211b100 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b103 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b106 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211b109 mov edx, dword ptr [0x12141c84] */
  EDX = (r32((uint32_t)(0x12141c84)));
  /* 1211b10f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211b112 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b115 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1211b118 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b11a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b11d jb 0x1211b121 */
  if (C.cf) goto L_1211b121;
  /* 1211b11f jmp 0x1211b123 */
  goto L_1211b123;
L_1211b121:;
  /* 1211b121 jmp 0x1211b0ec */
  goto L_1211b0ec;
L_1211b123:;
  /* 1211b123 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211b126 jmp 0x1211b136 */
  goto L_1211b136;
L_1211b128:;
  /* 1211b128 call 0x1211fc40 */
  push32(0x1211b12du); f_1211fc40();
  /* 1211b12d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1211b133 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1211b136:;
  /* 1211b136 pop esi */
  ESI = (pop32());
  /* 1211b137 mov esp, ebp */
  ESP = (EBP);
  /* 1211b139 pop ebp */
  EBP = (pop32());
  /* 1211b13a ret  */
  ESPCHK(0x1211af40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b170 @ 0x1211b170 (146 bytes, 45 insns) */
void f_1211b170(void) {
  FTRACE(0x1211b170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b170 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b171 mov ebp, esp */
  EBP = (ESP);
  /* 1211b173 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211b176 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b178 call 0x1211b770 */
  push32(0x1211b17du); f_1211b770();
  /* 1211b17d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b180 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b184 jne 0x1211b19e */
  if (!C.zf) goto L_1211b19e;
  /* 1211b186 mov dword ptr [ebp - 8], 0x1214394c */
  w32((uint32_t)(EBP + -0x8), (0x1214394cu));
  /* 1211b18d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b190 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1211b192 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1211b195 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1211b19c jmp 0x1211b1b4 */
  goto L_1211b1b4;
L_1211b19e:;
  /* 1211b19e mov dword ptr [ebp - 8], 0x12143950 */
  w32((uint32_t)(EBP + -0x8), (0x12143950u));
  /* 1211b1a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b1a8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211b1aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211b1ad mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_1211b1b4:;
  /* 1211b1b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b1b8 jne 0x1211b1c8 */
  if (!C.zf) goto L_1211b1c8;
  /* 1211b1ba push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b1bc call 0x1211b810 */
  push32(0x1211b1c1u); f_1211b810();
  /* 1211b1c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b1c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211b1c6 jmp 0x1211b1fc */
  goto L_1211b1fc;
L_1211b1c8:;
  /* 1211b1c8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b1cc je 0x1211b1ed */
  if (C.zf) goto L_1211b1ed;
  /* 1211b1ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b1d1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1211b1d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b1d9 call 0x1211b810 */
  push32(0x1211b1deu); f_1211b810();
  /* 1211b1de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b1e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b1e4 push edx */
  push32((uint32_t)(EDX));
  /* 1211b1e5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x1211b1e8u);
  /* 1211b1e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b1eb jmp 0x1211b1f7 */
  goto L_1211b1f7;
L_1211b1ed:;
  /* 1211b1ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b1ef call 0x1211b810 */
  push32(0x1211b1f4u); f_1211b810();
  /* 1211b1f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b1f7:;
  /* 1211b1f7 mov eax, 1 */
  EAX = (0x1u);
L_1211b1fc:;
  /* 1211b1fc mov esp, ebp */
  ESP = (EBP);
  /* 1211b1fe pop ebp */
  EBP = (pop32());
  /* 1211b1ff ret 4 */
  ESPCHK(0x1211b170u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b210 @ 0x1211b210 (522 bytes, 162 insns) [1 switch table(s)] */
void f_1211b210(void) {
  FTRACE(0x1211b210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b210 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b211 mov ebp, esp */
  EBP = (ESP);
  /* 1211b213 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211b216 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1211b21d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b220 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1211b223 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211b226 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211b229 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1211b22c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b230 ja 0x1211b2de */
  if ((!C.cf&&!C.zf)) goto L_1211b2de;
  /* 1211b236 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1211b239 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211b23b mov dl, byte ptr [eax + 0x1211b432] */
  DL = (r8((uint32_t)(EAX + 0x1211b432)));
  /* 1211b241 jmp dword ptr [edx*4 + 0x1211b41a] */
  switch (EDX) {
    case 0: goto L_1211b248;
    case 1: goto L_1211b2b3;
    case 2: goto L_1211b299;
    case 3: goto L_1211b265;
    case 4: goto L_1211b27f;
    case 5: goto L_1211b2de;
    default: x86_unimpl("switch@0x1211b241 out of table"); return;
  }
L_1211b248:;
  /* 1211b248 mov dword ptr [ebp - 0x18], 0x1214394c */
  w32((uint32_t)(EBP + -0x18), (0x1214394cu));
  /* 1211b24f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211b252 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211b254 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1211b257 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211b25a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b25d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211b260 jmp 0x1211b2e6 */
  goto L_1211b2e6;
L_1211b265:;
  /* 1211b265 mov dword ptr [ebp - 0x18], 0x12143950 */
  w32((uint32_t)(EBP + -0x18), (0x12143950u));
  /* 1211b26c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211b26f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211b271 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1211b274 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211b277 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b27a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211b27d jmp 0x1211b2e6 */
  goto L_1211b2e6;
L_1211b27f:;
  /* 1211b27f mov dword ptr [ebp - 0x18], 0x12143954 */
  w32((uint32_t)(EBP + -0x18), (0x12143954u));
  /* 1211b286 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211b289 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211b28b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1211b28e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211b291 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b294 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211b297 jmp 0x1211b2e6 */
  goto L_1211b2e6;
L_1211b299:;
  /* 1211b299 mov dword ptr [ebp - 0x18], 0x12143958 */
  w32((uint32_t)(EBP + -0x18), (0x12143958u));
  /* 1211b2a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211b2a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211b2a5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1211b2a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211b2ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b2ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211b2b1 jmp 0x1211b2e6 */
  goto L_1211b2e6;
L_1211b2b3:;
  /* 1211b2b3 call 0x121177b0 */
  push32(0x1211b2b8u); f_121177b0();
  /* 1211b2b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211b2bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b2be mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1211b2c1 push edx */
  push32((uint32_t)(EDX));
  /* 1211b2c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b2c5 push eax */
  push32((uint32_t)(EAX));
  /* 1211b2c6 call 0x1211b450 */
  push32(0x1211b2cbu); f_1211b450();
  /* 1211b2cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b2ce add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b2d1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1211b2d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211b2d7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211b2d9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1211b2dc jmp 0x1211b2e6 */
  goto L_1211b2e6;
L_1211b2de:;
  /* 1211b2de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211b2e1 jmp 0x1211b416 */
  goto L_1211b416;
L_1211b2e6:;
  /* 1211b2e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b2ea je 0x1211b2f6 */
  if (C.zf) goto L_1211b2f6;
  /* 1211b2ec push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b2ee call 0x1211b770 */
  push32(0x1211b2f3u); f_1211b770();
  /* 1211b2f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b2f6:;
  /* 1211b2f6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b2fa jne 0x1211b313 */
  if (!C.zf) goto L_1211b313;
  /* 1211b2fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b300 je 0x1211b30c */
  if (C.zf) goto L_1211b30c;
  /* 1211b302 push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b304 call 0x1211b810 */
  push32(0x1211b309u); f_1211b810();
  /* 1211b309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b30c:;
  /* 1211b30c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211b30e jmp 0x1211b416 */
  goto L_1211b416;
L_1211b313:;
  /* 1211b313 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b317 jne 0x1211b330 */
  if (!C.zf) goto L_1211b330;
  /* 1211b319 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b31d je 0x1211b329 */
  if (C.zf) goto L_1211b329;
  /* 1211b31f push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b321 call 0x1211b810 */
  push32(0x1211b326u); f_1211b810();
  /* 1211b326 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b329:;
  /* 1211b329 push 3 */
  push32((uint32_t)(0x3u));
  /* 1211b32b call 0x12117530 */
  push32(0x1211b330u); f_12117530();
L_1211b330:;
  /* 1211b330 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b334 je 0x1211b342 */
  if (C.zf) goto L_1211b342;
  /* 1211b336 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b33a je 0x1211b342 */
  if (C.zf) goto L_1211b342;
  /* 1211b33c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b340 jne 0x1211b36e */
  if (!C.zf) goto L_1211b36e;
L_1211b342:;
  /* 1211b342 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b345 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1211b348 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1211b34b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b34e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 1211b355 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b359 jne 0x1211b36e */
  if (!C.zf) goto L_1211b36e;
  /* 1211b35b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b35e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1211b361 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211b364 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b367 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1211b36e:;
  /* 1211b36e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b372 jne 0x1211b3b0 */
  if (!C.zf) goto L_1211b3b0;
  /* 1211b374 mov eax, dword ptr [0x12141c78] */
  EAX = (r32((uint32_t)(0x12141c78)));
  /* 1211b379 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211b37c jmp 0x1211b387 */
  goto L_1211b387;
L_1211b37e:;
  /* 1211b37e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b381 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b384 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1211b387:;
  /* 1211b387 mov edx, dword ptr [0x12141c78] */
  EDX = (r32((uint32_t)(0x12141c78)));
  /* 1211b38d add edx, dword ptr [0x12141c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12141c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b393 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b396 jge 0x1211b3ae */
  if ((C.sf==C.of)) goto L_1211b3ae;
  /* 1211b398 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b39b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211b39e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b3a1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1211b3a4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1211b3ac jmp 0x1211b37e */
  goto L_1211b37e;
L_1211b3ae:;
  /* 1211b3ae jmp 0x1211b3b9 */
  goto L_1211b3b9;
L_1211b3b0:;
  /* 1211b3b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211b3b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1211b3b9:;
  /* 1211b3b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b3bd je 0x1211b3c9 */
  if (C.zf) goto L_1211b3c9;
  /* 1211b3bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1211b3c1 call 0x1211b810 */
  push32(0x1211b3c6u); f_1211b810();
  /* 1211b3c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b3c9:;
  /* 1211b3c9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b3cd jne 0x1211b3e0 */
  if (!C.zf) goto L_1211b3e0;
  /* 1211b3cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b3d2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1211b3d5 push edx */
  push32((uint32_t)(EDX));
  /* 1211b3d6 push 8 */
  push32((uint32_t)(0x8u));
  /* 1211b3d8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1211b3dbu);
  /* 1211b3db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b3de jmp 0x1211b3ea */
  goto L_1211b3ea;
L_1211b3e0:;
  /* 1211b3e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b3e3 push eax */
  push32((uint32_t)(EAX));
  /* 1211b3e4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1211b3e7u);
  /* 1211b3e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b3ea:;
  /* 1211b3ea cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b3ee je 0x1211b3fc */
  if (C.zf) goto L_1211b3fc;
  /* 1211b3f0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b3f4 je 0x1211b3fc */
  if (C.zf) goto L_1211b3fc;
  /* 1211b3f6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b3fa jne 0x1211b414 */
  if (!C.zf) goto L_1211b414;
L_1211b3fc:;
  /* 1211b3fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b3ff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211b402 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 1211b405 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b409 jne 0x1211b414 */
  if (!C.zf) goto L_1211b414;
  /* 1211b40b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b40e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b411 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_1211b414:;
  /* 1211b414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211b416:;
  /* 1211b416 mov esp, ebp */
  ESP = (EBP);
  /* 1211b418 pop ebp */
  EBP = (pop32());
  /* 1211b419 ret  */
  ESPCHK(0x1211b210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b450 @ 0x1211b450 (91 bytes, 35 insns) */
void f_1211b450(void) {
  FTRACE(0x1211b450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b450 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b451 mov ebp, esp */
  EBP = (ESP);
  /* 1211b453 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b454 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b457 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211b45a:;
  /* 1211b45a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b45d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1211b460 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b463 je 0x1211b483 */
  if (C.zf) goto L_1211b483;
  /* 1211b465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b468 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b46b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211b46e mov ecx, dword ptr [0x12141c84] */
  ECX = (r32((uint32_t)(0x12141c84)));
  /* 1211b474 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211b477 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b47a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b47c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b47f jae 0x1211b483 */
  if (!C.cf) goto L_1211b483;
  /* 1211b481 jmp 0x1211b45a */
  goto L_1211b45a;
L_1211b483:;
  /* 1211b483 mov eax, dword ptr [0x12141c84] */
  EAX = (r32((uint32_t)(0x12141c84)));
  /* 1211b488 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211b48b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b48e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b490 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b493 jae 0x1211b4a5 */
  if (!C.cf) goto L_1211b4a5;
  /* 1211b495 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b498 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1211b49b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b49e jne 0x1211b4a5 */
  if (!C.zf) goto L_1211b4a5;
  /* 1211b4a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b4a3 jmp 0x1211b4a7 */
  goto L_1211b4a7;
L_1211b4a5:;
  /* 1211b4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211b4a7:;
  /* 1211b4a7 mov esp, ebp */
  ESP = (EBP);
  /* 1211b4a9 pop ebp */
  EBP = (pop32());
  /* 1211b4aa ret  */
  ESPCHK(0x1211b450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4b0 @ 0x1211b4b0 (13 bytes, 6 insns) */
void f_1211b4b0(void) {
  FTRACE(0x1211b4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b4b1 mov ebp, esp */
  EBP = (ESP);
  /* 1211b4b3 call 0x121177b0 */
  push32(0x1211b4b8u); f_121177b0();
  /* 1211b4b8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b4bb pop ebp */
  EBP = (pop32());
  /* 1211b4bc ret  */
  ESPCHK(0x1211b4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4c0 @ 0x1211b4c0 (13 bytes, 6 insns) */
void f_1211b4c0(void) {
  FTRACE(0x1211b4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1211b4c3 call 0x121177b0 */
  push32(0x1211b4c8u); f_121177b0();
  /* 1211b4c8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b4cb pop ebp */
  EBP = (pop32());
  /* 1211b4cc ret  */
  ESPCHK(0x1211b4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4d0 @ 0x1211b4d0 (187 bytes, 54 insns) */
void f_1211b4d0(void) {
  FTRACE(0x1211b4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b4d1 mov ebp, esp */
  EBP = (ESP);
  /* 1211b4d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211b4d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211b4dd cmp dword ptr [0x12143960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b4e4 jne 0x1211b543 */
  if (!C.zf) goto L_1211b543;
  /* 1211b4e6 push 0x1213e778 */
  push32((uint32_t)(0x1213e778u));
  /* 1211b4eb call dword ptr [0x121463cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463cc))), 0x1211b4f1u);
  /* 1211b4f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211b4f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b4f8 je 0x1211b517 */
  if (C.zf) goto L_1211b517;
  /* 1211b4fa push 0x1213f37c */
  push32((uint32_t)(0x1213f37cu));
  /* 1211b4ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b502 push eax */
  push32((uint32_t)(EAX));
  /* 1211b503 call dword ptr [0x121463c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c8))), 0x1211b509u);
  /* 1211b509 mov dword ptr [0x12143960], eax */
  w32((uint32_t)(0x12143960), (EAX));
  /* 1211b50e cmp dword ptr [0x12143960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b515 jne 0x1211b51b */
  if (!C.zf) goto L_1211b51b;
L_1211b517:;
  /* 1211b517 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211b519 jmp 0x1211b587 */
  goto L_1211b587;
L_1211b51b:;
  /* 1211b51b push 0x1213f36c */
  push32((uint32_t)(0x1213f36cu));
  /* 1211b520 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b523 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b524 call dword ptr [0x121463c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c8))), 0x1211b52au);
  /* 1211b52a mov dword ptr [0x12143964], eax */
  w32((uint32_t)(0x12143964), (EAX));
  /* 1211b52f push 0x1213f358 */
  push32((uint32_t)(0x1213f358u));
  /* 1211b534 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b537 push edx */
  push32((uint32_t)(EDX));
  /* 1211b538 call dword ptr [0x121463c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463c8))), 0x1211b53eu);
  /* 1211b53e mov dword ptr [0x12143968], eax */
  w32((uint32_t)(0x12143968), (EAX));
L_1211b543:;
  /* 1211b543 cmp dword ptr [0x12143964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b54a je 0x1211b555 */
  if (C.zf) goto L_1211b555;
  /* 1211b54c call dword ptr [0x12143964] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143964))), 0x1211b552u);
  /* 1211b552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211b555:;
  /* 1211b555 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b559 je 0x1211b571 */
  if (C.zf) goto L_1211b571;
  /* 1211b55b cmp dword ptr [0x12143968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12143968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b562 je 0x1211b571 */
  if (C.zf) goto L_1211b571;
  /* 1211b564 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b567 push eax */
  push32((uint32_t)(EAX));
  /* 1211b568 call dword ptr [0x12143968] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143968))), 0x1211b56eu);
  /* 1211b56e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211b571:;
  /* 1211b571 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1211b574 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b575 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b578 push edx */
  push32((uint32_t)(EDX));
  /* 1211b579 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b57c push eax */
  push32((uint32_t)(EAX));
  /* 1211b57d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b580 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b581 call dword ptr [0x12143960] */
  call_ind((uint32_t)(r32((uint32_t)(0x12143960))), 0x1211b587u);
L_1211b587:;
  /* 1211b587 mov esp, ebp */
  ESP = (EBP);
  /* 1211b589 pop ebp */
  EBP = (pop32());
  /* 1211b58a ret  */
  ESPCHK(0x1211b4d0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x1211b590 (254 bytes, 109 insns) */
void f_1211b590(void) {
  FTRACE(0x1211b590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b590 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1211b594 push edi */
  push32((uint32_t)(EDI));
  /* 1211b595 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1211b597 je 0x1211b613 */
  if (C.zf) goto L_1211b613;
  /* 1211b599 push esi */
  push32((uint32_t)(ESI));
  /* 1211b59a push ebx */
  push32((uint32_t)(EBX));
  /* 1211b59b mov ebx, ecx */
  EBX = (ECX);
  /* 1211b59d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1211b5a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1211b5a7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1211b5ab jne 0x1211b5b4 */
  if (!C.zf) goto L_1211b5b4;
  /* 1211b5ad shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211b5b0 jne 0x1211b621 */
  if (!C.zf) goto L_1211b621;
  /* 1211b5b2 jmp 0x1211b5d5 */
  goto L_1211b5d5;
L_1211b5b4:;
  /* 1211b5b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211b5b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1211b5b7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211b5b9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1211b5ba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1211b5bb je 0x1211b5e2 */
  if (C.zf) goto L_1211b5e2;
  /* 1211b5bd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1211b5bf je 0x1211b5ea */
  if (C.zf) goto L_1211b5ea;
  /* 1211b5c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1211b5c7 jne 0x1211b5b4 */
  if (!C.zf) goto L_1211b5b4;
  /* 1211b5c9 mov ebx, ecx */
  EBX = (ECX);
  /* 1211b5cb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211b5ce jne 0x1211b621 */
  if (!C.zf) goto L_1211b621;
L_1211b5d0:;
  /* 1211b5d0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1211b5d3 je 0x1211b5e2 */
  if (C.zf) goto L_1211b5e2;
L_1211b5d5:;
  /* 1211b5d5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1211b5d7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1211b5d8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211b5da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1211b5db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1211b5dd je 0x1211b60e */
  if (C.zf) goto L_1211b60e;
  /* 1211b5df dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1211b5e0 jne 0x1211b5d5 */
  if (!C.zf) goto L_1211b5d5;
L_1211b5e2:;
  /* 1211b5e2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1211b5e6 pop ebx */
  EBX = (pop32());
  /* 1211b5e7 pop esi */
  ESI = (pop32());
  /* 1211b5e8 pop edi */
  EDI = (pop32());
  /* 1211b5e9 ret  */
  ESPCHK(0x1211b590u, _esp0);
  ESP += 4; return;
L_1211b5ea:;
  /* 1211b5ea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1211b5f0 je 0x1211b604 */
  if (C.zf) goto L_1211b604;
L_1211b5f2:;
  /* 1211b5f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211b5f4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1211b5f5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1211b5f6 je 0x1211b686 */
  if (C.zf) goto L_1211b686;
  /* 1211b5fc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1211b602 jne 0x1211b5f2 */
  if (!C.zf) goto L_1211b5f2;
L_1211b604:;
  /* 1211b604 mov ebx, ecx */
  EBX = (ECX);
  /* 1211b606 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211b609 jne 0x1211b677 */
  if (!C.zf) goto L_1211b677;
L_1211b60b:;
  /* 1211b60b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211b60d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1211b60e:;
  /* 1211b60e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1211b60f jne 0x1211b60b */
  if (!C.zf) goto L_1211b60b;
  /* 1211b611 pop ebx */
  EBX = (pop32());
  /* 1211b612 pop esi */
  ESI = (pop32());
L_1211b613:;
  /* 1211b613 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1211b617 pop edi */
  EDI = (pop32());
  /* 1211b618 ret  */
  ESPCHK(0x1211b590u, _esp0);
  ESP += 4; return;
L_1211b619:;
  /* 1211b619 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1211b61b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b61e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1211b61f je 0x1211b5d0 */
  if (C.zf) goto L_1211b5d0;
L_1211b621:;
  /* 1211b621 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1211b626 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1211b628 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b62a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211b62d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1211b62f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1211b631 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b634 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1211b639 je 0x1211b619 */
  if (C.zf) goto L_1211b619;
  /* 1211b63b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1211b63d je 0x1211b66b */
  if (C.zf) goto L_1211b66b;
  /* 1211b63f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1211b641 je 0x1211b661 */
  if (C.zf) goto L_1211b661;
  /* 1211b643 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1211b649 je 0x1211b657 */
  if (C.zf) goto L_1211b657;
  /* 1211b64b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1211b651 jne 0x1211b619 */
  if (!C.zf) goto L_1211b619;
  /* 1211b653 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1211b655 jmp 0x1211b66f */
  goto L_1211b66f;
L_1211b657:;
  /* 1211b657 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1211b65d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1211b65f jmp 0x1211b66f */
  goto L_1211b66f;
L_1211b661:;
  /* 1211b661 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1211b667 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1211b669 jmp 0x1211b66f */
  goto L_1211b66f;
L_1211b66b:;
  /* 1211b66b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1211b66d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1211b66f:;
  /* 1211b66f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b672 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211b674 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1211b675 je 0x1211b681 */
  if (C.zf) goto L_1211b681;
L_1211b677:;
  /* 1211b677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1211b679:;
  /* 1211b679 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1211b67b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b67e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1211b67f jne 0x1211b679 */
  if (!C.zf) goto L_1211b679;
L_1211b681:;
  /* 1211b681 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1211b684 jne 0x1211b60b */
  if (!C.zf) goto L_1211b60b;
L_1211b686:;
  /* 1211b686 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1211b68a pop ebx */
  EBX = (pop32());
  /* 1211b68b pop esi */
  ESI = (pop32());
  /* 1211b68c pop edi */
  EDI = (pop32());
  /* 1211b68d ret  */
  ESPCHK(0x1211b590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b690 @ 0x1211b690 (55 bytes, 16 insns) */
void f_1211b690(void) {
  FTRACE(0x1211b690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b690 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b691 mov ebp, esp */
  EBP = (ESP);
  /* 1211b693 mov eax, dword ptr [0x12141b84] */
  EAX = (r32((uint32_t)(0x12141b84)));
  /* 1211b698 push eax */
  push32((uint32_t)(EAX));
  /* 1211b699 call dword ptr [0x12146370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146370))), 0x1211b69fu);
  /* 1211b69f mov ecx, dword ptr [0x12141b74] */
  ECX = (r32((uint32_t)(0x12141b74)));
  /* 1211b6a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b6a6 call dword ptr [0x12146370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146370))), 0x1211b6acu);
  /* 1211b6ac mov edx, dword ptr [0x12141b64] */
  EDX = (r32((uint32_t)(0x12141b64)));
  /* 1211b6b2 push edx */
  push32((uint32_t)(EDX));
  /* 1211b6b3 call dword ptr [0x12146370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146370))), 0x1211b6b9u);
  /* 1211b6b9 mov eax, dword ptr [0x12141b44] */
  EAX = (r32((uint32_t)(0x12141b44)));
  /* 1211b6be push eax */
  push32((uint32_t)(EAX));
  /* 1211b6bf call dword ptr [0x12146370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146370))), 0x1211b6c5u);
  /* 1211b6c5 pop ebp */
  EBP = (pop32());
  /* 1211b6c6 ret  */
  ESPCHK(0x1211b690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6d0 @ 0x1211b6d0 (159 bytes, 47 insns) */
void f_1211b6d0(void) {
  FTRACE(0x1211b6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1211b6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b6d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211b6db jmp 0x1211b6e6 */
  goto L_1211b6e6;
L_1211b6dd:;
  /* 1211b6dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b6e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b6e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211b6e6:;
  /* 1211b6e6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b6ea jge 0x1211b739 */
  if ((C.sf==C.of)) goto L_1211b739;
  /* 1211b6ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b6ef cmp dword ptr [ecx*4 + 0x12141b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12141b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b6f7 je 0x1211b737 */
  if (C.zf) goto L_1211b737;
  /* 1211b6f9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b6fd je 0x1211b737 */
  if (C.zf) goto L_1211b737;
  /* 1211b6ff cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b703 je 0x1211b737 */
  if (C.zf) goto L_1211b737;
  /* 1211b705 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b709 je 0x1211b737 */
  if (C.zf) goto L_1211b737;
  /* 1211b70b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b70f je 0x1211b737 */
  if (C.zf) goto L_1211b737;
  /* 1211b711 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b714 mov eax, dword ptr [edx*4 + 0x12141b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12141b40)));
  /* 1211b71b push eax */
  push32((uint32_t)(EAX));
  /* 1211b71c call dword ptr [0x1214639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214639c))), 0x1211b722u);
  /* 1211b722 push 2 */
  push32((uint32_t)(0x2u));
  /* 1211b724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b727 mov edx, dword ptr [ecx*4 + 0x12141b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12141b40)));
  /* 1211b72e push edx */
  push32((uint32_t)(EDX));
  /* 1211b72f call 0x12118800 */
  push32(0x1211b734u); f_12118800();
  /* 1211b734 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b737:;
  /* 1211b737 jmp 0x1211b6dd */
  goto L_1211b6dd;
L_1211b739:;
  /* 1211b739 mov eax, dword ptr [0x12141b64] */
  EAX = (r32((uint32_t)(0x12141b64)));
  /* 1211b73e push eax */
  push32((uint32_t)(EAX));
  /* 1211b73f call dword ptr [0x1214639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214639c))), 0x1211b745u);
  /* 1211b745 mov ecx, dword ptr [0x12141b74] */
  ECX = (r32((uint32_t)(0x12141b74)));
  /* 1211b74b push ecx */
  push32((uint32_t)(ECX));
  /* 1211b74c call dword ptr [0x1214639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214639c))), 0x1211b752u);
  /* 1211b752 mov edx, dword ptr [0x12141b84] */
  EDX = (r32((uint32_t)(0x12141b84)));
  /* 1211b758 push edx */
  push32((uint32_t)(EDX));
  /* 1211b759 call dword ptr [0x1214639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214639c))), 0x1211b75fu);
  /* 1211b75f mov eax, dword ptr [0x12141b44] */
  EAX = (r32((uint32_t)(0x12141b44)));
  /* 1211b764 push eax */
  push32((uint32_t)(EAX));
  /* 1211b765 call dword ptr [0x1214639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214639c))), 0x1211b76bu);
  /* 1211b76b mov esp, ebp */
  ESP = (EBP);
  /* 1211b76d pop ebp */
  EBP = (pop32());
  /* 1211b76e ret  */
  ESPCHK(0x1211b6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x1211b770 (151 bytes, 46 insns) */
void f_1211b770(void) {
  FTRACE(0x1211b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b770 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b771 mov ebp, esp */
  EBP = (ESP);
  /* 1211b773 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b777 cmp dword ptr [eax*4 + 0x12141b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12141b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b77f jne 0x1211b7f2 */
  if (!C.zf) goto L_1211b7f2;
  /* 1211b781 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 1211b786 push 0x1213f388 */
  push32((uint32_t)(0x1213f388u));
  /* 1211b78b push 2 */
  push32((uint32_t)(0x2u));
  /* 1211b78d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1211b78f call 0x12117d70 */
  push32(0x1211b794u); f_12117d70();
  /* 1211b794 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b797 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211b79a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b79e jne 0x1211b7aa */
  if (!C.zf) goto L_1211b7aa;
  /* 1211b7a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1211b7a2 call 0x12116ce0 */
  push32(0x1211b7a7u); f_12116ce0();
  /* 1211b7a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b7aa:;
  /* 1211b7aa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1211b7ac call 0x1211b770 */
  push32(0x1211b7b1u); f_1211b770();
  /* 1211b7b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b7b4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b7b7 cmp dword ptr [ecx*4 + 0x12141b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12141b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b7bf jne 0x1211b7da */
  if (!C.zf) goto L_1211b7da;
  /* 1211b7c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b7c4 push edx */
  push32((uint32_t)(EDX));
  /* 1211b7c5 call dword ptr [0x12146370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146370))), 0x1211b7cbu);
  /* 1211b7cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b7ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b7d1 mov dword ptr [eax*4 + 0x12141b40], ecx */
  w32((uint32_t)(EAX*4 + 0x12141b40), (ECX));
  /* 1211b7d8 jmp 0x1211b7e8 */
  goto L_1211b7e8;
L_1211b7da:;
  /* 1211b7da push 2 */
  push32((uint32_t)(0x2u));
  /* 1211b7dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211b7df push edx */
  push32((uint32_t)(EDX));
  /* 1211b7e0 call 0x12118800 */
  push32(0x1211b7e5u); f_12118800();
  /* 1211b7e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b7e8:;
  /* 1211b7e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1211b7ea call 0x1211b810 */
  push32(0x1211b7efu); f_1211b810();
  /* 1211b7ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b7f2:;
  /* 1211b7f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b7f5 mov ecx, dword ptr [eax*4 + 0x12141b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12141b40)));
  /* 1211b7fc push ecx */
  push32((uint32_t)(ECX));
  /* 1211b7fd call dword ptr [0x12146360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146360))), 0x1211b803u);
  /* 1211b803 mov esp, ebp */
  ESP = (EBP);
  /* 1211b805 pop ebp */
  EBP = (pop32());
  /* 1211b806 ret  */
  ESPCHK(0x1211b770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b810 @ 0x1211b810 (22 bytes, 8 insns) */
void f_1211b810(void) {
  FTRACE(0x1211b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b810 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b811 mov ebp, esp */
  EBP = (ESP);
  /* 1211b813 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b816 mov ecx, dword ptr [eax*4 + 0x12141b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12141b40)));
  /* 1211b81d push ecx */
  push32((uint32_t)(ECX));
  /* 1211b81e call dword ptr [0x1214635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214635c))), 0x1211b824u);
  /* 1211b824 pop ebp */
  EBP = (pop32());
  /* 1211b825 ret  */
  ESPCHK(0x1211b810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b830 @ 0x1211b830 (26 bytes, 10 insns) */
void f_1211b830(void) {
  FTRACE(0x1211b830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b830 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b831 mov ebp, esp */
  EBP = (ESP);
  /* 1211b833 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b836 push eax */
  push32((uint32_t)(EAX));
  /* 1211b837 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211b839 call dword ptr [0x12146364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146364))), 0x1211b83fu);
  /* 1211b83f push 0xff */
  push32((uint32_t)(0xffu));
  /* 1211b844 call dword ptr [0x121462e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121462e4))), 0x1211b84au);
  /* 1211b84a pop ebp */
  EBP = (pop32());
  /* 1211b84b ret  */
  ESPCHK(0x1211b830u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x1211b850 (446 bytes, 130 insns) */
void f_1211b850(void) {
  FTRACE(0x1211b850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211b850 push ebp */
  push32((uint32_t)(EBP));
  /* 1211b851 mov ebp, esp */
  EBP = (ESP);
  /* 1211b853 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211b856 call 0x121177b0 */
  push32(0x1211b85bu); f_121177b0();
  /* 1211b85b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211b85e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b861 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1211b864 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b865 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211b868 push edx */
  push32((uint32_t)(EDX));
  /* 1211b869 call 0x1211ba10 */
  push32(0x1211b86eu); f_1211ba10();
  /* 1211b86e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b871 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211b874 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b878 je 0x1211b883 */
  if (C.zf) goto L_1211b883;
  /* 1211b87a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b87d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b881 jne 0x1211b892 */
  if (!C.zf) goto L_1211b892;
L_1211b883:;
  /* 1211b883 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b886 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b887 call dword ptr [0x12146354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146354))), 0x1211b88du);
  /* 1211b88d jmp 0x1211ba0a */
  goto L_1211ba0a;
L_1211b892:;
  /* 1211b892 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b895 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b899 jne 0x1211b8af */
  if (!C.zf) goto L_1211b8af;
  /* 1211b89b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b89e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1211b8a5 mov eax, 1 */
  EAX = (0x1u);
  /* 1211b8aa jmp 0x1211ba0a */
  goto L_1211ba0a;
L_1211b8af:;
  /* 1211b8af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b8b2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b8b6 jne 0x1211b8c0 */
  if (!C.zf) goto L_1211b8c0;
  /* 1211b8b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1211b8bb jmp 0x1211ba0a */
  goto L_1211ba0a;
L_1211b8c0:;
  /* 1211b8c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b8c3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1211b8c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211b8c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b8cc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1211b8cf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1211b8d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b8d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211b8d8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1211b8db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b8de cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b8e2 jne 0x1211b9e7 */
  if (!C.zf) goto L_1211b9e7;
  /* 1211b8e8 mov eax, dword ptr [0x12141c78] */
  EAX = (r32((uint32_t)(0x12141c78)));
  /* 1211b8ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1211b8f0 jmp 0x1211b8fb */
  goto L_1211b8fb;
L_1211b8f2:;
  /* 1211b8f2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211b8f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b8f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1211b8fb:;
  /* 1211b8fb mov edx, dword ptr [0x12141c78] */
  EDX = (r32((uint32_t)(0x12141c78)));
  /* 1211b901 add edx, dword ptr [0x12141c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12141c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b907 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b90a jge 0x1211b922 */
  if ((C.sf==C.of)) goto L_1211b922;
  /* 1211b90c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211b90f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211b912 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b915 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1211b918 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1211b920 jmp 0x1211b8f2 */
  goto L_1211b8f2;
L_1211b922:;
  /* 1211b922 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b925 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1211b928 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1211b92b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b92e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b934 jne 0x1211b945 */
  if (!C.zf) goto L_1211b945;
  /* 1211b936 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b939 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1211b940 jmp 0x1211b9cd */
  goto L_1211b9cd;
L_1211b945:;
  /* 1211b945 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b948 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b94e jne 0x1211b95c */
  if (!C.zf) goto L_1211b95c;
  /* 1211b950 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b953 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1211b95a jmp 0x1211b9cd */
  goto L_1211b9cd;
L_1211b95c:;
  /* 1211b95c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b95f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b965 jne 0x1211b973 */
  if (!C.zf) goto L_1211b973;
  /* 1211b967 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b96a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1211b971 jmp 0x1211b9cd */
  goto L_1211b9cd;
L_1211b973:;
  /* 1211b973 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b976 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b97c jne 0x1211b98a */
  if (!C.zf) goto L_1211b98a;
  /* 1211b97e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b981 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1211b988 jmp 0x1211b9cd */
  goto L_1211b9cd;
L_1211b98a:;
  /* 1211b98a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b98d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b993 jne 0x1211b9a1 */
  if (!C.zf) goto L_1211b9a1;
  /* 1211b995 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b998 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1211b99f jmp 0x1211b9cd */
  goto L_1211b9cd;
L_1211b9a1:;
  /* 1211b9a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b9a4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b9aa jne 0x1211b9b8 */
  if (!C.zf) goto L_1211b9b8;
  /* 1211b9ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b9af mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1211b9b6 jmp 0x1211b9cd */
  goto L_1211b9cd;
L_1211b9b8:;
  /* 1211b9b8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b9bb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211b9c1 jne 0x1211b9cd */
  if (!C.zf) goto L_1211b9cd;
  /* 1211b9c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b9c6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1211b9cd:;
  /* 1211b9cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b9d0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1211b9d3 push edx */
  push32((uint32_t)(EDX));
  /* 1211b9d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1211b9d6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1211b9d9u);
  /* 1211b9d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211b9dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211b9df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211b9e2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1211b9e5 jmp 0x1211b9fe */
  goto L_1211b9fe;
L_1211b9e7:;
  /* 1211b9e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b9ea mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1211b9f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211b9f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1211b9f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1211b9f8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1211b9fbu);
  /* 1211b9fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211b9fe:;
  /* 1211b9fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211ba01 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1211ba04 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1211ba07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1211ba0a:;
  /* 1211ba0a mov esp, ebp */
  ESP = (EBP);
  /* 1211ba0c pop ebp */
  EBP = (pop32());
  /* 1211ba0d ret  */
  ESPCHK(0x1211b850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba10 @ 0x1211ba10 (89 bytes, 35 insns) */
void f_1211ba10(void) {
  FTRACE(0x1211ba10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ba10 push ebp */
  push32((uint32_t)(EBP));
  /* 1211ba11 mov ebp, esp */
  EBP = (ESP);
  /* 1211ba13 push ecx */
  push32((uint32_t)(ECX));
  /* 1211ba14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ba17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1211ba1a:;
  /* 1211ba1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ba1d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1211ba1f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ba22 je 0x1211ba42 */
  if (C.zf) goto L_1211ba42;
  /* 1211ba24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ba27 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ba2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211ba2d mov ecx, dword ptr [0x12141c84] */
  ECX = (r32((uint32_t)(0x12141c84)));
  /* 1211ba33 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211ba36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ba39 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ba3b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ba3e jae 0x1211ba42 */
  if (!C.cf) goto L_1211ba42;
  /* 1211ba40 jmp 0x1211ba1a */
  goto L_1211ba1a;
L_1211ba42:;
  /* 1211ba42 mov eax, dword ptr [0x12141c84] */
  EAX = (r32((uint32_t)(0x12141c84)));
  /* 1211ba47 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1211ba4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211ba4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ba4f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ba52 jae 0x1211ba5e */
  if (!C.cf) goto L_1211ba5e;
  /* 1211ba54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ba57 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1211ba59 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211ba5c je 0x1211ba62 */
  if (C.zf) goto L_1211ba62;
L_1211ba5e:;
  /* 1211ba5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211ba60 jmp 0x1211ba65 */
  goto L_1211ba65;
L_1211ba62:;
  /* 1211ba62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1211ba65:;
  /* 1211ba65 mov esp, ebp */
  ESP = (EBP);
  /* 1211ba67 pop ebp */
  EBP = (pop32());
  /* 1211ba68 ret  */
  ESPCHK(0x1211ba10u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x1211ba70 (48 bytes, 17 insns) */
void f_1211ba70(void) {
  FTRACE(0x1211ba70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211ba70 push ebp */
  push32((uint32_t)(EBP));
  /* 1211ba71 mov ebp, esp */
  EBP = (ESP);
  /* 1211ba73 push ecx */
  push32((uint32_t)(ECX));
  /* 1211ba74 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211ba76 call 0x1211b770 */
  push32(0x1211ba7bu); f_1211b770();
  /* 1211ba7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ba7e mov eax, dword ptr [0x121439d4] */
  EAX = (r32((uint32_t)(0x121439d4)));
  /* 1211ba83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211ba86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211ba89 mov dword ptr [0x121439d4], ecx */
  w32((uint32_t)(0x121439d4), (ECX));
  /* 1211ba8f push 9 */
  push32((uint32_t)(0x9u));
  /* 1211ba91 call 0x1211b810 */
  push32(0x1211ba96u); f_1211b810();
  /* 1211ba96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211ba99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211ba9c mov esp, ebp */
  ESP = (EBP);
  /* 1211ba9e pop ebp */
  EBP = (pop32());
  /* 1211ba9f ret  */
  ESPCHK(0x1211ba70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa0 @ 0x1211baa0 (10 bytes, 5 insns) */
void f_1211baa0(void) {
  FTRACE(0x1211baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211baa1 mov ebp, esp */
  EBP = (ESP);
  /* 1211baa3 mov eax, dword ptr [0x121439d4] */
  EAX = (r32((uint32_t)(0x121439d4)));
  /* 1211baa8 pop ebp */
  EBP = (pop32());
  /* 1211baa9 ret  */
  ESPCHK(0x1211baa0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x1211bab0 (45 bytes, 19 insns) */
void f_1211bab0(void) {
  FTRACE(0x1211bab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bab0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bab1 mov ebp, esp */
  EBP = (ESP);
  /* 1211bab3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bab4 mov eax, dword ptr [0x121439d4] */
  EAX = (r32((uint32_t)(0x121439d4)));
  /* 1211bab9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211babc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bac0 je 0x1211bad0 */
  if (C.zf) goto L_1211bad0;
  /* 1211bac2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bac5 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bac6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1211bac9u);
  /* 1211bac9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bacc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211bace jne 0x1211bad4 */
  if (!C.zf) goto L_1211bad4;
L_1211bad0:;
  /* 1211bad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211bad2 jmp 0x1211bad9 */
  goto L_1211bad9;
L_1211bad4:;
  /* 1211bad4 mov eax, 1 */
  EAX = (0x1u);
L_1211bad9:;
  /* 1211bad9 mov esp, ebp */
  ESP = (EBP);
  /* 1211badb pop ebp */
  EBP = (pop32());
  /* 1211badc ret  */
  ESPCHK(0x1211bab0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x1211bae0 (88 bytes, 40 insns) */
void f_1211bae0(void) {
  FTRACE(0x1211bae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bae0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1211bae4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1211bae8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211baea je 0x1211bb33 */
  if (C.zf) goto L_1211bb33;
  /* 1211baec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211baee mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1211baf2 push edi */
  push32((uint32_t)(EDI));
  /* 1211baf3 mov edi, ecx */
  EDI = (ECX);
  /* 1211baf5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211baf8 jb 0x1211bb27 */
  if (C.cf) goto L_1211bb27;
  /* 1211bafa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1211bafc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1211baff je 0x1211bb09 */
  if (C.zf) goto L_1211bb09;
  /* 1211bb01 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1211bb03:;
  /* 1211bb03 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211bb05 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1211bb06 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1211bb07 jne 0x1211bb03 */
  if (!C.zf) goto L_1211bb03;
L_1211bb09:;
  /* 1211bb09 mov ecx, eax */
  ECX = (EAX);
  /* 1211bb0b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1211bb0e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bb10 mov ecx, eax */
  ECX = (EAX);
  /* 1211bb12 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1211bb15 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bb17 mov ecx, edx */
  ECX = (EDX);
  /* 1211bb19 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1211bb1c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1211bb1f je 0x1211bb27 */
  if (C.zf) goto L_1211bb27;
  /* 1211bb21 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1211bb23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1211bb25 je 0x1211bb2d */
  if (C.zf) goto L_1211bb2d;
L_1211bb27:;
  /* 1211bb27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1211bb29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1211bb2a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1211bb2b jne 0x1211bb27 */
  if (!C.zf) goto L_1211bb27;
L_1211bb2d:;
  /* 1211bb2d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1211bb31 pop edi */
  EDI = (pop32());
  /* 1211bb32 ret  */
  ESPCHK(0x1211bae0u, _esp0);
  ESP += 4; return;
L_1211bb33:;
  /* 1211bb33 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1211bb37 ret  */
  ESPCHK(0x1211bae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb40 @ 0x1211bb40 (23 bytes, 10 insns) */
void f_1211bb40(void) {
  FTRACE(0x1211bb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bb40 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bb41 mov ebp, esp */
  EBP = (ESP);
  /* 1211bb43 mov eax, dword ptr [0x121439d0] */
  EAX = (r32((uint32_t)(0x121439d0)));
  /* 1211bb48 push eax */
  push32((uint32_t)(EAX));
  /* 1211bb49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bb4c push ecx */
  push32((uint32_t)(ECX));
  /* 1211bb4d call 0x1211bb60 */
  push32(0x1211bb52u); f_1211bb60();
  /* 1211bb52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bb55 pop ebp */
  EBP = (pop32());
  /* 1211bb56 ret  */
  ESPCHK(0x1211bb40u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x1211bb60 (87 bytes, 34 insns) */
void f_1211bb60(void) {
  FTRACE(0x1211bb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bb60 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bb61 mov ebp, esp */
  EBP = (ESP);
  /* 1211bb63 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bb64 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bb68 jbe 0x1211bb6e */
  if ((C.cf||C.zf)) goto L_1211bb6e;
  /* 1211bb6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211bb6c jmp 0x1211bbb3 */
  goto L_1211bbb3;
L_1211bb6e:;
  /* 1211bb6e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bb72 ja 0x1211bb85 */
  if ((!C.cf&&!C.zf)) goto L_1211bb85;
  /* 1211bb74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bb77 push eax */
  push32((uint32_t)(EAX));
  /* 1211bb78 call 0x1211bbc0 */
  push32(0x1211bb7du); f_1211bbc0();
  /* 1211bb7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bb80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211bb83 jmp 0x1211bb8c */
  goto L_1211bb8c;
L_1211bb85:;
  /* 1211bb85 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1211bb8c:;
  /* 1211bb8c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bb90 jne 0x1211bb98 */
  if (!C.zf) goto L_1211bb98;
  /* 1211bb92 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bb96 jne 0x1211bb9d */
  if (!C.zf) goto L_1211bb9d;
L_1211bb98:;
  /* 1211bb98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211bb9b jmp 0x1211bbb3 */
  goto L_1211bbb3;
L_1211bb9d:;
  /* 1211bb9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bba0 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bba1 call 0x1211bab0 */
  push32(0x1211bba6u); f_1211bab0();
  /* 1211bba6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211bbab jne 0x1211bbb1 */
  if (!C.zf) goto L_1211bbb1;
  /* 1211bbad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211bbaf jmp 0x1211bbb3 */
  goto L_1211bbb3;
L_1211bbb1:;
  /* 1211bbb1 jmp 0x1211bb6e */
  goto L_1211bb6e;
L_1211bbb3:;
  /* 1211bbb3 mov esp, ebp */
  ESP = (EBP);
  /* 1211bbb5 pop ebp */
  EBP = (pop32());
  /* 1211bbb6 ret  */
  ESPCHK(0x1211bb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbc0 @ 0x1211bbc0 (109 bytes, 37 insns) */
void f_1211bbc0(void) {
  FTRACE(0x1211bbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bbc1 mov ebp, esp */
  EBP = (ESP);
  /* 1211bbc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bbc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bbc7 cmp eax, dword ptr [0x12141c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12141c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bbcd ja 0x1211bbfd */
  if ((!C.cf&&!C.zf)) goto L_1211bbfd;
  /* 1211bbcf push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bbd1 call 0x1211b770 */
  push32(0x1211bbd6u); f_1211b770();
  /* 1211bbd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bbd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bbdc push ecx */
  push32((uint32_t)(ECX));
  /* 1211bbdd call 0x1211c700 */
  push32(0x1211bbe2u); f_1211c700();
  /* 1211bbe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bbe5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211bbe8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bbea call 0x1211b810 */
  push32(0x1211bbefu); f_1211b810();
  /* 1211bbef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bbf2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bbf6 je 0x1211bbfd */
  if (C.zf) goto L_1211bbfd;
  /* 1211bbf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211bbfb jmp 0x1211bc29 */
  goto L_1211bc29;
L_1211bbfd:;
  /* 1211bbfd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bc01 jne 0x1211bc0a */
  if (!C.zf) goto L_1211bc0a;
  /* 1211bc03 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1211bc0a:;
  /* 1211bc0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bc0d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bc10 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1211bc13 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1211bc16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bc19 push eax */
  push32((uint32_t)(EAX));
  /* 1211bc1a push 0 */
  push32((uint32_t)(0x0u));
  /* 1211bc1c mov ecx, dword ptr [0x1214518c] */
  ECX = (r32((uint32_t)(0x1214518c)));
  /* 1211bc22 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bc23 call dword ptr [0x12146350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146350))), 0x1211bc29u);
L_1211bc29:;
  /* 1211bc29 mov esp, ebp */
  ESP = (EBP);
  /* 1211bc2b pop ebp */
  EBP = (pop32());
  /* 1211bc2c ret  */
  ESPCHK(0x1211bbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x1211bc30 (10 bytes, 5 insns) */
void f_1211bc30(void) {
  FTRACE(0x1211bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bc31 mov ebp, esp */
  EBP = (ESP);
  /* 1211bc33 mov eax, 1 */
  EAX = (0x1u);
  /* 1211bc38 pop ebp */
  EBP = (pop32());
  /* 1211bc39 ret  */
  ESPCHK(0x1211bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc40 @ 0x1211bc40 (173 bytes, 59 insns) */
void f_1211bc40(void) {
  FTRACE(0x1211bc40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bc40 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bc41 mov ebp, esp */
  EBP = (ESP);
  /* 1211bc43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211bc46 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bc4a jbe 0x1211bc53 */
  if ((C.cf||C.zf)) goto L_1211bc53;
  /* 1211bc4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211bc4e jmp 0x1211bce9 */
  goto L_1211bce9;
L_1211bc53:;
  /* 1211bc53 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bc55 call 0x1211b770 */
  push32(0x1211bc5au); f_1211b770();
  /* 1211bc5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bc5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bc60 push eax */
  push32((uint32_t)(EAX));
  /* 1211bc61 call 0x1211c070 */
  push32(0x1211bc66u); f_1211c070();
  /* 1211bc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bc69 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211bc6c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bc70 je 0x1211bcb1 */
  if (C.zf) goto L_1211bcb1;
  /* 1211bc72 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1211bc79 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bc7c cmp ecx, dword ptr [0x12141c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12141c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bc82 ja 0x1211bca2 */
  if ((!C.cf&&!C.zf)) goto L_1211bca2;
  /* 1211bc84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bc87 push edx */
  push32((uint32_t)(EDX));
  /* 1211bc88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bc8b push eax */
  push32((uint32_t)(EAX));
  /* 1211bc8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211bc8f push ecx */
  push32((uint32_t)(ECX));
  /* 1211bc90 call 0x1211cf40 */
  push32(0x1211bc95u); f_1211cf40();
  /* 1211bc95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bc98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211bc9a je 0x1211bca2 */
  if (C.zf) goto L_1211bca2;
  /* 1211bc9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bc9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1211bca2:;
  /* 1211bca2 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bca4 call 0x1211b810 */
  push32(0x1211bca9u); f_1211b810();
  /* 1211bca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bcac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211bcaf jmp 0x1211bce9 */
  goto L_1211bce9;
L_1211bcb1:;
  /* 1211bcb1 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bcb3 call 0x1211b810 */
  push32(0x1211bcb8u); f_1211b810();
  /* 1211bcb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bcbb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bcbf jne 0x1211bcc8 */
  if (!C.zf) goto L_1211bcc8;
  /* 1211bcc1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1211bcc8:;
  /* 1211bcc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bccb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bcce and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1211bcd0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1211bcd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bcd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bcd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bcda push edx */
  push32((uint32_t)(EDX));
  /* 1211bcdb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1211bcdd mov eax, dword ptr [0x1214518c] */
  EAX = (r32((uint32_t)(0x1214518c)));
  /* 1211bce2 push eax */
  push32((uint32_t)(EAX));
  /* 1211bce3 call dword ptr [0x12146358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146358))), 0x1211bce9u);
L_1211bce9:;
  /* 1211bce9 mov esp, ebp */
  ESP = (EBP);
  /* 1211bceb pop ebp */
  EBP = (pop32());
  /* 1211bcec ret  */
  ESPCHK(0x1211bc40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcf0 @ 0x1211bcf0 (490 bytes, 165 insns) */
void f_1211bcf0(void) {
  FTRACE(0x1211bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 1211bcf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211bcf6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bcfa jne 0x1211bd0d */
  if (!C.zf) goto L_1211bd0d;
  /* 1211bcfc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bcff push eax */
  push32((uint32_t)(EAX));
  /* 1211bd00 call 0x1211bb40 */
  push32(0x1211bd05u); f_1211bb40();
  /* 1211bd05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bd08 jmp 0x1211bed6 */
  goto L_1211bed6;
L_1211bd0d:;
  /* 1211bd0d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bd11 jne 0x1211bd26 */
  if (!C.zf) goto L_1211bd26;
  /* 1211bd13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bd16 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bd17 call 0x1211bee0 */
  push32(0x1211bd1cu); f_1211bee0();
  /* 1211bd1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bd1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211bd21 jmp 0x1211bed6 */
  goto L_1211bed6;
L_1211bd26:;
  /* 1211bd26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1211bd2d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bd31 ja 0x1211bea9 */
  if ((!C.cf&&!C.zf)) goto L_1211bea9;
  /* 1211bd37 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bd39 call 0x1211b770 */
  push32(0x1211bd3eu); f_1211b770();
  /* 1211bd3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bd41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bd44 push edx */
  push32((uint32_t)(EDX));
  /* 1211bd45 call 0x1211c070 */
  push32(0x1211bd4au); f_1211c070();
  /* 1211bd4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bd4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1211bd50 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bd54 je 0x1211be6c */
  if (C.zf) goto L_1211be6c;
  /* 1211bd5a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bd5d cmp eax, dword ptr [0x12141c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12141c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bd63 ja 0x1211bde0 */
  if ((!C.cf&&!C.zf)) goto L_1211bde0;
  /* 1211bd65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bd68 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bd69 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bd6c push edx */
  push32((uint32_t)(EDX));
  /* 1211bd6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211bd70 push eax */
  push32((uint32_t)(EAX));
  /* 1211bd71 call 0x1211cf40 */
  push32(0x1211bd76u); f_1211cf40();
  /* 1211bd76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bd79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211bd7b je 0x1211bd85 */
  if (C.zf) goto L_1211bd85;
  /* 1211bd7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bd80 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1211bd83 jmp 0x1211bde0 */
  goto L_1211bde0;
L_1211bd85:;
  /* 1211bd85 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bd88 push edx */
  push32((uint32_t)(EDX));
  /* 1211bd89 call 0x1211c700 */
  push32(0x1211bd8eu); f_1211c700();
  /* 1211bd8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bd91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211bd94 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bd98 je 0x1211bde0 */
  if (C.zf) goto L_1211bde0;
  /* 1211bd9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bd9d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 1211bda0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211bda3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1211bda6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211bda9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bdac jae 0x1211bdb6 */
  if (!C.cf) goto L_1211bdb6;
  /* 1211bdae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211bdb1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1211bdb4 jmp 0x1211bdbc */
  goto L_1211bdbc;
L_1211bdb6:;
  /* 1211bdb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bdb9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1211bdbc:;
  /* 1211bdbc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1211bdbf push edx */
  push32((uint32_t)(EDX));
  /* 1211bdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bdc3 push eax */
  push32((uint32_t)(EAX));
  /* 1211bdc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211bdc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bdc8 call 0x1211e650 */
  push32(0x1211bdcdu); f_1211e650();
  /* 1211bdcd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bdd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bdd3 push edx */
  push32((uint32_t)(EDX));
  /* 1211bdd4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211bdd7 push eax */
  push32((uint32_t)(EAX));
  /* 1211bdd8 call 0x1211c130 */
  push32(0x1211bdddu); f_1211c130();
  /* 1211bddd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211bde0:;
  /* 1211bde0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bde4 jne 0x1211be60 */
  if (!C.zf) goto L_1211be60;
  /* 1211bde6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bdea jne 0x1211bdf3 */
  if (!C.zf) goto L_1211bdf3;
  /* 1211bdec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1211bdf3:;
  /* 1211bdf3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bdf6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bdf9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1211bdfc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1211bdff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211be02 push edx */
  push32((uint32_t)(EDX));
  /* 1211be03 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211be05 mov eax, dword ptr [0x1214518c] */
  EAX = (r32((uint32_t)(0x1214518c)));
  /* 1211be0a push eax */
  push32((uint32_t)(EAX));
  /* 1211be0b call dword ptr [0x12146350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146350))), 0x1211be11u);
  /* 1211be11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1211be14 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211be18 je 0x1211be60 */
  if (C.zf) goto L_1211be60;
  /* 1211be1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211be1d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1211be20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1211be23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1211be26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211be29 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211be2c jae 0x1211be36 */
  if (!C.cf) goto L_1211be36;
  /* 1211be2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211be31 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1211be34 jmp 0x1211be3c */
  goto L_1211be3c;
L_1211be36:;
  /* 1211be36 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211be39 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1211be3c:;
  /* 1211be3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1211be3f push eax */
  push32((uint32_t)(EAX));
  /* 1211be40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211be43 push ecx */
  push32((uint32_t)(ECX));
  /* 1211be44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211be47 push edx */
  push32((uint32_t)(EDX));
  /* 1211be48 call 0x1211e650 */
  push32(0x1211be4du); f_1211e650();
  /* 1211be4d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211be50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211be53 push eax */
  push32((uint32_t)(EAX));
  /* 1211be54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1211be57 push ecx */
  push32((uint32_t)(ECX));
  /* 1211be58 call 0x1211c130 */
  push32(0x1211be5du); f_1211c130();
  /* 1211be5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1211be60:;
  /* 1211be60 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211be62 call 0x1211b810 */
  push32(0x1211be67u); f_1211b810();
  /* 1211be67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211be6a jmp 0x1211bea9 */
  goto L_1211bea9;
L_1211be6c:;
  /* 1211be6c push 9 */
  push32((uint32_t)(0x9u));
  /* 1211be6e call 0x1211b810 */
  push32(0x1211be73u); f_1211b810();
  /* 1211be73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211be76 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211be7a jne 0x1211be83 */
  if (!C.zf) goto L_1211be83;
  /* 1211be7c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_1211be83:;
  /* 1211be83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211be86 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1211be89 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1211be8c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1211be8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211be92 push eax */
  push32((uint32_t)(EAX));
  /* 1211be93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211be96 push ecx */
  push32((uint32_t)(ECX));
  /* 1211be97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211be99 mov edx, dword ptr [0x1214518c] */
  EDX = (r32((uint32_t)(0x1214518c)));
  /* 1211be9f push edx */
  push32((uint32_t)(EDX));
  /* 1211bea0 call dword ptr [0x12146358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146358))), 0x1211bea6u);
  /* 1211bea6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1211bea9:;
  /* 1211bea9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bead jne 0x1211beb8 */
  if (!C.zf) goto L_1211beb8;
  /* 1211beaf cmp dword ptr [0x121439d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121439d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211beb6 jne 0x1211bebd */
  if (!C.zf) goto L_1211bebd;
L_1211beb8:;
  /* 1211beb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1211bebb jmp 0x1211bed6 */
  goto L_1211bed6;
L_1211bebd:;
  /* 1211bebd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1211bec0 push eax */
  push32((uint32_t)(EAX));
  /* 1211bec1 call 0x1211bab0 */
  push32(0x1211bec6u); f_1211bab0();
  /* 1211bec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bec9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211becb jne 0x1211bed1 */
  if (!C.zf) goto L_1211bed1;
  /* 1211becd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1211becf jmp 0x1211bed6 */
  goto L_1211bed6;
L_1211bed1:;
  /* 1211bed1 jmp 0x1211bd26 */
  goto L_1211bd26;
L_1211bed6:;
  /* 1211bed6 mov esp, ebp */
  ESP = (EBP);
  /* 1211bed8 pop ebp */
  EBP = (pop32());
  /* 1211bed9 ret  */
  ESPCHK(0x1211bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bee0 @ 0x1211bee0 (104 bytes, 38 insns) */
void f_1211bee0(void) {
  FTRACE(0x1211bee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bee1 mov ebp, esp */
  EBP = (ESP);
  /* 1211bee3 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bee4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bee8 jne 0x1211beec */
  if (!C.zf) goto L_1211beec;
  /* 1211beea jmp 0x1211bf44 */
  goto L_1211bf44;
L_1211beec:;
  /* 1211beec push 9 */
  push32((uint32_t)(0x9u));
  /* 1211beee call 0x1211b770 */
  push32(0x1211bef3u); f_1211b770();
  /* 1211bef3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bef6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bef9 push eax */
  push32((uint32_t)(EAX));
  /* 1211befa call 0x1211c070 */
  push32(0x1211beffu); f_1211c070();
  /* 1211beff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bf02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1211bf05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bf09 je 0x1211bf27 */
  if (C.zf) goto L_1211bf27;
  /* 1211bf0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bf0e push ecx */
  push32((uint32_t)(ECX));
  /* 1211bf0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211bf12 push edx */
  push32((uint32_t)(EDX));
  /* 1211bf13 call 0x1211c130 */
  push32(0x1211bf18u); f_1211c130();
  /* 1211bf18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bf1b push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bf1d call 0x1211b810 */
  push32(0x1211bf22u); f_1211b810();
  /* 1211bf22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bf25 jmp 0x1211bf44 */
  goto L_1211bf44;
L_1211bf27:;
  /* 1211bf27 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bf29 call 0x1211b810 */
  push32(0x1211bf2eu); f_1211b810();
  /* 1211bf2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bf31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1211bf34 push eax */
  push32((uint32_t)(EAX));
  /* 1211bf35 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211bf37 mov ecx, dword ptr [0x1214518c] */
  ECX = (r32((uint32_t)(0x1214518c)));
  /* 1211bf3d push ecx */
  push32((uint32_t)(ECX));
  /* 1211bf3e call dword ptr [0x1214637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1214637c))), 0x1211bf44u);
L_1211bf44:;
  /* 1211bf44 mov esp, ebp */
  ESP = (EBP);
  /* 1211bf46 pop ebp */
  EBP = (pop32());
  /* 1211bf47 ret  */
  ESPCHK(0x1211bee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf50 @ 0x1211bf50 (116 bytes, 34 insns) */
void f_1211bf50(void) {
  FTRACE(0x1211bf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bf50 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bf51 mov ebp, esp */
  EBP = (ESP);
  /* 1211bf53 push ecx */
  push32((uint32_t)(ECX));
  /* 1211bf54 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1211bf5b push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bf5d call 0x1211b770 */
  push32(0x1211bf62u); f_1211b770();
  /* 1211bf62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bf65 call 0x1211d660 */
  push32(0x1211bf6au); f_1211d660();
  /* 1211bf6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211bf6c jge 0x1211bf75 */
  if ((C.sf==C.of)) goto L_1211bf75;
  /* 1211bf6e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1211bf75:;
  /* 1211bf75 push 9 */
  push32((uint32_t)(0x9u));
  /* 1211bf77 call 0x1211b810 */
  push32(0x1211bf7cu); f_1211b810();
  /* 1211bf7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1211bf7f push 0 */
  push32((uint32_t)(0x0u));
  /* 1211bf81 push 0 */
  push32((uint32_t)(0x0u));
  /* 1211bf83 mov eax, dword ptr [0x1214518c] */
  EAX = (r32((uint32_t)(0x1214518c)));
  /* 1211bf88 push eax */
  push32((uint32_t)(EAX));
  /* 1211bf89 call dword ptr [0x12146390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12146390))), 0x1211bf8fu);
  /* 1211bf8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1211bf91 jne 0x1211bfbd */
  if (!C.zf) goto L_1211bfbd;
  /* 1211bf93 call dword ptr [0x121463f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121463f8))), 0x1211bf99u);
  /* 1211bf99 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1211bf9c jne 0x1211bfb6 */
  if (!C.zf) goto L_1211bfb6;
  /* 1211bf9e call 0x1211fc50 */
  push32(0x1211bfa3u); f_1211fc50();
  /* 1211bfa3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1211bfa9 call 0x1211fc40 */
  push32(0x1211bfaeu); f_1211fc40();
  /* 1211bfae mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1211bfb4 jmp 0x1211bfbd */
  goto L_1211bfbd;
L_1211bfb6:;
  /* 1211bfb6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1211bfbd:;
  /* 1211bfbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1211bfc0 mov esp, ebp */
  ESP = (EBP);
  /* 1211bfc2 pop ebp */
  EBP = (pop32());
  /* 1211bfc3 ret  */
  ESPCHK(0x1211bf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfd0 @ 0x1211bfd0 (10 bytes, 5 insns) */
void f_1211bfd0(void) {
  FTRACE(0x1211bfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1211bfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1211bfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1211bfd3 call 0x1211bf50 */
  push32(0x1211bfd8u); f_1211bf50();
  /* 1211bfd8 pop ebp */
  EBP = (pop32());
  /* 1211bfd9 ret  */
  ESPCHK(0x1211bfd0u, _esp0);
  ESP += 4; return;
}

