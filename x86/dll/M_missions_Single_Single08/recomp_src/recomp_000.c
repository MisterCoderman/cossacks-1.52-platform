#include "recomp.h"

/* thunk_FUN_10001a50 @ 0x10d91005 (5 bytes, 1 insns) */
void f_10d91005(void) {
  FTRACE(0x10d91005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91005 jmp 0x10d91a50 */
  f_10d91a50(); return;
}

/* OnInit @ 0x10d9100a (5 bytes, 1 insns) */
void f_10d9100a(void) {
  FTRACE(0x10d9100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9100a jmp 0x10d91090 */
  f_10d91090(); return;
}

/* thunk_FUN_10001030 @ 0x10d9100f (5 bytes, 1 insns) */
void f_10d9100f(void) {
  FTRACE(0x10d9100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d9100f jmp 0x10d91030 */
  f_10d91030(); return;
}

/* ProcessScenary @ 0x10d91014 (5 bytes, 1 insns) */
void f_10d91014(void) {
  FTRACE(0x10d91014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91014 jmp 0x10d913d0 */
  f_10d913d0(); return;
}

/* FUN_10001030 @ 0x10d91030 (67 bytes, 26 insns) */
void f_10d91030(void) {
  FTRACE(0x10d91030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91030 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91031 mov ebp, esp */
  EBP = (ESP);
  /* 10d91033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d91036 push ebx */
  push32((uint32_t)(EBX));
  /* 10d91037 push esi */
  push32((uint32_t)(ESI));
  /* 10d91038 push edi */
  push32((uint32_t)(EDI));
  /* 10d91039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10d9103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10d91041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d91046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d91048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91052 je 0x10d91056 */
  if (C.zf) goto L_10d91056;
  /* 10d91054 jmp 0x10d9105b */
  goto L_10d9105b;
L_10d91056:;
  /* 10d91056 call 0x10d9100a */
  push32(0x10d9105bu); f_10d9100a();
L_10d9105b:;
  /* 10d9105b mov eax, 1 */
  EAX = (0x1u);
  /* 10d91060 pop edi */
  EDI = (pop32());
  /* 10d91061 pop esi */
  ESI = (pop32());
  /* 10d91062 pop ebx */
  EBX = (pop32());
  /* 10d91063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91068 call 0x10d91b10 */
  push32(0x10d9106du); f_10d91b10();
  /* 10d9106d mov esp, ebp */
  ESP = (EBP);
  /* 10d9106f pop ebp */
  EBP = (pop32());
  /* 10d91070 ret 0xc */
  ESPCHK(0x10d91030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10d91090 (663 bytes, 183 insns) */
void f_10d91090(void) {
  FTRACE(0x10d91090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91090 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91091 mov ebp, esp */
  EBP = (ESP);
  /* 10d91093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d91096 push ebx */
  push32((uint32_t)(EBX));
  /* 10d91097 push esi */
  push32((uint32_t)(ESI));
  /* 10d91098 push edi */
  push32((uint32_t)(EDI));
  /* 10d91099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d9109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d910a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d910a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d910a8 mov esi, esp */
  ESI = (ESP);
  /* 10d910aa push 0x10db90bc */
  push32((uint32_t)(0x10db90bcu));
  /* 10d910af push 0x10dbe3e0 */
  push32((uint32_t)(0x10dbe3e0u));
  /* 10d910b4 call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d910bau);
  /* 10d910ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d910bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d910bf call 0x10d91b10 */
  push32(0x10d910c4u); f_10d91b10();
  /* 10d910c4 mov esi, esp */
  ESI = (ESP);
  /* 10d910c6 push 0x10db90b4 */
  push32((uint32_t)(0x10db90b4u));
  /* 10d910cb push 0x10dbe3f0 */
  push32((uint32_t)(0x10dbe3f0u));
  /* 10d910d0 call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d910d6u);
  /* 10d910d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d910d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d910db call 0x10d91b10 */
  push32(0x10d910e0u); f_10d91b10();
  /* 10d910e0 mov esi, esp */
  ESI = (ESP);
  /* 10d910e2 push 0x10db90ac */
  push32((uint32_t)(0x10db90acu));
  /* 10d910e7 push 0x10dbe3e8 */
  push32((uint32_t)(0x10dbe3e8u));
  /* 10d910ec call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d910f2u);
  /* 10d910f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d910f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d910f7 call 0x10d91b10 */
  push32(0x10d910fcu); f_10d91b10();
  /* 10d910fc mov esi, esp */
  ESI = (ESP);
  /* 10d910fe push 0x10db90a4 */
  push32((uint32_t)(0x10db90a4u));
  /* 10d91103 push 0x10dbe400 */
  push32((uint32_t)(0x10dbe400u));
  /* 10d91108 call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d9110eu);
  /* 10d9110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91113 call 0x10d91b10 */
  push32(0x10d91118u); f_10d91b10();
  /* 10d91118 mov esi, esp */
  ESI = (ESP);
  /* 10d9111a push 0x10db909c */
  push32((uint32_t)(0x10db909cu));
  /* 10d9111f push 0x10dbe3f8 */
  push32((uint32_t)(0x10dbe3f8u));
  /* 10d91124 call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d9112au);
  /* 10d9112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9112f call 0x10d91b10 */
  push32(0x10d91134u); f_10d91b10();
  /* 10d91134 mov esi, esp */
  ESI = (ESP);
  /* 10d91136 push 0x10db9094 */
  push32((uint32_t)(0x10db9094u));
  /* 10d9113b push 0x10dbe410 */
  push32((uint32_t)(0x10dbe410u));
  /* 10d91140 call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d91146u);
  /* 10d91146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9114b call 0x10d91b10 */
  push32(0x10d91150u); f_10d91b10();
  /* 10d91150 mov esi, esp */
  ESI = (ESP);
  /* 10d91152 push 0x10db908c */
  push32((uint32_t)(0x10db908cu));
  /* 10d91157 push 0x10dbe408 */
  push32((uint32_t)(0x10dbe408u));
  /* 10d9115c call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d91162u);
  /* 10d91162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91167 call 0x10d91b10 */
  push32(0x10d9116cu); f_10d91b10();
  /* 10d9116c mov esi, esp */
  ESI = (ESP);
  /* 10d9116e push 0x10db9084 */
  push32((uint32_t)(0x10db9084u));
  /* 10d91173 push 0x10dbe420 */
  push32((uint32_t)(0x10dbe420u));
  /* 10d91178 call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d9117eu);
  /* 10d9117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91183 call 0x10d91b10 */
  push32(0x10d91188u); f_10d91b10();
  /* 10d91188 mov esi, esp */
  ESI = (ESP);
  /* 10d9118a push 0x10db907c */
  push32((uint32_t)(0x10db907cu));
  /* 10d9118f push 0x10dbe418 */
  push32((uint32_t)(0x10dbe418u));
  /* 10d91194 call dword ptr [0x10dc03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f4))), 0x10d9119au);
  /* 10d9119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9119f call 0x10d91b10 */
  push32(0x10d911a4u); f_10d91b10();
  /* 10d911a4 mov esi, esp */
  ESI = (ESP);
  /* 10d911a6 push 0x10db9070 */
  push32((uint32_t)(0x10db9070u));
  /* 10d911ab push 0x10dbe428 */
  push32((uint32_t)(0x10dbe428u));
  /* 10d911b0 call dword ptr [0x10dc03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03ec))), 0x10d911b6u);
  /* 10d911b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d911b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d911bb call 0x10d91b10 */
  push32(0x10d911c0u); f_10d91b10();
  /* 10d911c0 mov esi, esp */
  ESI = (ESP);
  /* 10d911c2 push 0x10db9060 */
  push32((uint32_t)(0x10db9060u));
  /* 10d911c7 push 0x10dbe430 */
  push32((uint32_t)(0x10dbe430u));
  /* 10d911cc call dword ptr [0x10dc03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03ec))), 0x10d911d2u);
  /* 10d911d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d911d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d911d7 call 0x10d91b10 */
  push32(0x10d911dcu); f_10d91b10();
  /* 10d911dc mov esi, esp */
  ESI = (ESP);
  /* 10d911de push 0x10db9050 */
  push32((uint32_t)(0x10db9050u));
  /* 10d911e3 push 0x10dbe438 */
  push32((uint32_t)(0x10dbe438u));
  /* 10d911e8 call dword ptr [0x10dc03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03ec))), 0x10d911eeu);
  /* 10d911ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d911f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d911f3 call 0x10d91b10 */
  push32(0x10d911f8u); f_10d91b10();
  /* 10d911f8 mov esi, esp */
  ESI = (ESP);
  /* 10d911fa push 0x10db9044 */
  push32((uint32_t)(0x10db9044u));
  /* 10d911ff push 0x10dbe440 */
  push32((uint32_t)(0x10dbe440u));
  /* 10d91204 call dword ptr [0x10dc03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03ec))), 0x10d9120au);
  /* 10d9120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9120f call 0x10d91b10 */
  push32(0x10d91214u); f_10d91b10();
  /* 10d91214 mov esi, esp */
  ESI = (ESP);
  /* 10d91216 push 0x10db9034 */
  push32((uint32_t)(0x10db9034u));
  /* 10d9121b push 0x10dbe448 */
  push32((uint32_t)(0x10dbe448u));
  /* 10d91220 call dword ptr [0x10dc03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03ec))), 0x10d91226u);
  /* 10d91226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9122b call 0x10d91b10 */
  push32(0x10d91230u); f_10d91b10();
  /* 10d91230 mov esi, esp */
  ESI = (ESP);
  /* 10d91232 push 0x10db9024 */
  push32((uint32_t)(0x10db9024u));
  /* 10d91237 push 0x10dbe450 */
  push32((uint32_t)(0x10dbe450u));
  /* 10d9123c call dword ptr [0x10dc03ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03ec))), 0x10d91242u);
  /* 10d91242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91247 call 0x10d91b10 */
  push32(0x10d9124cu); f_10d91b10();
  /* 10d9124c mov esi, esp */
  ESI = (ESP);
  /* 10d9124e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91250 push 0x10dbe428 */
  push32((uint32_t)(0x10dbe428u));
  /* 10d91255 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91257 call dword ptr [0x10dc03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03fc))), 0x10d9125du);
  /* 10d9125d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91260 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91262 call 0x10d91b10 */
  push32(0x10d91267u); f_10d91b10();
  /* 10d91267 mov esi, esp */
  ESI = (ESP);
  /* 10d91269 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9126b push 0x10dbe430 */
  push32((uint32_t)(0x10dbe430u));
  /* 10d91270 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91272 call dword ptr [0x10dc03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03fc))), 0x10d91278u);
  /* 10d91278 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9127b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9127d call 0x10d91b10 */
  push32(0x10d91282u); f_10d91b10();
  /* 10d91282 mov esi, esp */
  ESI = (ESP);
  /* 10d91284 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91286 push 0x10dbe438 */
  push32((uint32_t)(0x10dbe438u));
  /* 10d9128b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9128d call dword ptr [0x10dc03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03fc))), 0x10d91293u);
  /* 10d91293 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91296 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91298 call 0x10d91b10 */
  push32(0x10d9129du); f_10d91b10();
  /* 10d9129d mov esi, esp */
  ESI = (ESP);
  /* 10d9129f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d912a1 push 0x10dbe440 */
  push32((uint32_t)(0x10dbe440u));
  /* 10d912a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d912a8 call dword ptr [0x10dc03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03fc))), 0x10d912aeu);
  /* 10d912ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d912b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d912b3 call 0x10d91b10 */
  push32(0x10d912b8u); f_10d91b10();
  /* 10d912b8 mov esi, esp */
  ESI = (ESP);
  /* 10d912ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10d912bc push 0x10dbe448 */
  push32((uint32_t)(0x10dbe448u));
  /* 10d912c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d912c3 call dword ptr [0x10dc03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03fc))), 0x10d912c9u);
  /* 10d912c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d912cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d912ce call 0x10d91b10 */
  push32(0x10d912d3u); f_10d91b10();
  /* 10d912d3 mov esi, esp */
  ESI = (ESP);
  /* 10d912d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d912d7 push 0x10dbe450 */
  push32((uint32_t)(0x10dbe450u));
  /* 10d912dc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d912de call dword ptr [0x10dc03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03fc))), 0x10d912e4u);
  /* 10d912e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d912e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d912e9 call 0x10d91b10 */
  push32(0x10d912eeu); f_10d91b10();
  /* 10d912ee mov esi, esp */
  ESI = (ESP);
  /* 10d912f0 call dword ptr [0x10dc0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0400))), 0x10d912f6u);
  /* 10d912f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d912f8 call 0x10d91b10 */
  push32(0x10d912fdu); f_10d91b10();
  /* 10d912fd mov esi, esp */
  ESI = (ESP);
  /* 10d912ff push 0x10db901c */
  push32((uint32_t)(0x10db901cu));
  /* 10d91304 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91306 call dword ptr [0x10dc03f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f8))), 0x10d9130cu);
  /* 10d9130c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9130f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91311 call 0x10d91b10 */
  push32(0x10d91316u); f_10d91b10();
  /* 10d91316 pop edi */
  EDI = (pop32());
  /* 10d91317 pop esi */
  ESI = (pop32());
  /* 10d91318 pop ebx */
  EBX = (pop32());
  /* 10d91319 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9131c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9131e call 0x10d91b10 */
  push32(0x10d91323u); f_10d91b10();
  /* 10d91323 mov esp, ebp */
  ESP = (EBP);
  /* 10d91325 pop ebp */
  EBP = (pop32());
  /* 10d91326 ret  */
  ESPCHK(0x10d91090u, _esp0);
  ESP += 4; return;
}

/* FUN_100013d0 @ 0x10d913d0 (1323 bytes, 402 insns) */
void f_10d913d0(void) {
  FTRACE(0x10d913d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d913d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d913d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d913d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d913d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d913d7 push esi */
  push32((uint32_t)(ESI));
  /* 10d913d8 push edi */
  push32((uint32_t)(EDI));
  /* 10d913d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d913dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d913e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d913e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d913e8 mov esi, esp */
  ESI = (ESP);
  /* 10d913ea push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d913ec call dword ptr [0x10dc03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c0))), 0x10d913f2u);
  /* 10d913f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d913f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d913f7 call 0x10d91b10 */
  push32(0x10d913fcu); f_10d91b10();
  /* 10d913fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91403 je 0x10d91630 */
  if (C.zf) goto L_10d91630;
  /* 10d91409 mov esi, esp */
  ESI = (ESP);
  /* 10d9140b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9140d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d9140f call dword ptr [0x10dc03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03cc))), 0x10d91415u);
  /* 10d91415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9141a call 0x10d91b10 */
  push32(0x10d9141fu); f_10d91b10();
  /* 10d9141f mov esi, esp */
  ESI = (ESP);
  /* 10d91421 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d91426 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d91428 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9142a call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d91430u);
  /* 10d91430 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91433 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91435 call 0x10d91b10 */
  push32(0x10d9143au); f_10d91b10();
  /* 10d9143a mov esi, esp */
  ESI = (ESP);
  /* 10d9143c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d91441 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91443 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91445 call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d9144bu);
  /* 10d9144b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9144e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91450 call 0x10d91b10 */
  push32(0x10d91455u); f_10d91b10();
  /* 10d91455 mov esi, esp */
  ESI = (ESP);
  /* 10d91457 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d9145c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9145e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91460 call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d91466u);
  /* 10d91466 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9146b call 0x10d91b10 */
  push32(0x10d91470u); f_10d91b10();
  /* 10d91470 mov esi, esp */
  ESI = (ESP);
  /* 10d91472 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d91477 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d91479 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9147b call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d91481u);
  /* 10d91481 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91484 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91486 call 0x10d91b10 */
  push32(0x10d9148bu); f_10d91b10();
  /* 10d9148b mov esi, esp */
  ESI = (ESP);
  /* 10d9148d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d91492 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d91494 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91496 call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d9149cu);
  /* 10d9149c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9149f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d914a1 call 0x10d91b10 */
  push32(0x10d914a6u); f_10d91b10();
  /* 10d914a6 mov esi, esp */
  ESI = (ESP);
  /* 10d914a8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d914ad push 4 */
  push32((uint32_t)(0x4u));
  /* 10d914af push 0 */
  push32((uint32_t)(0x0u));
  /* 10d914b1 call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d914b7u);
  /* 10d914b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d914ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d914bc call 0x10d91b10 */
  push32(0x10d914c1u); f_10d91b10();
  /* 10d914c1 mov esi, esp */
  ESI = (ESP);
  /* 10d914c3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d914c8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d914ca push 1 */
  push32((uint32_t)(0x1u));
  /* 10d914cc call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d914d2u);
  /* 10d914d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d914d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d914d7 call 0x10d91b10 */
  push32(0x10d914dcu); f_10d91b10();
  /* 10d914dc mov esi, esp */
  ESI = (ESP);
  /* 10d914de push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d914e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d914e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d914e7 call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d914edu);
  /* 10d914ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d914f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d914f2 call 0x10d91b10 */
  push32(0x10d914f7u); f_10d91b10();
  /* 10d914f7 mov esi, esp */
  ESI = (ESP);
  /* 10d914f9 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d914fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91500 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91502 call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d91508u);
  /* 10d91508 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9150b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9150d call 0x10d91b10 */
  push32(0x10d91512u); f_10d91b10();
  /* 10d91512 mov esi, esp */
  ESI = (ESP);
  /* 10d91514 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d91519 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9151b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9151d call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d91523u);
  /* 10d91523 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91526 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91528 call 0x10d91b10 */
  push32(0x10d9152du); f_10d91b10();
  /* 10d9152d mov esi, esp */
  ESI = (ESP);
  /* 10d9152f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d91534 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d91536 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91538 call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d9153eu);
  /* 10d9153e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91541 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91543 call 0x10d91b10 */
  push32(0x10d91548u); f_10d91b10();
  /* 10d91548 mov esi, esp */
  ESI = (ESP);
  /* 10d9154a push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d9154f push 4 */
  push32((uint32_t)(0x4u));
  /* 10d91551 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91553 call dword ptr [0x10dc03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d0))), 0x10d91559u);
  /* 10d91559 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9155c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9155e call 0x10d91b10 */
  push32(0x10d91563u); f_10d91b10();
  /* 10d91563 mov esi, esp */
  ESI = (ESP);
  /* 10d91565 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91567 push 0x10dbe408 */
  push32((uint32_t)(0x10dbe408u));
  /* 10d9156c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9156e call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d91574u);
  /* 10d91574 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91577 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91579 call 0x10d91b10 */
  push32(0x10d9157eu); f_10d91b10();
  /* 10d9157e mov esi, esp */
  ESI = (ESP);
  /* 10d91580 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91582 push 0x10dbe420 */
  push32((uint32_t)(0x10dbe420u));
  /* 10d91587 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91589 call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d9158fu);
  /* 10d9158f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91592 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91594 call 0x10d91b10 */
  push32(0x10d91599u); f_10d91b10();
  /* 10d91599 mov esi, esp */
  ESI = (ESP);
  /* 10d9159b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9159d push 0x10dbe418 */
  push32((uint32_t)(0x10dbe418u));
  /* 10d915a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d915a4 call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d915aau);
  /* 10d915aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d915ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d915af call 0x10d91b10 */
  push32(0x10d915b4u); f_10d91b10();
  /* 10d915b4 mov esi, esp */
  ESI = (ESP);
  /* 10d915b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d915b8 call dword ptr [0x10dc03d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d8))), 0x10d915beu);
  /* 10d915be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d915c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d915c3 call 0x10d91b10 */
  push32(0x10d915c8u); f_10d91b10();
  /* 10d915c8 mov esi, esp */
  ESI = (ESP);
  /* 10d915ca push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d915cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d915ce push 1 */
  push32((uint32_t)(0x1u));
  /* 10d915d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d915d2 push 0x10db90d4 */
  push32((uint32_t)(0x10db90d4u));
  /* 10d915d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d915d9 call dword ptr [0x10dc03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03dc))), 0x10d915dfu);
  /* 10d915df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d915e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d915e4 call 0x10d91b10 */
  push32(0x10d915e9u); f_10d91b10();
  /* 10d915e9 mov esi, esp */
  ESI = (ESP);
  /* 10d915eb push 0x10db90cc */
  push32((uint32_t)(0x10db90ccu));
  /* 10d915f0 call dword ptr [0x10dc03d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d4))), 0x10d915f6u);
  /* 10d915f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d915f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d915fb call 0x10d91b10 */
  push32(0x10d91600u); f_10d91b10();
  /* 10d91600 mov esi, esp */
  ESI = (ESP);
  /* 10d91602 push 0x10db90c4 */
  push32((uint32_t)(0x10db90c4u));
  /* 10d91607 call dword ptr [0x10dc03d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03d4))), 0x10d9160du);
  /* 10d9160d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91610 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91612 call 0x10d91b10 */
  push32(0x10d91617u); f_10d91b10();
  /* 10d91617 mov esi, esp */
  ESI = (ESP);
  /* 10d91619 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10d9161e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91620 call dword ptr [0x10dc03e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03e4))), 0x10d91626u);
  /* 10d91626 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91629 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9162b call 0x10d91b10 */
  push32(0x10d91630u); f_10d91b10();
L_10d91630:;
  /* 10d91630 mov esi, esp */
  ESI = (ESP);
  /* 10d91632 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10d91634 call dword ptr [0x10dc03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c0))), 0x10d9163au);
  /* 10d9163a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9163d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9163f call 0x10d91b10 */
  push32(0x10d91644u); f_10d91b10();
  /* 10d91644 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91649 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9164b je 0x10d91681 */
  if (C.zf) goto L_10d91681;
  /* 10d9164d mov esi, esp */
  ESI = (ESP);
  /* 10d9164f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91651 push 0x10dbe408 */
  push32((uint32_t)(0x10dbe408u));
  /* 10d91656 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91658 call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d9165eu);
  /* 10d9165e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91661 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91663 call 0x10d91b10 */
  push32(0x10d91668u); f_10d91b10();
  /* 10d91668 mov esi, esp */
  ESI = (ESP);
  /* 10d9166a push 0x10dbe3e8 */
  push32((uint32_t)(0x10dbe3e8u));
  /* 10d9166f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91671 call dword ptr [0x10dc03e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03e8))), 0x10d91677u);
  /* 10d91677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9167a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9167c call 0x10d91b10 */
  push32(0x10d91681u); f_10d91b10();
L_10d91681:;
  /* 10d91681 mov esi, esp */
  ESI = (ESP);
  /* 10d91683 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d91685 call dword ptr [0x10dc03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c0))), 0x10d9168bu);
  /* 10d9168b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9168e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91690 call 0x10d91b10 */
  push32(0x10d91695u); f_10d91b10();
  /* 10d91695 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9169a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9169c je 0x10d916db */
  if (C.zf) goto L_10d916db;
  /* 10d9169e push 0x10dbe3e8 */
  push32((uint32_t)(0x10dbe3e8u));
  /* 10d916a3 call 0x10d91005 */
  push32(0x10d916a8u); f_10d91005();
  /* 10d916a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d916ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d916ad jne 0x10d916db */
  if (!C.zf) goto L_10d916db;
  /* 10d916af mov esi, esp */
  ESI = (ESP);
  /* 10d916b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d916b3 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d916b5 call dword ptr [0x10dc03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03cc))), 0x10d916bbu);
  /* 10d916bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d916be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d916c0 call 0x10d91b10 */
  push32(0x10d916c5u); f_10d91b10();
  /* 10d916c5 mov esi, esp */
  ESI = (ESP);
  /* 10d916c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d916c9 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10d916cb call dword ptr [0x10dc03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03cc))), 0x10d916d1u);
  /* 10d916d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d916d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d916d6 call 0x10d91b10 */
  push32(0x10d916dbu); f_10d91b10();
L_10d916db:;
  /* 10d916db mov esi, esp */
  ESI = (ESP);
  /* 10d916dd push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d916df call dword ptr [0x10dc03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c0))), 0x10d916e5u);
  /* 10d916e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d916e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d916ea call 0x10d91b10 */
  push32(0x10d916efu); f_10d91b10();
  /* 10d916ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d916f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d916f6 je 0x10d9172c */
  if (C.zf) goto L_10d9172c;
  /* 10d916f8 mov esi, esp */
  ESI = (ESP);
  /* 10d916fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d916fc push 0x10dbe420 */
  push32((uint32_t)(0x10dbe420u));
  /* 10d91701 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91703 call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d91709u);
  /* 10d91709 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9170c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9170e call 0x10d91b10 */
  push32(0x10d91713u); f_10d91b10();
  /* 10d91713 mov esi, esp */
  ESI = (ESP);
  /* 10d91715 push 0x10dbe3e0 */
  push32((uint32_t)(0x10dbe3e0u));
  /* 10d9171a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9171c call dword ptr [0x10dc03e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03e8))), 0x10d91722u);
  /* 10d91722 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91725 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91727 call 0x10d91b10 */
  push32(0x10d9172cu); f_10d91b10();
L_10d9172c:;
  /* 10d9172c mov esi, esp */
  ESI = (ESP);
  /* 10d9172e push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d91730 call dword ptr [0x10dc03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c0))), 0x10d91736u);
  /* 10d91736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9173b call 0x10d91b10 */
  push32(0x10d91740u); f_10d91b10();
  /* 10d91740 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91747 je 0x10d91786 */
  if (C.zf) goto L_10d91786;
  /* 10d91749 push 0x10dbe3e0 */
  push32((uint32_t)(0x10dbe3e0u));
  /* 10d9174e call 0x10d91005 */
  push32(0x10d91753u); f_10d91005();
  /* 10d91753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91756 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91758 jne 0x10d91786 */
  if (!C.zf) goto L_10d91786;
  /* 10d9175a mov esi, esp */
  ESI = (ESP);
  /* 10d9175c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9175e push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d91760 call dword ptr [0x10dc03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03cc))), 0x10d91766u);
  /* 10d91766 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91769 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9176b call 0x10d91b10 */
  push32(0x10d91770u); f_10d91b10();
  /* 10d91770 mov esi, esp */
  ESI = (ESP);
  /* 10d91772 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91774 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d91776 call dword ptr [0x10dc03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03cc))), 0x10d9177cu);
  /* 10d9177c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9177f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91781 call 0x10d91b10 */
  push32(0x10d91786u); f_10d91b10();
L_10d91786:;
  /* 10d91786 mov esi, esp */
  ESI = (ESP);
  /* 10d91788 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10d9178a call dword ptr [0x10dc03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c0))), 0x10d91790u);
  /* 10d91790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91793 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91795 call 0x10d91b10 */
  push32(0x10d9179au); f_10d91b10();
  /* 10d9179a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9179f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d917a1 je 0x10d917d7 */
  if (C.zf) goto L_10d917d7;
  /* 10d917a3 mov esi, esp */
  ESI = (ESP);
  /* 10d917a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d917a7 push 0x10dbe418 */
  push32((uint32_t)(0x10dbe418u));
  /* 10d917ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10d917ae call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d917b4u);
  /* 10d917b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d917b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d917b9 call 0x10d91b10 */
  push32(0x10d917beu); f_10d91b10();
  /* 10d917be mov esi, esp */
  ESI = (ESP);
  /* 10d917c0 push 0x10dbe3f8 */
  push32((uint32_t)(0x10dbe3f8u));
  /* 10d917c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d917c7 call dword ptr [0x10dc03e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03e8))), 0x10d917cdu);
  /* 10d917cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d917d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d917d2 call 0x10d91b10 */
  push32(0x10d917d7u); f_10d91b10();
L_10d917d7:;
  /* 10d917d7 mov esi, esp */
  ESI = (ESP);
  /* 10d917d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d917db call dword ptr [0x10dc03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c0))), 0x10d917e1u);
  /* 10d917e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d917e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d917e6 call 0x10d91b10 */
  push32(0x10d917ebu); f_10d91b10();
  /* 10d917eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d917f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d917f2 je 0x10d91831 */
  if (C.zf) goto L_10d91831;
  /* 10d917f4 push 0x10dbe3f8 */
  push32((uint32_t)(0x10dbe3f8u));
  /* 10d917f9 call 0x10d91005 */
  push32(0x10d917feu); f_10d91005();
  /* 10d917fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91803 jne 0x10d91831 */
  if (!C.zf) goto L_10d91831;
  /* 10d91805 mov esi, esp */
  ESI = (ESP);
  /* 10d91807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91809 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d9180b call dword ptr [0x10dc03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03cc))), 0x10d91811u);
  /* 10d91811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91816 call 0x10d91b10 */
  push32(0x10d9181bu); f_10d91b10();
  /* 10d9181b mov esi, esp */
  ESI = (ESP);
  /* 10d9181d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9181f push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10d91821 call dword ptr [0x10dc03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03cc))), 0x10d91827u);
  /* 10d91827 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9182a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9182c call 0x10d91b10 */
  push32(0x10d91831u); f_10d91b10();
L_10d91831:;
  /* 10d91831 mov esi, esp */
  ESI = (ESP);
  /* 10d91833 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d91835 call dword ptr [0x10dc03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c0))), 0x10d9183bu);
  /* 10d9183b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9183e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91840 call 0x10d91b10 */
  push32(0x10d91845u); f_10d91b10();
  /* 10d91845 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9184a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9184c je 0x10d918ea */
  if (C.zf) goto L_10d918ea;
  /* 10d91852 mov esi, esp */
  ESI = (ESP);
  /* 10d91854 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91856 call dword ptr [0x10dc03e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03e0))), 0x10d9185cu);
  /* 10d9185c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9185f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91861 call 0x10d91b10 */
  push32(0x10d91866u); f_10d91b10();
  /* 10d91866 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9186b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9186d je 0x10d918ea */
  if (C.zf) goto L_10d918ea;
  /* 10d9186f mov esi, esp */
  ESI = (ESP);
  /* 10d91871 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91873 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d91875 call dword ptr [0x10dc03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03cc))), 0x10d9187bu);
  /* 10d9187b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9187e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91880 call 0x10d91b10 */
  push32(0x10d91885u); f_10d91b10();
  /* 10d91885 mov esi, esp */
  ESI = (ESP);
  /* 10d91887 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91889 push 0x10dbe3f0 */
  push32((uint32_t)(0x10dbe3f0u));
  /* 10d9188e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91890 call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d91896u);
  /* 10d91896 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91899 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9189b call 0x10d91b10 */
  push32(0x10d918a0u); f_10d91b10();
  /* 10d918a0 mov esi, esp */
  ESI = (ESP);
  /* 10d918a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d918a4 push 0x10dbe400 */
  push32((uint32_t)(0x10dbe400u));
  /* 10d918a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d918ab call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d918b1u);
  /* 10d918b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d918b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d918b6 call 0x10d91b10 */
  push32(0x10d918bbu); f_10d91b10();
  /* 10d918bb mov esi, esp */
  ESI = (ESP);
  /* 10d918bd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d918bf push 0x10dbe410 */
  push32((uint32_t)(0x10dbe410u));
  /* 10d918c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d918c6 call dword ptr [0x10dc03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c8))), 0x10d918ccu);
  /* 10d918cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d918cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d918d1 call 0x10d91b10 */
  push32(0x10d918d6u); f_10d91b10();
  /* 10d918d6 mov esi, esp */
  ESI = (ESP);
  /* 10d918d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d918da call dword ptr [0x10dc03f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03f0))), 0x10d918e0u);
  /* 10d918e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d918e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d918e5 call 0x10d91b10 */
  push32(0x10d918eau); f_10d91b10();
L_10d918ea:;
  /* 10d918ea pop edi */
  EDI = (pop32());
  /* 10d918eb pop esi */
  ESI = (pop32());
  /* 10d918ec pop ebx */
  EBX = (pop32());
  /* 10d918ed add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d918f0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d918f2 call 0x10d91b10 */
  push32(0x10d918f7u); f_10d91b10();
  /* 10d918f7 mov esp, ebp */
  ESP = (EBP);
  /* 10d918f9 pop ebp */
  EBP = (pop32());
  /* 10d918fa ret  */
  ESPCHK(0x10d913d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001a50 @ 0x10d91a50 (63 bytes, 26 insns) */
void f_10d91a50(void) {
  FTRACE(0x10d91a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91a51 mov ebp, esp */
  EBP = (ESP);
  /* 10d91a53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d91a56 push ebx */
  push32((uint32_t)(EBX));
  /* 10d91a57 push esi */
  push32((uint32_t)(ESI));
  /* 10d91a58 push edi */
  push32((uint32_t)(EDI));
  /* 10d91a59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d91a5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d91a61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d91a66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d91a68 mov esi, esp */
  ESI = (ESP);
  /* 10d91a6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91a6d push eax */
  push32((uint32_t)(EAX));
  /* 10d91a6e call dword ptr [0x10dc03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc03c4))), 0x10d91a74u);
  /* 10d91a74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91a77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91a79 call 0x10d91b10 */
  push32(0x10d91a7eu); f_10d91b10();
  /* 10d91a7e pop edi */
  EDI = (pop32());
  /* 10d91a7f pop esi */
  ESI = (pop32());
  /* 10d91a80 pop ebx */
  EBX = (pop32());
  /* 10d91a81 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91a84 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91a86 call 0x10d91b10 */
  push32(0x10d91a8bu); f_10d91b10();
  /* 10d91a8b mov esp, ebp */
  ESP = (EBP);
  /* 10d91a8d pop ebp */
  EBP = (pop32());
  /* 10d91a8e ret  */
  ESPCHK(0x10d91a50u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10d91b10 (56 bytes, 28 insns) */
void f_10d91b10(void) {
  FTRACE(0x10d91b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91b10 jne 0x10d91b13 */
  if (!C.zf) goto L_10d91b13;
  /* 10d91b12 ret  */
  ESPCHK(0x10d91b10u, _esp0);
  ESP += 4; return;
L_10d91b13:;
  /* 10d91b13 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91b14 mov ebp, esp */
  EBP = (ESP);
  /* 10d91b16 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d91b19 push eax */
  push32((uint32_t)(EAX));
  /* 10d91b1a push edx */
  push32((uint32_t)(EDX));
  /* 10d91b1b push ebx */
  push32((uint32_t)(EBX));
  /* 10d91b1c push esi */
  push32((uint32_t)(ESI));
  /* 10d91b1d push edi */
  push32((uint32_t)(EDI));
  /* 10d91b1e push 0x10db90f4 */
  push32((uint32_t)(0x10db90f4u));
  /* 10d91b23 push 0x10db90f0 */
  push32((uint32_t)(0x10db90f0u));
  /* 10d91b28 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10d91b2a push 0x10db90e0 */
  push32((uint32_t)(0x10db90e0u));
  /* 10d91b2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91b31 call 0x10d91ee0 */
  push32(0x10d91b36u); f_10d91ee0();
  /* 10d91b36 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91b39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91b3c jne 0x10d91b3f */
  if (!C.zf) goto L_10d91b3f;
  /* 10d91b3e int3  */
  x86_unimpl("int3 @ 0x10d91b3e");
L_10d91b3f:;
  /* 10d91b3f pop edi */
  EDI = (pop32());
  /* 10d91b40 pop esi */
  ESI = (pop32());
  /* 10d91b41 pop ebx */
  EBX = (pop32());
  /* 10d91b42 pop edx */
  EDX = (pop32());
  /* 10d91b43 pop eax */
  EAX = (pop32());
  /* 10d91b44 mov esp, ebp */
  ESP = (EBP);
  /* 10d91b46 pop ebp */
  EBP = (pop32());
  /* 10d91b47 ret  */
  ESPCHK(0x10d91b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10001b50 @ 0x10d91b50 (313 bytes, 78 insns) */
void f_10d91b50(void) {
  FTRACE(0x10d91b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91b51 mov ebp, esp */
  EBP = (ESP);
  /* 10d91b53 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91b57 jne 0x10d91c17 */
  if (!C.zf) goto L_10d91c17;
  /* 10d91b5d call dword ptr [0x10dc0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0284))), 0x10d91b63u);
  /* 10d91b63 mov dword ptr [0x10dbe490], eax */
  w32((uint32_t)(0x10dbe490), (EAX));
  /* 10d91b68 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d91b6a call 0x10d95610 */
  push32(0x10d91b6fu); f_10d95610();
  /* 10d91b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91b72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91b74 jne 0x10d91b7d */
  if (!C.zf) goto L_10d91b7d;
  /* 10d91b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d91b78 jmp 0x10d91c85 */
  goto L_10d91c85;
L_10d91b7d:;
  /* 10d91b7d mov eax, dword ptr [0x10dbe490] */
  EAX = (r32((uint32_t)(0x10dbe490)));
  /* 10d91b82 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10d91b85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91b8a mov dword ptr [0x10dbe49c], eax */
  w32((uint32_t)(0x10dbe49c), (EAX));
  /* 10d91b8f mov ecx, dword ptr [0x10dbe490] */
  ECX = (r32((uint32_t)(0x10dbe490)));
  /* 10d91b95 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d91b9b mov dword ptr [0x10dbe498], ecx */
  w32((uint32_t)(0x10dbe498), (ECX));
  /* 10d91ba1 mov edx, dword ptr [0x10dbe498] */
  EDX = (r32((uint32_t)(0x10dbe498)));
  /* 10d91ba7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d91baa add edx, dword ptr [0x10dbe49c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbe49c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91bb0 mov dword ptr [0x10dbe494], edx */
  w32((uint32_t)(0x10dbe494), (EDX));
  /* 10d91bb6 mov eax, dword ptr [0x10dbe490] */
  EAX = (r32((uint32_t)(0x10dbe490)));
  /* 10d91bbb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d91bbe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91bc3 mov dword ptr [0x10dbe490], eax */
  w32((uint32_t)(0x10dbe490), (EAX));
  /* 10d91bc8 call 0x10d92780 */
  push32(0x10d91bcdu); f_10d92780();
  /* 10d91bcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91bcf jne 0x10d91bdd */
  if (!C.zf) goto L_10d91bdd;
  /* 10d91bd1 call 0x10d95660 */
  push32(0x10d91bd6u); f_10d95660();
  /* 10d91bd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d91bd8 jmp 0x10d91c85 */
  goto L_10d91c85;
L_10d91bdd:;
  /* 10d91bdd call dword ptr [0x10dc0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0280))), 0x10d91be3u);
  /* 10d91be3 mov dword ptr [0x10dbffcc], eax */
  w32((uint32_t)(0x10dbffcc), (EAX));
  /* 10d91be8 call 0x10d953f0 */
  push32(0x10d91bedu); f_10d953f0();
  /* 10d91bed mov dword ptr [0x10dbe478], eax */
  w32((uint32_t)(0x10dbe478), (EAX));
  /* 10d91bf2 call 0x10d92a30 */
  push32(0x10d91bf7u); f_10d92a30();
  /* 10d91bf7 call 0x10d94ee0 */
  push32(0x10d91bfcu); f_10d94ee0();
  /* 10d91bfc call 0x10d94d90 */
  push32(0x10d91c01u); f_10d94d90();
  /* 10d91c01 call 0x10d92580 */
  push32(0x10d91c06u); f_10d92580();
  /* 10d91c06 mov ecx, dword ptr [0x10dbe474] */
  ECX = (r32((uint32_t)(0x10dbe474)));
  /* 10d91c0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91c0f mov dword ptr [0x10dbe474], ecx */
  w32((uint32_t)(0x10dbe474), (ECX));
  /* 10d91c15 jmp 0x10d91c80 */
  goto L_10d91c80;
L_10d91c17:;
  /* 10d91c17 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91c1b jne 0x10d91c70 */
  if (!C.zf) goto L_10d91c70;
  /* 10d91c1d cmp dword ptr [0x10dbe474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91c24 jle 0x10d91c6a */
  if ((C.zf||C.sf!=C.of)) goto L_10d91c6a;
  /* 10d91c26 mov edx, dword ptr [0x10dbe474] */
  EDX = (r32((uint32_t)(0x10dbe474)));
  /* 10d91c2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d91c2f mov dword ptr [0x10dbe474], edx */
  w32((uint32_t)(0x10dbe474), (EDX));
  /* 10d91c35 cmp dword ptr [0x10dbe4c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91c3c jne 0x10d91c43 */
  if (!C.zf) goto L_10d91c43;
  /* 10d91c3e call 0x10d92600 */
  push32(0x10d91c43u); f_10d92600();
L_10d91c43:;
  /* 10d91c43 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d91c45 call 0x10d94330 */
  push32(0x10d91c4au); f_10d94330();
  /* 10d91c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91c4d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d91c50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91c52 je 0x10d91c59 */
  if (C.zf) goto L_10d91c59;
  /* 10d91c54 call 0x10d94c40 */
  push32(0x10d91c59u); f_10d94c40();
L_10d91c59:;
  /* 10d91c59 call 0x10d92d60 */
  push32(0x10d91c5eu); f_10d92d60();
  /* 10d91c5e call 0x10d92810 */
  push32(0x10d91c63u); f_10d92810();
  /* 10d91c63 call 0x10d95660 */
  push32(0x10d91c68u); f_10d95660();
  /* 10d91c68 jmp 0x10d91c6e */
  goto L_10d91c6e;
L_10d91c6a:;
  /* 10d91c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d91c6c jmp 0x10d91c85 */
  goto L_10d91c85;
L_10d91c6e:;
  /* 10d91c6e jmp 0x10d91c80 */
  goto L_10d91c80;
L_10d91c70:;
  /* 10d91c70 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91c74 jne 0x10d91c80 */
  if (!C.zf) goto L_10d91c80;
  /* 10d91c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91c78 call 0x10d92900 */
  push32(0x10d91c7du); f_10d92900();
  /* 10d91c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d91c80:;
  /* 10d91c80 mov eax, 1 */
  EAX = (0x1u);
L_10d91c85:;
  /* 10d91c85 pop ebp */
  EBP = (pop32());
  /* 10d91c86 ret 0xc */
  ESPCHK(0x10d91b50u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10d91c90 (243 bytes, 86 insns) */
void f_10d91c90(void) {
  FTRACE(0x10d91c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91c91 mov ebp, esp */
  EBP = (ESP);
  /* 10d91c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91c94 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d91c9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91c9f jne 0x10d91cb1 */
  if (!C.zf) goto L_10d91cb1;
  /* 10d91ca1 cmp dword ptr [0x10dbe474], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe474))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91ca8 jne 0x10d91cb1 */
  if (!C.zf) goto L_10d91cb1;
  /* 10d91caa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d91cac jmp 0x10d91d7d */
  goto L_10d91d7d;
L_10d91cb1:;
  /* 10d91cb1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91cb5 je 0x10d91cbd */
  if (C.zf) goto L_10d91cbd;
  /* 10d91cb7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91cbb jne 0x10d91cff */
  if (!C.zf) goto L_10d91cff;
L_10d91cbd:;
  /* 10d91cbd cmp dword ptr [0x10dbffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91cc4 je 0x10d91cdb */
  if (C.zf) goto L_10d91cdb;
  /* 10d91cc6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d91cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10d91cca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91ccd push ecx */
  push32((uint32_t)(ECX));
  /* 10d91cce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91cd1 push edx */
  push32((uint32_t)(EDX));
  /* 10d91cd2 call dword ptr [0x10dbffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbffdc))), 0x10d91cd8u);
  /* 10d91cd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d91cdb:;
  /* 10d91cdb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91cdf je 0x10d91cf5 */
  if (C.zf) goto L_10d91cf5;
  /* 10d91ce1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d91ce4 push eax */
  push32((uint32_t)(EAX));
  /* 10d91ce5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91ce9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91cec push edx */
  push32((uint32_t)(EDX));
  /* 10d91ced call 0x10d91b50 */
  push32(0x10d91cf2u); f_10d91b50();
  /* 10d91cf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d91cf5:;
  /* 10d91cf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91cf9 jne 0x10d91cff */
  if (!C.zf) goto L_10d91cff;
  /* 10d91cfb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d91cfd jmp 0x10d91d7d */
  goto L_10d91d7d;
L_10d91cff:;
  /* 10d91cff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d91d02 push eax */
  push32((uint32_t)(EAX));
  /* 10d91d03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91d06 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91d07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91d0a push edx */
  push32((uint32_t)(EDX));
  /* 10d91d0b call 0x10d9100f */
  push32(0x10d91d10u); f_10d9100f();
  /* 10d91d10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d91d13 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91d17 jne 0x10d91d2e */
  if (!C.zf) goto L_10d91d2e;
  /* 10d91d19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91d1d jne 0x10d91d2e */
  if (!C.zf) goto L_10d91d2e;
  /* 10d91d1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d91d22 push eax */
  push32((uint32_t)(EAX));
  /* 10d91d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d91d25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91d28 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91d29 call 0x10d91b50 */
  push32(0x10d91d2eu); f_10d91b50();
L_10d91d2e:;
  /* 10d91d2e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91d32 je 0x10d91d3a */
  if (C.zf) goto L_10d91d3a;
  /* 10d91d34 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91d38 jne 0x10d91d7a */
  if (!C.zf) goto L_10d91d7a;
L_10d91d3a:;
  /* 10d91d3a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d91d3d push edx */
  push32((uint32_t)(EDX));
  /* 10d91d3e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91d41 push eax */
  push32((uint32_t)(EAX));
  /* 10d91d42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91d45 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91d46 call 0x10d91b50 */
  push32(0x10d91d4bu); f_10d91b50();
  /* 10d91d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91d4d jne 0x10d91d56 */
  if (!C.zf) goto L_10d91d56;
  /* 10d91d4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d91d56:;
  /* 10d91d56 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91d5a je 0x10d91d7a */
  if (C.zf) goto L_10d91d7a;
  /* 10d91d5c cmp dword ptr [0x10dbffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91d63 je 0x10d91d7a */
  if (C.zf) goto L_10d91d7a;
  /* 10d91d65 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d91d68 push edx */
  push32((uint32_t)(EDX));
  /* 10d91d69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91d6c push eax */
  push32((uint32_t)(EAX));
  /* 10d91d6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91d70 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91d71 call dword ptr [0x10dbffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbffdc))), 0x10d91d77u);
  /* 10d91d77 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d91d7a:;
  /* 10d91d7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d91d7d:;
  /* 10d91d7d mov esp, ebp */
  ESP = (EBP);
  /* 10d91d7f pop ebp */
  EBP = (pop32());
  /* 10d91d80 ret 0xc */
  ESPCHK(0x10d91c90u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10d91d90 (58 bytes, 18 insns) */
void f_10d91d90(void) {
  FTRACE(0x10d91d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91d91 mov ebp, esp */
  EBP = (ESP);
  /* 10d91d93 cmp dword ptr [0x10dbe480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91d9a je 0x10d91dae */
  if (C.zf) goto L_10d91dae;
  /* 10d91d9c cmp dword ptr [0x10dbe480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91da3 jne 0x10d91db3 */
  if (!C.zf) goto L_10d91db3;
  /* 10d91da5 cmp dword ptr [0x10dbe484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91dac jne 0x10d91db3 */
  if (!C.zf) goto L_10d91db3;
L_10d91dae:;
  /* 10d91dae call 0x10d95700 */
  push32(0x10d91db3u); f_10d95700();
L_10d91db3:;
  /* 10d91db3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91db6 push eax */
  push32((uint32_t)(EAX));
  /* 10d91db7 call 0x10d95750 */
  push32(0x10d91dbcu); f_10d95750();
  /* 10d91dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91dbf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d91dc4 call dword ptr [0x10dbca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbca30))), 0x10d91dcau);
  /* 10d91dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91dcd pop ebp */
  EBP = (pop32());
  /* 10d91dce ret  */
  ESPCHK(0x10d91d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10001dd0 @ 0x10d91dd0 (11 bytes, 5 insns) */
void f_10d91dd0(void) {
  FTRACE(0x10d91dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d91dd3 call dword ptr [0x10dc0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0288))), 0x10d91dd9u);
  /* 10d91dd9 pop ebp */
  EBP = (pop32());
  /* 10d91dda ret  */
  ESPCHK(0x10d91dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001de0 @ 0x10d91de0 (87 bytes, 30 insns) */
void f_10d91de0(void) {
  FTRACE(0x10d91de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91de1 mov ebp, esp */
  EBP = (ESP);
  /* 10d91de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91de4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91de8 jl 0x10d91df0 */
  if ((C.sf!=C.of)) goto L_10d91df0;
  /* 10d91dea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91dee jl 0x10d91df5 */
  if ((C.sf!=C.of)) goto L_10d91df5;
L_10d91df0:;
  /* 10d91df0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91df3 jmp 0x10d91e33 */
  goto L_10d91e33;
L_10d91df5:;
  /* 10d91df5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91df9 jne 0x10d91e07 */
  if (!C.zf) goto L_10d91e07;
  /* 10d91dfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91dfe mov eax, dword ptr [eax*4 + 0x10dbca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10dbca38)));
  /* 10d91e05 jmp 0x10d91e33 */
  goto L_10d91e33;
L_10d91e07:;
  /* 10d91e07 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91e0a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d91e0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d91e0f je 0x10d91e16 */
  if (C.zf) goto L_10d91e16;
  /* 10d91e11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91e14 jmp 0x10d91e33 */
  goto L_10d91e33;
L_10d91e16:;
  /* 10d91e16 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91e19 mov eax, dword ptr [edx*4 + 0x10dbca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbca38)));
  /* 10d91e20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d91e23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91e26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91e29 mov dword ptr [ecx*4 + 0x10dbca38], edx */
  w32((uint32_t)(ECX*4 + 0x10dbca38), (EDX));
  /* 10d91e30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d91e33:;
  /* 10d91e33 mov esp, ebp */
  ESP = (EBP);
  /* 10d91e35 pop ebp */
  EBP = (pop32());
  /* 10d91e36 ret  */
  ESPCHK(0x10d91de0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10d91e40 (126 bytes, 38 insns) */
void f_10d91e40(void) {
  FTRACE(0x10d91e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91e41 mov ebp, esp */
  EBP = (ESP);
  /* 10d91e43 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91e44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91e48 jl 0x10d91e50 */
  if ((C.sf!=C.of)) goto L_10d91e50;
  /* 10d91e4a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91e4e jl 0x10d91e57 */
  if ((C.sf!=C.of)) goto L_10d91e57;
L_10d91e50:;
  /* 10d91e50 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10d91e55 jmp 0x10d91eba */
  goto L_10d91eba;
L_10d91e57:;
  /* 10d91e57 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91e5b jne 0x10d91e69 */
  if (!C.zf) goto L_10d91e69;
  /* 10d91e5d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91e60 mov eax, dword ptr [eax*4 + 0x10dbca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10dbca44)));
  /* 10d91e67 jmp 0x10d91eba */
  goto L_10d91eba;
L_10d91e69:;
  /* 10d91e69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91e6c mov edx, dword ptr [ecx*4 + 0x10dbca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbca44)));
  /* 10d91e73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d91e76 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91e7a jne 0x10d91e90 */
  if (!C.zf) goto L_10d91e90;
  /* 10d91e7c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d91e7e call dword ptr [0x10dc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc028c))), 0x10d91e84u);
  /* 10d91e84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91e87 mov dword ptr [ecx*4 + 0x10dbca44], eax */
  w32((uint32_t)(ECX*4 + 0x10dbca44), (EAX));
  /* 10d91e8e jmp 0x10d91eb7 */
  goto L_10d91eb7;
L_10d91e90:;
  /* 10d91e90 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91e94 jne 0x10d91eaa */
  if (!C.zf) goto L_10d91eaa;
  /* 10d91e96 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d91e98 call dword ptr [0x10dc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc028c))), 0x10d91e9eu);
  /* 10d91e9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91ea1 mov dword ptr [edx*4 + 0x10dbca44], eax */
  w32((uint32_t)(EDX*4 + 0x10dbca44), (EAX));
  /* 10d91ea8 jmp 0x10d91eb7 */
  goto L_10d91eb7;
L_10d91eaa:;
  /* 10d91eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91ead mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91eb0 mov dword ptr [eax*4 + 0x10dbca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10dbca44), (ECX));
L_10d91eb7:;
  /* 10d91eb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d91eba:;
  /* 10d91eba mov esp, ebp */
  ESP = (EBP);
  /* 10d91ebc pop ebp */
  EBP = (pop32());
  /* 10d91ebd ret  */
  ESPCHK(0x10d91e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ec0 @ 0x10d91ec0 (28 bytes, 11 insns) */
void f_10d91ec0(void) {
  FTRACE(0x10d91ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10d91ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91ec4 mov eax, dword ptr [0x10dbffc0] */
  EAX = (r32((uint32_t)(0x10dbffc0)));
  /* 10d91ec9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d91ecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d91ecf mov dword ptr [0x10dbffc0], ecx */
  w32((uint32_t)(0x10dbffc0), (ECX));
  /* 10d91ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d91ed8 mov esp, ebp */
  ESP = (EBP);
  /* 10d91eda pop ebp */
  EBP = (pop32());
  /* 10d91edb ret  */
  ESPCHK(0x10d91ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001ee0 @ 0x10d91ee0 (912 bytes, 248 insns) */
void f_10d91ee0(void) {
  FTRACE(0x10d91ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d91ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d91ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10d91ee3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10d91ee8 call 0x10d95fc0 */
  push32(0x10d91eedu); f_10d95fc0();
  /* 10d91eed push edi */
  push32((uint32_t)(EDI));
  /* 10d91eee mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10d91ef5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d91efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d91efc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10d91f02 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d91f04 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d91f06 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d91f07 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10d91f0e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d91f13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d91f15 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10d91f1b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d91f1d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d91f1f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d91f20 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10d91f27 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d91f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d91f2e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10d91f34 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d91f36 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d91f38 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d91f39 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10d91f3c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10d91f42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91f46 jl 0x10d91f4e */
  if ((C.sf!=C.of)) goto L_10d91f4e;
  /* 10d91f48 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91f4c jl 0x10d91f56 */
  if ((C.sf!=C.of)) goto L_10d91f56;
L_10d91f4e:;
  /* 10d91f4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91f51 jmp 0x10d9226b */
  goto L_10d9226b;
L_10d91f56:;
  /* 10d91f56 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91f5a jne 0x10d92000 */
  if (!C.zf) goto L_10d92000;
  /* 10d91f60 push 0x10dbca34 */
  push32((uint32_t)(0x10dbca34u));
  /* 10d91f65 call dword ptr [0x10dc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a4))), 0x10d91f6bu);
  /* 10d91f6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d91f6d jle 0x10d92000 */
  if ((C.zf||C.sf!=C.of)) goto L_10d92000;
  /* 10d91f73 cmp dword ptr [0x10dbe488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91f7a jne 0x10d91fbe */
  if (!C.zf) goto L_10d91fbe;
  /* 10d91f7c push 0x10db929c */
  push32((uint32_t)(0x10db929cu));
  /* 10d91f81 call dword ptr [0x10dc02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a0))), 0x10d91f87u);
  /* 10d91f87 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10d91f8d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91f94 je 0x10d91fb6 */
  if (C.zf) goto L_10d91fb6;
  /* 10d91f96 push 0x10db9290 */
  push32((uint32_t)(0x10db9290u));
  /* 10d91f9b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10d91fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91fa2 call dword ptr [0x10dc029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc029c))), 0x10d91fa8u);
  /* 10d91fa8 mov dword ptr [0x10dbe488], eax */
  w32((uint32_t)(0x10dbe488), (EAX));
  /* 10d91fad cmp dword ptr [0x10dbe488], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe488))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d91fb4 jne 0x10d91fbe */
  if (!C.zf) goto L_10d91fbe;
L_10d91fb6:;
  /* 10d91fb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91fb9 jmp 0x10d9226b */
  goto L_10d9226b;
L_10d91fbe:;
  /* 10d91fbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d91fc1 push edx */
  push32((uint32_t)(EDX));
  /* 10d91fc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d91fc5 push eax */
  push32((uint32_t)(EAX));
  /* 10d91fc6 push 0x10db925c */
  push32((uint32_t)(0x10db925cu));
  /* 10d91fcb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10d91fd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d91fd2 call dword ptr [0x10dbe488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe488))), 0x10d91fd8u);
  /* 10d91fd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d91fdb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d91fe1 push edx */
  push32((uint32_t)(EDX));
  /* 10d91fe2 call dword ptr [0x10dc0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0298))), 0x10d91fe8u);
  /* 10d91fe8 push 0x10dbca34 */
  push32((uint32_t)(0x10dbca34u));
  /* 10d91fed call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10d91ff3u);
  /* 10d91ff3 call 0x10d91dd0 */
  push32(0x10d91ff8u); f_10d91dd0();
  /* 10d91ff8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d91ffb jmp 0x10d9226b */
  goto L_10d9226b;
L_10d92000:;
  /* 10d92000 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92004 je 0x10d9203d */
  if (C.zf) goto L_10d9203d;
  /* 10d92006 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10d9200c push eax */
  push32((uint32_t)(EAX));
  /* 10d9200d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d92010 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92011 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10d92016 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10d9201c push edx */
  push32((uint32_t)(EDX));
  /* 10d9201d call 0x10d95ec0 */
  push32(0x10d92022u); f_10d95ec0();
  /* 10d92022 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92027 jge 0x10d9203d */
  if ((C.sf==C.of)) goto L_10d9203d;
  /* 10d92029 push 0x10db9230 */
  push32((uint32_t)(0x10db9230u));
  /* 10d9202e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10d92034 push eax */
  push32((uint32_t)(EAX));
  /* 10d92035 call 0x10d95dd0 */
  push32(0x10d9203au); f_10d95dd0();
  /* 10d9203a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9203d:;
  /* 10d9203d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92041 jne 0x10d92075 */
  if (!C.zf) goto L_10d92075;
  /* 10d92043 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92047 je 0x10d92055 */
  if (C.zf) goto L_10d92055;
  /* 10d92049 mov dword ptr [ebp - 0x3028], 0x10db921c */
  w32((uint32_t)(EBP + -0x3028), (0x10db921cu));
  /* 10d92053 jmp 0x10d9205f */
  goto L_10d9205f;
L_10d92055:;
  /* 10d92055 mov dword ptr [ebp - 0x3028], 0x10db9208 */
  w32((uint32_t)(EBP + -0x3028), (0x10db9208u));
L_10d9205f:;
  /* 10d9205f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10d92065 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92066 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d9206c push edx */
  push32((uint32_t)(EDX));
  /* 10d9206d call 0x10d95dd0 */
  push32(0x10d92072u); f_10d95dd0();
  /* 10d92072 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d92075:;
  /* 10d92075 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10d9207b push eax */
  push32((uint32_t)(EAX));
  /* 10d9207c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10d92082 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92083 call 0x10d95de0 */
  push32(0x10d92088u); f_10d95de0();
  /* 10d92088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9208b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9208f jne 0x10d920ca */
  if (!C.zf) goto L_10d920ca;
  /* 10d92091 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92094 mov eax, dword ptr [edx*4 + 0x10dbca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbca38)));
  /* 10d9209b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9209e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d920a0 je 0x10d920b6 */
  if (C.zf) goto L_10d920b6;
  /* 10d920a2 push 0x10db9204 */
  push32((uint32_t)(0x10db9204u));
  /* 10d920a7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10d920ad push ecx */
  push32((uint32_t)(ECX));
  /* 10d920ae call 0x10d95de0 */
  push32(0x10d920b3u); f_10d95de0();
  /* 10d920b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d920b6:;
  /* 10d920b6 push 0x10db9200 */
  push32((uint32_t)(0x10db9200u));
  /* 10d920bb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d920c1 push edx */
  push32((uint32_t)(EDX));
  /* 10d920c2 call 0x10d95de0 */
  push32(0x10d920c7u); f_10d95de0();
  /* 10d920c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d920ca:;
  /* 10d920ca cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d920ce je 0x10d92112 */
  if (C.zf) goto L_10d92112;
  /* 10d920d0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10d920d6 push eax */
  push32((uint32_t)(EAX));
  /* 10d920d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d920da push ecx */
  push32((uint32_t)(ECX));
  /* 10d920db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d920de push edx */
  push32((uint32_t)(EDX));
  /* 10d920df push 0x10db91f4 */
  push32((uint32_t)(0x10db91f4u));
  /* 10d920e4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d920e9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d920ef push eax */
  push32((uint32_t)(EAX));
  /* 10d920f0 call 0x10d95cd0 */
  push32(0x10d920f5u); f_10d95cd0();
  /* 10d920f5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d920f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d920fa jge 0x10d92110 */
  if ((C.sf==C.of)) goto L_10d92110;
  /* 10d920fc push 0x10db9230 */
  push32((uint32_t)(0x10db9230u));
  /* 10d92101 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10d92107 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92108 call 0x10d95dd0 */
  push32(0x10d9210du); f_10d95dd0();
  /* 10d9210d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d92110:;
  /* 10d92110 jmp 0x10d92128 */
  goto L_10d92128;
L_10d92112:;
  /* 10d92112 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d92118 push edx */
  push32((uint32_t)(EDX));
  /* 10d92119 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d9211f push eax */
  push32((uint32_t)(EAX));
  /* 10d92120 call 0x10d95dd0 */
  push32(0x10d92125u); f_10d95dd0();
  /* 10d92125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d92128:;
  /* 10d92128 cmp dword ptr [0x10dbffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9212f je 0x10d9216c */
  if (C.zf) goto L_10d9216c;
  /* 10d92131 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10d92137 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92138 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d9213e push edx */
  push32((uint32_t)(EDX));
  /* 10d9213f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92142 push eax */
  push32((uint32_t)(EAX));
  /* 10d92143 call dword ptr [0x10dbffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbffc0))), 0x10d92149u);
  /* 10d92149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9214c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9214e je 0x10d9216c */
  if (C.zf) goto L_10d9216c;
  /* 10d92150 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92154 jne 0x10d92161 */
  if (!C.zf) goto L_10d92161;
  /* 10d92156 push 0x10dbca34 */
  push32((uint32_t)(0x10dbca34u));
  /* 10d9215b call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10d92161u);
L_10d92161:;
  /* 10d92161 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10d92167 jmp 0x10d9226b */
  goto L_10d9226b;
L_10d9216c:;
  /* 10d9216c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9216f mov edx, dword ptr [ecx*4 + 0x10dbca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbca38)));
  /* 10d92176 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d92179 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9217b je 0x10d921bb */
  if (C.zf) goto L_10d921bb;
  /* 10d9217d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92180 cmp dword ptr [eax*4 + 0x10dbca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10dbca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92188 je 0x10d921bb */
  if (C.zf) goto L_10d921bb;
  /* 10d9218a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9218c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10d92192 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92193 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d92199 push edx */
  push32((uint32_t)(EDX));
  /* 10d9219a call 0x10d95c50 */
  push32(0x10d9219fu); f_10d95c50();
  /* 10d9219f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d921a2 push eax */
  push32((uint32_t)(EAX));
  /* 10d921a3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d921a9 push eax */
  push32((uint32_t)(EAX));
  /* 10d921aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d921ad mov edx, dword ptr [ecx*4 + 0x10dbca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbca44)));
  /* 10d921b4 push edx */
  push32((uint32_t)(EDX));
  /* 10d921b5 call dword ptr [0x10dc0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0290))), 0x10d921bbu);
L_10d921bb:;
  /* 10d921bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d921be mov ecx, dword ptr [eax*4 + 0x10dbca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dbca38)));
  /* 10d921c5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d921c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d921ca je 0x10d921d9 */
  if (C.zf) goto L_10d921d9;
  /* 10d921cc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d921d2 push edx */
  push32((uint32_t)(EDX));
  /* 10d921d3 call dword ptr [0x10dc0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0298))), 0x10d921d9u);
L_10d921d9:;
  /* 10d921d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d921dc mov ecx, dword ptr [eax*4 + 0x10dbca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dbca38)));
  /* 10d921e3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d921e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d921e8 je 0x10d92258 */
  if (C.zf) goto L_10d92258;
  /* 10d921ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d921ee je 0x10d9220d */
  if (C.zf) goto L_10d9220d;
  /* 10d921f0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d921f2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10d921f8 push edx */
  push32((uint32_t)(EDX));
  /* 10d921f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d921fc push eax */
  push32((uint32_t)(EAX));
  /* 10d921fd call 0x10d95960 */
  push32(0x10d92202u); f_10d95960();
  /* 10d92202 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92205 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10d9220b jmp 0x10d92217 */
  goto L_10d92217;
L_10d9220d:;
  /* 10d9220d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10d92217:;
  /* 10d92217 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10d9221d push ecx */
  push32((uint32_t)(ECX));
  /* 10d9221e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d92221 push edx */
  push32((uint32_t)(EDX));
  /* 10d92222 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10d92228 push eax */
  push32((uint32_t)(EAX));
  /* 10d92229 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9222c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9222d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92230 push edx */
  push32((uint32_t)(EDX));
  /* 10d92231 call 0x10d92270 */
  push32(0x10d92236u); f_10d92270();
  /* 10d92236 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92239 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10d9223f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92243 jne 0x10d92250 */
  if (!C.zf) goto L_10d92250;
  /* 10d92245 push 0x10dbca34 */
  push32((uint32_t)(0x10dbca34u));
  /* 10d9224a call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10d92250u);
L_10d92250:;
  /* 10d92250 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10d92256 jmp 0x10d9226b */
  goto L_10d9226b;
L_10d92258:;
  /* 10d92258 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9225c jne 0x10d92269 */
  if (!C.zf) goto L_10d92269;
  /* 10d9225e push 0x10dbca34 */
  push32((uint32_t)(0x10dbca34u));
  /* 10d92263 call dword ptr [0x10dc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0294))), 0x10d92269u);
L_10d92269:;
  /* 10d92269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9226b:;
  /* 10d9226b pop edi */
  EDI = (pop32());
  /* 10d9226c mov esp, ebp */
  ESP = (EBP);
  /* 10d9226e pop ebp */
  EBP = (pop32());
  /* 10d9226f ret  */
  ESPCHK(0x10d91ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002270 @ 0x10d92270 (780 bytes, 197 insns) */
void f_10d92270(void) {
  FTRACE(0x10d92270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92270 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92271 mov ebp, esp */
  EBP = (ESP);
  /* 10d92273 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10d92278 call 0x10d95fc0 */
  push32(0x10d9227du); f_10d95fc0();
L_10d9227d:;
  /* 10d9227d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92281 jne 0x10d922a8 */
  if (!C.zf) goto L_10d922a8;
  /* 10d92283 push 0x10db93ec */
  push32((uint32_t)(0x10db93ecu));
  /* 10d92288 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9228a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10d9228f push 0x10db93e0 */
  push32((uint32_t)(0x10db93e0u));
  /* 10d92294 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d92296 call 0x10d91ee0 */
  push32(0x10d9229bu); f_10d91ee0();
  /* 10d9229b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9229e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d922a1 jne 0x10d922a8 */
  if (!C.zf) goto L_10d922a8;
  /* 10d922a3 call 0x10d91dd0 */
  push32(0x10d922a8u); f_10d91dd0();
L_10d922a8:;
  /* 10d922a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d922aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d922ac jne 0x10d9227d */
  if (!C.zf) goto L_10d9227d;
  /* 10d922ae push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d922b3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10d922b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d922ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10d922bc call dword ptr [0x10dc02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a8))), 0x10d922c2u);
  /* 10d922c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d922c4 jne 0x10d922da */
  if (!C.zf) goto L_10d922da;
  /* 10d922c6 push 0x10db93c8 */
  push32((uint32_t)(0x10db93c8u));
  /* 10d922cb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10d922d1 push edx */
  push32((uint32_t)(EDX));
  /* 10d922d2 call 0x10d95dd0 */
  push32(0x10d922d7u); f_10d95dd0();
  /* 10d922d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d922da:;
  /* 10d922da lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10d922e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d922e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d922e6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d922e7 call 0x10d95c50 */
  push32(0x10d922ecu); f_10d95c50();
  /* 10d922ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d922ef cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d922f2 jbe 0x10d9231d */
  if ((C.cf||C.zf)) goto L_10d9231d;
  /* 10d922f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d922f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d922f8 call 0x10d95c50 */
  push32(0x10d922fdu); f_10d95c50();
  /* 10d922fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92300 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92303 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10d92307 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9230a push 3 */
  push32((uint32_t)(0x3u));
  /* 10d9230c push 0x10db93c4 */
  push32((uint32_t)(0x10db93c4u));
  /* 10d92311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92314 push eax */
  push32((uint32_t)(EAX));
  /* 10d92315 call 0x10d96640 */
  push32(0x10d9231au); f_10d96640();
  /* 10d9231a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9231d:;
  /* 10d9231d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d92320 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10d92326 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9232d je 0x10d92378 */
  if (C.zf) goto L_10d92378;
  /* 10d9232f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d92335 push edx */
  push32((uint32_t)(EDX));
  /* 10d92336 call 0x10d95c50 */
  push32(0x10d9233bu); f_10d95c50();
  /* 10d9233b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9233e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92341 jbe 0x10d92378 */
  if ((C.cf||C.zf)) goto L_10d92378;
  /* 10d92343 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d92349 push eax */
  push32((uint32_t)(EAX));
  /* 10d9234a call 0x10d95c50 */
  push32(0x10d9234fu); f_10d95c50();
  /* 10d9234f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92352 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d92358 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10d9235c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10d92362 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d92364 push 0x10db93c4 */
  push32((uint32_t)(0x10db93c4u));
  /* 10d92369 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d9236f push eax */
  push32((uint32_t)(EAX));
  /* 10d92370 call 0x10d96640 */
  push32(0x10d92375u); f_10d96640();
  /* 10d92375 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d92378:;
  /* 10d92378 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9237c jne 0x10d9238a */
  if (!C.zf) goto L_10d9238a;
  /* 10d9237e mov dword ptr [ebp - 0x1114], 0x10db9350 */
  w32((uint32_t)(EBP + -0x1114), (0x10db9350u));
  /* 10d92388 jmp 0x10d92394 */
  goto L_10d92394;
L_10d9238a:;
  /* 10d9238a mov dword ptr [ebp - 0x1114], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x1114), (0x10db90f0u));
L_10d92394:;
  /* 10d92394 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d92397 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d9239a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9239c je 0x10d923a9 */
  if (C.zf) goto L_10d923a9;
  /* 10d9239e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d923a1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10d923a7 jmp 0x10d923b3 */
  goto L_10d923b3;
L_10d923a9:;
  /* 10d923a9 mov dword ptr [ebp - 0x1118], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x1118), (0x10db90f0u));
L_10d923b3:;
  /* 10d923b3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d923b6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d923b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d923bb je 0x10d923cf */
  if (C.zf) goto L_10d923cf;
  /* 10d923bd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d923c1 jne 0x10d923cf */
  if (!C.zf) goto L_10d923cf;
  /* 10d923c3 mov dword ptr [ebp - 0x111c], 0x10db9340 */
  w32((uint32_t)(EBP + -0x111c), (0x10db9340u));
  /* 10d923cd jmp 0x10d923d9 */
  goto L_10d923d9;
L_10d923cf:;
  /* 10d923cf mov dword ptr [ebp - 0x111c], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x111c), (0x10db90f0u));
L_10d923d9:;
  /* 10d923d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d923dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d923df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d923e1 je 0x10d923ef */
  if (C.zf) goto L_10d923ef;
  /* 10d923e3 mov dword ptr [ebp - 0x1120], 0x10db933c */
  w32((uint32_t)(EBP + -0x1120), (0x10db933cu));
  /* 10d923ed jmp 0x10d923f9 */
  goto L_10d923f9;
L_10d923ef:;
  /* 10d923ef mov dword ptr [ebp - 0x1120], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x1120), (0x10db90f0u));
L_10d923f9:;
  /* 10d923f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d923fd je 0x10d9240a */
  if (C.zf) goto L_10d9240a;
  /* 10d923ff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d92402 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10d92408 jmp 0x10d92414 */
  goto L_10d92414;
L_10d9240a:;
  /* 10d9240a mov dword ptr [ebp - 0x1124], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x1124), (0x10db90f0u));
L_10d92414:;
  /* 10d92414 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92418 je 0x10d92426 */
  if (C.zf) goto L_10d92426;
  /* 10d9241a mov dword ptr [ebp - 0x1128], 0x10db9334 */
  w32((uint32_t)(EBP + -0x1128), (0x10db9334u));
  /* 10d92424 jmp 0x10d92430 */
  goto L_10d92430;
L_10d92426:;
  /* 10d92426 mov dword ptr [ebp - 0x1128], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x1128), (0x10db90f0u));
L_10d92430:;
  /* 10d92430 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92434 je 0x10d92441 */
  if (C.zf) goto L_10d92441;
  /* 10d92436 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d92439 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10d9243f jmp 0x10d9244b */
  goto L_10d9244b;
L_10d92441:;
  /* 10d92441 mov dword ptr [ebp - 0x112c], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x112c), (0x10db90f0u));
L_10d9244b:;
  /* 10d9244b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9244f je 0x10d9245d */
  if (C.zf) goto L_10d9245d;
  /* 10d92451 mov dword ptr [ebp - 0x1130], 0x10db932c */
  w32((uint32_t)(EBP + -0x1130), (0x10db932cu));
  /* 10d9245b jmp 0x10d92467 */
  goto L_10d92467;
L_10d9245d:;
  /* 10d9245d mov dword ptr [ebp - 0x1130], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x1130), (0x10db90f0u));
L_10d92467:;
  /* 10d92467 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9246e je 0x10d9247e */
  if (C.zf) goto L_10d9247e;
  /* 10d92470 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d92476 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10d9247c jmp 0x10d92488 */
  goto L_10d92488;
L_10d9247e:;
  /* 10d9247e mov dword ptr [ebp - 0x1134], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x1134), (0x10db90f0u));
L_10d92488:;
  /* 10d92488 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9248f je 0x10d9249d */
  if (C.zf) goto L_10d9249d;
  /* 10d92491 mov dword ptr [ebp - 0x1138], 0x10db9320 */
  w32((uint32_t)(EBP + -0x1138), (0x10db9320u));
  /* 10d9249b jmp 0x10d924a7 */
  goto L_10d924a7;
L_10d9249d:;
  /* 10d9249d mov dword ptr [ebp - 0x1138], 0x10db90f0 */
  w32((uint32_t)(EBP + -0x1138), (0x10db90f0u));
L_10d924a7:;
  /* 10d924a7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10d924ad push edx */
  push32((uint32_t)(EDX));
  /* 10d924ae mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10d924b4 push eax */
  push32((uint32_t)(EAX));
  /* 10d924b5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10d924bb push ecx */
  push32((uint32_t)(ECX));
  /* 10d924bc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10d924c2 push edx */
  push32((uint32_t)(EDX));
  /* 10d924c3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10d924c9 push eax */
  push32((uint32_t)(EAX));
  /* 10d924ca mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10d924d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d924d1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10d924d7 push edx */
  push32((uint32_t)(EDX));
  /* 10d924d8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10d924de push eax */
  push32((uint32_t)(EAX));
  /* 10d924df mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10d924e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d924e6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10d924ec push edx */
  push32((uint32_t)(EDX));
  /* 10d924ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d924f0 push eax */
  push32((uint32_t)(EAX));
  /* 10d924f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d924f4 mov edx, dword ptr [ecx*4 + 0x10dbca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbca50)));
  /* 10d924fb push edx */
  push32((uint32_t)(EDX));
  /* 10d924fc push 0x10db92cc */
  push32((uint32_t)(0x10db92ccu));
  /* 10d92501 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d92506 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10d9250c push eax */
  push32((uint32_t)(EAX));
  /* 10d9250d call 0x10d95cd0 */
  push32(0x10d92512u); f_10d95cd0();
  /* 10d92512 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92515 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92517 jge 0x10d9252d */
  if ((C.sf==C.of)) goto L_10d9252d;
  /* 10d92519 push 0x10db9230 */
  push32((uint32_t)(0x10db9230u));
  /* 10d9251e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10d92524 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92525 call 0x10d95dd0 */
  push32(0x10d9252au); f_10d95dd0();
  /* 10d9252a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9252d:;
  /* 10d9252d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10d92532 push 0x10db92a8 */
  push32((uint32_t)(0x10db92a8u));
  /* 10d92537 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10d9253d push edx */
  push32((uint32_t)(EDX));
  /* 10d9253e call 0x10d96580 */
  push32(0x10d92543u); f_10d96580();
  /* 10d92543 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92546 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10d9254c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92553 jne 0x10d92566 */
  if (!C.zf) goto L_10d92566;
  /* 10d92555 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d92557 call 0x10d962c0 */
  push32(0x10d9255cu); f_10d962c0();
  /* 10d9255c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9255f push 3 */
  push32((uint32_t)(0x3u));
  /* 10d92561 call 0x10d925e0 */
  push32(0x10d92566u); f_10d925e0();
L_10d92566:;
  /* 10d92566 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9256d jne 0x10d92576 */
  if (!C.zf) goto L_10d92576;
  /* 10d9256f mov eax, 1 */
  EAX = (0x1u);
  /* 10d92574 jmp 0x10d92578 */
  goto L_10d92578;
L_10d92576:;
  /* 10d92576 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d92578:;
  /* 10d92578 mov esp, ebp */
  ESP = (EBP);
  /* 10d9257a pop ebp */
  EBP = (pop32());
  /* 10d9257b ret  */
  ESPCHK(0x10d92270u, _esp0);
  ESP += 4; return;
}

/* FUN_10002580 @ 0x10d92580 (56 bytes, 15 insns) */
void f_10d92580(void) {
  FTRACE(0x10d92580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92580 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92581 mov ebp, esp */
  EBP = (ESP);
  /* 10d92583 cmp dword ptr [0x10dbffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9258a je 0x10d92592 */
  if (C.zf) goto L_10d92592;
  /* 10d9258c call dword ptr [0x10dbffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbffbc))), 0x10d92592u);
L_10d92592:;
  /* 10d92592 push 0x10dbc418 */
  push32((uint32_t)(0x10dbc418u));
  /* 10d92597 push 0x10dbc208 */
  push32((uint32_t)(0x10dbc208u));
  /* 10d9259c call 0x10d92750 */
  push32(0x10d925a1u); f_10d92750();
  /* 10d925a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d925a4 push 0x10dbc104 */
  push32((uint32_t)(0x10dbc104u));
  /* 10d925a9 push 0x10dbc000 */
  push32((uint32_t)(0x10dbc000u));
  /* 10d925ae call 0x10d92750 */
  push32(0x10d925b3u); f_10d92750();
  /* 10d925b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d925b6 pop ebp */
  EBP = (pop32());
  /* 10d925b7 ret  */
  ESPCHK(0x10d92580u, _esp0);
  ESP += 4; return;
}

/* FUN_100025c0 @ 0x10d925c0 (21 bytes, 10 insns) */
void f_10d925c0(void) {
  FTRACE(0x10d925c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d925c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d925c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d925c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d925c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d925c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d925ca push eax */
  push32((uint32_t)(EAX));
  /* 10d925cb call 0x10d92640 */
  push32(0x10d925d0u); f_10d92640();
  /* 10d925d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d925d3 pop ebp */
  EBP = (pop32());
  /* 10d925d4 ret  */
  ESPCHK(0x10d925c0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10d925e0 (21 bytes, 10 insns) */
void f_10d925e0(void) {
  FTRACE(0x10d925e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d925e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d925e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d925e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d925e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d925e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d925ea push eax */
  push32((uint32_t)(EAX));
  /* 10d925eb call 0x10d92640 */
  push32(0x10d925f0u); f_10d92640();
  /* 10d925f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d925f3 pop ebp */
  EBP = (pop32());
  /* 10d925f4 ret  */
  ESPCHK(0x10d925e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002600 @ 0x10d92600 (19 bytes, 9 insns) */
void f_10d92600(void) {
  FTRACE(0x10d92600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92600 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92601 mov ebp, esp */
  EBP = (ESP);
  /* 10d92603 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d92605 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92607 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92609 call 0x10d92640 */
  push32(0x10d9260eu); f_10d92640();
  /* 10d9260e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92611 pop ebp */
  EBP = (pop32());
  /* 10d92612 ret  */
  ESPCHK(0x10d92600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002620 @ 0x10d92620 (19 bytes, 9 insns) */
void f_10d92620(void) {
  FTRACE(0x10d92620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92620 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92621 mov ebp, esp */
  EBP = (ESP);
  /* 10d92623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d92625 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d92627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92629 call 0x10d92640 */
  push32(0x10d9262eu); f_10d92640();
  /* 10d9262e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92631 pop ebp */
  EBP = (pop32());
  /* 10d92632 ret  */
  ESPCHK(0x10d92620u, _esp0);
  ESP += 4; return;
}

/* FUN_10002640 @ 0x10d92640 (227 bytes, 61 insns) */
void f_10d92640(void) {
  FTRACE(0x10d92640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92640 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92641 mov ebp, esp */
  EBP = (ESP);
  /* 10d92643 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92644 call 0x10d92730 */
  push32(0x10d92649u); f_10d92730();
  /* 10d92649 cmp dword ptr [0x10dbe4cc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4cc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92650 jne 0x10d92663 */
  if (!C.zf) goto L_10d92663;
  /* 10d92652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92655 push eax */
  push32((uint32_t)(EAX));
  /* 10d92656 call dword ptr [0x10dc02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02b4))), 0x10d9265cu);
  /* 10d9265c push eax */
  push32((uint32_t)(EAX));
  /* 10d9265d call dword ptr [0x10dc02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02b0))), 0x10d92663u);
L_10d92663:;
  /* 10d92663 mov dword ptr [0x10dbe4c8], 1 */
  w32((uint32_t)(0x10dbe4c8), (0x1u));
  /* 10d9266d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10d92670 mov byte ptr [0x10dbe4c4], cl */
  w8((uint32_t)(0x10dbe4c4), (CL));
  /* 10d92676 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9267a jne 0x10d926c3 */
  if (!C.zf) goto L_10d926c3;
  /* 10d9267c cmp dword ptr [0x10dbffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92683 je 0x10d926b1 */
  if (C.zf) goto L_10d926b1;
  /* 10d92685 mov edx, dword ptr [0x10dbffb4] */
  EDX = (r32((uint32_t)(0x10dbffb4)));
  /* 10d9268b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d9268e:;
  /* 10d9268e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92691 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d92694 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d92697 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9269a cmp ecx, dword ptr [0x10dbffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d926a0 jb 0x10d926b1 */
  if (C.cf) goto L_10d926b1;
  /* 10d926a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d926a5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d926a8 je 0x10d926af */
  if (C.zf) goto L_10d926af;
  /* 10d926aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d926ad call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10d926afu);
L_10d926af:;
  /* 10d926af jmp 0x10d9268e */
  goto L_10d9268e;
L_10d926b1:;
  /* 10d926b1 push 0x10dbc724 */
  push32((uint32_t)(0x10dbc724u));
  /* 10d926b6 push 0x10dbc51c */
  push32((uint32_t)(0x10dbc51cu));
  /* 10d926bb call 0x10d92750 */
  push32(0x10d926c0u); f_10d92750();
  /* 10d926c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d926c3:;
  /* 10d926c3 push 0x10dbc92c */
  push32((uint32_t)(0x10dbc92cu));
  /* 10d926c8 push 0x10dbc828 */
  push32((uint32_t)(0x10dbc828u));
  /* 10d926cd call 0x10d92750 */
  push32(0x10d926d2u); f_10d92750();
  /* 10d926d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d926d5 cmp dword ptr [0x10dbe4d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d926dc jne 0x10d926fe */
  if (!C.zf) goto L_10d926fe;
  /* 10d926de push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d926e0 call 0x10d94330 */
  push32(0x10d926e5u); f_10d94330();
  /* 10d926e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d926e8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d926eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d926ed je 0x10d926fe */
  if (C.zf) goto L_10d926fe;
  /* 10d926ef mov dword ptr [0x10dbe4d0], 1 */
  w32((uint32_t)(0x10dbe4d0), (0x1u));
  /* 10d926f9 call 0x10d94c40 */
  push32(0x10d926feu); f_10d94c40();
L_10d926fe:;
  /* 10d926fe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92702 je 0x10d9270b */
  if (C.zf) goto L_10d9270b;
  /* 10d92704 call 0x10d92740 */
  push32(0x10d92709u); f_10d92740();
  /* 10d92709 jmp 0x10d9271f */
  goto L_10d9271f;
L_10d9270b:;
  /* 10d9270b mov dword ptr [0x10dbe4cc], 1 */
  w32((uint32_t)(0x10dbe4cc), (0x1u));
  /* 10d92715 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92718 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92719 call dword ptr [0x10dc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02ac))), 0x10d9271fu);
L_10d9271f:;
  /* 10d9271f mov esp, ebp */
  ESP = (EBP);
  /* 10d92721 pop ebp */
  EBP = (pop32());
  /* 10d92722 ret  */
  ESPCHK(0x10d92640u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10d92730 (15 bytes, 7 insns) */
void f_10d92730(void) {
  FTRACE(0x10d92730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92730 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92731 mov ebp, esp */
  EBP = (ESP);
  /* 10d92733 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10d92735 call 0x10d96820 */
  push32(0x10d9273au); f_10d96820();
  /* 10d9273a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9273d pop ebp */
  EBP = (pop32());
  /* 10d9273e ret  */
  ESPCHK(0x10d92730u, _esp0);
  ESP += 4; return;
}

/* FUN_10002740 @ 0x10d92740 (15 bytes, 7 insns) */
void f_10d92740(void) {
  FTRACE(0x10d92740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92740 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92741 mov ebp, esp */
  EBP = (ESP);
  /* 10d92743 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10d92745 call 0x10d968c0 */
  push32(0x10d9274au); f_10d968c0();
  /* 10d9274a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9274d pop ebp */
  EBP = (pop32());
  /* 10d9274e ret  */
  ESPCHK(0x10d92740u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10d92750 (37 bytes, 16 insns) */
void f_10d92750(void) {
  FTRACE(0x10d92750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92750 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92751 mov ebp, esp */
  EBP = (ESP);
L_10d92753:;
  /* 10d92753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92756 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92759 jae 0x10d92773 */
  if (!C.cf) goto L_10d92773;
  /* 10d9275b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9275e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92761 je 0x10d92768 */
  if (C.zf) goto L_10d92768;
  /* 10d92763 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92766 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10d92768u);
L_10d92768:;
  /* 10d92768 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9276b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9276e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d92771 jmp 0x10d92753 */
  goto L_10d92753;
L_10d92773:;
  /* 10d92773 pop ebp */
  EBP = (pop32());
  /* 10d92774 ret  */
  ESPCHK(0x10d92750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x10d92780 (130 bytes, 42 insns) */
void f_10d92780(void) {
  FTRACE(0x10d92780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92780 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92781 mov ebp, esp */
  EBP = (ESP);
  /* 10d92783 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92784 call 0x10d96740 */
  push32(0x10d92789u); f_10d96740();
  /* 10d92789 call dword ptr [0x10dc02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02c0))), 0x10d9278fu);
  /* 10d9278f mov dword ptr [0x10dbca5c], eax */
  w32((uint32_t)(0x10dbca5c), (EAX));
  /* 10d92794 cmp dword ptr [0x10dbca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9279b jne 0x10d927a1 */
  if (!C.zf) goto L_10d927a1;
  /* 10d9279d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9279f jmp 0x10d927fe */
  goto L_10d927fe;
L_10d927a1:;
  /* 10d927a1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d927a3 push 0x10db9404 */
  push32((uint32_t)(0x10db9404u));
  /* 10d927a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d927aa push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10d927ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10d927ae call 0x10d93230 */
  push32(0x10d927b3u); f_10d93230();
  /* 10d927b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d927b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d927b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d927bd je 0x10d927d4 */
  if (C.zf) goto L_10d927d4;
  /* 10d927bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d927c2 push eax */
  push32((uint32_t)(EAX));
  /* 10d927c3 mov ecx, dword ptr [0x10dbca5c] */
  ECX = (r32((uint32_t)(0x10dbca5c)));
  /* 10d927c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d927ca call dword ptr [0x10dc02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02bc))), 0x10d927d0u);
  /* 10d927d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d927d2 jne 0x10d927d8 */
  if (!C.zf) goto L_10d927d8;
L_10d927d4:;
  /* 10d927d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d927d6 jmp 0x10d927fe */
  goto L_10d927fe;
L_10d927d8:;
  /* 10d927d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d927db push edx */
  push32((uint32_t)(EDX));
  /* 10d927dc call 0x10d92840 */
  push32(0x10d927e1u); f_10d92840();
  /* 10d927e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d927e4 call dword ptr [0x10dc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02b8))), 0x10d927eau);
  /* 10d927ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d927ed mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d927ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d927f2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10d927f9 mov eax, 1 */
  EAX = (0x1u);
L_10d927fe:;
  /* 10d927fe mov esp, ebp */
  ESP = (EBP);
  /* 10d92800 pop ebp */
  EBP = (pop32());
  /* 10d92801 ret  */
  ESPCHK(0x10d92780u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x10d92810 (41 bytes, 11 insns) */
void f_10d92810(void) {
  FTRACE(0x10d92810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92810 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92811 mov ebp, esp */
  EBP = (ESP);
  /* 10d92813 call 0x10d96780 */
  push32(0x10d92818u); f_10d96780();
  /* 10d92818 cmp dword ptr [0x10dbca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9281f je 0x10d92837 */
  if (C.zf) goto L_10d92837;
  /* 10d92821 mov eax, dword ptr [0x10dbca5c] */
  EAX = (r32((uint32_t)(0x10dbca5c)));
  /* 10d92826 push eax */
  push32((uint32_t)(EAX));
  /* 10d92827 call dword ptr [0x10dc02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02c4))), 0x10d9282du);
  /* 10d9282d mov dword ptr [0x10dbca5c], 0xffffffff */
  w32((uint32_t)(0x10dbca5c), (0xffffffffu));
L_10d92837:;
  /* 10d92837 pop ebp */
  EBP = (pop32());
  /* 10d92838 ret  */
  ESPCHK(0x10d92810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002840 @ 0x10d92840 (25 bytes, 8 insns) */
void f_10d92840(void) {
  FTRACE(0x10d92840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92840 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92841 mov ebp, esp */
  EBP = (ESP);
  /* 10d92843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92846 mov dword ptr [eax + 0x50], 0x10dbcc00 */
  w32((uint32_t)(EAX + 0x50), (0x10dbcc00u));
  /* 10d9284d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92850 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10d92857 pop ebp */
  EBP = (pop32());
  /* 10d92858 ret  */
  ESPCHK(0x10d92840u, _esp0);
  ESP += 4; return;
}

/* FUN_10002860 @ 0x10d92860 (152 bytes, 48 insns) */
void f_10d92860(void) {
  FTRACE(0x10d92860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92860 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92861 mov ebp, esp */
  EBP = (ESP);
  /* 10d92863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d92866 call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d9286cu);
  /* 10d9286c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9286f mov eax, dword ptr [0x10dbca5c] */
  EAX = (r32((uint32_t)(0x10dbca5c)));
  /* 10d92874 push eax */
  push32((uint32_t)(EAX));
  /* 10d92875 call dword ptr [0x10dc02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02cc))), 0x10d9287bu);
  /* 10d9287b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9287e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92882 jne 0x10d928e7 */
  if (!C.zf) goto L_10d928e7;
  /* 10d92884 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10d92889 push 0x10db9404 */
  push32((uint32_t)(0x10db9404u));
  /* 10d9288e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d92890 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10d92892 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d92894 call 0x10d93230 */
  push32(0x10d92899u); f_10d93230();
  /* 10d92899 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9289c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9289f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d928a3 je 0x10d928dd */
  if (C.zf) goto L_10d928dd;
  /* 10d928a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d928a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d928a9 mov edx, dword ptr [0x10dbca5c] */
  EDX = (r32((uint32_t)(0x10dbca5c)));
  /* 10d928af push edx */
  push32((uint32_t)(EDX));
  /* 10d928b0 call dword ptr [0x10dc02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02bc))), 0x10d928b6u);
  /* 10d928b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d928b8 je 0x10d928dd */
  if (C.zf) goto L_10d928dd;
  /* 10d928ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d928bd push eax */
  push32((uint32_t)(EAX));
  /* 10d928be call 0x10d92840 */
  push32(0x10d928c3u); f_10d92840();
  /* 10d928c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d928c6 call dword ptr [0x10dc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02b8))), 0x10d928ccu);
  /* 10d928cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d928cf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d928d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d928d4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10d928db jmp 0x10d928e7 */
  goto L_10d928e7;
L_10d928dd:;
  /* 10d928dd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d928df call 0x10d91d90 */
  push32(0x10d928e4u); f_10d91d90();
  /* 10d928e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d928e7:;
  /* 10d928e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d928ea push eax */
  push32((uint32_t)(EAX));
  /* 10d928eb call dword ptr [0x10dc02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02c8))), 0x10d928f1u);
  /* 10d928f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d928f4 mov esp, ebp */
  ESP = (EBP);
  /* 10d928f6 pop ebp */
  EBP = (pop32());
  /* 10d928f7 ret  */
  ESPCHK(0x10d92860u, _esp0);
  ESP += 4; return;
}

/* FUN_10002900 @ 0x10d92900 (263 bytes, 86 insns) */
void f_10d92900(void) {
  FTRACE(0x10d92900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92900 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92901 mov ebp, esp */
  EBP = (ESP);
  /* 10d92903 cmp dword ptr [0x10dbca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9290a je 0x10d92a05 */
  if (C.zf) goto L_10d92a05;
  /* 10d92910 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92914 jne 0x10d92925 */
  if (!C.zf) goto L_10d92925;
  /* 10d92916 mov eax, dword ptr [0x10dbca5c] */
  EAX = (r32((uint32_t)(0x10dbca5c)));
  /* 10d9291b push eax */
  push32((uint32_t)(EAX));
  /* 10d9291c call dword ptr [0x10dc02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02cc))), 0x10d92922u);
  /* 10d92922 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d92925:;
  /* 10d92925 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92929 je 0x10d929f6 */
  if (C.zf) goto L_10d929f6;
  /* 10d9292f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92932 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92936 je 0x10d92949 */
  if (C.zf) goto L_10d92949;
  /* 10d92938 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9293a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9293d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10d92940 push eax */
  push32((uint32_t)(EAX));
  /* 10d92941 call 0x10d938b0 */
  push32(0x10d92946u); f_10d938b0();
  /* 10d92946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d92949:;
  /* 10d92949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9294c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92950 je 0x10d92963 */
  if (C.zf) goto L_10d92963;
  /* 10d92952 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d92954 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92957 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10d9295a push eax */
  push32((uint32_t)(EAX));
  /* 10d9295b call 0x10d938b0 */
  push32(0x10d92960u); f_10d938b0();
  /* 10d92960 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d92963:;
  /* 10d92963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92966 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9296a je 0x10d9297d */
  if (C.zf) goto L_10d9297d;
  /* 10d9296c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9296e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92971 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10d92974 push eax */
  push32((uint32_t)(EAX));
  /* 10d92975 call 0x10d938b0 */
  push32(0x10d9297au); f_10d938b0();
  /* 10d9297a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9297d:;
  /* 10d9297d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92980 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92984 je 0x10d92997 */
  if (C.zf) goto L_10d92997;
  /* 10d92986 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d92988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9298b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10d9298e push eax */
  push32((uint32_t)(EAX));
  /* 10d9298f call 0x10d938b0 */
  push32(0x10d92994u); f_10d938b0();
  /* 10d92994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d92997:;
  /* 10d92997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9299a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9299e je 0x10d929b1 */
  if (C.zf) goto L_10d929b1;
  /* 10d929a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d929a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d929a5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10d929a8 push eax */
  push32((uint32_t)(EAX));
  /* 10d929a9 call 0x10d938b0 */
  push32(0x10d929aeu); f_10d938b0();
  /* 10d929ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d929b1:;
  /* 10d929b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d929b4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d929b8 je 0x10d929cb */
  if (C.zf) goto L_10d929cb;
  /* 10d929ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10d929bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d929bf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10d929c2 push eax */
  push32((uint32_t)(EAX));
  /* 10d929c3 call 0x10d938b0 */
  push32(0x10d929c8u); f_10d938b0();
  /* 10d929c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d929cb:;
  /* 10d929cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d929ce cmp dword ptr [ecx + 0x50], 0x10dbcc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10dbcc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d929d5 je 0x10d929e8 */
  if (C.zf) goto L_10d929e8;
  /* 10d929d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d929d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d929dc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10d929df push eax */
  push32((uint32_t)(EAX));
  /* 10d929e0 call 0x10d938b0 */
  push32(0x10d929e5u); f_10d938b0();
  /* 10d929e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d929e8:;
  /* 10d929e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d929ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d929ed push ecx */
  push32((uint32_t)(ECX));
  /* 10d929ee call 0x10d938b0 */
  push32(0x10d929f3u); f_10d938b0();
  /* 10d929f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d929f6:;
  /* 10d929f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d929f8 mov edx, dword ptr [0x10dbca5c] */
  EDX = (r32((uint32_t)(0x10dbca5c)));
  /* 10d929fe push edx */
  push32((uint32_t)(EDX));
  /* 10d929ff call dword ptr [0x10dc02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02bc))), 0x10d92a05u);
L_10d92a05:;
  /* 10d92a05 pop ebp */
  EBP = (pop32());
  /* 10d92a06 ret  */
  ESPCHK(0x10d92900u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a10 @ 0x10d92a10 (11 bytes, 5 insns) */
void f_10d92a10(void) {
  FTRACE(0x10d92a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92a11 mov ebp, esp */
  EBP = (ESP);
  /* 10d92a13 call dword ptr [0x10dc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02b8))), 0x10d92a19u);
  /* 10d92a19 pop ebp */
  EBP = (pop32());
  /* 10d92a1a ret  */
  ESPCHK(0x10d92a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a20 @ 0x10d92a20 (11 bytes, 5 insns) */
void f_10d92a20(void) {
  FTRACE(0x10d92a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92a21 mov ebp, esp */
  EBP = (ESP);
  /* 10d92a23 call dword ptr [0x10dc02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d4))), 0x10d92a29u);
  /* 10d92a29 pop ebp */
  EBP = (pop32());
  /* 10d92a2a ret  */
  ESPCHK(0x10d92a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x10d92a30 (804 bytes, 236 insns) */
void f_10d92a30(void) {
  FTRACE(0x10d92a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92a31 mov ebp, esp */
  EBP = (ESP);
  /* 10d92a33 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d92a36 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10d92a3b push 0x10db9410 */
  push32((uint32_t)(0x10db9410u));
  /* 10d92a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d92a42 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d92a47 call 0x10d92e20 */
  push32(0x10d92a4cu); f_10d92e20();
  /* 10d92a4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92a4f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10d92a52 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92a56 jne 0x10d92a62 */
  if (!C.zf) goto L_10d92a62;
  /* 10d92a58 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10d92a5a call 0x10d91d90 */
  push32(0x10d92a5fu); f_10d91d90();
  /* 10d92a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d92a62:;
  /* 10d92a62 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92a65 mov dword ptr [0x10dbfe60], eax */
  w32((uint32_t)(0x10dbfe60), (EAX));
  /* 10d92a6a mov dword ptr [0x10dbff9c], 0x20 */
  w32((uint32_t)(0x10dbff9c), (0x20u));
  /* 10d92a74 jmp 0x10d92a7f */
  goto L_10d92a7f;
L_10d92a76:;
  /* 10d92a76 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92a79 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92a7c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10d92a7f:;
  /* 10d92a7f mov edx, dword ptr [0x10dbfe60] */
  EDX = (r32((uint32_t)(0x10dbfe60)));
  /* 10d92a85 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92a8b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92a8e jae 0x10d92ab3 */
  if (!C.cf) goto L_10d92ab3;
  /* 10d92a90 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92a93 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d92a97 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92a9a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d92aa0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92aa3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d92aa7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92aaa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d92ab1 jmp 0x10d92a76 */
  goto L_10d92a76;
L_10d92ab3:;
  /* 10d92ab3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10d92ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92ab7 call dword ptr [0x10dc02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e0))), 0x10d92abdu);
  /* 10d92abd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10d92ac0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d92ac6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d92ac8 je 0x10d92c55 */
  if (C.zf) goto L_10d92c55;
  /* 10d92ace cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92ad2 je 0x10d92c55 */
  if (C.zf) goto L_10d92c55;
  /* 10d92ad8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d92adb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d92add mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10d92ae0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d92ae3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92ae6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d92ae9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92aec add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92aef mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10d92af2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92af9 jge 0x10d92b03 */
  if ((C.sf==C.of)) goto L_10d92b03;
  /* 10d92afb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10d92afe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10d92b01 jmp 0x10d92b0a */
  goto L_10d92b0a;
L_10d92b03:;
  /* 10d92b03 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10d92b0a:;
  /* 10d92b0a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10d92b0d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10d92b10 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10d92b17 jmp 0x10d92b22 */
  goto L_10d92b22;
L_10d92b19:;
  /* 10d92b19 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d92b1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92b1f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10d92b22:;
  /* 10d92b22 mov ecx, dword ptr [0x10dbff9c] */
  ECX = (r32((uint32_t)(0x10dbff9c)));
  /* 10d92b28 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92b2b jge 0x10d92bc2 */
  if ((C.sf==C.of)) goto L_10d92bc2;
  /* 10d92b31 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10d92b36 push 0x10db9410 */
  push32((uint32_t)(0x10db9410u));
  /* 10d92b3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d92b3d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d92b42 call 0x10d92e20 */
  push32(0x10d92b47u); f_10d92e20();
  /* 10d92b47 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92b4a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10d92b4d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92b51 jne 0x10d92b5e */
  if (!C.zf) goto L_10d92b5e;
  /* 10d92b53 mov edx, dword ptr [0x10dbff9c] */
  EDX = (r32((uint32_t)(0x10dbff9c)));
  /* 10d92b59 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10d92b5c jmp 0x10d92bc2 */
  goto L_10d92bc2;
L_10d92b5e:;
  /* 10d92b5e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d92b61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92b64 mov dword ptr [eax*4 + 0x10dbfe60], ecx */
  w32((uint32_t)(EAX*4 + 0x10dbfe60), (ECX));
  /* 10d92b6b mov edx, dword ptr [0x10dbff9c] */
  EDX = (r32((uint32_t)(0x10dbff9c)));
  /* 10d92b71 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92b74 mov dword ptr [0x10dbff9c], edx */
  w32((uint32_t)(0x10dbff9c), (EDX));
  /* 10d92b7a jmp 0x10d92b85 */
  goto L_10d92b85;
L_10d92b7c:;
  /* 10d92b7c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92b7f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92b82 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10d92b85:;
  /* 10d92b85 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d92b88 mov edx, dword ptr [ecx*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbfe60)));
  /* 10d92b8f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92b95 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92b98 jae 0x10d92bbd */
  if (!C.cf) goto L_10d92bbd;
  /* 10d92b9a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92b9d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d92ba1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92ba4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d92baa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92bad mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d92bb1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92bb4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d92bbb jmp 0x10d92b7c */
  goto L_10d92b7c;
L_10d92bbd:;
  /* 10d92bbd jmp 0x10d92b19 */
  goto L_10d92b19;
L_10d92bc2:;
  /* 10d92bc2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10d92bc9 jmp 0x10d92be6 */
  goto L_10d92be6;
L_10d92bcb:;
  /* 10d92bcb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d92bce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92bd1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10d92bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92bd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92bda mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d92bdd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d92be0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92be3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10d92be6:;
  /* 10d92be6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d92be9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92bec jge 0x10d92c55 */
  if ((C.sf==C.of)) goto L_10d92c55;
  /* 10d92bee mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d92bf1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92bf4 je 0x10d92c50 */
  if (C.zf) goto L_10d92c50;
  /* 10d92bf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92bf9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d92bfc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d92bff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d92c01 je 0x10d92c50 */
  if (C.zf) goto L_10d92c50;
  /* 10d92c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92c06 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d92c09 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10d92c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92c0e jne 0x10d92c20 */
  if (!C.zf) goto L_10d92c20;
  /* 10d92c10 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d92c13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d92c15 push edx */
  push32((uint32_t)(EDX));
  /* 10d92c16 call dword ptr [0x10dc02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02dc))), 0x10d92c1cu);
  /* 10d92c1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92c1e je 0x10d92c50 */
  if (C.zf) goto L_10d92c50;
L_10d92c20:;
  /* 10d92c20 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d92c23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d92c26 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d92c29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d92c2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d92c2f mov edx, dword ptr [eax*4 + 0x10dbfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d92c36 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92c38 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10d92c3b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92c3e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d92c41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d92c43 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d92c45 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92c4b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d92c4d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10d92c50:;
  /* 10d92c50 jmp 0x10d92bcb */
  goto L_10d92bcb;
L_10d92c55:;
  /* 10d92c55 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10d92c5c jmp 0x10d92c67 */
  goto L_10d92c67;
L_10d92c5e:;
  /* 10d92c5e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d92c61 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92c64 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10d92c67:;
  /* 10d92c67 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92c6b jge 0x10d92d44 */
  if ((C.sf==C.of)) goto L_10d92d44;
  /* 10d92c71 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d92c74 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d92c77 mov edx, dword ptr [0x10dbfe60] */
  EDX = (r32((uint32_t)(0x10dbfe60)));
  /* 10d92c7d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92c7f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10d92c82 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92c85 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92c88 jne 0x10d92d30 */
  if (!C.zf) goto L_10d92d30;
  /* 10d92c8e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92c91 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10d92c95 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92c99 jne 0x10d92ca4 */
  if (!C.zf) goto L_10d92ca4;
  /* 10d92c9b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10d92ca2 jmp 0x10d92cb4 */
  goto L_10d92cb4;
L_10d92ca4:;
  /* 10d92ca4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d92ca7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d92caa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d92cac sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d92cae add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92cb1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10d92cb4:;
  /* 10d92cb4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10d92cb7 push eax */
  push32((uint32_t)(EAX));
  /* 10d92cb8 call dword ptr [0x10dc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc028c))), 0x10d92cbeu);
  /* 10d92cbe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10d92cc1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92cc5 je 0x10d92d1f */
  if (C.zf) goto L_10d92d1f;
  /* 10d92cc7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d92cca push ecx */
  push32((uint32_t)(ECX));
  /* 10d92ccb call dword ptr [0x10dc02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02dc))), 0x10d92cd1u);
  /* 10d92cd1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10d92cd4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92cd8 je 0x10d92d1f */
  if (C.zf) goto L_10d92d1f;
  /* 10d92cda mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92cdd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d92ce0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d92ce2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10d92ce5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d92ceb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92cee jne 0x10d92d00 */
  if (!C.zf) goto L_10d92d00;
  /* 10d92cf0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92cf3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d92cf6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10d92cf8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92cfb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10d92cfe jmp 0x10d92d1d */
  goto L_10d92d1d;
L_10d92d00:;
  /* 10d92d00 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10d92d03 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d92d09 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92d0c jne 0x10d92d1d */
  if (!C.zf) goto L_10d92d1d;
  /* 10d92d0e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92d11 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d92d14 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10d92d17 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92d1a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d92d1d:;
  /* 10d92d1d jmp 0x10d92d2e */
  goto L_10d92d2e;
L_10d92d1f:;
  /* 10d92d1f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92d22 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d92d25 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10d92d28 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92d2b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d92d2e:;
  /* 10d92d2e jmp 0x10d92d3f */
  goto L_10d92d3f;
L_10d92d30:;
  /* 10d92d30 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92d33 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d92d36 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10d92d39 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d92d3c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d92d3f:;
  /* 10d92d3f jmp 0x10d92c5e */
  goto L_10d92c5e;
L_10d92d44:;
  /* 10d92d44 mov eax, dword ptr [0x10dbff9c] */
  EAX = (r32((uint32_t)(0x10dbff9c)));
  /* 10d92d49 push eax */
  push32((uint32_t)(EAX));
  /* 10d92d4a call dword ptr [0x10dc02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d8))), 0x10d92d50u);
  /* 10d92d50 mov esp, ebp */
  ESP = (EBP);
  /* 10d92d52 pop ebp */
  EBP = (pop32());
  /* 10d92d53 ret  */
  ESPCHK(0x10d92a30u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10d92d60 (155 bytes, 45 insns) */
void f_10d92d60(void) {
  FTRACE(0x10d92d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92d61 mov ebp, esp */
  EBP = (ESP);
  /* 10d92d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d92d66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d92d6d jmp 0x10d92d78 */
  goto L_10d92d78;
L_10d92d6f:;
  /* 10d92d6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d92d72 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92d75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d92d78:;
  /* 10d92d78 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92d7c jge 0x10d92df7 */
  if ((C.sf==C.of)) goto L_10d92df7;
  /* 10d92d7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d92d81 cmp dword ptr [ecx*4 + 0x10dbfe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10dbfe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92d89 je 0x10d92df2 */
  if (C.zf) goto L_10d92df2;
  /* 10d92d8b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d92d8e mov eax, dword ptr [edx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d92d95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d92d98 jmp 0x10d92da3 */
  goto L_10d92da3;
L_10d92d9a:;
  /* 10d92d9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92d9d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92da0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d92da3:;
  /* 10d92da3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d92da6 mov eax, dword ptr [edx*4 + 0x10dbfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbfe60)));
  /* 10d92dad add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92db2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92db5 jae 0x10d92dcf */
  if (!C.cf) goto L_10d92dcf;
  /* 10d92db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92dba cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92dbe je 0x10d92dcd */
  if (C.zf) goto L_10d92dcd;
  /* 10d92dc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92dc3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92dc6 push edx */
  push32((uint32_t)(EDX));
  /* 10d92dc7 call dword ptr [0x10dc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e4))), 0x10d92dcdu);
L_10d92dcd:;
  /* 10d92dcd jmp 0x10d92d9a */
  goto L_10d92d9a;
L_10d92dcf:;
  /* 10d92dcf push 2 */
  push32((uint32_t)(0x2u));
  /* 10d92dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d92dd4 mov ecx, dword ptr [eax*4 + 0x10dbfe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dbfe60)));
  /* 10d92ddb push ecx */
  push32((uint32_t)(ECX));
  /* 10d92ddc call 0x10d938b0 */
  push32(0x10d92de1u); f_10d938b0();
  /* 10d92de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92de4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d92de7 mov dword ptr [edx*4 + 0x10dbfe60], 0 */
  w32((uint32_t)(EDX*4 + 0x10dbfe60), (0x0u));
L_10d92df2:;
  /* 10d92df2 jmp 0x10d92d6f */
  goto L_10d92d6f;
L_10d92df7:;
  /* 10d92df7 mov esp, ebp */
  ESP = (EBP);
  /* 10d92df9 pop ebp */
  EBP = (pop32());
  /* 10d92dfa ret  */
  ESPCHK(0x10d92d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e00 @ 0x10d92e00 (29 bytes, 13 insns) */
void f_10d92e00(void) {
  FTRACE(0x10d92e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92e01 mov ebp, esp */
  EBP = (ESP);
  /* 10d92e03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92e05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92e07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d92e09 mov eax, dword ptr [0x10dbe678] */
  EAX = (r32((uint32_t)(0x10dbe678)));
  /* 10d92e0e push eax */
  push32((uint32_t)(EAX));
  /* 10d92e0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92e12 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92e13 call 0x10d92e70 */
  push32(0x10d92e18u); f_10d92e70();
  /* 10d92e18 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92e1b pop ebp */
  EBP = (pop32());
  /* 10d92e1c ret  */
  ESPCHK(0x10d92e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e20 @ 0x10d92e20 (35 bytes, 16 insns) */
void f_10d92e20(void) {
  FTRACE(0x10d92e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92e21 mov ebp, esp */
  EBP = (ESP);
  /* 10d92e23 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d92e26 push eax */
  push32((uint32_t)(EAX));
  /* 10d92e27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d92e2a push ecx */
  push32((uint32_t)(ECX));
  /* 10d92e2b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d92e2e push edx */
  push32((uint32_t)(EDX));
  /* 10d92e2f mov eax, dword ptr [0x10dbe678] */
  EAX = (r32((uint32_t)(0x10dbe678)));
  /* 10d92e34 push eax */
  push32((uint32_t)(EAX));
  /* 10d92e35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92e38 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92e39 call 0x10d92e70 */
  push32(0x10d92e3eu); f_10d92e70();
  /* 10d92e3e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92e41 pop ebp */
  EBP = (pop32());
  /* 10d92e42 ret  */
  ESPCHK(0x10d92e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e50 @ 0x10d92e50 (27 bytes, 13 insns) */
void f_10d92e50(void) {
  FTRACE(0x10d92e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92e51 mov ebp, esp */
  EBP = (ESP);
  /* 10d92e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d92e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d92e5c push eax */
  push32((uint32_t)(EAX));
  /* 10d92e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92e61 call 0x10d92e70 */
  push32(0x10d92e66u); f_10d92e70();
  /* 10d92e66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92e69 pop ebp */
  EBP = (pop32());
  /* 10d92e6a ret  */
  ESPCHK(0x10d92e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e70 @ 0x10d92e70 (94 bytes, 38 insns) */
void f_10d92e70(void) {
  FTRACE(0x10d92e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92e71 mov ebp, esp */
  EBP = (ESP);
  /* 10d92e73 push ecx */
  push32((uint32_t)(ECX));
L_10d92e74:;
  /* 10d92e74 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d92e76 call 0x10d96820 */
  push32(0x10d92e7bu); f_10d96820();
  /* 10d92e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92e7e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d92e81 push eax */
  push32((uint32_t)(EAX));
  /* 10d92e82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d92e85 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92e86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d92e89 push edx */
  push32((uint32_t)(EDX));
  /* 10d92e8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92e8d push eax */
  push32((uint32_t)(EAX));
  /* 10d92e8e call 0x10d92ef0 */
  push32(0x10d92e93u); f_10d92ef0();
  /* 10d92e93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92e96 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d92e99 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d92e9b call 0x10d968c0 */
  push32(0x10d92ea0u); f_10d968c0();
  /* 10d92ea0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92ea3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92ea7 jne 0x10d92eaf */
  if (!C.zf) goto L_10d92eaf;
  /* 10d92ea9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92ead jne 0x10d92eb4 */
  if (!C.zf) goto L_10d92eb4;
L_10d92eaf:;
  /* 10d92eaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d92eb2 jmp 0x10d92eca */
  goto L_10d92eca;
L_10d92eb4:;
  /* 10d92eb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92eb8 call 0x10d96b60 */
  push32(0x10d92ebdu); f_10d96b60();
  /* 10d92ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92ec0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92ec2 jne 0x10d92ec8 */
  if (!C.zf) goto L_10d92ec8;
  /* 10d92ec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d92ec6 jmp 0x10d92eca */
  goto L_10d92eca;
L_10d92ec8:;
  /* 10d92ec8 jmp 0x10d92e74 */
  goto L_10d92e74;
L_10d92eca:;
  /* 10d92eca mov esp, ebp */
  ESP = (EBP);
  /* 10d92ecc pop ebp */
  EBP = (pop32());
  /* 10d92ecd ret  */
  ESPCHK(0x10d92e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ed0 @ 0x10d92ed0 (23 bytes, 11 insns) */
void f_10d92ed0(void) {
  FTRACE(0x10d92ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10d92ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d92ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92edc push eax */
  push32((uint32_t)(EAX));
  /* 10d92edd call 0x10d92ef0 */
  push32(0x10d92ee2u); f_10d92ef0();
  /* 10d92ee2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92ee5 pop ebp */
  EBP = (pop32());
  /* 10d92ee6 ret  */
  ESPCHK(0x10d92ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ef0 @ 0x10d92ef0 (787 bytes, 254 insns) */
void f_10d92ef0(void) {
  FTRACE(0x10d92ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d92ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d92ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10d92ef3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d92ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d92ef7 push esi */
  push32((uint32_t)(ESI));
  /* 10d92ef8 push edi */
  push32((uint32_t)(EDI));
  /* 10d92ef9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d92f00 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d92f05 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d92f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92f0a je 0x10d92f3c */
  if (C.zf) goto L_10d92f3c;
L_10d92f0c:;
  /* 10d92f0c call 0x10d93fc0 */
  push32(0x10d92f11u); f_10d93fc0();
  /* 10d92f11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92f13 jne 0x10d92f36 */
  if (!C.zf) goto L_10d92f36;
  /* 10d92f15 push 0x10db9504 */
  push32((uint32_t)(0x10db9504u));
  /* 10d92f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92f1c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10d92f21 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d92f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d92f28 call 0x10d91ee0 */
  push32(0x10d92f2du); f_10d91ee0();
  /* 10d92f2d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92f33 jne 0x10d92f36 */
  if (!C.zf) goto L_10d92f36;
  /* 10d92f35 int3  */
  x86_unimpl("int3 @ 0x10d92f35");
L_10d92f36:;
  /* 10d92f36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d92f38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d92f3a jne 0x10d92f0c */
  if (!C.zf) goto L_10d92f0c;
L_10d92f3c:;
  /* 10d92f3c mov edx, dword ptr [0x10dbca88] */
  EDX = (r32((uint32_t)(0x10dbca88)));
  /* 10d92f42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d92f45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d92f48 cmp eax, dword ptr [0x10dbca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92f4e jne 0x10d92f51 */
  if (!C.zf) goto L_10d92f51;
  /* 10d92f50 int3  */
  x86_unimpl("int3 @ 0x10d92f50");
L_10d92f51:;
  /* 10d92f51 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d92f54 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92f55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d92f58 push edx */
  push32((uint32_t)(EDX));
  /* 10d92f59 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d92f5c push eax */
  push32((uint32_t)(EAX));
  /* 10d92f5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d92f60 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92f64 push edx */
  push32((uint32_t)(EDX));
  /* 10d92f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92f67 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d92f69 call dword ptr [0x10dbcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbcc90))), 0x10d92f6fu);
  /* 10d92f6f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92f74 jne 0x10d92fd4 */
  if (!C.zf) goto L_10d92fd4;
  /* 10d92f76 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92f7a je 0x10d92fa7 */
  if (C.zf) goto L_10d92fa7;
L_10d92f7c:;
  /* 10d92f7c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d92f7f push eax */
  push32((uint32_t)(EAX));
  /* 10d92f80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d92f83 push ecx */
  push32((uint32_t)(ECX));
  /* 10d92f84 push 0x10db94c0 */
  push32((uint32_t)(0x10db94c0u));
  /* 10d92f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92f91 call 0x10d91ee0 */
  push32(0x10d92f96u); f_10d91ee0();
  /* 10d92f96 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92f9c jne 0x10d92f9f */
  if (!C.zf) goto L_10d92f9f;
  /* 10d92f9e int3  */
  x86_unimpl("int3 @ 0x10d92f9e");
L_10d92f9f:;
  /* 10d92f9f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d92fa1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d92fa3 jne 0x10d92f7c */
  if (!C.zf) goto L_10d92f7c;
  /* 10d92fa5 jmp 0x10d92fcd */
  goto L_10d92fcd;
L_10d92fa7:;
  /* 10d92fa7 push 0x10db949c */
  push32((uint32_t)(0x10db949cu));
  /* 10d92fac push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d92fb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92fb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92fb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d92fb9 call 0x10d91ee0 */
  push32(0x10d92fbeu); f_10d91ee0();
  /* 10d92fbe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d92fc1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92fc4 jne 0x10d92fc7 */
  if (!C.zf) goto L_10d92fc7;
  /* 10d92fc6 int3  */
  x86_unimpl("int3 @ 0x10d92fc6");
L_10d92fc7:;
  /* 10d92fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d92fc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d92fcb jne 0x10d92fa7 */
  if (!C.zf) goto L_10d92fa7;
L_10d92fcd:;
  /* 10d92fcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d92fcf jmp 0x10d931fc */
  goto L_10d931fc;
L_10d92fd4:;
  /* 10d92fd4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d92fd7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d92fdd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92fe0 je 0x10d92ff6 */
  if (C.zf) goto L_10d92ff6;
  /* 10d92fe2 mov edx, dword ptr [0x10dbca84] */
  EDX = (r32((uint32_t)(0x10dbca84)));
  /* 10d92fe8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d92feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d92fed jne 0x10d92ff6 */
  if (!C.zf) goto L_10d92ff6;
  /* 10d92fef mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10d92ff6:;
  /* 10d92ff6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d92ffa ja 0x10d93007 */
  if ((!C.cf&&!C.zf)) goto L_10d93007;
  /* 10d92ffc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d92fff add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93002 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93005 jbe 0x10d93033 */
  if ((C.cf||C.zf)) goto L_10d93033;
L_10d93007:;
  /* 10d93007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9300a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9300b push 0x10db9474 */
  push32((uint32_t)(0x10db9474u));
  /* 10d93010 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93012 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93014 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93016 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93018 call 0x10d91ee0 */
  push32(0x10d9301du); f_10d91ee0();
  /* 10d9301d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93020 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93023 jne 0x10d93026 */
  if (!C.zf) goto L_10d93026;
  /* 10d93025 int3  */
  x86_unimpl("int3 @ 0x10d93025");
L_10d93026:;
  /* 10d93026 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d93028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9302a jne 0x10d93007 */
  if (!C.zf) goto L_10d93007;
  /* 10d9302c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9302e jmp 0x10d931fc */
  goto L_10d931fc;
L_10d93033:;
  /* 10d93033 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93036 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9303b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9303e je 0x10d93080 */
  if (C.zf) goto L_10d93080;
  /* 10d93040 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93044 je 0x10d93080 */
  if (C.zf) goto L_10d93080;
  /* 10d93046 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93049 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9304f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93052 je 0x10d93080 */
  if (C.zf) goto L_10d93080;
  /* 10d93054 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93058 je 0x10d93080 */
  if (C.zf) goto L_10d93080;
L_10d9305a:;
  /* 10d9305a push 0x10db9440 */
  push32((uint32_t)(0x10db9440u));
  /* 10d9305f push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d93064 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93068 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9306a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9306c call 0x10d91ee0 */
  push32(0x10d93071u); f_10d91ee0();
  /* 10d93071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93077 jne 0x10d9307a */
  if (!C.zf) goto L_10d9307a;
  /* 10d93079 int3  */
  x86_unimpl("int3 @ 0x10d93079");
L_10d9307a:;
  /* 10d9307a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9307c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9307e jne 0x10d9305a */
  if (!C.zf) goto L_10d9305a;
L_10d93080:;
  /* 10d93080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93083 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93086 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d93089 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9308c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9308d call 0x10d96c70 */
  push32(0x10d93092u); f_10d96c70();
  /* 10d93092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93095 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d93098 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9309c jne 0x10d930a5 */
  if (!C.zf) goto L_10d930a5;
  /* 10d9309e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d930a0 jmp 0x10d931fc */
  goto L_10d931fc;
L_10d930a5:;
  /* 10d930a5 mov edx, dword ptr [0x10dbca88] */
  EDX = (r32((uint32_t)(0x10dbca88)));
  /* 10d930ab add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d930ae mov dword ptr [0x10dbca88], edx */
  w32((uint32_t)(0x10dbca88), (EDX));
  /* 10d930b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d930b8 je 0x10d93103 */
  if (C.zf) goto L_10d93103;
  /* 10d930ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d930bd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d930c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d930c6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d930cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d930d0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d930d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d930da mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10d930e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d930e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d930e7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10d930ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d930ed mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10d930f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d930f7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10d930fe jmp 0x10d931a3 */
  goto L_10d931a3;
L_10d93103:;
  /* 10d93103 mov edx, dword ptr [0x10dbe4d8] */
  EDX = (r32((uint32_t)(0x10dbe4d8)));
  /* 10d93109 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9310c mov dword ptr [0x10dbe4d8], edx */
  w32((uint32_t)(0x10dbe4d8), (EDX));
  /* 10d93112 mov eax, dword ptr [0x10dbe4e0] */
  EAX = (r32((uint32_t)(0x10dbe4e0)));
  /* 10d93117 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9311a mov dword ptr [0x10dbe4e0], eax */
  w32((uint32_t)(0x10dbe4e0), (EAX));
  /* 10d9311f mov ecx, dword ptr [0x10dbe4e0] */
  ECX = (r32((uint32_t)(0x10dbe4e0)));
  /* 10d93125 cmp ecx, dword ptr [0x10dbe4e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbe4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9312b jbe 0x10d93139 */
  if ((C.cf||C.zf)) goto L_10d93139;
  /* 10d9312d mov edx, dword ptr [0x10dbe4e0] */
  EDX = (r32((uint32_t)(0x10dbe4e0)));
  /* 10d93133 mov dword ptr [0x10dbe4e4], edx */
  w32((uint32_t)(0x10dbe4e4), (EDX));
L_10d93139:;
  /* 10d93139 cmp dword ptr [0x10dbe4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93140 je 0x10d9314f */
  if (C.zf) goto L_10d9314f;
  /* 10d93142 mov eax, dword ptr [0x10dbe4dc] */
  EAX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d93147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9314a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d9314d jmp 0x10d93158 */
  goto L_10d93158;
L_10d9314f:;
  /* 10d9314f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93152 mov dword ptr [0x10dbe4d4], edx */
  w32((uint32_t)(0x10dbe4d4), (EDX));
L_10d93158:;
  /* 10d93158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9315b mov ecx, dword ptr [0x10dbe4dc] */
  ECX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d93161 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d93163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93166 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10d9316d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93170 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d93173 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d93176 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93179 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9317c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10d9317f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93182 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93185 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10d93188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9318b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9318e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10d93191 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93194 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93197 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10d9319a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9319d mov dword ptr [0x10dbe4dc], ecx */
  w32((uint32_t)(0x10dbe4dc), (ECX));
L_10d931a3:;
  /* 10d931a3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d931a5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d931a7 mov dl, byte ptr [0x10dbca90] */
  DL = (r8((uint32_t)(0x10dbca90)));
  /* 10d931ad push edx */
  push32((uint32_t)(EDX));
  /* 10d931ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d931b1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d931b4 push eax */
  push32((uint32_t)(EAX));
  /* 10d931b5 call 0x10d96b90 */
  push32(0x10d931bau); f_10d96b90();
  /* 10d931ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d931bd push 4 */
  push32((uint32_t)(0x4u));
  /* 10d931bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d931c1 mov cl, byte ptr [0x10dbca90] */
  CL = (r8((uint32_t)(0x10dbca90)));
  /* 10d931c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d931c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d931cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d931ce lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10d931d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d931d3 call 0x10d96b90 */
  push32(0x10d931d8u); f_10d96b90();
  /* 10d931d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d931db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d931de push edx */
  push32((uint32_t)(EDX));
  /* 10d931df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d931e1 mov al, byte ptr [0x10dbca92] */
  AL = (r8((uint32_t)(0x10dbca92)));
  /* 10d931e6 push eax */
  push32((uint32_t)(EAX));
  /* 10d931e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d931ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d931ed push ecx */
  push32((uint32_t)(ECX));
  /* 10d931ee call 0x10d96b90 */
  push32(0x10d931f3u); f_10d96b90();
  /* 10d931f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d931f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d931f9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d931fc:;
  /* 10d931fc pop edi */
  EDI = (pop32());
  /* 10d931fd pop esi */
  ESI = (pop32());
  /* 10d931fe pop ebx */
  EBX = (pop32());
  /* 10d931ff mov esp, ebp */
  ESP = (EBP);
  /* 10d93201 pop ebp */
  EBP = (pop32());
  /* 10d93202 ret  */
  ESPCHK(0x10d92ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003210 @ 0x10d93210 (27 bytes, 13 insns) */
void f_10d93210(void) {
  FTRACE(0x10d93210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93210 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93211 mov ebp, esp */
  EBP = (ESP);
  /* 10d93213 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93215 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93219 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9321c push eax */
  push32((uint32_t)(EAX));
  /* 10d9321d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93220 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93221 call 0x10d93230 */
  push32(0x10d93226u); f_10d93230();
  /* 10d93226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93229 pop ebp */
  EBP = (pop32());
  /* 10d9322a ret  */
  ESPCHK(0x10d93210u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10d93230 (96 bytes, 37 insns) */
void f_10d93230(void) {
  FTRACE(0x10d93230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93230 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93231 mov ebp, esp */
  EBP = (ESP);
  /* 10d93233 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93236 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93239 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9323d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d93240 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d93243 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93244 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d93247 push edx */
  push32((uint32_t)(EDX));
  /* 10d93248 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9324b push eax */
  push32((uint32_t)(EAX));
  /* 10d9324c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9324f push ecx */
  push32((uint32_t)(ECX));
  /* 10d93250 call 0x10d92e20 */
  push32(0x10d93255u); f_10d92e20();
  /* 10d93255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93258 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9325b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9325f je 0x10d93289 */
  if (C.zf) goto L_10d93289;
  /* 10d93261 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93264 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d93267 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9326a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9326d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d93270:;
  /* 10d93270 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93273 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93276 jae 0x10d93289 */
  if (!C.cf) goto L_10d93289;
  /* 10d93278 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9327b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d9327e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93281 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93284 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d93287 jmp 0x10d93270 */
  goto L_10d93270;
L_10d93289:;
  /* 10d93289 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9328c mov esp, ebp */
  ESP = (EBP);
  /* 10d9328e pop ebp */
  EBP = (pop32());
  /* 10d9328f ret  */
  ESPCHK(0x10d93230u, _esp0);
  ESP += 4; return;
}

/* FUN_10003290 @ 0x10d93290 (27 bytes, 13 insns) */
void f_10d93290(void) {
  FTRACE(0x10d93290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93290 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93291 mov ebp, esp */
  EBP = (ESP);
  /* 10d93293 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9329c push eax */
  push32((uint32_t)(EAX));
  /* 10d9329d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d932a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d932a1 call 0x10d932b0 */
  push32(0x10d932a6u); f_10d932b0();
  /* 10d932a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d932a9 pop ebp */
  EBP = (pop32());
  /* 10d932aa ret  */
  ESPCHK(0x10d93290u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x10d932b0 (64 bytes, 27 insns) */
void f_10d932b0(void) {
  FTRACE(0x10d932b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d932b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d932b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d932b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d932b4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d932b6 call 0x10d96820 */
  push32(0x10d932bbu); f_10d96820();
  /* 10d932bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d932be push 1 */
  push32((uint32_t)(0x1u));
  /* 10d932c0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d932c3 push eax */
  push32((uint32_t)(EAX));
  /* 10d932c4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d932c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d932c8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d932cb push edx */
  push32((uint32_t)(EDX));
  /* 10d932cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d932cf push eax */
  push32((uint32_t)(EAX));
  /* 10d932d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d932d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d932d4 call 0x10d932f0 */
  push32(0x10d932d9u); f_10d932f0();
  /* 10d932d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d932dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d932df push 9 */
  push32((uint32_t)(0x9u));
  /* 10d932e1 call 0x10d968c0 */
  push32(0x10d932e6u); f_10d968c0();
  /* 10d932e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d932e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d932ec mov esp, ebp */
  ESP = (EBP);
  /* 10d932ee pop ebp */
  EBP = (pop32());
  /* 10d932ef ret  */
  ESPCHK(0x10d932b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032f0 @ 0x10d932f0 (1297 bytes, 431 insns) */
void f_10d932f0(void) {
  FTRACE(0x10d932f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d932f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d932f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d932f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d932f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d932f7 push esi */
  push32((uint32_t)(ESI));
  /* 10d932f8 push edi */
  push32((uint32_t)(EDI));
  /* 10d932f9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d93300 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93304 jne 0x10d93323 */
  if (!C.zf) goto L_10d93323;
  /* 10d93306 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d93309 push eax */
  push32((uint32_t)(EAX));
  /* 10d9330a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9330d push ecx */
  push32((uint32_t)(ECX));
  /* 10d9330e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d93311 push edx */
  push32((uint32_t)(EDX));
  /* 10d93312 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93315 push eax */
  push32((uint32_t)(EAX));
  /* 10d93316 call 0x10d92e20 */
  push32(0x10d9331bu); f_10d92e20();
  /* 10d9331b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9331e jmp 0x10d937fa */
  goto L_10d937fa;
L_10d93323:;
  /* 10d93323 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93327 je 0x10d93346 */
  if (C.zf) goto L_10d93346;
  /* 10d93329 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9332d jne 0x10d93346 */
  if (!C.zf) goto L_10d93346;
  /* 10d9332f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d93332 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93333 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93336 push edx */
  push32((uint32_t)(EDX));
  /* 10d93337 call 0x10d938b0 */
  push32(0x10d9333cu); f_10d938b0();
  /* 10d9333c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9333f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93341 jmp 0x10d937fa */
  goto L_10d937fa;
L_10d93346:;
  /* 10d93346 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d9334b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9334e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93350 je 0x10d93382 */
  if (C.zf) goto L_10d93382;
L_10d93352:;
  /* 10d93352 call 0x10d93fc0 */
  push32(0x10d93357u); f_10d93fc0();
  /* 10d93357 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93359 jne 0x10d9337c */
  if (!C.zf) goto L_10d9337c;
  /* 10d9335b push 0x10db9504 */
  push32((uint32_t)(0x10db9504u));
  /* 10d93360 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93362 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10d93367 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d9336c push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9336e call 0x10d91ee0 */
  push32(0x10d93373u); f_10d91ee0();
  /* 10d93373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93376 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93379 jne 0x10d9337c */
  if (!C.zf) goto L_10d9337c;
  /* 10d9337b int3  */
  x86_unimpl("int3 @ 0x10d9337b");
L_10d9337c:;
  /* 10d9337c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9337e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93380 jne 0x10d93352 */
  if (!C.zf) goto L_10d93352;
L_10d93382:;
  /* 10d93382 mov edx, dword ptr [0x10dbca88] */
  EDX = (r32((uint32_t)(0x10dbca88)));
  /* 10d93388 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d9338b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9338e cmp eax, dword ptr [0x10dbca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93394 jne 0x10d93397 */
  if (!C.zf) goto L_10d93397;
  /* 10d93396 int3  */
  x86_unimpl("int3 @ 0x10d93396");
L_10d93397:;
  /* 10d93397 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9339a push ecx */
  push32((uint32_t)(ECX));
  /* 10d9339b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d9339e push edx */
  push32((uint32_t)(EDX));
  /* 10d9339f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d933a2 push eax */
  push32((uint32_t)(EAX));
  /* 10d933a3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d933a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d933a7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d933aa push edx */
  push32((uint32_t)(EDX));
  /* 10d933ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d933ae push eax */
  push32((uint32_t)(EAX));
  /* 10d933af push 2 */
  push32((uint32_t)(0x2u));
  /* 10d933b1 call dword ptr [0x10dbcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbcc90))), 0x10d933b7u);
  /* 10d933b7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d933ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d933bc jne 0x10d9341c */
  if (!C.zf) goto L_10d9341c;
  /* 10d933be cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d933c2 je 0x10d933ef */
  if (C.zf) goto L_10d933ef;
L_10d933c4:;
  /* 10d933c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d933c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d933c8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d933cb push edx */
  push32((uint32_t)(EDX));
  /* 10d933cc push 0x10db9680 */
  push32((uint32_t)(0x10db9680u));
  /* 10d933d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d933d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d933d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d933d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d933d9 call 0x10d91ee0 */
  push32(0x10d933deu); f_10d91ee0();
  /* 10d933de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d933e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d933e4 jne 0x10d933e7 */
  if (!C.zf) goto L_10d933e7;
  /* 10d933e6 int3  */
  x86_unimpl("int3 @ 0x10d933e6");
L_10d933e7:;
  /* 10d933e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d933e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d933eb jne 0x10d933c4 */
  if (!C.zf) goto L_10d933c4;
  /* 10d933ed jmp 0x10d93415 */
  goto L_10d93415;
L_10d933ef:;
  /* 10d933ef push 0x10db965c */
  push32((uint32_t)(0x10db965cu));
  /* 10d933f4 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d933f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d933fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d933fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d933ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93401 call 0x10d91ee0 */
  push32(0x10d93406u); f_10d91ee0();
  /* 10d93406 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93409 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9340c jne 0x10d9340f */
  if (!C.zf) goto L_10d9340f;
  /* 10d9340e int3  */
  x86_unimpl("int3 @ 0x10d9340e");
L_10d9340f:;
  /* 10d9340f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93411 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93413 jne 0x10d933ef */
  if (!C.zf) goto L_10d933ef;
L_10d93415:;
  /* 10d93415 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93417 jmp 0x10d937fa */
  goto L_10d937fa;
L_10d9341c:;
  /* 10d9341c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93420 jbe 0x10d9344e */
  if ((C.cf||C.zf)) goto L_10d9344e;
L_10d93422:;
  /* 10d93422 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93425 push edx */
  push32((uint32_t)(EDX));
  /* 10d93426 push 0x10db962c */
  push32((uint32_t)(0x10db962cu));
  /* 10d9342b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9342d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9342f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93431 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93433 call 0x10d91ee0 */
  push32(0x10d93438u); f_10d91ee0();
  /* 10d93438 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9343b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9343e jne 0x10d93441 */
  if (!C.zf) goto L_10d93441;
  /* 10d93440 int3  */
  x86_unimpl("int3 @ 0x10d93440");
L_10d93441:;
  /* 10d93441 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93443 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93445 jne 0x10d93422 */
  if (!C.zf) goto L_10d93422;
  /* 10d93447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93449 jmp 0x10d937fa */
  goto L_10d937fa;
L_10d9344e:;
  /* 10d9344e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93452 je 0x10d93496 */
  if (C.zf) goto L_10d93496;
  /* 10d93454 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d93457 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9345d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93460 je 0x10d93496 */
  if (C.zf) goto L_10d93496;
  /* 10d93462 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d93465 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9346b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9346e je 0x10d93496 */
  if (C.zf) goto L_10d93496;
L_10d93470:;
  /* 10d93470 push 0x10db9440 */
  push32((uint32_t)(0x10db9440u));
  /* 10d93475 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d9347a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9347c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9347e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93480 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93482 call 0x10d91ee0 */
  push32(0x10d93487u); f_10d91ee0();
  /* 10d93487 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9348a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9348d jne 0x10d93490 */
  if (!C.zf) goto L_10d93490;
  /* 10d9348f int3  */
  x86_unimpl("int3 @ 0x10d9348f");
L_10d93490:;
  /* 10d93490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93494 jne 0x10d93470 */
  if (!C.zf) goto L_10d93470;
L_10d93496:;
  /* 10d93496 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93499 push ecx */
  push32((uint32_t)(ECX));
  /* 10d9349a call 0x10d94420 */
  push32(0x10d9349fu); f_10d94420();
  /* 10d9349f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d934a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d934a4 jne 0x10d934c7 */
  if (!C.zf) goto L_10d934c7;
  /* 10d934a6 push 0x10db9608 */
  push32((uint32_t)(0x10db9608u));
  /* 10d934ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10d934ad push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10d934b2 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d934b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d934b9 call 0x10d91ee0 */
  push32(0x10d934beu); f_10d91ee0();
  /* 10d934be add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d934c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d934c4 jne 0x10d934c7 */
  if (!C.zf) goto L_10d934c7;
  /* 10d934c6 int3  */
  x86_unimpl("int3 @ 0x10d934c6");
L_10d934c7:;
  /* 10d934c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d934c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d934cb jne 0x10d93496 */
  if (!C.zf) goto L_10d93496;
  /* 10d934cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d934d0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d934d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d934d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d934d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d934dd jne 0x10d934e6 */
  if (!C.zf) goto L_10d934e6;
  /* 10d934df mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10d934e6:;
  /* 10d934e6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d934ea je 0x10d9352a */
  if (C.zf) goto L_10d9352a;
L_10d934ec:;
  /* 10d934ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d934ef cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d934f6 jne 0x10d93501 */
  if (!C.zf) goto L_10d93501;
  /* 10d934f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d934fb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d934ff je 0x10d93522 */
  if (C.zf) goto L_10d93522;
L_10d93501:;
  /* 10d93501 push 0x10db95c0 */
  push32((uint32_t)(0x10db95c0u));
  /* 10d93506 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93508 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10d9350d push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93512 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93514 call 0x10d91ee0 */
  push32(0x10d93519u); f_10d91ee0();
  /* 10d93519 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9351c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9351f jne 0x10d93522 */
  if (!C.zf) goto L_10d93522;
  /* 10d93521 int3  */
  x86_unimpl("int3 @ 0x10d93521");
L_10d93522:;
  /* 10d93522 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93524 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93526 jne 0x10d934ec */
  if (!C.zf) goto L_10d934ec;
  /* 10d93528 jmp 0x10d9358e */
  goto L_10d9358e;
L_10d9352a:;
  /* 10d9352a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9352d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d93530 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d93535 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93538 jne 0x10d9354f */
  if (!C.zf) goto L_10d9354f;
  /* 10d9353a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9353d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d93543 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93546 jne 0x10d9354f */
  if (!C.zf) goto L_10d9354f;
  /* 10d93548 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10d9354f:;
  /* 10d9354f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93552 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d93555 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9355a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9355d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d93563 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93565 je 0x10d93588 */
  if (C.zf) goto L_10d93588;
  /* 10d93567 push 0x10db9584 */
  push32((uint32_t)(0x10db9584u));
  /* 10d9356c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9356e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10d93573 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93578 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9357a call 0x10d91ee0 */
  push32(0x10d9357fu); f_10d91ee0();
  /* 10d9357f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93582 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93585 jne 0x10d93588 */
  if (!C.zf) goto L_10d93588;
  /* 10d93587 int3  */
  x86_unimpl("int3 @ 0x10d93587");
L_10d93588:;
  /* 10d93588 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9358a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9358c jne 0x10d9354f */
  if (!C.zf) goto L_10d9354f;
L_10d9358e:;
  /* 10d9358e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93592 je 0x10d935b9 */
  if (C.zf) goto L_10d935b9;
  /* 10d93594 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93597 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9359a push eax */
  push32((uint32_t)(EAX));
  /* 10d9359b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9359e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9359f call 0x10d96da0 */
  push32(0x10d935a4u); f_10d96da0();
  /* 10d935a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d935a7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d935aa cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d935ae jne 0x10d935b7 */
  if (!C.zf) goto L_10d935b7;
  /* 10d935b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d935b2 jmp 0x10d937fa */
  goto L_10d937fa;
L_10d935b7:;
  /* 10d935b7 jmp 0x10d935dc */
  goto L_10d935dc;
L_10d935b9:;
  /* 10d935b9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d935bc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d935bf push edx */
  push32((uint32_t)(EDX));
  /* 10d935c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d935c3 push eax */
  push32((uint32_t)(EAX));
  /* 10d935c4 call 0x10d96cf0 */
  push32(0x10d935c9u); f_10d96cf0();
  /* 10d935c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d935cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d935cf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d935d3 jne 0x10d935dc */
  if (!C.zf) goto L_10d935dc;
  /* 10d935d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d935d7 jmp 0x10d937fa */
  goto L_10d937fa;
L_10d935dc:;
  /* 10d935dc mov ecx, dword ptr [0x10dbca88] */
  ECX = (r32((uint32_t)(0x10dbca88)));
  /* 10d935e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d935e5 mov dword ptr [0x10dbca88], ecx */
  w32((uint32_t)(0x10dbca88), (ECX));
  /* 10d935eb cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d935ef jne 0x10d93647 */
  if (!C.zf) goto L_10d93647;
  /* 10d935f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d935f4 mov eax, dword ptr [0x10dbe4d8] */
  EAX = (r32((uint32_t)(0x10dbe4d8)));
  /* 10d935f9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d935fc mov dword ptr [0x10dbe4d8], eax */
  w32((uint32_t)(0x10dbe4d8), (EAX));
  /* 10d93601 mov ecx, dword ptr [0x10dbe4d8] */
  ECX = (r32((uint32_t)(0x10dbe4d8)));
  /* 10d93607 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9360a mov dword ptr [0x10dbe4d8], ecx */
  w32((uint32_t)(0x10dbe4d8), (ECX));
  /* 10d93610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93613 mov eax, dword ptr [0x10dbe4e0] */
  EAX = (r32((uint32_t)(0x10dbe4e0)));
  /* 10d93618 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9361b mov dword ptr [0x10dbe4e0], eax */
  w32((uint32_t)(0x10dbe4e0), (EAX));
  /* 10d93620 mov ecx, dword ptr [0x10dbe4e0] */
  ECX = (r32((uint32_t)(0x10dbe4e0)));
  /* 10d93626 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93629 mov dword ptr [0x10dbe4e0], ecx */
  w32((uint32_t)(0x10dbe4e0), (ECX));
  /* 10d9362f mov edx, dword ptr [0x10dbe4e0] */
  EDX = (r32((uint32_t)(0x10dbe4e0)));
  /* 10d93635 cmp edx, dword ptr [0x10dbe4e4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbe4e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9363b jbe 0x10d93647 */
  if ((C.cf||C.zf)) goto L_10d93647;
  /* 10d9363d mov eax, dword ptr [0x10dbe4e0] */
  EAX = (r32((uint32_t)(0x10dbe4e0)));
  /* 10d93642 mov dword ptr [0x10dbe4e4], eax */
  w32((uint32_t)(0x10dbe4e4), (EAX));
L_10d93647:;
  /* 10d93647 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9364a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9364d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d93650 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93653 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93656 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93659 jbe 0x10d9367f */
  if ((C.cf||C.zf)) goto L_10d9367f;
  /* 10d9365b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9365e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93661 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93664 push edx */
  push32((uint32_t)(EDX));
  /* 10d93665 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93667 mov al, byte ptr [0x10dbca92] */
  AL = (r8((uint32_t)(0x10dbca92)));
  /* 10d9366c push eax */
  push32((uint32_t)(EAX));
  /* 10d9366d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93673 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93676 push edx */
  push32((uint32_t)(EDX));
  /* 10d93677 call 0x10d96b90 */
  push32(0x10d9367cu); f_10d96b90();
  /* 10d9367c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9367f:;
  /* 10d9367f push 4 */
  push32((uint32_t)(0x4u));
  /* 10d93681 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93683 mov al, byte ptr [0x10dbca90] */
  AL = (r8((uint32_t)(0x10dbca90)));
  /* 10d93688 push eax */
  push32((uint32_t)(EAX));
  /* 10d93689 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9368c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9368f push ecx */
  push32((uint32_t)(ECX));
  /* 10d93690 call 0x10d96b90 */
  push32(0x10d93695u); f_10d96b90();
  /* 10d93695 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93698 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9369c jne 0x10d936b9 */
  if (!C.zf) goto L_10d936b9;
  /* 10d9369e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d936a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d936a4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d936a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d936aa mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d936ad mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10d936b0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d936b3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d936b6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10d936b9:;
  /* 10d936b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d936bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d936bf mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10d936c2:;
  /* 10d936c2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d936c6 jne 0x10d936f7 */
  if (!C.zf) goto L_10d936f7;
  /* 10d936c8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d936cc jne 0x10d936d6 */
  if (!C.zf) goto L_10d936d6;
  /* 10d936ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d936d1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d936d4 je 0x10d936f7 */
  if (C.zf) goto L_10d936f7;
L_10d936d6:;
  /* 10d936d6 push 0x10db9550 */
  push32((uint32_t)(0x10db9550u));
  /* 10d936db push 0 */
  push32((uint32_t)(0x0u));
  /* 10d936dd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10d936e2 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d936e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d936e9 call 0x10d91ee0 */
  push32(0x10d936eeu); f_10d91ee0();
  /* 10d936ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d936f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d936f4 jne 0x10d936f7 */
  if (!C.zf) goto L_10d936f7;
  /* 10d936f6 int3  */
  x86_unimpl("int3 @ 0x10d936f6");
L_10d936f7:;
  /* 10d936f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d936f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d936fb jne 0x10d936c2 */
  if (!C.zf) goto L_10d936c2;
  /* 10d936fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93700 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93703 je 0x10d9370b */
  if (C.zf) goto L_10d9370b;
  /* 10d93705 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93709 je 0x10d93713 */
  if (C.zf) goto L_10d93713;
L_10d9370b:;
  /* 10d9370b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9370e jmp 0x10d937fa */
  goto L_10d937fa;
L_10d93713:;
  /* 10d93713 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93716 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93719 je 0x10d9372b */
  if (C.zf) goto L_10d9372b;
  /* 10d9371b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9371e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d93720 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93723 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d93726 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d93729 jmp 0x10d93767 */
  goto L_10d93767;
L_10d9372b:;
  /* 10d9372b mov eax, dword ptr [0x10dbe4d4] */
  EAX = (r32((uint32_t)(0x10dbe4d4)));
  /* 10d93730 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93733 je 0x10d93756 */
  if (C.zf) goto L_10d93756;
  /* 10d93735 push 0x10db9534 */
  push32((uint32_t)(0x10db9534u));
  /* 10d9373a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9373c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10d93741 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93746 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93748 call 0x10d91ee0 */
  push32(0x10d9374du); f_10d91ee0();
  /* 10d9374d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93750 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93753 jne 0x10d93756 */
  if (!C.zf) goto L_10d93756;
  /* 10d93755 int3  */
  x86_unimpl("int3 @ 0x10d93755");
L_10d93756:;
  /* 10d93756 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9375a jne 0x10d9372b */
  if (!C.zf) goto L_10d9372b;
  /* 10d9375c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9375f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d93762 mov dword ptr [0x10dbe4d4], eax */
  w32((uint32_t)(0x10dbe4d4), (EAX));
L_10d93767:;
  /* 10d93767 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9376a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9376e je 0x10d9377f */
  if (C.zf) goto L_10d9377f;
  /* 10d93770 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93773 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d93776 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d93779 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9377b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d9377d jmp 0x10d937ba */
  goto L_10d937ba;
L_10d9377f:;
  /* 10d9377f mov eax, dword ptr [0x10dbe4dc] */
  EAX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d93784 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93787 je 0x10d937aa */
  if (C.zf) goto L_10d937aa;
  /* 10d93789 push 0x10db9518 */
  push32((uint32_t)(0x10db9518u));
  /* 10d9378e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93790 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10d93795 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d9379a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9379c call 0x10d91ee0 */
  push32(0x10d937a1u); f_10d91ee0();
  /* 10d937a1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d937a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d937a7 jne 0x10d937aa */
  if (!C.zf) goto L_10d937aa;
  /* 10d937a9 int3  */
  x86_unimpl("int3 @ 0x10d937a9");
L_10d937aa:;
  /* 10d937aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d937ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d937ae jne 0x10d9377f */
  if (!C.zf) goto L_10d9377f;
  /* 10d937b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d937b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d937b5 mov dword ptr [0x10dbe4dc], eax */
  w32((uint32_t)(0x10dbe4dc), (EAX));
L_10d937ba:;
  /* 10d937ba cmp dword ptr [0x10dbe4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d937c1 je 0x10d937d1 */
  if (C.zf) goto L_10d937d1;
  /* 10d937c3 mov ecx, dword ptr [0x10dbe4dc] */
  ECX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d937c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d937cc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d937cf jmp 0x10d937d9 */
  goto L_10d937d9;
L_10d937d1:;
  /* 10d937d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d937d4 mov dword ptr [0x10dbe4d4], eax */
  w32((uint32_t)(0x10dbe4d4), (EAX));
L_10d937d9:;
  /* 10d937d9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d937dc mov edx, dword ptr [0x10dbe4dc] */
  EDX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d937e2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d937e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d937e7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d937ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d937f1 mov dword ptr [0x10dbe4dc], ecx */
  w32((uint32_t)(0x10dbe4dc), (ECX));
  /* 10d937f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d937fa:;
  /* 10d937fa pop edi */
  EDI = (pop32());
  /* 10d937fb pop esi */
  ESI = (pop32());
  /* 10d937fc pop ebx */
  EBX = (pop32());
  /* 10d937fd mov esp, ebp */
  ESP = (EBP);
  /* 10d937ff pop ebp */
  EBP = (pop32());
  /* 10d93800 ret  */
  ESPCHK(0x10d932f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x10d93810 (27 bytes, 13 insns) */
void f_10d93810(void) {
  FTRACE(0x10d93810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93810 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93811 mov ebp, esp */
  EBP = (ESP);
  /* 10d93813 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93815 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93817 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9381c push eax */
  push32((uint32_t)(EAX));
  /* 10d9381d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93820 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93821 call 0x10d93830 */
  push32(0x10d93826u); f_10d93830();
  /* 10d93826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93829 pop ebp */
  EBP = (pop32());
  /* 10d9382a ret  */
  ESPCHK(0x10d93810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x10d93830 (64 bytes, 27 insns) */
void f_10d93830(void) {
  FTRACE(0x10d93830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93830 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93831 mov ebp, esp */
  EBP = (ESP);
  /* 10d93833 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93834 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d93836 call 0x10d96820 */
  push32(0x10d9383bu); f_10d96820();
  /* 10d9383b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9383e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93840 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d93843 push eax */
  push32((uint32_t)(EAX));
  /* 10d93844 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d93847 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93848 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9384b push edx */
  push32((uint32_t)(EDX));
  /* 10d9384c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9384f push eax */
  push32((uint32_t)(EAX));
  /* 10d93850 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93853 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93854 call 0x10d932f0 */
  push32(0x10d93859u); f_10d932f0();
  /* 10d93859 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9385c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9385f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d93861 call 0x10d968c0 */
  push32(0x10d93866u); f_10d968c0();
  /* 10d93866 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93869 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9386c mov esp, ebp */
  ESP = (EBP);
  /* 10d9386e pop ebp */
  EBP = (pop32());
  /* 10d9386f ret  */
  ESPCHK(0x10d93830u, _esp0);
  ESP += 4; return;
}

/* FUN_10003870 @ 0x10d93870 (19 bytes, 9 insns) */
void f_10d93870(void) {
  FTRACE(0x10d93870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93870 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93871 mov ebp, esp */
  EBP = (ESP);
  /* 10d93873 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93878 push eax */
  push32((uint32_t)(EAX));
  /* 10d93879 call 0x10d938b0 */
  push32(0x10d9387eu); f_10d938b0();
  /* 10d9387e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93881 pop ebp */
  EBP = (pop32());
  /* 10d93882 ret  */
  ESPCHK(0x10d93870u, _esp0);
  ESP += 4; return;
}

/* FUN_10003890 @ 0x10d93890 (19 bytes, 9 insns) */
void f_10d93890(void) {
  FTRACE(0x10d93890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93890 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93891 mov ebp, esp */
  EBP = (ESP);
  /* 10d93893 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93898 push eax */
  push32((uint32_t)(EAX));
  /* 10d93899 call 0x10d938e0 */
  push32(0x10d9389eu); f_10d938e0();
  /* 10d9389e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d938a1 pop ebp */
  EBP = (pop32());
  /* 10d938a2 ret  */
  ESPCHK(0x10d93890u, _esp0);
  ESP += 4; return;
}

/* FUN_100038b0 @ 0x10d938b0 (41 bytes, 16 insns) */
void f_10d938b0(void) {
  FTRACE(0x10d938b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d938b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d938b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d938b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d938b5 call 0x10d96820 */
  push32(0x10d938bau); f_10d96820();
  /* 10d938ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d938bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d938c0 push eax */
  push32((uint32_t)(EAX));
  /* 10d938c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d938c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d938c5 call 0x10d938e0 */
  push32(0x10d938cau); f_10d938e0();
  /* 10d938ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d938cd push 9 */
  push32((uint32_t)(0x9u));
  /* 10d938cf call 0x10d968c0 */
  push32(0x10d938d4u); f_10d968c0();
  /* 10d938d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d938d7 pop ebp */
  EBP = (pop32());
  /* 10d938d8 ret  */
  ESPCHK(0x10d938b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038e0 @ 0x10d938e0 (1004 bytes, 342 insns) */
void f_10d938e0(void) {
  FTRACE(0x10d938e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d938e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d938e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d938e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d938e4 push ebx */
  push32((uint32_t)(EBX));
  /* 10d938e5 push esi */
  push32((uint32_t)(ESI));
  /* 10d938e6 push edi */
  push32((uint32_t)(EDI));
  /* 10d938e7 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d938ec and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d938ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d938f1 je 0x10d93923 */
  if (C.zf) goto L_10d93923;
L_10d938f3:;
  /* 10d938f3 call 0x10d93fc0 */
  push32(0x10d938f8u); f_10d93fc0();
  /* 10d938f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d938fa jne 0x10d9391d */
  if (!C.zf) goto L_10d9391d;
  /* 10d938fc push 0x10db9504 */
  push32((uint32_t)(0x10db9504u));
  /* 10d93901 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93903 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10d93908 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d9390d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9390f call 0x10d91ee0 */
  push32(0x10d93914u); f_10d91ee0();
  /* 10d93914 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93917 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9391a jne 0x10d9391d */
  if (!C.zf) goto L_10d9391d;
  /* 10d9391c int3  */
  x86_unimpl("int3 @ 0x10d9391c");
L_10d9391d:;
  /* 10d9391d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9391f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93921 jne 0x10d938f3 */
  if (!C.zf) goto L_10d938f3;
L_10d93923:;
  /* 10d93923 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93927 jne 0x10d9392e */
  if (!C.zf) goto L_10d9392e;
  /* 10d93929 jmp 0x10d93cc5 */
  goto L_10d93cc5;
L_10d9392e:;
  /* 10d9392e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93930 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93932 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93934 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93937 push edx */
  push32((uint32_t)(EDX));
  /* 10d93938 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9393a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9393d push eax */
  push32((uint32_t)(EAX));
  /* 10d9393e push 3 */
  push32((uint32_t)(0x3u));
  /* 10d93940 call dword ptr [0x10dbcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbcc90))), 0x10d93946u);
  /* 10d93946 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9394b jne 0x10d93978 */
  if (!C.zf) goto L_10d93978;
L_10d9394d:;
  /* 10d9394d push 0x10db97c8 */
  push32((uint32_t)(0x10db97c8u));
  /* 10d93952 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d93957 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93959 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9395b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9395d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9395f call 0x10d91ee0 */
  push32(0x10d93964u); f_10d91ee0();
  /* 10d93964 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93967 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9396a jne 0x10d9396d */
  if (!C.zf) goto L_10d9396d;
  /* 10d9396c int3  */
  x86_unimpl("int3 @ 0x10d9396c");
L_10d9396d:;
  /* 10d9396d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9396f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93971 jne 0x10d9394d */
  if (!C.zf) goto L_10d9394d;
  /* 10d93973 jmp 0x10d93cc5 */
  goto L_10d93cc5;
L_10d93978:;
  /* 10d93978 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9397b push edx */
  push32((uint32_t)(EDX));
  /* 10d9397c call 0x10d94420 */
  push32(0x10d93981u); f_10d94420();
  /* 10d93981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93984 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93986 jne 0x10d939a9 */
  if (!C.zf) goto L_10d939a9;
  /* 10d93988 push 0x10db9608 */
  push32((uint32_t)(0x10db9608u));
  /* 10d9398d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9398f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10d93994 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93999 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9399b call 0x10d91ee0 */
  push32(0x10d939a0u); f_10d91ee0();
  /* 10d939a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d939a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d939a6 jne 0x10d939a9 */
  if (!C.zf) goto L_10d939a9;
  /* 10d939a8 int3  */
  x86_unimpl("int3 @ 0x10d939a8");
L_10d939a9:;
  /* 10d939a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d939ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d939ad jne 0x10d93978 */
  if (!C.zf) goto L_10d93978;
  /* 10d939af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d939b2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d939b5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d939b8:;
  /* 10d939b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d939bb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d939be and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d939c3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d939c6 je 0x10d93a0b */
  if (C.zf) goto L_10d93a0b;
  /* 10d939c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d939cb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d939cf je 0x10d93a0b */
  if (C.zf) goto L_10d93a0b;
  /* 10d939d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d939d4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d939d7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d939dc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d939df je 0x10d93a0b */
  if (C.zf) goto L_10d93a0b;
  /* 10d939e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d939e4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d939e8 je 0x10d93a0b */
  if (C.zf) goto L_10d93a0b;
  /* 10d939ea push 0x10db97a0 */
  push32((uint32_t)(0x10db97a0u));
  /* 10d939ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d939f1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10d939f6 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d939fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d939fd call 0x10d91ee0 */
  push32(0x10d93a02u); f_10d91ee0();
  /* 10d93a02 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93a05 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93a08 jne 0x10d93a0b */
  if (!C.zf) goto L_10d93a0b;
  /* 10d93a0a int3  */
  x86_unimpl("int3 @ 0x10d93a0a");
L_10d93a0b:;
  /* 10d93a0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d93a0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d93a0f jne 0x10d939b8 */
  if (!C.zf) goto L_10d939b8;
  /* 10d93a11 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d93a16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d93a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93a1b jne 0x10d93ae6 */
  if (!C.zf) goto L_10d93ae6;
  /* 10d93a21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d93a23 mov cl, byte ptr [0x10dbca90] */
  CL = (r8((uint32_t)(0x10dbca90)));
  /* 10d93a29 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93a2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93a2d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93a30 push edx */
  push32((uint32_t)(EDX));
  /* 10d93a31 call 0x10d93f30 */
  push32(0x10d93a36u); f_10d93f30();
  /* 10d93a36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93a39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93a3b jne 0x10d93a80 */
  if (!C.zf) goto L_10d93a80;
L_10d93a3d:;
  /* 10d93a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93a40 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93a43 push eax */
  push32((uint32_t)(EAX));
  /* 10d93a44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93a47 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d93a4a push edx */
  push32((uint32_t)(EDX));
  /* 10d93a4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93a4e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d93a51 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d93a57 mov edx, dword ptr [ecx*4 + 0x10dbca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbca94)));
  /* 10d93a5e push edx */
  push32((uint32_t)(EDX));
  /* 10d93a5f push 0x10db9774 */
  push32((uint32_t)(0x10db9774u));
  /* 10d93a64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93a6c call 0x10d91ee0 */
  push32(0x10d93a71u); f_10d91ee0();
  /* 10d93a71 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93a74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93a77 jne 0x10d93a7a */
  if (!C.zf) goto L_10d93a7a;
  /* 10d93a79 int3  */
  x86_unimpl("int3 @ 0x10d93a79");
L_10d93a7a:;
  /* 10d93a7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93a7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93a7e jne 0x10d93a3d */
  if (!C.zf) goto L_10d93a3d;
L_10d93a80:;
  /* 10d93a80 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d93a82 mov cl, byte ptr [0x10dbca90] */
  CL = (r8((uint32_t)(0x10dbca90)));
  /* 10d93a88 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93a8c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d93a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93a92 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10d93a96 push edx */
  push32((uint32_t)(EDX));
  /* 10d93a97 call 0x10d93f30 */
  push32(0x10d93a9cu); f_10d93f30();
  /* 10d93a9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93aa1 jne 0x10d93ae6 */
  if (!C.zf) goto L_10d93ae6;
L_10d93aa3:;
  /* 10d93aa3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93aa6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93aa9 push eax */
  push32((uint32_t)(EAX));
  /* 10d93aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93aad mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d93ab0 push edx */
  push32((uint32_t)(EDX));
  /* 10d93ab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93ab4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d93ab7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d93abd mov edx, dword ptr [ecx*4 + 0x10dbca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbca94)));
  /* 10d93ac4 push edx */
  push32((uint32_t)(EDX));
  /* 10d93ac5 push 0x10db9748 */
  push32((uint32_t)(0x10db9748u));
  /* 10d93aca push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93acc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93ace push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93ad0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93ad2 call 0x10d91ee0 */
  push32(0x10d93ad7u); f_10d91ee0();
  /* 10d93ad7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93ada cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93add jne 0x10d93ae0 */
  if (!C.zf) goto L_10d93ae0;
  /* 10d93adf int3  */
  x86_unimpl("int3 @ 0x10d93adf");
L_10d93ae0:;
  /* 10d93ae0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93ae2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93ae4 jne 0x10d93aa3 */
  if (!C.zf) goto L_10d93aa3;
L_10d93ae6:;
  /* 10d93ae6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93ae9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93aed jne 0x10d93b5b */
  if (!C.zf) goto L_10d93b5b;
L_10d93aef:;
  /* 10d93aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93af2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93af9 jne 0x10d93b04 */
  if (!C.zf) goto L_10d93b04;
  /* 10d93afb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93afe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93b02 je 0x10d93b25 */
  if (C.zf) goto L_10d93b25;
L_10d93b04:;
  /* 10d93b04 push 0x10db9708 */
  push32((uint32_t)(0x10db9708u));
  /* 10d93b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93b0b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10d93b10 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93b15 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93b17 call 0x10d91ee0 */
  push32(0x10d93b1cu); f_10d91ee0();
  /* 10d93b1c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93b1f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93b22 jne 0x10d93b25 */
  if (!C.zf) goto L_10d93b25;
  /* 10d93b24 int3  */
  x86_unimpl("int3 @ 0x10d93b24");
L_10d93b25:;
  /* 10d93b25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93b27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93b29 jne 0x10d93aef */
  if (!C.zf) goto L_10d93aef;
  /* 10d93b2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93b2e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d93b31 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93b34 push eax */
  push32((uint32_t)(EAX));
  /* 10d93b35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93b37 mov cl, byte ptr [0x10dbca91] */
  CL = (r8((uint32_t)(0x10dbca91)));
  /* 10d93b3d push ecx */
  push32((uint32_t)(ECX));
  /* 10d93b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93b41 push edx */
  push32((uint32_t)(EDX));
  /* 10d93b42 call 0x10d96b90 */
  push32(0x10d93b47u); f_10d96b90();
  /* 10d93b47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93b4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93b4d push eax */
  push32((uint32_t)(EAX));
  /* 10d93b4e call 0x10d96f90 */
  push32(0x10d93b53u); f_10d96f90();
  /* 10d93b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93b56 jmp 0x10d93cc5 */
  goto L_10d93cc5;
L_10d93b5b:;
  /* 10d93b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93b5e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93b62 jne 0x10d93b71 */
  if (!C.zf) goto L_10d93b71;
  /* 10d93b64 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93b68 jne 0x10d93b71 */
  if (!C.zf) goto L_10d93b71;
  /* 10d93b6a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10d93b71:;
  /* 10d93b71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93b74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d93b77 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93b7a je 0x10d93b9d */
  if (C.zf) goto L_10d93b9d;
  /* 10d93b7c push 0x10db96e8 */
  push32((uint32_t)(0x10db96e8u));
  /* 10d93b81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93b83 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10d93b88 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93b8d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93b8f call 0x10d91ee0 */
  push32(0x10d93b94u); f_10d91ee0();
  /* 10d93b94 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93b97 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93b9a jne 0x10d93b9d */
  if (!C.zf) goto L_10d93b9d;
  /* 10d93b9c int3  */
  x86_unimpl("int3 @ 0x10d93b9c");
L_10d93b9d:;
  /* 10d93b9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93b9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93ba1 jne 0x10d93b71 */
  if (!C.zf) goto L_10d93b71;
  /* 10d93ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93ba6 mov eax, dword ptr [0x10dbe4e0] */
  EAX = (r32((uint32_t)(0x10dbe4e0)));
  /* 10d93bab sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93bae mov dword ptr [0x10dbe4e0], eax */
  w32((uint32_t)(0x10dbe4e0), (EAX));
  /* 10d93bb3 mov ecx, dword ptr [0x10dbca84] */
  ECX = (r32((uint32_t)(0x10dbca84)));
  /* 10d93bb9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d93bbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93bbe jne 0x10d93c9c */
  if (!C.zf) goto L_10d93c9c;
  /* 10d93bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93bc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93bca je 0x10d93bdc */
  if (C.zf) goto L_10d93bdc;
  /* 10d93bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93bcf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d93bd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93bd4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d93bd7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d93bda jmp 0x10d93c1a */
  goto L_10d93c1a;
L_10d93bdc:;
  /* 10d93bdc mov ecx, dword ptr [0x10dbe4d4] */
  ECX = (r32((uint32_t)(0x10dbe4d4)));
  /* 10d93be2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93be5 je 0x10d93c08 */
  if (C.zf) goto L_10d93c08;
  /* 10d93be7 push 0x10db96d0 */
  push32((uint32_t)(0x10db96d0u));
  /* 10d93bec push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93bee push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10d93bf3 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93bf8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93bfa call 0x10d91ee0 */
  push32(0x10d93bffu); f_10d91ee0();
  /* 10d93bff add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93c02 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93c05 jne 0x10d93c08 */
  if (!C.zf) goto L_10d93c08;
  /* 10d93c07 int3  */
  x86_unimpl("int3 @ 0x10d93c07");
L_10d93c08:;
  /* 10d93c08 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d93c0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d93c0c jne 0x10d93bdc */
  if (!C.zf) goto L_10d93bdc;
  /* 10d93c0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c11 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d93c14 mov dword ptr [0x10dbe4d4], ecx */
  w32((uint32_t)(0x10dbe4d4), (ECX));
L_10d93c1a:;
  /* 10d93c1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c1d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93c21 je 0x10d93c32 */
  if (C.zf) goto L_10d93c32;
  /* 10d93c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c26 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d93c29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d93c2e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d93c30 jmp 0x10d93c6f */
  goto L_10d93c6f;
L_10d93c32:;
  /* 10d93c32 mov ecx, dword ptr [0x10dbe4dc] */
  ECX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d93c38 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93c3b je 0x10d93c5e */
  if (C.zf) goto L_10d93c5e;
  /* 10d93c3d push 0x10db96b8 */
  push32((uint32_t)(0x10db96b8u));
  /* 10d93c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93c44 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10d93c49 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93c4e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93c50 call 0x10d91ee0 */
  push32(0x10d93c55u); f_10d91ee0();
  /* 10d93c55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93c58 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93c5b jne 0x10d93c5e */
  if (!C.zf) goto L_10d93c5e;
  /* 10d93c5d int3  */
  x86_unimpl("int3 @ 0x10d93c5d");
L_10d93c5e:;
  /* 10d93c5e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d93c60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d93c62 jne 0x10d93c32 */
  if (!C.zf) goto L_10d93c32;
  /* 10d93c64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d93c69 mov dword ptr [0x10dbe4dc], ecx */
  w32((uint32_t)(0x10dbe4dc), (ECX));
L_10d93c6f:;
  /* 10d93c6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c72 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d93c75 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93c78 push eax */
  push32((uint32_t)(EAX));
  /* 10d93c79 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93c7b mov cl, byte ptr [0x10dbca91] */
  CL = (r8((uint32_t)(0x10dbca91)));
  /* 10d93c81 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93c82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c85 push edx */
  push32((uint32_t)(EDX));
  /* 10d93c86 call 0x10d96b90 */
  push32(0x10d93c8bu); f_10d96b90();
  /* 10d93c8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93c8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c91 push eax */
  push32((uint32_t)(EAX));
  /* 10d93c92 call 0x10d96f90 */
  push32(0x10d93c97u); f_10d96f90();
  /* 10d93c97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93c9a jmp 0x10d93cc5 */
  goto L_10d93cc5;
L_10d93c9c:;
  /* 10d93c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93c9f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10d93ca6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93ca9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d93cac push eax */
  push32((uint32_t)(EAX));
  /* 10d93cad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93caf mov cl, byte ptr [0x10dbca91] */
  CL = (r8((uint32_t)(0x10dbca91)));
  /* 10d93cb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93cb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93cb9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93cbc push edx */
  push32((uint32_t)(EDX));
  /* 10d93cbd call 0x10d96b90 */
  push32(0x10d93cc2u); f_10d96b90();
  /* 10d93cc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d93cc5:;
  /* 10d93cc5 pop edi */
  EDI = (pop32());
  /* 10d93cc6 pop esi */
  ESI = (pop32());
  /* 10d93cc7 pop ebx */
  EBX = (pop32());
  /* 10d93cc8 mov esp, ebp */
  ESP = (EBP);
  /* 10d93cca pop ebp */
  EBP = (pop32());
  /* 10d93ccb ret  */
  ESPCHK(0x10d938e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x10d93cd0 (19 bytes, 9 insns) */
void f_10d93cd0(void) {
  FTRACE(0x10d93cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d93cd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d93cd5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93cd8 push eax */
  push32((uint32_t)(EAX));
  /* 10d93cd9 call 0x10d93cf0 */
  push32(0x10d93cdeu); f_10d93cf0();
  /* 10d93cde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93ce1 pop ebp */
  EBP = (pop32());
  /* 10d93ce2 ret  */
  ESPCHK(0x10d93cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x10d93cf0 (342 bytes, 119 insns) */
void f_10d93cf0(void) {
  FTRACE(0x10d93cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10d93cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d93cf7 push esi */
  push32((uint32_t)(ESI));
  /* 10d93cf8 push edi */
  push32((uint32_t)(EDI));
  /* 10d93cf9 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d93cfe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d93d01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93d03 je 0x10d93d35 */
  if (C.zf) goto L_10d93d35;
L_10d93d05:;
  /* 10d93d05 call 0x10d93fc0 */
  push32(0x10d93d0au); f_10d93fc0();
  /* 10d93d0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93d0c jne 0x10d93d2f */
  if (!C.zf) goto L_10d93d2f;
  /* 10d93d0e push 0x10db9504 */
  push32((uint32_t)(0x10db9504u));
  /* 10d93d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93d15 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10d93d1a push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93d1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93d21 call 0x10d91ee0 */
  push32(0x10d93d26u); f_10d91ee0();
  /* 10d93d26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93d29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93d2c jne 0x10d93d2f */
  if (!C.zf) goto L_10d93d2f;
  /* 10d93d2e int3  */
  x86_unimpl("int3 @ 0x10d93d2e");
L_10d93d2f:;
  /* 10d93d2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93d31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93d33 jne 0x10d93d05 */
  if (!C.zf) goto L_10d93d05;
L_10d93d35:;
  /* 10d93d35 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d93d37 call 0x10d96820 */
  push32(0x10d93d3cu); f_10d96820();
  /* 10d93d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d93d3f:;
  /* 10d93d3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93d42 push edx */
  push32((uint32_t)(EDX));
  /* 10d93d43 call 0x10d94420 */
  push32(0x10d93d48u); f_10d94420();
  /* 10d93d48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93d4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93d4d jne 0x10d93d70 */
  if (!C.zf) goto L_10d93d70;
  /* 10d93d4f push 0x10db9608 */
  push32((uint32_t)(0x10db9608u));
  /* 10d93d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93d56 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10d93d5b push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93d60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93d62 call 0x10d91ee0 */
  push32(0x10d93d67u); f_10d91ee0();
  /* 10d93d67 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93d6a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93d6d jne 0x10d93d70 */
  if (!C.zf) goto L_10d93d70;
  /* 10d93d6f int3  */
  x86_unimpl("int3 @ 0x10d93d6f");
L_10d93d70:;
  /* 10d93d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93d72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93d74 jne 0x10d93d3f */
  if (!C.zf) goto L_10d93d3f;
  /* 10d93d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93d79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d93d7f:;
  /* 10d93d7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93d82 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d93d85 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d93d8a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93d8d je 0x10d93dd2 */
  if (C.zf) goto L_10d93dd2;
  /* 10d93d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93d92 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93d96 je 0x10d93dd2 */
  if (C.zf) goto L_10d93dd2;
  /* 10d93d98 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93d9b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d93d9e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d93da3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93da6 je 0x10d93dd2 */
  if (C.zf) goto L_10d93dd2;
  /* 10d93da8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93dab cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93daf je 0x10d93dd2 */
  if (C.zf) goto L_10d93dd2;
  /* 10d93db1 push 0x10db97a0 */
  push32((uint32_t)(0x10db97a0u));
  /* 10d93db6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93db8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10d93dbd push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93dc2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93dc4 call 0x10d91ee0 */
  push32(0x10d93dc9u); f_10d91ee0();
  /* 10d93dc9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93dcf jne 0x10d93dd2 */
  if (!C.zf) goto L_10d93dd2;
  /* 10d93dd1 int3  */
  x86_unimpl("int3 @ 0x10d93dd1");
L_10d93dd2:;
  /* 10d93dd2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d93dd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d93dd6 jne 0x10d93d7f */
  if (!C.zf) goto L_10d93d7f;
  /* 10d93dd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93ddb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93ddf jne 0x10d93dee */
  if (!C.zf) goto L_10d93dee;
  /* 10d93de1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93de5 jne 0x10d93dee */
  if (!C.zf) goto L_10d93dee;
  /* 10d93de7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10d93dee:;
  /* 10d93dee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93df1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93df5 je 0x10d93e29 */
  if (C.zf) goto L_10d93e29;
L_10d93df7:;
  /* 10d93df7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93dfa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d93dfd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93e00 je 0x10d93e23 */
  if (C.zf) goto L_10d93e23;
  /* 10d93e02 push 0x10db96e8 */
  push32((uint32_t)(0x10db96e8u));
  /* 10d93e07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93e09 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10d93e0e push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93e13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93e15 call 0x10d91ee0 */
  push32(0x10d93e1au); f_10d91ee0();
  /* 10d93e1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93e1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93e20 jne 0x10d93e23 */
  if (!C.zf) goto L_10d93e23;
  /* 10d93e22 int3  */
  x86_unimpl("int3 @ 0x10d93e22");
L_10d93e23:;
  /* 10d93e23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93e25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93e27 jne 0x10d93df7 */
  if (!C.zf) goto L_10d93df7;
L_10d93e29:;
  /* 10d93e29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d93e2c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d93e2f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d93e32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d93e34 call 0x10d968c0 */
  push32(0x10d93e39u); f_10d968c0();
  /* 10d93e39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93e3f pop edi */
  EDI = (pop32());
  /* 10d93e40 pop esi */
  ESI = (pop32());
  /* 10d93e41 pop ebx */
  EBX = (pop32());
  /* 10d93e42 mov esp, ebp */
  ESP = (EBP);
  /* 10d93e44 pop ebp */
  EBP = (pop32());
  /* 10d93e45 ret  */
  ESPCHK(0x10d93cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e50 @ 0x10d93e50 (28 bytes, 11 insns) */
void f_10d93e50(void) {
  FTRACE(0x10d93e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93e51 mov ebp, esp */
  EBP = (ESP);
  /* 10d93e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93e54 mov eax, dword ptr [0x10dbca8c] */
  EAX = (r32((uint32_t)(0x10dbca8c)));
  /* 10d93e59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d93e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93e5f mov dword ptr [0x10dbca8c], ecx */
  w32((uint32_t)(0x10dbca8c), (ECX));
  /* 10d93e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93e68 mov esp, ebp */
  ESP = (EBP);
  /* 10d93e6a pop ebp */
  EBP = (pop32());
  /* 10d93e6b ret  */
  ESPCHK(0x10d93e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x10d93e70 (157 bytes, 59 insns) */
void f_10d93e70(void) {
  FTRACE(0x10d93e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93e71 mov ebp, esp */
  EBP = (ESP);
  /* 10d93e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93e74 push ebx */
  push32((uint32_t)(EBX));
  /* 10d93e75 push esi */
  push32((uint32_t)(ESI));
  /* 10d93e76 push edi */
  push32((uint32_t)(EDI));
  /* 10d93e77 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d93e79 call 0x10d96820 */
  push32(0x10d93e7eu); f_10d96820();
  /* 10d93e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93e81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93e84 push eax */
  push32((uint32_t)(EAX));
  /* 10d93e85 call 0x10d94420 */
  push32(0x10d93e8au); f_10d94420();
  /* 10d93e8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93e8f je 0x10d93efc */
  if (C.zf) goto L_10d93efc;
  /* 10d93e91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93e94 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93e97 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d93e9a:;
  /* 10d93e9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93e9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d93ea0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d93ea5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93ea8 je 0x10d93eed */
  if (C.zf) goto L_10d93eed;
  /* 10d93eaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93ead cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93eb1 je 0x10d93eed */
  if (C.zf) goto L_10d93eed;
  /* 10d93eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93eb6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d93eb9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d93ebe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93ec1 je 0x10d93eed */
  if (C.zf) goto L_10d93eed;
  /* 10d93ec3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93ec6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93eca je 0x10d93eed */
  if (C.zf) goto L_10d93eed;
  /* 10d93ecc push 0x10db97a0 */
  push32((uint32_t)(0x10db97a0u));
  /* 10d93ed1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93ed3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10d93ed8 push 0x10db94f8 */
  push32((uint32_t)(0x10db94f8u));
  /* 10d93edd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d93edf call 0x10d91ee0 */
  push32(0x10d93ee4u); f_10d91ee0();
  /* 10d93ee4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93eea jne 0x10d93eed */
  if (!C.zf) goto L_10d93eed;
  /* 10d93eec int3  */
  x86_unimpl("int3 @ 0x10d93eec");
L_10d93eed:;
  /* 10d93eed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d93eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d93ef1 jne 0x10d93e9a */
  if (!C.zf) goto L_10d93e9a;
  /* 10d93ef3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93ef6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93ef9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10d93efc:;
  /* 10d93efc push 9 */
  push32((uint32_t)(0x9u));
  /* 10d93efe call 0x10d968c0 */
  push32(0x10d93f03u); f_10d968c0();
  /* 10d93f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93f06 pop edi */
  EDI = (pop32());
  /* 10d93f07 pop esi */
  ESI = (pop32());
  /* 10d93f08 pop ebx */
  EBX = (pop32());
  /* 10d93f09 mov esp, ebp */
  ESP = (EBP);
  /* 10d93f0b pop ebp */
  EBP = (pop32());
  /* 10d93f0c ret  */
  ESPCHK(0x10d93e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f10 @ 0x10d93f10 (28 bytes, 11 insns) */
void f_10d93f10(void) {
  FTRACE(0x10d93f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93f11 mov ebp, esp */
  EBP = (ESP);
  /* 10d93f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93f14 mov eax, dword ptr [0x10dbcc90] */
  EAX = (r32((uint32_t)(0x10dbcc90)));
  /* 10d93f19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d93f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93f1f mov dword ptr [0x10dbcc90], ecx */
  w32((uint32_t)(0x10dbcc90), (ECX));
  /* 10d93f25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93f28 mov esp, ebp */
  ESP = (EBP);
  /* 10d93f2a pop ebp */
  EBP = (pop32());
  /* 10d93f2b ret  */
  ESPCHK(0x10d93f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f30 @ 0x10d93f30 (136 bytes, 55 insns) */
void f_10d93f30(void) {
  FTRACE(0x10d93f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93f31 mov ebp, esp */
  EBP = (ESP);
  /* 10d93f33 push ecx */
  push32((uint32_t)(ECX));
  /* 10d93f34 push ebx */
  push32((uint32_t)(EBX));
  /* 10d93f35 push esi */
  push32((uint32_t)(ESI));
  /* 10d93f36 push edi */
  push32((uint32_t)(EDI));
  /* 10d93f37 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10d93f3e:;
  /* 10d93f3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d93f41 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d93f44 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93f47 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d93f4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93f4c je 0x10d93fae */
  if (C.zf) goto L_10d93fae;
  /* 10d93f4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93f51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d93f53 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d93f55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93f58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d93f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93f61 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93f64 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d93f67 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93f69 je 0x10d93fac */
  if (C.zf) goto L_10d93fac;
L_10d93f6b:;
  /* 10d93f6b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d93f6e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d93f73 push eax */
  push32((uint32_t)(EAX));
  /* 10d93f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93f77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d93f79 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10d93f7c push edx */
  push32((uint32_t)(EDX));
  /* 10d93f7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d93f80 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93f83 push eax */
  push32((uint32_t)(EAX));
  /* 10d93f84 push 0x10db97e4 */
  push32((uint32_t)(0x10db97e4u));
  /* 10d93f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93f8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d93f91 call 0x10d91ee0 */
  push32(0x10d93f96u); f_10d91ee0();
  /* 10d93f96 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93f99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93f9c jne 0x10d93f9f */
  if (!C.zf) goto L_10d93f9f;
  /* 10d93f9e int3  */
  x86_unimpl("int3 @ 0x10d93f9e");
L_10d93f9f:;
  /* 10d93f9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d93fa1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d93fa3 jne 0x10d93f6b */
  if (!C.zf) goto L_10d93f6b;
  /* 10d93fa5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d93fac:;
  /* 10d93fac jmp 0x10d93f3e */
  goto L_10d93f3e;
L_10d93fae:;
  /* 10d93fae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d93fb1 pop edi */
  EDI = (pop32());
  /* 10d93fb2 pop esi */
  ESI = (pop32());
  /* 10d93fb3 pop ebx */
  EBX = (pop32());
  /* 10d93fb4 mov esp, ebp */
  ESP = (EBP);
  /* 10d93fb6 pop ebp */
  EBP = (pop32());
  /* 10d93fb7 ret  */
  ESPCHK(0x10d93f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x10d93fc0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10d93fc0(void) {
  FTRACE(0x10d93fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d93fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d93fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d93fc3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d93fc6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d93fc7 push esi */
  push32((uint32_t)(ESI));
  /* 10d93fc8 push edi */
  push32((uint32_t)(EDI));
  /* 10d93fc9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d93fd0 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d93fd5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d93fd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d93fda jne 0x10d93fe6 */
  if (!C.zf) goto L_10d93fe6;
  /* 10d93fdc mov eax, 1 */
  EAX = (0x1u);
  /* 10d93fe1 jmp 0x10d94318 */
  goto L_10d94318;
L_10d93fe6:;
  /* 10d93fe6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d93fe8 call 0x10d96820 */
  push32(0x10d93fedu); f_10d96820();
  /* 10d93fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d93ff0 call 0x10d97000 */
  push32(0x10d93ff5u); f_10d97000();
  /* 10d93ff5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d93ff8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d93ffc je 0x10d94109 */
  if (C.zf) goto L_10d94109;
  /* 10d94002 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94006 je 0x10d94109 */
  if (C.zf) goto L_10d94109;
  /* 10d9400c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9400f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d94012 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d94015 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94018 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d9401b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9401f ja 0x10d940d2 */
  if ((!C.cf&&!C.zf)) goto L_10d940d2;
  /* 10d94025 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d94028 jmp dword ptr [eax*4 + 0x10d9431f] */
  switch (EAX) {
    case 0: goto L_10d940aa;
    case 1: goto L_10d94082;
    case 2: goto L_10d9405a;
    case 3: goto L_10d9402f;
    default: x86_unimpl("switch@0x10d94028 out of table"); return;
  }
L_10d9402f:;
  /* 10d9402f push 0x10db9938 */
  push32((uint32_t)(0x10db9938u));
  /* 10d94034 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d94039 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9403b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9403d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9403f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94041 call 0x10d91ee0 */
  push32(0x10d94046u); f_10d91ee0();
  /* 10d94046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94049 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9404c jne 0x10d9404f */
  if (!C.zf) goto L_10d9404f;
  /* 10d9404e int3  */
  x86_unimpl("int3 @ 0x10d9404e");
L_10d9404f:;
  /* 10d9404f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d94051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d94053 jne 0x10d9402f */
  if (!C.zf) goto L_10d9402f;
  /* 10d94055 jmp 0x10d940f8 */
  goto L_10d940f8;
L_10d9405a:;
  /* 10d9405a push 0x10db9914 */
  push32((uint32_t)(0x10db9914u));
  /* 10d9405f push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d94064 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94068 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9406a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9406c call 0x10d91ee0 */
  push32(0x10d94071u); f_10d91ee0();
  /* 10d94071 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94074 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94077 jne 0x10d9407a */
  if (!C.zf) goto L_10d9407a;
  /* 10d94079 int3  */
  x86_unimpl("int3 @ 0x10d94079");
L_10d9407a:;
  /* 10d9407a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9407c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9407e jne 0x10d9405a */
  if (!C.zf) goto L_10d9405a;
  /* 10d94080 jmp 0x10d940f8 */
  goto L_10d940f8;
L_10d94082:;
  /* 10d94082 push 0x10db98f0 */
  push32((uint32_t)(0x10db98f0u));
  /* 10d94087 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d9408c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9408e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94090 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94092 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94094 call 0x10d91ee0 */
  push32(0x10d94099u); f_10d91ee0();
  /* 10d94099 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9409c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9409f jne 0x10d940a2 */
  if (!C.zf) goto L_10d940a2;
  /* 10d940a1 int3  */
  x86_unimpl("int3 @ 0x10d940a1");
L_10d940a2:;
  /* 10d940a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d940a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d940a6 jne 0x10d94082 */
  if (!C.zf) goto L_10d94082;
  /* 10d940a8 jmp 0x10d940f8 */
  goto L_10d940f8;
L_10d940aa:;
  /* 10d940aa push 0x10db98cc */
  push32((uint32_t)(0x10db98ccu));
  /* 10d940af push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d940b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d940b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d940b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d940ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10d940bc call 0x10d91ee0 */
  push32(0x10d940c1u); f_10d91ee0();
  /* 10d940c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d940c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d940c7 jne 0x10d940ca */
  if (!C.zf) goto L_10d940ca;
  /* 10d940c9 int3  */
  x86_unimpl("int3 @ 0x10d940c9");
L_10d940ca:;
  /* 10d940ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d940cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d940ce jne 0x10d940aa */
  if (!C.zf) goto L_10d940aa;
  /* 10d940d0 jmp 0x10d940f8 */
  goto L_10d940f8;
L_10d940d2:;
  /* 10d940d2 push 0x10db98a0 */
  push32((uint32_t)(0x10db98a0u));
  /* 10d940d7 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d940dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d940de push 0 */
  push32((uint32_t)(0x0u));
  /* 10d940e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d940e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d940e4 call 0x10d91ee0 */
  push32(0x10d940e9u); f_10d91ee0();
  /* 10d940e9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d940ec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d940ef jne 0x10d940f2 */
  if (!C.zf) goto L_10d940f2;
  /* 10d940f1 int3  */
  x86_unimpl("int3 @ 0x10d940f1");
L_10d940f2:;
  /* 10d940f2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d940f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d940f6 jne 0x10d940d2 */
  if (!C.zf) goto L_10d940d2;
L_10d940f8:;
  /* 10d940f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d940fa call 0x10d968c0 */
  push32(0x10d940ffu); f_10d968c0();
  /* 10d940ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94102 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d94104 jmp 0x10d94318 */
  goto L_10d94318;
L_10d94109:;
  /* 10d94109 mov eax, dword ptr [0x10dbe4dc] */
  EAX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d9410e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d94111 jmp 0x10d9411b */
  goto L_10d9411b;
L_10d94113:;
  /* 10d94113 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94116 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d94118 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d9411b:;
  /* 10d9411b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9411f je 0x10d9430b */
  if (C.zf) goto L_10d9430b;
  /* 10d94125 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d9412c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9412f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d94132 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d94138 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9413b je 0x10d94160 */
  if (C.zf) goto L_10d94160;
  /* 10d9413d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94140 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94144 je 0x10d94160 */
  if (C.zf) goto L_10d94160;
  /* 10d94146 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94149 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d9414c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d94152 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94155 je 0x10d94160 */
  if (C.zf) goto L_10d94160;
  /* 10d94157 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9415a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9415e jne 0x10d94178 */
  if (!C.zf) goto L_10d94178;
L_10d94160:;
  /* 10d94160 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94163 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d94166 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9416c mov edx, dword ptr [ecx*4 + 0x10dbca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbca94)));
  /* 10d94173 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d94176 jmp 0x10d9417f */
  goto L_10d9417f;
L_10d94178:;
  /* 10d94178 mov dword ptr [ebp - 0x14], 0x10db9898 */
  w32((uint32_t)(EBP + -0x14), (0x10db9898u));
L_10d9417f:;
  /* 10d9417f push 4 */
  push32((uint32_t)(0x4u));
  /* 10d94181 mov al, byte ptr [0x10dbca90] */
  AL = (r8((uint32_t)(0x10dbca90)));
  /* 10d94186 push eax */
  push32((uint32_t)(EAX));
  /* 10d94187 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9418a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9418d push ecx */
  push32((uint32_t)(ECX));
  /* 10d9418e call 0x10d93f30 */
  push32(0x10d94193u); f_10d93f30();
  /* 10d94193 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94198 jne 0x10d941d4 */
  if (!C.zf) goto L_10d941d4;
L_10d9419a:;
  /* 10d9419a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9419d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d941a0 push edx */
  push32((uint32_t)(EDX));
  /* 10d941a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d941a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d941a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d941a8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d941ab push edx */
  push32((uint32_t)(EDX));
  /* 10d941ac push 0x10db9774 */
  push32((uint32_t)(0x10db9774u));
  /* 10d941b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d941b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d941b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d941b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d941b9 call 0x10d91ee0 */
  push32(0x10d941beu); f_10d91ee0();
  /* 10d941be add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d941c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d941c4 jne 0x10d941c7 */
  if (!C.zf) goto L_10d941c7;
  /* 10d941c6 int3  */
  x86_unimpl("int3 @ 0x10d941c6");
L_10d941c7:;
  /* 10d941c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d941c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d941cb jne 0x10d9419a */
  if (!C.zf) goto L_10d9419a;
  /* 10d941cd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d941d4:;
  /* 10d941d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d941d6 mov cl, byte ptr [0x10dbca90] */
  CL = (r8((uint32_t)(0x10dbca90)));
  /* 10d941dc push ecx */
  push32((uint32_t)(ECX));
  /* 10d941dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d941e0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d941e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d941e6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10d941ea push edx */
  push32((uint32_t)(EDX));
  /* 10d941eb call 0x10d93f30 */
  push32(0x10d941f0u); f_10d93f30();
  /* 10d941f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d941f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d941f5 jne 0x10d94231 */
  if (!C.zf) goto L_10d94231;
L_10d941f7:;
  /* 10d941f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d941fa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d941fd push eax */
  push32((uint32_t)(EAX));
  /* 10d941fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94201 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d94204 push edx */
  push32((uint32_t)(EDX));
  /* 10d94205 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d94208 push eax */
  push32((uint32_t)(EAX));
  /* 10d94209 push 0x10db9748 */
  push32((uint32_t)(0x10db9748u));
  /* 10d9420e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94210 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94212 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94214 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94216 call 0x10d91ee0 */
  push32(0x10d9421bu); f_10d91ee0();
  /* 10d9421b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9421e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94221 jne 0x10d94224 */
  if (!C.zf) goto L_10d94224;
  /* 10d94223 int3  */
  x86_unimpl("int3 @ 0x10d94223");
L_10d94224:;
  /* 10d94224 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d94226 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d94228 jne 0x10d941f7 */
  if (!C.zf) goto L_10d941f7;
  /* 10d9422a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d94231:;
  /* 10d94231 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94234 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94238 jne 0x10d9428a */
  if (!C.zf) goto L_10d9428a;
  /* 10d9423a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9423d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d94240 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94241 mov dl, byte ptr [0x10dbca91] */
  DL = (r8((uint32_t)(0x10dbca91)));
  /* 10d94247 push edx */
  push32((uint32_t)(EDX));
  /* 10d94248 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9424b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9424e push eax */
  push32((uint32_t)(EAX));
  /* 10d9424f call 0x10d93f30 */
  push32(0x10d94254u); f_10d93f30();
  /* 10d94254 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94259 jne 0x10d9428a */
  if (!C.zf) goto L_10d9428a;
L_10d9425b:;
  /* 10d9425b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9425e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94261 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94262 push 0x10db986c */
  push32((uint32_t)(0x10db986cu));
  /* 10d94267 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94269 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9426b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9426d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9426f call 0x10d91ee0 */
  push32(0x10d94274u); f_10d91ee0();
  /* 10d94274 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94277 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9427a jne 0x10d9427d */
  if (!C.zf) goto L_10d9427d;
  /* 10d9427c int3  */
  x86_unimpl("int3 @ 0x10d9427c");
L_10d9427d:;
  /* 10d9427d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9427f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d94281 jne 0x10d9425b */
  if (!C.zf) goto L_10d9425b;
  /* 10d94283 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d9428a:;
  /* 10d9428a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9428e jne 0x10d94306 */
  if (!C.zf) goto L_10d94306;
  /* 10d94290 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94293 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94297 je 0x10d942cc */
  if (C.zf) goto L_10d942cc;
L_10d94299:;
  /* 10d94299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9429c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d9429f push edx */
  push32((uint32_t)(EDX));
  /* 10d942a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d942a3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d942a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d942a7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d942aa push edx */
  push32((uint32_t)(EDX));
  /* 10d942ab push 0x10db984c */
  push32((uint32_t)(0x10db984cu));
  /* 10d942b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d942b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d942b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d942b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d942b8 call 0x10d91ee0 */
  push32(0x10d942bdu); f_10d91ee0();
  /* 10d942bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d942c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d942c3 jne 0x10d942c6 */
  if (!C.zf) goto L_10d942c6;
  /* 10d942c5 int3  */
  x86_unimpl("int3 @ 0x10d942c5");
L_10d942c6:;
  /* 10d942c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d942c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d942ca jne 0x10d94299 */
  if (!C.zf) goto L_10d94299;
L_10d942cc:;
  /* 10d942cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d942cf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d942d2 push edx */
  push32((uint32_t)(EDX));
  /* 10d942d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d942d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d942d9 push eax */
  push32((uint32_t)(EAX));
  /* 10d942da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d942dd push ecx */
  push32((uint32_t)(ECX));
  /* 10d942de push 0x10db9820 */
  push32((uint32_t)(0x10db9820u));
  /* 10d942e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d942e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d942e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d942e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d942eb call 0x10d91ee0 */
  push32(0x10d942f0u); f_10d91ee0();
  /* 10d942f0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d942f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d942f6 jne 0x10d942f9 */
  if (!C.zf) goto L_10d942f9;
  /* 10d942f8 int3  */
  x86_unimpl("int3 @ 0x10d942f8");
L_10d942f9:;
  /* 10d942f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d942fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d942fd jne 0x10d942cc */
  if (!C.zf) goto L_10d942cc;
  /* 10d942ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d94306:;
  /* 10d94306 jmp 0x10d94113 */
  goto L_10d94113;
L_10d9430b:;
  /* 10d9430b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d9430d call 0x10d968c0 */
  push32(0x10d94312u); f_10d968c0();
  /* 10d94312 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94315 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d94318:;
  /* 10d94318 pop edi */
  EDI = (pop32());
  /* 10d94319 pop esi */
  ESI = (pop32());
  /* 10d9431a pop ebx */
  EBX = (pop32());
  /* 10d9431b mov esp, ebp */
  ESP = (EBP);
  /* 10d9431d pop ebp */
  EBP = (pop32());
  /* 10d9431e ret  */
  ESPCHK(0x10d93fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x10d94330 (34 bytes, 13 insns) */
void f_10d94330(void) {
  FTRACE(0x10d94330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94330 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94331 mov ebp, esp */
  EBP = (ESP);
  /* 10d94333 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94334 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d94339 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9433c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94340 je 0x10d9434b */
  if (C.zf) goto L_10d9434b;
  /* 10d94342 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94345 mov dword ptr [0x10dbca84], ecx */
  w32((uint32_t)(0x10dbca84), (ECX));
L_10d9434b:;
  /* 10d9434b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9434e mov esp, ebp */
  ESP = (EBP);
  /* 10d94350 pop ebp */
  EBP = (pop32());
  /* 10d94351 ret  */
  ESPCHK(0x10d94330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004360 @ 0x10d94360 (103 bytes, 38 insns) */
void f_10d94360(void) {
  FTRACE(0x10d94360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94360 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94361 mov ebp, esp */
  EBP = (ESP);
  /* 10d94363 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94364 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d94369 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9436c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9436e jne 0x10d94372 */
  if (!C.zf) goto L_10d94372;
  /* 10d94370 jmp 0x10d943c3 */
  goto L_10d943c3;
L_10d94372:;
  /* 10d94372 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d94374 call 0x10d96820 */
  push32(0x10d94379u); f_10d96820();
  /* 10d94379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9437c mov ecx, dword ptr [0x10dbe4dc] */
  ECX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d94382 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d94385 jmp 0x10d9438f */
  goto L_10d9438f;
L_10d94387:;
  /* 10d94387 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9438a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d9438c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9438f:;
  /* 10d9438f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94393 je 0x10d943b9 */
  if (C.zf) goto L_10d943b9;
  /* 10d94395 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94398 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d9439b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d943a1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d943a4 jne 0x10d943b7 */
  if (!C.zf) goto L_10d943b7;
  /* 10d943a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d943a9 push eax */
  push32((uint32_t)(EAX));
  /* 10d943aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d943ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d943b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d943b1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10d943b4u);
  /* 10d943b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d943b7:;
  /* 10d943b7 jmp 0x10d94387 */
  goto L_10d94387;
L_10d943b9:;
  /* 10d943b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d943bb call 0x10d968c0 */
  push32(0x10d943c0u); f_10d968c0();
  /* 10d943c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d943c3:;
  /* 10d943c3 mov esp, ebp */
  ESP = (EBP);
  /* 10d943c5 pop ebp */
  EBP = (pop32());
  /* 10d943c6 ret  */
  ESPCHK(0x10d94360u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10d943d0 (75 bytes, 28 insns) */
void f_10d943d0(void) {
  FTRACE(0x10d943d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d943d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d943d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d943d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d943d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d943d8 je 0x10d9440d */
  if (C.zf) goto L_10d9440d;
  /* 10d943da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d943dd push eax */
  push32((uint32_t)(EAX));
  /* 10d943de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d943e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d943e2 call dword ptr [0x10dc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc023c))), 0x10d943e8u);
  /* 10d943e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d943ea jne 0x10d9440d */
  if (!C.zf) goto L_10d9440d;
  /* 10d943ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d943f0 je 0x10d94404 */
  if (C.zf) goto L_10d94404;
  /* 10d943f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d943f5 push edx */
  push32((uint32_t)(EDX));
  /* 10d943f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d943f9 push eax */
  push32((uint32_t)(EAX));
  /* 10d943fa call dword ptr [0x10dc02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e8))), 0x10d94400u);
  /* 10d94400 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94402 jne 0x10d9440d */
  if (!C.zf) goto L_10d9440d;
L_10d94404:;
  /* 10d94404 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d9440b jmp 0x10d94414 */
  goto L_10d94414;
L_10d9440d:;
  /* 10d9440d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d94414:;
  /* 10d94414 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94417 mov esp, ebp */
  ESP = (EBP);
  /* 10d94419 pop ebp */
  EBP = (pop32());
  /* 10d9441a ret  */
  ESPCHK(0x10d943d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004420 @ 0x10d94420 (134 bytes, 50 insns) */
void f_10d94420(void) {
  FTRACE(0x10d94420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94420 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94421 mov ebp, esp */
  EBP = (ESP);
  /* 10d94423 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94424 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94428 jne 0x10d9442e */
  if (!C.zf) goto L_10d9442e;
  /* 10d9442a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9442c jmp 0x10d944a2 */
  goto L_10d944a2;
L_10d9442e:;
  /* 10d9442e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d94430 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d94432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94435 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94438 push eax */
  push32((uint32_t)(EAX));
  /* 10d94439 call 0x10d943d0 */
  push32(0x10d9443eu); f_10d943d0();
  /* 10d9443e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94443 jne 0x10d94449 */
  if (!C.zf) goto L_10d94449;
  /* 10d94445 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d94447 jmp 0x10d944a2 */
  goto L_10d944a2;
L_10d94449:;
  /* 10d94449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9444c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9444f push ecx */
  push32((uint32_t)(ECX));
  /* 10d94450 call 0x10d97120 */
  push32(0x10d94455u); f_10d97120();
  /* 10d94455 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94458 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9445b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9445f je 0x10d94476 */
  if (C.zf) goto L_10d94476;
  /* 10d94461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94464 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94467 push edx */
  push32((uint32_t)(EDX));
  /* 10d94468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9446b push eax */
  push32((uint32_t)(EAX));
  /* 10d9446c call 0x10d97180 */
  push32(0x10d94471u); f_10d97180();
  /* 10d94471 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94474 jmp 0x10d944a2 */
  goto L_10d944a2;
L_10d94476:;
  /* 10d94476 mov ecx, dword ptr [0x10dbe490] */
  ECX = (r32((uint32_t)(0x10dbe490)));
  /* 10d9447c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d94482 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d94484 je 0x10d9448d */
  if (C.zf) goto L_10d9448d;
  /* 10d94486 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9448b jmp 0x10d944a2 */
  goto L_10d944a2;
L_10d9448d:;
  /* 10d9448d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94490 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94493 push edx */
  push32((uint32_t)(EDX));
  /* 10d94494 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94496 mov eax, dword ptr [0x10dbfe2c] */
  EAX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d9449b push eax */
  push32((uint32_t)(EAX));
  /* 10d9449c call dword ptr [0x10dc0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0240))), 0x10d944a2u);
L_10d944a2:;
  /* 10d944a2 mov esp, ebp */
  ESP = (EBP);
  /* 10d944a4 pop ebp */
  EBP = (pop32());
  /* 10d944a5 ret  */
  ESPCHK(0x10d94420u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x10d944b0 (227 bytes, 80 insns) */
void f_10d944b0(void) {
  FTRACE(0x10d944b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d944b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d944b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d944b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d944b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d944b7 push eax */
  push32((uint32_t)(EAX));
  /* 10d944b8 call 0x10d94420 */
  push32(0x10d944bdu); f_10d94420();
  /* 10d944bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d944c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d944c2 jne 0x10d944cb */
  if (!C.zf) goto L_10d944cb;
  /* 10d944c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d944c6 jmp 0x10d9458f */
  goto L_10d9458f;
L_10d944cb:;
  /* 10d944cb push 9 */
  push32((uint32_t)(0x9u));
  /* 10d944cd call 0x10d96820 */
  push32(0x10d944d2u); f_10d96820();
  /* 10d944d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d944d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d944d8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d944db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d944de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d944e1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d944e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d944e9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d944ec je 0x10d94510 */
  if (C.zf) goto L_10d94510;
  /* 10d944ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d944f1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d944f5 je 0x10d94510 */
  if (C.zf) goto L_10d94510;
  /* 10d944f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d944fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d944fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d94502 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94505 je 0x10d94510 */
  if (C.zf) goto L_10d94510;
  /* 10d94507 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9450a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9450e jne 0x10d94583 */
  if (!C.zf) goto L_10d94583;
L_10d94510:;
  /* 10d94510 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d94512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d94515 push edx */
  push32((uint32_t)(EDX));
  /* 10d94516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94519 push eax */
  push32((uint32_t)(EAX));
  /* 10d9451a call 0x10d943d0 */
  push32(0x10d9451fu); f_10d943d0();
  /* 10d9451f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94524 je 0x10d94583 */
  if (C.zf) goto L_10d94583;
  /* 10d94526 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94529 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d9452c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9452f jne 0x10d94583 */
  if (!C.zf) goto L_10d94583;
  /* 10d94531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94534 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d94537 cmp ecx, dword ptr [0x10dbca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9453d jg 0x10d94583 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d94583;
  /* 10d9453f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94543 je 0x10d94550 */
  if (C.zf) goto L_10d94550;
  /* 10d94545 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d94548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9454b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d9454e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d94550:;
  /* 10d94550 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94554 je 0x10d94561 */
  if (C.zf) goto L_10d94561;
  /* 10d94556 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d94559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9455c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d9455f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d94561:;
  /* 10d94561 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94565 je 0x10d94572 */
  if (C.zf) goto L_10d94572;
  /* 10d94567 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9456a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9456d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d94570 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d94572:;
  /* 10d94572 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d94574 call 0x10d968c0 */
  push32(0x10d94579u); f_10d968c0();
  /* 10d94579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9457c mov eax, 1 */
  EAX = (0x1u);
  /* 10d94581 jmp 0x10d9458f */
  goto L_10d9458f;
L_10d94583:;
  /* 10d94583 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d94585 call 0x10d968c0 */
  push32(0x10d9458au); f_10d968c0();
  /* 10d9458a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9458d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9458f:;
  /* 10d9458f mov esp, ebp */
  ESP = (EBP);
  /* 10d94591 pop ebp */
  EBP = (pop32());
  /* 10d94592 ret  */
  ESPCHK(0x10d944b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045a0 @ 0x10d945a0 (28 bytes, 11 insns) */
void f_10d945a0(void) {
  FTRACE(0x10d945a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d945a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d945a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d945a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d945a4 mov eax, dword ptr [0x10dbfe38] */
  EAX = (r32((uint32_t)(0x10dbfe38)));
  /* 10d945a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d945ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d945af mov dword ptr [0x10dbfe38], ecx */
  w32((uint32_t)(0x10dbfe38), (ECX));
  /* 10d945b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d945b8 mov esp, ebp */
  ESP = (EBP);
  /* 10d945ba pop ebp */
  EBP = (pop32());
  /* 10d945bb ret  */
  ESPCHK(0x10d945a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100045c0 @ 0x10d945c0 (362 bytes, 116 insns) */
void f_10d945c0(void) {
  FTRACE(0x10d945c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d945c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d945c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d945c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d945c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d945c7 push esi */
  push32((uint32_t)(ESI));
  /* 10d945c8 push edi */
  push32((uint32_t)(EDI));
  /* 10d945c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d945cd jne 0x10d945fa */
  if (!C.zf) goto L_10d945fa;
L_10d945cf:;
  /* 10d945cf push 0x10db9980 */
  push32((uint32_t)(0x10db9980u));
  /* 10d945d4 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d945d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d945db push 0 */
  push32((uint32_t)(0x0u));
  /* 10d945dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d945df push 0 */
  push32((uint32_t)(0x0u));
  /* 10d945e1 call 0x10d91ee0 */
  push32(0x10d945e6u); f_10d91ee0();
  /* 10d945e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d945e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d945ec jne 0x10d945ef */
  if (!C.zf) goto L_10d945ef;
  /* 10d945ee int3  */
  x86_unimpl("int3 @ 0x10d945ee");
L_10d945ef:;
  /* 10d945ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d945f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d945f3 jne 0x10d945cf */
  if (!C.zf) goto L_10d945cf;
  /* 10d945f5 jmp 0x10d94723 */
  goto L_10d94723;
L_10d945fa:;
  /* 10d945fa push 9 */
  push32((uint32_t)(0x9u));
  /* 10d945fc call 0x10d96820 */
  push32(0x10d94601u); f_10d96820();
  /* 10d94601 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94604 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94607 mov edx, dword ptr [0x10dbe4dc] */
  EDX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d9460d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d9460f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d94616 jmp 0x10d94621 */
  goto L_10d94621;
L_10d94618:;
  /* 10d94618 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9461b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9461e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d94621:;
  /* 10d94621 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94625 jge 0x10d94645 */
  if ((C.sf==C.of)) goto L_10d94645;
  /* 10d94627 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9462a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9462d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10d94635 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94638 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9463b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10d94643 jmp 0x10d94618 */
  goto L_10d94618;
L_10d94645:;
  /* 10d94645 mov edx, dword ptr [0x10dbe4dc] */
  EDX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d9464b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d9464e jmp 0x10d94658 */
  goto L_10d94658;
L_10d94650:;
  /* 10d94650 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94653 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d94655 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d94658:;
  /* 10d94658 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9465c je 0x10d94701 */
  if (C.zf) goto L_10d94701;
  /* 10d94662 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94665 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d94668 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9466d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9466f jl 0x10d946d7 */
  if ((C.sf!=C.of)) goto L_10d946d7;
  /* 10d94671 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94674 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d94677 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9467d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94680 jge 0x10d946d7 */
  if ((C.sf==C.of)) goto L_10d946d7;
  /* 10d94682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94685 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d94688 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9468e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94691 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10d94695 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94698 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9469b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d9469e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d946a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d946a7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10d946ab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d946ae mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d946b1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d946b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d946b9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10d946bd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d946c0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d946c3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d946c6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d946c9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d946ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d946d1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10d946d5 jmp 0x10d946fc */
  goto L_10d946fc;
L_10d946d7:;
  /* 10d946d7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d946da push edx */
  push32((uint32_t)(EDX));
  /* 10d946db push 0x10db995c */
  push32((uint32_t)(0x10db995cu));
  /* 10d946e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d946e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d946e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d946e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d946e8 call 0x10d91ee0 */
  push32(0x10d946edu); f_10d91ee0();
  /* 10d946ed add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d946f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d946f3 jne 0x10d946f6 */
  if (!C.zf) goto L_10d946f6;
  /* 10d946f5 int3  */
  x86_unimpl("int3 @ 0x10d946f5");
L_10d946f6:;
  /* 10d946f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d946f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d946fa jne 0x10d946d7 */
  if (!C.zf) goto L_10d946d7;
L_10d946fc:;
  /* 10d946fc jmp 0x10d94650 */
  goto L_10d94650;
L_10d94701:;
  /* 10d94701 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94704 mov edx, dword ptr [0x10dbe4e4] */
  EDX = (r32((uint32_t)(0x10dbe4e4)));
  /* 10d9470a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10d9470d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94710 mov ecx, dword ptr [0x10dbe4d8] */
  ECX = (r32((uint32_t)(0x10dbe4d8)));
  /* 10d94716 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10d94719 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d9471b call 0x10d968c0 */
  push32(0x10d94720u); f_10d968c0();
  /* 10d94720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d94723:;
  /* 10d94723 pop edi */
  EDI = (pop32());
  /* 10d94724 pop esi */
  ESI = (pop32());
  /* 10d94725 pop ebx */
  EBX = (pop32());
  /* 10d94726 mov esp, ebp */
  ESP = (EBP);
  /* 10d94728 pop ebp */
  EBP = (pop32());
  /* 10d94729 ret  */
  ESPCHK(0x10d945c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x10d94730 (291 bytes, 95 insns) */
void f_10d94730(void) {
  FTRACE(0x10d94730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94730 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94731 mov ebp, esp */
  EBP = (ESP);
  /* 10d94733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94736 push ebx */
  push32((uint32_t)(EBX));
  /* 10d94737 push esi */
  push32((uint32_t)(ESI));
  /* 10d94738 push edi */
  push32((uint32_t)(EDI));
  /* 10d94739 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d94740 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94744 je 0x10d94752 */
  if (C.zf) goto L_10d94752;
  /* 10d94746 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9474a je 0x10d94752 */
  if (C.zf) goto L_10d94752;
  /* 10d9474c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94750 jne 0x10d94780 */
  if (!C.zf) goto L_10d94780;
L_10d94752:;
  /* 10d94752 push 0x10db99a8 */
  push32((uint32_t)(0x10db99a8u));
  /* 10d94757 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d9475c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9475e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94760 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94762 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94764 call 0x10d91ee0 */
  push32(0x10d94769u); f_10d91ee0();
  /* 10d94769 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9476c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9476f jne 0x10d94772 */
  if (!C.zf) goto L_10d94772;
  /* 10d94771 int3  */
  x86_unimpl("int3 @ 0x10d94771");
L_10d94772:;
  /* 10d94772 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d94774 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94776 jne 0x10d94752 */
  if (!C.zf) goto L_10d94752;
  /* 10d94778 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9477b jmp 0x10d9484c */
  goto L_10d9484c;
L_10d94780:;
  /* 10d94780 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d94787 jmp 0x10d94792 */
  goto L_10d94792;
L_10d94789:;
  /* 10d94789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9478c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9478f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d94792:;
  /* 10d94792 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94796 jge 0x10d9481c */
  if ((C.sf==C.of)) goto L_10d9481c;
  /* 10d9479c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9479f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d947a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d947a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d947a8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10d947ac sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d947b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d947b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d947b6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10d947ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d947bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d947c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d947c3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d947c6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10d947ca sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d947ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d947d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d947d4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10d947d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d947db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d947de cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d947e3 jne 0x10d947f2 */
  if (!C.zf) goto L_10d947f2;
  /* 10d947e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d947e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d947eb cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d947f0 je 0x10d94817 */
  if (C.zf) goto L_10d94817;
L_10d947f2:;
  /* 10d947f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d947f6 je 0x10d94817 */
  if (C.zf) goto L_10d94817;
  /* 10d947f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d947fc jne 0x10d94810 */
  if (!C.zf) goto L_10d94810;
  /* 10d947fe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94802 jne 0x10d94817 */
  if (!C.zf) goto L_10d94817;
  /* 10d94804 mov eax, dword ptr [0x10dbca84] */
  EAX = (r32((uint32_t)(0x10dbca84)));
  /* 10d94809 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10d9480c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9480e je 0x10d94817 */
  if (C.zf) goto L_10d94817;
L_10d94810:;
  /* 10d94810 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10d94817:;
  /* 10d94817 jmp 0x10d94789 */
  goto L_10d94789;
L_10d9481c:;
  /* 10d9481c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9481f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d94822 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10d94825 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94828 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9482b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10d9482e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d94831 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d94834 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10d94837 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9483a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9483d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10d94840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94843 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d94849 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d9484c:;
  /* 10d9484c pop edi */
  EDI = (pop32());
  /* 10d9484d pop esi */
  ESI = (pop32());
  /* 10d9484e pop ebx */
  EBX = (pop32());
  /* 10d9484f mov esp, ebp */
  ESP = (EBP);
  /* 10d94851 pop ebp */
  EBP = (pop32());
  /* 10d94852 ret  */
  ESPCHK(0x10d94730u, _esp0);
  ESP += 4; return;
}

/* FUN_10004860 @ 0x10d94860 (697 bytes, 253 insns) */
void f_10d94860(void) {
  FTRACE(0x10d94860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94860 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94861 mov ebp, esp */
  EBP = (ESP);
  /* 10d94863 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94866 push ebx */
  push32((uint32_t)(EBX));
  /* 10d94867 push esi */
  push32((uint32_t)(ESI));
  /* 10d94868 push edi */
  push32((uint32_t)(EDI));
  /* 10d94869 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d94870 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d94872 call 0x10d96820 */
  push32(0x10d94877u); f_10d96820();
  /* 10d94877 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9487a:;
  /* 10d9487a push 0x10db9aa0 */
  push32((uint32_t)(0x10db9aa0u));
  /* 10d9487f push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d94884 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94886 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94888 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9488a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9488c call 0x10d91ee0 */
  push32(0x10d94891u); f_10d91ee0();
  /* 10d94891 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94897 jne 0x10d9489a */
  if (!C.zf) goto L_10d9489a;
  /* 10d94899 int3  */
  x86_unimpl("int3 @ 0x10d94899");
L_10d9489a:;
  /* 10d9489a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9489c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9489e jne 0x10d9487a */
  if (!C.zf) goto L_10d9487a;
  /* 10d948a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d948a4 je 0x10d948ae */
  if (C.zf) goto L_10d948ae;
  /* 10d948a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d948a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d948ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d948ae:;
  /* 10d948ae mov eax, dword ptr [0x10dbe4dc] */
  EAX = (r32((uint32_t)(0x10dbe4dc)));
  /* 10d948b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d948b6 jmp 0x10d948c0 */
  goto L_10d948c0;
L_10d948b8:;
  /* 10d948b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d948bb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d948bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d948c0:;
  /* 10d948c0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d948c4 je 0x10d94ae2 */
  if (C.zf) goto L_10d94ae2;
  /* 10d948ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d948cd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d948d0 je 0x10d94ae2 */
  if (C.zf) goto L_10d94ae2;
  /* 10d948d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d948d9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d948dc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d948e2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d948e5 je 0x10d94914 */
  if (C.zf) goto L_10d94914;
  /* 10d948e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d948ea mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d948ed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d948f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d948f5 je 0x10d94914 */
  if (C.zf) goto L_10d94914;
  /* 10d948f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d948fa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d948fd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d94902 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94905 jne 0x10d94919 */
  if (!C.zf) goto L_10d94919;
  /* 10d94907 mov ecx, dword ptr [0x10dbca84] */
  ECX = (r32((uint32_t)(0x10dbca84)));
  /* 10d9490d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10d94910 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d94912 jne 0x10d94919 */
  if (!C.zf) goto L_10d94919;
L_10d94914:;
  /* 10d94914 jmp 0x10d94add */
  goto L_10d94add;
L_10d94919:;
  /* 10d94919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9491c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94920 je 0x10d94992 */
  if (C.zf) goto L_10d94992;
  /* 10d94922 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94924 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d94926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94929 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d9492c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9492d call 0x10d943d0 */
  push32(0x10d94932u); f_10d943d0();
  /* 10d94932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94935 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94937 jne 0x10d94963 */
  if (!C.zf) goto L_10d94963;
L_10d94939:;
  /* 10d94939 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9493c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d9493f push eax */
  push32((uint32_t)(EAX));
  /* 10d94940 push 0x10db9a8c */
  push32((uint32_t)(0x10db9a8cu));
  /* 10d94945 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94947 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94949 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9494b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9494d call 0x10d91ee0 */
  push32(0x10d94952u); f_10d91ee0();
  /* 10d94952 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94955 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94958 jne 0x10d9495b */
  if (!C.zf) goto L_10d9495b;
  /* 10d9495a int3  */
  x86_unimpl("int3 @ 0x10d9495a");
L_10d9495b:;
  /* 10d9495b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d9495d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9495f jne 0x10d94939 */
  if (!C.zf) goto L_10d94939;
  /* 10d94961 jmp 0x10d94992 */
  goto L_10d94992;
L_10d94963:;
  /* 10d94963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94966 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d94969 push eax */
  push32((uint32_t)(EAX));
  /* 10d9496a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9496d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d94970 push edx */
  push32((uint32_t)(EDX));
  /* 10d94971 push 0x10db9a80 */
  push32((uint32_t)(0x10db9a80u));
  /* 10d94976 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94978 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9497a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9497c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9497e call 0x10d91ee0 */
  push32(0x10d94983u); f_10d91ee0();
  /* 10d94983 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94986 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94989 jne 0x10d9498c */
  if (!C.zf) goto L_10d9498c;
  /* 10d9498b int3  */
  x86_unimpl("int3 @ 0x10d9498b");
L_10d9498c:;
  /* 10d9498c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9498e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94990 jne 0x10d94963 */
  if (!C.zf) goto L_10d94963;
L_10d94992:;
  /* 10d94992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94995 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d94998 push edx */
  push32((uint32_t)(EDX));
  /* 10d94999 push 0x10db9a78 */
  push32((uint32_t)(0x10db9a78u));
  /* 10d9499e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d949a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d949a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d949a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d949a6 call 0x10d91ee0 */
  push32(0x10d949abu); f_10d91ee0();
  /* 10d949ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d949ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d949b1 jne 0x10d949b4 */
  if (!C.zf) goto L_10d949b4;
  /* 10d949b3 int3  */
  x86_unimpl("int3 @ 0x10d949b3");
L_10d949b4:;
  /* 10d949b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d949b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d949b8 jne 0x10d94992 */
  if (!C.zf) goto L_10d94992;
  /* 10d949ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d949bd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d949c0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d949c6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d949c9 jne 0x10d94a3c */
  if (!C.zf) goto L_10d94a3c;
L_10d949cb:;
  /* 10d949cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d949ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d949d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d949d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d949d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d949d8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d949db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d949e0 push eax */
  push32((uint32_t)(EAX));
  /* 10d949e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d949e4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d949e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d949e8 push 0x10db9a44 */
  push32((uint32_t)(0x10db9a44u));
  /* 10d949ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10d949ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10d949f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d949f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d949f5 call 0x10d91ee0 */
  push32(0x10d949fau); f_10d91ee0();
  /* 10d949fa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d949fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94a00 jne 0x10d94a03 */
  if (!C.zf) goto L_10d94a03;
  /* 10d94a02 int3  */
  x86_unimpl("int3 @ 0x10d94a02");
L_10d94a03:;
  /* 10d94a03 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d94a05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d94a07 jne 0x10d949cb */
  if (!C.zf) goto L_10d949cb;
  /* 10d94a09 cmp dword ptr [0x10dbfe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94a10 je 0x10d94a2b */
  if (C.zf) goto L_10d94a2b;
  /* 10d94a12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a15 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d94a18 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94a19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a1c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94a1f push edx */
  push32((uint32_t)(EDX));
  /* 10d94a20 call dword ptr [0x10dbfe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbfe38))), 0x10d94a26u);
  /* 10d94a26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94a29 jmp 0x10d94a37 */
  goto L_10d94a37;
L_10d94a2b:;
  /* 10d94a2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a2e push eax */
  push32((uint32_t)(EAX));
  /* 10d94a2f call 0x10d94b20 */
  push32(0x10d94a34u); f_10d94b20();
  /* 10d94a34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d94a37:;
  /* 10d94a37 jmp 0x10d94add */
  goto L_10d94add;
L_10d94a3c:;
  /* 10d94a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a3f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94a43 jne 0x10d94a82 */
  if (!C.zf) goto L_10d94a82;
L_10d94a45:;
  /* 10d94a45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a48 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d94a4b push eax */
  push32((uint32_t)(EAX));
  /* 10d94a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a4f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94a52 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94a53 push 0x10db9a1c */
  push32((uint32_t)(0x10db9a1cu));
  /* 10d94a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94a5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94a60 call 0x10d91ee0 */
  push32(0x10d94a65u); f_10d91ee0();
  /* 10d94a65 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94a68 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94a6b jne 0x10d94a6e */
  if (!C.zf) goto L_10d94a6e;
  /* 10d94a6d int3  */
  x86_unimpl("int3 @ 0x10d94a6d");
L_10d94a6e:;
  /* 10d94a6e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d94a70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d94a72 jne 0x10d94a45 */
  if (!C.zf) goto L_10d94a45;
  /* 10d94a74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a77 push eax */
  push32((uint32_t)(EAX));
  /* 10d94a78 call 0x10d94b20 */
  push32(0x10d94a7du); f_10d94b20();
  /* 10d94a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94a80 jmp 0x10d94add */
  goto L_10d94add;
L_10d94a82:;
  /* 10d94a82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a85 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d94a88 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d94a8e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94a91 jne 0x10d94add */
  if (!C.zf) goto L_10d94add;
L_10d94a93:;
  /* 10d94a93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a96 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d94a99 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94a9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94a9d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d94aa0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d94aa3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d94aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10d94aa9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94aac add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94aaf push ecx */
  push32((uint32_t)(ECX));
  /* 10d94ab0 push 0x10db99e8 */
  push32((uint32_t)(0x10db99e8u));
  /* 10d94ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94abb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94abd call 0x10d91ee0 */
  push32(0x10d94ac2u); f_10d91ee0();
  /* 10d94ac2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94ac5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94ac8 jne 0x10d94acb */
  if (!C.zf) goto L_10d94acb;
  /* 10d94aca int3  */
  x86_unimpl("int3 @ 0x10d94aca");
L_10d94acb:;
  /* 10d94acb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d94acd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d94acf jne 0x10d94a93 */
  if (!C.zf) goto L_10d94a93;
  /* 10d94ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94ad4 push eax */
  push32((uint32_t)(EAX));
  /* 10d94ad5 call 0x10d94b20 */
  push32(0x10d94adau); f_10d94b20();
  /* 10d94ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d94add:;
  /* 10d94add jmp 0x10d948b8 */
  goto L_10d948b8;
L_10d94ae2:;
  /* 10d94ae2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d94ae4 call 0x10d968c0 */
  push32(0x10d94ae9u); f_10d968c0();
  /* 10d94ae9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d94aec:;
  /* 10d94aec push 0x10db99d0 */
  push32((uint32_t)(0x10db99d0u));
  /* 10d94af1 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d94af6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94af8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94afa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94afc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94afe call 0x10d91ee0 */
  push32(0x10d94b03u); f_10d91ee0();
  /* 10d94b03 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94b06 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94b09 jne 0x10d94b0c */
  if (!C.zf) goto L_10d94b0c;
  /* 10d94b0b int3  */
  x86_unimpl("int3 @ 0x10d94b0b");
L_10d94b0c:;
  /* 10d94b0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d94b0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d94b10 jne 0x10d94aec */
  if (!C.zf) goto L_10d94aec;
  /* 10d94b12 pop edi */
  EDI = (pop32());
  /* 10d94b13 pop esi */
  ESI = (pop32());
  /* 10d94b14 pop ebx */
  EBX = (pop32());
  /* 10d94b15 mov esp, ebp */
  ESP = (EBP);
  /* 10d94b17 pop ebp */
  EBP = (pop32());
  /* 10d94b18 ret  */
  ESPCHK(0x10d94860u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x10d94b20 (276 bytes, 89 insns) */
void f_10d94b20(void) {
  FTRACE(0x10d94b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94b21 mov ebp, esp */
  EBP = (ESP);
  /* 10d94b23 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94b26 push ebx */
  push32((uint32_t)(EBX));
  /* 10d94b27 push esi */
  push32((uint32_t)(ESI));
  /* 10d94b28 push edi */
  push32((uint32_t)(EDI));
  /* 10d94b29 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10d94b30 jmp 0x10d94b3b */
  goto L_10d94b3b;
L_10d94b32:;
  /* 10d94b32 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d94b35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94b38 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10d94b3b:;
  /* 10d94b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94b3e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94b42 jge 0x10d94b4f */
  if ((C.sf==C.of)) goto L_10d94b4f;
  /* 10d94b44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94b47 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d94b4a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10d94b4d jmp 0x10d94b56 */
  goto L_10d94b56;
L_10d94b4f:;
  /* 10d94b4f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10d94b56:;
  /* 10d94b56 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d94b59 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94b5c jge 0x10d94bfc */
  if ((C.sf==C.of)) goto L_10d94bfc;
  /* 10d94b62 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94b65 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94b68 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10d94b6b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10d94b6e cmp dword ptr [0x10dbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94b75 jle 0x10d94b93 */
  if ((C.zf||C.sf!=C.of)) goto L_10d94b93;
  /* 10d94b77 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10d94b7c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d94b7f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d94b85 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94b86 call 0x10d98e30 */
  push32(0x10d94b8bu); f_10d98e30();
  /* 10d94b8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94b8e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10d94b91 jmp 0x10d94bb0 */
  goto L_10d94bb0;
L_10d94b93:;
  /* 10d94b93 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d94b96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d94b9c mov eax, dword ptr [0x10dbcc98] */
  EAX = (r32((uint32_t)(0x10dbcc98)));
  /* 10d94ba1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d94ba3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d94ba7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10d94bad mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10d94bb0:;
  /* 10d94bb0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94bb4 je 0x10d94bc4 */
  if (C.zf) goto L_10d94bc4;
  /* 10d94bb6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d94bb9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d94bbf mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10d94bc2 jmp 0x10d94bcb */
  goto L_10d94bcb;
L_10d94bc4:;
  /* 10d94bc4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10d94bcb:;
  /* 10d94bcb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d94bce mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10d94bd1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10d94bd5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d94bd8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d94bde push edx */
  push32((uint32_t)(EDX));
  /* 10d94bdf push 0x10db9ac4 */
  push32((uint32_t)(0x10db9ac4u));
  /* 10d94be4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d94be7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d94bea lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10d94bee push ecx */
  push32((uint32_t)(ECX));
  /* 10d94bef call 0x10d98d30 */
  push32(0x10d94bf4u); f_10d98d30();
  /* 10d94bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94bf7 jmp 0x10d94b32 */
  goto L_10d94b32;
L_10d94bfc:;
  /* 10d94bfc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d94bff mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10d94c04:;
  /* 10d94c04 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10d94c07 push eax */
  push32((uint32_t)(EAX));
  /* 10d94c08 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10d94c0b push ecx */
  push32((uint32_t)(ECX));
  /* 10d94c0c push 0x10db9ab4 */
  push32((uint32_t)(0x10db9ab4u));
  /* 10d94c11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c19 call 0x10d91ee0 */
  push32(0x10d94c1eu); f_10d91ee0();
  /* 10d94c1e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94c21 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94c24 jne 0x10d94c27 */
  if (!C.zf) goto L_10d94c27;
  /* 10d94c26 int3  */
  x86_unimpl("int3 @ 0x10d94c26");
L_10d94c27:;
  /* 10d94c27 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d94c29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d94c2b jne 0x10d94c04 */
  if (!C.zf) goto L_10d94c04;
  /* 10d94c2d pop edi */
  EDI = (pop32());
  /* 10d94c2e pop esi */
  ESI = (pop32());
  /* 10d94c2f pop ebx */
  EBX = (pop32());
  /* 10d94c30 mov esp, ebp */
  ESP = (EBP);
  /* 10d94c32 pop ebp */
  EBP = (pop32());
  /* 10d94c33 ret  */
  ESPCHK(0x10d94b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c40 @ 0x10d94c40 (116 bytes, 46 insns) */
void f_10d94c40(void) {
  FTRACE(0x10d94c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94c41 mov ebp, esp */
  EBP = (ESP);
  /* 10d94c43 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94c46 push ebx */
  push32((uint32_t)(EBX));
  /* 10d94c47 push esi */
  push32((uint32_t)(ESI));
  /* 10d94c48 push edi */
  push32((uint32_t)(EDI));
  /* 10d94c49 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10d94c4c push eax */
  push32((uint32_t)(EAX));
  /* 10d94c4d call 0x10d945c0 */
  push32(0x10d94c52u); f_10d945c0();
  /* 10d94c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94c55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94c59 jne 0x10d94c74 */
  if (!C.zf) goto L_10d94c74;
  /* 10d94c5b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94c5f jne 0x10d94c74 */
  if (!C.zf) goto L_10d94c74;
  /* 10d94c61 mov ecx, dword ptr [0x10dbca84] */
  ECX = (r32((uint32_t)(0x10dbca84)));
  /* 10d94c67 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10d94c6a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d94c6c je 0x10d94cab */
  if (C.zf) goto L_10d94cab;
  /* 10d94c6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94c72 je 0x10d94cab */
  if (C.zf) goto L_10d94cab;
L_10d94c74:;
  /* 10d94c74 push 0x10db9acc */
  push32((uint32_t)(0x10db9accu));
  /* 10d94c79 push 0x10db9498 */
  push32((uint32_t)(0x10db9498u));
  /* 10d94c7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c86 call 0x10d91ee0 */
  push32(0x10d94c8bu); f_10d91ee0();
  /* 10d94c8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94c8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94c91 jne 0x10d94c94 */
  if (!C.zf) goto L_10d94c94;
  /* 10d94c93 int3  */
  x86_unimpl("int3 @ 0x10d94c93");
L_10d94c94:;
  /* 10d94c94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d94c96 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d94c98 jne 0x10d94c74 */
  if (!C.zf) goto L_10d94c74;
  /* 10d94c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94c9c call 0x10d94860 */
  push32(0x10d94ca1u); f_10d94860();
  /* 10d94ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94ca4 mov eax, 1 */
  EAX = (0x1u);
  /* 10d94ca9 jmp 0x10d94cad */
  goto L_10d94cad;
L_10d94cab:;
  /* 10d94cab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d94cad:;
  /* 10d94cad pop edi */
  EDI = (pop32());
  /* 10d94cae pop esi */
  ESI = (pop32());
  /* 10d94caf pop ebx */
  EBX = (pop32());
  /* 10d94cb0 mov esp, ebp */
  ESP = (EBP);
  /* 10d94cb2 pop ebp */
  EBP = (pop32());
  /* 10d94cb3 ret  */
  ESPCHK(0x10d94c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x10d94cc0 (197 bytes, 79 insns) */
void f_10d94cc0(void) {
  FTRACE(0x10d94cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d94cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94cc4 push ebx */
  push32((uint32_t)(EBX));
  /* 10d94cc5 push esi */
  push32((uint32_t)(ESI));
  /* 10d94cc6 push edi */
  push32((uint32_t)(EDI));
  /* 10d94cc7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94ccb jne 0x10d94cd2 */
  if (!C.zf) goto L_10d94cd2;
  /* 10d94ccd jmp 0x10d94d7e */
  goto L_10d94d7e;
L_10d94cd2:;
  /* 10d94cd2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d94cd9 jmp 0x10d94ce4 */
  goto L_10d94ce4;
L_10d94cdb:;
  /* 10d94cdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94cde add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94ce1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d94ce4:;
  /* 10d94ce4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94ce8 jge 0x10d94d2e */
  if ((C.sf==C.of)) goto L_10d94d2e;
L_10d94cea:;
  /* 10d94cea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94ced mov edx, dword ptr [ecx*4 + 0x10dbca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbca94)));
  /* 10d94cf4 push edx */
  push32((uint32_t)(EDX));
  /* 10d94cf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94cf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94cfb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10d94cff push edx */
  push32((uint32_t)(EDX));
  /* 10d94d00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94d03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94d06 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10d94d0a push edx */
  push32((uint32_t)(EDX));
  /* 10d94d0b push 0x10db9b28 */
  push32((uint32_t)(0x10db9b28u));
  /* 10d94d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d18 call 0x10d91ee0 */
  push32(0x10d94d1du); f_10d91ee0();
  /* 10d94d1d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94d20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94d23 jne 0x10d94d26 */
  if (!C.zf) goto L_10d94d26;
  /* 10d94d25 int3  */
  x86_unimpl("int3 @ 0x10d94d25");
L_10d94d26:;
  /* 10d94d26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d94d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94d2a jne 0x10d94cea */
  if (!C.zf) goto L_10d94cea;
  /* 10d94d2c jmp 0x10d94cdb */
  goto L_10d94cdb;
L_10d94d2e:;
  /* 10d94d2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94d31 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10d94d34 push edx */
  push32((uint32_t)(EDX));
  /* 10d94d35 push 0x10db9b04 */
  push32((uint32_t)(0x10db9b04u));
  /* 10d94d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d42 call 0x10d91ee0 */
  push32(0x10d94d47u); f_10d91ee0();
  /* 10d94d47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94d4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94d4d jne 0x10d94d50 */
  if (!C.zf) goto L_10d94d50;
  /* 10d94d4f int3  */
  x86_unimpl("int3 @ 0x10d94d4f");
L_10d94d50:;
  /* 10d94d50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d94d52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94d54 jne 0x10d94d2e */
  if (!C.zf) goto L_10d94d2e;
L_10d94d56:;
  /* 10d94d56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94d59 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10d94d5c push edx */
  push32((uint32_t)(EDX));
  /* 10d94d5d push 0x10db9ae4 */
  push32((uint32_t)(0x10db9ae4u));
  /* 10d94d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94d6a call 0x10d91ee0 */
  push32(0x10d94d6fu); f_10d91ee0();
  /* 10d94d6f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94d72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94d75 jne 0x10d94d78 */
  if (!C.zf) goto L_10d94d78;
  /* 10d94d77 int3  */
  x86_unimpl("int3 @ 0x10d94d77");
L_10d94d78:;
  /* 10d94d78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d94d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94d7c jne 0x10d94d56 */
  if (!C.zf) goto L_10d94d56;
L_10d94d7e:;
  /* 10d94d7e pop edi */
  EDI = (pop32());
  /* 10d94d7f pop esi */
  ESI = (pop32());
  /* 10d94d80 pop ebx */
  EBX = (pop32());
  /* 10d94d81 mov esp, ebp */
  ESP = (EBP);
  /* 10d94d83 pop ebp */
  EBP = (pop32());
  /* 10d94d84 ret  */
  ESPCHK(0x10d94cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d90 @ 0x10d94d90 (329 bytes, 102 insns) */
void f_10d94d90(void) {
  FTRACE(0x10d94d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94d91 mov ebp, esp */
  EBP = (ESP);
  /* 10d94d93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94d96 cmp dword ptr [0x10dbffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94d9d jne 0x10d94da4 */
  if (!C.zf) goto L_10d94da4;
  /* 10d94d9f call 0x10d996d0 */
  push32(0x10d94da4u); f_10d996d0();
L_10d94da4:;
  /* 10d94da4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d94dab mov eax, dword ptr [0x10dbe478] */
  EAX = (r32((uint32_t)(0x10dbe478)));
  /* 10d94db0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d94db3:;
  /* 10d94db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94db6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d94db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d94dbb je 0x10d94de9 */
  if (C.zf) goto L_10d94de9;
  /* 10d94dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94dc0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d94dc3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94dc6 je 0x10d94dd1 */
  if (C.zf) goto L_10d94dd1;
  /* 10d94dc8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94dcb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94dce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d94dd1:;
  /* 10d94dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94dd4 push eax */
  push32((uint32_t)(EAX));
  /* 10d94dd5 call 0x10d95c50 */
  push32(0x10d94ddau); f_10d95c50();
  /* 10d94dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94ddd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94de0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d94de4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d94de7 jmp 0x10d94db3 */
  goto L_10d94db3;
L_10d94de9:;
  /* 10d94de9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10d94deb push 0x10db9b48 */
  push32((uint32_t)(0x10db9b48u));
  /* 10d94df0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d94df2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94df5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10d94dfc push ecx */
  push32((uint32_t)(ECX));
  /* 10d94dfd call 0x10d92e20 */
  push32(0x10d94e02u); f_10d92e20();
  /* 10d94e02 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94e05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d94e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94e0b mov dword ptr [0x10dbe4ac], edx */
  w32((uint32_t)(0x10dbe4ac), (EDX));
  /* 10d94e11 cmp dword ptr [0x10dbe4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94e18 jne 0x10d94e24 */
  if (!C.zf) goto L_10d94e24;
  /* 10d94e1a push 9 */
  push32((uint32_t)(0x9u));
  /* 10d94e1c call 0x10d91d90 */
  push32(0x10d94e21u); f_10d91d90();
  /* 10d94e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d94e24:;
  /* 10d94e24 mov eax, dword ptr [0x10dbe478] */
  EAX = (r32((uint32_t)(0x10dbe478)));
  /* 10d94e29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d94e2c jmp 0x10d94e37 */
  goto L_10d94e37;
L_10d94e2e:;
  /* 10d94e2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94e31 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94e34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d94e37:;
  /* 10d94e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94e3a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d94e3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d94e3f je 0x10d94ea7 */
  if (C.zf) goto L_10d94ea7;
  /* 10d94e41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94e44 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94e45 call 0x10d95c50 */
  push32(0x10d94e4au); f_10d95c50();
  /* 10d94e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94e4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94e50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d94e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94e56 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d94e59 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94e5c je 0x10d94ea5 */
  if (C.zf) goto L_10d94ea5;
  /* 10d94e5e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10d94e60 push 0x10db9b48 */
  push32((uint32_t)(0x10db9b48u));
  /* 10d94e65 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d94e67 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d94e6a push ecx */
  push32((uint32_t)(ECX));
  /* 10d94e6b call 0x10d92e20 */
  push32(0x10d94e70u); f_10d92e20();
  /* 10d94e70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94e73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94e76 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d94e78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94e7b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94e7e jne 0x10d94e8a */
  if (!C.zf) goto L_10d94e8a;
  /* 10d94e80 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d94e82 call 0x10d91d90 */
  push32(0x10d94e87u); f_10d91d90();
  /* 10d94e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d94e8a:;
  /* 10d94e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94e8d push ecx */
  push32((uint32_t)(ECX));
  /* 10d94e8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94e91 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d94e93 push eax */
  push32((uint32_t)(EAX));
  /* 10d94e94 call 0x10d95dd0 */
  push32(0x10d94e99u); f_10d95dd0();
  /* 10d94e99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94e9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94e9f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94ea2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d94ea5:;
  /* 10d94ea5 jmp 0x10d94e2e */
  goto L_10d94e2e;
L_10d94ea7:;
  /* 10d94ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d94ea9 mov edx, dword ptr [0x10dbe478] */
  EDX = (r32((uint32_t)(0x10dbe478)));
  /* 10d94eaf push edx */
  push32((uint32_t)(EDX));
  /* 10d94eb0 call 0x10d938b0 */
  push32(0x10d94eb5u); f_10d938b0();
  /* 10d94eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94eb8 mov dword ptr [0x10dbe478], 0 */
  w32((uint32_t)(0x10dbe478), (0x0u));
  /* 10d94ec2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94ec5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d94ecb mov dword ptr [0x10dbffa0], 1 */
  w32((uint32_t)(0x10dbffa0), (0x1u));
  /* 10d94ed5 mov esp, ebp */
  ESP = (EBP);
  /* 10d94ed7 pop ebp */
  EBP = (pop32());
  /* 10d94ed8 ret  */
  ESPCHK(0x10d94d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ee0 @ 0x10d94ee0 (216 bytes, 69 insns) */
void f_10d94ee0(void) {
  FTRACE(0x10d94ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10d94ee3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94ee6 cmp dword ptr [0x10dbffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94eed jne 0x10d94ef4 */
  if (!C.zf) goto L_10d94ef4;
  /* 10d94eef call 0x10d996d0 */
  push32(0x10d94ef4u); f_10d996d0();
L_10d94ef4:;
  /* 10d94ef4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d94ef9 push 0x10dbe4e8 */
  push32((uint32_t)(0x10dbe4e8u));
  /* 10d94efe push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94f00 call dword ptr [0x10dc02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a8))), 0x10d94f06u);
  /* 10d94f06 mov dword ptr [0x10dbe4bc], 0x10dbe4e8 */
  w32((uint32_t)(0x10dbe4bc), (0x10dbe4e8u));
  /* 10d94f10 mov eax, dword ptr [0x10dbffcc] */
  EAX = (r32((uint32_t)(0x10dbffcc)));
  /* 10d94f15 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d94f18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d94f1a jne 0x10d94f27 */
  if (!C.zf) goto L_10d94f27;
  /* 10d94f1c mov edx, dword ptr [0x10dbe4bc] */
  EDX = (r32((uint32_t)(0x10dbe4bc)));
  /* 10d94f22 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d94f25 jmp 0x10d94f2f */
  goto L_10d94f2f;
L_10d94f27:;
  /* 10d94f27 mov eax, dword ptr [0x10dbffcc] */
  EAX = (r32((uint32_t)(0x10dbffcc)));
  /* 10d94f2c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10d94f2f:;
  /* 10d94f2f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d94f32 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d94f35 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10d94f38 push edx */
  push32((uint32_t)(EDX));
  /* 10d94f39 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d94f3c push eax */
  push32((uint32_t)(EAX));
  /* 10d94f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94f3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d94f41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d94f44 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94f45 call 0x10d94fc0 */
  push32(0x10d94f4au); f_10d94fc0();
  /* 10d94f4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94f4d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10d94f52 push 0x10db9b54 */
  push32((uint32_t)(0x10db9b54u));
  /* 10d94f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d94f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94f5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94f5f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10d94f62 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94f63 call 0x10d92e20 */
  push32(0x10d94f68u); f_10d92e20();
  /* 10d94f68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94f6b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d94f6e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94f72 jne 0x10d94f7e */
  if (!C.zf) goto L_10d94f7e;
  /* 10d94f74 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d94f76 call 0x10d91d90 */
  push32(0x10d94f7bu); f_10d91d90();
  /* 10d94f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d94f7e:;
  /* 10d94f7e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10d94f81 push edx */
  push32((uint32_t)(EDX));
  /* 10d94f82 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d94f85 push eax */
  push32((uint32_t)(EAX));
  /* 10d94f86 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94f89 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94f8c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10d94f8f push eax */
  push32((uint32_t)(EAX));
  /* 10d94f90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d94f94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d94f97 push edx */
  push32((uint32_t)(EDX));
  /* 10d94f98 call 0x10d94fc0 */
  push32(0x10d94f9du); f_10d94fc0();
  /* 10d94f9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94fa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d94fa3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94fa6 mov dword ptr [0x10dbe4a0], eax */
  w32((uint32_t)(0x10dbe4a0), (EAX));
  /* 10d94fab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d94fae mov dword ptr [0x10dbe4a4], ecx */
  w32((uint32_t)(0x10dbe4a4), (ECX));
  /* 10d94fb4 mov esp, ebp */
  ESP = (EBP);
  /* 10d94fb6 pop ebp */
  EBP = (pop32());
  /* 10d94fb7 ret  */
  ESPCHK(0x10d94ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x10d94fc0 (1060 bytes, 360 insns) */
void f_10d94fc0(void) {
  FTRACE(0x10d94fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d94fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d94fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10d94fc3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d94fc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d94fc9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d94fcf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d94fd2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10d94fd8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d94fdb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d94fde cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94fe2 je 0x10d94ff5 */
  if (C.zf) goto L_10d94ff5;
  /* 10d94fe4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d94fe7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d94fea mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d94fec mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d94fef add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d94ff2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10d94ff5:;
  /* 10d94ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d94ff8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d94ffb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d94ffe jne 0x10d950cd */
  if (!C.zf) goto L_10d950cd;
L_10d95004:;
  /* 10d95004 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95007 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9500a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9500d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95010 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d95013 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95016 je 0x10d95092 */
  if (C.zf) goto L_10d95092;
  /* 10d95018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9501b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d9501e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d95020 je 0x10d95092 */
  if (C.zf) goto L_10d95092;
  /* 10d95022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95025 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d95027 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d95029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9502b mov al, byte ptr [edx + 0x10dbfd01] */
  AL = (r8((uint32_t)(EDX + 0x10dbfd01)));
  /* 10d95031 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d95034 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d95036 je 0x10d95067 */
  if (C.zf) goto L_10d95067;
  /* 10d95038 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9503b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9503d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95040 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d95043 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d95045 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95049 je 0x10d95067 */
  if (C.zf) goto L_10d95067;
  /* 10d9504b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9504e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95051 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d95053 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d95055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95058 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9505b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d9505e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95061 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95064 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d95067:;
  /* 10d95067 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9506a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9506c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9506f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d95072 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d95074 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95078 je 0x10d9508d */
  if (C.zf) goto L_10d9508d;
  /* 10d9507a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9507d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95080 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d95082 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d95084 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95087 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9508a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d9508d:;
  /* 10d9508d jmp 0x10d95004 */
  goto L_10d95004;
L_10d95092:;
  /* 10d95092 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d95095 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d95097 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9509a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9509d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d9509f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d950a3 je 0x10d950b4 */
  if (C.zf) goto L_10d950b4;
  /* 10d950a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d950a8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d950ab mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d950ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d950b1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10d950b4:;
  /* 10d950b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d950b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d950ba cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d950bd jne 0x10d950c8 */
  if (!C.zf) goto L_10d950c8;
  /* 10d950bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d950c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d950c5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d950c8:;
  /* 10d950c8 jmp 0x10d9519c */
  goto L_10d9519c;
L_10d950cd:;
  /* 10d950cd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d950d0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d950d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d950d5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d950d8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d950da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d950de je 0x10d950f3 */
  if (C.zf) goto L_10d950f3;
  /* 10d950e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d950e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d950e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d950e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d950ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d950ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d950f0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d950f3:;
  /* 10d950f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d950f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d950f8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10d950fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d950fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95101 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d95104 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95107 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9510d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9510f mov dl, byte ptr [ecx + 0x10dbfd01] */
  DL = (r8((uint32_t)(ECX + 0x10dbfd01)));
  /* 10d95115 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d95118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d9511a je 0x10d9514b */
  if (C.zf) goto L_10d9514b;
  /* 10d9511c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9511f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d95121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95124 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d95127 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d95129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9512d je 0x10d95142 */
  if (C.zf) goto L_10d95142;
  /* 10d9512f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95135 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d95137 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d95139 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9513c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9513f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d95142:;
  /* 10d95142 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95145 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95148 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d9514b:;
  /* 10d9514b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9514e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d95154 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95157 je 0x10d95177 */
  if (C.zf) goto L_10d95177;
  /* 10d95159 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9515c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d95161 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d95163 je 0x10d95177 */
  if (C.zf) goto L_10d95177;
  /* 10d95165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95168 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d9516e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95171 jne 0x10d950cd */
  if (!C.zf) goto L_10d950cd;
L_10d95177:;
  /* 10d95177 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9517a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d95180 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d95182 jne 0x10d9518f */
  if (!C.zf) goto L_10d9518f;
  /* 10d95184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95187 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9518a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9518d jmp 0x10d9519c */
  goto L_10d9519c;
L_10d9518f:;
  /* 10d9518f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95193 je 0x10d9519c */
  if (C.zf) goto L_10d9519c;
  /* 10d95195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95198 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10d9519c:;
  /* 10d9519c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10d951a3:;
  /* 10d951a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d951a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d951a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d951ab je 0x10d951ce */
  if (C.zf) goto L_10d951ce;
L_10d951ad:;
  /* 10d951ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d951b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d951b3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d951b6 je 0x10d951c3 */
  if (C.zf) goto L_10d951c3;
  /* 10d951b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d951bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d951be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d951c1 jne 0x10d951ce */
  if (!C.zf) goto L_10d951ce;
L_10d951c3:;
  /* 10d951c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d951c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d951c9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d951cc jmp 0x10d951ad */
  goto L_10d951ad;
L_10d951ce:;
  /* 10d951ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d951d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d951d4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d951d6 jne 0x10d951dd */
  if (!C.zf) goto L_10d951dd;
  /* 10d951d8 jmp 0x10d953bb */
  goto L_10d953bb;
L_10d951dd:;
  /* 10d951dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d951e1 je 0x10d951f4 */
  if (C.zf) goto L_10d951f4;
  /* 10d951e3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d951e6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d951e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d951eb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d951ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d951f1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d951f4:;
  /* 10d951f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d951f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d951f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d951fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d951ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10d95201:;
  /* 10d95201 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d95208 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d9520f:;
  /* 10d9520f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95212 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d95215 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95218 jne 0x10d9522e */
  if (!C.zf) goto L_10d9522e;
  /* 10d9521a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9521d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95220 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d95223 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d95226 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95229 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d9522c jmp 0x10d9520f */
  goto L_10d9520f;
L_10d9522e:;
  /* 10d9522e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95231 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d95234 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95237 jne 0x10d9528a */
  if (!C.zf) goto L_10d9528a;
  /* 10d95239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9523c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9523e mov ecx, 2 */
  ECX = (0x2u);
  /* 10d95243 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d95245 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d95247 jne 0x10d95282 */
  if (!C.zf) goto L_10d95282;
  /* 10d95249 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9524d je 0x10d9526f */
  if (C.zf) goto L_10d9526f;
  /* 10d9524f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95252 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d95256 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95259 jne 0x10d95266 */
  if (!C.zf) goto L_10d95266;
  /* 10d9525b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9525e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d95264 jmp 0x10d9526d */
  goto L_10d9526d;
L_10d95266:;
  /* 10d95266 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d9526d:;
  /* 10d9526d jmp 0x10d95276 */
  goto L_10d95276;
L_10d9526f:;
  /* 10d9526f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d95276:;
  /* 10d95276 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d95278 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9527c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10d9527f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d95282:;
  /* 10d95282 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d95285 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d95287 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d9528a:;
  /* 10d9528a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9528d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d95290 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95293 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d95296 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d95298 je 0x10d952be */
  if (C.zf) goto L_10d952be;
  /* 10d9529a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9529e je 0x10d952af */
  if (C.zf) goto L_10d952af;
  /* 10d952a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d952a3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10d952a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d952a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d952ac mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10d952af:;
  /* 10d952af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d952b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d952b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d952b7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d952ba mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d952bc jmp 0x10d9528a */
  goto L_10d9528a;
L_10d952be:;
  /* 10d952be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d952c1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d952c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d952c6 je 0x10d952e4 */
  if (C.zf) goto L_10d952e4;
  /* 10d952c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d952cc jne 0x10d952e9 */
  if (!C.zf) goto L_10d952e9;
  /* 10d952ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d952d1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d952d4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d952d7 je 0x10d952e4 */
  if (C.zf) goto L_10d952e4;
  /* 10d952d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d952dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d952df cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d952e2 jne 0x10d952e9 */
  if (!C.zf) goto L_10d952e9;
L_10d952e4:;
  /* 10d952e4 jmp 0x10d95394 */
  goto L_10d95394;
L_10d952e9:;
  /* 10d952e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d952ed je 0x10d95386 */
  if (C.zf) goto L_10d95386;
  /* 10d952f3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d952f7 je 0x10d9534d */
  if (C.zf) goto L_10d9534d;
  /* 10d952f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d952fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d952fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d95300 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d95302 mov cl, byte ptr [eax + 0x10dbfd01] */
  CL = (r8((uint32_t)(EAX + 0x10dbfd01)));
  /* 10d95308 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9530b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d9530d je 0x10d95338 */
  if (C.zf) goto L_10d95338;
  /* 10d9530f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95312 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95315 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d95317 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d95319 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9531c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9531f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10d95322 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95325 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95328 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9532b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9532e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d95330 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95333 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d95336 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d95338:;
  /* 10d95338 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9533b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9533e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d95340 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d95342 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95345 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95348 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d9534b jmp 0x10d95379 */
  goto L_10d95379;
L_10d9534d:;
  /* 10d9534d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95352 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d95354 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d95356 mov cl, byte ptr [eax + 0x10dbfd01] */
  CL = (r8((uint32_t)(EAX + 0x10dbfd01)));
  /* 10d9535c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d9535f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d95361 je 0x10d95379 */
  if (C.zf) goto L_10d95379;
  /* 10d95363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95366 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95369 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d9536c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9536f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d95371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95374 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d95377 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d95379:;
  /* 10d95379 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d9537c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d9537e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95381 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d95384 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d95386:;
  /* 10d95386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95389 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9538c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9538f jmp 0x10d95201 */
  goto L_10d95201;
L_10d95394:;
  /* 10d95394 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95398 je 0x10d953a9 */
  if (C.zf) goto L_10d953a9;
  /* 10d9539a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9539d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d953a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d953a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d953a6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10d953a9:;
  /* 10d953a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d953ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d953ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d953b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d953b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d953b6 jmp 0x10d951a3 */
  goto L_10d951a3;
L_10d953bb:;
  /* 10d953bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d953bf je 0x10d953d3 */
  if (C.zf) goto L_10d953d3;
  /* 10d953c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d953c4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d953ca mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d953cd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d953d0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d953d3:;
  /* 10d953d3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d953d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d953d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d953db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d953de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d953e0 mov esp, ebp */
  ESP = (EBP);
  /* 10d953e2 pop ebp */
  EBP = (pop32());
  /* 10d953e3 ret  */
  ESPCHK(0x10d94fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x10d953f0 (537 bytes, 173 insns) */
void f_10d953f0(void) {
  FTRACE(0x10d953f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d953f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d953f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d953f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d953f6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d953fd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10d95404 cmp dword ptr [0x10dbe5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9540b jne 0x10d9544a */
  if (!C.zf) goto L_10d9544a;
  /* 10d9540d call dword ptr [0x10dc0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0304))), 0x10d95413u);
  /* 10d95413 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d95416 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9541a je 0x10d95428 */
  if (C.zf) goto L_10d95428;
  /* 10d9541c mov dword ptr [0x10dbe5ec], 1 */
  w32((uint32_t)(0x10dbe5ec), (0x1u));
  /* 10d95426 jmp 0x10d9544a */
  goto L_10d9544a;
L_10d95428:;
  /* 10d95428 call dword ptr [0x10dc0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0300))), 0x10d9542eu);
  /* 10d9542e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d95431 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95435 je 0x10d95443 */
  if (C.zf) goto L_10d95443;
  /* 10d95437 mov dword ptr [0x10dbe5ec], 2 */
  w32((uint32_t)(0x10dbe5ec), (0x2u));
  /* 10d95441 jmp 0x10d9544a */
  goto L_10d9544a;
L_10d95443:;
  /* 10d95443 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95445 jmp 0x10d95605 */
  goto L_10d95605;
L_10d9544a:;
  /* 10d9544a cmp dword ptr [0x10dbe5ec], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe5ec))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95451 jne 0x10d9554e */
  if (!C.zf) goto L_10d9554e;
  /* 10d95457 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9545b jne 0x10d95473 */
  if (!C.zf) goto L_10d95473;
  /* 10d9545d call dword ptr [0x10dc0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0304))), 0x10d95463u);
  /* 10d95463 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d95466 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9546a jne 0x10d95473 */
  if (!C.zf) goto L_10d95473;
  /* 10d9546c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9546e jmp 0x10d95605 */
  goto L_10d95605;
L_10d95473:;
  /* 10d95473 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d95476 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d95479:;
  /* 10d95479 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9547c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9547e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d95481 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d95483 je 0x10d954a5 */
  if (C.zf) goto L_10d954a5;
  /* 10d95485 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95488 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9548b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9548e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95491 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d95493 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d95496 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d95498 jne 0x10d954a3 */
  if (!C.zf) goto L_10d954a3;
  /* 10d9549a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9549d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d954a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d954a3:;
  /* 10d954a3 jmp 0x10d95479 */
  goto L_10d95479;
L_10d954a5:;
  /* 10d954a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d954a8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d954ab sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d954ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d954b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d954b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d954b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d954b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d954b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d954bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d954be push edx */
  push32((uint32_t)(EDX));
  /* 10d954bf mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d954c2 push eax */
  push32((uint32_t)(EAX));
  /* 10d954c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d954c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d954c7 call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10d954cdu);
  /* 10d954cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d954d0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d954d4 je 0x10d954f4 */
  if (C.zf) goto L_10d954f4;
  /* 10d954d6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d954d8 push 0x10db9b60 */
  push32((uint32_t)(0x10db9b60u));
  /* 10d954dd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d954df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d954e2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d954e3 call 0x10d92e20 */
  push32(0x10d954e8u); f_10d92e20();
  /* 10d954e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d954eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d954ee cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d954f2 jne 0x10d95505 */
  if (!C.zf) goto L_10d95505;
L_10d954f4:;
  /* 10d954f4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d954f7 push edx */
  push32((uint32_t)(EDX));
  /* 10d954f8 call dword ptr [0x10dc02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f8))), 0x10d954feu);
  /* 10d954fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95500 jmp 0x10d95605 */
  goto L_10d95605;
L_10d95505:;
  /* 10d95505 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95507 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95509 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9550c push eax */
  push32((uint32_t)(EAX));
  /* 10d9550d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d95510 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95511 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95514 push edx */
  push32((uint32_t)(EDX));
  /* 10d95515 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d95518 push eax */
  push32((uint32_t)(EAX));
  /* 10d95519 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9551b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d9551d call dword ptr [0x10dc02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02fc))), 0x10d95523u);
  /* 10d95523 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d95525 jne 0x10d9553c */
  if (!C.zf) goto L_10d9553c;
  /* 10d95527 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d95529 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9552c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9552d call 0x10d938b0 */
  push32(0x10d95532u); f_10d938b0();
  /* 10d95532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95535 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10d9553c:;
  /* 10d9553c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d9553f push edx */
  push32((uint32_t)(EDX));
  /* 10d95540 call dword ptr [0x10dc02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f8))), 0x10d95546u);
  /* 10d95546 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d95549 jmp 0x10d95605 */
  goto L_10d95605;
L_10d9554e:;
  /* 10d9554e cmp dword ptr [0x10dbe5ec], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe5ec))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95555 jne 0x10d95603 */
  if (!C.zf) goto L_10d95603;
  /* 10d9555b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9555f jne 0x10d95577 */
  if (!C.zf) goto L_10d95577;
  /* 10d95561 call dword ptr [0x10dc0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0300))), 0x10d95567u);
  /* 10d95567 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d9556a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9556e jne 0x10d95577 */
  if (!C.zf) goto L_10d95577;
  /* 10d95570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95572 jmp 0x10d95605 */
  goto L_10d95605;
L_10d95577:;
  /* 10d95577 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9557a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d9557d:;
  /* 10d9557d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95580 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d95583 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d95585 je 0x10d955a5 */
  if (C.zf) goto L_10d955a5;
  /* 10d95587 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9558a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9558d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d95590 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95593 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d95596 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d95598 jne 0x10d955a3 */
  if (!C.zf) goto L_10d955a3;
  /* 10d9559a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9559d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d955a0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d955a3:;
  /* 10d955a3 jmp 0x10d9557d */
  goto L_10d9557d;
L_10d955a5:;
  /* 10d955a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d955a8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d955ab add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d955ae mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d955b1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10d955b6 push 0x10db9b60 */
  push32((uint32_t)(0x10db9b60u));
  /* 10d955bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d955bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d955c0 push edx */
  push32((uint32_t)(EDX));
  /* 10d955c1 call 0x10d92e20 */
  push32(0x10d955c6u); f_10d92e20();
  /* 10d955c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d955c9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d955cc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d955d0 jne 0x10d955e0 */
  if (!C.zf) goto L_10d955e0;
  /* 10d955d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d955d5 push eax */
  push32((uint32_t)(EAX));
  /* 10d955d6 call dword ptr [0x10dc02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f4))), 0x10d955dcu);
  /* 10d955dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d955de jmp 0x10d95605 */
  goto L_10d95605;
L_10d955e0:;
  /* 10d955e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d955e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d955e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d955e7 push edx */
  push32((uint32_t)(EDX));
  /* 10d955e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d955eb push eax */
  push32((uint32_t)(EAX));
  /* 10d955ec call 0x10d99700 */
  push32(0x10d955f1u); f_10d99700();
  /* 10d955f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d955f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d955f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d955f8 call dword ptr [0x10dc02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02f4))), 0x10d955feu);
  /* 10d955fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95601 jmp 0x10d95605 */
  goto L_10d95605;
L_10d95603:;
  /* 10d95603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d95605:;
  /* 10d95605 mov esp, ebp */
  ESP = (EBP);
  /* 10d95607 pop ebp */
  EBP = (pop32());
  /* 10d95608 ret  */
  ESPCHK(0x10d953f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x10d95610 (77 bytes, 25 insns) */
void f_10d95610(void) {
  FTRACE(0x10d95610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95610 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95611 mov ebp, esp */
  EBP = (ESP);
  /* 10d95613 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95615 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d9561a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9561c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95620 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10d95623 push eax */
  push32((uint32_t)(EAX));
  /* 10d95624 call dword ptr [0x10dc030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc030c))), 0x10d9562au);
  /* 10d9562a mov dword ptr [0x10dbfe2c], eax */
  w32((uint32_t)(0x10dbfe2c), (EAX));
  /* 10d9562f cmp dword ptr [0x10dbfe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbfe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95636 jne 0x10d9563c */
  if (!C.zf) goto L_10d9563c;
  /* 10d95638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d9563a jmp 0x10d9565b */
  goto L_10d9565b;
L_10d9563c:;
  /* 10d9563c call 0x10d970c0 */
  push32(0x10d95641u); f_10d970c0();
  /* 10d95641 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d95643 jne 0x10d95656 */
  if (!C.zf) goto L_10d95656;
  /* 10d95645 mov ecx, dword ptr [0x10dbfe2c] */
  ECX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d9564b push ecx */
  push32((uint32_t)(ECX));
  /* 10d9564c call dword ptr [0x10dc0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0308))), 0x10d95652u);
  /* 10d95652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95654 jmp 0x10d9565b */
  goto L_10d9565b;
L_10d95656:;
  /* 10d95656 mov eax, 1 */
  EAX = (0x1u);
L_10d9565b:;
  /* 10d9565b pop ebp */
  EBP = (pop32());
  /* 10d9565c ret  */
  ESPCHK(0x10d95610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005660 @ 0x10d95660 (156 bytes, 48 insns) */
void f_10d95660(void) {
  FTRACE(0x10d95660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95660 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95661 mov ebp, esp */
  EBP = (ESP);
  /* 10d95663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95666 mov eax, dword ptr [0x10dbfe28] */
  EAX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d9566b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9566e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d95675 jmp 0x10d95680 */
  goto L_10d95680;
L_10d95677:;
  /* 10d95677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9567a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9567d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d95680:;
  /* 10d95680 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95683 cmp edx, dword ptr [0x10dbfe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbfe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95689 jge 0x10d956d6 */
  if ((C.sf==C.of)) goto L_10d956d6;
  /* 10d9568b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d95690 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10d95695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95698 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d9569b push ecx */
  push32((uint32_t)(ECX));
  /* 10d9569c call dword ptr [0x10dc0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0314))), 0x10d956a2u);
  /* 10d956a2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d956a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d956a9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d956ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d956af push eax */
  push32((uint32_t)(EAX));
  /* 10d956b0 call dword ptr [0x10dc0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0314))), 0x10d956b6u);
  /* 10d956b6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d956b9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d956bc push edx */
  push32((uint32_t)(EDX));
  /* 10d956bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d956bf mov eax, dword ptr [0x10dbfe2c] */
  EAX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d956c4 push eax */
  push32((uint32_t)(EAX));
  /* 10d956c5 call dword ptr [0x10dc0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0310))), 0x10d956cbu);
  /* 10d956cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d956ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d956d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d956d4 jmp 0x10d95677 */
  goto L_10d95677;
L_10d956d6:;
  /* 10d956d6 mov edx, dword ptr [0x10dbfe28] */
  EDX = (r32((uint32_t)(0x10dbfe28)));
  /* 10d956dc push edx */
  push32((uint32_t)(EDX));
  /* 10d956dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d956df mov eax, dword ptr [0x10dbfe2c] */
  EAX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d956e4 push eax */
  push32((uint32_t)(EAX));
  /* 10d956e5 call dword ptr [0x10dc0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0310))), 0x10d956ebu);
  /* 10d956eb mov ecx, dword ptr [0x10dbfe2c] */
  ECX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d956f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d956f2 call dword ptr [0x10dc0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0308))), 0x10d956f8u);
  /* 10d956f8 mov esp, ebp */
  ESP = (EBP);
  /* 10d956fa pop ebp */
  EBP = (pop32());
  /* 10d956fb ret  */
  ESPCHK(0x10d95660u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10d95700 (73 bytes, 19 insns) */
void f_10d95700(void) {
  FTRACE(0x10d95700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95700 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95701 mov ebp, esp */
  EBP = (ESP);
  /* 10d95703 cmp dword ptr [0x10dbe480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9570a je 0x10d9571e */
  if (C.zf) goto L_10d9571e;
  /* 10d9570c cmp dword ptr [0x10dbe480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95713 jne 0x10d95747 */
  if (!C.zf) goto L_10d95747;
  /* 10d95715 cmp dword ptr [0x10dbe484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9571c jne 0x10d95747 */
  if (!C.zf) goto L_10d95747;
L_10d9571e:;
  /* 10d9571e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10d95723 call 0x10d95750 */
  push32(0x10d95728u); f_10d95750();
  /* 10d95728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9572b cmp dword ptr [0x10dbe5f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe5f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95732 je 0x10d9573a */
  if (C.zf) goto L_10d9573a;
  /* 10d95734 call dword ptr [0x10dbe5f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe5f0))), 0x10d9573au);
L_10d9573a:;
  /* 10d9573a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d9573f call 0x10d95750 */
  push32(0x10d95744u); f_10d95750();
  /* 10d95744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d95747:;
  /* 10d95747 pop ebp */
  EBP = (pop32());
  /* 10d95748 ret  */
  ESPCHK(0x10d95700u, _esp0);
  ESP += 4; return;
}

/* FUN_10005750 @ 0x10d95750 (447 bytes, 131 insns) */
void f_10d95750(void) {
  FTRACE(0x10d95750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95750 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95751 mov ebp, esp */
  EBP = (ESP);
  /* 10d95753 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95759 push ebx */
  push32((uint32_t)(EBX));
  /* 10d9575a push esi */
  push32((uint32_t)(ESI));
  /* 10d9575b push edi */
  push32((uint32_t)(EDI));
  /* 10d9575c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d95763 jmp 0x10d9576e */
  goto L_10d9576e;
L_10d95765:;
  /* 10d95765 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9576b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d9576e:;
  /* 10d9576e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95772 jae 0x10d95787 */
  if (!C.cf) goto L_10d95787;
  /* 10d95774 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9577a cmp edx, dword ptr [ecx*8 + 0x10dbcab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10dbcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95781 jne 0x10d95785 */
  if (!C.zf) goto L_10d95785;
  /* 10d95783 jmp 0x10d95787 */
  goto L_10d95787;
L_10d95785:;
  /* 10d95785 jmp 0x10d95765 */
  goto L_10d95765;
L_10d95787:;
  /* 10d95787 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9578a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9578d cmp ecx, dword ptr [eax*8 + 0x10dbcab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10dbcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95794 jne 0x10d95908 */
  if (!C.zf) goto L_10d95908;
  /* 10d9579a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d957a1 je 0x10d957c4 */
  if (C.zf) goto L_10d957c4;
  /* 10d957a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d957a6 mov eax, dword ptr [edx*8 + 0x10dbcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10dbcab4)));
  /* 10d957ad push eax */
  push32((uint32_t)(EAX));
  /* 10d957ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10d957b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d957b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d957b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d957b6 call 0x10d91ee0 */
  push32(0x10d957bbu); f_10d91ee0();
  /* 10d957bb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d957be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d957c1 jne 0x10d957c4 */
  if (!C.zf) goto L_10d957c4;
  /* 10d957c3 int3  */
  x86_unimpl("int3 @ 0x10d957c3");
L_10d957c4:;
  /* 10d957c4 cmp dword ptr [0x10dbe480], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe480))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d957cb je 0x10d957df */
  if (C.zf) goto L_10d957df;
  /* 10d957cd cmp dword ptr [0x10dbe480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d957d4 jne 0x10d95818 */
  if (!C.zf) goto L_10d95818;
  /* 10d957d6 cmp dword ptr [0x10dbe484], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe484))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d957dd jne 0x10d95818 */
  if (!C.zf) goto L_10d95818;
L_10d957df:;
  /* 10d957df push 0 */
  push32((uint32_t)(0x0u));
  /* 10d957e1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10d957e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d957e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d957e8 mov eax, dword ptr [edx*8 + 0x10dbcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10dbcab4)));
  /* 10d957ef push eax */
  push32((uint32_t)(EAX));
  /* 10d957f0 call 0x10d95c50 */
  push32(0x10d957f5u); f_10d95c50();
  /* 10d957f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d957f8 push eax */
  push32((uint32_t)(EAX));
  /* 10d957f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d957fc mov edx, dword ptr [ecx*8 + 0x10dbcab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10dbcab4)));
  /* 10d95803 push edx */
  push32((uint32_t)(EDX));
  /* 10d95804 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d95806 call dword ptr [0x10dc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc028c))), 0x10d9580cu);
  /* 10d9580c push eax */
  push32((uint32_t)(EAX));
  /* 10d9580d call dword ptr [0x10dc0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0290))), 0x10d95813u);
  /* 10d95813 jmp 0x10d95908 */
  goto L_10d95908;
L_10d95818:;
  /* 10d95818 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9581f je 0x10d95908 */
  if (C.zf) goto L_10d95908;
  /* 10d95825 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d9582a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10d95830 push eax */
  push32((uint32_t)(EAX));
  /* 10d95831 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95833 call dword ptr [0x10dc02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a8))), 0x10d95839u);
  /* 10d95839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d9583b jne 0x10d95851 */
  if (!C.zf) goto L_10d95851;
  /* 10d9583d push 0x10db93c8 */
  push32((uint32_t)(0x10db93c8u));
  /* 10d95842 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10d95848 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95849 call 0x10d95dd0 */
  push32(0x10d9584eu); f_10d95dd0();
  /* 10d9584e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d95851:;
  /* 10d95851 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10d95857 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d9585a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9585d push eax */
  push32((uint32_t)(EAX));
  /* 10d9585e call 0x10d95c50 */
  push32(0x10d95863u); f_10d95c50();
  /* 10d95863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95866 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95869 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9586c jbe 0x10d9589a */
  if ((C.cf||C.zf)) goto L_10d9589a;
  /* 10d9586e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10d95874 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95875 call 0x10d95c50 */
  push32(0x10d9587au); f_10d95c50();
  /* 10d9587a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9587d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95880 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10d95884 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d95887 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d95889 push 0x10db93c4 */
  push32((uint32_t)(0x10db93c4u));
  /* 10d9588e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95891 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95892 call 0x10d96640 */
  push32(0x10d95897u); f_10d96640();
  /* 10d95897 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9589a:;
  /* 10d9589a push 0x10db9e1c */
  push32((uint32_t)(0x10db9e1cu));
  /* 10d9589f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d958a5 push edx */
  push32((uint32_t)(EDX));
  /* 10d958a6 call 0x10d95dd0 */
  push32(0x10d958abu); f_10d95dd0();
  /* 10d958ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d958ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d958b1 push eax */
  push32((uint32_t)(EAX));
  /* 10d958b2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10d958b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d958b9 call 0x10d95de0 */
  push32(0x10d958beu); f_10d95de0();
  /* 10d958be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d958c1 push 0x10db933c */
  push32((uint32_t)(0x10db933cu));
  /* 10d958c6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d958cc push edx */
  push32((uint32_t)(EDX));
  /* 10d958cd call 0x10d95de0 */
  push32(0x10d958d2u); f_10d95de0();
  /* 10d958d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d958d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d958d8 mov ecx, dword ptr [eax*8 + 0x10dbcab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10dbcab4)));
  /* 10d958df push ecx */
  push32((uint32_t)(ECX));
  /* 10d958e0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d958e6 push edx */
  push32((uint32_t)(EDX));
  /* 10d958e7 call 0x10d95de0 */
  push32(0x10d958ecu); f_10d95de0();
  /* 10d958ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d958ef push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10d958f4 push 0x10db9df4 */
  push32((uint32_t)(0x10db9df4u));
  /* 10d958f9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10d958ff push eax */
  push32((uint32_t)(EAX));
  /* 10d95900 call 0x10d96580 */
  push32(0x10d95905u); f_10d96580();
  /* 10d95905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d95908:;
  /* 10d95908 pop edi */
  EDI = (pop32());
  /* 10d95909 pop esi */
  ESI = (pop32());
  /* 10d9590a pop ebx */
  EBX = (pop32());
  /* 10d9590b mov esp, ebp */
  ESP = (EBP);
  /* 10d9590d pop ebp */
  EBP = (pop32());
  /* 10d9590e ret  */
  ESPCHK(0x10d95750u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10d95910 (80 bytes, 27 insns) */
void f_10d95910(void) {
  FTRACE(0x10d95910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95910 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95911 mov ebp, esp */
  EBP = (ESP);
  /* 10d95913 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95914 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9591b jmp 0x10d95926 */
  goto L_10d95926;
L_10d9591d:;
  /* 10d9591d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95920 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95923 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d95926:;
  /* 10d95926 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9592a jae 0x10d9593f */
  if (!C.cf) goto L_10d9593f;
  /* 10d9592c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9592f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95932 cmp edx, dword ptr [ecx*8 + 0x10dbcab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10dbcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95939 jne 0x10d9593d */
  if (!C.zf) goto L_10d9593d;
  /* 10d9593b jmp 0x10d9593f */
  goto L_10d9593f;
L_10d9593d:;
  /* 10d9593d jmp 0x10d9591d */
  goto L_10d9591d;
L_10d9593f:;
  /* 10d9593f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95945 cmp ecx, dword ptr [eax*8 + 0x10dbcab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10dbcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9594c jne 0x10d9595a */
  if (!C.zf) goto L_10d9595a;
  /* 10d9594e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95951 mov eax, dword ptr [edx*8 + 0x10dbcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10dbcab4)));
  /* 10d95958 jmp 0x10d9595c */
  goto L_10d9595c;
L_10d9595a:;
  /* 10d9595a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d9595c:;
  /* 10d9595c mov esp, ebp */
  ESP = (EBP);
  /* 10d9595e pop ebp */
  EBP = (pop32());
  /* 10d9595f ret  */
  ESPCHK(0x10d95910u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10d95960 (66 bytes, 28 insns) */
void f_10d95960(void) {
  FTRACE(0x10d95960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95960 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95961 mov ebp, esp */
  EBP = (ESP);
  /* 10d95963 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95967 jne 0x10d95987 */
  if (!C.zf) goto L_10d95987;
  /* 10d95969 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9596d jge 0x10d95987 */
  if ((C.sf==C.of)) goto L_10d95987;
  /* 10d9596f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d95971 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95974 push eax */
  push32((uint32_t)(EAX));
  /* 10d95975 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95978 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95979 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9597c push edx */
  push32((uint32_t)(EDX));
  /* 10d9597d call 0x10d959b0 */
  push32(0x10d95982u); f_10d959b0();
  /* 10d95982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95985 jmp 0x10d9599d */
  goto L_10d9599d;
L_10d95987:;
  /* 10d95987 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95989 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d9598c push eax */
  push32((uint32_t)(EAX));
  /* 10d9598d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95990 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95991 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95994 push edx */
  push32((uint32_t)(EDX));
  /* 10d95995 call 0x10d959b0 */
  push32(0x10d9599au); f_10d959b0();
  /* 10d9599a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9599d:;
  /* 10d9599d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d959a0 pop ebp */
  EBP = (pop32());
  /* 10d959a1 ret  */
  ESPCHK(0x10d95960u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10d959b0 (194 bytes, 71 insns) */
void f_10d959b0(void) {
  FTRACE(0x10d959b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d959b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d959b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d959b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d959b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d959b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d959bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d959c0 je 0x10d959d9 */
  if (C.zf) goto L_10d959d9;
  /* 10d959c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d959c5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10d959c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d959cb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d959ce mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d959d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d959d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d959d6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d959d9:;
  /* 10d959d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d959dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d959df:;
  /* 10d959df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d959e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d959e4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d959e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d959ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d959ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d959ef div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d959f2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d959f5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d959f9 jbe 0x10d95a11 */
  if ((C.cf||C.zf)) goto L_10d95a11;
  /* 10d959fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d959fe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95a01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a04 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d95a06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a09 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95a0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d95a0f jmp 0x10d95a25 */
  goto L_10d95a25;
L_10d95a11:;
  /* 10d95a11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95a14 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d95a1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95a22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d95a25:;
  /* 10d95a25 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95a29 ja 0x10d959df */
  if ((!C.cf&&!C.zf)) goto L_10d959df;
  /* 10d95a2b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a2e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d95a31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a34 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95a37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d95a3a:;
  /* 10d95a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d95a3f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10d95a42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95a48 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d95a4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d95a4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95a4f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10d95a52 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d95a54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95a57 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95a5a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d95a5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95a60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95a63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d95a66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95a69 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95a6c jb 0x10d95a3a */
  if (C.cf) goto L_10d95a3a;
  /* 10d95a6e mov esp, ebp */
  ESP = (EBP);
  /* 10d95a70 pop ebp */
  EBP = (pop32());
  /* 10d95a71 ret  */
  ESPCHK(0x10d959b0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10d95a80 (63 bytes, 24 insns) */
void f_10d95a80(void) {
  FTRACE(0x10d95a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95a81 mov ebp, esp */
  EBP = (ESP);
  /* 10d95a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95a84 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95a88 jne 0x10d95a99 */
  if (!C.zf) goto L_10d95a99;
  /* 10d95a8a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95a8e jge 0x10d95a99 */
  if ((C.sf==C.of)) goto L_10d95a99;
  /* 10d95a90 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d95a97 jmp 0x10d95aa0 */
  goto L_10d95aa0;
L_10d95a99:;
  /* 10d95a99 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d95aa0:;
  /* 10d95aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95aa3 push eax */
  push32((uint32_t)(EAX));
  /* 10d95aa4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95aa8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95aab push edx */
  push32((uint32_t)(EDX));
  /* 10d95aac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95aaf push eax */
  push32((uint32_t)(EAX));
  /* 10d95ab0 call 0x10d959b0 */
  push32(0x10d95ab5u); f_10d959b0();
  /* 10d95ab5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95ab8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95abb mov esp, ebp */
  ESP = (EBP);
  /* 10d95abd pop ebp */
  EBP = (pop32());
  /* 10d95abe ret  */
  ESPCHK(0x10d95a80u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10d95ac0 (30 bytes, 14 insns) */
void f_10d95ac0(void) {
  FTRACE(0x10d95ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10d95ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95ac5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95ac8 push eax */
  push32((uint32_t)(EAX));
  /* 10d95ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95acc push ecx */
  push32((uint32_t)(ECX));
  /* 10d95acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95ad0 push edx */
  push32((uint32_t)(EDX));
  /* 10d95ad1 call 0x10d959b0 */
  push32(0x10d95ad6u); f_10d959b0();
  /* 10d95ad6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95ad9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95adc pop ebp */
  EBP = (pop32());
  /* 10d95add ret  */
  ESPCHK(0x10d95ac0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10d95ae0 (72 bytes, 28 insns) */
void f_10d95ae0(void) {
  FTRACE(0x10d95ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10d95ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95ae4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95ae8 jne 0x10d95b01 */
  if (!C.zf) goto L_10d95b01;
  /* 10d95aea cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95aee jg 0x10d95b01 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d95b01;
  /* 10d95af0 jl 0x10d95af8 */
  if ((C.sf!=C.of)) goto L_10d95af8;
  /* 10d95af2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95af6 jae 0x10d95b01 */
  if (!C.cf) goto L_10d95b01;
L_10d95af8:;
  /* 10d95af8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d95aff jmp 0x10d95b08 */
  goto L_10d95b08;
L_10d95b01:;
  /* 10d95b01 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d95b08:;
  /* 10d95b08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95b0b push eax */
  push32((uint32_t)(EAX));
  /* 10d95b0c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d95b0f push ecx */
  push32((uint32_t)(ECX));
  /* 10d95b10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95b13 push edx */
  push32((uint32_t)(EDX));
  /* 10d95b14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95b17 push eax */
  push32((uint32_t)(EAX));
  /* 10d95b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95b1b push ecx */
  push32((uint32_t)(ECX));
  /* 10d95b1c call 0x10d95b30 */
  push32(0x10d95b21u); f_10d95b30();
  /* 10d95b21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95b24 mov esp, ebp */
  ESP = (EBP);
  /* 10d95b26 pop ebp */
  EBP = (pop32());
  /* 10d95b27 ret  */
  ESPCHK(0x10d95ae0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10d95b30 (242 bytes, 91 insns) */
void f_10d95b30(void) {
  FTRACE(0x10d95b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95b31 mov ebp, esp */
  EBP = (ESP);
  /* 10d95b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95b36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d95b3c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95b40 je 0x10d95b64 */
  if (C.zf) goto L_10d95b64;
  /* 10d95b42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95b45 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10d95b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95b4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95b4e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d95b51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95b54 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d95b56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95b59 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95b5c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d95b5e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d95b61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d95b64:;
  /* 10d95b64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95b67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d95b6a:;
  /* 10d95b6a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d95b6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d95b6f push ecx */
  push32((uint32_t)(ECX));
  /* 10d95b70 push eax */
  push32((uint32_t)(EAX));
  /* 10d95b71 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95b74 push edx */
  push32((uint32_t)(EDX));
  /* 10d95b75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95b78 push eax */
  push32((uint32_t)(EAX));
  /* 10d95b79 call 0x10d99ab0 */
  push32(0x10d95b7eu); f_10d99ab0();
  /* 10d95b7e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d95b81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d95b84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d95b86 push edx */
  push32((uint32_t)(EDX));
  /* 10d95b87 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95b8b push eax */
  push32((uint32_t)(EAX));
  /* 10d95b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95b8f push ecx */
  push32((uint32_t)(ECX));
  /* 10d95b90 call 0x10d99a40 */
  push32(0x10d95b95u); f_10d99a40();
  /* 10d95b95 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d95b98 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10d95b9b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95b9f jbe 0x10d95bb7 */
  if ((C.cf||C.zf)) goto L_10d95bb7;
  /* 10d95ba1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95ba4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95baa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d95bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95baf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95bb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d95bb5 jmp 0x10d95bcb */
  goto L_10d95bcb;
L_10d95bb7:;
  /* 10d95bb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d95bba add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95bbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95bc0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d95bc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95bc8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d95bcb:;
  /* 10d95bcb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95bcf ja 0x10d95b6a */
  if ((!C.cf&&!C.zf)) goto L_10d95b6a;
  /* 10d95bd1 jb 0x10d95bd9 */
  if (C.cf) goto L_10d95bd9;
  /* 10d95bd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95bd7 ja 0x10d95b6a */
  if ((!C.cf&&!C.zf)) goto L_10d95b6a;
L_10d95bd9:;
  /* 10d95bd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95bdc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d95bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95be2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95be5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d95be8:;
  /* 10d95be8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95beb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d95bed mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10d95bf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95bf3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95bf6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d95bf8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d95bfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95bfd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10d95c00 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d95c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d95c05 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95c08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d95c0b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95c0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95c11 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d95c14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d95c17 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95c1a jb 0x10d95be8 */
  if (C.cf) goto L_10d95be8;
  /* 10d95c1c mov esp, ebp */
  ESP = (EBP);
  /* 10d95c1e pop ebp */
  EBP = (pop32());
  /* 10d95c1f ret 0x14 */
  ESPCHK(0x10d95b30u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10d95c30 (31 bytes, 15 insns) */
void f_10d95c30(void) {
  FTRACE(0x10d95c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95c31 mov ebp, esp */
  EBP = (ESP);
  /* 10d95c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95c35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d95c38 push eax */
  push32((uint32_t)(EAX));
  /* 10d95c39 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95c3c push ecx */
  push32((uint32_t)(ECX));
  /* 10d95c3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95c40 push edx */
  push32((uint32_t)(EDX));
  /* 10d95c41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95c44 push eax */
  push32((uint32_t)(EAX));
  /* 10d95c45 call 0x10d95b30 */
  push32(0x10d95c4au); f_10d95b30();
  /* 10d95c4a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95c4d pop ebp */
  EBP = (pop32());
  /* 10d95c4e ret  */
  ESPCHK(0x10d95c30u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10d95c50 (123 bytes, 44 insns) */
void f_10d95c50(void) {
  FTRACE(0x10d95c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95c50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d95c54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d95c5a je 0x10d95c70 */
  if (C.zf) goto L_10d95c70;
L_10d95c5c:;
  /* 10d95c5c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10d95c5e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d95c5f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d95c61 je 0x10d95ca3 */
  if (C.zf) goto L_10d95ca3;
  /* 10d95c63 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d95c69 jne 0x10d95c5c */
  if (!C.zf) goto L_10d95c5c;
  /* 10d95c6b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d95c70:;
  /* 10d95c70 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d95c72 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d95c77 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95c79 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d95c7c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95c7e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95c81 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d95c86 je 0x10d95c70 */
  if (C.zf) goto L_10d95c70;
  /* 10d95c88 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d95c8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d95c8d je 0x10d95cc1 */
  if (C.zf) goto L_10d95cc1;
  /* 10d95c8f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d95c91 je 0x10d95cb7 */
  if (C.zf) goto L_10d95cb7;
  /* 10d95c93 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d95c98 je 0x10d95cad */
  if (C.zf) goto L_10d95cad;
  /* 10d95c9a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d95c9f je 0x10d95ca3 */
  if (C.zf) goto L_10d95ca3;
  /* 10d95ca1 jmp 0x10d95c70 */
  goto L_10d95c70;
L_10d95ca3:;
  /* 10d95ca3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10d95ca6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d95caa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95cac ret  */
  ESPCHK(0x10d95c50u, _esp0);
  ESP += 4; return;
L_10d95cad:;
  /* 10d95cad lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10d95cb0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d95cb4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95cb6 ret  */
  ESPCHK(0x10d95c50u, _esp0);
  ESP += 4; return;
L_10d95cb7:;
  /* 10d95cb7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10d95cba mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d95cbe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95cc0 ret  */
  ESPCHK(0x10d95c50u, _esp0);
  ESP += 4; return;
L_10d95cc1:;
  /* 10d95cc1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10d95cc4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d95cc8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95cca ret  */
  ESPCHK(0x10d95c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x10d95cd0 (249 bytes, 93 insns) */
void f_10d95cd0(void) {
  FTRACE(0x10d95cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d95cd3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d95cd7 push esi */
  push32((uint32_t)(ESI));
  /* 10d95cd8 push edi */
  push32((uint32_t)(EDI));
  /* 10d95cd9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d95cdc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d95cdf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10d95ce2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10d95ce5:;
  /* 10d95ce5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95ce9 jne 0x10d95d09 */
  if (!C.zf) goto L_10d95d09;
  /* 10d95ceb push 0x10db9e54 */
  push32((uint32_t)(0x10db9e54u));
  /* 10d95cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95cf2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d95cf4 push 0x10db9e48 */
  push32((uint32_t)(0x10db9e48u));
  /* 10d95cf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d95cfb call 0x10d91ee0 */
  push32(0x10d95d00u); f_10d91ee0();
  /* 10d95d00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95d03 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95d06 jne 0x10d95d09 */
  if (!C.zf) goto L_10d95d09;
  /* 10d95d08 int3  */
  x86_unimpl("int3 @ 0x10d95d08");
L_10d95d09:;
  /* 10d95d09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d95d0b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d95d0d jne 0x10d95ce5 */
  if (!C.zf) goto L_10d95ce5;
L_10d95d0f:;
  /* 10d95d0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95d13 jne 0x10d95d33 */
  if (!C.zf) goto L_10d95d33;
  /* 10d95d15 push 0x10db9e38 */
  push32((uint32_t)(0x10db9e38u));
  /* 10d95d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95d1c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d95d1e push 0x10db9e48 */
  push32((uint32_t)(0x10db9e48u));
  /* 10d95d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d95d25 call 0x10d91ee0 */
  push32(0x10d95d2au); f_10d91ee0();
  /* 10d95d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95d30 jne 0x10d95d33 */
  if (!C.zf) goto L_10d95d33;
  /* 10d95d32 int3  */
  x86_unimpl("int3 @ 0x10d95d32");
L_10d95d33:;
  /* 10d95d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d95d37 jne 0x10d95d0f */
  if (!C.zf) goto L_10d95d0f;
  /* 10d95d39 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d3c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10d95d43 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95d49 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d95d4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95d52 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d95d54 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95d5a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d95d5d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d95d60 push edx */
  push32((uint32_t)(EDX));
  /* 10d95d61 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95d64 push eax */
  push32((uint32_t)(EAX));
  /* 10d95d65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d68 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95d69 call 0x10d99db0 */
  push32(0x10d95d6eu); f_10d99db0();
  /* 10d95d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95d71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d95d74 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d77 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d95d7a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95d7d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d80 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d95d83 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d86 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95d8a jl 0x10d95dae */
  if ((C.sf!=C.of)) goto L_10d95dae;
  /* 10d95d8c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95d8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d95d91 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d95d94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d95d96 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d95d9c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d95d9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95da2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d95da4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95da7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95daa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d95dac jmp 0x10d95dbf */
  goto L_10d95dbf;
L_10d95dae:;
  /* 10d95dae mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95db1 push eax */
  push32((uint32_t)(EAX));
  /* 10d95db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95db4 call 0x10d99b30 */
  push32(0x10d95db9u); f_10d99b30();
  /* 10d95db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95dbc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10d95dbf:;
  /* 10d95dbf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d95dc2 pop edi */
  EDI = (pop32());
  /* 10d95dc3 pop esi */
  ESI = (pop32());
  /* 10d95dc4 pop ebx */
  EBX = (pop32());
  /* 10d95dc5 mov esp, ebp */
  ESP = (EBP);
  /* 10d95dc7 pop ebp */
  EBP = (pop32());
  /* 10d95dc8 ret  */
  ESPCHK(0x10d95cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x10d95dd0 (7 bytes, 3 insns) */
void f_10d95dd0(void) {
  FTRACE(0x10d95dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95dd0 push edi */
  push32((uint32_t)(EDI));
  /* 10d95dd1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10d95dd5 jmp 0x10d95e41 */
  jmp_ind(0x10d95e41u); return;
}

/* FUN_10005de0 @ 0x10d95de0 (224 bytes, 84 insns) */
void f_10d95de0(void) {
  FTRACE(0x10d95de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95de0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d95de4 push edi */
  push32((uint32_t)(EDI));
  /* 10d95de5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d95deb je 0x10d95dfc */
  if (C.zf) goto L_10d95dfc;
L_10d95ded:;
  /* 10d95ded mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10d95def inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d95df0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d95df2 je 0x10d95e2f */
  if (C.zf) goto L_10d95e2f;
  /* 10d95df4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d95dfa jne 0x10d95ded */
  if (!C.zf) goto L_10d95ded;
L_10d95dfc:;
  /* 10d95dfc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d95dfe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d95e03 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95e05 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d95e08 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95e0a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95e0d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d95e12 je 0x10d95dfc */
  if (C.zf) goto L_10d95dfc;
  /* 10d95e14 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d95e17 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d95e19 je 0x10d95e3e */
  if (C.zf) goto L_10d95e3e;
  /* 10d95e1b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d95e1d je 0x10d95e39 */
  if (C.zf) goto L_10d95e39;
  /* 10d95e1f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d95e24 je 0x10d95e34 */
  if (C.zf) goto L_10d95e34;
  /* 10d95e26 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d95e2b je 0x10d95e2f */
  if (C.zf) goto L_10d95e2f;
  /* 10d95e2d jmp 0x10d95dfc */
  goto L_10d95dfc;
L_10d95e2f:;
  /* 10d95e2f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10d95e32 jmp 0x10d95e41 */
  goto L_10d95e41;
L_10d95e34:;
  /* 10d95e34 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10d95e37 jmp 0x10d95e41 */
  goto L_10d95e41;
L_10d95e39:;
  /* 10d95e39 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10d95e3c jmp 0x10d95e41 */
  goto L_10d95e41;
L_10d95e3e:;
  /* 10d95e3e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10d95e41:;
  /* 10d95e41 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d95e45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d95e4b je 0x10d95e66 */
  if (C.zf) goto L_10d95e66;
L_10d95e4d:;
  /* 10d95e4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d95e4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d95e50 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d95e52 je 0x10d95eb8 */
  if (C.zf) goto L_10d95eb8;
  /* 10d95e54 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10d95e56 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d95e57 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d95e5d jne 0x10d95e4d */
  if (!C.zf) goto L_10d95e4d;
  /* 10d95e5f jmp 0x10d95e66 */
  goto L_10d95e66;
L_10d95e61:;
  /* 10d95e61 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d95e63 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d95e66:;
  /* 10d95e66 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d95e6b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d95e6d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95e6f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d95e72 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d95e74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d95e76 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95e79 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d95e7e je 0x10d95e61 */
  if (C.zf) goto L_10d95e61;
  /* 10d95e80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d95e82 je 0x10d95eb8 */
  if (C.zf) goto L_10d95eb8;
  /* 10d95e84 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10d95e86 je 0x10d95eaf */
  if (C.zf) goto L_10d95eaf;
  /* 10d95e88 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d95e8e je 0x10d95ea2 */
  if (C.zf) goto L_10d95ea2;
  /* 10d95e90 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d95e96 je 0x10d95e9a */
  if (C.zf) goto L_10d95e9a;
  /* 10d95e98 jmp 0x10d95e61 */
  goto L_10d95e61;
L_10d95e9a:;
  /* 10d95e9a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d95e9c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d95ea0 pop edi */
  EDI = (pop32());
  /* 10d95ea1 ret  */
  ESPCHK(0x10d95de0u, _esp0);
  ESP += 4; return;
L_10d95ea2:;
  /* 10d95ea2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10d95ea5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d95ea9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10d95ead pop edi */
  EDI = (pop32());
  /* 10d95eae ret  */
  ESPCHK(0x10d95de0u, _esp0);
  ESP += 4; return;
L_10d95eaf:;
  /* 10d95eaf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10d95eb2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d95eb6 pop edi */
  EDI = (pop32());
  /* 10d95eb7 ret  */
  ESPCHK(0x10d95de0u, _esp0);
  ESP += 4; return;
L_10d95eb8:;
  /* 10d95eb8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10d95eba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d95ebe pop edi */
  EDI = (pop32());
  /* 10d95ebf ret  */
  ESPCHK(0x10d95de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x10d95ec0 (243 bytes, 91 insns) */
void f_10d95ec0(void) {
  FTRACE(0x10d95ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10d95ec3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d95ec7 push esi */
  push32((uint32_t)(ESI));
  /* 10d95ec8 push edi */
  push32((uint32_t)(EDI));
  /* 10d95ec9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d95ecc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d95ecf:;
  /* 10d95ecf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95ed3 jne 0x10d95ef3 */
  if (!C.zf) goto L_10d95ef3;
  /* 10d95ed5 push 0x10db9e54 */
  push32((uint32_t)(0x10db9e54u));
  /* 10d95eda push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95edc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10d95ede push 0x10db9e64 */
  push32((uint32_t)(0x10db9e64u));
  /* 10d95ee3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d95ee5 call 0x10d91ee0 */
  push32(0x10d95eeau); f_10d91ee0();
  /* 10d95eea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95eed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95ef0 jne 0x10d95ef3 */
  if (!C.zf) goto L_10d95ef3;
  /* 10d95ef2 int3  */
  x86_unimpl("int3 @ 0x10d95ef2");
L_10d95ef3:;
  /* 10d95ef3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d95ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d95ef7 jne 0x10d95ecf */
  if (!C.zf) goto L_10d95ecf;
L_10d95ef9:;
  /* 10d95ef9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95efd jne 0x10d95f1d */
  if (!C.zf) goto L_10d95f1d;
  /* 10d95eff push 0x10db9e38 */
  push32((uint32_t)(0x10db9e38u));
  /* 10d95f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95f06 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10d95f08 push 0x10db9e64 */
  push32((uint32_t)(0x10db9e64u));
  /* 10d95f0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d95f0f call 0x10d91ee0 */
  push32(0x10d95f14u); f_10d91ee0();
  /* 10d95f14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95f17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95f1a jne 0x10d95f1d */
  if (!C.zf) goto L_10d95f1d;
  /* 10d95f1c int3  */
  x86_unimpl("int3 @ 0x10d95f1c");
L_10d95f1d:;
  /* 10d95f1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d95f1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d95f21 jne 0x10d95ef9 */
  if (!C.zf) goto L_10d95ef9;
  /* 10d95f23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f26 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10d95f2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95f33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d95f36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d95f3c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d95f3e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f41 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d95f44 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d95f47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d95f4a push ecx */
  push32((uint32_t)(ECX));
  /* 10d95f4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d95f4e push edx */
  push32((uint32_t)(EDX));
  /* 10d95f4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f52 push eax */
  push32((uint32_t)(EAX));
  /* 10d95f53 call 0x10d99db0 */
  push32(0x10d95f58u); f_10d99db0();
  /* 10d95f58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95f5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d95f5e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f61 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d95f64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95f67 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f6a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d95f6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f70 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95f74 jl 0x10d95f98 */
  if ((C.sf!=C.of)) goto L_10d95f98;
  /* 10d95f76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f79 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d95f7b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d95f7e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d95f80 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d95f86 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d95f89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d95f8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95f91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f94 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d95f96 jmp 0x10d95fa9 */
  goto L_10d95fa9;
L_10d95f98:;
  /* 10d95f98 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d95f9b push edx */
  push32((uint32_t)(EDX));
  /* 10d95f9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d95f9e call 0x10d99b30 */
  push32(0x10d95fa3u); f_10d99b30();
  /* 10d95fa3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d95fa6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10d95fa9:;
  /* 10d95fa9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d95fac pop edi */
  EDI = (pop32());
  /* 10d95fad pop esi */
  ESI = (pop32());
  /* 10d95fae pop ebx */
  EBX = (pop32());
  /* 10d95faf mov esp, ebp */
  ESP = (EBP);
  /* 10d95fb1 pop ebp */
  EBP = (pop32());
  /* 10d95fb2 ret  */
  ESPCHK(0x10d95ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fc0 @ 0x10d95fc0 (47 bytes, 17 insns) */
void f_10d95fc0(void) {
  FTRACE(0x10d95fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d95fc1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95fc6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10d95fca jb 0x10d95fe0 */
  if (C.cf) goto L_10d95fe0;
L_10d95fcc:;
  /* 10d95fcc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95fd2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95fd7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10d95fd9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95fde jae 0x10d95fcc */
  if (!C.cf) goto L_10d95fcc;
L_10d95fe0:;
  /* 10d95fe0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95fe2 mov eax, esp */
  EAX = (ESP);
  /* 10d95fe4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10d95fe6 mov esp, ecx */
  ESP = (ECX);
  /* 10d95fe8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d95fea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d95fed push eax */
  push32((uint32_t)(EAX));
  /* 10d95fee ret  */
  ESPCHK(0x10d95fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x10d95ff0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10d95ff0(void) {
  FTRACE(0x10d95ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d95ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d95ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10d95ff3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d95ff6 push esi */
  push32((uint32_t)(ESI));
  /* 10d95ff7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d95ffb je 0x10d96003 */
  if (C.zf) goto L_10d96003;
  /* 10d95ffd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96001 jne 0x10d96008 */
  if (!C.zf) goto L_10d96008;
L_10d96003:;
  /* 10d96003 jmp 0x10d961d8 */
  goto L_10d961d8;
L_10d96008:;
  /* 10d96008 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9600c je 0x10d96024 */
  if (C.zf) goto L_10d96024;
  /* 10d9600e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96012 je 0x10d96024 */
  if (C.zf) goto L_10d96024;
  /* 10d96014 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96018 je 0x10d96024 */
  if (C.zf) goto L_10d96024;
  /* 10d9601a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9601e jne 0x10d96101 */
  if (!C.zf) goto L_10d96101;
L_10d96024:;
  /* 10d96024 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d96026 call 0x10d96820 */
  push32(0x10d9602bu); f_10d96820();
  /* 10d9602b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9602e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96032 je 0x10d9603a */
  if (C.zf) goto L_10d9603a;
  /* 10d96034 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96038 jne 0x10d9607f */
  if (!C.zf) goto L_10d9607f;
L_10d9603a:;
  /* 10d9603a cmp dword ptr [0x10dbe604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96041 jne 0x10d9607f */
  if (!C.zf) goto L_10d9607f;
  /* 10d96043 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d96045 push 0x10d96220 */
  push32((uint32_t)(0x10d96220u));
  /* 10d9604a call dword ptr [0x10dc0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0318))), 0x10d96050u);
  /* 10d96050 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96053 jne 0x10d96061 */
  if (!C.zf) goto L_10d96061;
  /* 10d96055 mov dword ptr [0x10dbe604], 1 */
  w32((uint32_t)(0x10dbe604), (0x1u));
  /* 10d9605f jmp 0x10d9607f */
  goto L_10d9607f;
L_10d96061:;
  /* 10d96061 call dword ptr [0x10dc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02d0))), 0x10d96067u);
  /* 10d96067 mov esi, eax */
  ESI = (EAX);
  /* 10d96069 call 0x10d9ad00 */
  push32(0x10d9606eu); f_10d9ad00();
  /* 10d9606e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10d96070 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d96072 call 0x10d968c0 */
  push32(0x10d96077u); f_10d968c0();
  /* 10d96077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9607a jmp 0x10d961d8 */
  goto L_10d961d8;
L_10d9607f:;
  /* 10d9607f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96082 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d96085 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96088 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d9608b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d9608e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96092 ja 0x10d960f2 */
  if ((!C.cf&&!C.zf)) goto L_10d960f2;
  /* 10d96094 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96097 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d96099 mov dl, byte ptr [eax + 0x10d961ff] */
  DL = (r8((uint32_t)(EAX + 0x10d961ff)));
  /* 10d9609f jmp dword ptr [edx*4 + 0x10d961eb] */
  switch (EDX) {
    case 0: goto L_10d960a6;
    case 1: goto L_10d960e0;
    case 2: goto L_10d960ba;
    case 3: goto L_10d960cd;
    case 4: goto L_10d960f2;
    default: x86_unimpl("switch@0x10d9609f out of table"); return;
  }
L_10d960a6:;
  /* 10d960a6 mov ecx, dword ptr [0x10dbe5f4] */
  ECX = (r32((uint32_t)(0x10dbe5f4)));
  /* 10d960ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d960af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d960b2 mov dword ptr [0x10dbe5f4], edx */
  w32((uint32_t)(0x10dbe5f4), (EDX));
  /* 10d960b8 jmp 0x10d960f2 */
  goto L_10d960f2;
L_10d960ba:;
  /* 10d960ba mov eax, dword ptr [0x10dbe5f8] */
  EAX = (r32((uint32_t)(0x10dbe5f8)));
  /* 10d960bf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d960c2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d960c5 mov dword ptr [0x10dbe5f8], ecx */
  w32((uint32_t)(0x10dbe5f8), (ECX));
  /* 10d960cb jmp 0x10d960f2 */
  goto L_10d960f2;
L_10d960cd:;
  /* 10d960cd mov edx, dword ptr [0x10dbe5fc] */
  EDX = (r32((uint32_t)(0x10dbe5fc)));
  /* 10d960d3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d960d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d960d9 mov dword ptr [0x10dbe5fc], eax */
  w32((uint32_t)(0x10dbe5fc), (EAX));
  /* 10d960de jmp 0x10d960f2 */
  goto L_10d960f2;
L_10d960e0:;
  /* 10d960e0 mov ecx, dword ptr [0x10dbe600] */
  ECX = (r32((uint32_t)(0x10dbe600)));
  /* 10d960e6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d960e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d960ec mov dword ptr [0x10dbe600], edx */
  w32((uint32_t)(0x10dbe600), (EDX));
L_10d960f2:;
  /* 10d960f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d960f4 call 0x10d968c0 */
  push32(0x10d960f9u); f_10d968c0();
  /* 10d960f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d960fc jmp 0x10d961d3 */
  goto L_10d961d3;
L_10d96101:;
  /* 10d96101 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96105 je 0x10d96118 */
  if (C.zf) goto L_10d96118;
  /* 10d96107 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9610b je 0x10d96118 */
  if (C.zf) goto L_10d96118;
  /* 10d9610d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96111 je 0x10d96118 */
  if (C.zf) goto L_10d96118;
  /* 10d96113 jmp 0x10d961d8 */
  goto L_10d961d8;
L_10d96118:;
  /* 10d96118 call 0x10d92860 */
  push32(0x10d9611du); f_10d92860();
  /* 10d9611d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d96120 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96123 cmp dword ptr [eax + 0x50], 0x10dbcc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10dbcc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9612a jne 0x10d96175 */
  if (!C.zf) goto L_10d96175;
  /* 10d9612c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10d96131 push 0x10db9e70 */
  push32((uint32_t)(0x10db9e70u));
  /* 10d96136 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d96138 mov ecx, dword ptr [0x10dbcc80] */
  ECX = (r32((uint32_t)(0x10dbcc80)));
  /* 10d9613e push ecx */
  push32((uint32_t)(ECX));
  /* 10d9613f call 0x10d92e20 */
  push32(0x10d96144u); f_10d92e20();
  /* 10d96144 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96147 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9614a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10d9614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96150 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96154 je 0x10d96173 */
  if (C.zf) goto L_10d96173;
  /* 10d96156 mov ecx, dword ptr [0x10dbcc80] */
  ECX = (r32((uint32_t)(0x10dbcc80)));
  /* 10d9615c push ecx */
  push32((uint32_t)(ECX));
  /* 10d9615d push 0x10dbcc00 */
  push32((uint32_t)(0x10dbcc00u));
  /* 10d96162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96165 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10d96168 push eax */
  push32((uint32_t)(EAX));
  /* 10d96169 call 0x10d99700 */
  push32(0x10d9616eu); f_10d99700();
  /* 10d9616e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96171 jmp 0x10d96175 */
  goto L_10d96175;
L_10d96173:;
  /* 10d96173 jmp 0x10d961d8 */
  goto L_10d961d8;
L_10d96175:;
  /* 10d96175 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96178 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d9617b push edx */
  push32((uint32_t)(EDX));
  /* 10d9617c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9617f push eax */
  push32((uint32_t)(EAX));
  /* 10d96180 call 0x10d96500 */
  push32(0x10d96185u); f_10d96500();
  /* 10d96185 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96188 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9618b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9618f jne 0x10d96193 */
  if (!C.zf) goto L_10d96193;
  /* 10d96191 jmp 0x10d961d8 */
  goto L_10d961d8;
L_10d96193:;
  /* 10d96193 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96196 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d96199 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d9619c:;
  /* 10d9619c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9619f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d961a2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d961a5 jne 0x10d961d3 */
  if (!C.zf) goto L_10d961d3;
  /* 10d961a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d961aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d961ad mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d961b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d961b3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d961b6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d961b9 mov edx, dword ptr [0x10dbcc84] */
  EDX = (r32((uint32_t)(0x10dbcc84)));
  /* 10d961bf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d961c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d961c5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10d961c8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d961ca cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d961cd jb 0x10d961d1 */
  if (C.cf) goto L_10d961d1;
  /* 10d961cf jmp 0x10d961d3 */
  goto L_10d961d3;
L_10d961d1:;
  /* 10d961d1 jmp 0x10d9619c */
  goto L_10d9619c;
L_10d961d3:;
  /* 10d961d3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d961d6 jmp 0x10d961e6 */
  goto L_10d961e6;
L_10d961d8:;
  /* 10d961d8 call 0x10d9acf0 */
  push32(0x10d961ddu); f_10d9acf0();
  /* 10d961dd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10d961e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d961e6:;
  /* 10d961e6 pop esi */
  ESI = (pop32());
  /* 10d961e7 mov esp, ebp */
  ESP = (EBP);
  /* 10d961e9 pop ebp */
  EBP = (pop32());
  /* 10d961ea ret  */
  ESPCHK(0x10d95ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006220 @ 0x10d96220 (146 bytes, 45 insns) */
void f_10d96220(void) {
  FTRACE(0x10d96220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96220 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96221 mov ebp, esp */
  EBP = (ESP);
  /* 10d96223 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d96226 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d96228 call 0x10d96820 */
  push32(0x10d9622du); f_10d96820();
  /* 10d9622d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96230 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96234 jne 0x10d9624e */
  if (!C.zf) goto L_10d9624e;
  /* 10d96236 mov dword ptr [ebp - 8], 0x10dbe5f4 */
  w32((uint32_t)(EBP + -0x8), (0x10dbe5f4u));
  /* 10d9623d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96240 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d96242 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d96245 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d9624c jmp 0x10d96264 */
  goto L_10d96264;
L_10d9624e:;
  /* 10d9624e mov dword ptr [ebp - 8], 0x10dbe5f8 */
  w32((uint32_t)(EBP + -0x8), (0x10dbe5f8u));
  /* 10d96255 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96258 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d9625a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9625d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10d96264:;
  /* 10d96264 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96268 jne 0x10d96278 */
  if (!C.zf) goto L_10d96278;
  /* 10d9626a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9626c call 0x10d968c0 */
  push32(0x10d96271u); f_10d968c0();
  /* 10d96271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96276 jmp 0x10d962ac */
  goto L_10d962ac;
L_10d96278:;
  /* 10d96278 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9627c je 0x10d9629d */
  if (C.zf) goto L_10d9629d;
  /* 10d9627e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96281 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10d96287 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d96289 call 0x10d968c0 */
  push32(0x10d9628eu); f_10d968c0();
  /* 10d9628e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96294 push edx */
  push32((uint32_t)(EDX));
  /* 10d96295 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10d96298u);
  /* 10d96298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9629b jmp 0x10d962a7 */
  goto L_10d962a7;
L_10d9629d:;
  /* 10d9629d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9629f call 0x10d968c0 */
  push32(0x10d962a4u); f_10d968c0();
  /* 10d962a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d962a7:;
  /* 10d962a7 mov eax, 1 */
  EAX = (0x1u);
L_10d962ac:;
  /* 10d962ac mov esp, ebp */
  ESP = (EBP);
  /* 10d962ae pop ebp */
  EBP = (pop32());
  /* 10d962af ret 4 */
  ESPCHK(0x10d96220u, _esp0);
  ESP += 8; return;
}

/* FUN_100062c0 @ 0x10d962c0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10d962c0(void) {
  FTRACE(0x10d962c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d962c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d962c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d962c3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d962c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d962cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d962d0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d962d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d962d6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d962d9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d962dc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d962e0 ja 0x10d9638e */
  if ((!C.cf&&!C.zf)) goto L_10d9638e;
  /* 10d962e6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d962e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d962eb mov dl, byte ptr [eax + 0x10d964e2] */
  DL = (r8((uint32_t)(EAX + 0x10d964e2)));
  /* 10d962f1 jmp dword ptr [edx*4 + 0x10d964ca] */
  switch (EDX) {
    case 0: goto L_10d962f8;
    case 1: goto L_10d96363;
    case 2: goto L_10d96349;
    case 3: goto L_10d96315;
    case 4: goto L_10d9632f;
    case 5: goto L_10d9638e;
    default: x86_unimpl("switch@0x10d962f1 out of table"); return;
  }
L_10d962f8:;
  /* 10d962f8 mov dword ptr [ebp - 0x18], 0x10dbe5f4 */
  w32((uint32_t)(EBP + -0x18), (0x10dbe5f4u));
  /* 10d962ff mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d96302 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d96304 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d96307 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9630a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9630d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d96310 jmp 0x10d96396 */
  goto L_10d96396;
L_10d96315:;
  /* 10d96315 mov dword ptr [ebp - 0x18], 0x10dbe5f8 */
  w32((uint32_t)(EBP + -0x18), (0x10dbe5f8u));
  /* 10d9631c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d9631f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d96321 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d96324 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d96327 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9632a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d9632d jmp 0x10d96396 */
  goto L_10d96396;
L_10d9632f:;
  /* 10d9632f mov dword ptr [ebp - 0x18], 0x10dbe5fc */
  w32((uint32_t)(EBP + -0x18), (0x10dbe5fcu));
  /* 10d96336 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d96339 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d9633b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d9633e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d96341 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96344 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d96347 jmp 0x10d96396 */
  goto L_10d96396;
L_10d96349:;
  /* 10d96349 mov dword ptr [ebp - 0x18], 0x10dbe600 */
  w32((uint32_t)(EBP + -0x18), (0x10dbe600u));
  /* 10d96350 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d96353 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d96355 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d96358 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d9635b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9635e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d96361 jmp 0x10d96396 */
  goto L_10d96396;
L_10d96363:;
  /* 10d96363 call 0x10d92860 */
  push32(0x10d96368u); f_10d92860();
  /* 10d96368 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9636b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9636e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d96371 push edx */
  push32((uint32_t)(EDX));
  /* 10d96372 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96375 push eax */
  push32((uint32_t)(EAX));
  /* 10d96376 call 0x10d96500 */
  push32(0x10d9637bu); f_10d96500();
  /* 10d9637b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9637e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96381 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d96384 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d96387 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d96389 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d9638c jmp 0x10d96396 */
  goto L_10d96396;
L_10d9638e:;
  /* 10d9638e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d96391 jmp 0x10d964c6 */
  goto L_10d964c6;
L_10d96396:;
  /* 10d96396 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9639a je 0x10d963a6 */
  if (C.zf) goto L_10d963a6;
  /* 10d9639c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d9639e call 0x10d96820 */
  push32(0x10d963a3u); f_10d96820();
  /* 10d963a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d963a6:;
  /* 10d963a6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d963aa jne 0x10d963c3 */
  if (!C.zf) goto L_10d963c3;
  /* 10d963ac cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d963b0 je 0x10d963bc */
  if (C.zf) goto L_10d963bc;
  /* 10d963b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d963b4 call 0x10d968c0 */
  push32(0x10d963b9u); f_10d968c0();
  /* 10d963b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d963bc:;
  /* 10d963bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d963be jmp 0x10d964c6 */
  goto L_10d964c6;
L_10d963c3:;
  /* 10d963c3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d963c7 jne 0x10d963e0 */
  if (!C.zf) goto L_10d963e0;
  /* 10d963c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d963cd je 0x10d963d9 */
  if (C.zf) goto L_10d963d9;
  /* 10d963cf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d963d1 call 0x10d968c0 */
  push32(0x10d963d6u); f_10d968c0();
  /* 10d963d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d963d9:;
  /* 10d963d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d963db call 0x10d925e0 */
  push32(0x10d963e0u); f_10d925e0();
L_10d963e0:;
  /* 10d963e0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d963e4 je 0x10d963f2 */
  if (C.zf) goto L_10d963f2;
  /* 10d963e6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d963ea je 0x10d963f2 */
  if (C.zf) goto L_10d963f2;
  /* 10d963ec cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d963f0 jne 0x10d9641e */
  if (!C.zf) goto L_10d9641e;
L_10d963f2:;
  /* 10d963f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d963f5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10d963f8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d963fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d963fe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10d96405 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96409 jne 0x10d9641e */
  if (!C.zf) goto L_10d9641e;
  /* 10d9640b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9640e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10d96411 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d96414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96417 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10d9641e:;
  /* 10d9641e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96422 jne 0x10d96460 */
  if (!C.zf) goto L_10d96460;
  /* 10d96424 mov eax, dword ptr [0x10dbcc78] */
  EAX = (r32((uint32_t)(0x10dbcc78)));
  /* 10d96429 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d9642c jmp 0x10d96437 */
  goto L_10d96437;
L_10d9642e:;
  /* 10d9642e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96431 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96434 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d96437:;
  /* 10d96437 mov edx, dword ptr [0x10dbcc78] */
  EDX = (r32((uint32_t)(0x10dbcc78)));
  /* 10d9643d add edx, dword ptr [0x10dbcc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbcc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96443 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96446 jge 0x10d9645e */
  if ((C.sf==C.of)) goto L_10d9645e;
  /* 10d96448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9644b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9644e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96451 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d96454 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10d9645c jmp 0x10d9642e */
  goto L_10d9642e;
L_10d9645e:;
  /* 10d9645e jmp 0x10d96469 */
  goto L_10d96469;
L_10d96460:;
  /* 10d96460 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d96463 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d96469:;
  /* 10d96469 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9646d je 0x10d96479 */
  if (C.zf) goto L_10d96479;
  /* 10d9646f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d96471 call 0x10d968c0 */
  push32(0x10d96476u); f_10d968c0();
  /* 10d96476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d96479:;
  /* 10d96479 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9647d jne 0x10d96490 */
  if (!C.zf) goto L_10d96490;
  /* 10d9647f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96482 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10d96485 push edx */
  push32((uint32_t)(EDX));
  /* 10d96486 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d96488 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10d9648bu);
  /* 10d9648b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9648e jmp 0x10d9649a */
  goto L_10d9649a;
L_10d96490:;
  /* 10d96490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96493 push eax */
  push32((uint32_t)(EAX));
  /* 10d96494 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10d96497u);
  /* 10d96497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9649a:;
  /* 10d9649a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9649e je 0x10d964ac */
  if (C.zf) goto L_10d964ac;
  /* 10d964a0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d964a4 je 0x10d964ac */
  if (C.zf) goto L_10d964ac;
  /* 10d964a6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d964aa jne 0x10d964c4 */
  if (!C.zf) goto L_10d964c4;
L_10d964ac:;
  /* 10d964ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d964af mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d964b2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10d964b5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d964b9 jne 0x10d964c4 */
  if (!C.zf) goto L_10d964c4;
  /* 10d964bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d964be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d964c1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10d964c4:;
  /* 10d964c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d964c6:;
  /* 10d964c6 mov esp, ebp */
  ESP = (EBP);
  /* 10d964c8 pop ebp */
  EBP = (pop32());
  /* 10d964c9 ret  */
  ESPCHK(0x10d962c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x10d96500 (91 bytes, 35 insns) */
void f_10d96500(void) {
  FTRACE(0x10d96500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96500 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96501 mov ebp, esp */
  EBP = (ESP);
  /* 10d96503 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96504 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96507 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d9650a:;
  /* 10d9650a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9650d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d96510 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96513 je 0x10d96533 */
  if (C.zf) goto L_10d96533;
  /* 10d96515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96518 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9651b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9651e mov ecx, dword ptr [0x10dbcc84] */
  ECX = (r32((uint32_t)(0x10dbcc84)));
  /* 10d96524 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d96527 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9652a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9652c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9652f jae 0x10d96533 */
  if (!C.cf) goto L_10d96533;
  /* 10d96531 jmp 0x10d9650a */
  goto L_10d9650a;
L_10d96533:;
  /* 10d96533 mov eax, dword ptr [0x10dbcc84] */
  EAX = (r32((uint32_t)(0x10dbcc84)));
  /* 10d96538 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d9653b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d9653e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96540 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96543 jae 0x10d96555 */
  if (!C.cf) goto L_10d96555;
  /* 10d96545 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96548 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d9654b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9654e jne 0x10d96555 */
  if (!C.zf) goto L_10d96555;
  /* 10d96550 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96553 jmp 0x10d96557 */
  goto L_10d96557;
L_10d96555:;
  /* 10d96555 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d96557:;
  /* 10d96557 mov esp, ebp */
  ESP = (EBP);
  /* 10d96559 pop ebp */
  EBP = (pop32());
  /* 10d9655a ret  */
  ESPCHK(0x10d96500u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x10d96560 (13 bytes, 6 insns) */
void f_10d96560(void) {
  FTRACE(0x10d96560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96560 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96561 mov ebp, esp */
  EBP = (ESP);
  /* 10d96563 call 0x10d92860 */
  push32(0x10d96568u); f_10d92860();
  /* 10d96568 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9656b pop ebp */
  EBP = (pop32());
  /* 10d9656c ret  */
  ESPCHK(0x10d96560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006570 @ 0x10d96570 (13 bytes, 6 insns) */
void f_10d96570(void) {
  FTRACE(0x10d96570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96570 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96571 mov ebp, esp */
  EBP = (ESP);
  /* 10d96573 call 0x10d92860 */
  push32(0x10d96578u); f_10d92860();
  /* 10d96578 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9657b pop ebp */
  EBP = (pop32());
  /* 10d9657c ret  */
  ESPCHK(0x10d96570u, _esp0);
  ESP += 4; return;
}

/* FUN_10006580 @ 0x10d96580 (187 bytes, 54 insns) */
void f_10d96580(void) {
  FTRACE(0x10d96580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96580 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96581 mov ebp, esp */
  EBP = (ESP);
  /* 10d96583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d96586 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9658d cmp dword ptr [0x10dbe608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96594 jne 0x10d965f3 */
  if (!C.zf) goto L_10d965f3;
  /* 10d96596 push 0x10db929c */
  push32((uint32_t)(0x10db929cu));
  /* 10d9659b call dword ptr [0x10dc02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02a0))), 0x10d965a1u);
  /* 10d965a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d965a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d965a8 je 0x10d965c7 */
  if (C.zf) goto L_10d965c7;
  /* 10d965aa push 0x10db9ea0 */
  push32((uint32_t)(0x10db9ea0u));
  /* 10d965af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d965b2 push eax */
  push32((uint32_t)(EAX));
  /* 10d965b3 call dword ptr [0x10dc029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc029c))), 0x10d965b9u);
  /* 10d965b9 mov dword ptr [0x10dbe608], eax */
  w32((uint32_t)(0x10dbe608), (EAX));
  /* 10d965be cmp dword ptr [0x10dbe608], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe608))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d965c5 jne 0x10d965cb */
  if (!C.zf) goto L_10d965cb;
L_10d965c7:;
  /* 10d965c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d965c9 jmp 0x10d96637 */
  goto L_10d96637;
L_10d965cb:;
  /* 10d965cb push 0x10db9e90 */
  push32((uint32_t)(0x10db9e90u));
  /* 10d965d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d965d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d965d4 call dword ptr [0x10dc029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc029c))), 0x10d965dau);
  /* 10d965da mov dword ptr [0x10dbe60c], eax */
  w32((uint32_t)(0x10dbe60c), (EAX));
  /* 10d965df push 0x10db9e7c */
  push32((uint32_t)(0x10db9e7cu));
  /* 10d965e4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d965e7 push edx */
  push32((uint32_t)(EDX));
  /* 10d965e8 call dword ptr [0x10dc029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc029c))), 0x10d965eeu);
  /* 10d965ee mov dword ptr [0x10dbe610], eax */
  w32((uint32_t)(0x10dbe610), (EAX));
L_10d965f3:;
  /* 10d965f3 cmp dword ptr [0x10dbe60c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe60c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d965fa je 0x10d96605 */
  if (C.zf) goto L_10d96605;
  /* 10d965fc call dword ptr [0x10dbe60c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe60c))), 0x10d96602u);
  /* 10d96602 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d96605:;
  /* 10d96605 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96609 je 0x10d96621 */
  if (C.zf) goto L_10d96621;
  /* 10d9660b cmp dword ptr [0x10dbe610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96612 je 0x10d96621 */
  if (C.zf) goto L_10d96621;
  /* 10d96614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96617 push eax */
  push32((uint32_t)(EAX));
  /* 10d96618 call dword ptr [0x10dbe610] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe610))), 0x10d9661eu);
  /* 10d9661e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d96621:;
  /* 10d96621 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d96624 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96625 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96628 push edx */
  push32((uint32_t)(EDX));
  /* 10d96629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9662c push eax */
  push32((uint32_t)(EAX));
  /* 10d9662d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96630 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96631 call dword ptr [0x10dbe608] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dbe608))), 0x10d96637u);
L_10d96637:;
  /* 10d96637 mov esp, ebp */
  ESP = (EBP);
  /* 10d96639 pop ebp */
  EBP = (pop32());
  /* 10d9663a ret  */
  ESPCHK(0x10d96580u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10d96640 (254 bytes, 109 insns) */
void f_10d96640(void) {
  FTRACE(0x10d96640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96640 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d96644 push edi */
  push32((uint32_t)(EDI));
  /* 10d96645 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d96647 je 0x10d966c3 */
  if (C.zf) goto L_10d966c3;
  /* 10d96649 push esi */
  push32((uint32_t)(ESI));
  /* 10d9664a push ebx */
  push32((uint32_t)(EBX));
  /* 10d9664b mov ebx, ecx */
  EBX = (ECX);
  /* 10d9664d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10d96651 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10d96657 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10d9665b jne 0x10d96664 */
  if (!C.zf) goto L_10d96664;
  /* 10d9665d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d96660 jne 0x10d966d1 */
  if (!C.zf) goto L_10d966d1;
  /* 10d96662 jmp 0x10d96685 */
  goto L_10d96685;
L_10d96664:;
  /* 10d96664 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d96666 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d96667 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d96669 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d9666a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d9666b je 0x10d96692 */
  if (C.zf) goto L_10d96692;
  /* 10d9666d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d9666f je 0x10d9669a */
  if (C.zf) goto L_10d9669a;
  /* 10d96671 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10d96677 jne 0x10d96664 */
  if (!C.zf) goto L_10d96664;
  /* 10d96679 mov ebx, ecx */
  EBX = (ECX);
  /* 10d9667b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d9667e jne 0x10d966d1 */
  if (!C.zf) goto L_10d966d1;
L_10d96680:;
  /* 10d96680 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10d96683 je 0x10d96692 */
  if (C.zf) goto L_10d96692;
L_10d96685:;
  /* 10d96685 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d96687 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d96688 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d9668a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d9668b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d9668d je 0x10d966be */
  if (C.zf) goto L_10d966be;
  /* 10d9668f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10d96690 jne 0x10d96685 */
  if (!C.zf) goto L_10d96685;
L_10d96692:;
  /* 10d96692 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d96696 pop ebx */
  EBX = (pop32());
  /* 10d96697 pop esi */
  ESI = (pop32());
  /* 10d96698 pop edi */
  EDI = (pop32());
  /* 10d96699 ret  */
  ESPCHK(0x10d96640u, _esp0);
  ESP += 4; return;
L_10d9669a:;
  /* 10d9669a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d966a0 je 0x10d966b4 */
  if (C.zf) goto L_10d966b4;
L_10d966a2:;
  /* 10d966a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d966a4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d966a5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d966a6 je 0x10d96736 */
  if (C.zf) goto L_10d96736;
  /* 10d966ac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d966b2 jne 0x10d966a2 */
  if (!C.zf) goto L_10d966a2;
L_10d966b4:;
  /* 10d966b4 mov ebx, ecx */
  EBX = (ECX);
  /* 10d966b6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d966b9 jne 0x10d96727 */
  if (!C.zf) goto L_10d96727;
L_10d966bb:;
  /* 10d966bb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d966bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10d966be:;
  /* 10d966be dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10d966bf jne 0x10d966bb */
  if (!C.zf) goto L_10d966bb;
  /* 10d966c1 pop ebx */
  EBX = (pop32());
  /* 10d966c2 pop esi */
  ESI = (pop32());
L_10d966c3:;
  /* 10d966c3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d966c7 pop edi */
  EDI = (pop32());
  /* 10d966c8 ret  */
  ESPCHK(0x10d96640u, _esp0);
  ESP += 4; return;
L_10d966c9:;
  /* 10d966c9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d966cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d966ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d966cf je 0x10d96680 */
  if (C.zf) goto L_10d96680;
L_10d966d1:;
  /* 10d966d1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d966d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10d966d8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d966da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d966dd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d966df mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10d966e1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d966e4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d966e9 je 0x10d966c9 */
  if (C.zf) goto L_10d966c9;
  /* 10d966eb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d966ed je 0x10d9671b */
  if (C.zf) goto L_10d9671b;
  /* 10d966ef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10d966f1 je 0x10d96711 */
  if (C.zf) goto L_10d96711;
  /* 10d966f3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d966f9 je 0x10d96707 */
  if (C.zf) goto L_10d96707;
  /* 10d966fb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d96701 jne 0x10d966c9 */
  if (!C.zf) goto L_10d966c9;
  /* 10d96703 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d96705 jmp 0x10d9671f */
  goto L_10d9671f;
L_10d96707:;
  /* 10d96707 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d9670d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d9670f jmp 0x10d9671f */
  goto L_10d9671f;
L_10d96711:;
  /* 10d96711 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d96717 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d96719 jmp 0x10d9671f */
  goto L_10d9671f;
L_10d9671b:;
  /* 10d9671b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d9671d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10d9671f:;
  /* 10d9671f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96722 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96724 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d96725 je 0x10d96731 */
  if (C.zf) goto L_10d96731;
L_10d96727:;
  /* 10d96727 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d96729:;
  /* 10d96729 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10d9672b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d9672e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d9672f jne 0x10d96729 */
  if (!C.zf) goto L_10d96729;
L_10d96731:;
  /* 10d96731 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10d96734 jne 0x10d966bb */
  if (!C.zf) goto L_10d966bb;
L_10d96736:;
  /* 10d96736 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d9673a pop ebx */
  EBX = (pop32());
  /* 10d9673b pop esi */
  ESI = (pop32());
  /* 10d9673c pop edi */
  EDI = (pop32());
  /* 10d9673d ret  */
  ESPCHK(0x10d96640u, _esp0);
  ESP += 4; return;
}

/* FUN_10006740 @ 0x10d96740 (55 bytes, 16 insns) */
void f_10d96740(void) {
  FTRACE(0x10d96740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96740 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96741 mov ebp, esp */
  EBP = (ESP);
  /* 10d96743 mov eax, dword ptr [0x10dbcb84] */
  EAX = (r32((uint32_t)(0x10dbcb84)));
  /* 10d96748 push eax */
  push32((uint32_t)(EAX));
  /* 10d96749 call dword ptr [0x10dc031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc031c))), 0x10d9674fu);
  /* 10d9674f mov ecx, dword ptr [0x10dbcb74] */
  ECX = (r32((uint32_t)(0x10dbcb74)));
  /* 10d96755 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96756 call dword ptr [0x10dc031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc031c))), 0x10d9675cu);
  /* 10d9675c mov edx, dword ptr [0x10dbcb64] */
  EDX = (r32((uint32_t)(0x10dbcb64)));
  /* 10d96762 push edx */
  push32((uint32_t)(EDX));
  /* 10d96763 call dword ptr [0x10dc031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc031c))), 0x10d96769u);
  /* 10d96769 mov eax, dword ptr [0x10dbcb44] */
  EAX = (r32((uint32_t)(0x10dbcb44)));
  /* 10d9676e push eax */
  push32((uint32_t)(EAX));
  /* 10d9676f call dword ptr [0x10dc031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc031c))), 0x10d96775u);
  /* 10d96775 pop ebp */
  EBP = (pop32());
  /* 10d96776 ret  */
  ESPCHK(0x10d96740u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x10d96780 (159 bytes, 47 insns) */
void f_10d96780(void) {
  FTRACE(0x10d96780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96780 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96781 mov ebp, esp */
  EBP = (ESP);
  /* 10d96783 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d9678b jmp 0x10d96796 */
  goto L_10d96796;
L_10d9678d:;
  /* 10d9678d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96793 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d96796:;
  /* 10d96796 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9679a jge 0x10d967e9 */
  if ((C.sf==C.of)) goto L_10d967e9;
  /* 10d9679c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9679f cmp dword ptr [ecx*4 + 0x10dbcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10dbcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d967a7 je 0x10d967e7 */
  if (C.zf) goto L_10d967e7;
  /* 10d967a9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d967ad je 0x10d967e7 */
  if (C.zf) goto L_10d967e7;
  /* 10d967af cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d967b3 je 0x10d967e7 */
  if (C.zf) goto L_10d967e7;
  /* 10d967b5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d967b9 je 0x10d967e7 */
  if (C.zf) goto L_10d967e7;
  /* 10d967bb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d967bf je 0x10d967e7 */
  if (C.zf) goto L_10d967e7;
  /* 10d967c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d967c4 mov eax, dword ptr [edx*4 + 0x10dbcb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10dbcb40)));
  /* 10d967cb push eax */
  push32((uint32_t)(EAX));
  /* 10d967cc call dword ptr [0x10dc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e4))), 0x10d967d2u);
  /* 10d967d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d967d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d967d7 mov edx, dword ptr [ecx*4 + 0x10dbcb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10dbcb40)));
  /* 10d967de push edx */
  push32((uint32_t)(EDX));
  /* 10d967df call 0x10d938b0 */
  push32(0x10d967e4u); f_10d938b0();
  /* 10d967e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d967e7:;
  /* 10d967e7 jmp 0x10d9678d */
  goto L_10d9678d;
L_10d967e9:;
  /* 10d967e9 mov eax, dword ptr [0x10dbcb64] */
  EAX = (r32((uint32_t)(0x10dbcb64)));
  /* 10d967ee push eax */
  push32((uint32_t)(EAX));
  /* 10d967ef call dword ptr [0x10dc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e4))), 0x10d967f5u);
  /* 10d967f5 mov ecx, dword ptr [0x10dbcb74] */
  ECX = (r32((uint32_t)(0x10dbcb74)));
  /* 10d967fb push ecx */
  push32((uint32_t)(ECX));
  /* 10d967fc call dword ptr [0x10dc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e4))), 0x10d96802u);
  /* 10d96802 mov edx, dword ptr [0x10dbcb84] */
  EDX = (r32((uint32_t)(0x10dbcb84)));
  /* 10d96808 push edx */
  push32((uint32_t)(EDX));
  /* 10d96809 call dword ptr [0x10dc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e4))), 0x10d9680fu);
  /* 10d9680f mov eax, dword ptr [0x10dbcb44] */
  EAX = (r32((uint32_t)(0x10dbcb44)));
  /* 10d96814 push eax */
  push32((uint32_t)(EAX));
  /* 10d96815 call dword ptr [0x10dc02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02e4))), 0x10d9681bu);
  /* 10d9681b mov esp, ebp */
  ESP = (EBP);
  /* 10d9681d pop ebp */
  EBP = (pop32());
  /* 10d9681e ret  */
  ESPCHK(0x10d96780u, _esp0);
  ESP += 4; return;
}

/* FUN_10006820 @ 0x10d96820 (151 bytes, 46 insns) */
void f_10d96820(void) {
  FTRACE(0x10d96820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96820 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96821 mov ebp, esp */
  EBP = (ESP);
  /* 10d96823 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96824 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96827 cmp dword ptr [eax*4 + 0x10dbcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10dbcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9682f jne 0x10d968a2 */
  if (!C.zf) goto L_10d968a2;
  /* 10d96831 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10d96836 push 0x10db9eac */
  push32((uint32_t)(0x10db9eacu));
  /* 10d9683b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9683d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10d9683f call 0x10d92e20 */
  push32(0x10d96844u); f_10d92e20();
  /* 10d96844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96847 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d9684a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9684e jne 0x10d9685a */
  if (!C.zf) goto L_10d9685a;
  /* 10d96850 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d96852 call 0x10d91d90 */
  push32(0x10d96857u); f_10d91d90();
  /* 10d96857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d9685a:;
  /* 10d9685a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d9685c call 0x10d96820 */
  push32(0x10d96861u); f_10d96820();
  /* 10d96861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96867 cmp dword ptr [ecx*4 + 0x10dbcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10dbcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d9686f jne 0x10d9688a */
  if (!C.zf) goto L_10d9688a;
  /* 10d96871 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96874 push edx */
  push32((uint32_t)(EDX));
  /* 10d96875 call dword ptr [0x10dc031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc031c))), 0x10d9687bu);
  /* 10d9687b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d9687e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96881 mov dword ptr [eax*4 + 0x10dbcb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10dbcb40), (ECX));
  /* 10d96888 jmp 0x10d96898 */
  goto L_10d96898;
L_10d9688a:;
  /* 10d9688a push 2 */
  push32((uint32_t)(0x2u));
  /* 10d9688c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d9688f push edx */
  push32((uint32_t)(EDX));
  /* 10d96890 call 0x10d938b0 */
  push32(0x10d96895u); f_10d938b0();
  /* 10d96895 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d96898:;
  /* 10d96898 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d9689a call 0x10d968c0 */
  push32(0x10d9689fu); f_10d968c0();
  /* 10d9689f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d968a2:;
  /* 10d968a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d968a5 mov ecx, dword ptr [eax*4 + 0x10dbcb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dbcb40)));
  /* 10d968ac push ecx */
  push32((uint32_t)(ECX));
  /* 10d968ad call dword ptr [0x10dc0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0320))), 0x10d968b3u);
  /* 10d968b3 mov esp, ebp */
  ESP = (EBP);
  /* 10d968b5 pop ebp */
  EBP = (pop32());
  /* 10d968b6 ret  */
  ESPCHK(0x10d96820u, _esp0);
  ESP += 4; return;
}

/* FUN_100068c0 @ 0x10d968c0 (22 bytes, 8 insns) */
void f_10d968c0(void) {
  FTRACE(0x10d968c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d968c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d968c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d968c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d968c6 mov ecx, dword ptr [eax*4 + 0x10dbcb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10dbcb40)));
  /* 10d968cd push ecx */
  push32((uint32_t)(ECX));
  /* 10d968ce call dword ptr [0x10dc0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0324))), 0x10d968d4u);
  /* 10d968d4 pop ebp */
  EBP = (pop32());
  /* 10d968d5 ret  */
  ESPCHK(0x10d968c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x10d968e0 (26 bytes, 10 insns) */
void f_10d968e0(void) {
  FTRACE(0x10d968e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d968e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d968e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d968e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d968e6 push eax */
  push32((uint32_t)(EAX));
  /* 10d968e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d968e9 call dword ptr [0x10dc0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0328))), 0x10d968efu);
  /* 10d968ef push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d968f4 call dword ptr [0x10dc02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc02ac))), 0x10d968fau);
  /* 10d968fa pop ebp */
  EBP = (pop32());
  /* 10d968fb ret  */
  ESPCHK(0x10d968e0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10d96900 (446 bytes, 130 insns) */
void f_10d96900(void) {
  FTRACE(0x10d96900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96900 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96901 mov ebp, esp */
  EBP = (ESP);
  /* 10d96903 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d96906 call 0x10d92860 */
  push32(0x10d9690bu); f_10d92860();
  /* 10d9690b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d9690e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96911 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10d96914 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96918 push edx */
  push32((uint32_t)(EDX));
  /* 10d96919 call 0x10d96ac0 */
  push32(0x10d9691eu); f_10d96ac0();
  /* 10d9691e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96921 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d96924 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96928 je 0x10d96933 */
  if (C.zf) goto L_10d96933;
  /* 10d9692a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9692d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96931 jne 0x10d96942 */
  if (!C.zf) goto L_10d96942;
L_10d96933:;
  /* 10d96933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96936 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96937 call dword ptr [0x10dc032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc032c))), 0x10d9693du);
  /* 10d9693d jmp 0x10d96aba */
  goto L_10d96aba;
L_10d96942:;
  /* 10d96942 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96945 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96949 jne 0x10d9695f */
  if (!C.zf) goto L_10d9695f;
  /* 10d9694b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9694e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d96955 mov eax, 1 */
  EAX = (0x1u);
  /* 10d9695a jmp 0x10d96aba */
  goto L_10d96aba;
L_10d9695f:;
  /* 10d9695f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96962 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96966 jne 0x10d96970 */
  if (!C.zf) goto L_10d96970;
  /* 10d96968 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d9696b jmp 0x10d96aba */
  goto L_10d96aba;
L_10d96970:;
  /* 10d96970 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96973 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d96976 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d96979 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d9697c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10d9697f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d96982 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96985 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96988 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10d9698b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d9698e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96992 jne 0x10d96a97 */
  if (!C.zf) goto L_10d96a97;
  /* 10d96998 mov eax, dword ptr [0x10dbcc78] */
  EAX = (r32((uint32_t)(0x10dbcc78)));
  /* 10d9699d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d969a0 jmp 0x10d969ab */
  goto L_10d969ab;
L_10d969a2:;
  /* 10d969a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d969a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d969a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d969ab:;
  /* 10d969ab mov edx, dword ptr [0x10dbcc78] */
  EDX = (r32((uint32_t)(0x10dbcc78)));
  /* 10d969b1 add edx, dword ptr [0x10dbcc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10dbcc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d969b7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d969ba jge 0x10d969d2 */
  if ((C.sf==C.of)) goto L_10d969d2;
  /* 10d969bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d969bf imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d969c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d969c5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d969c8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10d969d0 jmp 0x10d969a2 */
  goto L_10d969a2;
L_10d969d2:;
  /* 10d969d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d969d5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10d969d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d969db mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d969de cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d969e4 jne 0x10d969f5 */
  if (!C.zf) goto L_10d969f5;
  /* 10d969e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d969e9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10d969f0 jmp 0x10d96a7d */
  goto L_10d96a7d;
L_10d969f5:;
  /* 10d969f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d969f8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d969fe jne 0x10d96a0c */
  if (!C.zf) goto L_10d96a0c;
  /* 10d96a00 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96a03 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10d96a0a jmp 0x10d96a7d */
  goto L_10d96a7d;
L_10d96a0c:;
  /* 10d96a0c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96a0f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96a15 jne 0x10d96a23 */
  if (!C.zf) goto L_10d96a23;
  /* 10d96a17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96a1a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10d96a21 jmp 0x10d96a7d */
  goto L_10d96a7d;
L_10d96a23:;
  /* 10d96a23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96a26 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96a2c jne 0x10d96a3a */
  if (!C.zf) goto L_10d96a3a;
  /* 10d96a2e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96a31 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10d96a38 jmp 0x10d96a7d */
  goto L_10d96a7d;
L_10d96a3a:;
  /* 10d96a3a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96a3d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96a43 jne 0x10d96a51 */
  if (!C.zf) goto L_10d96a51;
  /* 10d96a45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96a48 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10d96a4f jmp 0x10d96a7d */
  goto L_10d96a7d;
L_10d96a51:;
  /* 10d96a51 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96a54 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96a5a jne 0x10d96a68 */
  if (!C.zf) goto L_10d96a68;
  /* 10d96a5c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96a5f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10d96a66 jmp 0x10d96a7d */
  goto L_10d96a7d;
L_10d96a68:;
  /* 10d96a68 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96a6b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96a71 jne 0x10d96a7d */
  if (!C.zf) goto L_10d96a7d;
  /* 10d96a73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96a76 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10d96a7d:;
  /* 10d96a7d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96a80 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10d96a83 push edx */
  push32((uint32_t)(EDX));
  /* 10d96a84 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d96a86 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d96a89u);
  /* 10d96a89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96a8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d96a92 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10d96a95 jmp 0x10d96aae */
  goto L_10d96aae;
L_10d96a97:;
  /* 10d96a97 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96a9a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d96aa1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96aa4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d96aa7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96aa8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d96aabu);
  /* 10d96aab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d96aae:;
  /* 10d96aae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96ab1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d96ab4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10d96ab7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d96aba:;
  /* 10d96aba mov esp, ebp */
  ESP = (EBP);
  /* 10d96abc pop ebp */
  EBP = (pop32());
  /* 10d96abd ret  */
  ESPCHK(0x10d96900u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x10d96ac0 (89 bytes, 35 insns) */
void f_10d96ac0(void) {
  FTRACE(0x10d96ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10d96ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96ac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96ac7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d96aca:;
  /* 10d96aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96acd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d96acf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96ad2 je 0x10d96af2 */
  if (C.zf) goto L_10d96af2;
  /* 10d96ad4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96ad7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96ada mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d96add mov ecx, dword ptr [0x10dbcc84] */
  ECX = (r32((uint32_t)(0x10dbcc84)));
  /* 10d96ae3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d96ae6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96ae9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96aeb cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96aee jae 0x10d96af2 */
  if (!C.cf) goto L_10d96af2;
  /* 10d96af0 jmp 0x10d96aca */
  goto L_10d96aca;
L_10d96af2:;
  /* 10d96af2 mov eax, dword ptr [0x10dbcc84] */
  EAX = (r32((uint32_t)(0x10dbcc84)));
  /* 10d96af7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d96afa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96afd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96aff cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96b02 jae 0x10d96b0e */
  if (!C.cf) goto L_10d96b0e;
  /* 10d96b04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96b07 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d96b09 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96b0c je 0x10d96b12 */
  if (C.zf) goto L_10d96b12;
L_10d96b0e:;
  /* 10d96b0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96b10 jmp 0x10d96b15 */
  goto L_10d96b15;
L_10d96b12:;
  /* 10d96b12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d96b15:;
  /* 10d96b15 mov esp, ebp */
  ESP = (EBP);
  /* 10d96b17 pop ebp */
  EBP = (pop32());
  /* 10d96b18 ret  */
  ESPCHK(0x10d96ac0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10d96b20 (48 bytes, 17 insns) */
void f_10d96b20(void) {
  FTRACE(0x10d96b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96b21 mov ebp, esp */
  EBP = (ESP);
  /* 10d96b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96b24 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96b26 call 0x10d96820 */
  push32(0x10d96b2bu); f_10d96820();
  /* 10d96b2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96b2e mov eax, dword ptr [0x10dbe67c] */
  EAX = (r32((uint32_t)(0x10dbe67c)));
  /* 10d96b33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d96b36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96b39 mov dword ptr [0x10dbe67c], ecx */
  w32((uint32_t)(0x10dbe67c), (ECX));
  /* 10d96b3f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96b41 call 0x10d968c0 */
  push32(0x10d96b46u); f_10d968c0();
  /* 10d96b46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96b4c mov esp, ebp */
  ESP = (EBP);
  /* 10d96b4e pop ebp */
  EBP = (pop32());
  /* 10d96b4f ret  */
  ESPCHK(0x10d96b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x10d96b50 (10 bytes, 5 insns) */
void f_10d96b50(void) {
  FTRACE(0x10d96b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96b51 mov ebp, esp */
  EBP = (ESP);
  /* 10d96b53 mov eax, dword ptr [0x10dbe67c] */
  EAX = (r32((uint32_t)(0x10dbe67c)));
  /* 10d96b58 pop ebp */
  EBP = (pop32());
  /* 10d96b59 ret  */
  ESPCHK(0x10d96b50u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10d96b60 (45 bytes, 19 insns) */
void f_10d96b60(void) {
  FTRACE(0x10d96b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96b61 mov ebp, esp */
  EBP = (ESP);
  /* 10d96b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96b64 mov eax, dword ptr [0x10dbe67c] */
  EAX = (r32((uint32_t)(0x10dbe67c)));
  /* 10d96b69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d96b6c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96b70 je 0x10d96b80 */
  if (C.zf) goto L_10d96b80;
  /* 10d96b72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96b75 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96b76 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d96b79u);
  /* 10d96b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96b7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d96b7e jne 0x10d96b84 */
  if (!C.zf) goto L_10d96b84;
L_10d96b80:;
  /* 10d96b80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96b82 jmp 0x10d96b89 */
  goto L_10d96b89;
L_10d96b84:;
  /* 10d96b84 mov eax, 1 */
  EAX = (0x1u);
L_10d96b89:;
  /* 10d96b89 mov esp, ebp */
  ESP = (EBP);
  /* 10d96b8b pop ebp */
  EBP = (pop32());
  /* 10d96b8c ret  */
  ESPCHK(0x10d96b60u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10d96b90 (88 bytes, 40 insns) */
void f_10d96b90(void) {
  FTRACE(0x10d96b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96b90 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d96b94 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d96b98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d96b9a je 0x10d96be3 */
  if (C.zf) goto L_10d96be3;
  /* 10d96b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96b9e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10d96ba2 push edi */
  push32((uint32_t)(EDI));
  /* 10d96ba3 mov edi, ecx */
  EDI = (ECX);
  /* 10d96ba5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96ba8 jb 0x10d96bd7 */
  if (C.cf) goto L_10d96bd7;
  /* 10d96baa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d96bac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10d96baf je 0x10d96bb9 */
  if (C.zf) goto L_10d96bb9;
  /* 10d96bb1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d96bb3:;
  /* 10d96bb3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d96bb5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d96bb6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d96bb7 jne 0x10d96bb3 */
  if (!C.zf) goto L_10d96bb3;
L_10d96bb9:;
  /* 10d96bb9 mov ecx, eax */
  ECX = (EAX);
  /* 10d96bbb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10d96bbe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96bc0 mov ecx, eax */
  ECX = (EAX);
  /* 10d96bc2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d96bc5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96bc7 mov ecx, edx */
  ECX = (EDX);
  /* 10d96bc9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d96bcc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d96bcf je 0x10d96bd7 */
  if (C.zf) goto L_10d96bd7;
  /* 10d96bd1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d96bd3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d96bd5 je 0x10d96bdd */
  if (C.zf) goto L_10d96bdd;
L_10d96bd7:;
  /* 10d96bd7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d96bd9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d96bda dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10d96bdb jne 0x10d96bd7 */
  if (!C.zf) goto L_10d96bd7;
L_10d96bdd:;
  /* 10d96bdd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d96be1 pop edi */
  EDI = (pop32());
  /* 10d96be2 ret  */
  ESPCHK(0x10d96b90u, _esp0);
  ESP += 4; return;
L_10d96be3:;
  /* 10d96be3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d96be7 ret  */
  ESPCHK(0x10d96b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x10d96bf0 (23 bytes, 10 insns) */
void f_10d96bf0(void) {
  FTRACE(0x10d96bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10d96bf3 mov eax, dword ptr [0x10dbe678] */
  EAX = (r32((uint32_t)(0x10dbe678)));
  /* 10d96bf8 push eax */
  push32((uint32_t)(EAX));
  /* 10d96bf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96bfc push ecx */
  push32((uint32_t)(ECX));
  /* 10d96bfd call 0x10d96c10 */
  push32(0x10d96c02u); f_10d96c10();
  /* 10d96c02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96c05 pop ebp */
  EBP = (pop32());
  /* 10d96c06 ret  */
  ESPCHK(0x10d96bf0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10d96c10 (87 bytes, 34 insns) */
void f_10d96c10(void) {
  FTRACE(0x10d96c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96c11 mov ebp, esp */
  EBP = (ESP);
  /* 10d96c13 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96c14 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96c18 jbe 0x10d96c1e */
  if ((C.cf||C.zf)) goto L_10d96c1e;
  /* 10d96c1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96c1c jmp 0x10d96c63 */
  goto L_10d96c63;
L_10d96c1e:;
  /* 10d96c1e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96c22 ja 0x10d96c35 */
  if ((!C.cf&&!C.zf)) goto L_10d96c35;
  /* 10d96c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96c27 push eax */
  push32((uint32_t)(EAX));
  /* 10d96c28 call 0x10d96c70 */
  push32(0x10d96c2du); f_10d96c70();
  /* 10d96c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96c30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d96c33 jmp 0x10d96c3c */
  goto L_10d96c3c;
L_10d96c35:;
  /* 10d96c35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d96c3c:;
  /* 10d96c3c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96c40 jne 0x10d96c48 */
  if (!C.zf) goto L_10d96c48;
  /* 10d96c42 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96c46 jne 0x10d96c4d */
  if (!C.zf) goto L_10d96c4d;
L_10d96c48:;
  /* 10d96c48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96c4b jmp 0x10d96c63 */
  goto L_10d96c63;
L_10d96c4d:;
  /* 10d96c4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96c50 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96c51 call 0x10d96b60 */
  push32(0x10d96c56u); f_10d96b60();
  /* 10d96c56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96c59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d96c5b jne 0x10d96c61 */
  if (!C.zf) goto L_10d96c61;
  /* 10d96c5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96c5f jmp 0x10d96c63 */
  goto L_10d96c63;
L_10d96c61:;
  /* 10d96c61 jmp 0x10d96c1e */
  goto L_10d96c1e;
L_10d96c63:;
  /* 10d96c63 mov esp, ebp */
  ESP = (EBP);
  /* 10d96c65 pop ebp */
  EBP = (pop32());
  /* 10d96c66 ret  */
  ESPCHK(0x10d96c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x10d96c70 (109 bytes, 37 insns) */
void f_10d96c70(void) {
  FTRACE(0x10d96c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96c71 mov ebp, esp */
  EBP = (ESP);
  /* 10d96c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96c77 cmp eax, dword ptr [0x10dbcc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96c7d ja 0x10d96cad */
  if ((!C.cf&&!C.zf)) goto L_10d96cad;
  /* 10d96c7f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96c81 call 0x10d96820 */
  push32(0x10d96c86u); f_10d96820();
  /* 10d96c86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96c89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96c8c push ecx */
  push32((uint32_t)(ECX));
  /* 10d96c8d call 0x10d977b0 */
  push32(0x10d96c92u); f_10d977b0();
  /* 10d96c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96c95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d96c98 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96c9a call 0x10d968c0 */
  push32(0x10d96c9fu); f_10d968c0();
  /* 10d96c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96ca2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96ca6 je 0x10d96cad */
  if (C.zf) goto L_10d96cad;
  /* 10d96ca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96cab jmp 0x10d96cd9 */
  goto L_10d96cd9;
L_10d96cad:;
  /* 10d96cad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96cb1 jne 0x10d96cba */
  if (!C.zf) goto L_10d96cba;
  /* 10d96cb3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10d96cba:;
  /* 10d96cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96cbd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96cc0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d96cc3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d96cc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10d96cca push 0 */
  push32((uint32_t)(0x0u));
  /* 10d96ccc mov ecx, dword ptr [0x10dbfe2c] */
  ECX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d96cd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96cd3 call dword ptr [0x10dc0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0330))), 0x10d96cd9u);
L_10d96cd9:;
  /* 10d96cd9 mov esp, ebp */
  ESP = (EBP);
  /* 10d96cdb pop ebp */
  EBP = (pop32());
  /* 10d96cdc ret  */
  ESPCHK(0x10d96c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x10d96ce0 (10 bytes, 5 insns) */
void f_10d96ce0(void) {
  FTRACE(0x10d96ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96ce1 mov ebp, esp */
  EBP = (ESP);
  /* 10d96ce3 mov eax, 1 */
  EAX = (0x1u);
  /* 10d96ce8 pop ebp */
  EBP = (pop32());
  /* 10d96ce9 ret  */
  ESPCHK(0x10d96ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cf0 @ 0x10d96cf0 (173 bytes, 59 insns) */
void f_10d96cf0(void) {
  FTRACE(0x10d96cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10d96cf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d96cf6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96cfa jbe 0x10d96d03 */
  if ((C.cf||C.zf)) goto L_10d96d03;
  /* 10d96cfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96cfe jmp 0x10d96d99 */
  goto L_10d96d99;
L_10d96d03:;
  /* 10d96d03 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96d05 call 0x10d96820 */
  push32(0x10d96d0au); f_10d96820();
  /* 10d96d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96d10 push eax */
  push32((uint32_t)(EAX));
  /* 10d96d11 call 0x10d97120 */
  push32(0x10d96d16u); f_10d97120();
  /* 10d96d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96d19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d96d1c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96d20 je 0x10d96d61 */
  if (C.zf) goto L_10d96d61;
  /* 10d96d22 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d96d29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96d2c cmp ecx, dword ptr [0x10dbcc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10dbcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96d32 ja 0x10d96d52 */
  if ((!C.cf&&!C.zf)) goto L_10d96d52;
  /* 10d96d34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96d37 push edx */
  push32((uint32_t)(EDX));
  /* 10d96d38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96d3b push eax */
  push32((uint32_t)(EAX));
  /* 10d96d3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96d3f push ecx */
  push32((uint32_t)(ECX));
  /* 10d96d40 call 0x10d97ff0 */
  push32(0x10d96d45u); f_10d97ff0();
  /* 10d96d45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d96d4a je 0x10d96d52 */
  if (C.zf) goto L_10d96d52;
  /* 10d96d4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96d4f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d96d52:;
  /* 10d96d52 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96d54 call 0x10d968c0 */
  push32(0x10d96d59u); f_10d968c0();
  /* 10d96d59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96d5f jmp 0x10d96d99 */
  goto L_10d96d99;
L_10d96d61:;
  /* 10d96d61 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96d63 call 0x10d968c0 */
  push32(0x10d96d68u); f_10d968c0();
  /* 10d96d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96d6b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96d6f jne 0x10d96d78 */
  if (!C.zf) goto L_10d96d78;
  /* 10d96d71 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d96d78:;
  /* 10d96d78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96d7b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96d7e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10d96d80 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d96d83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96d86 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96d87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96d8a push edx */
  push32((uint32_t)(EDX));
  /* 10d96d8b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d96d8d mov eax, dword ptr [0x10dbfe2c] */
  EAX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d96d92 push eax */
  push32((uint32_t)(EAX));
  /* 10d96d93 call dword ptr [0x10dc0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0334))), 0x10d96d99u);
L_10d96d99:;
  /* 10d96d99 mov esp, ebp */
  ESP = (EBP);
  /* 10d96d9b pop ebp */
  EBP = (pop32());
  /* 10d96d9c ret  */
  ESPCHK(0x10d96cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x10d96da0 (490 bytes, 165 insns) */
void f_10d96da0(void) {
  FTRACE(0x10d96da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96da1 mov ebp, esp */
  EBP = (ESP);
  /* 10d96da3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d96da6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96daa jne 0x10d96dbd */
  if (!C.zf) goto L_10d96dbd;
  /* 10d96dac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96daf push eax */
  push32((uint32_t)(EAX));
  /* 10d96db0 call 0x10d96bf0 */
  push32(0x10d96db5u); f_10d96bf0();
  /* 10d96db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96db8 jmp 0x10d96f86 */
  goto L_10d96f86;
L_10d96dbd:;
  /* 10d96dbd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96dc1 jne 0x10d96dd6 */
  if (!C.zf) goto L_10d96dd6;
  /* 10d96dc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96dc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96dc7 call 0x10d96f90 */
  push32(0x10d96dccu); f_10d96f90();
  /* 10d96dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96dd1 jmp 0x10d96f86 */
  goto L_10d96f86;
L_10d96dd6:;
  /* 10d96dd6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d96ddd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96de1 ja 0x10d96f59 */
  if ((!C.cf&&!C.zf)) goto L_10d96f59;
  /* 10d96de7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96de9 call 0x10d96820 */
  push32(0x10d96deeu); f_10d96820();
  /* 10d96dee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96df1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96df4 push edx */
  push32((uint32_t)(EDX));
  /* 10d96df5 call 0x10d97120 */
  push32(0x10d96dfau); f_10d97120();
  /* 10d96dfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96dfd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d96e00 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96e04 je 0x10d96f1c */
  if (C.zf) goto L_10d96f1c;
  /* 10d96e0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96e0d cmp eax, dword ptr [0x10dbcc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10dbcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96e13 ja 0x10d96e90 */
  if ((!C.cf&&!C.zf)) goto L_10d96e90;
  /* 10d96e15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96e18 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96e1c push edx */
  push32((uint32_t)(EDX));
  /* 10d96e1d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d96e20 push eax */
  push32((uint32_t)(EAX));
  /* 10d96e21 call 0x10d97ff0 */
  push32(0x10d96e26u); f_10d97ff0();
  /* 10d96e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96e29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d96e2b je 0x10d96e35 */
  if (C.zf) goto L_10d96e35;
  /* 10d96e2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96e30 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d96e33 jmp 0x10d96e90 */
  goto L_10d96e90;
L_10d96e35:;
  /* 10d96e35 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96e38 push edx */
  push32((uint32_t)(EDX));
  /* 10d96e39 call 0x10d977b0 */
  push32(0x10d96e3eu); f_10d977b0();
  /* 10d96e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96e41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d96e44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96e48 je 0x10d96e90 */
  if (C.zf) goto L_10d96e90;
  /* 10d96e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96e4d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10d96e50 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d96e53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d96e56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96e59 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96e5c jae 0x10d96e66 */
  if (!C.cf) goto L_10d96e66;
  /* 10d96e5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96e61 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d96e64 jmp 0x10d96e6c */
  goto L_10d96e6c;
L_10d96e66:;
  /* 10d96e66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96e69 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d96e6c:;
  /* 10d96e6c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d96e6f push edx */
  push32((uint32_t)(EDX));
  /* 10d96e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96e73 push eax */
  push32((uint32_t)(EAX));
  /* 10d96e74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96e77 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96e78 call 0x10d99700 */
  push32(0x10d96e7du); f_10d99700();
  /* 10d96e7d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96e80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96e83 push edx */
  push32((uint32_t)(EDX));
  /* 10d96e84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d96e87 push eax */
  push32((uint32_t)(EAX));
  /* 10d96e88 call 0x10d971e0 */
  push32(0x10d96e8du); f_10d971e0();
  /* 10d96e8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d96e90:;
  /* 10d96e90 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96e94 jne 0x10d96f10 */
  if (!C.zf) goto L_10d96f10;
  /* 10d96e96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96e9a jne 0x10d96ea3 */
  if (!C.zf) goto L_10d96ea3;
  /* 10d96e9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d96ea3:;
  /* 10d96ea3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96ea6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96ea9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10d96eac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d96eaf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96eb2 push edx */
  push32((uint32_t)(EDX));
  /* 10d96eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d96eb5 mov eax, dword ptr [0x10dbfe2c] */
  EAX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d96eba push eax */
  push32((uint32_t)(EAX));
  /* 10d96ebb call dword ptr [0x10dc0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0330))), 0x10d96ec1u);
  /* 10d96ec1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d96ec4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96ec8 je 0x10d96f10 */
  if (C.zf) goto L_10d96f10;
  /* 10d96eca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96ecd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d96ed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d96ed3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d96ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96ed9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96edc jae 0x10d96ee6 */
  if (!C.cf) goto L_10d96ee6;
  /* 10d96ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96ee1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d96ee4 jmp 0x10d96eec */
  goto L_10d96eec;
L_10d96ee6:;
  /* 10d96ee6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96ee9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d96eec:;
  /* 10d96eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d96eef push eax */
  push32((uint32_t)(EAX));
  /* 10d96ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96ef4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96ef7 push edx */
  push32((uint32_t)(EDX));
  /* 10d96ef8 call 0x10d99700 */
  push32(0x10d96efdu); f_10d99700();
  /* 10d96efd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96f00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96f03 push eax */
  push32((uint32_t)(EAX));
  /* 10d96f04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d96f07 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96f08 call 0x10d971e0 */
  push32(0x10d96f0du); f_10d971e0();
  /* 10d96f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d96f10:;
  /* 10d96f10 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96f12 call 0x10d968c0 */
  push32(0x10d96f17u); f_10d968c0();
  /* 10d96f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96f1a jmp 0x10d96f59 */
  goto L_10d96f59;
L_10d96f1c:;
  /* 10d96f1c push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96f1e call 0x10d968c0 */
  push32(0x10d96f23u); f_10d968c0();
  /* 10d96f23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96f26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96f2a jne 0x10d96f33 */
  if (!C.zf) goto L_10d96f33;
  /* 10d96f2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d96f33:;
  /* 10d96f33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96f36 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96f39 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d96f3c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10d96f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96f42 push eax */
  push32((uint32_t)(EAX));
  /* 10d96f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96f46 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d96f49 mov edx, dword ptr [0x10dbfe2c] */
  EDX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d96f4f push edx */
  push32((uint32_t)(EDX));
  /* 10d96f50 call dword ptr [0x10dc0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0334))), 0x10d96f56u);
  /* 10d96f56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d96f59:;
  /* 10d96f59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96f5d jne 0x10d96f68 */
  if (!C.zf) goto L_10d96f68;
  /* 10d96f5f cmp dword ptr [0x10dbe678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10dbe678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96f66 jne 0x10d96f6d */
  if (!C.zf) goto L_10d96f6d;
L_10d96f68:;
  /* 10d96f68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d96f6b jmp 0x10d96f86 */
  goto L_10d96f86;
L_10d96f6d:;
  /* 10d96f6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d96f70 push eax */
  push32((uint32_t)(EAX));
  /* 10d96f71 call 0x10d96b60 */
  push32(0x10d96f76u); f_10d96b60();
  /* 10d96f76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96f79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d96f7b jne 0x10d96f81 */
  if (!C.zf) goto L_10d96f81;
  /* 10d96f7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d96f7f jmp 0x10d96f86 */
  goto L_10d96f86;
L_10d96f81:;
  /* 10d96f81 jmp 0x10d96dd6 */
  goto L_10d96dd6;
L_10d96f86:;
  /* 10d96f86 mov esp, ebp */
  ESP = (EBP);
  /* 10d96f88 pop ebp */
  EBP = (pop32());
  /* 10d96f89 ret  */
  ESPCHK(0x10d96da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f90 @ 0x10d96f90 (104 bytes, 38 insns) */
void f_10d96f90(void) {
  FTRACE(0x10d96f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d96f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d96f91 mov ebp, esp */
  EBP = (ESP);
  /* 10d96f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d96f94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96f98 jne 0x10d96f9c */
  if (!C.zf) goto L_10d96f9c;
  /* 10d96f9a jmp 0x10d96ff4 */
  goto L_10d96ff4;
L_10d96f9c:;
  /* 10d96f9c push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96f9e call 0x10d96820 */
  push32(0x10d96fa3u); f_10d96820();
  /* 10d96fa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96fa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96fa9 push eax */
  push32((uint32_t)(EAX));
  /* 10d96faa call 0x10d97120 */
  push32(0x10d96fafu); f_10d97120();
  /* 10d96faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96fb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d96fb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d96fb9 je 0x10d96fd7 */
  if (C.zf) goto L_10d96fd7;
  /* 10d96fbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96fbe push ecx */
  push32((uint32_t)(ECX));
  /* 10d96fbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d96fc2 push edx */
  push32((uint32_t)(EDX));
  /* 10d96fc3 call 0x10d971e0 */
  push32(0x10d96fc8u); f_10d971e0();
  /* 10d96fc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96fcb push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96fcd call 0x10d968c0 */
  push32(0x10d96fd2u); f_10d968c0();
  /* 10d96fd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96fd5 jmp 0x10d96ff4 */
  goto L_10d96ff4;
L_10d96fd7:;
  /* 10d96fd7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d96fd9 call 0x10d968c0 */
  push32(0x10d96fdeu); f_10d968c0();
  /* 10d96fde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d96fe1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d96fe4 push eax */
  push32((uint32_t)(EAX));
  /* 10d96fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d96fe7 mov ecx, dword ptr [0x10dbfe2c] */
  ECX = (r32((uint32_t)(0x10dbfe2c)));
  /* 10d96fed push ecx */
  push32((uint32_t)(ECX));
  /* 10d96fee call dword ptr [0x10dc0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10dc0310))), 0x10d96ff4u);
L_10d96ff4:;
  /* 10d96ff4 mov esp, ebp */
  ESP = (EBP);
  /* 10d96ff6 pop ebp */
  EBP = (pop32());
  /* 10d96ff7 ret  */
  ESPCHK(0x10d96f90u, _esp0);
  ESP += 4; return;
}

